//===- Ocelot.cpp - Example code from "Writing an LLVM Pass" ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements an Structural Transform based on Zhang's paper
//
//===----------------------------------------------------------------------===//

#include <ocelot/analysis/interface/StructuralTransform.h> 
#include <ocelot/analysis/interface/DataflowGraph.h>

namespace analysis {
  ir::ControlFlowGraph::iterator StructuralTransform::SplitBlockPredecessors(ir::ControlFlowGraph::iterator BB, BBVecTy::iterator iter, int size) {
    int i = 1;

    ir::ControlFlowGraph::edge_iterator firstEdge = (*iter)->get_edge(BB);
    ir::ControlFlowGraph::iterator NewBB = _kernel->cfg()->insert_block(ir::BasicBlock(BB->label + "_splitpredecessor",
            _kernel->cfg()->newId()));
    ir::ControlFlowGraph::EdgePair splitEdge = _kernel->cfg()->split_edge(firstEdge, *NewBB);
    splitEdge.second->type = ir::Edge::Dummy;
    splitEdge.first->type = ir::Edge::Dummy;

    ir::PTXInstruction* branch = new ir::PTXInstruction(ir::PTXInstruction::Bra);
    branch->uni = true;
    branch->d = std::move(ir::PTXOperand(BB->label));
    NewBB->instructions.push_back(branch);
    
    ++iter;

    while (i < size) {
     _kernel->cfg()->remove_edge((*iter)->get_edge(BB));
     _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(*iter, NewBB, ir::Edge::Dummy));
 
     ir::PTXInstruction *bra = static_cast<ir::PTXInstruction *>((*iter)->instructions.back());

      if (bra->opcode == ir::PTXInstruction::Bra && bra->d.identifier == BB->label) 
        bra->d = std::move(ir::PTXOperand(NewBB->label));

      ++i;
      ++iter;
    }
 
