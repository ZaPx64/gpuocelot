# 1 "/tmp/tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.cpp"
# 1 "tests/simpleGL/simpleGL_kernel.cu"
# 61 "/usr/local/cuda4.1/cuda/include/device_types.h"
# 149 "/usr/lib/x86_64-linux-gnu/gcc/x86_64-linux-gnu/4.5.2/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/x86_64-linux-gnu/gcc/x86_64-linux-gnu/4.5.2/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 1 3
# 56 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/device_types.h" 1 3
# 53 "/usr/local/cuda4.1/cuda/include/device_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/host_defines.h" 1 3
# 54 "/usr/local/cuda4.1/cuda/include/device_types.h" 2 3







enum cudaRoundMode
{
    cudaRoundNearest,
    cudaRoundZero,
    cudaRoundPosInf,
    cudaRoundMinInf
};
# 57 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/driver_types.h" 1 3
# 125 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
enum cudaError
{





    cudaSuccess = 0,





    cudaErrorMissingConfiguration = 1,





    cudaErrorMemoryAllocation = 2,





    cudaErrorInitializationError = 3,
# 160 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorLaunchFailure = 4,
# 169 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorPriorLaunchFailure = 5,
# 179 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorLaunchTimeout = 6,
# 188 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorLaunchOutOfResources = 7,





    cudaErrorInvalidDeviceFunction = 8,
# 203 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorInvalidConfiguration = 9,





    cudaErrorInvalidDevice = 10,





    cudaErrorInvalidValue = 11,





    cudaErrorInvalidPitchValue = 12,





    cudaErrorInvalidSymbol = 13,




    cudaErrorMapBufferObjectFailed = 14,




    cudaErrorUnmapBufferObjectFailed = 15,





    cudaErrorInvalidHostPointer = 16,





    cudaErrorInvalidDevicePointer = 17,





    cudaErrorInvalidTexture = 18,





    cudaErrorInvalidTextureBinding = 19,






    cudaErrorInvalidChannelDescriptor = 20,





    cudaErrorInvalidMemcpyDirection = 21,
# 284 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorAddressOfConstant = 22,
# 293 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorTextureFetchFailed = 23,
# 302 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorTextureNotBound = 24,
# 311 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorSynchronizationError = 25,





    cudaErrorInvalidFilterSetting = 26,





    cudaErrorInvalidNormSetting = 27,







    cudaErrorMixedDeviceExecution = 28,






    cudaErrorCudartUnloading = 29,




    cudaErrorUnknown = 30,







    cudaErrorNotYetImplemented = 31,
# 360 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorMemoryValueTooLarge = 32,






    cudaErrorInvalidResourceHandle = 33,







    cudaErrorNotReady = 34,






    cudaErrorInsufficientDriver = 35,
# 395 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorSetOnActiveProcess = 36,





    cudaErrorInvalidSurface = 37,





    cudaErrorNoDevice = 38,





    cudaErrorECCUncorrectable = 39,




    cudaErrorSharedObjectSymbolNotFound = 40,




    cudaErrorSharedObjectInitFailed = 41,





    cudaErrorUnsupportedLimit = 42,





    cudaErrorDuplicateVariableName = 43,





    cudaErrorDuplicateTextureName = 44,





    cudaErrorDuplicateSurfaceName = 45,
# 457 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorDevicesUnavailable = 46,




    cudaErrorInvalidKernelImage = 47,







    cudaErrorNoKernelImageForDevice = 48,
# 483 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorIncompatibleDriverContext = 49,






    cudaErrorPeerAccessAlreadyEnabled = 50,






    cudaErrorPeerAccessNotEnabled = 51,





    cudaErrorDeviceAlreadyInUse = 54,







    cudaErrorProfilerDisabled = 55,






    cudaErrorProfilerNotInitialized = 56,






    cudaErrorProfilerAlreadyStarted = 57,





     cudaErrorProfilerAlreadyStopped = 58,







    cudaErrorAssert = 59,






    cudaErrorTooManyPeers = 60,





    cudaErrorHostMemoryAlreadyRegistered = 61,





    cudaErrorHostMemoryNotRegistered = 62,




    cudaErrorStartupFailure = 0x7f,







    cudaErrorApiFailureBase = 10000
};




enum cudaChannelFormatKind
{
    cudaChannelFormatKindSigned = 0,
    cudaChannelFormatKindUnsigned = 1,
    cudaChannelFormatKindFloat = 2,
    cudaChannelFormatKindNone = 3
};




struct cudaChannelFormatDesc
{
    int x;
    int y;
    int z;
    int w;
    enum cudaChannelFormatKind f;
};




struct cudaArray;




enum cudaMemoryType
{
    cudaMemoryTypeHost = 1,
    cudaMemoryTypeDevice = 2
};




enum cudaMemcpyKind
{
    cudaMemcpyHostToHost = 0,
    cudaMemcpyHostToDevice = 1,
    cudaMemcpyDeviceToHost = 2,
    cudaMemcpyDeviceToDevice = 3,
    cudaMemcpyDefault = 4
};





struct cudaPitchedPtr
{
    void *ptr;
    size_t pitch;
    size_t xsize;
    size_t ysize;
};





struct cudaExtent
{
    size_t width;
    size_t height;
    size_t depth;
};





struct cudaPos
{
    size_t x;
    size_t y;
    size_t z;
};




struct cudaMemcpy3DParms
{
    struct cudaArray *srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;

    struct cudaArray *dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;

    struct cudaExtent extent;
    enum cudaMemcpyKind kind;
};




struct cudaMemcpy3DPeerParms
{
    struct cudaArray *srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;
    int srcDevice;

    struct cudaArray *dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;
    int dstDevice;

    struct cudaExtent extent;
};




struct cudaGraphicsResource;




enum cudaGraphicsRegisterFlags
{
    cudaGraphicsRegisterFlagsNone = 0,
    cudaGraphicsRegisterFlagsReadOnly = 1,
    cudaGraphicsRegisterFlagsWriteDiscard = 2,
    cudaGraphicsRegisterFlagsSurfaceLoadStore = 4,
    cudaGraphicsRegisterFlagsTextureGather = 8
};




enum cudaGraphicsMapFlags
{
    cudaGraphicsMapFlagsNone = 0,
    cudaGraphicsMapFlagsReadOnly = 1,
    cudaGraphicsMapFlagsWriteDiscard = 2
};




enum cudaGraphicsCubeFace
{
    cudaGraphicsCubeFacePositiveX = 0x00,
    cudaGraphicsCubeFaceNegativeX = 0x01,
    cudaGraphicsCubeFacePositiveY = 0x02,
    cudaGraphicsCubeFaceNegativeY = 0x03,
    cudaGraphicsCubeFacePositiveZ = 0x04,
    cudaGraphicsCubeFaceNegativeZ = 0x05
};




struct cudaPointerAttributes
{




    enum cudaMemoryType memoryType;
# 752 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    int device;





    void *devicePointer;





    void *hostPointer;
};




struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;
};




enum cudaFuncCache
{
    cudaFuncCachePreferNone = 0,
    cudaFuncCachePreferShared = 1,
    cudaFuncCachePreferL1 = 2,
    cudaFuncCachePreferEqual = 3
};




enum cudaComputeMode
{
    cudaComputeModeDefault = 0,
    cudaComputeModeExclusive = 1,
    cudaComputeModeProhibited = 2,
    cudaComputeModeExclusiveProcess = 3
};




enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};




enum cudaOutputMode
{
    cudaKeyValuePair = 0x00,
    cudaCSV = 0x01
};




struct cudaDeviceProp
{
    char name[256];
    size_t totalGlobalMem;
    size_t sharedMemPerBlock;
    int regsPerBlock;
    int warpSize;
    size_t memPitch;
    int maxThreadsPerBlock;
    int maxThreadsDim[3];
    int maxGridSize[3];
    int clockRate;
    size_t totalConstMem;
    int major;
    int minor;
    size_t textureAlignment;
    size_t texturePitchAlignment;
    int deviceOverlap;
    int multiProcessorCount;
    int kernelExecTimeoutEnabled;
    int integrated;
    int canMapHostMemory;
    int computeMode;
    int maxTexture1D;
    int maxTexture1DLinear;
    int maxTexture2D[2];
    int maxTexture2DLinear[3];
    int maxTexture2DGather[2];
    int maxTexture3D[3];
    int maxTextureCubemap;
    int maxTexture1DLayered[2];
    int maxTexture2DLayered[3];
    int maxTextureCubemapLayered[2];
    int maxSurface1D;
    int maxSurface2D[2];
    int maxSurface3D[3];
    int maxSurface1DLayered[2];
    int maxSurface2DLayered[3];
    int maxSurfaceCubemap;
    int maxSurfaceCubemapLayered[2];
    size_t surfaceAlignment;
    int concurrentKernels;
    int ECCEnabled;
    int pciBusID;
    int pciDeviceID;
    int pciDomainID;
    int tccDriver;
    int asyncEngineCount;
    int unifiedAddressing;
    int memoryClockRate;
    int memoryBusWidth;
    int l2CacheSize;
    int maxThreadsPerMultiProcessor;
};
# 976 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
struct cudaIpcEventHandle_st
{
    char reserved[64];
};

struct cudaIpcMemHandle_st
{
    char reserved[64];
};
# 995 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
typedef enum cudaError cudaError_t;




typedef struct CUstream_st *cudaStream_t;




typedef struct CUevent_st *cudaEvent_t;




typedef struct cudaGraphicsResource *cudaGraphicsResource_t;




typedef struct CUuuid_st cudaUUID_t;




typedef struct cudaIpcEventHandle_st cudaIpcEventHandle_t;
typedef struct cudaIpcMemHandle_st cudaIpcMemHandle_t;




typedef enum cudaOutputMode cudaOutputMode_t;
# 58 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/surface_types.h" 1 3
# 84 "/usr/local/cuda4.1/cuda/include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
    cudaBoundaryModeZero = 0,
    cudaBoundaryModeClamp = 1,
    cudaBoundaryModeTrap = 2
};




enum cudaSurfaceFormatMode
{
    cudaFormatModeForced = 0,
    cudaFormatModeAuto = 1
};




struct surfaceReference
{



    struct cudaChannelFormatDesc channelDesc;
};
# 59 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/texture_types.h" 1 3
# 84 "/usr/local/cuda4.1/cuda/include/texture_types.h" 3
enum cudaTextureAddressMode
{
    cudaAddressModeWrap = 0,
    cudaAddressModeClamp = 1,
    cudaAddressModeMirror = 2,
    cudaAddressModeBorder = 3
};




enum cudaTextureFilterMode
{
    cudaFilterModePoint = 0,
    cudaFilterModeLinear = 1
};




enum cudaTextureReadMode
{
    cudaReadModeElementType = 0,
    cudaReadModeNormalizedFloat = 1
};




struct textureReference
{



    int normalized;



    enum cudaTextureFilterMode filterMode;



    enum cudaTextureAddressMode addressMode[3];



    struct cudaChannelFormatDesc channelDesc;



    int sRGB;
    int __cudaReserved[15];
};
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/vector_types.h" 1 3
# 59 "/usr/local/cuda4.1/cuda/include/vector_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 1 3
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/vector_types.h" 1 3
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 60 "/usr/local/cuda4.1/cuda/include/vector_types.h" 2 3
# 94 "/usr/local/cuda4.1/cuda/include/vector_types.h" 3
struct char1
{
    signed char x;
};

struct uchar1
{
    unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
    signed char x, y;
};

struct __attribute__((aligned(2))) uchar2
{
    unsigned char x, y;
};

struct char3
{
    signed char x, y, z;
};

struct uchar3
{
    unsigned char x, y, z;
};

struct __attribute__((aligned(4))) char4
{
    signed char x, y, z, w;
};

struct __attribute__((aligned(4))) uchar4
{
    unsigned char x, y, z, w;
};

struct short1
{
    short x;
};

struct ushort1
{
    unsigned short x;
};

struct __attribute__((aligned(4))) short2
{
    short x, y;
};

struct __attribute__((aligned(4))) ushort2
{
    unsigned short x, y;
};

struct short3
{
    short x, y, z;
};

struct ushort3
{
    unsigned short x, y, z;
};

struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };
struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };

struct int1
{
    int x;
};

struct uint1
{
    unsigned int x;
};

struct __attribute__((aligned(8))) int2 { int x; int y; };
struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };

struct int3
{
    int x, y, z;
};

struct uint3
{
    unsigned int x, y, z;
};

struct __attribute__((aligned(16))) int4
{
    int x, y, z, w;
};

struct __attribute__((aligned(16))) uint4
{
    unsigned int x, y, z, w;
};

struct long1
{
    long int x;
};

struct ulong1
{
    unsigned long x;
};






struct __attribute__((aligned(2*sizeof(long int)))) long2
{
    long int x, y;
};

struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
    unsigned long int x, y;
};



struct long3
{
    long int x, y, z;
};

struct ulong3
{
    unsigned long int x, y, z;
};

struct __attribute__((aligned(16))) long4
{
    long int x, y, z, w;
};

struct __attribute__((aligned(16))) ulong4
{
    unsigned long int x, y, z, w;
};

struct float1
{
    float x;
};

struct __attribute__((aligned(8))) float2 { float x; float y; };

struct float3
{
    float x, y, z;
};

struct __attribute__((aligned(16))) float4
{
    float x, y, z, w;
};

struct longlong1
{
    long long int x;
};

struct ulonglong1
{
    unsigned long long int x;
};

struct __attribute__((aligned(16))) longlong2
{
    long long int x, y;
};

struct __attribute__((aligned(16))) ulonglong2
{
    unsigned long long int x, y;
};

struct longlong3
{
    long long int x, y, z;
};

struct ulonglong3
{
    unsigned long long int x, y, z;
};

struct __attribute__((aligned(16))) longlong4
{
    long long int x, y, z ,w;
};

struct __attribute__((aligned(16))) ulonglong4
{
    unsigned long long int x, y, z, w;
};

struct double1
{
    double x;
};

struct __attribute__((aligned(16))) double2
{
    double x, y;
};

struct double3
{
    double x, y, z;
};

struct __attribute__((aligned(16))) double4
{
    double x, y, z, w;
};
# 338 "/usr/local/cuda4.1/cuda/include/vector_types.h" 3
typedef struct char1 char1;
typedef struct uchar1 uchar1;
typedef struct char2 char2;
typedef struct uchar2 uchar2;
typedef struct char3 char3;
typedef struct uchar3 uchar3;
typedef struct char4 char4;
typedef struct uchar4 uchar4;
typedef struct short1 short1;
typedef struct ushort1 ushort1;
typedef struct short2 short2;
typedef struct ushort2 ushort2;
typedef struct short3 short3;
typedef struct ushort3 ushort3;
typedef struct short4 short4;
typedef struct ushort4 ushort4;
typedef struct int1 int1;
typedef struct uint1 uint1;
typedef struct int2 int2;
typedef struct uint2 uint2;
typedef struct int3 int3;
typedef struct uint3 uint3;
typedef struct int4 int4;
typedef struct uint4 uint4;
typedef struct long1 long1;
typedef struct ulong1 ulong1;
typedef struct long2 long2;
typedef struct ulong2 ulong2;
typedef struct long3 long3;
typedef struct ulong3 ulong3;
typedef struct long4 long4;
typedef struct ulong4 ulong4;
typedef struct float1 float1;
typedef struct float2 float2;
typedef struct float3 float3;
typedef struct float4 float4;
typedef struct longlong1 longlong1;
typedef struct ulonglong1 ulonglong1;
typedef struct longlong2 longlong2;
typedef struct ulonglong2 ulonglong2;
typedef struct longlong3 longlong3;
typedef struct ulonglong3 ulonglong3;
typedef struct longlong4 longlong4;
typedef struct ulonglong4 ulonglong4;
typedef struct double1 double1;
typedef struct double2 double2;
typedef struct double3 double3;
typedef struct double4 double4;







struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};

typedef struct dim3 dim3;
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 70 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/x86_64-linux-gnu/gcc/x86_64-linux-gnu/4.5.2/include/stddef.h" 2 3
# 125 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 577 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 588 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 600 "/usr/local/cuda4.1/cuda/include/driver_types.h"
struct cudaArray;
# 605 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 614 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 627 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 639 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 650 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 660 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 677 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 695 "/usr/local/cuda4.1/cuda/include/driver_types.h"
struct cudaGraphicsResource;
# 700 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 712 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 722 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 735 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 770 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 820 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 831 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 842 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 852 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 861 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 976 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 981 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 995 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1000 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1005 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1010 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1015 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1020 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1021 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1026 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 84 "/usr/local/cuda4.1/cuda/include/surface_types.h"
# 94 "/usr/local/cuda4.1/cuda/include/surface_types.h"
# 103 "/usr/local/cuda4.1/cuda/include/surface_types.h"
# 84 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 95 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 104 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 113 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 94 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 99 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 105 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 110 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 115 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 120 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 125 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 130 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 135 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 140 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 145 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 150 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 155 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 160 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 165 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 166 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 168 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 173 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 178 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 179 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 181 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 186 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 191 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 196 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 201 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 206 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 216 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 221 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 228 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 233 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 238 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 243 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 248 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 253 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 255 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 260 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 265 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 270 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 275 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 280 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 285 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 290 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 295 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 300 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 305 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 310 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 315 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 320 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 338 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 339 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 340 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 341 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 342 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 343 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 344 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 345 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 346 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 347 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 348 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 349 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 350 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 351 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 352 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 353 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 354 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 355 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 356 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 357 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 358 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 359 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 360 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 361 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 362 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 363 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 364 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 365 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 366 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 367 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 368 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 369 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 370 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 371 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 372 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 373 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 374 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 375 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 376 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 377 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 378 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 379 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 380 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 381 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 382 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 383 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 384 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 385 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 393 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 403 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 134 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceReset();
# 151 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSynchronize();
# 203 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetLimit(cudaLimit , size_t );
# 227 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetLimit(size_t * , cudaLimit );
# 257 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * );
# 298 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache );
# 321 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetByPCIBusId(int * , char * );
# 348 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetPCIBusId(char * , int , int );
# 387 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * , cudaEvent_t );
# 419 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * , cudaIpcEventHandle_t );
# 454 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * , void * );
# 492 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcOpenMemHandle(void ** , cudaIpcMemHandle_t );
# 519 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcCloseMemHandle(void * );
# 553 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 577 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 636 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit , size_t );
# 667 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t * , cudaLimit );
# 702 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * );
# 748 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache );
# 800 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 841 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 855 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t );
# 885 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int * );
# 1088 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp * , int );
# 1107 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int * , const cudaDeviceProp * );
# 1140 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int );
# 1157 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int * );
# 1186 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int * , int );
# 1246 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned );
# 1272 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t * );
# 1293 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t );
# 1329 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t , cudaEvent_t , unsigned );
# 1348 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t );
# 1366 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t );
# 1398 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t * );
# 1429 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t * , unsigned );
# 1462 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t , cudaStream_t = 0);
# 1491 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t );
# 1523 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t );
# 1548 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t );
# 1589 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float * , cudaEvent_t , cudaEvent_t );
# 1628 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3 , dim3 , size_t = (0), cudaStream_t = 0);
# 1655 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void * , size_t , size_t );
# 1701 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char * , cudaFuncCache );
# 1736 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char * );
# 1769 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * , const char * );
# 1791 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double * );
# 1813 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double * );
# 1845 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void ** , size_t );
# 1874 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void ** , size_t );
# 1913 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void ** , size_t * , size_t , size_t );
# 1955 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray ** , const cudaChannelFormatDesc * , size_t , size_t = (0), unsigned = (0));
# 1979 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void * );
# 1999 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void * );
# 2021 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray * );
# 2080 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void ** , size_t , unsigned );
# 2136 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostRegister(void * , size_t , unsigned );
# 2155 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostUnregister(void * );
# 2182 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void ** , void * , unsigned );
# 2201 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned * , void * );
# 2236 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr * , cudaExtent );
# 2336 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray ** , const cudaChannelFormatDesc * , cudaExtent , unsigned = (0));
# 2433 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * );
# 2460 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * );
# 2565 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * , cudaStream_t = 0);
# 2586 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * , cudaStream_t = 0);
# 2605 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t * , size_t * );
# 2638 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void * , const void * , size_t , cudaMemcpyKind );
# 2669 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeer(void * , int , const void * , int , size_t );
# 2702 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind );
# 2735 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind );
# 2770 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2812 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2853 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2894 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind );
# 2933 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2968 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char * , const void * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 3002 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void * , const char * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 3045 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void * , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3075 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeerAsync(void * , int , const void * , int , size_t , cudaStream_t = 0);
# 3117 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3159 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3210 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3260 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3310 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3354 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char * , const void * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3397 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void * , const char * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3419 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void * , int , size_t );
# 3445 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void * , size_t , int , size_t , size_t );
# 3484 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr , int , cudaExtent );
# 3511 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void * , int , size_t , cudaStream_t = 0);
# 3543 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void * , size_t , int , size_t , size_t , cudaStream_t = 0);
# 3588 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr , int , cudaExtent , cudaStream_t = 0);
# 3615 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void ** , const char * );
# 3638 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t * , const char * );
# 3783 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * , void * );
# 3817 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceCanAccessPeer(int * , int , int );
# 3858 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceEnablePeerAccess(int , unsigned );
# 3883 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceDisablePeerAccess(int );
# 3929 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t );
# 3961 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t , unsigned );
# 3996 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 4027 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 4056 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void ** , size_t * , cudaGraphicsResource_t );
# 4090 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray ** , cudaGraphicsResource_t , unsigned , unsigned );
# 4123 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * , const cudaArray * );
# 4158 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int , int , int , int , cudaChannelFormatKind );
# 4205 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t = (((2147483647) * 2U) + 1U));
# 4256 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t , size_t , size_t );
# 4284 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 4305 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference * );
# 4330 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t * , const textureReference * );
# 4354 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference ** , const char * );
# 4387 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 4405 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference ** , const char * );
# 4432 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int * );
# 4449 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int * );
# 4454 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void ** , const cudaUUID_t * );
# 107 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 108 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 109 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 110 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 112 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 113 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 114 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 119 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 120 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 121 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 126 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 127 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 128 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 130 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 131 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 133 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 134 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 135 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 137 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 138 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 140 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 141 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 142 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 147 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 149 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 151 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 152 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 153 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 158 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 159 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 160 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 165 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 166 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 167 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 172 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 173 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 174 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 179 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 180 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 181 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 186 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 187 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 188 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 193 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 194 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 195 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 197 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 200 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 201 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 202 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 204 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 207 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 208 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 209 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 214 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 215 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 216 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 221 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 222 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 223 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 228 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 229 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 230 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 235 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 236 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 237 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 242 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 243 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 244 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 249 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 250 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 251 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 253 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 256 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 257 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 258 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 260 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 263 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 264 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 265 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 270 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 271 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 272 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 277 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 278 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 279 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 284 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 285 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 286 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 291 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 292 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 293 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 298 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 299 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 300 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 305 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 306 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 307 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 309 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 310 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 312 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 313 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 314 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 316 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 317 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 379 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 380 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 381 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 386 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 387 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 388 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 393 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 394 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 395 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 397 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 398 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 400 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 401 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 402 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 404 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 405 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 79 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 80 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
{
# 81 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
cudaPitchedPtr s;
# 83 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.ptr) = d;
# 84 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.pitch) = p;
# 85 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.xsize) = xsz;
# 86 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.ysize) = ysz;
# 88 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
return s;
# 89 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
}
# 106 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 107 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
{
# 108 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
cudaPos p;
# 110 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(p.x) = x;
# 111 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(p.y) = y;
# 112 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(p.z) = z;
# 114 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
return p;
# 115 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
}
# 132 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 133 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
{
# 134 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
cudaExtent e;
# 136 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(e.width) = w;
# 137 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(e.height) = h;
# 138 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(e.depth) = d;
# 140 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
return e;
# 141 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
}
# 69 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 70 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 71 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 72 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 74 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 75 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 76 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 77 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 79 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 80 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 81 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 82 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 84 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 85 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 86 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 87 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 89 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 90 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 91 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 92 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 94 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 95 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 96 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 97 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 99 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 100 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 101 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 102 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 104 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 105 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 106 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 107 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 109 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short1 make_short1(short x)
# 110 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 111 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 112 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 114 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 115 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 116 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 117 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 119 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 120 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 121 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 122 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 124 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 125 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 126 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 127 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 129 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 130 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 131 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 132 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 134 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 135 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 136 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 137 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 139 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 140 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 141 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 142 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 144 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 145 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 146 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 147 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 149 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int1 make_int1(int x)
# 150 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 151 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 152 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 154 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 155 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 156 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 157 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 159 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 160 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 161 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 162 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 164 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 165 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 166 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 167 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 169 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 170 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 171 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 172 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 174 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 175 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 176 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 177 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 179 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 180 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 181 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 182 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 184 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 185 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 186 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 187 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 189 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long1 make_long1(long x)
# 190 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 191 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 192 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 194 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 195 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 196 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 197 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 199 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 200 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 201 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 202 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 204 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 205 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 206 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 207 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 209 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 210 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 211 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 212 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 214 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 215 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 216 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 217 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 219 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 220 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 221 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 222 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 224 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 225 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 226 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 227 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 229 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float1 make_float1(float x)
# 230 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 231 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 232 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 234 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 235 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 236 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 237 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 239 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 240 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 241 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 242 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 244 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 245 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 246 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 247 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 249 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 250 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 251 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 252 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 254 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 255 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 256 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 257 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 259 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 260 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 261 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 262 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 264 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 265 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 266 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 267 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 269 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 270 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 271 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 272 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 274 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 275 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 276 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 277 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 279 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 280 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 281 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 282 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 284 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 285 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 286 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 287 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 289 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double1 make_double1(double x)
# 290 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 291 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 292 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 294 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 295 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 296 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 297 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 299 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 300 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 301 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 302 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 304 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 305 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 306 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 307 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" void *memcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 46 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void * , const void * , size_t ) throw()
# 50 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__ , const void *__restrict__ , int , size_t ) throw()
# 59 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 65 "/usr/include/string.h" 3
extern "C" void *memset(void * , int , size_t ) throw() __attribute((__nonnull__(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void * , const void * , size_t ) throw()
# 69 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void * , int , size_t ) throw() __asm__("memchr")
# 76 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void * , int , size_t ) throw() __asm__("memchr")
# 78 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void * , int ) throw() __asm__("rawmemchr")
# 105 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void * , int ) throw() __asm__("rawmemchr")
# 107 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void * , int , size_t ) throw() __asm__("memrchr")
# 116 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void * , int , size_t ) throw() __asm__("memrchr")
# 118 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 129 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 133 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__ , const char *__restrict__ ) throw()
# 137 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 140 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char * , const char * ) throw()
# 144 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char * , const char * , size_t ) throw()
# 147 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char * , const char * ) throw()
# 151 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 155 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char * , const char * , __locale_t ) throw()
# 166 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char * , const char * , size_t , __locale_t ) throw()
# 169 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char * ) throw()
# 176 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char * , size_t ) throw()
# 184 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char * , int ) throw() __asm__("strchr")
# 216 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char * , int ) throw() __asm__("strchr")
# 218 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char * , int ) throw() __asm__("strrchr")
# 243 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char * , int ) throw() __asm__("strrchr")
# 245 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char * , int ) throw() __asm__("strchrnul")
# 272 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char * , int ) throw() __asm__("strchrnul")
# 274 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char * , const char * ) throw()
# 285 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char * , const char * ) throw()
# 289 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char * , const char * ) throw() __asm__("strpbrk")
# 295 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char * , const char * ) throw() __asm__("strpbrk")
# 297 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char * , const char * ) throw() __asm__("strstr")
# 322 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char * , const char * ) throw() __asm__("strstr")
# 325 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__ , const char *__restrict__ ) throw()
# 349 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 357 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 361 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char * , const char * ) throw() __asm__("strcasestr")
# 368 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char * , const char * ) throw() __asm__("strcasestr")
# 371 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void * , size_t , const void * , size_t ) throw()
# 384 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 390 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 393 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char * ) throw()
# 400 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char * , size_t ) throw()
# 407 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int ) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int , char * , size_t ) throw()
# 439 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int , __locale_t ) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void * , void * , size_t ) throw()
# 456 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void * , const void * , size_t ) throw()
# 463 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 469 "/usr/include/string.h" 3
extern char *index(char * , int ) throw() __asm__("index")
# 470 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char * , int ) throw() __asm__("index")
# 472 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char * , int ) throw() __asm__("rindex")
# 498 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char * , int ) throw() __asm__("rindex")
# 500 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int ) throw() __attribute((const));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long ) throw() __attribute((const));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long ) throw()
# 531 "/usr/include/string.h" 3
 __attribute((const));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char * , const char * ) throw()
# 537 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char * , const char * , size_t ) throw()
# 541 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char * , const char * , __locale_t ) throw()
# 549 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char * , const char * , size_t , __locale_t ) throw()
# 553 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__ , const char *__restrict__ ) throw()
# 561 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int ) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 570 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 572 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 578 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 581 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char * , const char * ) throw()
# 587 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char * ) throw() __attribute((__nonnull__(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 601 "/usr/include/string.h" 3
char *basename(char * ) throw() __asm__("basename")
# 602 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char * ) throw() __asm__("basename")
# 604 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 183 "/usr/include/time.h" 3
extern "C" clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t * ) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t , time_t ) throw()
# 190 "/usr/include/time.h" 3
 __attribute((const));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm * ) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ ) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__ , const char *__restrict__ , tm * ) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ , __locale_t ) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__ , const char *__restrict__ , tm * , __locale_t ) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t * ) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t * ) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm * ) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t * ) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__ , char *__restrict__ ) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__ , char *__restrict__ ) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t * ) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm * ) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm * ) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int ) throw() __attribute((const));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec * , timespec * );
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t , timespec * ) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t , timespec * ) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t , const timespec * ) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t , int , const timespec * , timespec * );
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t , clockid_t * ) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t , sigevent *__restrict__ , timer_t *__restrict__ ) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t ) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t , int , const itimerspec *__restrict__ , itimerspec *__restrict__ ) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t , itimerspec * ) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t ) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char * );
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__ , tm *__restrict__ );
# 69 "/usr/local/cuda4.1/cuda/include/common_functions.h"
extern "C" clock_t clock() throw();
# 70 "/usr/local/cuda4.1/cuda/include/common_functions.h"
extern "C" void *memset(void *, int, size_t) throw();
# 71 "/usr/local/cuda4.1/cuda/include/common_functions.h"
extern "C" void *memcpy(void *, const void *, size_t) throw();
# 160 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int abs(int) throw();
# 161 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long labs(long) throw();
# 162 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llabs(long long) throw();
# 175 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fabs(double ) throw();
# 188 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fabsf(float ) throw();
# 189 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int min(int, int);
# 190 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned umin(unsigned, unsigned);
# 191 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llmin(long long, long long);
# 192 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned long long ullmin(unsigned long long, unsigned long long);
# 208 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fminf(float , float ) throw();
# 224 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fmin(double , double ) throw();
# 225 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int max(int, int);
# 226 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned umax(unsigned, unsigned);
# 227 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llmax(long long, long long);
# 228 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned long long ullmax(unsigned long long, unsigned long long);
# 244 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fmaxf(float , float ) throw();
# 260 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fmax(double, double) throw();
# 273 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sin(double ) throw();
# 286 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cos(double ) throw();
# 301 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" void sincos(double , double * , double * ) throw();
# 317 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" void sincosf(float , float * , float * ) throw();
# 330 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double tan(double ) throw();
# 345 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sqrt(double ) throw();
# 360 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double rsqrt(double );
# 375 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float rsqrtf(float );
# 390 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log2(double ) throw();
# 401 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double exp2(double ) throw();
# 412 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float exp2f(float ) throw();
# 423 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double exp10(double ) throw();
# 435 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float exp10f(float ) throw();
# 446 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double expm1(double ) throw();
# 457 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float expm1f(float ) throw();
# 472 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float log2f(float ) throw();
# 487 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log10(double ) throw();
# 502 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log(double ) throw();
# 517 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log1p(double ) throw();
# 532 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float log1pf(float ) throw();
# 546 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double floor(double ) throw();
# 557 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double exp(double ) throw();
# 570 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cosh(double ) throw();
# 582 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sinh(double ) throw();
# 594 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double tanh(double ) throw();
# 608 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double acosh(double ) throw();
# 622 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float acoshf(float ) throw();
# 634 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double asinh(double ) throw();
# 646 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float asinhf(float ) throw();
# 660 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double atanh(double ) throw();
# 674 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float atanhf(float ) throw();
# 686 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double ldexp(double , int ) throw();
# 698 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float ldexpf(float , int ) throw();
# 711 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double logb(double ) throw();
# 724 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float logbf(float ) throw();
# 742 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int ilogb(double ) throw();
# 760 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int ilogbf(float ) throw();
# 774 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double scalbn(double , int ) throw();
# 788 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float scalbnf(float , int ) throw();
# 802 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double scalbln(double , long ) throw();
# 816 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float scalblnf(float , long ) throw();
# 837 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double frexp(double , int * ) throw();
# 858 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float frexpf(float , int * ) throw();
# 871 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double round(double ) throw();
# 884 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float roundf(float ) throw();
# 898 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lround(double ) throw();
# 912 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lroundf(float ) throw();
# 926 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llround(double ) throw();
# 940 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llroundf(float ) throw();
# 951 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double rint(double ) throw();
# 962 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float rintf(float ) throw();
# 974 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lrint(double ) throw();
# 986 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lrintf(float ) throw();
# 998 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llrint(double ) throw();
# 1010 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llrintf(float ) throw();
# 1023 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double nearbyint(double ) throw();
# 1036 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float nearbyintf(float ) throw();
# 1048 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double ceil(double ) throw();
# 1059 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double trunc(double ) throw();
# 1070 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float truncf(float ) throw();
# 1084 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fdim(double , double ) throw();
# 1098 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fdimf(float , float ) throw();
# 1113 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double atan2(double , double ) throw();
# 1126 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double atan(double ) throw();
# 1140 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double acos(double ) throw();
# 1154 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double asin(double ) throw();
# 1169 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double hypot(double , double ) throw();
# 1186 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float hypotf(float , float ) throw();
# 1200 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cbrt(double ) throw();
# 1214 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float cbrtf(float ) throw();
# 1227 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double rcbrt(double );
# 1240 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float rcbrtf(float );
# 1254 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sinpi(double );
# 1268 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sinpif(float );
# 1282 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cospi(double );
# 1296 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float cospif(float );
# 1324 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double pow(double , double ) throw();
# 1341 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double modf(double , double * ) throw();
# 1361 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fmod(double , double ) throw();
# 1379 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double remainder(double , double ) throw();
# 1398 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float remainderf(float , float ) throw();
# 1417 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double remquo(double , double , int * ) throw();
# 1436 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float remquof(float , float , int * ) throw();
# 1451 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double j0(double ) throw();
# 1466 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float j0f(float ) throw();
# 1482 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double j1(double ) throw();
# 1498 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float j1f(float ) throw();
# 1514 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double jn(int , double ) throw();
# 1530 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float jnf(int , float ) throw();
# 1547 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double y0(double ) throw();
# 1564 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float y0f(float ) throw();
# 1581 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double y1(double ) throw();
# 1598 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float y1f(float ) throw();
# 1616 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double yn(int , double ) throw();
# 1634 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float ynf(int , float ) throw();
# 1648 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erf(double ) throw();
# 1662 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erff(float ) throw();
# 1677 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfinv(double );
# 1692 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfinvf(float );
# 1706 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfc(double ) throw();
# 1720 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfcf(float ) throw();
# 1738 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double lgamma(double ) throw();
# 1753 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfcinv(double );
# 1768 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfcinvf(float );
# 1778 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfcx(double );
# 1788 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfcxf(float );
# 1806 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float lgammaf(float ) throw();
# 1824 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double tgamma(double ) throw();
# 1842 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float tgammaf(float ) throw();
# 1851 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double copysign(double , double ) throw();
# 1860 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float copysignf(float , float ) throw();
# 1875 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double nextafter(double , double ) throw();
# 1890 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float nextafterf(float , float ) throw();
# 1902 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double nan(const char * ) throw();
# 1914 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float nanf(const char * ) throw();
# 1915 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isinff(float) throw();
# 1916 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isnanf(float) throw();
# 1925 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __finite(double) throw();
# 1926 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __finitef(float) throw();
# 1927 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __signbit(double) throw();
# 1928 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isnan(double) throw();
# 1929 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isinf(double) throw();
# 1932 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __signbitf(float) throw();
# 1949 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fma(double , double , double ) throw();
# 1966 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fmaf(float , float , float ) throw();
# 1971 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __signbitl(long double) throw();
# 1977 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __finitel(long double) throw();
# 1978 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isinfl(long double) throw();
# 1979 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isnanl(long double) throw();
# 2017 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float acosf(float ) throw();
# 2031 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float asinf(float ) throw();
# 2045 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float atanf(float ) throw();
# 2060 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float atan2f(float , float ) throw();
# 2074 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float cosf(float ) throw();
# 2088 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sinf(float ) throw();
# 2102 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float tanf(float ) throw();
# 2116 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float coshf(float ) throw();
# 2129 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sinhf(float ) throw();
# 2141 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float tanhf(float ) throw();
# 2156 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float logf(float ) throw();
# 2168 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float expf(float ) throw();
# 2183 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float log10f(float ) throw();
# 2199 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float modff(float , float * ) throw();
# 2227 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float powf(float , float ) throw();
# 2242 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sqrtf(float ) throw();
# 2254 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float ceilf(float ) throw();
# 2268 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float floorf(float ) throw();
# 2288 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fmodf(float , float ) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" double acos(double ) throw(); extern "C" double __acos(double ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" double asin(double ) throw(); extern "C" double __asin(double ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" double atan(double ) throw(); extern "C" double __atan(double ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" double atan2(double , double ) throw(); extern "C" double __atan2(double , double ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" double cos(double ) throw(); extern "C" double __cos(double ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" double sin(double ) throw(); extern "C" double __sin(double ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" double tan(double ) throw(); extern "C" double __tan(double ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" double cosh(double ) throw(); extern "C" double __cosh(double ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" double sinh(double ) throw(); extern "C" double __sinh(double ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" double tanh(double ) throw(); extern "C" double __tanh(double ) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincos(double , double * , double * ) throw(); extern "C" void __sincos(double , double * , double * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" double acosh(double ) throw(); extern "C" double __acosh(double ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" double asinh(double ) throw(); extern "C" double __asinh(double ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" double atanh(double ) throw(); extern "C" double __atanh(double ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp(double ) throw(); extern "C" double __exp(double ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" double frexp(double , int * ) throw(); extern "C" double __frexp(double , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" double ldexp(double , int ) throw(); extern "C" double __ldexp(double , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" double log(double ) throw(); extern "C" double __log(double ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" double log10(double ) throw(); extern "C" double __log10(double ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" double modf(double , double * ) throw(); extern "C" double __modf(double , double * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp10(double ) throw(); extern "C" double __exp10(double ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double ) throw(); extern "C" double __pow10(double ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" double expm1(double ) throw(); extern "C" double __expm1(double ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" double log1p(double ) throw(); extern "C" double __log1p(double ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" double logb(double ) throw(); extern "C" double __logb(double ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp2(double ) throw(); extern "C" double __exp2(double ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" double log2(double ) throw(); extern "C" double __log2(double ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow(double , double ) throw(); extern "C" double __pow(double , double ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" double sqrt(double ) throw(); extern "C" double __sqrt(double ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" double hypot(double , double ) throw(); extern "C" double __hypot(double , double ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" double cbrt(double ) throw(); extern "C" double __cbrt(double ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" double ceil(double ) throw() __attribute((const)); extern "C" double __ceil(double ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" double fabs(double ) throw() __attribute((const)); extern "C" double __fabs(double ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" double floor(double ) throw() __attribute((const)); extern "C" double __floor(double ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmod(double , double ) throw(); extern "C" double __fmod(double , double ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinf(double ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finite(double ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double , double ) throw(); extern "C" double __drem(double , double ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double ) throw(); extern "C" double __significand(double ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" double copysign(double , double ) throw() __attribute((const)); extern "C" double __copysign(double , double ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" double nan(const char * ) throw() __attribute((const)); extern "C" double __nan(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnan(double ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int * ) throw(); extern "C" double __lgamma_r(double, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" double rint(double ) throw(); extern "C" double __rint(double ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" double nextafter(double , double ) throw() __attribute((const)); extern "C" double __nextafter(double , double ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double , long double ) throw() __attribute((const)); extern "C" double __nexttoward(double , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" double remainder(double , double ) throw(); extern "C" double __remainder(double , double ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalbn(double , int ) throw(); extern "C" double __scalbn(double , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogb(double ) throw(); extern "C" int __ilogb(double ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalbln(double , long ) throw(); extern "C" double __scalbln(double , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" double nearbyint(double ) throw(); extern "C" double __nearbyint(double ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" double round(double ) throw() __attribute((const)); extern "C" double __round(double ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" double trunc(double ) throw() __attribute((const)); extern "C" double __trunc(double ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" double remquo(double , double , int * ) throw(); extern "C" double __remquo(double , double , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrint(double ) throw(); extern "C" long __lrint(double ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrint(double ) throw(); extern "C" long long __llrint(double ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lround(double ) throw(); extern "C" long __lround(double ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llround(double ) throw(); extern "C" long long __llround(double ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" double fdim(double , double ) throw(); extern "C" double __fdim(double , double ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmax(double , double ) throw(); extern "C" double __fmax(double , double ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmin(double , double ) throw(); extern "C" double __fmin(double , double ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbit(double ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" double fma(double , double , double ) throw(); extern "C" double __fma(double , double , double ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double , double ) throw(); extern "C" double __scalb(double , double ) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" float acosf(float ) throw(); extern "C" float __acosf(float ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" float asinf(float ) throw(); extern "C" float __asinf(float ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" float atanf(float ) throw(); extern "C" float __atanf(float ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" float atan2f(float , float ) throw(); extern "C" float __atan2f(float , float ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" float cosf(float ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" float sinf(float ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" float tanf(float ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" float coshf(float ) throw(); extern "C" float __coshf(float ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" float sinhf(float ) throw(); extern "C" float __sinhf(float ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" float tanhf(float ) throw(); extern "C" float __tanhf(float ) throw();
# 83 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosf(float , float * , float * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" float acoshf(float ) throw(); extern "C" float __acoshf(float ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" float asinhf(float ) throw(); extern "C" float __asinhf(float ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" float atanhf(float ) throw(); extern "C" float __atanhf(float ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" float expf(float ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" float frexpf(float , int * ) throw(); extern "C" float __frexpf(float , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" float ldexpf(float , int ) throw(); extern "C" float __ldexpf(float , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" float logf(float ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" float log10f(float ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" float modff(float , float * ) throw(); extern "C" float __modff(float , float * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" float exp10f(float ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float ) throw(); extern "C" float __pow10f(float ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" float expm1f(float ) throw(); extern "C" float __expm1f(float ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" float log1pf(float ) throw(); extern "C" float __log1pf(float ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" float logbf(float ) throw(); extern "C" float __logbf(float ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" float exp2f(float ) throw(); extern "C" float __exp2f(float ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" float log2f(float ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" float powf(float , float ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" float sqrtf(float ) throw(); extern "C" float __sqrtf(float ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" float hypotf(float , float ) throw(); extern "C" float __hypotf(float , float ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" float cbrtf(float ) throw(); extern "C" float __cbrtf(float ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" float ceilf(float ) throw() __attribute((const)); extern "C" float __ceilf(float ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" float fabsf(float ) throw() __attribute((const)); extern "C" float __fabsf(float ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" float floorf(float ) throw() __attribute((const)); extern "C" float __floorf(float ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmodf(float , float ) throw(); extern "C" float __fmodf(float , float ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinff(float ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finitef(float ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float , float ) throw(); extern "C" float __dremf(float , float ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float ) throw(); extern "C" float __significandf(float ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" float copysignf(float , float ) throw() __attribute((const)); extern "C" float __copysignf(float , float ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" float nanf(const char * ) throw() __attribute((const)); extern "C" float __nanf(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnanf(float ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int * ) throw(); extern "C" float __lgammaf_r(float, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" float rintf(float ) throw(); extern "C" float __rintf(float ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" float nextafterf(float , float ) throw() __attribute((const)); extern "C" float __nextafterf(float , float ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float , long double ) throw() __attribute((const)); extern "C" float __nexttowardf(float , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" float remainderf(float , float ) throw(); extern "C" float __remainderf(float , float ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbnf(float , int ) throw(); extern "C" float __scalbnf(float , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbf(float ) throw(); extern "C" int __ilogbf(float ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalblnf(float , long ) throw(); extern "C" float __scalblnf(float , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" float nearbyintf(float ) throw(); extern "C" float __nearbyintf(float ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" float roundf(float ) throw() __attribute((const)); extern "C" float __roundf(float ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" float truncf(float ) throw() __attribute((const)); extern "C" float __truncf(float ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" float remquof(float , float , int * ) throw(); extern "C" float __remquof(float , float , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintf(float ) throw(); extern "C" long __lrintf(float ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintf(float ) throw(); extern "C" long long __llrintf(float ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundf(float ) throw(); extern "C" long __lroundf(float ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundf(float ) throw(); extern "C" long long __llroundf(float ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" float fdimf(float , float ) throw(); extern "C" float __fdimf(float , float ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmaxf(float , float ) throw(); extern "C" float __fmaxf(float , float ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" float fminf(float , float ) throw(); extern "C" float __fminf(float , float ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbitf(float ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmaf(float , float , float ) throw(); extern "C" float __fmaf(float , float , float ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float , float ) throw(); extern "C" float __scalbf(float , float ) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double ) throw(); extern "C" long double __acosl(long double ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double ) throw(); extern "C" long double __asinl(long double ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double ) throw(); extern "C" long double __atanl(long double ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double , long double ) throw(); extern "C" long double __atan2l(long double , long double ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double ) throw(); extern "C" long double __cosl(long double ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double ) throw(); extern "C" long double __sinl(long double ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double ) throw(); extern "C" long double __tanl(long double ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double ) throw(); extern "C" long double __coshl(long double ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double ) throw(); extern "C" long double __sinhl(long double ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double ) throw(); extern "C" long double __tanhl(long double ) throw();
# 83 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double , long double * , long double * ) throw();
# 83 "/usr/include/bits/mathcalls.h" 3
extern "C" void __sincosl(long double , long double * , long double * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double ) throw(); extern "C" long double __acoshl(long double ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double ) throw(); extern "C" long double __asinhl(long double ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double ) throw(); extern "C" long double __atanhl(long double ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double ) throw(); extern "C" long double __expl(long double ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double , int * ) throw(); extern "C" long double __frexpl(long double , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double , int ) throw(); extern "C" long double __ldexpl(long double , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double ) throw(); extern "C" long double __logl(long double ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double ) throw(); extern "C" long double __log10l(long double ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double , long double * ) throw(); extern "C" long double __modfl(long double , long double * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double ) throw(); extern "C" long double __exp10l(long double ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double ) throw(); extern "C" long double __pow10l(long double ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double ) throw(); extern "C" long double __expm1l(long double ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double ) throw(); extern "C" long double __log1pl(long double ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double ) throw(); extern "C" long double __logbl(long double ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double ) throw(); extern "C" long double __exp2l(long double ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double ) throw(); extern "C" long double __log2l(long double ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double , long double ) throw(); extern "C" long double __powl(long double , long double ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double ) throw(); extern "C" long double __sqrtl(long double ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double , long double ) throw(); extern "C" long double __hypotl(long double , long double ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double ) throw(); extern "C" long double __cbrtl(long double ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double ) throw() __attribute((const)); extern "C" long double __ceill(long double ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double ) throw() __attribute((const)); extern "C" long double __fabsl(long double ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double ) throw() __attribute((const)); extern "C" long double __floorl(long double ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double , long double ) throw(); extern "C" long double __fmodl(long double , long double ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinfl(long double ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finitel(long double ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double , long double ) throw(); extern "C" long double __dreml(long double , long double ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double ) throw(); extern "C" long double __significandl(long double ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double , long double ) throw() __attribute((const)); extern "C" long double __copysignl(long double , long double ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char * ) throw() __attribute((const)); extern "C" long double __nanl(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnanl(long double ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int * ) throw(); extern "C" long double __lgammal_r(long double, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double ) throw(); extern "C" long double __rintl(long double ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double , long double ) throw() __attribute((const)); extern "C" long double __nextafterl(long double , long double ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double , long double ) throw() __attribute((const)); extern "C" long double __nexttowardl(long double , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double , long double ) throw(); extern "C" long double __remainderl(long double , long double ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double , int ) throw(); extern "C" long double __scalbnl(long double , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double ) throw(); extern "C" int __ilogbl(long double ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double , long ) throw(); extern "C" long double __scalblnl(long double , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double ) throw(); extern "C" long double __nearbyintl(long double ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double ) throw() __attribute((const)); extern "C" long double __roundl(long double ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double ) throw() __attribute((const)); extern "C" long double __truncl(long double ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double , long double , int * ) throw(); extern "C" long double __remquol(long double , long double , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double ) throw(); extern "C" long __lrintl(long double ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double ) throw(); extern "C" long long __llrintl(long double ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double ) throw(); extern "C" long __lroundl(long double ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double ) throw(); extern "C" long long __llroundl(long double ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double , long double ) throw(); extern "C" long double __fdiml(long double , long double ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double , long double ) throw(); extern "C" long double __fmaxl(long double , long double ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double , long double ) throw(); extern "C" long double __fminl(long double , long double ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbitl(long double ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double , long double , long double ) throw(); extern "C" long double __fmal(long double , long double , long double ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double , long double ) throw(); extern "C" long double __scalbl(long double , long double ) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception * ) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char * ) throw()
# 146 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char * ) throw()
# 149 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char * ) throw()
# 152 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char * ) throw()
# 159 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__ , char **__restrict__ ) throw()
# 167 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__ , char **__restrict__ ) throw()
# 174 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__ , char **__restrict__ ) throw()
# 178 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__ , char **__restrict__ , int ) throw()
# 186 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__ , char **__restrict__ , int ) throw()
# 190 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 198 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 203 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__ , char **__restrict__ , int ) throw()
# 212 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__ , char **__restrict__ , int ) throw()
# 217 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 242 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 247 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 253 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 259 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 263 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 267 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 272 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long ) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char * ) throw()
# 315 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t __attribute((__mode__(__QI__))); }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t __attribute((__mode__(__HI__))); }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t __attribute((__mode__(__SI__))); }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t __attribute((__mode__(__DI__))); }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t __attribute((__mode__(__SI__))); }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef long register_t __attribute((__mode__(__word__))); }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , timeval *__restrict__ );
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , const timespec *__restrict__ , const __sigset_t *__restrict__ );
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long ) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long ) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned , unsigned ) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned ) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned , char * , size_t ) throw()
# 337 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char * ) throw() __attribute((__nonnull__(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__ , int32_t *__restrict__ ) throw()
# 361 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned , random_data * ) throw()
# 364 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned , char *__restrict__ , size_t , random_data *__restrict__ ) throw()
# 369 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2, 4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__ , random_data *__restrict__ ) throw()
# 373 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned ) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned * ) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute((__nonnull__(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw()
# 401 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw()
# 406 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long ) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw()
# 411 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute((__nonnull__(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__ , double *__restrict__ ) throw()
# 429 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__ , double *__restrict__ ) throw()
# 432 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 437 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 441 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 446 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 450 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long , drand48_data * ) throw()
# 454 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data * ) throw()
# 457 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data * ) throw()
# 461 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t ) throw() __attribute((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t , size_t ) throw()
# 474 "/usr/include/stdlib.h" 3
 __attribute((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void * , size_t ) throw()
# 486 "/usr/include/stdlib.h" 3
 __attribute((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void * ) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void * ) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t ) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t ) throw() __attribute((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void ** , size_t , size_t ) throw()
# 509 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (* )(void)) throw() __attribute((__nonnull__(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (* )(void)) throw() __asm__("at_quick_exit")
# 526 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (* )(int , void * ), void * ) throw()
# 537 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int ) throw() __attribute((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int ) throw() __attribute((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int ) throw() __attribute((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char * ) throw() __attribute((__nonnull__(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char * ) throw()
# 573 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char * ) throw() __attribute((__nonnull__(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char * , const char * , int ) throw()
# 586 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char * ) throw() __attribute((__nonnull__(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char * ) throw() __attribute((__nonnull__(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char * ) __attribute((__nonnull__(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char * ) __attribute((__nonnull__(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char * , int ) __attribute((__nonnull__(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char * , int )
# 653 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char * ) throw() __attribute((__nonnull__(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char * , int ) __attribute((__nonnull__(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char * , int ) __attribute((__nonnull__(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char * , int , int )
# 695 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char * , int , int )
# 707 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char * );
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char * ) throw()
# 725 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__ , char *__restrict__ ) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void * , const void * , size_t , size_t , __compar_fn_t )
# 757 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void * , size_t , size_t , __compar_fn_t )
# 762 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void * , size_t , size_t , __compar_d_fn_t , void * )
# 766 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" int abs(int ) throw() __attribute((const));
# 772 "/usr/include/stdlib.h" 3
extern "C" long labs(long ) throw() __attribute((const));
# 776 "/usr/include/stdlib.h" 3
extern "C" long long llabs(long long ) throw()
# 777 "/usr/include/stdlib.h" 3
 __attribute((const));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int , int ) throw()