    return NewBB;
  }
 
  // Algorithm 2 of Zhang's paper -- elimination of outgoing branches
  bool StructuralTransform::Cut(NodeTy *N) {
    bool change = false; 
  
    for (NodeSetTy::iterator i = N->childNode.begin(), e = N->childNode.end(); i != e; ++i) 
      change |= Cut(*i);

    if (!stopCut) {
      if (N->isCombined && (N->nodeType == NaturalLoop || N->nodeType == SelfLoop) && N->containedBB.size() > 1 && N->outgoingBR.size() > 0) {
        change = true;
    
        ir::ControlFlowGraph::iterator TopExitBB = N->exitBB;
  
        for (EdgeVecTy::iterator i = N->outgoingBR.begin(), e = N->outgoingBR.end(); i != e; ++i) {
          // 1. Before loop, insert fp = false
          DataflowGraph::RegisterId fp = _kernel->dfg()->newRegister();  
  
          ir::PTXInstruction* move1 = new ir::PTXInstruction(ir::PTXInstruction::Mov);
          move1->a = std::move(ir::PTXOperand(ir::PTXOperand::Immediate,
                  ir::PTXOperand::u32, 0x0));
          move1->a.imm_uint = 0;
          move1->d = std::move(ir::PTXOperand(ir::PTXOperand::Register,
                  ir::PTXOperand::u32, fp));
          move1->type = ir::PTXOperand::u32;
          ir::BasicBlock::InstructionList& ILEntry = _kernel->cfg()->get_entry_block()->instructions;
          ILEntry.push_front(move1); 
           
          // 2. replace branch to targe t by if (B) then {fp = true; exit}
          ir::PTXInstruction* move2 = new ir::PTXInstruction(ir::PTXInstruction::Mov);
          move2->a = std::move(ir::PTXOperand(ir::PTXOperand::Immediate,
                  ir::PTXOperand::u32, 0x1));
          move2->a.imm_uint = 1;
          move2->d = std::move(ir::PTXOperand(ir::PTXOperand::Register,
                  ir::PTXOperand::u32, fp));
          move2->type = ir::PTXOperand::u32;
          ir::ControlFlowGraph::InstructionList &ILBR = i->first->instructions;
          ILBR.push_front(move2);
  
          ir::ControlFlowGraph::BlockPointerVector SuccVec = i->first->successors;
    
          for (ir::ControlFlowGraph::BlockPointerVector::iterator SI = SuccVec.begin(), E = SuccVec.end(); SI != E; ++SI) {
            if (N->containedBB.count(*SI) == 0) continue;
  
            ir::PTXInstruction* move = new ir::PTXInstruction(ir::PTXInstruction::Mov);
            move->a = std::move(ir::PTXOperand(ir::PTXOperand::Immediate,
                    ir::PTXOperand::u32, 0x0));
            move->a.imm_uint = 0;
            move->d = std::move(ir::PTXOperand(ir::PTXOperand::Register,
                    ir::PTXOperand::u32, fp));
            move->type = ir::PTXOperand::u32;
            ir::BasicBlock::InstructionList& ILSucc = (*SI)->instructions;
            ILSucc.push_front(move); 
          }
    
          // 3. After loop, insert if (fp) goto t
          ir::ControlFlowGraph::iterator NewCmpBB = _kernel->cfg()->insert_block(ir::BasicBlock(i->first->label + "_cmp",
                    _kernel->cfg()->newId()));
   
          // ValueMap
          ValueToValueMapTy ValueMap;
          ValueMap[i->second] = NewCmpBB;    
  
          if (TopExitBB != _kernel->cfg()->end()) ValueMap[TopExitBB] = NewCmpBB;
  
          // For each BasicBlock
          // Remap Values here for Instructions
          for (BBSetTy::iterator BBI = N->containedBB.begin(), BBE = N->containedBB.end(); BBI != BBE; ++BBI) { 
            ir::ControlFlowGraph::iterator BB = *BBI;
            ir::BasicBlock::EdgePointerVector edges = BB->out_edges;
    
            if (edges.size() == 1) {
              ir::BasicBlock::EdgePointerVector::iterator ei = edges.begin();
              ValueToValueMapTy::iterator it = ValueMap.find((*ei)->tail);
    
              // found in ValueMap
              if (it != ValueMap.end()) {
                _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(BB, (*it).second, ir::Edge::Dummy));
    
                ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(BB->instructions.back());
    
                if (term->opcode == ir::PTXInstruction::Bra && term->d.identifier == (*ei)->tail->label)
                  term->d = std::move(ir::PTXOperand((*it).second->label));
  
                _kernel->cfg()->remove_edge(*ei);
              } 
            } else if (edges.size() == 2) {
              ir::BasicBlock::EdgePointerVector::iterator ei = edges.begin();
              ir::BasicBlock::EdgePointerVector::iterator ei1 = ei;
              ++ei;
              ir::BasicBlock::EdgePointerVector::iterator ei2 = ei;
    
              ValueToValueMapTy::iterator it1 = ValueMap.find((*ei1)->tail);
              ValueToValueMapTy::iterator it2 = ValueMap.find((*ei2)->tail);
    
              bool found1 = (it1 != ValueMap.end());
              bool found2 = (it2 != ValueMap.end());
    
              // both found in ValueMap
              if (found1 && found2) {
                _kernel->cfg()->remove_edge(*ei1);
                _kernel->cfg()->remove_edge(*ei2);
                _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(BB, (*it1).second, ir::Edge::Dummy)); 
   
                ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(BB->instructions.back());
    
                if (term->opcode == ir::PTXInstruction::Bra) {
                  term->d = std::move(ir::PTXOperand((*it1).second->label));
                  term->uni = true;
                }
              } 
              // edge 1 is found in ValueMap & edge 2 is not
              else if (found1 && !found2) {
                _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(BB, (*it1).second, (*ei1)->type));
    
                ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(BB->instructions.back());
    
                if (term->opcode == ir::PTXInstruction::Bra) {
                  if (term->d.identifier == (*ei1)->tail->label)
                    term->d = std::move(ir::PTXOperand((*it1).second->label));
                }
                
                _kernel->cfg()->remove_edge(*ei1);
              }
              // edge 2 is found in ValueMap & edge 1 is not
              else if (!found1 && found2) {
                _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(BB, (*it2).second, (*ei2)->type));
    
                ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(BB->instructions.back());
    
                if (term->opcode == ir::PTXInstruction::Bra) {
                  if (term->d.identifier == (*ei2)->tail->label)
                    term->d = std::move(ir::PTXOperand((*it2).second->label));
                }
                
                _kernel->cfg()->remove_edge(*ei2);
              }
            }
          }
   
          if (TopExitBB != _kernel->cfg()->end()) {
            ir::PTXInstruction* setp = new ir::PTXInstruction(ir::PTXInstruction::SetP);
            setp->a = std::move(ir::PTXOperand(ir::PTXOperand::Register,
                    ir::PTXOperand::u32, fp));
            setp->b = std::move(ir::PTXOperand(ir::PTXOperand::Immediate,
                    ir::PTXOperand::u32, 1));
            setp->b.imm_uint = 1;
            setp->d = std::move(ir::PTXOperand(ir::PTXOperand::Register,
                    ir::PTXOperand::u32, _kernel->dfg()->newRegister()));
            setp->d.type = ir::PTXOperand::pred;
            setp->type = ir::PTXOperand::u32;
            setp->comparisonOperator = ir::PTXInstruction::Eq;
            NewCmpBB->instructions.push_back(setp);
  
            ir::PTXInstruction* bra = new ir::PTXInstruction(ir::PTXInstruction::Bra);
            bra->d = std::move(ir::PTXOperand(i->second->label));
            bra->pg = setp->d;
            NewCmpBB->instructions.push_back(bra);
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(NewCmpBB, i->second, ir::Edge::Dummy));
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(NewCmpBB, TopExitBB, ir::Edge::Dummy));
          }
          else {
            ir::PTXInstruction* bra = new ir::PTXInstruction(ir::PTXInstruction::Bra);
            bra->d = std::move(ir::PTXOperand(i->second->label));
            bra->uni = true;
            NewCmpBB->instructions.push_back(bra);
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(NewCmpBB, i->second, ir::Edge::Dummy));
          }
   
   
          TopExitBB = NewCmpBB;
        }
    
        if (N->exitBB == _kernel->cfg()->end()) 
          _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(N->entryBB, TopExitBB, ir::Edge::Dummy)); 

        stopCut = true;
        return change;
      } 
    }
 
    return change;  
  }
  
  // Algorithm 3 of Zhang's paper -- elimination of backward branches
  bool StructuralTransform::BackwardCopy(NodeTy *N) {
    bool change = false; 
  
    for (NodeSetTy::iterator i = N->childNode.begin(), e = N->childNode.end(); i != e; ++i) 
      change |= BackwardCopy(*i);
    
    if (N->isCombined && (N->nodeType == NaturalLoop || N->nodeType == SelfLoop) && N->containedBB.size() > 1 && N->incomingBR.size() > 0) {
      change = true;

      std::vector<ir::ControlFlowGraph::iterator> EntryBlocks;
      ir::ControlFlowGraph::BlockPointerVector PredVec = N->entryBB->predecessors;

      for (ir::ControlFlowGraph::BlockPointerVector::iterator PI = PredVec.begin(), E = PredVec.end(); PI != E; ++PI) {
        if (N->containedBB.count(*PI) == 0)
          EntryBlocks.push_back(*PI);
      }
  
      // This function saves us from having correct PHI and updating analysis
      ir::ControlFlowGraph::iterator PreHeader = SplitBlockPredecessors(N->entryBB, EntryBlocks.begin(),
                                        EntryBlocks.size());
 
      // ValueMap
      ValueToValueMapTy ValueMap;
      BBSetTy clonedBBSet;
      ir::ControlFlowGraph::iterator clonedEntryBB;

      // Clone BasicBlocks to the new function
      for (BBSetTy::iterator BI = N->containedBB.begin(), BE = N->containedBB.end(); BI != BE; ++BI){
        ir::ControlFlowGraph::iterator BB = *BI;
        char tmp[20];
        sprintf(tmp, "_backward%d", index++);
        ir::ControlFlowGraph::iterator ClonedBB = _kernel->cfg()->clone_block(BB, tmp);
        ValueMap[BB] = ClonedBB;
        
        if (BB == N->entryBB) clonedEntryBB = ClonedBB;
      }
  
      // For each BasicBlock
      // Remap Values here for Instructions
      for (ValueToValueMapTy::iterator VMI = ValueMap.begin(), VME = ValueMap.end(); VMI != VME; ++VMI) { 
        std::pair<ir::ControlFlowGraph::iterator, ir::ControlFlowGraph::iterator> ValuePair = *VMI;
        ir::BasicBlock::EdgePointerVector edges = ValuePair.first->out_edges;

        if (edges.size() == 1) {
          ir::BasicBlock::EdgePointerVector::iterator ei = edges.begin();
          ValueToValueMapTy::iterator it = ValueMap.find((*ei)->tail);

          // found in ValueMap
          if (it != ValueMap.end() && (*ei)->tail != N->entryBB) {
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it).second, ir::Edge::Dummy));

            ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

            if (term->opcode == ir::PTXInstruction::Bra && term->d.identifier == (*ei)->tail->label)
              term->d = std::move(ir::PTXOperand((*it).second->label));
          } 
          // not found in ValueMap
          else {
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei)->tail, ir::Edge::Dummy));
          }
        } else if (edges.size() == 2) {
          ir::BasicBlock::EdgePointerVector::iterator ei = edges.begin();
          ir::BasicBlock::EdgePointerVector::iterator ei1 = ei;
          ++ei;
          ir::BasicBlock::EdgePointerVector::iterator ei2 = ei;

          ValueToValueMapTy::iterator it1 = ValueMap.find((*ei1)->tail);
          ValueToValueMapTy::iterator it2 = ValueMap.find((*ei2)->tail);

          bool found1 = (it1 != ValueMap.end() && (*ei1)->tail != N->entryBB);
          bool found2 = (it2 != ValueMap.end() && (*ei2)->tail != N->entryBB);

          // both found in ValueMap
          if (found1 && found2) {
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it1).second, ir::Edge::Dummy));
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it2).second, ir::Edge::Dummy));

            ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

            if (term->opcode == ir::PTXInstruction::Bra) {
              if (term->d.identifier == (*ei1)->tail->label)
                term->d = std::move(ir::PTXOperand((*it1).second->label));
              else if (term->d.identifier == (*ei2)->tail->label)
                term->d = std::move(ir::PTXOperand((*it2).second->label));
            }
          } 
          // edge 1 is found in ValueMap & edge 2 is not
          else if (found1 && !found2) {
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it1).second, ir::Edge::Dummy));
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei2)->tail, ir::Edge::Dummy));

            ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

            if (term->opcode == ir::PTXInstruction::Bra) {
              if (term->d.identifier == (*ei1)->tail->label)
                term->d = std::move(ir::PTXOperand((*it1).second->label));
           }
          }
          // edge 2 is found in ValueMap & edge 1 is not
          else if (!found1 && found2) {
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it2).second, ir::Edge::Dummy));
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei1)->tail, ir::Edge::Dummy));

            ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

            if (term->opcode == ir::PTXInstruction::Bra) {
              if (term->d.identifier == (*ei2)->tail->label)
                term->d = std::move(ir::PTXOperand((*it2).second->label));
            }
          }
          // neither is in ValueMap 
          else if (!found1 && !found2) {
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei1)->tail, ir::Edge::Dummy));
            _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei2)->tail, ir::Edge::Dummy));
          }
        }
      }

      ir::PTXInstruction *bra = static_cast<ir::PTXInstruction *>(PreHeader->instructions.back());

      if (bra->opcode == ir::PTXInstruction::Bra) {
        bra->d = std::move(ir::PTXOperand(clonedEntryBB->label));
        _kernel->cfg()->remove_edge(PreHeader->get_edge(N->entryBB));
        _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(PreHeader, clonedEntryBB, ir::Edge::Dummy)); 
      }         
  
      // point the incoming edges to the unrolled iteration
      for (EdgeVecTy::iterator i = N->incomingBR.begin(), e = N->incomingBR.end(); i != e; ++i) {
        _kernel->cfg()->remove_edge(i->first->get_edge(i->second));
        _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(i->first, ValueMap[i->second], ir::Edge::Dummy));

        ir::PTXInstruction *bra = static_cast<ir::PTXInstruction *>(i->first->instructions.back());

        if (bra->opcode == ir::PTXInstruction::Bra) 
          if (bra->d.identifier == i->second->label) 
            bra->d = std::move(ir::PTXOperand(ValueMap[i->second]->label));
      }
 
      return change;
    } 
  
    return change;  
  }
  
  
  // Algorithm 4 of Zhang's paper -- elimination of Forward branches
  bool StructuralTransform::ForwardCopy(NodeTy *N) {
    bool change = false; 
  
    for (NodeSetTy::iterator i = N->childNode.begin(), e = N->childNode.end(); i != e; ++i) 
      change |= ForwardCopy(*i);
    
    if (N->incomingForwardBR.size() > 0) {
      change = true;
  
      for (EdgeVecTy::iterator i = N->incomingForwardBR.begin(), e = N->incomingForwardBR.end(); i != e; ++i) {
        // ValueMap
        ValueToValueMapTy ValueMap;
   
        // Clone BasicBlocks to the new function
        for (BBSetTy::iterator BI = N->containedBB.begin(), BE = N->containedBB.end(); BI != BE; ++BI) {
          ir::ControlFlowGraph::iterator BB = *BI;
          char tmp[20];
          sprintf(tmp, "_forward%d", index++);
          ir::ControlFlowGraph::iterator ClonedBB = _kernel->cfg()->clone_block(BB, tmp);
          ValueMap[BB] = ClonedBB;
        }
    
        // For each BasicBlock
        // Remap Values here for Instructions
        for (ValueToValueMapTy::iterator VMI = ValueMap.begin(), VME = ValueMap.end(); VMI != VME; ++VMI) { 
          std::pair<ir::ControlFlowGraph::iterator, ir::ControlFlowGraph::iterator> ValuePair = *VMI;
          ir::BasicBlock::EdgePointerVector edges = ValuePair.first->out_edges;

          if (edges.size() == 1) {
            ir::BasicBlock::EdgePointerVector::iterator ei = edges.begin();
            ValueToValueMapTy::iterator it = ValueMap.find((*ei)->tail);

            // found in ValueMap
            if (it != ValueMap.end()) {
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it).second, ir::Edge::Dummy));

              ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

              if (term->opcode == ir::PTXInstruction::Bra && term->d.identifier == (*ei)->tail->label)
                term->d = std::move(ir::PTXOperand((*it).second->label));
            } 
            // not found in ValueMap
            else {
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei)->tail, ir::Edge::Dummy));
            }
          } else if (edges.size() == 2) {
            ir::BasicBlock::EdgePointerVector::iterator ei = edges.begin();
            ir::BasicBlock::EdgePointerVector::iterator ei1 = ei;
            ++ei;
            ir::BasicBlock::EdgePointerVector::iterator ei2 = ei;

            ValueToValueMapTy::iterator it1 = ValueMap.find((*ei1)->tail);
            ValueToValueMapTy::iterator it2 = ValueMap.find((*ei2)->tail);

            // both found in ValueMap
            if (it1 != ValueMap.end() && it2 != ValueMap.end()) {
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it1).second, ir::Edge::Dummy));
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it2).second, ir::Edge::Dummy));

              ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

              if (term->opcode == ir::PTXInstruction::Bra) {
                if (term->d.identifier == (*ei1)->tail->label)
                  term->d = std::move(ir::PTXOperand((*it1).second->label));
                else if (term->d.identifier == (*ei2)->tail->label)
                  term->d = std::move(ir::PTXOperand((*it2).second->label));
              }
            } 
            // edge 1 is found in ValueMap & edge 2 is not
            else if (it1 != ValueMap.end() && it2 == ValueMap.end()) {
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it1).second, ir::Edge::Dummy));
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei2)->tail, ir::Edge::Dummy));

              ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

              if (term->opcode == ir::PTXInstruction::Bra) {
                if (term->d.identifier == (*ei1)->tail->label)
                  term->d = std::move(ir::PTXOperand((*it1).second->label));
             }
            }
            // edge 2 is found in ValueMap & edge 1 is not
            else if (it1 == ValueMap.end() && it2 != ValueMap.end()) {
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*it2).second, ir::Edge::Dummy));
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei1)->tail, ir::Edge::Dummy));

              ir::PTXInstruction *term = static_cast<ir::PTXInstruction *>(ValuePair.second->instructions.back());

              if (term->opcode == ir::PTXInstruction::Bra) {
                if (term->d.identifier == (*ei2)->tail->label)
                  term->d = std::move(ir::PTXOperand((*it2).second->label));
              }
            }
            // neither is in ValueMap 
            else if (it1 == ValueMap.end() && it2 == ValueMap.end()) {
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei1)->tail, ir::Edge::Dummy));
              _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(ValuePair.second, (*ei2)->tail, ir::Edge::Dummy));
            }
          }
        }

        ir::ControlFlowGraph::edge_iterator edge = i->first->get_edge(i->second); 
        _kernel->cfg()->remove_edge(edge);
        _kernel->cfg()->insert_edge(ir::ControlFlowGraph::Edge(i->first, ValueMap[i->second], ir::Edge::Dummy));

        ir::PTXInstruction *bra = static_cast<ir::PTXInstruction *>(i->first->instructions.back());

        if (bra->opcode == ir::PTXInstruction::Bra) {
          if (bra->d.identifier == i->second->label) {
            bra->d = std::move(ir::PTXOperand(ValueMap[i->second]->label));
          } 
        } 
      } 
  
      return change;
    }
  
    return change;  
  } 
  
  void StructuralTransform::runOnKernel(ir::Kernel& k) {
    bool change = false;
    _kernel = static_cast<ir::PTXKernel *>(&k);
    index = 0;

    AF = new AssignFallThroughEdge(_kernel);

    AF->replaceWithDummyEdge();

    SA.unstructuredBRVec.clear();
  
    SA.unreachableNodeSet.clear();

    SA.Net.clear();
 
    SA.runOnKernel(_kernel);
  
    while (SA.unstructuredBRVec.size() > 0) {
      NodeTy *entry = *(SA.Net.begin()); 

      stopCut = false;  

      for (NodeSetTy::iterator i = SA.unreachableNodeSet.begin(), e = SA.unreachableNodeSet.end(); i != e; ++i) {
        if (Cut(*i)) {
          change = true;

          goto ANALYSIS;
        }
      }

      if (ForwardCopy(entry)) {
        change = true;
  
        goto ANALYSIS;
      }

      if (Cut(entry)) {
        change = true;

        goto ANALYSIS;
      }
  
      if (BackwardCopy(entry)) {
        change = true;
  
        goto ANALYSIS;
      }
  
ANALYSIS:
      SA.unstructuredBRVec.clear();
  
      SA.unreachableNodeSet.clear();

      SA.Net.clear();
   
      SA.runOnKernel(_kernel);
    }
  
    AF->assignEdges();
  }
}