# 786 "/usr/include/stdlib.h" 3
 __attribute((const));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long , long ) throw()
# 788 "/usr/include/stdlib.h" 3
 __attribute((const));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long , long long ) throw()
# 795 "/usr/include/stdlib.h" 3
 __attribute((const));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 809 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 815 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double , int , char * ) throw()
# 821 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 828 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 831 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double , int , char * ) throw()
# 833 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 840 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 843 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 848 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 852 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char * , size_t ) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char * , wchar_t ) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__ , const wchar_t *__restrict__ , size_t ) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char * ) throw() __attribute((__nonnull__(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__ , char *const *__restrict__ , char **__restrict__ ) throw()
# 899 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char * ) throw() __attribute((__nonnull__(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int );
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int ) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int ) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int ) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int , char * , size_t ) throw()
# 938 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int ) throw()
# 949 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 69 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 71 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
namespace std __attribute((__visibility__("default"))) {
# 78 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)};
# 95 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 418 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
class __is_iterator_helper {
# 420 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef char __one;
# 421 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef struct { char __arr[2]; } __two;
# 423 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Up>
# 424 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct _Wrap_type {
# 425 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 427 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Up> static __one __test(_Wrap_type< typename _Up::iterator_category> *);
# 430 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Up> static __two __test(...);
# 434 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
public: static const bool __value = ((sizeof(__test< _Tp> (0)) == (1)) || __is_pointer< _Tp> ::__value);
# 436 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 438 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 439 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_iterator {
# 441 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = __is_iterator_helper< _Tp> ::__value};
# 442 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 443 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 445 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.5/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 40 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.5/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.5/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.5/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.5/cmath" 3
namespace std __attribute((__visibility__("default"))) {
# 81 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.5/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.5/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.5/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    abs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 111 "/usr/include/c++/4.5/cmath" 3
using ::acos;
# 114 "/usr/include/c++/4.5/cmath" 3
inline float acos(float __x)
# 115 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_acosf(__x); }
# 118 "/usr/include/c++/4.5/cmath" 3
inline long double acos(long double __x)
# 119 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_acosl(__x); }
# 121 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 127 "/usr/include/c++/4.5/cmath" 3
using ::asin;
# 130 "/usr/include/c++/4.5/cmath" 3
inline float asin(float __x)
# 131 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_asinf(__x); }
# 134 "/usr/include/c++/4.5/cmath" 3
inline long double asin(long double __x)
# 135 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_asinl(__x); }
# 137 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 143 "/usr/include/c++/4.5/cmath" 3
using ::atan;
# 146 "/usr/include/c++/4.5/cmath" 3
inline float atan(float __x)
# 147 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atanf(__x); }
# 150 "/usr/include/c++/4.5/cmath" 3
inline long double atan(long double __x)
# 151 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atanl(__x); }
# 153 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 159 "/usr/include/c++/4.5/cmath" 3
using ::atan2;
# 162 "/usr/include/c++/4.5/cmath" 3
inline float atan2(float __y, float __x)
# 163 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 166 "/usr/include/c++/4.5/cmath" 3
inline long double atan2(long double __y, long double __x)
# 167 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 169 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 181 "/usr/include/c++/4.5/cmath" 3
using ::ceil;
# 184 "/usr/include/c++/4.5/cmath" 3
inline float ceil(float __x)
# 185 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ceilf(__x); }
# 188 "/usr/include/c++/4.5/cmath" 3
inline long double ceil(long double __x)
# 189 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ceill(__x); }
# 191 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 197 "/usr/include/c++/4.5/cmath" 3
using ::cos;
# 200 "/usr/include/c++/4.5/cmath" 3
inline float cos(float __x)
# 201 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_cosf(__x); }
# 204 "/usr/include/c++/4.5/cmath" 3
inline long double cos(long double __x)
# 205 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_cosl(__x); }
# 207 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 213 "/usr/include/c++/4.5/cmath" 3
using ::cosh;
# 216 "/usr/include/c++/4.5/cmath" 3
inline float cosh(float __x)
# 217 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_coshf(__x); }
# 220 "/usr/include/c++/4.5/cmath" 3
inline long double cosh(long double __x)
# 221 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_coshl(__x); }
# 223 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 229 "/usr/include/c++/4.5/cmath" 3
using ::exp;
# 232 "/usr/include/c++/4.5/cmath" 3
inline float exp(float __x)
# 233 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_expf(__x); }
# 236 "/usr/include/c++/4.5/cmath" 3
inline long double exp(long double __x)
# 237 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_expl(__x); }
# 239 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 245 "/usr/include/c++/4.5/cmath" 3
using ::fabs;
# 248 "/usr/include/c++/4.5/cmath" 3
inline float fabs(float __x)
# 249 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsf(__x); }
# 252 "/usr/include/c++/4.5/cmath" 3
inline long double fabs(long double __x)
# 253 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsl(__x); }
# 255 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 261 "/usr/include/c++/4.5/cmath" 3
using ::floor;
# 264 "/usr/include/c++/4.5/cmath" 3
inline float floor(float __x)
# 265 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_floorf(__x); }
# 268 "/usr/include/c++/4.5/cmath" 3
inline long double floor(long double __x)
# 269 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_floorl(__x); }
# 271 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 277 "/usr/include/c++/4.5/cmath" 3
using ::fmod;
# 280 "/usr/include/c++/4.5/cmath" 3
inline float fmod(float __x, float __y)
# 281 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 284 "/usr/include/c++/4.5/cmath" 3
inline long double fmod(long double __x, long double __y)
# 285 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 287 "/usr/include/c++/4.5/cmath" 3
using ::frexp;
# 290 "/usr/include/c++/4.5/cmath" 3
inline float frexp(float __x, int *__exp)
# 291 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 294 "/usr/include/c++/4.5/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 295 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 297 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 303 "/usr/include/c++/4.5/cmath" 3
using ::ldexp;
# 306 "/usr/include/c++/4.5/cmath" 3
inline float ldexp(float __x, int __exp)
# 307 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 310 "/usr/include/c++/4.5/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 311 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 313 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 319 "/usr/include/c++/4.5/cmath" 3
using ::log;
# 322 "/usr/include/c++/4.5/cmath" 3
inline float log(float __x)
# 323 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_logf(__x); }
# 326 "/usr/include/c++/4.5/cmath" 3
inline long double log(long double __x)
# 327 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_logl(__x); }
# 329 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 335 "/usr/include/c++/4.5/cmath" 3
using ::log10;
# 338 "/usr/include/c++/4.5/cmath" 3
inline float log10(float __x)
# 339 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_log10f(__x); }
# 342 "/usr/include/c++/4.5/cmath" 3
inline long double log10(long double __x)
# 343 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_log10l(__x); }
# 345 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 351 "/usr/include/c++/4.5/cmath" 3
using ::modf;
# 354 "/usr/include/c++/4.5/cmath" 3
inline float modf(float __x, float *__iptr)
# 355 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 358 "/usr/include/c++/4.5/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 359 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 361 "/usr/include/c++/4.5/cmath" 3
using ::pow;
# 364 "/usr/include/c++/4.5/cmath" 3
inline float pow(float __x, float __y)
# 365 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powf(__x, __y); }
# 368 "/usr/include/c++/4.5/cmath" 3
inline long double pow(long double __x, long double __y)
# 369 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powl(__x, __y); }
# 375 "/usr/include/c++/4.5/cmath" 3
inline double pow(double __x, int __i)
# 376 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powi(__x, __i); }
# 379 "/usr/include/c++/4.5/cmath" 3
inline float pow(float __x, int __n)
# 380 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powif(__x, __n); }
# 383 "/usr/include/c++/4.5/cmath" 3
inline long double pow(long double __x, int __n)
# 384 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powil(__x, __n); }
# 387 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 399 "/usr/include/c++/4.5/cmath" 3
using ::sin;
# 402 "/usr/include/c++/4.5/cmath" 3
inline float sin(float __x)
# 403 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinf(__x); }
# 406 "/usr/include/c++/4.5/cmath" 3
inline long double sin(long double __x)
# 407 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinl(__x); }
# 409 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 415 "/usr/include/c++/4.5/cmath" 3
using ::sinh;
# 418 "/usr/include/c++/4.5/cmath" 3
inline float sinh(float __x)
# 419 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinhf(__x); }
# 422 "/usr/include/c++/4.5/cmath" 3
inline long double sinh(long double __x)
# 423 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinhl(__x); }
# 425 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 431 "/usr/include/c++/4.5/cmath" 3
using ::sqrt;
# 434 "/usr/include/c++/4.5/cmath" 3
inline float sqrt(float __x)
# 435 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sqrtf(__x); }
# 438 "/usr/include/c++/4.5/cmath" 3
inline long double sqrt(long double __x)
# 439 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sqrtl(__x); }
# 441 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 447 "/usr/include/c++/4.5/cmath" 3
using ::tan;
# 450 "/usr/include/c++/4.5/cmath" 3
inline float tan(float __x)
# 451 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanf(__x); }
# 454 "/usr/include/c++/4.5/cmath" 3
inline long double tan(long double __x)
# 455 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanl(__x); }
# 457 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 463 "/usr/include/c++/4.5/cmath" 3
using ::tanh;
# 466 "/usr/include/c++/4.5/cmath" 3
inline float tanh(float __x)
# 467 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanhf(__x); }
# 470 "/usr/include/c++/4.5/cmath" 3
inline long double tanh(long double __x)
# 471 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanhl(__x); }
# 473 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 479 "/usr/include/c++/4.5/cmath" 3
}
# 498 "/usr/include/c++/4.5/cmath" 3
namespace std __attribute((__visibility__("default"))) {
# 500 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 510 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 519 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 528 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 537 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 546 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 555 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 564 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 573 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 582 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 591 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 600 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 609 "/usr/include/c++/4.5/cmath" 3
}
# 35 "/usr/include/c++/4.5/bits/cmath.tcc" 3
namespace std __attribute((__visibility__("default"))) {
# 37 "/usr/include/c++/4.5/bits/cmath.tcc" 3
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53 "/usr/include/c++/4.5/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.5/cstddef" 3
namespace std __attribute((__visibility__("default"))) {
# 51 "/usr/include/c++/4.5/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.5/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.5/cstddef" 3
}
# 100 "/usr/include/c++/4.5/cstdlib" 3
namespace std __attribute((__visibility__("default"))) {
# 102 "/usr/include/c++/4.5/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.5/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.5/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.5/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.5/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.5/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.5/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.5/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.5/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.5/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.5/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.5/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.5/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.5/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.5/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.5/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.5/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.5/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.5/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.5/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.5/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.5/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.5/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.5/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.5/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.5/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.5/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.5/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.5/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.5/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.5/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.5/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.5/cstdlib" 3
}
# 157 "/usr/include/c++/4.5/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 160 "/usr/include/c++/4.5/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.5/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.5/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.5/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.5/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.5/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.5/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.5/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.5/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.5/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.5/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.5/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.5/cstdlib" 3
}
# 199 "/usr/include/c++/4.5/cstdlib" 3
namespace std __attribute((__visibility__("default"))) {
# 202 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.5/cstdlib" 3
}
# 2335 "/usr/local/cuda4.1/cuda/include/math_functions.h"
namespace __gnu_cxx {
# 2337 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline long long abs(long long);
# 2338 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2340 "/usr/local/cuda4.1/cuda/include/math_functions.h"
namespace std {
# 2342 "/usr/local/cuda4.1/cuda/include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 2343 "/usr/local/cuda4.1/cuda/include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 2344 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2346 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::abs;
# 2347 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::fabs;
# 2348 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::ceil;
# 2349 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::floor;
# 2350 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::sqrt;
# 2351 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::pow;
# 2352 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::log;
# 2353 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::log10;
# 2354 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::fmod;
# 2355 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::modf;
# 2356 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::exp;
# 2357 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::frexp;
# 2358 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::ldexp;
# 2359 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::asin;
# 2360 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::sin;
# 2361 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::sinh;
# 2362 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::acos;
# 2363 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::cos;
# 2364 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::cosh;
# 2365 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::atan;
# 2366 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::atan2;
# 2367 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::tan;
# 2368 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::tanh;
# 2531 "/usr/local/cuda4.1/cuda/include/math_functions.h"
namespace std {
# 2534 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline long abs(long);
# 2535 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float abs(float);
# 2536 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline double abs(double);
# 2537 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float fabs(float);
# 2538 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float ceil(float);
# 2539 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float floor(float);
# 2540 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float sqrt(float);
# 2541 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float pow(float, float);
# 2542 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float pow(float, int);
# 2543 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline double pow(double, int);
# 2544 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float log(float);
# 2545 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float log10(float);
# 2546 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float fmod(float, float);
# 2547 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float modf(float, float *);
# 2548 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float exp(float);
# 2549 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float frexp(float, int *);
# 2550 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float ldexp(float, int);
# 2551 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float asin(float);
# 2552 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float sin(float);
# 2553 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float sinh(float);
# 2554 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float acos(float);
# 2555 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float cos(float);
# 2556 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float cosh(float);
# 2557 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float atan(float);
# 2558 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float atan2(float, float);
# 2559 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float tan(float);
# 2560 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float tanh(float);
# 2563 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2566 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float logb(float a)
# 2567 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2568 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return logbf(a);
# 2569 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2571 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline int ilogb(float a)
# 2572 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2573 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ilogbf(a);
# 2574 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2576 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float scalbn(float a, int b)
# 2577 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2578 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return scalbnf(a, b);
# 2579 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2581 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float scalbln(float a, long b)
# 2582 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2583 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return scalblnf(a, b);
# 2584 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2586 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float exp2(float a)
# 2587 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2588 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return exp2f(a);
# 2589 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2591 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float exp10(float a)
# 2592 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2593 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return exp10f(a);
# 2594 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2596 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float expm1(float a)
# 2597 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2598 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return expm1f(a);
# 2599 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2601 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float log2(float a)
# 2602 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2603 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return log2f(a);
# 2604 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2606 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float log1p(float a)
# 2607 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2608 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return log1pf(a);
# 2609 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2611 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float rsqrt(float a)
# 2612 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2613 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return rsqrtf(a);
# 2614 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2616 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float acosh(float a)
# 2617 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2618 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return acoshf(a);
# 2619 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2621 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float asinh(float a)
# 2622 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2623 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return asinhf(a);
# 2624 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2626 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float atanh(float a)
# 2627 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2628 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return atanhf(a);
# 2629 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2631 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float hypot(float a, float b)
# 2632 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2633 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return hypotf(a, b);
# 2634 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2636 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float cbrt(float a)
# 2637 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2638 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return cbrtf(a);
# 2639 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2641 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float rcbrt(float a)
# 2642 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2643 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return rcbrtf(a);
# 2644 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2646 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float sinpi(float a)
# 2647 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2648 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return sinpif(a);
# 2649 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2651 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float cospi(float a)
# 2652 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2653 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return cospif(a);
# 2654 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2656 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 2657 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2658 "/usr/local/cuda4.1/cuda/include/math_functions.h"
sincosf(a, sptr, cptr);
# 2659 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2661 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float j0(float a)
# 2662 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2663 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return j0f(a);
# 2664 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2666 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float j1(float a)
# 2667 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2668 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return j1f(a);
# 2669 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2671 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float jn(int n, float a)
# 2672 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2673 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return jnf(n, a);
# 2674 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2676 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float y0(float a)
# 2677 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2678 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return y0f(a);
# 2679 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2681 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float y1(float a)
# 2682 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2683 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return y1f(a);
# 2684 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2686 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float yn(int n, float a)
# 2687 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2688 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ynf(n, a);
# 2689 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2691 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erf(float a)
# 2692 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2693 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erff(a);
# 2694 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2696 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfinv(float a)
# 2697 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2698 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfinvf(a);
# 2699 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2701 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfc(float a)
# 2702 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2703 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfcf(a);
# 2704 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2706 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfcinv(float a)
# 2707 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2708 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfcinvf(a);
# 2709 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2711 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfcx(float a)
# 2712 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2713 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfcxf(a);
# 2714 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2716 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float lgamma(float a)
# 2717 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2718 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return lgammaf(a);
# 2719 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2721 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float tgamma(float a)
# 2722 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2723 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return tgammaf(a);
# 2724 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2726 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float copysign(float a, float b)
# 2727 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2728 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return copysignf(a, b);
# 2729 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2731 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double copysign(double a, float b)
# 2732 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2733 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return copysign(a, (double)b);
# 2734 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2736 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float copysign(float a, double b)
# 2737 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2738 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return copysignf(a, (float)b);
# 2739 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2741 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float nextafter(float a, float b)
# 2742 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2743 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return nextafterf(a, b);
# 2744 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2746 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float remainder(float a, float b)
# 2747 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2748 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return remainderf(a, b);
# 2749 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2751 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 2752 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2753 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return remquof(a, b, quo);
# 2754 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2756 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float round(float a)
# 2757 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2758 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return roundf(a);
# 2759 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2761 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long lround(float a)
# 2762 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2763 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return lroundf(a);
# 2764 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2766 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long llround(float a)
# 2767 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2768 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llroundf(a);
# 2769 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2771 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float trunc(float a)
# 2772 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2773 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return truncf(a);
# 2774 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2776 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float rint(float a)
# 2777 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2778 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return rintf(a);
# 2779 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2781 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long lrint(float a)
# 2782 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2783 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return lrintf(a);
# 2784 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2786 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long llrint(float a)
# 2787 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2788 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llrintf(a);
# 2789 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2791 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float nearbyint(float a)
# 2792 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2793 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return nearbyintf(a);
# 2794 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2796 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fdim(float a, float b)
# 2797 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2798 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fdimf(a, b);
# 2799 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2801 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fma(float a, float b, float c)
# 2802 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2803 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmaf(a, b, c);
# 2804 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2806 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fmax(float a, float b)
# 2807 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2808 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmaxf(a, b);
# 2809 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2811 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fmin(float a, float b)
# 2812 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2813 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fminf(a, b);
# 2814 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2816 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 2817 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2818 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umin(a, b);
# 2819 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2821 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 2822 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2823 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umin((unsigned)a, b);
# 2824 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2826 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 2827 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2828 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umin(a, (unsigned)b);
# 2829 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2831 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long min(long long a, long long b)
# 2832 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2833 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llmin(a, b);
# 2834 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2836 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 2837 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2838 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmin(a, b);
# 2839 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2841 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 2842 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2843 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 2844 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2846 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 2847 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2848 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 2849 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2851 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float min(float a, float b)
# 2852 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2853 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fminf(a, b);
# 2854 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2856 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double min(double a, double b)
# 2857 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2858 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmin(a, b);
# 2859 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2861 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double min(float a, double b)
# 2862 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2863 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmin((double)a, b);
# 2864 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2866 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double min(double a, float b)
# 2867 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2868 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmin(a, (double)b);
# 2869 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2871 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 2872 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2873 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umax(a, b);
# 2874 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2876 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 2877 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2878 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umax((unsigned)a, b);
# 2879 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2881 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 2882 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2883 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umax(a, (unsigned)b);
# 2884 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2886 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long max(long long a, long long b)
# 2887 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2888 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llmax(a, b);
# 2889 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2891 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 2892 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2893 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmax(a, b);
# 2894 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2896 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 2897 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2898 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 2899 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2901 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 2902 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2903 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 2904 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2906 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float max(float a, float b)
# 2907 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2908 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmaxf(a, b);
# 2909 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2911 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double max(double a, double b)
# 2912 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2913 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmax(a, b);
# 2914 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2916 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double max(float a, double b)
# 2917 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2918 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmax((double)a, b);
# 2919 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2921 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double max(double a, float b)
# 2922 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2923 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmax(a, (double)b);
# 2924 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 73 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
template< class T, int dim = 1>
# 74 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 76 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
surface()
# 77 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
{
# 78 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 79 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
}
# 81 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 82 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
{
# 83 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
(channelDesc) = desc;
# 84 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
}
# 85 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
};
# 87 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
template< int dim>
# 88 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 90 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
surface()
# 91 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
{
# 92 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 93 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
}
# 94 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
};
# 73 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 74 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
struct texture : public textureReference {
# 76 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 77 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 78 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 79 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 86 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(sRGB) = 0;
# 87 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
}
# 89 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 90 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 91 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 92 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
desc)
# 93 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
{
# 94 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(normalized) = norm;
# 95 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(filterMode) = fMode;
# 96 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 97 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 98 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 99 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(channelDesc) = desc;
# 100 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(sRGB) = 0;
# 101 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
}
# 102 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
};
# 1103 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 1104 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1106 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1108 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 1109 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1111 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1113 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 1114 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1116 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1118 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 1119 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1121 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1123 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 1124 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1126 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1128 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 1129 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1131 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1133 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 1134 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1136 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1138 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 1139 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1141 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1143 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 1144 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 1146 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1148 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 1149 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 1151 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1153 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 1154 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 1156 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1158 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 1159 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1161 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1163 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 1164 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1166 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1168 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 1169 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;
# 1171 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1174 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c = 0)
# 1175 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)c;
# 1177 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1179 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 1180 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1184 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 1185 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)e;
# 1202 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1204 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 1205 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)global;
# 1207 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1209 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 1210 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1215 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1217 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 1218 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1223 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1225 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 1226 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1231 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1233 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 1234 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1239 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 96 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 97 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 99 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 101 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 102 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 104 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 106 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 107 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 109 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 111 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 112 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 114 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 116 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 117 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 119 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 121 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 122 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 124 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 126 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 127 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 129 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 131 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 132 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 134 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 136 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 137 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 139 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 141 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 142 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 144 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 146 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 147 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 149 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 151 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 152 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 154 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 156 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 157 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 159 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 161 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 162 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 164 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 166 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 167 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 169 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 171 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 172 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 174 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 176 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 177 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 179 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 181 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 182 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 184 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 186 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 187 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 189 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 191 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 192 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 194 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 196 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 197 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 199 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 81 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 82 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 84 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 86 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 87 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 89 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 91 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 92 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 94 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 96 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 97 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 99 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 101 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 102 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 104 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 521 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 522 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 527 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 529 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 530 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 535 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 537 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 538 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 543 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 545 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 546 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 551 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 553 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 554 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 559 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 561 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 562 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 567 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 569 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 570 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 575 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 577 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 578 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 583 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 585 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 586 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 591 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 593 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 594 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 596 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 598 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 599 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 601 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 603 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 604 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 606 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 77 "/usr/local/cuda4.1/cuda/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 78 "/usr/local/cuda4.1/cuda/include/sm_20_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 80 "/usr/local/cuda4.1/cuda/include/sm_20_atomic_functions.h"
exit(___);}
# 239 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 240 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 242 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 244 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 245 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 247 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 249 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 250 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 252 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 254 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 255 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 257 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 99 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 100 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 101 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 108 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 110 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 111 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 112 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 118 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 120 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 121 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 122 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 124 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 128 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 130 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 133 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 134 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 136 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 139 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 140 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 142 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 145 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 146 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 148 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 151 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 152 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 154 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 157 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 158 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 162 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 165 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 166 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 168 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 171 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 172 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 176 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 179 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 182 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 185 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 191 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 192 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 194 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 197 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 198 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 200 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 203 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 204 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 206 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 209 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 214 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 217 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 218 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 220 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 224 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 228 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 232 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 234 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 237 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 238 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 240 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 243 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 244 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 246 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 249 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 250 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 252 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 256 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 262 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 266 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 269 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 270 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 272 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 280 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 284 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 286 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 289 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 290 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 292 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 295 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 296 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 298 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 301 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 302 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 304 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 307 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 308 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 310 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 314 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 318 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 321 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 322 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 324 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 387 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 388 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 390 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 393 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 394 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 396 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 399 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 400 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 404 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 407 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 408 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 412 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 447 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 448 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 449 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 456 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 458 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 459 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 460 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 466 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 469 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 472 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 475 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 476 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 478 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 481 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 482 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 484 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 487 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 488 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 490 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 494 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 496 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 499 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 500 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 502 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 505 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 506 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 510 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 513 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 514 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 516 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 519 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 520 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 524 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 527 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 528 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 530 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 533 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 534 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 536 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 539 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 540 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 542 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 545 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 546 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 548 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 551 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 552 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 554 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 558 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 562 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 565 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 566 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 568 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 571 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 572 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 576 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 579 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 580 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 582 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 585 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 586 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 588 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 591 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 592 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 594 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 597 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 598 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 600 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 603 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 604 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 606 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 609 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 610 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 614 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 617 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 618 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 620 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 623 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 628 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 631 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 632 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 634 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 637 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 638 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 640 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 643 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 644 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 646 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 649 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 650 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 652 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 655 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 656 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 658 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 661 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 662 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 666 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 669 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 670 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 672 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 735 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 736 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 738 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 741 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 742 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 744 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 747 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 748 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 752 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 755 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 756 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 760 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 795 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 796 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dread(T *res, surface< void, 3> surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 797 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 804 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 806 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 807 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 808 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 814 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 816 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 817 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dread(T *res, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 818 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 820 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 823 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 824 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 826 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 829 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 830 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 832 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 835 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 836 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 838 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 841 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 842 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 844 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 847 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 848 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 850 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 853 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 854 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 858 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 862 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 864 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 867 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 868 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 872 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 875 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 876 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 878 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 882 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 884 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 887 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 888 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 890 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 893 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 896 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 899 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 900 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 902 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 905 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 910 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 913 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 914 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 916 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 919 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 920 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 924 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 927 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 928 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 930 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 933 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 934 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 936 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 939 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 940 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 942 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 945 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 946 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 948 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 952 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 954 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 957 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 958 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 962 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 965 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 966 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 968 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 972 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 976 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 979 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 980 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 982 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 985 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 988 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 992 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 994 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 997 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 998 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1000 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1003 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1004 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1006 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1009 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1010 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1014 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1017 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1018 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1020 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1083 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1084 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1086 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1089 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1090 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1092 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1095 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1096 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1100 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1103 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1104 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1108 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1143 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1144 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredread(T *res, surface< void, 241> surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 1152 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 1155 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1156 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1162 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1165 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredread(T *res, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1166 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 1168 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1171 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1172 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1174 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1177 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1178 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1183 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1184 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1192 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1195 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1196 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1198 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1201 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1202 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1206 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1212 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1215 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1216 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1220 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1224 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1226 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1230 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1232 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1235 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1236 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1238 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1241 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1242 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1244 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1247 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1248 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1250 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1253 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1254 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1262 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1264 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1267 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1272 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1278 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1282 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1284 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1287 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1288 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1290 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1293 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1294 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1296 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1299 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1300 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1302 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1305 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1306 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1310 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1314 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1316 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1319 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1320 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1324 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1327 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1328 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1330 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1333 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1334 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1336 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1340 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1342 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1345 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1346 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1348 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1351 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1352 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1354 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1357 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1358 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1362 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1365 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1366 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1368 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1431 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1432 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1434 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1437 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1438 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1440 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1443 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1444 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1448 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1451 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1452 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1456 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1491 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1492 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredread(T *res, surface< void, 242> surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 1500 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1502 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 1503 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1504 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1510 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1512 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1513 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredread(T *res, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1514 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1516 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1519 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1520 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1522 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1525 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1526 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1528 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1531 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1532 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1534 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1537 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1538 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1540 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1543 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1544 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1546 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1549 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1550 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1554 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1558 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1560 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1563 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1564 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1568 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1571 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1572 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1574 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1577 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1578 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1580 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1583 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1584 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1586 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1589 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1590 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1592 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1595 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1596 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1598 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1601 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1602 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1606 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1609 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1610 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1612 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1615 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1616 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1620 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1623 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1626 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1629 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1630 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1632 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1635 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1636 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1638 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1641 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1642 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1644 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1647 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1648 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1650 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1653 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1654 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1658 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1661 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1662 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1664 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1667 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1668 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1672 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1675 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1676 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1678 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1681 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1682 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1684 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1687 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1688 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1690 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1693 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1694 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1696 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1699 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1700 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1702 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1705 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1706 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1710 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1713 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1714 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1716 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1779 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1780 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1782 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1785 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1786 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1788 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1791 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1792 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1796 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1799 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1800 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1804 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1839 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1840 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapread(T *res, surface< void, 12> surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1841 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 1848 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1850 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 1851 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1852 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1858 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1860 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1861 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapread(T *res, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1862 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1864 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1867 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1868 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1870 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1873 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1874 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1876 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1879 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1880 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1882 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1885 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1886 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1888 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1891 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1892 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1897 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1898 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1902 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1905 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1908 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1911 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1912 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1916 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1919 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1920 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1922 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1925 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1926 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1928 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1931 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1932 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1934 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1937 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1938 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1940 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1943 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1944 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1946 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1949 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1950 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1954 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1957 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1958 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1960 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1963 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1964 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1968 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1972 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1974 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1977 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1978 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1980 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1983 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1984 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1989 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1990 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1992 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1995 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1996 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1998 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2001 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2002 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2006 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2009 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2010 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2012 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2015 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2016 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2020 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2023 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2024 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2026 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2029 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2030 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2032 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2035 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2036 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2038 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2041 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2042 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2044 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2047 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2048 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2050 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2053 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2054 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2058 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2061 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2062 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2064 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2128 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2130 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2133 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2134 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2136 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2139 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2140 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2144 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2147 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2148 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2152 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2189 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredread(T *res, surface< void, 252> surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 2197 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2199 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 2200 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2201 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2207 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2209 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredread(T *res, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2211 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2213 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2216 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2217 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2219 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2222 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2225 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2228 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2229 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2234 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2235 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2237 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2240 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2241 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2243 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2246 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2247 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2251 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2254 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2257 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2260 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2265 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2269 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2271 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2274 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2277 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2280 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2286 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2287 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2289 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2292 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2293 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2295 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2298 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2299 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2303 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2306 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2307 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2309 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2312 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2317 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2320 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2321 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2323 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2326 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2327 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2329 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2332 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2333 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2335 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2338 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2341 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2344 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2345 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2347 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2350 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2351 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2355 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2358 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2359 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2361 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2364 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2365 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2369 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2372 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2373 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2375 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2378 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2379 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2381 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2384 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2385 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2387 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2390 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2391 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2393 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2396 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2397 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2399 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2402 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2403 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2407 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2410 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2411 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2413 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2476 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2477 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2479 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2482 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2483 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2485 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2488 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2489 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2496 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2497 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2501 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2537 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2538 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2539 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 2557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2559 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2560 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2561 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2563 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2566 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2567 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2569 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2571 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2572 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2574 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2576 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2577 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2579 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2581 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2582 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2584 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2586 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2587 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2589 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2591 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2592 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2594 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2596 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2597 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2599 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2601 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2602 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2604 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2606 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2607 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2609 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2611 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2612 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2614 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2616 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2617 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2619 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2621 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2622 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2626 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2627 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2629 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2631 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2632 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2634 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2636 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2637 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2639 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2641 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2642 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2644 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2646 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2647 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2649 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2651 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2652 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2654 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2656 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2657 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2659 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2661 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2662 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2664 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2666 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2667 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2669 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2671 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2672 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2674 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2676 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2677 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2679 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2681 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2682 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2684 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2686 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2687 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2689 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2691 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2692 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2694 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2696 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2697 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2699 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2701 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2702 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2704 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2706 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2707 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2709 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2711 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2712 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2714 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2716 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2717 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2719 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2765 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2766 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2768 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2770 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2771 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2773 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2775 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2776 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2778 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2780 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2781 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2783 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2819 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2820 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2821 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 2839 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2841 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2842 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2843 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2845 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2848 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2849 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2851 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2853 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2854 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2856 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2858 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2859 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2861 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2863 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2864 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2866 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2868 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2869 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2871 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2873 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2874 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2876 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2878 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2879 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2881 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2883 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2884 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2886 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2888 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2889 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2891 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2893 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2896 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2898 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2899 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2901 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2903 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2904 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2908 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2909 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2911 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2913 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2914 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2916 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2918 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2919 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2921 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2923 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2924 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2926 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2928 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2929 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2931 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2933 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2934 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2936 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2938 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2939 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2941 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2943 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2944 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2946 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2948 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2949 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2951 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2953 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2954 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2956 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2958 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2959 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2961 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2963 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2964 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2966 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2968 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2969 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2973 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2974 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2976 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2978 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2979 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2981 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2983 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2984 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2988 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2989 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2991 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2993 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2994 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2996 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2998 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2999 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3001 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3047 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3048 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3050 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3052 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3053 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3055 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3057 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3058 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3060 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3062 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3063 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3065 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3101 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3102 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dwrite(T val, surface< void, 3> surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3103 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 3121 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3123 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3124 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dwrite(T val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3125 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3130 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3131 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3133 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3135 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(signed char val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3136 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3138 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3140 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned char val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3141 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3143 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3145 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3146 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3148 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3150 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3151 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3153 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3155 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3156 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3158 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3160 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3161 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3163 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3165 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3166 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3168 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3170 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3171 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3173 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3175 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3176 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3178 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned short val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3181 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3183 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3185 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3191 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3193 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3195 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3196 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3198 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3200 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3201 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3203 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3205 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3206 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3208 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3211 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3213 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3215 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3216 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3218 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3220 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3221 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3225 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3226 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3228 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3230 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3233 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3235 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3236 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3238 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3240 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3241 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3243 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3245 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3246 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3248 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3250 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3251 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3253 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(long long val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3256 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3260 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned long long val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3263 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3265 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(longlong1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3266 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3270 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ulonglong1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3271 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3273 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(longlong2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3278 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3280 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ulonglong2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3329 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3330 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3332 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3334 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3335 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3337 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3340 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3342 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3344 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3345 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3347 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3383 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3384 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredwrite(T val, surface< void, 241> surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3385 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 3403 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3405 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3406 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredwrite(T val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3407 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3409 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3412 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3413 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3415 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3417 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(signed char val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3418 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3420 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3422 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned char val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3423 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3425 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3427 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3428 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3430 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3432 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3433 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3435 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3437 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3438 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3440 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3442 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3443 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3445 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3447 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3448 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3450 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3452 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3453 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3455 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3457 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3458 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3460 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3462 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned short val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3463 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3465 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3467 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3468 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3470 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3472 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3473 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3475 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3477 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3478 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3480 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3482 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3483 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3485 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3487 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3488 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3490 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3492 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3495 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3497 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3498 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3500 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3502 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3503 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3505 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3507 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3508 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3510 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3512 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3513 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3515 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3517 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3518 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3520 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3522 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3523 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3525 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3527 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3528 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3530 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3532 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3533 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3535 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3537 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(long long val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3538 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3540 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3542 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned long long val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3543 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3545 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3547 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(longlong1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3548 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3550 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3552 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ulonglong1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3553 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3555 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(longlong2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3558 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3560 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3562 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ulonglong2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3563 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3565 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3611 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3612 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3614 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3616 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3617 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3619 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3621 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3622 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3626 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3627 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3629 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3665 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3666 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredwrite(T val, surface< void, 242> surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3667 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 3685 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3687 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3688 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredwrite(T val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3689 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3691 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3694 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3695 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3697 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3699 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(signed char val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3700 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3702 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3704 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned char val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3705 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3707 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3709 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3710 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3712 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3714 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3715 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3717 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3719 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3720 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3722 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3724 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3725 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3727 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3729 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3730 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3732 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3734 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3735 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3737 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3739 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3740 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3742 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3744 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned short val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3745 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3747 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3749 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3750 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3752 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3754 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3755 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3757 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3759 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3760 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3762 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3764 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3765 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3767 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3769 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3770 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3772 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3774 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3775 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3777 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3779 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3780 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3782 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3784 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3785 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3787 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3789 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3790 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3792 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3794 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3795 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3797 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3799 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3800 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3802 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3804 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3805 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3807 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3809 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3810 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3812 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3814 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3815 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3817 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3819 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(long long val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3820 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3822 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3824 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned long long val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3825 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3827 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3829 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(longlong1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3830 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3832 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3834 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ulonglong1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3835 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3837 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3839 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(longlong2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3840 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3842 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3844 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ulonglong2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3845 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3847 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3893 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3896 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3898 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3899 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3901 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3903 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3904 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3908 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3909 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3911 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3947 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3948 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapwrite(T val, surface< void, 12> surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3949 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 3967 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3969 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3970 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapwrite(T val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3973 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3976 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3977 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3979 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3981 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(signed char val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3982 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3984 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned char val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3987 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3989 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3991 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3992 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3994 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3996 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3997 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3999 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4001 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4002 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4004 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4006 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4007 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4009 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4011 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4012 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4014 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4016 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4017 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4019 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4021 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4022 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4024 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4026 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned short val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4027 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4029 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4031 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4032 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4034 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4036 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4037 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4039 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4041 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4042 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4044 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4046 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4047 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4049 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4051 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4052 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4054 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4056 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4057 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4059 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4061 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4062 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4064 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4066 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4067 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4069 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4071 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4072 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4074 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4076 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4077 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4079 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4081 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4082 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4084 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4086 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4087 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4089 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4091 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4092 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4094 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4096 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4097 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4099 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4101 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(long long val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4102 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4104 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4106 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned long long val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4107 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4109 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4111 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(longlong1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4112 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4114 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4116 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ulonglong1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4117 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4119 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4121 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(longlong2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4122 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4124 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4126 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ulonglong2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4129 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4175 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4176 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4178 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4181 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4183 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4185 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4191 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4193 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4229 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 4230 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredwrite(T val, surface< void, 252> surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 4249 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4251 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 4252 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredwrite(T val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4253 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4259 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4263 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(signed char val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4264 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4266 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned char val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4269 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4271 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4273 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4274 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4278 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4279 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4284 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4286 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4288 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4289 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4291 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4293 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4294 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4296 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4298 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4299 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4301 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4303 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4304 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4306 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4308 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned short val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4309 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4311 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4314 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4316 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4318 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4319 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4321 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4323 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4324 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4326 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4328 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4329 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4331 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4333 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4334 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4336 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4338 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4341 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4343 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4344 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4346 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4348 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4349 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4351 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4353 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4354 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4356 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4358 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4359 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4361 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4363 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4364 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4366 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4368 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4369 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4371 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4373 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4374 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4376 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4378 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4379 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4381 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4383 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(long long val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4384 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4386 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4388 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned long long val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4389 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4391 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4393 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(longlong1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4394 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4396 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4398 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ulonglong1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4399 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4401 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4403 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(longlong2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4404 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4406 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4408 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ulonglong2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4409 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4411 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4457 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4458 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4460 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4462 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4463 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4465 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4467 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4468 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4470 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4472 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4473 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4475 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 96 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 97 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 105 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 107 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 108 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 112 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 114 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 115 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 119 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 121 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 122 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 126 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 128 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 129 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 133 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 135 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 136 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 140 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 142 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 143 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 147 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 149 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 150 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 154 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 156 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 157 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 169 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 170 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 174 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 176 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 177 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 181 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 183 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 184 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 188 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 190 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 191 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 195 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 197 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 198 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 202 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 204 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 205 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 209 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 211 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 212 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 216 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 218 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 219 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 223 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 231 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 232 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 236 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 238 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 239 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 243 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 245 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 246 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 250 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 252 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 253 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 257 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 259 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 260 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 266 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 267 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 271 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 273 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 274 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 280 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 281 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 359 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 360 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 364 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 366 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 367 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 371 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 373 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 374 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 378 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 381 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 385 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 393 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 394 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 403 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 411 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 419 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 435 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 443 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 451 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 453 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 454 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 459 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 461 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 462 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 467 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 481 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 489 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 497 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 505 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 513 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 521 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 523 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 524 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 531 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 532 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 537 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 545 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 546 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 554 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 556 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 557 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 561 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 563 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 564 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 568 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 570 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 571 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 575 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 577 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 578 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 582 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 584 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 585 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 589 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 591 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 592 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 596 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 598 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 599 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 603 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 605 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 606 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 618 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 619 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 623 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 625 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 626 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 630 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 632 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 633 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 637 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 639 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 640 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 644 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 646 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 647 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 651 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 653 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 654 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 658 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 660 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 661 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 665 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 667 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 668 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 672 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 680 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 681 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 685 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 687 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 688 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 692 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 694 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 695 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 699 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 701 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 702 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 706 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 708 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 709 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 713 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 715 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 716 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 720 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 722 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 723 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 727 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 729 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 730 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 734 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 814 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 819 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 821 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 822 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 826 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 829 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 833 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 835 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 840 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 848 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 849 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 858 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 866 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 874 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 882 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 906 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 908 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 909 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 914 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 917 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 922 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 936 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 944 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 952 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 960 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 968 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 976 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 979 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 984 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 986 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 987 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 992 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1000 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 1001 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1009 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1011 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 1012 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1016 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1018 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1019 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1023 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1025 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1026 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1030 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1032 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1033 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1037 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1039 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1040 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1044 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1046 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1047 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1051 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1053 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1054 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1058 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1060 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1061 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1065 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1073 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1074 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1078 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1080 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1081 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1085 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1087 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1088 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1092 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1094 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1095 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1099 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1101 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1102 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1106 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1108 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1109 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1113 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1115 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1116 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1120 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1122 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1123 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1127 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1135 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1136 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1140 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1142 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1143 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1147 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1149 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1150 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1154 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1156 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1157 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1163 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1164 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1168 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1170 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1171 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1175 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1177 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1178 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1182 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1184 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1185 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1189 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1263 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1268 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1270 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1271 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1275 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1277 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1282 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1284 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1289 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1297 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1298 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1307 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1315 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1323 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1331 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1339 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1347 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1355 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1357 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1358 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1363 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1365 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1366 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1371 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1385 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1393 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1401 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1409 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1417 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1425 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1428 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1433 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1435 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1436 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1441 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1449 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1DLayered(texture< char, 241, cudaReadModeElementType> t, float x, int layer)
# 1450 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1458 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1460 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1DLayered(texture< signed char, 241, cudaReadModeElementType> t, float x, int layer)
# 1461 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1465 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1467 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1DLayered(texture< unsigned char, 241, cudaReadModeElementType> t, float x, int layer)
# 1468 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1472 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1474 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1DLayered(texture< char1, 241, cudaReadModeElementType> t, float x, int layer)
# 1475 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1479 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1481 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1DLayered(texture< uchar1, 241, cudaReadModeElementType> t, float x, int layer)
# 1482 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1486 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1488 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1DLayered(texture< char2, 241, cudaReadModeElementType> t, float x, int layer)
# 1489 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1493 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1495 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1DLayered(texture< uchar2, 241, cudaReadModeElementType> t, float x, int layer)
# 1496 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1500 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1502 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1DLayered(texture< char4, 241, cudaReadModeElementType> t, float x, int layer)
# 1503 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1507 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1509 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1DLayered(texture< uchar4, 241, cudaReadModeElementType> t, float x, int layer)
# 1510 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1514 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1522 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1DLayered(texture< short, 241, cudaReadModeElementType> t, float x, int layer)
# 1523 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1527 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1DLayered(texture< unsigned short, 241, cudaReadModeElementType> t, float x, int layer)
# 1530 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1534 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1536 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1DLayered(texture< short1, 241, cudaReadModeElementType> t, float x, int layer)
# 1537 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1541 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1543 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1DLayered(texture< ushort1, 241, cudaReadModeElementType> t, float x, int layer)
# 1544 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1548 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1550 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1DLayered(texture< short2, 241, cudaReadModeElementType> t, float x, int layer)
# 1551 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1555 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1557 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1DLayered(texture< ushort2, 241, cudaReadModeElementType> t, float x, int layer)
# 1558 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1562 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1564 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1DLayered(texture< short4, 241, cudaReadModeElementType> t, float x, int layer)
# 1565 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1569 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1571 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1DLayered(texture< ushort4, 241, cudaReadModeElementType> t, float x, int layer)
# 1572 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1576 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1584 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1DLayered(texture< int, 241, cudaReadModeElementType> t, float x, int layer)
# 1585 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1589 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1591 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1DLayered(texture< unsigned, 241, cudaReadModeElementType> t, float x, int layer)
# 1592 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1596 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1598 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1DLayered(texture< int1, 241, cudaReadModeElementType> t, float x, int layer)
# 1599 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1603 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1605 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1DLayered(texture< uint1, 241, cudaReadModeElementType> t, float x, int layer)
# 1606 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1612 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1DLayered(texture< int2, 241, cudaReadModeElementType> t, float x, int layer)
# 1613 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1617 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1619 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1DLayered(texture< uint2, 241, cudaReadModeElementType> t, float x, int layer)
# 1620 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1624 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1626 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1DLayered(texture< int4, 241, cudaReadModeElementType> t, float x, int layer)
# 1627 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1631 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1633 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1DLayered(texture< uint4, 241, cudaReadModeElementType> t, float x, int layer)
# 1634 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1638 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1712 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< float, 241, cudaReadModeElementType> t, float x, int layer)
# 1713 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1717 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1719 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< float1, 241, cudaReadModeElementType> t, float x, int layer)
# 1720 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1724 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1726 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< float2, 241, cudaReadModeElementType> t, float x, int layer)
# 1727 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1731 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1733 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< float4, 241, cudaReadModeElementType> t, float x, int layer)
# 1734 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1738 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1746 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1747 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1756 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< signed char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1759 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1764 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1767 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1772 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< char1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1775 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1780 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< uchar1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1783 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1788 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< char2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1791 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1796 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< uchar2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1799 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1804 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1806 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< char4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1807 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1812 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1814 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< uchar4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1820 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1829 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1834 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1837 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1842 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< short1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1845 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1850 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< ushort1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1853 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1858 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< short2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1866 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< ushort2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1869 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1874 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< short4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1877 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1882 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1884 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< ushort4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1885 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2DLayered(texture< char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1899 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1907 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1909 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2DLayered(texture< signed char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1910 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1914 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2DLayered(texture< unsigned char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1917 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1921 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1923 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2DLayered(texture< char1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1924 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1928 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2DLayered(texture< uchar1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1935 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1937 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2DLayered(texture< char2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1942 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1944 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2DLayered(texture< uchar2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1945 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1949 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1951 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2DLayered(texture< char4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1952 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1956 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1958 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2DLayered(texture< uchar4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1959 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1963 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1971 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2DLayered(texture< short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1972 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1976 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2DLayered(texture< unsigned short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1979 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1983 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1985 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2DLayered(texture< short1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1986 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1990 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1992 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2DLayered(texture< ushort1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1993 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1997 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2DLayered(texture< short2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2000 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2004 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2006 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2DLayered(texture< ushort2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2007 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2011 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2013 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2DLayered(texture< short4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2014 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2018 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2020 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2DLayered(texture< ushort4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2021 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2025 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2033 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2DLayered(texture< int, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2034 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2038 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2040 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2DLayered(texture< unsigned, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2041 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2045 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2047 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2DLayered(texture< int1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2048 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2052 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2DLayered(texture< uint1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2055 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2059 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2061 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2DLayered(texture< int2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2062 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2066 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2068 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2DLayered(texture< uint2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2069 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2073 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2075 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2DLayered(texture< int4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2076 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2080 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2082 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2DLayered(texture< uint4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2083 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2087 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< float, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2162 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2166 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2168 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< float1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2169 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2173 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2175 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< float2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2176 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2180 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2182 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< float4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2183 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2187 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2195 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2196 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2205 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2207 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< signed char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2208 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2213 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2215 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2216 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2221 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2223 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< char1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2224 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2229 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2231 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< uchar1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2232 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2237 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2239 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< char2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2240 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2245 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2247 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< uchar2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2248 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2253 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2255 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< char4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2256 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2261 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2263 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< uchar4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2269 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2277 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2283 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2286 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2291 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2293 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< short1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2294 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2299 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2301 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< ushort1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2302 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2307 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2309 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< short2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2310 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2315 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2317 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< ushort2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2318 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2323 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2325 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< short4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2326 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2331 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2333 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< ushort4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2334 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2339 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2347 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2348 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2356 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2358 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2359 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2363 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2365 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2366 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2370 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2372 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2373 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2377 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2379 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2384 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2386 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2387 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2391 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2393 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2394 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2398 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2400 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2401 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2405 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2407 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2408 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2412 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2420 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2421 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2425 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2428 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2432 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2434 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2435 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2439 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2441 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2442 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2446 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2448 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2449 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2453 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2455 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2456 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2460 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2462 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2463 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2467 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2469 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2470 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2474 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2482 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2483 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2487 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2489 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2490 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2494 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2496 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2497 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2501 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2503 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2504 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2508 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2510 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2511 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2515 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2517 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2518 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2522 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2524 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2525 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2531 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2532 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2536 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2611 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2615 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2617 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2618 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2622 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2624 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2625 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2629 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2631 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2632 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2636 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2644 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2645 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2654 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2656 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2657 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2662 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2664 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2665 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2670 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2672 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2673 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2678 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2680 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2681 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2686 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2688 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2689 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2694 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2696 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2697 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2702 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2704 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2705 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2710 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2712 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2713 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2718 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2726 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2727 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2732 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2734 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2735 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2740 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2742 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2743 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2748 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2750 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2751 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2756 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2758 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2759 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2764 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2766 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2767 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2772 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2774 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2775 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2780 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2782 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2783 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2788 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2796 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char texCubemap(texture< char, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2797 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2805 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2807 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char texCubemap(texture< signed char, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2808 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2812 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2814 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char texCubemap(texture< unsigned char, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2819 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2821 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 texCubemap(texture< char1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2822 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2826 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 texCubemap(texture< uchar1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2829 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2833 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2835 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 texCubemap(texture< char2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2840 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2842 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 texCubemap(texture< uchar2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2843 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2847 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2849 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 texCubemap(texture< char4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2850 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2854 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2856 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 texCubemap(texture< uchar4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2857 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2869 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short texCubemap(texture< short, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2870 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2874 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short texCubemap(texture< unsigned short, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2877 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2881 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2883 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 texCubemap(texture< short1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2884 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2888 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 texCubemap(texture< ushort1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2891 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2895 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2897 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 texCubemap(texture< short2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2902 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2904 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 texCubemap(texture< ushort2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2905 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2909 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2911 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 texCubemap(texture< short4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2912 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2918 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 texCubemap(texture< ushort4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2919 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2923 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int texCubemap(texture< int, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2932 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2936 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned texCubemap(texture< unsigned, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2939 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2943 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2945 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 texCubemap(texture< int1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2946 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2950 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2952 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 texCubemap(texture< uint1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2953 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2957 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2959 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 texCubemap(texture< int2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2960 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2964 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2966 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 texCubemap(texture< uint2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2967 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2971 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2973 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 texCubemap(texture< int4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2974 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2980 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 texCubemap(texture< uint4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2981 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2985 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3059 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< float, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3060 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3064 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3066 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< float1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3067 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3071 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3073 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< float2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3074 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3078 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3080 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< float4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3081 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3085 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3093 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< char, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3094 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3103 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3105 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< signed char, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3106 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3111 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3113 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< unsigned char, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3114 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3119 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3121 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< char1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3122 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3127 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3129 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< uchar1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3130 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3135 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3137 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< char2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3138 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3143 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3145 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< uchar2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3146 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3151 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3153 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< char4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3154 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3159 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< uchar4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3162 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3167 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3175 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< short, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3176 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3181 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3183 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< unsigned short, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3184 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3189 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3191 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< short1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3192 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3197 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3199 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< ushort1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3200 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3205 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3207 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< short2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3208 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3213 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3215 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< ushort2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3216 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3221 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3223 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< short4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3224 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3229 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3231 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< ushort4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3232 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3237 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3245 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char texCubemapLayered(texture< char, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3246 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3254 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3256 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char texCubemapLayered(texture< signed char, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3257 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3261 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3263 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char texCubemapLayered(texture< unsigned char, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3268 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3270 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 texCubemapLayered(texture< char1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3271 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3275 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3277 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 texCubemapLayered(texture< uchar1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3282 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3284 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 texCubemapLayered(texture< char2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3289 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3291 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 texCubemapLayered(texture< uchar2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3292 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3296 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3298 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 texCubemapLayered(texture< char4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3299 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3303 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3305 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 texCubemapLayered(texture< uchar4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3306 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3310 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3318 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short texCubemapLayered(texture< short, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3319 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3323 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3325 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short texCubemapLayered(texture< unsigned short, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3326 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3330 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3332 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 texCubemapLayered(texture< short1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3333 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3337 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3339 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 texCubemapLayered(texture< ushort1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3340 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3344 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3346 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 texCubemapLayered(texture< short2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3347 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3351 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3353 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 texCubemapLayered(texture< ushort2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3354 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3358 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3360 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 texCubemapLayered(texture< short4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3361 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3365 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3367 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 texCubemapLayered(texture< ushort4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3368 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3372 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int texCubemapLayered(texture< int, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3381 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3385 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3387 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned texCubemapLayered(texture< unsigned, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3388 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3392 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3394 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 texCubemapLayered(texture< int1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3395 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3399 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3401 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 texCubemapLayered(texture< uint1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3402 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3406 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3408 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 texCubemapLayered(texture< int2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3409 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3413 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3415 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 texCubemapLayered(texture< uint2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3416 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3420 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3422 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 texCubemapLayered(texture< int4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3423 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3429 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 texCubemapLayered(texture< uint4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3430 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3434 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3508 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< float, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3509 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3513 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3515 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< float1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3516 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3520 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3522 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< float2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3523 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3527 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< float4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3530 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3534 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3542 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< char, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3543 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3552 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3554 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< signed char, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3555 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3560 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3562 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< unsigned char, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3563 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3568 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3570 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< char1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3571 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3576 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3578 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< uchar1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3579 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3584 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3586 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< char2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3587 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3592 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3594 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< uchar2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3595 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3600 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3602 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< char4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3603 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3608 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< uchar4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3611 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3616 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3624 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< short, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3625 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3630 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3632 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< unsigned short, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3633 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3638 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3640 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< short1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3641 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3646 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3648 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< ushort1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3649 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3654 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3656 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< short2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3657 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3662 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3664 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< ushort2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3665 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3670 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3672 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< short4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3673 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3678 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3680 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< ushort4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3681 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3686 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3780 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3781 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3783 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3785 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3786 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3788 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3790 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3791 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3793 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3795 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3796 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3798 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3800 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3801 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3803 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3805 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3806 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3808 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3810 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3811 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3813 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3816 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3818 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3820 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3821 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3823 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3825 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3826 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3830 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3831 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3833 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3835 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3838 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3840 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3841 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3843 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3845 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3846 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3848 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3850 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3851 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3853 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3855 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3856 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3858 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3860 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3863 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3865 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3866 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3868 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3870 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3871 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3873 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3875 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3878 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3880 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3881 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3883 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3885 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3886 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3888 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3891 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3893 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3895 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3896 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3900 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3901 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3903 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3905 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3906 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3908 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3910 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3911 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3913 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3915 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3918 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3920 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3921 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3923 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3925 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3926 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3928 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3930 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3933 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3935 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3936 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3940 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3941 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3943 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3945 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3946 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3948 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3950 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3951 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3953 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3955 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3956 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3958 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3967 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3968 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3970 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3972 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3973 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3975 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3977 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3980 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3982 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3983 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3985 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3987 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3988 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3990 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3992 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3993 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3995 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3997 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3998 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4000 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4002 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4003 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4005 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4007 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4008 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4010 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4012 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4013 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4015 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4017 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4018 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4020 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4022 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4023 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4025 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4027 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4028 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4030 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4032 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4033 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4035 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4037 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4038 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4040 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4042 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4043 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4045 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4047 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4048 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4050 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4052 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4053 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4055 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4057 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4058 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4060 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4062 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4063 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4065 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4067 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4068 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4070 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 66 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 67 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 68 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 69 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 70 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 120 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 121 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaSetupArgument(T
# 122 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
arg, size_t
# 123 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset)
# 125 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 126 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 127 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 159 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 160 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
event, unsigned
# 161 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 163 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 164 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, flags);
# 165 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 222 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 223 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
ptr, size_t
# 224 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, unsigned
# 225 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 227 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 228 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 229 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 231 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 232 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaHostAlloc(T **
# 233 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
ptr, size_t
# 234 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, unsigned
# 235 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 237 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 238 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 239 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 241 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 242 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 243 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pDevice, void *
# 244 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pHost, unsigned
# 245 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 247 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 248 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 249 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 251 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 252 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMalloc(T **
# 253 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t
# 254 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size)
# 256 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 257 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 258 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 260 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 261 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMallocHost(T **
# 262 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
ptr, size_t
# 263 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, unsigned
# 264 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags = (0))
# 266 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 267 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 268 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 270 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 271 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMallocPitch(T **
# 272 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t *
# 273 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pitch, size_t
# 274 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
width, size_t
# 275 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
height)
# 277 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 278 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 279 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 289 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 290 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 291 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 292 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 293 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 294 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 296 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 297 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 298 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 300 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 301 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 302 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 303 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 304 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 305 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 306 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 308 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 309 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 310 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 312 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 313 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 314 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 315 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 316 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 317 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 318 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 320 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 321 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 322 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 324 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 325 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 326 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 327 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 328 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 329 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 330 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 331 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 333 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 334 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 335 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 343 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 344 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, char *
# 345 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 346 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 347 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 348 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 350 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 351 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 352 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 354 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 355 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 356 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, const T &
# 357 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 358 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 359 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 360 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 362 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 363 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 364 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 366 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 367 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, char *
# 368 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 369 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 370 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 371 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 372 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 374 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 375 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 376 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 378 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 379 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 380 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, const T &
# 381 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 382 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 383 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 384 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 385 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 387 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 388 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 389 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 391 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 392 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, char *
# 393 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 395 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 396 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 397 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 424 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 425 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 426 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, const T &
# 427 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 430 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 431 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 439 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 440 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, char *
# 441 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 443 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 444 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 445 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 472 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 473 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 474 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, const T &
# 475 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 477 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 478 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 479 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 521 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 522 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture(size_t *
# 523 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 524 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 525 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 526 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc, size_t
# 527 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 529 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 530 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 531 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 566 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 567 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture(size_t *
# 568 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 569 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 570 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t
# 571 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 573 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 574 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 575 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 622 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 623 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 624 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 625 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 626 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 627 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc, size_t
# 628 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
width, size_t
# 629 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
height, size_t
# 630 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pitch)
# 632 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 633 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 634 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 680 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 681 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 682 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 683 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 684 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t
# 685 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
width, size_t
# 686 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
height, size_t
# 687 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pitch)
# 689 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 690 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 691 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 722 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 723 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 724 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const cudaArray *
# 725 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 726 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc)
# 728 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 729 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 730 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 760 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 761 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 762 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const cudaArray *
# 763 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array)
# 765 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 766 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 767 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 769 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 770 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 799 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 800 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 801 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex)
# 803 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 804 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 805 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 839 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 840 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 841 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 842 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex)
# 844 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 845 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 846 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 900 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 901 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 902 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
func, cudaFuncCache
# 903 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cacheConfig)
# 905 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 906 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 907 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 944 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 945 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaLaunch(T *
# 946 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
entry)
# 948 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 949 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 950 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 984 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 985 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 986 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
attr, T *
# 987 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
entry)
# 989 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 990 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 991 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 1013 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1014 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1015 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
surf, const cudaArray *
# 1016 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1017 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc)
# 1019 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 1020 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1021 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 1042 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1043 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1044 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
surf, const cudaArray *
# 1045 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array)
# 1047 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 1048 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1049 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1051 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1052 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 24 "tests/simpleGL/simpleGL_kernel.cu"
void kernel(float4 *pos, unsigned width, unsigned height, float time) ;
# 44 "tests/simpleGL/simpleGL_kernel.cu"
extern "C" void launch_kernel(float4 *pos, unsigned mesh_width, unsigned mesh_height, float time)
# 45 "tests/simpleGL/simpleGL_kernel.cu"
{
# 47 "tests/simpleGL/simpleGL_kernel.cu"
dim3 block(8, 8, 1);
# 48 "tests/simpleGL/simpleGL_kernel.cu"
dim3 grid(mesh_width / (block.x), mesh_height / (block.y), 1);
# 49 "tests/simpleGL/simpleGL_kernel.cu"
cudaConfigureCall(grid, block) ? ((void)0) : kernel(pos, mesh_width, mesh_height, time);
# 50 "tests/simpleGL/simpleGL_kernel.cu"
}
# 1 "tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c"
# 1 "tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c"
# 1 "/tmp/tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c" 1 3
# 1 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 1 3
# 74 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 3
template <typename T>
static inline void *__cudaAddressOf(T &val)
{
    return (void *)(&(const_cast<char &>(reinterpret_cast<const volatile char &>(val))));
}
# 103 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 3
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda4.1/cuda/include/common_functions.h" 1 3
# 159 "/usr/local/cuda4.1/cuda/include/common_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/math_functions.h" 1 3
# 2935 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/math_constants.h" 1 3
# 2936 "/usr/local/cuda4.1/cuda/include/math_functions.h" 2 3
# 5550 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/crt/func_macro.h" 1 3
# 5551 "/usr/local/cuda4.1/cuda/include/math_functions.h" 2 3
# 7292 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
inline double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

inline double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

inline double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

inline double cospi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (__isinf(a)) {
    return cos (a);
  }
  if (fabs(a) > 9.0071992547409920e+015) {
    a = 0.0;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  n++;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  if (a == 0.0) {
    a = fabs(a);
  }
  return a;
}

inline double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

inline double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

inline double erfcx(double a)
{
  double x, t1, t2, t3;

  if (__isnan(a)) {
    return a + a;
  }
  x = fabs(a);
  if (x < 32.0) {
# 7577 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
    t1 = x - 4.0;
    t2 = x + 4.0;
    t2 = t1 / t2;

    t1 = - 3.5602694826817400E-010;
    t1 = t1 * t2 - 9.7239122591447274E-009;
    t1 = t1 * t2 - 8.9350224851649119E-009;
    t1 = t1 * t2 + 1.0404430921625484E-007;
    t1 = t1 * t2 + 5.8806698585341259E-008;
    t1 = t1 * t2 - 8.2147414929116908E-007;
    t1 = t1 * t2 + 3.0956409853306241E-007;
    t1 = t1 * t2 + 5.7087871844325649E-006;
    t1 = t1 * t2 - 1.1231787437600085E-005;
    t1 = t1 * t2 - 2.4399558857200190E-005;
    t1 = t1 * t2 + 1.5062557169571788E-004;
    t1 = t1 * t2 - 1.9925637684786154E-004;
    t1 = t1 * t2 - 7.5777429182785833E-004;
    t1 = t1 * t2 + 5.0319698792599572E-003;
    t1 = t1 * t2 - 1.6197733895953217E-002;
    t1 = t1 * t2 + 3.7167515553018733E-002;
    t1 = t1 * t2 - 6.6330365827532434E-002;
    t1 = t1 * t2 + 9.3732834997115544E-002;
    t1 = t1 * t2 - 1.0103906603555676E-001;
    t1 = t1 * t2 + 6.8097054254735140E-002;
    t1 = t1 * t2 + 1.5379652102605428E-002;
    t1 = t1 * t2 - 1.3962111684056291E-001;
    t1 = t1 * t2 + 1.2329951186255526E+000;

    t2 = 2.0 * x + 1.0;
    t1 = t1 / t2;
  } else {

    t2 = 1.0 / x;
    t3 = t2 * t2;
    t1 = -29.53125;
    t1 = t1 * t3 + 6.5625;
    t1 = t1 * t3 - 1.875;
    t1 = t1 * t3 + 0.75;
    t1 = t1 * t3 - 0.5;
    t1 = t1 * t3 + 1.0;
    t2 = t2 * 5.6418958354775628e-001;
    t1 = t1 * t2;
  }
  if (a < 0.0) {

    t2 = ((int)(x * 16.0)) * 0.0625;
    t3 = (x - t2) * (x + t2);
    t3 = exp(t2 * t2) * exp(t3);
    t3 = t3 + t3;
    t1 = t3 - t1;
  }
  return t1;
}

inline float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

inline float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

inline float sinpif(float a)
{
  return (float)sinpi((double)a);
}

inline float cospif(float a)
{
  return (float)cospi((double)a);
}

inline float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

inline float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}

inline float erfcxf(float a)
{
  return (float)erfcx((double)a);
}







inline int min(int a, int b)
{
  return a < b ? a : b;
}

inline unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

inline long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

inline unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

inline int max(int a, int b)
{
  return a > b ? a : b;
}

inline unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

inline long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

inline unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 7730 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/math_functions_dbl_ptx3.h" 1 3
# 7731 "/usr/local/cuda4.1/cuda/include/math_functions.h" 2 3
# 160 "/usr/local/cuda4.1/cuda/include/common_functions.h" 2 3
# 176 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 2 3







#pragma pack()
# 2 "/tmp/tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c" 2 3
# 1 "/tmp/tmpxft_0000721a_00000000-3_simpleGL_kernel.fatbin.c" 1 3


asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000004292,0x0000006801000001,0x0000000000002ed6\n"
".quad 0x0000003800000000,0x0000001400030000,0x0000002100000040,0x0000000000000015\n"
".quad 0x0000000000000000,0x0000000000000000,0x69732f7374736574,0x732f4c47656c706d\n"
".quad 0x5f4c47656c706d69,0x632e6c656e72656b,0x0000000000000075,0x762e0a0a0a0a0a0a\n"
".quad 0x33206e6f69737265,0x677261742e0a302e,0x30325f6d73207465,0x7365726464612e0a\n"
".quad 0x3620657a69735f73,0x656c69662e0a0a34,0x706d742f22203109,0x5f746678706d742f\n"
".quad 0x6131323730303030,0x303030303030305f,0x706d69735f372d30,0x72656b5f4c47656c\n"
".quad 0x337070632e6c656e,0x6c69662e0a22692e,0x7365742220320965,0x6c706d69732f7374\n"
".quad 0x706d69732f4c4765,0x72656b5f4c47656c,0x0a2275632e6c656e,0x203309656c69662e\n"
".quad 0x6f6c2f7273752f22,0x616475632f6c6163,0x616475632f312e34,0x6564756c636e692f\n"
".quad 0x5f6563697665642f,0x6e6f6974636e7566,0x69662e0a22682e73,0x752f22203409656c\n"
".quad 0x6c61636f6c2f7273,0x312e34616475632f,0x766e2f616475632f,0x6e695f69632f6d76\n"
".quad 0x22682e6564756c63,0x3509656c69662e0a,0x6c2f7273752f2220,0x6475632f6c61636f\n"
".quad 0x6475632f312e3461,0x64756c636e692f61,0x665f6874616d2f65,0x736e6f6974636e75\n"
".quad 0x6e6f632e0a22682e,0x67696c612e207473,0x2038622e2034206e,0x7472616475635f5f\n"
".quad 0x665f69706f32695f,0x7b203d205d34325b,0x2c343431202c3536,0x2c3036202c373620\n"
".quad 0x3431202c33353120,0x32202c3839202c39,0x2c323931202c3931,0x3235202c31323220\n"
".quad 0x32202c353432202c,0x202c3738202c3930,0x2c323532202c3933,0x2c3132202c313420\n"
".quad 0x2c3837202c383620,0x3331202c30313120,0x202c393432202c31,0x2e0a0a3b7d323631\n"
".quad 0x5a5f207972746e65,0x506c656e72656b36,0x6a3474616f6c6636,0x7261702e0a28666a\n"
".quad 0x203436752e206d61,0x656e72656b365a5f,0x74616f6c6636506c,0x7261705f666a6a34\n"
".quad 0x702e0a2c305f6d61,0x33752e206d617261,0x72656b365a5f2032,0x6f6c6636506c656e\n"
".quad 0x705f666a6a347461,0x0a2c315f6d617261,0x2e206d617261702e,0x6b365a5f20323375\n"
".quad 0x6636506c656e7265,0x666a6a3474616f6c,0x325f6d617261705f,0x6d617261702e0a2c\n"
".quad 0x5a5f203233662e20,0x506c656e72656b36,0x6a3474616f6c6636,0x6d617261705f666a\n"
".quad 0x2e0a7b0a290a335f,0x612e206c61636f6c,0x2e2034206e67696c,0x636f6c5f5f203862\n"
".quad 0x746f7065645f6c61,0x2e0a3b5d38325b30,0x3436622e20676572,0x722e0a3b50532520\n"
".quad 0x203233662e206765,0x3b3e3132313c6625,0x702e206765722e0a,0x323c702520646572\n"
".quad 0x6765722e0a3b3e36,0x7225203233732e20,0x2e0a3b3e3631323c,0x3436732e20676572\n"
".quad 0x3e32333c6c722520,0x2e766f6d0a0a0a3b,0x2c50532520343675,0x6c61636f6c5f5f20\n"
".quad 0x3b30746f7065645f,0x617261702e646c0a,0x7225203233752e6d,0x6b365a5f5b202c31\n"
".quad 0x6636506c656e7265,0x666a6a3474616f6c,0x315f6d617261705f,0x61702e646c0a3b5d\n"
".quad 0x203233752e6d6172,0x5f5b202c35357225,0x6c656e72656b365a,0x3474616f6c663650\n"
".quad 0x617261705f666a6a,0x646c0a3b5d325f6d,0x662e6d617261702e,0x202c316625203233\n"
".quad 0x6e72656b365a5f5b,0x616f6c6636506c65,0x61705f666a6a3474,0x0a3b5d335f6d6172\n"
".quad 0x32203220636f6c2e,0x2e766f6d0a312036,0x3635722520323375,0x2e6469746e25202c\n"
".quad 0x752e766f6d0a3b78,0x2c37357225203233,0x2e64696174632520,0x752e766f6d0a3b78\n"
".quad 0x2c38357225203233,0x3b782e6469742520,0x2e6f6c2e64616d0a,0x2c32722520323373\n"
".quad 0x25202c3635722520,0x357225202c373572,0x20636f6c2e0a3b38,0x6d0a312037322032\n"
".quad 0x25203233752e766f,0x746e25202c393572,0x6f6d0a3b792e6469,0x7225203233752e76\n"
".quad 0x61746325202c3036,0x6f6d0a3b792e6469,0x7225203233752e76,0x64697425202c3136\n"
".quad 0x2e64616d0a3b792e,0x25203233732e6f6c,0x357225202c323672,0x2c30367225202c39\n"
".quad 0x2e0a3b3136722520,0x3033203220636f6c,0x722e7476630a3120,0x33752e3233662e6e\n"
".quad 0x202c383266252032,0x7476630a3b327225,0x2e3233662e6e722e,0x3932662520323375\n"
".quad 0x2e0a3b317225202c,0x3331203320636f6c,0x7669640a33203131,0x203233662e6e722e\n"
".quad 0x6625202c30336625,0x39326625202c3832,0x3220636f6c2e0a3b,0x76630a3120313320\n"
".quad 0x3233662e6e722e74,0x336625203233752e,0x3b32367225202c31,0x2e6e722e7476630a\n"
".quad 0x203233752e323366,0x7225202c32336625,0x636f6c2e0a3b3535,0x2031313331203320\n"
".quad 0x6e722e7669640a33,0x336625203233662e,0x2c31336625202c33,0x2e0a3b3233662520\n"
".quad 0x3233203220636f6c,0x662e6464610a3120,0x2c34336625203233,0x25202c3033662520\n"
".quad 0x6464610a3b303366,0x326625203233662e,0x202c34336625202c,0x3030303846426630\n"
".quad 0x636f6c2e0a3b3030,0x0a31203333203220,0x203233662e646461,0x6625202c35336625\n"
".quad 0x33336625202c3333,0x33662e6464610a3b,0x25202c3366252032,0x426630202c353366\n"
".quad 0x3b30303030303846,0x203220636f6c2e0a,0x616d660a31203733,0x203233662e6e722e\n"
".quad 0x25202c3431316625,0x30346630202c3266,0x202c303030303038,0x6f6c2e0a3b316625\n"
".quad 0x2035393320342063,0x33662e7362610a35,0x202c363366252032,0x6d0a3b3431316625\n"
".quad 0x25203233752e766f,0x333132202c333672,0x3b30343035393039,0x203420636f6c2e0a\n"
".quad 0x6d0a352038373731,0x25203233622e766f,0x33367225202c3566,0x3520636f6c2e0a3b\n"
".quad 0x0a33203631303320,0x2e71652e70746573,0x2c31702520323366,0x25202c3633662520\n"
".quad 0x317025400a3b3566,0x3042422061726220,0x2e6172620a3b315f,0x5f30424220696e75\n"
".quad 0x5f3042420a0a3b32,0x662e766f6d0a3a31,0x2c37336625203233,0x3030303030663020\n"
".quad 0x6f6c2e0a3b303030,0x3435313120342063,0x722e6c756d0a3520,0x6625203233662e6e\n"
".quad 0x316625202c343131,0x37336625202c3431,0x325f3042420a0a3b,0x3520636f6c2e0a3a\n"
".quad 0x0a33203533343320,0x203233662e6c756d,0x6625202c38336625,0x336630202c343131\n"
".quad 0x3b33383946323246,0x203420636f6c2e0a,0x630a352032333331,0x732e696e722e7476\n"
".quad 0x25203233662e3233,0x6625202c37303272,0x636f6c2e0a3b3833,0x2036333433203520\n"
".quad 0x6e722e7476630a33,0x3233732e3233662e,0x25202c3933662520,0x6c2e0a3b37303272\n"
".quad 0x333433203520636f,0x2e67656e0a332039,0x3034662520323366,0x0a3b39336625202c\n"
".quad 0x203233662e766f6d,0x6630202c31346625,0x4144463039434633,0x3420636f6c2e0a3b\n"
".quad 0x660a352030353620,0x33662e6e722e616d,0x202c323466252032,0x6625202c30346625\n"
".quad 0x31316625202c3134,0x662e766f6d0a3b34,0x2c33346625203233,0x3232413333663020\n"
".quad 0x6f6c2e0a3b383631,0x2030353620342063,0x6e722e616d660a35,0x346625203233662e\n"
".quad 0x2c30346625202c34,0x25202c3334662520,0x766f6d0a3b323466,0x346625203233662e\n"
".quad 0x4337326630202c35,0x2e0a3b3543343332,0x3536203420636f6c,0x2e616d660a352030\n"
".quad 0x25203233662e6e72,0x6625202c35313166,0x35346625202c3034,0x0a3b34346625202c\n"
".quad 0x33203420636f6c2e,0x7362610a35203539,0x346625203233662e,0x3431316625202c36\n"
".quad 0x3520636f6c2e0a3b,0x0a33203834343320,0x2e74672e70746573,0x2c32702520323366\n"
".quad 0x30202c3634662520,0x3037414233373466,0x20327025400a3b30,0x5f30424220617262\n"
".quad 0x752e6172620a3b33,0x315f30424220696e,0x5f3042420a0a3b31,0x20636f6c2e0a3a33\n"
".quad 0x3520353837312034,0x3233622e766f6d0a,0x6625202c34722520,0x6f6c2e0a3b343131\n"
".quad 0x3736333320352063,0x622e646e610a3320,0x3430327225203233,0x2d202c347225202c\n"
".quad 0x3633383437343132,0x636f6c2e0a3b3834,0x2035373333203520,0x33622e6c68730a33\n"
".quad 0x202c363672252032,0x0a3b38202c347225,0x25203233622e726f,0x36367225202c3672\n"
".quad 0x34373431322d202c,0x6d0a3b3834363338,0x25203233752e766f,0x3b30202c31303272\n"
".quad 0x3233752e766f6d0a,0x202c303032722520,0x6d0a3b3130327225,0x25203436752e766f\n"
".quad 0x5f5f202c39326c72,0x695f747261647563,0x0a3b665f69706f32,0x203436752e646461\n"
".quad 0x25202c38326c7225,0x0a0a3b30202c5053,0x2e0a3a345f304242,0x2220616d67617270\n"
".quad 0x6c6c6f726e756f6e,0x20636f6c2e0a3b22,0x3520313833332035,0x736e6f632e646c0a\n"
".quad 0x7225203233752e74,0x6c72255b202c3736,0x6c756d0a3b5d3932,0x203233732e6f6c2e\n"
".quad 0x7225202c39367225,0x3b367225202c3736,0x203420636f6c2e0a,0x756d0a3520333732\n"
".quad 0x3233752e69682e6c,0x25202c3037722520,0x367225202c373672,0x3520636f6c2e0a3b\n"
".quad 0x0a35203338333320,0x732e6f6c2e64616d,0x2c31377225203233,0x25202c3736722520\n"
".quad 0x30327225202c3672,0x20636f6c2e0a3b31,0x3520343833332035,0x746c2e707465730a\n"
".quad 0x337025203233752e,0x202c31377225202c,0x65730a3b39367225,0x25203233752e706c\n"
".quad 0x202c31202c323772,0x0a3b337025202c30,0x203233732e646461,0x25202c3130327225\n"
".quad 0x377225202c323772,0x20636f6c2e0a3b30,0x3520353833332035,0x61636f6c2e74730a\n"
".quad 0x255b203233752e6c,0x25202c5d38326c72,0x6464610a3b313772,0x6c7225203436732e\n"
".quad 0x326c7225202c3932,0x64610a3b34202c39,0x7225203436732e64,0x6c7225202c38326c\n"
".quad 0x610a3b34202c3832,0x25203233732e6464,0x7225202c30303272,0x0a3b31202c303032\n"
".quad 0x33203520636f6c2e,0x65730a3320303833,0x33732e656e2e7074,0x25202c3470252032\n"
".quad 0x3b36202c30303272,0x726220347025400a,0x3b345f3042422061,0x36752e6464610a0a\n"
".quad 0x2c33316c72252034,0x3b30202c50532520,0x203520636f6c2e0a,0x730a332037383333\n"
".quad 0x2e6c61636f6c2e74,0x5053255b20323375,0x7225202c5d34322b,0x6f6c2e0a3b313032\n"
".quad 0x3437333320352063,0x752e7268730a3320,0x2c34377225203233,0x3332202c34722520\n"
".quad 0x33622e646e610a3b,0x202c353772252032,0x3133202c34377225,0x3520636f6c2e0a3b\n"
".quad 0x0a33203437333320,0x203233622e646e61,0x7225202c36377225,0x3b353532202c3437\n"
".quad 0x3233732e6464610a,0x25202c3737722520,0x32312d202c363772,0x20636f6c2e0a3b38\n"
".quad 0x3320373733332035,0x3233752e7268730a,0x25202c3837722520,0x0a3b35202c373772\n"
".quad 0x203233752e766f6d,0x3b36202c39377225,0x203520636f6c2e0a,0x730a332032393333\n"
".quad 0x25203233732e6275,0x377225202c303872,0x3b38377225202c39,0x6469772e6c756d0a\n"
".quad 0x7225203233732e65,0x387225202c34316c,0x64610a3b34202c30,0x7225203436732e64\n"
".quad 0x6c7225202c35316c,0x316c7225202c3331,0x20636f6c2e0a3b34,0x3320323933332035\n"
".quad 0x61636f6c2e646c0a,0x7225203233752e6c,0x72255b202c323032,0x6c2e0a3b5d35316c\n"
".quad 0x393333203520636f,0x6c2e646c0a332033,0x3233752e6c61636f,0x202c333032722520\n"
".quad 0x2d2b35316c72255b,0x636f6c2e0a3b5d34,0x2034393333203520,0x652e707465730a33\n"
".quad 0x7025203233732e71,0x2c35377225202c35,0x357025400a3b3020,0x3042422061726220\n"
".quad 0x766f6d0a0a3b375f,0x387225203233752e,0x2e0a3b3233202c35,0x3333203520636f6c\n"
".quad 0x6275730a35203539,0x387225203233732e,0x2c35387225202c36,0x2e0a3b3537722520\n"
".quad 0x3333203520636f6c,0x6c68730a35203639,0x387225203233622e,0x3230327225202c37\n"
".quad 0x0a3b35377225202c,0x203233752e726873,0x7225202c38387225,0x387225202c333032\n"
".quad 0x732e6464610a3b36,0x3230327225203233,0x202c38387225202c,0x6c2e0a3b37387225\n"
".quad 0x393333203520636f,0x2e6c68730a352037,0x3938722520323362,0x2c3330327225202c\n"
".quad 0x6d0a3b3537722520,0x2e656469772e6c75,0x316c722520323373,0x2c30387225202c36\n"
".quad 0x2e6464610a3b3420,0x316c722520343673,0x33316c7225202c38,0x3b36316c7225202c\n"
".quad 0x203520636f6c2e0a,0x6c0a352037393333,0x2e6c61636f6c2e64,0x3539722520323375\n"
".quad 0x38316c72255b202c,0x68730a3b5d382d2b,0x7225203233752e72,0x35397225202c3739\n"
".quad 0x0a3b36387225202c,0x203233732e646461,0x25202c3330327225,0x387225202c373972\n"
".quad 0x5f3042420a0a3b39,0x20636f6c2e0a3a37,0x3320313034332035,0x3233752e7268730a\n"
".quad 0x25202c3839722520,0x3033202c33303272,0x33622e6c68730a3b,0x202c393972252032\n"
".quad 0x32202c3230327225,0x3233622e726f0a3b,0x202c353032722520,0x7225202c38397225\n"
".quad 0x636f6c2e0a3b3939,0x2032303433203520,0x33622e6c68730a33,0x202c383172252032\n"
".quad 0x32202c3330327225,0x3520636f6c2e0a3b,0x0a33203330343320,0x203233752e726873\n"
".quad 0x25202c3030317225,0x3133202c35303272,0x3520636f6c2e0a3b,0x0a33203939333320\n"
".quad 0x203233752e726873,0x25202c3130317225,0x3033202c32303272,0x3520636f6c2e0a3b\n"
".quad 0x0a33203430343320,0x203233732e646461,0x25202c3230317225,0x7225202c30303172\n"
".quad 0x6f6c2e0a3b313031,0x3530343320352063,0x732e67656e0a3320,0x3330317225203233\n"
".quad 0x3b3230317225202c,0x746c2e707465730a,0x367025203233732e,0x30202c347225202c\n"
".quad 0x622e706c65730a3b,0x3730327225203233,0x2c3330317225202c,0x202c323031722520\n"
".quad 0x6f6c2e0a3b367025,0x3730343320352063,0x2e707465730a3320,0x25203233732e7165\n"
".quad 0x30317225202c3770,0x25400a3b30202c30,0x4220617262203770,0x2e0a0a3b395f3042\n"
".quad 0x3433203520636f6c,0x746f6e0a35203930,0x317225203233622e,0x30327225202c3430\n"
".quad 0x20636f6c2e0a3b35,0x3520303134332035,0x3233732e67656e0a,0x25202c3032722520\n"
".quad 0x7465730a3b383172,0x3233732e71652e70,0x7225202c38702520,0x2e0a3b30202c3831\n"
".quad 0x3433203520636f6c,0x6c65730a35203131,0x7225203233752e70,0x202c31202c353031\n"
".quad 0x0a3b387025202c30,0x33203520636f6c2e,0x64610a3520323134,0x7225203233732e64\n"
".quad 0x317225202c353032,0x30317225202c3530,0x20636f6c2e0a3b34,0x3520333134332035\n"
".quad 0x3233622e726f780a,0x202c343032722520,0x2d202c3430327225,0x3633383437343132\n"
".quad 0x2e766f6d0a3b3834,0x3032722520323375,0x3b30327225202c36,0x696e752e6172620a\n"
".quad 0x3b30315f30424220,0x3a395f3042420a0a,0x3233752e766f6d0a,0x202c363032722520\n"
".quad 0x420a0a3b38317225,0x2e0a3a30315f3042,0x3431203420636f6c,0x2e7a6c630a352035\n"
".quad 0x3031722520323362,0x3530327225202c36,0x3520636f6c2e0a3b,0x0a33203731343320\n"
".quad 0x2e71652e70746573,0x2c39702520323373,0x202c363031722520,0x20636f6c2e0a3b30\n"
".quad 0x3720383134332035,0x3233622e6c68730a,0x202c373031722520,0x25202c3530327225\n"
".quad 0x6f6d0a3b36303172,0x7225203233752e76,0x3b3233202c383031,0x203520636f6c2e0a\n"
".quad 0x730a372038313433,0x25203233732e6275,0x7225202c39303172,0x317225202c383031\n"
".quad 0x2e7268730a3b3630,0x3131722520323375,0x3630327225202c30,0x3b3930317225202c\n"
".quad 0x3233732e6464610a,0x202c313131722520,0x25202c3031317225,0x65730a3b37303172\n"
".quad 0x25203233622e706c,0x7225202c32313172,0x317225202c353032,0x3b397025202c3131\n"
".quad 0x203520636f6c2e0a,0x6d0a332030323433,0x33732e6f6c2e6c75,0x2c33313172252032\n"
".quad 0x202c323131722520,0x383730373132392d,0x2e766f6d0a3b3037,0x3131722520323375\n"
".quad 0x373132392d202c34,0x2e0a3b3037383730,0x3732203420636f6c,0x2e6c756d0a352033\n"
".quad 0x25203233752e6968,0x7225202c35313172,0x317225202c323131,0x636f6c2e0a3b3431\n"
".quad 0x2032323433203520,0x672e707465730a33,0x7025203233732e74,0x31317225202c3031\n"
".quad 0x68730a3b30202c35,0x7225203233622e6c,0x317225202c363131,0x2e0a3b31202c3531\n"
".quad 0x3433203520636f6c,0x7268730a35203332,0x317225203233752e,0x31317225202c3731\n"
".quad 0x6f0a3b3133202c33,0x7225203233622e72,0x317225202c383131,0x31317225202c3731\n"
".quad 0x2e706c65730a3b36,0x3131722520323362,0x3831317225202c39,0x2c3531317225202c\n"
".quad 0x730a3b3031702520,0x203233622e706c65,0x2d202c3032317225,0x7025202c30202c31\n"
".quad 0x2e766f6d0a3b3031,0x3231722520323375,0x0a3b363231202c31,0x203233732e627573\n"
".quad 0x25202c3232317225,0x7225202c31323172,0x6464610a3b363031,0x317225203233732e\n"
".quad 0x32317225202c3332,0x3032317225202c32,0x33622e6c68730a3b,0x2c34323172252032\n"
".quad 0x202c333231722520,0x636f6c2e0a3b3332,0x2036323433203520,0x33732e6464610a33\n"
".quad 0x2c35323172252032,0x202c393131722520,0x752e7268730a3b31,0x3632317225203233\n"
".quad 0x2c3532317225202c,0x2e6464610a3b3720,0x3231722520323373,0x3632317225202c37\n"
".quad 0x7268730a3b31202c,0x317225203233752e,0x32317225202c3832,0x64610a3b31202c37\n"
".quad 0x7225203233732e64,0x317225202c393231,0x32317225202c3832,0x33622e726f0a3b34\n"
".quad 0x2c30333172252032,0x202c393231722520,0x2e0a3b3430327225,0x3731203420636f6c\n"
".quad 0x766f6d0a35203837,0x316625203233622e,0x33317225202c3531,0x5f3042420a0a3b30\n"
".quad 0x636f6c2e0a3a3131,0x2030333633203520,0x33622e646e610a33,0x2c31333172252032\n"
".quad 0x202c373032722520,0x2e707465730a3b31,0x25203233732e7165,0x317225202c313170\n"
".quad 0x2e0a3b30202c3133,0x3533203520636f6c,0x6c756d0a33203739,0x316625203233662e\n"
".quad 0x3531316625202c31,0x3b3531316625202c,0x203520636f6c2e0a,0x400a332030333633\n"
".quad 0x6172622031317025,0x3b33315f30424220,0x33662e766f6d0a0a,0x202c373466252032\n"
".quad 0x3630364241426630,0x2e766f6d0a3b4131,0x3834662520323366,0x434337336630202c\n"
".quad 0x6c2e0a3b45433546,0x303536203420636f,0x722e616d660a3520,0x6625203233662e6e\n"
".quad 0x38346625202c3934,0x202c31316625202c,0x6f6d0a3b37346625,0x6625203233662e76\n"
".quad 0x44336630202c3035,0x0a3b354141414132,0x36203420636f6c2e,0x616d660a35203035\n"
".quad 0x203233662e6e722e,0x6625202c31356625,0x31316625202c3934,0x0a3b30356625202c\n"
".quad 0x203233662e766f6d,0x6630202c32356625,0x3030303030304642,0x3420636f6c2e0a3b\n"
".quad 0x660a352030353620,0x33662e6e722e616d,0x202c333566252032,0x6625202c31356625\n"
".quad 0x32356625202c3131,0x33662e766f6d0a3b,0x202c343566252032,0x3030303846336630\n"
".quad 0x636f6c2e0a3b3030,0x3520303536203420,0x2e6e722e616d660a,0x3131662520323366\n"
".quad 0x2c33356625202c36,0x25202c3131662520,0x6172620a3b343566,0x30424220696e752e\n"
".quad 0x42420a0a3b34315f,0x6f6d0a3a33315f30,0x6625203233662e76,0x43336630202c3535\n"
".quad 0x0a3b453933383830,0x203233662e766f6d,0x6630202c36356625,0x3946314143343942\n"
".quad 0x3420636f6c2e0a3b,0x660a352030353620,0x33662e6e722e616d,0x202c373566252032\n"
".quad 0x6625202c36356625,0x35356625202c3131,0x33662e766f6d0a3b,0x202c383566252032\n"
".quad 0x4141413245426630,0x636f6c2e0a3b3341,0x3520303536203420,0x2e6e722e616d660a\n"
".quad 0x3935662520323366,0x202c37356625202c,0x6625202c31316625,0x636f6c2e0a3b3835\n"
".quad 0x2031303633203520,0x33662e6c756d0a33,0x202c303666252032,0x6625202c39356625\n"
".quad 0x636f6c2e0a3b3131,0x3520303536203420,0x2e6e722e616d660a,0x3131662520323366\n"
".quad 0x2c30366625202c36,0x202c353131662520,0x0a0a3b3531316625,0x0a3a34315f304242\n"
".quad 0x33203520636f6c2e,0x6e610a3320353336,0x7225203233622e64,0x327225202c323331\n"
".quad 0x730a3b32202c3730,0x732e71652e707465,0x2c32317025203233,0x202c323331722520\n"
".quad 0x20636f6c2e0a3b30,0x3520363336332035,0x3233662e67656e0a,0x25202c3136662520\n"
".quad 0x65730a3b36313166,0x25203233662e706c,0x6625202c37313166,0x366625202c363131\n"
".quad 0x3b32317025202c31,0x203520636f6c2e0a,0x730a332038333633,0x662e71652e707465\n"
".quad 0x2c33317025203233,0x202c353131662520,0x3030303030306630,0x317025400a3b3030\n"
".quad 0x4242206172622033,0x72620a3b35315f30,0x424220696e752e61,0x420a0a3b36315f30\n"
".quad 0x6d0a3a35315f3042,0x25203233662e766f,0x306630202c323666,0x3b30303030303030\n"
".quad 0x203420636f6c2e0a,0x6d0a352034353131,0x33662e6e722e6c75,0x2c37313166252032\n"
".quad 0x202c353131662520,0x420a0a3b32366625,0x6c0a3a36315f3042,0x2e6d617261702e64\n"
".quad 0x3131662520323366,0x6b365a5f5b202c33,0x6636506c656e7265,0x666a6a3474616f6c\n"
".quad 0x335f6d617261705f,0x20636f6c2e0a3b5d,0x660a312037332032,0x33662e6e722e616d\n"
".quad 0x2c38313166252032,0x6630202c33662520,0x3030303030383034,0x3b3331316625202c\n"
".quad 0x203420636f6c2e0a,0x62610a3520353933,0x6625203233662e73,0x31316625202c3336\n"
".quad 0x20636f6c2e0a3b38,0x3320363130332035,0x71652e707465730a,0x317025203233662e\n"
".quad 0x2c33366625202c34,0x25400a3b35662520,0x2061726220343170,0x0a3b37315f304242\n"
".quad 0x20696e752e617262,0x0a3b38315f304242,0x3a37315f3042420a,0x3233662e766f6d0a\n"
".quad 0x30202c3436662520,0x3030303030303066,0x20636f6c2e0a3b30,0x3520343531312034\n"
".quad 0x2e6e722e6c756d0a,0x3131662520323366,0x3831316625202c38,0x0a3b34366625202c\n"
".quad 0x3a38315f3042420a,0x203520636f6c2e0a,0x6d0a332035333433,0x25203233662e6c75\n"
".quad 0x316625202c353666,0x46336630202c3831,0x0a3b333839463232,0x31203420636f6c2e\n"
".quad 0x76630a3520323333,0x33732e696e722e74,0x7225203233662e32,0x366625202c353132\n"
".quad 0x20636f6c2e0a3b35,0x3320363334332035,0x2e6e722e7476630a,0x203233732e323366\n"
".quad 0x7225202c36366625,0x6f6c2e0a3b353132,0x3933343320352063,0x662e67656e0a3320\n"
".quad 0x2c37366625203233,0x2e0a3b3636662520,0x3536203420636f6c,0x2e616d660a352030\n"
".quad 0x25203233662e6e72,0x366625202c393666,0x2c31346625202c37,0x0a3b383131662520\n"
".quad 0x36203420636f6c2e,0x616d660a35203035,0x203233662e6e722e,0x6625202c31376625\n"
".quad 0x33346625202c3736,0x0a3b39366625202c,0x36203420636f6c2e,0x616d660a35203035\n"
".quad 0x203233662e6e722e,0x25202c3931316625,0x346625202c373666,0x3b31376625202c35\n"
".quad 0x203420636f6c2e0a,0x62610a3520353933,0x6625203233662e73,0x31316625202c3337\n"
".quad 0x20636f6c2e0a3b38,0x3320383434332035,0x74672e707465730a,0x317025203233662e\n"
".quad 0x2c33376625202c35,0x4142333734663020,0x7025400a3b303037,0x4220617262203531\n"
".quad 0x620a3b39315f3042,0x4220696e752e6172,0x0a0a3b37325f3042,0x0a3a39315f304242\n"
".quad 0x31203420636f6c2e,0x6f6d0a3520353837,0x7225203233622e76,0x31316625202c3832\n"
".quad 0x20636f6c2e0a3b38,0x3320373633332035,0x3233622e646e610a,0x202c323132722520\n"
".quad 0x322d202c38327225,0x3436333834373431,0x20636f6c2e0a3b38,0x3320343733332035\n"
".quad 0x3233752e7268730a,0x25202c3033722520,0x3b3332202c383272,0x3233622e646e610a\n"
".quad 0x202c353331722520,0x3532202c30337225,0x732e6464610a3b35,0x3633317225203233\n"
".quad 0x2c3533317225202c,0x2e0a3b3832312d20,0x3333203520636f6c,0x6c68730a33203537\n"
".quad 0x317225203233622e,0x38327225202c3733,0x2e726f0a3b38202c,0x3133722520323362\n"
".quad 0x2c3733317225202c,0x3834373431322d20,0x6c2e0a3b38343633,0x373333203520636f\n"
".quad 0x2e7268730a332037,0x3331722520323375,0x3633317225202c38,0x766f6d0a3b35202c\n"
".quad 0x317225203233752e,0x2e0a3b34202c3933,0x3333203520636f6c,0x6275730a33203737\n"
".quad 0x337225203233732e,0x3933317225202c32,0x3b3833317225202c,0x3233752e766f6d0a\n"
".quad 0x202c393032722520,0x752e766f6d0a3b30,0x3830327225203233,0x3b3930327225202c\n"
".quad 0x3436752e766f6d0a,0x202c31336c722520,0x7472616475635f5f,0x665f69706f32695f\n"
".quad 0x36752e6464610a3b,0x2c30336c72252034,0x3b30202c50532520,0x30325f3042420a0a\n"
".quad 0x6d676172702e0a3a,0x726e756f6e222061,0x6c2e0a3b226c6c6f,0x383333203520636f\n"
".quad 0x632e646c0a352031,0x3233752e74736e6f,0x202c303431722520,0x3b5d31336c72255b\n"
".quad 0x2e6f6c2e6c756d0a,0x3431722520323373,0x3034317225202c32,0x0a3b31337225202c\n"
".quad 0x32203420636f6c2e,0x6c756d0a35203337,0x203233752e69682e,0x25202c3334317225\n"
".quad 0x7225202c30343172,0x636f6c2e0a3b3133,0x2033383333203520,0x6f6c2e64616d0a35\n"
".quad 0x317225203233732e,0x34317225202c3434,0x2c31337225202c30,0x0a3b393032722520\n"
".quad 0x33203520636f6c2e,0x65730a3520343833,0x33752e746c2e7074,0x202c363170252032\n"
".quad 0x25202c3434317225,0x65730a3b32343172,0x25203233752e706c,0x2c31202c35343172\n"
".quad 0x36317025202c3020,0x33732e6464610a3b,0x2c39303272252032,0x202c353431722520\n"
".quad 0x2e0a3b3334317225,0x3333203520636f6c,0x2e74730a35203538,0x33752e6c61636f6c\n"
".quad 0x30336c72255b2032,0x3434317225202c5d,0x36732e6464610a3b,0x2c31336c72252034\n"
".quad 0x202c31336c722520,0x732e6464610a3b34,0x30336c7225203436,0x2c30336c7225202c\n"
".quad 0x2e6464610a3b3420,0x3032722520323373,0x3830327225202c38,0x6f6c2e0a3b31202c\n"
".quad 0x3038333320352063,0x2e707465730a3320,0x25203233732e656e,0x327225202c373170\n"
".quad 0x400a3b36202c3830,0x6172622037317025,0x3b30325f30424220,0x36752e6464610a0a\n"
".quad 0x2c31326c72252034,0x3b30202c50532520,0x203520636f6c2e0a,0x730a332037383333\n"
".quad 0x2e6c61636f6c2e74,0x5053255b20323375,0x7225202c5d34322b,0x6f6c2e0a3b393032\n"
".quad 0x3239333320352063,0x732e6464610a3320,0x3734317225203233,0x202c32337225202c\n"
".quad 0x772e6c756d0a3b32,0x203233732e656469,0x25202c32326c7225,0x3b34202c37343172\n"
".quad 0x3436732e6464610a,0x202c33326c722520,0x25202c31326c7225,0x64610a3b32326c72\n"
".quad 0x7225203436732e64,0x6c7225202c30316c,0x3b34322d202c3332,0x203520636f6c2e0a\n"
".quad 0x6c0a332032393333,0x2e6c61636f6c2e64,0x3132722520323375,0x326c72255b202c30\n"
".quad 0x636f6c2e0a3b5d33,0x2033393333203520,0x636f6c2e646c0a33,0x25203233752e6c61\n"
".quad 0x255b202c31313272,0x5d342d2b33326c72,0x33622e646e610a3b,0x202c393372252032\n"
".quad 0x3133202c30337225,0x3520636f6c2e0a3b,0x0a33203439333320,0x2e71652e70746573\n"
".quad 0x3831702520323373,0x202c39337225202c,0x38317025400a3b30,0x3042422061726220\n"
".quad 0x6f6d0a0a3b33325f,0x7225203233752e76,0x3b3233202c303531,0x203520636f6c2e0a\n"
".quad 0x730a352035393333,0x25203233732e6275,0x7225202c31353172,0x337225202c303531\n"
".quad 0x20636f6c2e0a3b39,0x3520363933332035,0x3233752e7268730a,0x202c323531722520\n"
".quad 0x25202c3131327225,0x68730a3b31353172,0x7225203233622e6c,0x327225202c333531\n"
".quad 0x39337225202c3031,0x33732e6464610a3b,0x2c30313272252032,0x202c323531722520\n"
".quad 0x2e0a3b3335317225,0x3333203520636f6c,0x2e646c0a35203739,0x33752e6c61636f6c\n"
".quad 0x2c34353172252032,0x2b30316c72255b20,0x7268730a3b5d3631,0x317225203233752e\n"
".quad 0x35317225202c3635,0x3135317225202c34,0x33622e6c68730a3b,0x2c37353172252032\n"
".quad 0x202c313132722520,0x64610a3b39337225,0x7225203233732e64,0x317225202c313132\n"
".quad 0x35317225202c3635,0x5f3042420a0a3b37,0x636f6c2e0a3a3332,0x2031303433203520\n"
".quad 0x33752e7268730a33,0x2c38353172252032,0x202c313132722520,0x2e6c68730a3b3033\n"
".quad 0x3531722520323362,0x3031327225202c39,0x2e726f0a3b32202c,0x3132722520323362\n"
".quad 0x3835317225202c33,0x3b3935317225202c,0x203520636f6c2e0a,0x730a332032303433\n"
".quad 0x25203233622e6c68,0x327225202c353472,0x2e0a3b32202c3131,0x3433203520636f6c\n"
".quad 0x7268730a33203330,0x317225203233752e,0x31327225202c3036,0x2e0a3b3133202c33\n"
".quad 0x3333203520636f6c,0x7268730a33203939,0x317225203233752e,0x31327225202c3136\n"
".quad 0x2e0a3b3033202c30,0x3433203520636f6c,0x6464610a33203430,0x317225203233732e\n"
".quad 0x36317225202c3236,0x3136317225202c30,0x3520636f6c2e0a3b,0x0a33203530343320\n"
".quad 0x203233732e67656e,0x25202c3336317225,0x65730a3b32363172,0x33732e746c2e7074\n"
".quad 0x202c393170252032,0x3b30202c38327225,0x33622e706c65730a,0x2c35313272252032\n"
".quad 0x202c333631722520,0x25202c3236317225,0x6f6c2e0a3b393170,0x3730343320352063\n"
".quad 0x2e707465730a3320,0x25203233732e7165,0x317225202c303270,0x400a3b30202c3036\n"
".quad 0x6172622030327025,0x3b35325f30424220,0x3520636f6c2e0a0a,0x0a35203930343320\n"
".quad 0x203233622e746f6e,0x25202c3436317225,0x6c2e0a3b33313272,0x313433203520636f\n"
".quad 0x2e67656e0a352030,0x3734722520323373,0x0a3b35347225202c,0x2e71652e70746573\n"
".quad 0x3132702520323373,0x202c35347225202c,0x20636f6c2e0a3b30,0x3520313134332035\n"
".quad 0x33752e706c65730a,0x2c35363172252032,0x25202c30202c3120,0x6f6c2e0a3b313270\n"
".quad 0x3231343320352063,0x732e6464610a3520,0x3331327225203233,0x2c3536317225202c\n"
".quad 0x0a3b343631722520,0x33203520636f6c2e,0x6f780a3520333134,0x7225203233622e72\n"
".quad 0x327225202c323132,0x3431322d202c3231,0x3b38343633383437,0x3233752e766f6d0a\n"
".quad 0x202c343132722520,0x72620a3b37347225,0x424220696e752e61,0x420a0a3b36325f30\n"
".quad 0x6d0a3a35325f3042,0x25203233752e766f,0x7225202c34313272,0x3042420a0a3b3534\n"
".quad 0x6f6c2e0a3a36325f,0x2035343120342063,0x33622e7a6c630a35,0x2c36363172252032\n"
".quad 0x0a3b333132722520,0x33203520636f6c2e,0x65730a3320373134,0x33732e71652e7074\n"
".quad 0x202c323270252032,0x30202c3636317225,0x3520636f6c2e0a3b,0x0a37203831343320\n"
".quad 0x203233622e6c6873,0x25202c3736317225,0x7225202c33313272,0x766f6d0a3b363631\n"
".quad 0x317225203233752e,0x0a3b3233202c3836,0x33203520636f6c2e,0x75730a3720383134\n"
".quad 0x7225203233732e62,0x317225202c393631,0x36317225202c3836,0x752e7268730a3b36\n"
".quad 0x3037317225203233,0x2c3431327225202c,0x0a3b393631722520,0x203233732e646461\n"
".quad 0x25202c3137317225,0x7225202c30373172,0x6c65730a3b373631,0x7225203233622e70\n"
".quad 0x327225202c323731,0x37317225202c3331,0x3b32327025202c31,0x203520636f6c2e0a\n"
".quad 0x6d0a332030323433,0x33732e6f6c2e6c75,0x2c33373172252032,0x202c323731722520\n"
".quad 0x383730373132392d,0x2e766f6d0a3b3037,0x3731722520323375,0x373132392d202c34\n"
".quad 0x2e0a3b3037383730,0x3732203420636f6c,0x2e6c756d0a352033,0x25203233752e6968\n"
".quad 0x7225202c35373172,0x317225202c323731,0x636f6c2e0a3b3437,0x2032323433203520\n"
".quad 0x672e707465730a33,0x7025203233732e74,0x37317225202c3332,0x68730a3b30202c35\n"
".quad 0x7225203233622e6c,0x317225202c363731,0x2e0a3b31202c3537,0x3433203520636f6c\n"
".quad 0x7268730a35203332,0x317225203233752e,0x37317225202c3737,0x6f0a3b3133202c33\n"
".quad 0x7225203233622e72,0x317225202c383731,0x37317225202c3737,0x2e706c65730a3b36\n"
".quad 0x3731722520323362,0x3837317225202c39,0x2c3537317225202c,0x730a3b3332702520\n"
".quad 0x203233622e706c65,0x2d202c3038317225,0x7025202c30202c31,0x2e766f6d0a3b3332\n"
".quad 0x3831722520323375,0x0a3b363231202c31,0x203233732e627573,0x25202c3238317225\n"
".quad 0x7225202c31383172,0x6464610a3b363631,0x317225203233732e,0x38317225202c3338\n"
".quad 0x3038317225202c32,0x33622e6c68730a3b,0x2c34383172252032,0x202c333831722520\n"
".quad 0x636f6c2e0a3b3332,0x2036323433203520,0x33732e6464610a33,0x2c35383172252032\n"
".quad 0x202c393731722520,0x752e7268730a3b31,0x3638317225203233,0x2c3538317225202c\n"
".quad 0x2e6464610a3b3720,0x3831722520323373,0x3638317225202c37,0x7268730a3b31202c\n"
".quad 0x317225203233752e,0x38317225202c3838,0x64610a3b31202c37,0x7225203233732e64\n"
".quad 0x317225202c393831,0x38317225202c3838,0x33622e726f0a3b34,0x2c30393172252032\n"
".quad 0x202c393831722520,0x2e0a3b3231327225,0x3731203420636f6c,0x766f6d0a35203837\n"
".quad 0x316625203233622e,0x39317225202c3931,0x5f3042420a0a3b30,0x636f6c2e0a3a3732\n"
".quad 0x2034353633203520,0x33732e6464610a33,0x202c343572252032,0x31202c3531327225\n"
".quad 0x3520636f6c2e0a3b,0x0a33203535363320,0x203233622e646e61,0x25202c3139317225\n"
".quad 0x0a3b31202c343572,0x2e71652e70746573,0x3432702520323373,0x2c3139317225202c\n"
".quad 0x636f6c2e0a3b3020,0x2037393533203520,0x33662e6c756d0a33,0x202c343266252032\n"
".quad 0x25202c3931316625,0x6c2e0a3b39313166,0x353633203520636f,0x327025400a332035\n"
".quad 0x4242206172622034,0x6d0a0a3b39325f30,0x25203233662e766f,0x426630202c343766\n"
".quad 0x3b41313630364241,0x3233662e766f6d0a,0x30202c3537662520,0x4335464343373366\n"
".quad 0x20636f6c2e0a3b45,0x0a35203035362034,0x662e6e722e616d66,0x2c36376625203233\n"
".quad 0x25202c3537662520,0x376625202c343266,0x662e766f6d0a3b34,0x2c37376625203233\n"
".quad 0x4141324433663020,0x6f6c2e0a3b354141,0x2030353620342063,0x6e722e616d660a35\n"
".quad 0x376625203233662e,0x2c36376625202c38,0x25202c3432662520,0x766f6d0a3b373766\n"
".quad 0x376625203233662e,0x3046426630202c39,0x2e0a3b3030303030,0x3536203420636f6c\n"
".quad 0x2e616d660a352030,0x25203233662e6e72,0x376625202c303866,0x2c34326625202c38\n"
".quad 0x6d0a3b3937662520,0x25203233662e766f,0x336630202c313866,0x3b30303030303846\n"
".quad 0x203420636f6c2e0a,0x6d660a3520303536,0x3233662e6e722e61,0x202c303231662520\n"
".quad 0x6625202c30386625,0x31386625202c3432,0x6e752e6172620a3b,0x30335f3042422069\n"
".quad 0x325f3042420a0a3b,0x662e766f6d0a3a39,0x2c32386625203233,0x3838304333663020\n"
".quad 0x766f6d0a3b453933,0x386625203233662e,0x3439426630202c33,0x2e0a3b3946314143\n"
".quad 0x3536203420636f6c,0x2e616d660a352030,0x25203233662e6e72,0x386625202c343866\n"
".quad 0x2c34326625202c33,0x6d0a3b3238662520,0x25203233662e766f,0x426630202c353866\n"
".quad 0x3b33414141413245,0x203420636f6c2e0a,0x6d660a3520303536,0x3233662e6e722e61\n"
".quad 0x25202c3638662520,0x326625202c343866,0x3b35386625202c34,0x203520636f6c2e0a\n"
".quad 0x6d0a332031303633,0x25203233662e6c75,0x386625202c373866,0x3b34326625202c36\n"
".quad 0x203420636f6c2e0a,0x6d660a3520303536,0x3233662e6e722e61,0x202c303231662520\n"
".quad 0x6625202c37386625,0x316625202c393131,0x3042420a0a3b3931,0x2e646c0a3a30335f\n"
".quad 0x36752e6d61726170,0x2c37326c72252034,0x72656b365a5f5b20,0x6f6c6636506c656e\n"
".quad 0x705f666a6a347461,0x3b5d305f6d617261,0x6f742e617476630a,0x2e6c61626f6c672e\n"
".quad 0x326c722520343675,0x37326c7225202c34,0x3520636f6c2e0a3b,0x0a33203036363320\n"
".quad 0x203233622e646e61,0x25202c3239317225,0x0a3b32202c343572,0x2e71652e70746573\n"
".quad 0x3532702520323373,0x2c3239317225202c,0x636f6c2e0a3b3020,0x2031363633203520\n"
".quad 0x33662e67656e0a35,0x202c383866252032,0x730a3b3032316625,0x203233662e706c65\n"
".quad 0x6625202c39386625,0x386625202c303231,0x3b35327025202c38,0x203220636f6c2e0a\n"
".quad 0x6c756d0a31203733,0x396625203233662e,0x3731316625202c30,0x0a3b39386625202c\n"
".quad 0x203233662e6c756d,0x6625202c31396625,0x46336630202c3039,0x0a3b303030303030\n"
".quad 0x6d617261702e646c,0x317225203233752e,0x365a5f5b202c3939,0x36506c656e72656b\n"
".quad 0x6a6a3474616f6c66,0x5f6d617261705f66,0x636f6c2e0a3b5d31,0x0a31203034203220\n"
".quad 0x732e6f6c2e64616d,0x3739317225203233,0x202c32367225202c,0x25202c3939317225\n"
".quad 0x2e6c756d0a3b3272,0x3233752e65646977,0x202c35326c722520,0x31202c3739317225\n"
".quad 0x732e6464610a3b36,0x36326c7225203436,0x2c34326c7225202c,0x0a3b35326c722520\n"
".quad 0x203233662e766f6d,0x6630202c32396625,0x3030303030384633,0x3220636f6c2e0a3b\n"
".quad 0x74730a3120303420,0x2e6c61626f6c672e,0x5b203233662e3476,0x202c5d36326c7225\n"
".quad 0x6625202c3266257b,0x2c336625202c3139,0x0a3b7d3239662520,0x34203220636f6c2e\n"
".quad 0x3b7465720a322031,0x0002000a0a0a7d0a,0x12f4000000600100,0x0000000000000000\n"
".quad 0x0004000000000000,0x0038000000140001,0x0015000000210000,0x0000000000000000\n"
".quad 0x6574000000000000,0x706d69732f737473,0x6d69732f4c47656c,0x656b5f4c47656c70\n"
".quad 0x0075632e6c656e72,0x457f000000000000,0x000433010102464c,0x0002000000000000\n"
".quad 0x00000000000100be,0x124c000000000000,0x0040000000000000,0x0514000000000000\n"
".quad 0x0003003800400014,0x00000001000a0040,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0001000000000000,0x0000000000030000,0x0000000000000000\n"
".quad 0x02c0000000000000,0x00cd000000000000,0x0000000000000000,0x0004000000000000\n"
".quad 0x0000000000000000,0x000b000000000000,0x0000000000030000,0x0000000000000000\n"
".quad 0x038d000000000000,0x0064000000000000,0x0000000000000000,0x0001000000000000\n"
".quad 0x0000000000000000,0x0013000000000000,0x0000000000020000,0x0000000000000000\n"
".quad 0x03f1000000000000,0x0180000000000000,0x0002000000000000,0x00010000000c0000\n"
".quad 0x0018000000000000,0x0036000000000000,0x0006000000010000,0x0000000000000000\n"
".quad 0x0571000000000000,0x0bb8000000000000,0x0003000000000000,0x0004120000060000\n"
".quad 0x0000000000000000,0x009c000000000000,0x0002000000010000,0x0000000000000000\n"
".quad 0x1129000000000000,0x0034000000000000,0x0000000000000000,0x0004000000040000\n"
".quad 0x0000000000000000,0x0078000000000000,0x0002000000010000,0x0000000000000000\n"
".quad 0x115d000000000000,0x0030000000000000,0x0000000000000000,0x0004000000040000\n"
".quad 0x0000000000000000,0x0051000000000000,0x0002000000010000,0x0000000000000000\n"
".quad 0x118d000000000000,0x005c000000000000,0x0000000000000000,0x0001000000040000\n"
".quad 0x0000000000000000,0x00bf000000000000,0x0002000000010000,0x0000000000000000\n"
".quad 0x11e9000000000000,0x0018000000000000,0x0000000000000000,0x0004000000000000\n"
".quad 0x0000000000000000,0x006f000000000000,0x0002000000010000,0x0000000000000000\n"
".quad 0x1201000000000000,0x0048000000000000,0x0000000000000000,0x0001000000000000\n"
".quad 0x0000000000000000,0x2e00000000000000,0x6261747274736873,0x6261747274732e00\n"
".quad 0x6261746d79732e00,0x6f6c672e766e2e00,0x74696e692e6c6162,0x6f6c672e766e2e00\n"
".quad 0x7865742e006c6162,0x72656b365a5f2e74,0x6f6c6636506c656e,0x2e00666a6a347461\n"
".quad 0x2e6f666e692e766e,0x656e72656b365a5f,0x74616f6c6636506c,0x766e2e00666a6a34\n"
".quad 0x6e2e006f666e692e,0x6174736e6f632e76,0x365a5f2e3631746e,0x36506c656e72656b\n"
".quad 0x6a6a3474616f6c66,0x6f632e766e2e0066,0x2e30746e6174736e,0x656e72656b365a5f\n"
".quad 0x74616f6c6636506c,0x766e2e00666a6a34,0x6e6174736e6f632e,0x6b365a5f00003274\n"
".quad 0x6636506c656e7265,0x666a6a3474616f6c,0x5f616475635f5f00,0x7669645f30326d73\n"
".quad 0x003233665f6e725f,0x735f616475635f5f,0x5f7669645f30326d,0x7a74666f6e5f6e72\n"
".quad 0x6f6c735f3233665f,0x5f5f006874617077,0x695f747261647563,0x0000665f69706f32\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000010003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000020003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000030003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000003000000,0x0000000000000000,0x0000000000000000,0x0000000003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000040003000000,0xb800000000000000\n"
".quad 0x000000000000000b,0x0000070003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000090003000000,0x0000000000000000,0x0000000000000000,0x0000060003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000050003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000080003000000,0x0000000000000000,0x0100000000000000\n"
".quad 0x0000041012000000,0xb000000000000000,0x1600000000000007,0xb000040012000000\n"
".quad 0xa000000000000007,0x2d00000000000000,0x5000040012000000,0x6800000000000008\n"
".quad 0x5300000000000003,0x0000080011000000,0x1800000000000000,0xe400000000000000\n"
".quad 0x042800440400005d,0x042c00000094001c,0x042c0000008400dc,0x042c00000098011c\n"
".quad 0x032c00000088019c,0xa34800c00080105d,0xa3200640002000dc,0x03200c400030401c\n"
".quad 0x044800c00010109c,0x0418004000a1215c,0x07180000000d211c,0xe45000001d400100\n"
".quad 0x042800000010019d,0x0418004000b1215c,0x071800000001211c,0x005000001cc00100\n"
".quad 0xe45000000018615c,0x0028004000c0019d,0x005000efe000521c,0x005000000010415c\n"
".quad 0x00300cd02000811c,0x805000efe000529c,0x00210edfe00041dc,0x0758000000fc4100\n"
".quad 0x026000000aa00000,0x8030fc8be60c415c,0x84220e40003441dc,0x04140000001521dc\n"
".quad 0x00180000001d215e,0x003008400004519e,0x00300c400014519e,0xf4300c400024519e\n"
".quad 0x0340000000000021,0x026000c00020419c,0xe43a00000000415c,0xe428000000fc025d\n"
".quad 0xe428000000fc01dd,0xe428000000fc035d,0x422800000008039d,0x863a00000000619c\n"
".quad 0x031400080000d2dc,0x234800c0000471dc,0xa31a8ec0001873dc,0xa32012000018b25c\n"
".quad 0x035000000018b31c,0x854800c00010d35c,0x03c800000000e25c,0x04188e00003091dc\n"
".quad 0x032010c00007f31c,0x434800c00010e39c,0xe72018000018b25c,0x034003fffe800005\n"
".quad 0x855800c0005c419c,0x03c800000060225c,0x036800c003fc61dc,0x036800c0007c62dc\n"
".quad 0x234800fffe0071dc,0x03190e0000fcb1dc,0x035800c00014719c,0x034800c00080b362\n"
".quad 0x434800c00018619e,0x4340000000086320,0x854000000008639c,0x85c003ffffe0c320\n"
".quad 0x85c003fffff0e1dc,0x03c000000000e19c,0x035800000034c320,0x0358000000347260\n"
".quad 0x03600000002c7360,0x03600000002c62e0,0x034800000034c1e0,0x23480000002c91a0\n"
".quad 0x03188e0000fc41dc,0x035800c00078725c,0x036000c0000862dc,0x436000c00008735c\n"
".quad 0x03680000002c92dc,0x235800c0007cb25c,0xc3190e0000fc95dc,0x23680000002ff329\n"
".quad 0xe4329ac00007f1e8,0x8228000000340309,0x033a000000005168,0x84480000003072e8\n"
".quad 0x031c00000035232b,0x03780000002c01dc,0x034800c0007c71de,0x034800c00080735e\n"
".quad 0x03600000001cb39c,0x035800000034c31c,0x234800000038c31c,0x43310e000030b2dc\n"
".quad 0xa25000400044b35c,0x2313243f6a88b2dc,0x031a0e0000fcd3dc,0x035800c0007cb2c4\n"
".quad 0x436000c00004d304,0x046800000030b344,0x03080e000004131c,0x034800c00004d2dc\n"
".quad 0x035800c0001cb11c,0x034800c001f872de,0x034800c0000441dc,0x035800c00078611c\n"
".quad 0x034800000030b2dc,0x035800c00004719c,0xe3480000001091dc,0x844000000018b11e\n"
".quad 0x531c0000001d21c3,0x036800000014419c,0xe46800c00004711c,0x0328004000c0025d\n"
".quad 0x236800c00008715c,0x001a8e0000fc41dc,0x003012d02000a11c,0xe25800000018625c\n"
".quad 0x801aead8186801c1,0xe2210edfe00043dc,0x0018f0220e7802e1,0x00300e40005491c0\n"
".quad 0x0058000000fc4104,0x0030164000949320,0x02301280006472c0,0x0030fc8be60c435c\n"
".quad 0x0030128000a4c320,0x843012800074b2c0,0x00140000003521dc,0x005800000024c320\n"
".quad 0x043012800084b240,0x00180000001d235e,0x00300c000018c260,0x00210e0000fc63dc\n"
".quad 0x043008400004d2de,0x801000000025231d,0x00220e40003441dc,0x233016400014d2de\n"
".quad 0x00310a000030915c,0x0058000000fc6144,0x073016400024d25e,0xf460000009e00000\n"
".quad 0x0340000000000021,0x035800c0005c41dc,0x026000c00020439c,0x033a00000000419c\n"
".quad 0xe46800c003fc72dc,0xe428000000fc025d,0x0328000000fc031d,0xe44800fffe00b35c\n"
".quad 0x4228000000fc02dd,0x033a00000000e39c,0xe45800c00014d3dc,0x032800000008035d\n"
".quad 0x864800c00010f3de,0x031400080000c41c,0x234800c00004b2dc,0xa31a8ec00018b3dc\n"
".quad 0xa32012000039045c,0x035000000039025c,0x854800c00010c31c,0x03c800000000d45c\n"
".quad 0x04188e00002511dc,0x032010c00007f25c,0x434800c00010d35c,0xe72012000039025c\n"
".quad 0x034003fffe800005,0x034800c00008f2dc,0x856800c0007c739c,0x43c800000060225c\n"
".quad 0x234000000008b31c,0x03190e0000fce1dc,0x854800ffffa0c3dc,0x85c000000000c1dc\n"
".quad 0x85c003fffff0c2dc,0x03c000000040f0a0,0x034800c00080e262,0x0360000000387360\n"
".quad 0x036000000038b3a0,0x035800000024b320,0x03580000002420a0,0x034800000034c1e0\n"
".quad 0x23480000003822e0,0x03188e0000fc41dc,0x036000c00008725c,0x035800c00078b09c\n"
".quad 0x436000c00008b35c,0x036800000024225c,0x235800c0007c909c,0xc3190e0000fc25dc\n"
".quad 0x236800000027f329,0xe4329ac00007f2e8,0x8228000000340309,0x033a0000000061a8\n"
".quad 0x844800000030b268,0x031c00000035232b,0x03780000002402dc,0x034800c0007cb2de\n"
".quad 0x034800c00080b35e,0x03600000002c939c,0x035800000034c31c,0x234800000038c31c\n"
".quad 0x033116000030925c,0x434800c001f8b2de,0xa25000400044935c,0x2313243f6a88925c\n"
".quad 0x031a0e0000fcd3dc,0x035800c0007c9244,0x436000c00004d304,0x0468000000309344\n"
".quad 0x03080e000004131c,0x034800c00004d25c,0x034800000030b2dc,0x035800c0001c911c\n"
".quad 0x034800c00004425c,0x035800c00078711c,0x035800c00004925c,0xe3480000001021dc\n"
".quad 0x844000000024b09e,0x531c0000001d21c3,0x036800000018225c,0x004800c00004719c\n"
".quad 0xa3580000002491dc,0x0320064000a0001c,0x036800c00004609c,0xe46800c0000860dc\n"
".quad 0x232800400080019d,0xe21a8e0000fc21dc,0xe218fe00000002dd,0xe21aead818680081\n"
".quad 0x0018f0220e780121,0x0030044000547080,0x0030084000947120,0x00300e8000642080\n"
".quad 0x00300e8000a44120,0x00300e8000742080,0x00580000001c4120,0x00300e8000842080\n"
".quad 0x04301200002440a0,0x231000000009211d,0x033106000010209c,0x43200dc00040011c\n"
".quad 0x005000c00040001c,0x435800000008509c,0x004800400090015c,0xc55800cfc000225c\n"
".quad 0xe79400000000421c,0x008000000000001d,0x02c800000010521c,0x403801fffffc41dc\n"
".quad 0x423010800084525e,0x4038fe00000071dc,0x403010000024821c,0x40307e000020725c\n"
".quad 0x40300e000024529e,0x023012000020a25c,0x403bfe000000429c,0x40300e00002451de\n"
".quad 0x40301200002071dc,0x02307e00002871dc,0x0239fffffffc721c,0x030bfdffffc0821c\n"
".quad 0xe71a0e4000b481dc,0x0740000000400021,0xe450000000600100,0xe4280000001001dd\n"
".quad 0xe7280000001c011d,0x039000000000001d,0x036000c0000441dc,0x036000c00004521c\n"
".quad 0x035800c0006071dc,0x035800c00060821c,0x034800fffffc71dc,0x034800fffffc821c\n"
".quad 0x031a0ec003f471dc,0xe71a20c003f481dc,0x8040000004e00021,0xe7218edfe00041dc\n"
".quad 0x8040000000400021,0xe7218edfe00051dc,0x0040000000400001,0xe75000000014411c\n"
".quad 0x034000000ba0001d,0x036000c00004425c,0x036000c00004529c,0x03190e0000fc93dc\n"
".quad 0x04190e0000fca5dc,0xe70c0e00000811dc,0x8040000000800001,0x80210edfe00047dc\n"
".quad 0xe7210edfe00051dc,0xe74000000080002d,0xe240000000600021,0x001bff000000011d\n"
".quad 0xe7c800000014411c,0x044000000a00001d,0xe70c0e00004401dc,0x8340000000600021\n"
".quad 0x026800000010511c,0xe73a00000000411c,0x044000000960001d,0xe70c0e00004831dc\n"
".quad 0x8340000000800021,0x026800000010511c,0x423a00000000411c,0xe739fe000000411c\n"
".quad 0x2340000008a0001d,0x231b0e0000fc73dc,0x001b0e0000fc81dc,0xe2307ed7e0004124\n"
".quad 0xe41bffffff000265,0xe728000000fc0245,0x0040000000800001,0x03307ed7e000515c\n"
".quad 0xe74800c00100925c,0xe44000000020001d,0x0328000000fc025d,0x034800fffe08829c\n"
".quad 0xe34800000020721d,0x034100000014a2de,0x004800fffe08715c,0xe3c800000010b29c\n"
".quad 0x004100000010511e,0x003014800084b31e,0x003014000030a15c,0x00307e000014429c\n"
".quad 0x003008000028b31e,0x003014000014c29c,0x003008000028b2de,0x033014000014b11c\n"
".quad 0x036000c00004431c,0x035800c00060c1dc,0x03480000001c821c,0x034800000020921c\n"
".quad 0x034800fffffc825c,0xe71a0ec003f491dc,0x0340000000600001,0xe3480000001c815d\n"
".quad 0xe74000000010511e,0x234000000480001d,0xe7198ec003f881dc,0x0240000000600001\n"
".quad 0x423a00000000411c,0xe739fe000000411c,0x2340000003e0001d,0xe71a0e0000fc81dc\n"
".quad 0x2340000003a00001,0xe71b0effffa081dc,0x0240000000400001,0xe73a00000000411c\n"
".quad 0x004000000320001d,0x843194000014b25c,0x001c00000021235f,0x023094000014b1dc\n"
".quad 0x233801fffffc931c,0x00190e0000fcd1dc,0x423114000014b25c,0x033802000000c15c\n"
".quad 0x844800c0008082a0,0x001c0000002122df,0x03168e00002471dc,0x0360000000285220\n"
".quad 0x84580000002c5160,0x031c0000001d21df,0x033110c00007f220,0x026000c00078525c\n"
".quad 0x433a00000000411c,0x03680000002071e0,0x035800c0007c925c,0x036800c00004521c\n"
".quad 0x435800c00004515c,0x03680000002471dc,0x03680000001c81dc,0x031a8e0000fc71dc\n"
".quad 0x434800c000045140,0xe76800000014411c,0x009000000000001d,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x683fc90fda000000,0x0027c234c533a221,0xcec90fdaa2473ba7\n"
".quad 0x003d2aaaa537ccf5,0xf93f800000bf0000,0xefbe2aaaa3b94ca1,0x0a00080a047effff\n"
".quad 0x0300140020000000,0x00000c1704001419,0x0000100003000000,0x00000c17040011f0\n"
".quad 0x00000c0002000000,0x00000c17040011f0,0x0000080001000000,0x00000c17040011f0\n"
".quad 0x0000000000000000,0xb400080d040021f0,0x410000000c000f00,0xc0db6295993c4390\n"
".quad 0x29fc2757d1f534dd,0x04a2f9836e4e4415,0x000000000e000812,0x0e00081104000000\n"
".quad 0x0400000000000000,0x000000000d000812,0x0d00081104000000,0x0400000000000000\n"
".quad 0x200000000c000812,0x0c00081104000000,0x0000000020000000,0x0005000000060000\n"
".quad 0x00000000124c0000,0x0000000000000000,0x0000000000000000,0x0000000000a80000\n"
".quad 0x0000000000a80000,0x0000000000040000,0x0c05600000000000,0x0000000005710000\n"
".quad 0x0000000000000000,0x0000000000000000,0x000000000c780000,0x000000000c780000\n"
".quad 0x0000000000040000,0x0005000000010000,0x0000000011e90000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000180000,0x0000000000180000,0x0000000000040000\n"
".quad 0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long fatbinData[2133];

}


extern "C" {

static const struct {int m; int v; const unsigned long long* d; char* f;} __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (".nvFatBinSegment")))=
 { 0x466243b1, 1, fatbinData, 0 };

}
# 3 "/tmp/tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c" 2 3
extern void __device_stub__Z6kernelP6float4jjf(float4 *, unsigned, unsigned, float);
static void __sti____cudaRegisterAll_50_tmpxft_0000721a_00000000_4_simpleGL_kernel_cpp1_ii_ac7d3c8c(void) __attribute__((__constructor__));
void __device_stub__Z6kernelP6float4jjf(float4 *__par0, unsigned __par1, unsigned __par2, float __par3){if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)16UL) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(float4 *, unsigned, unsigned, float))kernel)); (void)cudaLaunch(((char *)((void ( *)(float4 *, unsigned, unsigned, float))kernel))); };}
# 24 "tests/simpleGL/simpleGL_kernel.cu"
void kernel( float4 *__cuda_0,unsigned __cuda_1,unsigned __cuda_2,float __cuda_3)
# 25 "tests/simpleGL/simpleGL_kernel.cu"
{__device_stub__Z6kernelP6float4jjf( __cuda_0,__cuda_1,__cuda_2,__cuda_3);
# 41 "tests/simpleGL/simpleGL_kernel.cu"
}
# 1 "/tmp/tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c"
static void __sti____cudaRegisterAll_50_tmpxft_0000721a_00000000_4_simpleGL_kernel_cpp1_ii_ac7d3c8c(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(float4 *, unsigned, unsigned, float))kernel), (char*)"_Z6kernelP6float4jjf", "_Z6kernelP6float4jjf", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); }
# 2 "tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c" 2
# 1 "tmpxft_0000721a_00000000-1_simpleGL_kernel.cudafe1.stub.c"
