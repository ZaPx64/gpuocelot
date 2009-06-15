# 1 "/tmp/tmpxft_000015ec_00000000-1_bodysystemcuda.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_000015ec_00000000-1_bodysystemcuda.cudafe1.cpp"
# 1 "bodysystemcuda.cu"
# 233 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
namespace std __attribute__((visibility("default"))) {
# 245 "/usr/include/c++/4.3/x86_64-linux-gnu/bits/c++config.h" 3
}
# 152 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef long ptrdiff_t;
# 214 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 1 3
# 69 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 1 3
# 54 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/host_defines.h" 1 3
# 55 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 1 3
# 42 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/device_types.h" 1 3
# 46 "/home/gdiamos/temp/cuda/bin//../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 43 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/driver_types.h" 1 3
# 59 "/home/gdiamos/temp/cuda/bin//../include/driver_types.h" 3
enum cudaError
{
  cudaSuccess = 0,
  cudaErrorMissingConfiguration,
  cudaErrorMemoryAllocation,
  cudaErrorInitializationError,
  cudaErrorLaunchFailure,
  cudaErrorPriorLaunchFailure,
  cudaErrorLaunchTimeout,
  cudaErrorLaunchOutOfResources,
  cudaErrorInvalidDeviceFunction,
  cudaErrorInvalidConfiguration,
  cudaErrorInvalidDevice,
  cudaErrorInvalidValue,
  cudaErrorInvalidPitchValue,
  cudaErrorInvalidSymbol,
  cudaErrorMapBufferObjectFailed,
  cudaErrorUnmapBufferObjectFailed,
  cudaErrorInvalidHostPointer,
  cudaErrorInvalidDevicePointer,
  cudaErrorInvalidTexture,
  cudaErrorInvalidTextureBinding,
  cudaErrorInvalidChannelDescriptor,
  cudaErrorInvalidMemcpyDirection,
  cudaErrorAddressOfConstant,
  cudaErrorTextureFetchFailed,
  cudaErrorTextureNotBound,
  cudaErrorSynchronizationError,
  cudaErrorInvalidFilterSetting,
  cudaErrorInvalidNormSetting,
  cudaErrorMixedDeviceExecution,
  cudaErrorCudartUnloading,
  cudaErrorUnknown,
  cudaErrorNotYetImplemented,
  cudaErrorMemoryValueTooLarge,
  cudaErrorInvalidResourceHandle,
  cudaErrorNotReady,
  cudaErrorInsufficientDriver,
  cudaErrorSetOnActiveProcess,
  cudaErrorStartupFailure = 0x7f,
  cudaErrorApiFailureBase = 10000
};


enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned,
  cudaChannelFormatKindUnsigned,
  cudaChannelFormatKindFloat,
  cudaChannelFormatKindNone
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


enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice,
  cudaMemcpyDeviceToHost,
  cudaMemcpyDeviceToDevice
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
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int __cudaReserved[39];
};
# 224 "/home/gdiamos/temp/cuda/bin//../include/driver_types.h" 3
typedef enum cudaError cudaError_t;


typedef int cudaStream_t;


typedef int cudaEvent_t;
# 44 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/texture_types.h" 1 3
# 54 "/home/gdiamos/temp/cuda/bin//../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap,
  cudaAddressModeClamp
};


enum cudaTextureFilterMode
{
  cudaFilterModePoint,
  cudaFilterModeLinear
};


enum cudaTextureReadMode
{
  cudaReadModeElementType,
  cudaReadModeNormalizedFloat
};


struct textureReference
{
  int normalized;
  enum cudaTextureFilterMode filterMode;
  enum cudaTextureAddressMode addressMode[3];
  struct cudaChannelFormatDesc channelDesc;
  int __cudaReserved[16];
};
# 45 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 1 3
# 54 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct char2
{
  signed char x, y;
};


struct uchar2
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


struct char4
{
  signed char x, y, z, w;
};


struct uchar4
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


struct short2
{
  short x, y;
};


struct ushort2
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


struct short4
{
  short x, y, z, w;
};


struct ushort4
{
  unsigned short x, y, z, w;
};


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct int2
{
  int x, y;
};


struct uint2
{
  unsigned int x, y;
};


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct int4
{
  int x, y, z, w;
};


struct uint4
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


struct



      

                                             long2
{
  long int x, y;
};


struct



      

                                                      ulong2
{
  unsigned long int x, y;
};
# 262 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
struct float1
{
  float x;
};


struct float2
{
  float x, y;
};


struct float3
{
  float x, y, z;
};


struct float4
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


struct longlong2
{
  long long int x, y;
};


struct ulonglong2
{
  unsigned long long int x, y;
};


struct double1
{
  double x;
};


struct double2
{
  double x, y;
};
# 328 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
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

typedef struct double1 double1;

typedef struct double2 double2;
# 419 "/home/gdiamos/temp/cuda/bin//../include/vector_types.h" 3
typedef struct dim3 dim3;


struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int x = 1, unsigned int y = 1, unsigned int z = 1) : x(x), y(y), z(z) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};
# 45 "/home/gdiamos/temp/cuda/bin//../include/builtin_types.h" 2 3
# 56 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 2 3
# 79 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern "C" {
# 88 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc3D(struct cudaPitchedPtr* pitchDevPtr, struct cudaExtent extent);
extern cudaError_t cudaMalloc3DArray(struct cudaArray** arrayPtr, const struct cudaChannelFormatDesc* desc, struct cudaExtent extent);
extern cudaError_t cudaMemset3D(struct cudaPitchedPtr pitchDevPtr, int value, struct cudaExtent extent);
extern cudaError_t cudaMemcpy3D(const struct cudaMemcpy3DParms *p);
extern cudaError_t cudaMemcpy3DAsync(const struct cudaMemcpy3DParms *p, cudaStream_t stream);
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMalloc(void **devPtr, size_t size);
extern cudaError_t cudaMallocHost(void **ptr, size_t size);
extern cudaError_t cudaMallocPitch(void **devPtr, size_t *pitch, size_t width, size_t height);
extern cudaError_t cudaMallocArray(struct cudaArray **array, const struct cudaChannelFormatDesc *desc, size_t width, size_t height );
extern cudaError_t cudaFree(void *devPtr);
extern cudaError_t cudaFreeHost(void *ptr);
extern cudaError_t cudaFreeArray(struct cudaArray *array);
# 116 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h" 3
extern cudaError_t cudaMemcpy(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyFromArray(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpyArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpy2D(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DToArray(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DFromArray(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind);
extern cudaError_t cudaMemcpy2DArrayToArray(struct cudaArray *dst, size_t wOffsetDst, size_t hOffsetDst, const struct cudaArray *src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyToSymbol(const char *symbol, const void *src, size_t count, size_t offset , enum cudaMemcpyKind kind );
extern cudaError_t cudaMemcpyFromSymbol(void *dst, const char *symbol, size_t count, size_t offset , enum cudaMemcpyKind kind );







extern cudaError_t cudaMemcpyAsync(void *dst, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromArrayAsync(void *dst, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t count, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DAsync(void *dst, size_t dpitch, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DToArrayAsync(struct cudaArray *dst, size_t wOffset, size_t hOffset, const void *src, size_t spitch, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpy2DFromArrayAsync(void *dst, size_t dpitch, const struct cudaArray *src, size_t wOffset, size_t hOffset, size_t width, size_t height, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyToSymbolAsync(const char *symbol, const void *src, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);
extern cudaError_t cudaMemcpyFromSymbolAsync(void *dst, const char *symbol, size_t count, size_t offset, enum cudaMemcpyKind kind, cudaStream_t stream);







extern cudaError_t cudaMemset(void *mem, int c, size_t count);
extern cudaError_t cudaMemset2D(void *mem, size_t pitch, int c, size_t width, size_t height);







extern cudaError_t cudaGetSymbolAddress(void **devPtr, const char *symbol);
extern cudaError_t cudaGetSymbolSize(size_t *size, const char *symbol);







extern cudaError_t cudaGetDeviceCount(int *count);
extern cudaError_t cudaGetDeviceProperties(struct cudaDeviceProp *prop, int device);
extern cudaError_t cudaChooseDevice(int *device, const struct cudaDeviceProp *prop);
extern cudaError_t cudaSetDevice(int device);
extern cudaError_t cudaGetDevice(int *device);







extern cudaError_t cudaBindTexture(size_t *offset, const struct textureReference *texref, const void *devPtr, const struct cudaChannelFormatDesc *desc, size_t size );
extern cudaError_t cudaBindTextureToArray(const struct textureReference *texref, const struct cudaArray *array, const struct cudaChannelFormatDesc *desc);
extern cudaError_t cudaUnbindTexture(const struct textureReference *texref);
extern cudaError_t cudaGetTextureAlignmentOffset(size_t *offset, const struct textureReference *texref);
extern cudaError_t cudaGetTextureReference(const struct textureReference **texref, const char *symbol);







extern cudaError_t cudaGetChannelDesc(struct cudaChannelFormatDesc *desc, const struct cudaArray *array);
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, enum cudaChannelFormatKind f);







extern cudaError_t cudaGetLastError(void);
extern const char* cudaGetErrorString(cudaError_t error);







extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem , cudaStream_t stream );
extern cudaError_t cudaSetupArgument(const void *arg, size_t size, size_t offset);
extern cudaError_t cudaLaunch(const char *symbol);







extern cudaError_t cudaStreamCreate(cudaStream_t *stream);
extern cudaError_t cudaStreamDestroy(cudaStream_t stream);
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream);
extern cudaError_t cudaStreamQuery(cudaStream_t stream);







extern cudaError_t cudaEventCreate(cudaEvent_t *event);
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream);
extern cudaError_t cudaEventQuery(cudaEvent_t event);
extern cudaError_t cudaEventSynchronize(cudaEvent_t event);
extern cudaError_t cudaEventDestroy(cudaEvent_t event);
extern cudaError_t cudaEventElapsedTime(float *ms, cudaEvent_t start, cudaEvent_t end);







extern cudaError_t cudaSetDoubleForDevice(double *d);
extern cudaError_t cudaSetDoubleForHost(double *d);







extern cudaError_t cudaThreadExit(void);
extern cudaError_t cudaThreadSynchronize(void);


}
# 70 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/storage_class.h" 1 3
# 71 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2 3
# 216 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stddef.h" 2 3
# 88 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr *, cudaExtent);
# 89 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray **, const cudaChannelFormatDesc *, cudaExtent);
# 90 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr, int, cudaExtent);
# 91 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms *);
# 92 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms *, cudaStream_t);
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void **, size_t);
# 102 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void **, size_t);
# 103 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 104 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray **, const cudaChannelFormatDesc *, size_t, size_t = (1));
# 105 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void *);
# 106 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void *);
# 107 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray *);
# 116 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void *, const void *, size_t, cudaMemcpyKind);
# 117 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind);
# 118 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind);
# 119 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 120 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 121 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind);
# 122 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind);
# 123 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray *, size_t, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 124 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 125 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 133 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void *, const void *, size_t, cudaMemcpyKind, cudaStream_t);
# 134 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, cudaMemcpyKind, cudaStream_t);
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void *, const cudaArray *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 136 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void *, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 137 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray *, size_t, size_t, const void *, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 138 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void *, size_t, const cudaArray *, size_t, size_t, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 139 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char *, const void *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 140 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void *, const char *, size_t, size_t, cudaMemcpyKind, cudaStream_t);
# 148 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void *, int, size_t);
# 149 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void *, size_t, int, size_t, size_t);
# 157 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void **, const char *);
# 158 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t *, const char *);
# 166 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int *);
# 167 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp *, int);
# 168 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int *, const cudaDeviceProp *);
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int);
# 170 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int *);
# 178 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t *, const textureReference *, const void *, const cudaChannelFormatDesc *, size_t = (((2147483647) * 2U) + 1U));
# 179 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference *, const cudaArray *, const cudaChannelFormatDesc *);
# 180 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference *);
# 181 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t *, const textureReference *);
# 182 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference **, const char *);
# 190 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc *, const cudaArray *);
# 191 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, cudaChannelFormatKind);
# 199 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 200 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t);
# 208 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3, dim3, size_t = (0), cudaStream_t = (0));
# 209 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void *, size_t, size_t);
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char *);
# 218 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t *);
# 219 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t);
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t);
# 221 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t);
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t *);
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t, cudaStream_t);
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t);
# 232 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t);
# 233 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t);
# 234 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float *, cudaEvent_t, cudaEvent_t);
# 242 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double *);
# 243 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double *);
# 251 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 58 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 59 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 60 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 61 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 63 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 64 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 65 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(char)) * 8);
# 70 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 72 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 75 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 76 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 78 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 79 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 81 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 82 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 83 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 85 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 86 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 88 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 89 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 90 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 92 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 93 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 95 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 96 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 97 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 99 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 100 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 102 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 103 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 104 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 106 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 107 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 109 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 110 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 111 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 113 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 114 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 116 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 117 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 118 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(signed char)) * 8);
# 120 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 121 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 123 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 124 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 125 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned char)) * 8);
# 127 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 128 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 130 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 131 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 132 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 134 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 135 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 137 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 138 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 139 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 141 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 142 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 144 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 145 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 146 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 148 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 149 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 151 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 152 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 153 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 155 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 156 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 158 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 159 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 160 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 162 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 163 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 165 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 166 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 167 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 169 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 170 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 172 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 173 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 174 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(short)) * 8);
# 176 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 177 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 179 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 180 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 181 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned short)) * 8);
# 183 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 184 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 186 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 187 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 188 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 190 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 191 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 193 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 194 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 195 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 197 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 198 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 200 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 201 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 202 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 204 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 205 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 207 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 208 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 209 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 211 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 212 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 214 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 215 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 216 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 218 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 219 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 221 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 222 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 223 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 225 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 226 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 228 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 229 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 230 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(int)) * 8);
# 232 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 233 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 235 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 236 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 237 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(unsigned)) * 8);
# 239 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 240 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 302 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 303 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 304 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 306 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 307 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 309 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 310 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 311 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 313 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 314 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 316 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 317 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 318 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 320 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 321 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 323 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 324 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
{
# 325 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
auto int e = (((int)sizeof(float)) * 8);
# 327 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 328 "/home/gdiamos/temp/cuda/bin//../include/channel_descriptor.h"
}
# 54 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 55 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
{
# 56 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
auto cudaPitchedPtr s;
# 58 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.ptr) = d;
# 59 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.pitch) = p;
# 60 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.xsize) = xsz;
# 61 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(s.ysize) = ysz;
# 63 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
return s;
# 64 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
}
# 66 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 67 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
{
# 68 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
auto cudaPos p;
# 70 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(p.x) = x;
# 71 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(p.y) = y;
# 72 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(p.z) = z;
# 74 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
return p;
# 75 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
}
# 77 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 78 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
{
# 79 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
auto cudaExtent e;
# 81 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(e.width) = w;
# 82 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(e.height) = h;
# 83 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
(e.depth) = d;
# 85 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
return e;
# 86 "/home/gdiamos/temp/cuda/bin//../include/driver_functions.h"
}
# 54 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 55 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 56 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char1 t; (t.x) = x; return t;
# 57 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 59 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 60 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 61 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar1 t; (t.x) = x; return t;
# 62 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 64 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 65 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 66 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char2 t; (t.x) = x; (t.y) = y; return t;
# 67 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 69 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 70 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 71 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar2 t; (t.x) = x; (t.y) = y; return t;
# 72 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 75 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 76 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 77 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 79 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 80 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 81 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 82 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 84 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 85 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 86 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 87 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 89 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 90 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 91 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 92 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 94 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short1 make_short1(short x)
# 95 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 96 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short1 t; (t.x) = x; return t;
# 97 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 99 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 100 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 101 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort1 t; (t.x) = x; return t;
# 102 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 104 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 105 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 106 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short2 t; (t.x) = x; (t.y) = y; return t;
# 107 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 109 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 110 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 111 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort2 t; (t.x) = x; (t.y) = y; return t;
# 112 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 114 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 115 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 116 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 117 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 119 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 120 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 121 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 122 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 124 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 125 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 126 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 127 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 129 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 130 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 131 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 132 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 134 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int1 make_int1(int x)
# 135 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 136 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int1 t; (t.x) = x; return t;
# 137 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 139 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 140 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 141 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint1 t; (t.x) = x; return t;
# 142 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 144 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 145 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 146 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int2 t; (t.x) = x; (t.y) = y; return t;
# 147 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 149 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 150 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 151 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint2 t; (t.x) = x; (t.y) = y; return t;
# 152 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 154 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 155 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 156 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 157 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 159 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 160 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 161 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 162 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 164 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 165 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 166 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 167 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 169 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 170 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 171 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 172 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 174 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline long1 make_long1(long x)
# 175 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 176 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto long1 t; (t.x) = x; return t;
# 177 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 179 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 180 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 181 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulong1 t; (t.x) = x; return t;
# 182 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 184 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 185 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 186 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto long2 t; (t.x) = x; (t.y) = y; return t;
# 187 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 189 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 190 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 191 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulong2 t; (t.x) = x; (t.y) = y; return t;
# 192 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 218 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float1 make_float1(float x)
# 219 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 220 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float1 t; (t.x) = x; return t;
# 221 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 223 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 224 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 225 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float2 t; (t.x) = x; (t.y) = y; return t;
# 226 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 228 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 229 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 230 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 231 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 233 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 234 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 235 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 236 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 238 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 239 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 240 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto longlong1 t; (t.x) = x; return t;
# 241 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 243 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 244 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 245 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulonglong1 t; (t.x) = x; return t;
# 246 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 248 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 249 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 250 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto longlong2 t; (t.x) = x; (t.y) = y; return t;
# 251 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 253 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 254 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 255 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 256 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 258 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline double1 make_double1(double x)
# 259 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 260 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto double1 t; (t.x) = x; return t;
# 261 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
# 263 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 264 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
{
# 265 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
auto double2 t; (t.x) = x; (t.y) = y; return t;
# 266 "/home/gdiamos/temp/cuda/bin//../include/vector_functions.h"
}
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
extern "C" { typedef struct __fsid_t { int __val[2]; } __fsid_t; }
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
# 61 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 77 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 93 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 105 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 121 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 123 "/usr/include/time.h" 3
__time_t tv_sec;
# 124 "/usr/include/time.h" 3
long tv_nsec;
# 125 "/usr/include/time.h" 3
}; }
# 134 "/usr/include/time.h" 3
extern "C" { struct tm {
# 136 "/usr/include/time.h" 3
int tm_sec;
# 137 "/usr/include/time.h" 3
int tm_min;
# 138 "/usr/include/time.h" 3
int tm_hour;
# 139 "/usr/include/time.h" 3
int tm_mday;
# 140 "/usr/include/time.h" 3
int tm_mon;
# 141 "/usr/include/time.h" 3
int tm_year;
# 142 "/usr/include/time.h" 3
int tm_wday;
# 143 "/usr/include/time.h" 3
int tm_yday;
# 144 "/usr/include/time.h" 3
int tm_isdst;
# 147 "/usr/include/time.h" 3
long tm_gmtoff;
# 148 "/usr/include/time.h" 3
const char *tm_zone;
# 153 "/usr/include/time.h" 3
}; }
# 162 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 164 "/usr/include/time.h" 3
timespec it_interval;
# 165 "/usr/include/time.h" 3
timespec it_value;
# 166 "/usr/include/time.h" 3
}; }
# 169 "/usr/include/time.h" 3
struct sigevent;
# 175 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 184 "/usr/include/time.h" 3
extern "C" __attribute__((__weak__)) clock_t clock() throw();
# 187 "/usr/include/time.h" 3
extern "C" time_t time(time_t *) throw();
# 190 "/usr/include/time.h" 3
extern "C" double difftime(time_t, time_t) throw() __attribute__((__const__));
# 194 "/usr/include/time.h" 3
extern "C" time_t mktime(tm *) throw();
# 200 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__) throw();
# 208 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__, const char *__restrict__, tm *) throw();
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct locale_data *__locales[13];
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
# 218 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__, size_t, const char *__restrict__, const tm *__restrict__, __locale_t) throw();
# 223 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__, const char *__restrict__, tm *, __locale_t) throw();
# 232 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t *) throw();
# 236 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t *) throw();
# 242 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 247 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__, tm *__restrict__) throw();
# 254 "/usr/include/time.h" 3
extern "C" char *asctime(const tm *) throw();
# 257 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t *) throw();
# 265 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__, char *__restrict__) throw();
# 269 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__, char *__restrict__) throw();
# 275 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 276 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 277 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 282 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 286 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 290 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 291 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 297 "/usr/include/time.h" 3
extern "C" int stime(const time_t *) throw();
# 312 "/usr/include/time.h" 3
extern "C" time_t timegm(tm *) throw();
# 315 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm *) throw();
# 318 "/usr/include/time.h" 3
extern "C" int dysize(int) throw() __attribute__((__const__));
# 327 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec *, timespec *);
# 332 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t, timespec *) throw();
# 335 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t, timespec *) throw();
# 338 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t, const timespec *) throw();
# 346 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t, int, const timespec *, timespec *);
# 351 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t, clockid_t *) throw();
# 356 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t, sigevent *__restrict__, timer_t *__restrict__) throw();
# 361 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t) throw();
# 364 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t, int, const itimerspec *__restrict__, itimerspec *__restrict__) throw();
# 369 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t, itimerspec *) throw();
# 373 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t) throw();
# 389 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 398 "/usr/include/time.h" 3
extern "C" tm *getdate(const char *);
# 412 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__, tm *__restrict__);
# 38 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 43 "/usr/include/string.h" 3
extern "C" void *memmove(void *, const void *, size_t) throw();
# 51 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__, const void *__restrict__, int, size_t) throw();
# 59 "/usr/include/string.h" 3
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();
# 62 "/usr/include/string.h" 3
extern "C" int memcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));
# 66 "/usr/include/string.h" 3
extern "C" void *memchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 73 "/usr/include/string.h" 3
extern "C" void *rawmemchr(const void *, int) throw() __attribute__((__pure__));
# 77 "/usr/include/string.h" 3
extern "C" void *memrchr(const void *, int, size_t) throw() __attribute__((__pure__));
# 84 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__, const char *__restrict__) throw();
# 87 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__, const char *__restrict__, size_t) throw();
# 92 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__, const char *__restrict__) throw();
# 95 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__, const char *__restrict__, size_t) throw();
# 99 "/usr/include/string.h" 3
extern "C" int strcmp(const char *, const char *) throw() __attribute__((__pure__));
# 102 "/usr/include/string.h" 3
extern "C" int strncmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 106 "/usr/include/string.h" 3
extern "C" int strcoll(const char *, const char *) throw() __attribute__((__pure__));
# 109 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__, const char *__restrict__, size_t) throw();
# 121 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));
# 124 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char *, const char *, size_t, __locale_t) throw();
# 130 "/usr/include/string.h" 3
extern "C" char *strdup(const char *) throw() __attribute__((__malloc__));
# 138 "/usr/include/string.h" 3
extern "C" char *strndup(const char *, size_t) throw() __attribute__((__malloc__));
# 167 "/usr/include/string.h" 3
extern "C" char *strchr(const char *, int) throw() __attribute__((__pure__));
# 170 "/usr/include/string.h" 3
extern "C" char *strrchr(const char *, int) throw() __attribute__((__pure__));
# 177 "/usr/include/string.h" 3
extern "C" char *strchrnul(const char *, int) throw() __attribute__((__pure__));
# 184 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char *, const char *) throw() __attribute__((__pure__));
# 188 "/usr/include/string.h" 3
extern "C" size_t strspn(const char *, const char *) throw() __attribute__((__pure__));
# 191 "/usr/include/string.h" 3
extern "C" char *strpbrk(const char *, const char *) throw() __attribute__((__pure__));
# 194 "/usr/include/string.h" 3
extern "C" char *strstr(const char *, const char *) throw() __attribute__((__pure__));
# 199 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__, const char *__restrict__) throw();
# 205 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 210 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__, const char *__restrict__, char **__restrict__) throw();
# 217 "/usr/include/string.h" 3
extern "C" char *strcasestr(const char *, const char *) throw() __attribute__((__pure__));
# 225 "/usr/include/string.h" 3
extern "C" void *memmem(const void *, size_t, const void *, size_t) throw() __attribute__((__pure__));
# 231 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 234 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__, const void *__restrict__, size_t) throw();
# 242 "/usr/include/string.h" 3
extern "C" size_t strlen(const char *) throw() __attribute__((__pure__));
# 249 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char *, size_t) throw() __attribute__((__pure__));
# 256 "/usr/include/string.h" 3
extern "C" char *strerror(int) throw();
# 281 "/usr/include/string.h" 3
extern "C" char *strerror_r(int, char *, size_t) throw();
# 288 "/usr/include/string.h" 3
extern "C" char *strerror_l(int, __locale_t) throw();
# 294 "/usr/include/string.h" 3
extern "C" void __bzero(void *, size_t) throw();
# 298 "/usr/include/string.h" 3
extern "C" void bcopy(const void *, void *, size_t) throw();
# 302 "/usr/include/string.h" 3
extern "C" void bzero(void *, size_t) throw();
# 305 "/usr/include/string.h" 3
extern "C" int bcmp(const void *, const void *, size_t) throw() __attribute__((__pure__));
# 309 "/usr/include/string.h" 3
extern "C" char *index(const char *, int) throw() __attribute__((__pure__));
# 313 "/usr/include/string.h" 3
extern "C" char *rindex(const char *, int) throw() __attribute__((__pure__));
# 318 "/usr/include/string.h" 3
extern "C" int ffs(int) throw() __attribute__((__const__));
# 323 "/usr/include/string.h" 3
extern "C" int ffsl(long) throw() __attribute__((__const__));
# 325 "/usr/include/string.h" 3
extern "C" int ffsll(long long) throw() __attribute__((__const__));
# 331 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char *, const char *) throw() __attribute__((__pure__));
# 335 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char *, const char *, size_t) throw() __attribute__((__pure__));
# 342 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char *, const char *, __locale_t) throw() __attribute__((__pure__));
# 346 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char *, const char *, size_t, __locale_t) throw() __attribute__((__pure__));
# 354 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__, const char *__restrict__) throw();
# 361 "/usr/include/string.h" 3
extern "C" int strverscmp(const char *, const char *) throw() __attribute__((__pure__));
# 365 "/usr/include/string.h" 3
extern "C" char *strsignal(int) throw();
# 368 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__, const char *__restrict__) throw();
# 370 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__, const char *__restrict__) throw();
# 375 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();
# 378 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__, const char *__restrict__, size_t) throw();
# 383 "/usr/include/string.h" 3
extern "C" char *strfry(char *) throw();
# 386 "/usr/include/string.h" 3
extern "C" void *memfrob(void *, size_t) throw();
# 393 "/usr/include/string.h" 3
extern "C" char *basename(const char *) throw();
# 56 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
extern "C" __attribute__((__weak__)) clock_t clock() throw();
# 59 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
extern "C" __attribute__((__weak__)) void *memset(void *, int, size_t) throw();
# 62 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
extern "C" __attribute__((__weak__)) void *memcpy(void *, const void *, size_t) throw();
# 65 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
# 67 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));
# 69 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 71 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__));
# 73 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__));
# 76 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int min(int, int);
# 78 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) unsigned umin(unsigned, unsigned);
# 80 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fminf(float, float) throw();
# 82 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmin(double, double) throw();
# 85 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int max(int, int);
# 87 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) unsigned umax(unsigned, unsigned);
# 89 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw();
# 91 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmax(double, double) throw();
# 94 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sin(double) throw();
# 96 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sinf(float) throw();
# 99 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cos(double) throw();
# 101 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float cosf(float) throw();
# 104 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw();
# 106 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 109 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tan(double) throw();
# 111 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tanf(float) throw();
# 114 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sqrt(double) throw();
# 116 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sqrtf(float) throw();
# 119 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double rsqrt(double);
# 121 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float rsqrtf(float);
# 124 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp2(double) throw();
# 126 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float exp2f(float) throw();
# 129 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp10(double) throw();
# 131 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float exp10f(float) throw();
# 134 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double expm1(double) throw();
# 136 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float expm1f(float) throw();
# 139 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log2(double) throw();
# 141 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 144 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log10(double) throw();
# 146 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log10f(float) throw();
# 149 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log(double) throw();
# 151 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float logf(float) throw();
# 154 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double log1p(double) throw();
# 156 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float log1pf(float) throw();
# 159 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__));
# 161 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__));
# 164 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double exp(double) throw();
# 166 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float expf(float) throw();
# 169 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cosh(double) throw();
# 171 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float coshf(float) throw();
# 174 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double sinh(double) throw();
# 176 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float sinhf(float) throw();
# 179 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tanh(double) throw();
# 181 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tanhf(float) throw();
# 184 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double acosh(double) throw();
# 186 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float acoshf(float) throw();
# 189 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double asinh(double) throw();
# 191 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float asinhf(float) throw();
# 194 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atanh(double) throw();
# 196 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atanhf(float) throw();
# 199 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double ldexp(double, int) throw();
# 201 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw();
# 204 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double logb(double) throw();
# 206 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float logbf(float) throw();
# 209 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int ilogb(double) throw();
# 211 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int ilogbf(float) throw();
# 214 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double scalbn(double, int) throw();
# 216 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw();
# 219 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double scalbln(double, long) throw();
# 221 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw();
# 224 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double frexp(double, int *) throw();
# 226 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw();
# 229 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__));
# 231 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__));
# 234 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lround(double) throw();
# 236 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lroundf(float) throw();
# 239 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llround(double) throw();
# 241 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llroundf(float) throw();
# 244 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double rint(double) throw();
# 246 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float rintf(float) throw();
# 249 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lrint(double) throw();
# 251 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long lrintf(float) throw();
# 254 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llrint(double) throw();
# 256 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) long long llrintf(float) throw();
# 259 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nearbyint(double) throw();
# 261 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nearbyintf(float) throw();
# 264 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__));
# 266 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__));
# 269 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__));
# 271 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__));
# 274 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fdim(double, double) throw();
# 276 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fdimf(float, float) throw();
# 279 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atan2(double, double) throw();
# 281 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atan2f(float, float) throw();
# 284 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double atan(double) throw();
# 286 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float atanf(float) throw();
# 289 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double asin(double) throw();
# 291 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float asinf(float) throw();
# 294 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double acos(double) throw();
# 296 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float acosf(float) throw();
# 299 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double hypot(double, double) throw();
# 301 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw();
# 304 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double cbrt(double) throw();
# 306 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float cbrtf(float) throw();
# 309 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double pow(double, double) throw();
# 311 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float powf(float, float) throw();
# 314 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double modf(double, double *) throw();
# 316 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float modff(float, float *) throw();
# 319 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fmod(double, double) throw();
# 321 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmodf(float, float) throw();
# 324 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double remainder(double, double) throw();
# 326 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float remainderf(float, float) throw();
# 329 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw();
# 331 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw();
# 334 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double erf(double) throw();
# 336 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float erff(float) throw();
# 339 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double erfc(double) throw();
# 341 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float erfcf(float) throw();
# 344 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double lgamma(double) throw();
# 346 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float lgammaf(float) throw();
# 349 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double tgamma(double) throw();
# 351 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float tgammaf(float) throw();
# 354 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__));
# 356 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__));
# 359 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__));
# 361 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__));
# 364 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__));
# 366 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__));
# 369 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));
# 371 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));
# 374 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));
# 376 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 390 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 392 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 394 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));
# 399 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));
# 402 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) double fma(double, double, double) throw();
# 404 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acos(double) throw(); extern "C" double __acos(double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double asin(double) throw(); extern "C" double __asin(double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double atan(double) throw(); extern "C" double __atan(double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double atan2(double, double) throw(); extern "C" double __atan2(double, double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cos(double) throw(); extern "C" double __cos(double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double sin(double) throw(); extern "C" double __sin(double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tan(double) throw(); extern "C" double __tan(double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cosh(double) throw(); extern "C" double __cosh(double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double sinh(double) throw(); extern "C" double __sinh(double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tanh(double) throw(); extern "C" double __tanh(double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) void sincos(double, double *, double *) throw(); extern "C" void __sincos(double, double *, double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double acosh(double) throw(); extern "C" double __acosh(double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double asinh(double) throw(); extern "C" double __asinh(double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double atanh(double) throw(); extern "C" double __atanh(double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp(double) throw(); extern "C" double __exp(double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double frexp(double, int *) throw(); extern "C" double __frexp(double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ldexp(double, int) throw(); extern "C" double __ldexp(double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log(double) throw(); extern "C" double __log(double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log10(double) throw(); extern "C" double __log10(double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double modf(double, double *) throw(); extern "C" double __modf(double, double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp10(double) throw(); extern "C" double __exp10(double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double) throw(); extern "C" double __pow10(double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double expm1(double) throw(); extern "C" double __expm1(double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log1p(double) throw(); extern "C" double __log1p(double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double logb(double) throw(); extern "C" double __logb(double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double exp2(double) throw(); extern "C" double __exp2(double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double log2(double) throw(); extern "C" double __log2(double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double pow(double, double) throw(); extern "C" double __pow(double, double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double sqrt(double) throw(); extern "C" double __sqrt(double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double hypot(double, double) throw(); extern "C" double __hypot(double, double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double cbrt(double) throw(); extern "C" double __cbrt(double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double ceil(double) throw() __attribute__((__const__)); extern "C" double __ceil(double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fabs(double) throw() __attribute__((__const__)); extern "C" double __fabs(double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double floor(double) throw() __attribute__((__const__)); extern "C" double __floor(double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fmod(double, double) throw(); extern "C" double __fmod(double, double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isinf(double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __finite(double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double, double) throw(); extern "C" double __drem(double, double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double) throw(); extern "C" double __significand(double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double copysign(double, double) throw() __attribute__((__const__)); extern "C" double __copysign(double, double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nan(const char *) throw() __attribute__((__const__)); extern "C" double __nan(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnan(double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double) throw() __attribute__((__const__));
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
extern "C" __attribute__((__weak__)) double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int *) throw(); extern "C" double __lgamma_r(double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double rint(double) throw(); extern "C" double __rint(double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nextafter(double, double) throw() __attribute__((__const__)); extern "C" double __nextafter(double, double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double, long double) throw() __attribute__((__const__)); extern "C" double __nexttoward(double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double remainder(double, double) throw(); extern "C" double __remainder(double, double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double scalbn(double, int) throw(); extern "C" double __scalbn(double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int ilogb(double) throw(); extern "C" int __ilogb(double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double scalbln(double, long) throw(); extern "C" double __scalbln(double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double nearbyint(double) throw(); extern "C" double __nearbyint(double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double round(double) throw() __attribute__((__const__)); extern "C" double __round(double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double trunc(double) throw() __attribute__((__const__)); extern "C" double __trunc(double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double remquo(double, double, int *) throw(); extern "C" double __remquo(double, double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrint(double) throw(); extern "C" long __lrint(double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llrint(double) throw(); extern "C" long long __llrint(double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lround(double) throw(); extern "C" long __lround(double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llround(double) throw(); extern "C" long long __llround(double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fdim(double, double) throw(); extern "C" double __fdim(double, double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fmax(double, double) throw(); extern "C" double __fmax(double, double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fmin(double, double) throw(); extern "C" double __fmin(double, double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __signbit(double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) double fma(double, double, double) throw(); extern "C" double __fma(double, double, double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double, double) throw(); extern "C" double __scalb(double, double) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acosf(float) throw(); extern "C" float __acosf(float) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float asinf(float) throw(); extern "C" float __asinf(float) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float atanf(float) throw(); extern "C" float __atanf(float) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float atan2f(float, float) throw(); extern "C" float __atan2f(float, float) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cosf(float) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float sinf(float) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tanf(float) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float coshf(float) throw(); extern "C" float __coshf(float) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float sinhf(float) throw(); extern "C" float __sinhf(float) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tanhf(float) throw(); extern "C" float __tanhf(float) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) void sincosf(float, float *, float *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float acoshf(float) throw(); extern "C" float __acoshf(float) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float asinhf(float) throw(); extern "C" float __asinhf(float) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float atanhf(float) throw(); extern "C" float __atanhf(float) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expf(float) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float frexpf(float, int *) throw(); extern "C" float __frexpf(float, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ldexpf(float, int) throw(); extern "C" float __ldexpf(float, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float logf(float) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float log10f(float) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float modff(float, float *) throw(); extern "C" float __modff(float, float *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp10f(float) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float) throw(); extern "C" float __pow10f(float) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float expm1f(float) throw(); extern "C" float __expm1f(float) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float log1pf(float) throw(); extern "C" float __log1pf(float) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float logbf(float) throw(); extern "C" float __logbf(float) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float exp2f(float) throw(); extern "C" float __exp2f(float) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float log2f(float) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float powf(float, float) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float sqrtf(float) throw(); extern "C" float __sqrtf(float) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float hypotf(float, float) throw(); extern "C" float __hypotf(float, float) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float cbrtf(float) throw(); extern "C" float __cbrtf(float) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float ceilf(float) throw() __attribute__((__const__)); extern "C" float __ceilf(float) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fabsf(float) throw() __attribute__((__const__)); extern "C" float __fabsf(float) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float floorf(float) throw() __attribute__((__const__)); extern "C" float __floorf(float) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fmodf(float, float) throw(); extern "C" float __fmodf(float, float) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isinff(float) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __finitef(float) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float, float) throw(); extern "C" float __dremf(float, float) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float) throw(); extern "C" float __significandf(float) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float copysignf(float, float) throw() __attribute__((__const__)); extern "C" float __copysignf(float, float) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nanf(const char *) throw() __attribute__((__const__)); extern "C" float __nanf(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanf(float) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float) throw() __attribute__((__const__));
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
extern "C" __attribute__((__weak__)) float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int *) throw(); extern "C" float __lgammaf_r(float, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float rintf(float) throw(); extern "C" float __rintf(float) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nextafterf(float, float) throw() __attribute__((__const__)); extern "C" float __nextafterf(float, float) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float, long double) throw() __attribute__((__const__)); extern "C" float __nexttowardf(float, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float remainderf(float, float) throw(); extern "C" float __remainderf(float, float) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float scalbnf(float, int) throw(); extern "C" float __scalbnf(float, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int ilogbf(float) throw(); extern "C" int __ilogbf(float) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float scalblnf(float, long) throw(); extern "C" float __scalblnf(float, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float nearbyintf(float) throw(); extern "C" float __nearbyintf(float) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float roundf(float) throw() __attribute__((__const__)); extern "C" float __roundf(float) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float truncf(float) throw() __attribute__((__const__)); extern "C" float __truncf(float) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float remquof(float, float, int *) throw(); extern "C" float __remquof(float, float, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lrintf(float) throw(); extern "C" long __lrintf(float) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llrintf(float) throw(); extern "C" long long __llrintf(float) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long lroundf(float) throw(); extern "C" long __lroundf(float) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) long long llroundf(float) throw(); extern "C" long long __llroundf(float) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fdimf(float, float) throw(); extern "C" float __fdimf(float, float) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fmaxf(float, float) throw(); extern "C" float __fmaxf(float, float) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fminf(float, float) throw(); extern "C" float __fminf(float, float) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __signbitf(float) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) float fmaf(float, float, float) throw(); extern "C" float __fmaf(float, float, float) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float, float) throw(); extern "C" float __scalbf(float, float) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double) throw(); extern "C" long double __acosl(long double) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double) throw(); extern "C" long double __asinl(long double) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double) throw(); extern "C" long double __atanl(long double) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double, long double) throw(); extern "C" long double __atan2l(long double, long double) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double) throw(); extern "C" long double __cosl(long double) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double) throw(); extern "C" long double __sinl(long double) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double) throw(); extern "C" long double __tanl(long double) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double) throw(); extern "C" long double __coshl(long double) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double) throw(); extern "C" long double __sinhl(long double) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double) throw(); extern "C" long double __tanhl(long double) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double, long double *, long double *) throw(); extern "C" void __sincosl(long double, long double *, long double *) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double) throw(); extern "C" long double __acoshl(long double) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double) throw(); extern "C" long double __asinhl(long double) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double) throw(); extern "C" long double __atanhl(long double) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double) throw(); extern "C" long double __expl(long double) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double, int *) throw(); extern "C" long double __frexpl(long double, int *) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double, int) throw(); extern "C" long double __ldexpl(long double, int) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double) throw(); extern "C" long double __logl(long double) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double) throw(); extern "C" long double __log10l(long double) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double, long double *) throw(); extern "C" long double __modfl(long double, long double *) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double) throw(); extern "C" long double __exp10l(long double) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double) throw(); extern "C" long double __pow10l(long double) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double) throw(); extern "C" long double __expm1l(long double) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double) throw(); extern "C" long double __log1pl(long double) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double) throw(); extern "C" long double __logbl(long double) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double) throw(); extern "C" long double __exp2l(long double) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double) throw(); extern "C" long double __log2l(long double) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double, long double) throw(); extern "C" long double __powl(long double, long double) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double) throw(); extern "C" long double __sqrtl(long double) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double, long double) throw(); extern "C" long double __hypotl(long double, long double) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double) throw(); extern "C" long double __cbrtl(long double) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double) throw() __attribute__((__const__)); extern "C" long double __ceill(long double) throw() __attribute__((__const__));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double) throw() __attribute__((__const__)); extern "C" long double __fabsl(long double) throw() __attribute__((__const__));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double) throw() __attribute__((__const__)); extern "C" long double __floorl(long double) throw() __attribute__((__const__));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double, long double) throw(); extern "C" long double __fmodl(long double, long double) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double) throw() __attribute__((__const__));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double) throw() __attribute__((__const__));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double, long double) throw(); extern "C" long double __dreml(long double, long double) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double) throw(); extern "C" long double __significandl(long double) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __copysignl(long double, long double) throw() __attribute__((__const__));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char *) throw() __attribute__((__const__)); extern "C" long double __nanl(const char *) throw() __attribute__((__const__));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double) throw() __attribute__((__const__));
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
extern "C" long double lgammal_r(long double, int *) throw(); extern "C" long double __lgammal_r(long double, int *) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double) throw(); extern "C" long double __rintl(long double) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nextafterl(long double, long double) throw() __attribute__((__const__));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double, long double) throw() __attribute__((__const__)); extern "C" long double __nexttowardl(long double, long double) throw() __attribute__((__const__));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double, long double) throw(); extern "C" long double __remainderl(long double, long double) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double, int) throw(); extern "C" long double __scalbnl(long double, int) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double) throw(); extern "C" int __ilogbl(long double) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double, long) throw(); extern "C" long double __scalblnl(long double, long) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double) throw(); extern "C" long double __nearbyintl(long double) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double) throw() __attribute__((__const__)); extern "C" long double __roundl(long double) throw() __attribute__((__const__));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double) throw() __attribute__((__const__)); extern "C" long double __truncl(long double) throw() __attribute__((__const__));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double, long double, int *) throw(); extern "C" long double __remquol(long double, long double, int *) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double) throw(); extern "C" long __lrintl(long double) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double) throw(); extern "C" long long __llrintl(long double) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double) throw(); extern "C" long __lroundl(long double) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double) throw(); extern "C" long long __llroundl(long double) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double, long double) throw(); extern "C" long double __fdiml(long double, long double) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double, long double) throw(); extern "C" long double __fmaxl(long double, long double) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double, long double) throw(); extern "C" long double __fminl(long double, long double) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double) throw() __attribute__((__const__));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double, long double, long double) throw(); extern "C" long double __fmal(long double, long double, long double) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double, long double) throw(); extern "C" long double __scalbl(long double, long double) throw();
# 157 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 199 "/usr/include/math.h" 3
enum __cuda_FP_NAN {
# 200 "/usr/include/math.h" 3
FP_NAN,
# 202 "/usr/include/math.h" 3
FP_INFINITE,
# 204 "/usr/include/math.h" 3
FP_ZERO,
# 206 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 208 "/usr/include/math.h" 3
FP_NORMAL
# 210 "/usr/include/math.h" 3
};
# 291 "/usr/include/math.h" 3
extern "C" { typedef
# 285 "/usr/include/math.h" 3
enum {
# 286 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 287 "/usr/include/math.h" 3
_SVID_,
# 288 "/usr/include/math.h" 3
_XOPEN_,
# 289 "/usr/include/math.h" 3
_POSIX_,
# 290 "/usr/include/math.h" 3
_ISOC_
# 291 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 296 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 307 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 312 "/usr/include/math.h" 3
int type;
# 313 "/usr/include/math.h" 3
char *name;
# 314 "/usr/include/math.h" 3
double arg1;
# 315 "/usr/include/math.h" 3
double arg2;
# 316 "/usr/include/math.h" 3
double retval;
# 317 "/usr/include/math.h" 3
}; }
# 320 "/usr/include/math.h" 3
extern "C" int matherr(__exception *) throw();
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
struct div_t {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct ldiv_t {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct lldiv_t {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char *) throw() __attribute__((__pure__));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char *) throw() __attribute__((__pure__));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char *) throw() __attribute__((__pure__));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char *) throw() __attribute__((__pure__));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__, char **__restrict__) throw();
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__, char **__restrict__) throw();
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__, char **__restrict__) throw();
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__, char **__restrict__, int) throw();
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__, char **__restrict__, int) throw();
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__, char **__restrict__, int) throw();
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__, char **__restrict__, int) throw();
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__, char **__restrict__, int) throw();
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__, char **__restrict__, int) throw();
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__, char **__restrict__, int, __locale_t) throw();
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__, char **__restrict__, __locale_t) throw();
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char *) throw() __attribute__((__pure__));
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 41 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 46 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 50 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 57 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 62 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 67 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 72 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 77 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 82 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 88 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 95 "/usr/include/sys/types.h" 3
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
extern "C" { typedef signed char int8_t; }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t; }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t; }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t; }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t; }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t; }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t; }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t; }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef int register_t; }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct __sigset_t {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[((1024) / ((8) * sizeof(unsigned long)))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 69 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 71 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 72 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 73 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct fd_set {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[((1024) / ((8) * sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, timeval *__restrict__);
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int, fd_set *__restrict__, fd_set *__restrict__, fd_set *__restrict__, const timespec *__restrict__, const __sigset_t *__restrict__);
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned, unsigned) throw();
# 228 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 239 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 243 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union pthread_attr_t {
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
union pthread_mutex_t {
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
union pthread_mutexattr_t {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union pthread_cond_t {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
unsigned long long __woken_seq;
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
long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union pthread_condattr_t {
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
union pthread_rwlock_t {
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
union pthread_rwlockattr_t {
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
union pthread_barrier_t {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union pthread_barrierattr_t {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned, char *, size_t) throw();
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char *) throw();
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
extern "C" int random_r(random_data *__restrict__, int32_t *__restrict__) throw();
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned, random_data *) throw();
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned, char *__restrict__, size_t, random_data *__restrict__) throw();
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__, random_data *__restrict__) throw();
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned *) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw();
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw();
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw();
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw();
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw();
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
extern "C" int drand48_r(drand48_data *__restrict__, double *__restrict__) throw();
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__, double *__restrict__) throw();
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__, long *__restrict__) throw();
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__, long *__restrict__) throw();
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__, long *__restrict__) throw();
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long, drand48_data *) throw();
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data *) throw();
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data *) throw();
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t) throw() __attribute__((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t, size_t) throw() __attribute__((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void *, size_t) throw();
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void *) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void *) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t) throw();
# 502 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t) throw() __attribute__((__malloc__));
# 507 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void **, size_t, size_t) throw();
# 513 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute__((__noreturn__));
# 517 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (*)(void)) throw();
# 523 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (*)(int, void *), void *) throw();
# 531 "/usr/include/stdlib.h" 3
extern "C" void exit(int) throw() __attribute__((__noreturn__));
# 538 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int) throw() __attribute__((__noreturn__));
# 545 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char *) throw();
# 550 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char *) throw();
# 557 "/usr/include/stdlib.h" 3
extern "C" int putenv(char *) throw();
# 563 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char *, const char *, int) throw();
# 567 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char *) throw();
# 574 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 583 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char *) throw();
# 594 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char *);
# 604 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char *);
# 614 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char *) throw();
# 625 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char *, int);
# 635 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char *, int);
# 645 "/usr/include/stdlib.h" 3
extern "C" int system(const char *);
# 652 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char *) throw();
# 662 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__, char *__restrict__) throw();
# 670 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 673 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 677 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 683 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void *, const void *, size_t, size_t, __compar_fn_t);
# 689 "/usr/include/stdlib.h" 3
extern "C" void qsort(void *, size_t, size_t, __compar_fn_t);
# 692 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void *, size_t, size_t, __compar_d_fn_t, void *);
# 699 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) int abs(int) throw() __attribute__((__const__));
# 700 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) long labs(long) throw() __attribute__((__const__));
# 704 "/usr/include/stdlib.h" 3
extern "C" __attribute__((__weak__)) long long llabs(long long) throw() __attribute__((__const__));
# 713 "/usr/include/stdlib.h" 3
extern "C" div_t div(int, int) throw() __attribute__((__const__));
# 715 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long, long) throw() __attribute__((__const__));
# 721 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long, long long) throw() __attribute__((__const__));
# 735 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double, int, int *__restrict__, int *__restrict__) throw();
# 741 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double, int, int *__restrict__, int *__restrict__) throw();
# 747 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double, int, char *) throw();
# 753 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double, int, int *__restrict__, int *__restrict__) throw();
# 756 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double, int, int *__restrict__, int *__restrict__) throw();
# 759 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double, int, char *) throw();
# 765 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 768 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 772 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 776 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double, int, int *__restrict__, int *__restrict__, char *__restrict__, size_t) throw();
# 787 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char *, size_t) throw();
# 790 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 794 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char *, wchar_t) throw();
# 798 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__, const char *__restrict__, size_t) throw();
# 801 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__, const wchar_t *__restrict__, size_t) throw();
# 812 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char *) throw();
# 823 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__, char *const *__restrict__, char **__restrict__) throw();
# 832 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char *) throw();
# 840 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int);
# 848 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int) throw();
# 852 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int) throw();
# 857 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int) throw();
# 864 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int, char *, size_t) throw();
# 868 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 875 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int) throw();
# 74 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 76 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Iterator, class _Container> class __normal_iterator;
# 79 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 81 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
namespace std __attribute__((visibility("default"))) {
# 83 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __true_type { };
# 84 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __false_type { };
# 86 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<bool >
# 87 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __truth_type {
# 88 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 91 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 92 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 96 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Sp, class _Tp>
# 97 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __traitor {
# 99 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 100 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef typename __truth_type< (((bool)_Sp::__value) || ((bool)_Tp::__value))> ::__type __type;
# 101 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 105 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Sp, class _Tp>
# 106 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __traitand {
# 108 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = (((bool)_Sp::__value) && ((bool)_Tp::__value))};
# 109 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef typename __truth_type< (((bool)_Sp::__value) && ((bool)_Tp::__value))> ::__type __type;
# 110 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 113 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class , class >
# 114 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __are_same {
# 116 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 117 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 118 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 120 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 121 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 123 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 124 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 125 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 128 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 129 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_void {
# 131 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 132 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 133 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 136 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 138 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 139 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 140 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 145 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 146 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_integer {
# 148 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 149 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 150 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 158 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 159 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 165 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 166 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 170 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 172 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 173 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 174 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 177 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 179 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 180 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 181 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 185 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 187 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 188 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 189 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 193 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 195 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 196 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 197 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 200 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 202 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 203 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 204 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 207 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 209 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 210 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 211 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 214 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 216 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 217 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 218 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 221 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 223 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 224 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 225 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 228 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 230 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 231 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 232 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 235 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 237 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 238 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 239 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 242 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 244 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 245 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 246 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 251 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 252 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_floating {
# 254 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 255 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 256 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 260 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 262 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 263 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 264 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 267 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 269 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 270 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 271 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 274 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 276 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 277 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 278 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 283 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 284 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 286 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 287 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 288 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 290 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 291 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 293 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 294 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 295 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 300 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 301 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 303 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 304 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 305 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 307 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Iterator, class _Container>
# 308 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 311 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 312 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 313 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 318 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 319 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 321 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 326 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 327 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 329 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 334 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 335 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 337 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 342 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 343 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_char {
# 345 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 346 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 347 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 350 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 352 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 353 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 354 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 358 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 360 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 361 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 362 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 365 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 366 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_byte {
# 368 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 369 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 370 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 373 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 375 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 376 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 377 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 380 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 382 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 383 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 384 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 387 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 389 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value = 1};
# 390 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 391 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 396 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
template<class _Tp>
# 397 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 399 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
enum __cuda___value { __value};
# 400 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 401 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
};
# 415 "/usr/include/c++/4.3/bits/cpp_type_traits.h" 3
}
# 43 "/usr/include/c++/4.3/ext/type_traits.h" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 46 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<bool , class >
# 47 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __enable_if {
# 48 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 50 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 51 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 52 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Tp __type; };
# 56 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<bool _Cond, class _Iftrue, class _Iffalse>
# 57 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __conditional_type {
# 58 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 60 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Iftrue, class _Iffalse>
# 61 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 62 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 66 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 67 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __add_unsigned {
# 70 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 73 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 74 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 77 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 78 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned char __type; };
# 81 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 82 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned char __type; };
# 85 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 86 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned short __type; };
# 89 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 90 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned __type; };
# 93 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 94 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned long __type; };
# 97 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 98 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 102 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 105 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 109 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 110 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __remove_unsigned {
# 113 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 116 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 117 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 120 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 121 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef signed char __type; };
# 124 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 125 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef signed char __type; };
# 128 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 129 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef short __type; };
# 132 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 133 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef int __type; };
# 136 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 137 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef long __type; };
# 140 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 141 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef long long __type; };
# 145 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 148 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 152 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Type> inline bool
# 154 "/usr/include/c++/4.3/ext/type_traits.h" 3
__is_null_pointer(_Type *__ptr)
# 155 "/usr/include/c++/4.3/ext/type_traits.h" 3
{ return __ptr == 0; }
# 157 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Type> inline bool
# 159 "/usr/include/c++/4.3/ext/type_traits.h" 3
__is_null_pointer(_Type)
# 160 "/usr/include/c++/4.3/ext/type_traits.h" 3
{ return false; }
# 164 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, bool = std::__is_integer< _Tp> ::__value>
# 165 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote {
# 166 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef double __type; };
# 168 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp>
# 169 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 170 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef _Tp __type; };
# 172 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, class _Up>
# 173 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote_2 {
# 176 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 177 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 180 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2())) __type;
# 181 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 183 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, class _Up, class _Vp>
# 184 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote_3 {
# 187 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 188 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 189 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 192 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
# 193 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 195 "/usr/include/c++/4.3/ext/type_traits.h" 3
template<class _Tp, class _Up, class _Vp, class _Wp>
# 196 "/usr/include/c++/4.3/ext/type_traits.h" 3
struct __promote_4 {
# 199 "/usr/include/c++/4.3/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 200 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 201 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 202 "/usr/include/c++/4.3/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 205 "/usr/include/c++/4.3/ext/type_traits.h" 3
public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
# 206 "/usr/include/c++/4.3/ext/type_traits.h" 3
};
# 208 "/usr/include/c++/4.3/ext/type_traits.h" 3
}
# 82 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 86 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> extern inline _Tp __cmath_power(_Tp, unsigned);
# 89 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline _Tp
# 91 "/usr/include/c++/4.3/cmath" 3
__pow_helper(_Tp __x, int __n)
# 92 "/usr/include/c++/4.3/cmath" 3
{
# 93 "/usr/include/c++/4.3/cmath" 3
return (__n < 0) ? (((_Tp)(1)) / __cmath_power(__x, -__n)) : (__cmath_power(__x, __n));
# 96 "/usr/include/c++/4.3/cmath" 3
}
# 99 "/usr/include/c++/4.3/cmath" 3
inline double abs(double __x)
# 100 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabs(__x); }
# 103 "/usr/include/c++/4.3/cmath" 3
inline float abs(float __x)
# 104 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsf(__x); }
# 107 "/usr/include/c++/4.3/cmath" 3
inline long double abs(long double __x)
# 108 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsl(__x); }
# 110 "/usr/include/c++/4.3/cmath" 3
using ::acos;
# 113 "/usr/include/c++/4.3/cmath" 3
inline float acos(float __x)
# 114 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_acosf(__x); }
# 117 "/usr/include/c++/4.3/cmath" 3
inline long double acos(long double __x)
# 118 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_acosl(__x); }
# 120 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 123 "/usr/include/c++/4.3/cmath" 3
acos(_Tp __x)
# 124 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_acos(__x); }
# 126 "/usr/include/c++/4.3/cmath" 3
using ::asin;
# 129 "/usr/include/c++/4.3/cmath" 3
inline float asin(float __x)
# 130 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_asinf(__x); }
# 133 "/usr/include/c++/4.3/cmath" 3
inline long double asin(long double __x)
# 134 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_asinl(__x); }
# 136 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 139 "/usr/include/c++/4.3/cmath" 3
asin(_Tp __x)
# 140 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_asin(__x); }
# 142 "/usr/include/c++/4.3/cmath" 3
using ::atan;
# 145 "/usr/include/c++/4.3/cmath" 3
inline float atan(float __x)
# 146 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atanf(__x); }
# 149 "/usr/include/c++/4.3/cmath" 3
inline long double atan(long double __x)
# 150 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atanl(__x); }
# 152 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 155 "/usr/include/c++/4.3/cmath" 3
atan(_Tp __x)
# 156 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atan(__x); }
# 158 "/usr/include/c++/4.3/cmath" 3
using ::atan2;
# 161 "/usr/include/c++/4.3/cmath" 3
inline float atan2(float __y, float __x)
# 162 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 165 "/usr/include/c++/4.3/cmath" 3
inline long double atan2(long double __y, long double __x)
# 166 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 168 "/usr/include/c++/4.3/cmath" 3
template<class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< typename __gnu_cxx::__enable_if< (__traitand< __is_arithmetic< _Tp> , __is_arithmetic< _Up> > ::__value), _Tp> ::__type, _Up> ::__type
# 174 "/usr/include/c++/4.3/cmath" 3
atan2(_Tp __y, _Up __x)
# 175 "/usr/include/c++/4.3/cmath" 3
{
# 176 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type;
# 177 "/usr/include/c++/4.3/cmath" 3
return atan2(((__type)(__y)), ((__type)(__x)));
# 178 "/usr/include/c++/4.3/cmath" 3
}
# 180 "/usr/include/c++/4.3/cmath" 3
using ::ceil;
# 183 "/usr/include/c++/4.3/cmath" 3
inline float ceil(float __x)
# 184 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ceilf(__x); }
# 187 "/usr/include/c++/4.3/cmath" 3
inline long double ceil(long double __x)
# 188 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ceill(__x); }
# 190 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 193 "/usr/include/c++/4.3/cmath" 3
ceil(_Tp __x)
# 194 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ceil(__x); }
# 196 "/usr/include/c++/4.3/cmath" 3
using ::cos;
# 199 "/usr/include/c++/4.3/cmath" 3
inline float cos(float __x)
# 200 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cosf(__x); }
# 203 "/usr/include/c++/4.3/cmath" 3
inline long double cos(long double __x)
# 204 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cosl(__x); }
# 206 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 209 "/usr/include/c++/4.3/cmath" 3
cos(_Tp __x)
# 210 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cos(__x); }
# 212 "/usr/include/c++/4.3/cmath" 3
using ::cosh;
# 215 "/usr/include/c++/4.3/cmath" 3
inline float cosh(float __x)
# 216 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_coshf(__x); }
# 219 "/usr/include/c++/4.3/cmath" 3
inline long double cosh(long double __x)
# 220 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_coshl(__x); }
# 222 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 225 "/usr/include/c++/4.3/cmath" 3
cosh(_Tp __x)
# 226 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_cosh(__x); }
# 228 "/usr/include/c++/4.3/cmath" 3
using ::exp;
# 231 "/usr/include/c++/4.3/cmath" 3
inline float exp(float __x)
# 232 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_expf(__x); }
# 235 "/usr/include/c++/4.3/cmath" 3
inline long double exp(long double __x)
# 236 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_expl(__x); }
# 238 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 241 "/usr/include/c++/4.3/cmath" 3
exp(_Tp __x)
# 242 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_exp(__x); }
# 244 "/usr/include/c++/4.3/cmath" 3
using ::fabs;
# 247 "/usr/include/c++/4.3/cmath" 3
inline float fabs(float __x)
# 248 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsf(__x); }
# 251 "/usr/include/c++/4.3/cmath" 3
inline long double fabs(long double __x)
# 252 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabsl(__x); }
# 254 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 257 "/usr/include/c++/4.3/cmath" 3
fabs(_Tp __x)
# 258 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fabs(__x); }
# 260 "/usr/include/c++/4.3/cmath" 3
using ::floor;
# 263 "/usr/include/c++/4.3/cmath" 3
inline float floor(float __x)
# 264 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_floorf(__x); }
# 267 "/usr/include/c++/4.3/cmath" 3
inline long double floor(long double __x)
# 268 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_floorl(__x); }
# 270 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 273 "/usr/include/c++/4.3/cmath" 3
floor(_Tp __x)
# 274 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_floor(__x); }
# 276 "/usr/include/c++/4.3/cmath" 3
using ::fmod;
# 279 "/usr/include/c++/4.3/cmath" 3
inline float fmod(float __x, float __y)
# 280 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 283 "/usr/include/c++/4.3/cmath" 3
inline long double fmod(long double __x, long double __y)
# 284 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 286 "/usr/include/c++/4.3/cmath" 3
using ::frexp;
# 289 "/usr/include/c++/4.3/cmath" 3
inline float frexp(float __x, int *__exp)
# 290 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 293 "/usr/include/c++/4.3/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 294 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 296 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 299 "/usr/include/c++/4.3/cmath" 3
frexp(_Tp __x, int *__exp)
# 300 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_frexp(__x, __exp); }
# 302 "/usr/include/c++/4.3/cmath" 3
using ::ldexp;
# 305 "/usr/include/c++/4.3/cmath" 3
inline float ldexp(float __x, int __exp)
# 306 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 309 "/usr/include/c++/4.3/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 310 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 312 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 315 "/usr/include/c++/4.3/cmath" 3
ldexp(_Tp __x, int __exp)
# 316 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_ldexp(__x, __exp); }
# 318 "/usr/include/c++/4.3/cmath" 3
using ::log;
# 321 "/usr/include/c++/4.3/cmath" 3
inline float log(float __x)
# 322 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_logf(__x); }
# 325 "/usr/include/c++/4.3/cmath" 3
inline long double log(long double __x)
# 326 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_logl(__x); }
# 328 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 331 "/usr/include/c++/4.3/cmath" 3
log(_Tp __x)
# 332 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log(__x); }
# 334 "/usr/include/c++/4.3/cmath" 3
using ::log10;
# 337 "/usr/include/c++/4.3/cmath" 3
inline float log10(float __x)
# 338 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log10f(__x); }
# 341 "/usr/include/c++/4.3/cmath" 3
inline long double log10(long double __x)
# 342 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log10l(__x); }
# 344 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 347 "/usr/include/c++/4.3/cmath" 3
log10(_Tp __x)
# 348 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_log10(__x); }
# 350 "/usr/include/c++/4.3/cmath" 3
using ::modf;
# 353 "/usr/include/c++/4.3/cmath" 3
inline float modf(float __x, float *__iptr)
# 354 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 357 "/usr/include/c++/4.3/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 358 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 360 "/usr/include/c++/4.3/cmath" 3
using ::pow;
# 363 "/usr/include/c++/4.3/cmath" 3
inline float pow(float __x, float __y)
# 364 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powf(__x, __y); }
# 367 "/usr/include/c++/4.3/cmath" 3
inline long double pow(long double __x, long double __y)
# 368 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powl(__x, __y); }
# 372 "/usr/include/c++/4.3/cmath" 3
inline double pow(double __x, int __i)
# 373 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powi(__x, __i); }
# 376 "/usr/include/c++/4.3/cmath" 3
inline float pow(float __x, int __n)
# 377 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powif(__x, __n); }
# 380 "/usr/include/c++/4.3/cmath" 3
inline long double pow(long double __x, int __n)
# 381 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_powil(__x, __n); }
# 383 "/usr/include/c++/4.3/cmath" 3
template<class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< typename __gnu_cxx::__enable_if< (__traitand< __is_arithmetic< _Tp> , __is_arithmetic< _Up> > ::__value), _Tp> ::__type, _Up> ::__type
# 389 "/usr/include/c++/4.3/cmath" 3
pow(_Tp __x, _Up __y)
# 390 "/usr/include/c++/4.3/cmath" 3
{
# 391 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type;
# 392 "/usr/include/c++/4.3/cmath" 3
return pow(((__type)(__x)), ((__type)(__y)));
# 393 "/usr/include/c++/4.3/cmath" 3
}
# 395 "/usr/include/c++/4.3/cmath" 3
using ::sin;
# 398 "/usr/include/c++/4.3/cmath" 3
inline float sin(float __x)
# 399 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinf(__x); }
# 402 "/usr/include/c++/4.3/cmath" 3
inline long double sin(long double __x)
# 403 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinl(__x); }
# 405 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 408 "/usr/include/c++/4.3/cmath" 3
sin(_Tp __x)
# 409 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sin(__x); }
# 411 "/usr/include/c++/4.3/cmath" 3
using ::sinh;
# 414 "/usr/include/c++/4.3/cmath" 3
inline float sinh(float __x)
# 415 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinhf(__x); }
# 418 "/usr/include/c++/4.3/cmath" 3
inline long double sinh(long double __x)
# 419 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinhl(__x); }
# 421 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 424 "/usr/include/c++/4.3/cmath" 3
sinh(_Tp __x)
# 425 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sinh(__x); }
# 427 "/usr/include/c++/4.3/cmath" 3
using ::sqrt;
# 430 "/usr/include/c++/4.3/cmath" 3
inline float sqrt(float __x)
# 431 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sqrtf(__x); }
# 434 "/usr/include/c++/4.3/cmath" 3
inline long double sqrt(long double __x)
# 435 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sqrtl(__x); }
# 437 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 440 "/usr/include/c++/4.3/cmath" 3
sqrt(_Tp __x)
# 441 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_sqrt(__x); }
# 443 "/usr/include/c++/4.3/cmath" 3
using ::tan;
# 446 "/usr/include/c++/4.3/cmath" 3
inline float tan(float __x)
# 447 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanf(__x); }
# 450 "/usr/include/c++/4.3/cmath" 3
inline long double tan(long double __x)
# 451 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanl(__x); }
# 453 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 456 "/usr/include/c++/4.3/cmath" 3
tan(_Tp __x)
# 457 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tan(__x); }
# 459 "/usr/include/c++/4.3/cmath" 3
using ::tanh;
# 462 "/usr/include/c++/4.3/cmath" 3
inline float tanh(float __x)
# 463 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanhf(__x); }
# 466 "/usr/include/c++/4.3/cmath" 3
inline long double tanh(long double __x)
# 467 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanhl(__x); }
# 469 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_integer< _Tp> ::__value), double> ::__type
# 472 "/usr/include/c++/4.3/cmath" 3
tanh(_Tp __x)
# 473 "/usr/include/c++/4.3/cmath" 3
{ return __builtin_tanh(__x); }
# 475 "/usr/include/c++/4.3/cmath" 3
}
# 483 "/usr/include/c++/4.3/cmath" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 485 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline int
# 487 "/usr/include/c++/4.3/cmath" 3
__capture_fpclassify(_Tp __f) { return (sizeof(__f) == sizeof(float)) ? (__fpclassifyf(__f)) : ((sizeof(__f) == sizeof(double)) ? (__fpclassify(__f)) : (__fpclassifyl(__f))); }
# 489 "/usr/include/c++/4.3/cmath" 3
}
# 505 "/usr/include/c++/4.3/cmath" 3
namespace std __attribute__((visibility("default"))) {
# 507 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 510 "/usr/include/c++/4.3/cmath" 3
fpclassify(_Tp __f)
# 511 "/usr/include/c++/4.3/cmath" 3
{
# 512 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 513 "/usr/include/c++/4.3/cmath" 3
return __gnu_cxx::__capture_fpclassify(((__type)(__f)));
# 514 "/usr/include/c++/4.3/cmath" 3
}
# 516 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 519 "/usr/include/c++/4.3/cmath" 3
isfinite(_Tp __f)
# 520 "/usr/include/c++/4.3/cmath" 3
{
# 521 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 522 "/usr/include/c++/4.3/cmath" 3
return __builtin_isfinite(((__type)(__f)));
# 523 "/usr/include/c++/4.3/cmath" 3
}
# 525 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 528 "/usr/include/c++/4.3/cmath" 3
isinf(_Tp __f)
# 529 "/usr/include/c++/4.3/cmath" 3
{
# 530 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 531 "/usr/include/c++/4.3/cmath" 3
return __builtin_isinf(((__type)(__f)));
# 532 "/usr/include/c++/4.3/cmath" 3
}
# 534 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 537 "/usr/include/c++/4.3/cmath" 3
isnan(_Tp __f)
# 538 "/usr/include/c++/4.3/cmath" 3
{
# 539 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 540 "/usr/include/c++/4.3/cmath" 3
return __builtin_isnan(((__type)(__f)));
# 541 "/usr/include/c++/4.3/cmath" 3
}
# 543 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 546 "/usr/include/c++/4.3/cmath" 3
isnormal(_Tp __f)
# 547 "/usr/include/c++/4.3/cmath" 3
{
# 548 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 549 "/usr/include/c++/4.3/cmath" 3
return __builtin_isnormal(((__type)(__f)));
# 550 "/usr/include/c++/4.3/cmath" 3
}
# 552 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 555 "/usr/include/c++/4.3/cmath" 3
signbit(_Tp __f)
# 556 "/usr/include/c++/4.3/cmath" 3
{
# 557 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 558 "/usr/include/c++/4.3/cmath" 3
return __builtin_signbit(((__type)(__f)));
# 559 "/usr/include/c++/4.3/cmath" 3
}
# 561 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 564 "/usr/include/c++/4.3/cmath" 3
isgreater(_Tp __f1, _Tp __f2)
# 565 "/usr/include/c++/4.3/cmath" 3
{
# 566 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 567 "/usr/include/c++/4.3/cmath" 3
return __builtin_isgreater(((__type)(__f1)), ((__type)(__f2)));
# 568 "/usr/include/c++/4.3/cmath" 3
}
# 570 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 573 "/usr/include/c++/4.3/cmath" 3
isgreaterequal(_Tp __f1, _Tp __f2)
# 574 "/usr/include/c++/4.3/cmath" 3
{
# 575 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 576 "/usr/include/c++/4.3/cmath" 3
return __builtin_isgreaterequal(((__type)(__f1)), ((__type)(__f2)));
# 577 "/usr/include/c++/4.3/cmath" 3
}
# 579 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 582 "/usr/include/c++/4.3/cmath" 3
isless(_Tp __f1, _Tp __f2)
# 583 "/usr/include/c++/4.3/cmath" 3
{
# 584 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 585 "/usr/include/c++/4.3/cmath" 3
return __builtin_isless(((__type)(__f1)), ((__type)(__f2)));
# 586 "/usr/include/c++/4.3/cmath" 3
}
# 588 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 591 "/usr/include/c++/4.3/cmath" 3
islessequal(_Tp __f1, _Tp __f2)
# 592 "/usr/include/c++/4.3/cmath" 3
{
# 593 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 594 "/usr/include/c++/4.3/cmath" 3
return __builtin_islessequal(((__type)(__f1)), ((__type)(__f2)));
# 595 "/usr/include/c++/4.3/cmath" 3
}
# 597 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 600 "/usr/include/c++/4.3/cmath" 3
islessgreater(_Tp __f1, _Tp __f2)
# 601 "/usr/include/c++/4.3/cmath" 3
{
# 602 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 603 "/usr/include/c++/4.3/cmath" 3
return __builtin_islessgreater(((__type)(__f1)), ((__type)(__f2)));
# 604 "/usr/include/c++/4.3/cmath" 3
}
# 606 "/usr/include/c++/4.3/cmath" 3
template<class _Tp> inline typename __gnu_cxx::__enable_if< (__is_arithmetic< _Tp> ::__value), int> ::__type
# 609 "/usr/include/c++/4.3/cmath" 3
isunordered(_Tp __f1, _Tp __f2)
# 610 "/usr/include/c++/4.3/cmath" 3
{
# 611 "/usr/include/c++/4.3/cmath" 3
typedef typename __gnu_cxx::__promote< _Tp, __is_integer< _Tp> ::__value> ::__type __type;
# 612 "/usr/include/c++/4.3/cmath" 3
return __builtin_isunordered(((__type)(__f1)), ((__type)(__f2)));
# 613 "/usr/include/c++/4.3/cmath" 3
}
# 615 "/usr/include/c++/4.3/cmath" 3
}
# 40 "/usr/include/c++/4.3/bits/cmath.tcc" 3
namespace std __attribute__((visibility("default"))) {
# 42 "/usr/include/c++/4.3/bits/cmath.tcc" 3
template<class _Tp> inline _Tp
# 44 "/usr/include/c++/4.3/bits/cmath.tcc" 3
__cmath_power(_Tp __x, unsigned __n)
# 45 "/usr/include/c++/4.3/bits/cmath.tcc" 3
{
# 46 "/usr/include/c++/4.3/bits/cmath.tcc" 3
auto _Tp __y = ((__n % (2)) ? __x : ((_Tp)(1)));
# 48 "/usr/include/c++/4.3/bits/cmath.tcc" 3
while (__n >>= 1)
# 49 "/usr/include/c++/4.3/bits/cmath.tcc" 3
{
# 50 "/usr/include/c++/4.3/bits/cmath.tcc" 3
__x = __x * __x;
# 51 "/usr/include/c++/4.3/bits/cmath.tcc" 3
if (__n % (2)) {
# 52 "/usr/include/c++/4.3/bits/cmath.tcc" 3
__y = __y * __x; }
# 53 "/usr/include/c++/4.3/bits/cmath.tcc" 3
}
# 55 "/usr/include/c++/4.3/bits/cmath.tcc" 3
return __y;
# 56 "/usr/include/c++/4.3/bits/cmath.tcc" 3
}
# 58 "/usr/include/c++/4.3/bits/cmath.tcc" 3
}
# 54 "/usr/include/c++/4.3/cstddef" 3
namespace std __attribute__((visibility("default"))) {
# 56 "/usr/include/c++/4.3/cstddef" 3
using ::ptrdiff_t;
# 57 "/usr/include/c++/4.3/cstddef" 3
using ::size_t;
# 59 "/usr/include/c++/4.3/cstddef" 3
}
# 105 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 107 "/usr/include/c++/4.3/cstdlib" 3
using ::div_t;
# 108 "/usr/include/c++/4.3/cstdlib" 3
using ::ldiv_t;
# 110 "/usr/include/c++/4.3/cstdlib" 3
using ::abort;
# 111 "/usr/include/c++/4.3/cstdlib" 3
using ::abs;
# 112 "/usr/include/c++/4.3/cstdlib" 3
using ::atexit;
# 113 "/usr/include/c++/4.3/cstdlib" 3
using ::atof;
# 114 "/usr/include/c++/4.3/cstdlib" 3
using ::atoi;
# 115 "/usr/include/c++/4.3/cstdlib" 3
using ::atol;
# 116 "/usr/include/c++/4.3/cstdlib" 3
using ::bsearch;
# 117 "/usr/include/c++/4.3/cstdlib" 3
using ::calloc;
# 118 "/usr/include/c++/4.3/cstdlib" 3
using ::div;
# 119 "/usr/include/c++/4.3/cstdlib" 3
using ::exit;
# 120 "/usr/include/c++/4.3/cstdlib" 3
using ::free;
# 121 "/usr/include/c++/4.3/cstdlib" 3
using ::getenv;
# 122 "/usr/include/c++/4.3/cstdlib" 3
using ::labs;
# 123 "/usr/include/c++/4.3/cstdlib" 3
using ::ldiv;
# 124 "/usr/include/c++/4.3/cstdlib" 3
using ::malloc;
# 126 "/usr/include/c++/4.3/cstdlib" 3
using ::mblen;
# 127 "/usr/include/c++/4.3/cstdlib" 3
using ::mbstowcs;
# 128 "/usr/include/c++/4.3/cstdlib" 3
using ::mbtowc;
# 130 "/usr/include/c++/4.3/cstdlib" 3
using ::qsort;
# 131 "/usr/include/c++/4.3/cstdlib" 3
using ::rand;
# 132 "/usr/include/c++/4.3/cstdlib" 3
using ::realloc;
# 133 "/usr/include/c++/4.3/cstdlib" 3
using ::srand;
# 134 "/usr/include/c++/4.3/cstdlib" 3
using ::strtod;
# 135 "/usr/include/c++/4.3/cstdlib" 3
using ::strtol;
# 136 "/usr/include/c++/4.3/cstdlib" 3
using ::strtoul;
# 137 "/usr/include/c++/4.3/cstdlib" 3
using ::system;
# 139 "/usr/include/c++/4.3/cstdlib" 3
using ::wcstombs;
# 140 "/usr/include/c++/4.3/cstdlib" 3
using ::wctomb;
# 144 "/usr/include/c++/4.3/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 147 "/usr/include/c++/4.3/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 149 "/usr/include/c++/4.3/cstdlib" 3
}
# 162 "/usr/include/c++/4.3/cstdlib" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 165 "/usr/include/c++/4.3/cstdlib" 3
using ::lldiv_t;
# 171 "/usr/include/c++/4.3/cstdlib" 3
using ::_Exit;
# 175 "/usr/include/c++/4.3/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 178 "/usr/include/c++/4.3/cstdlib" 3
using ::llabs;
# 181 "/usr/include/c++/4.3/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 182 "/usr/include/c++/4.3/cstdlib" 3
{ auto lldiv_t __q; (__q.quot) = __n / __d; (__q.rem) = __n % __d; return __q; }
# 184 "/usr/include/c++/4.3/cstdlib" 3
using ::lldiv;
# 195 "/usr/include/c++/4.3/cstdlib" 3
using ::atoll;
# 196 "/usr/include/c++/4.3/cstdlib" 3
using ::strtoll;
# 197 "/usr/include/c++/4.3/cstdlib" 3
using ::strtoull;
# 199 "/usr/include/c++/4.3/cstdlib" 3
using ::strtof;
# 200 "/usr/include/c++/4.3/cstdlib" 3
using ::strtold;
# 202 "/usr/include/c++/4.3/cstdlib" 3
}
# 204 "/usr/include/c++/4.3/cstdlib" 3
namespace std __attribute__((visibility("default"))) {
# 207 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 209 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::_Exit;
# 210 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::abs;
# 212 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::llabs;
# 213 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::div;
# 214 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::lldiv;
# 216 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::atoll;
# 217 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtof;
# 218 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtoll;
# 219 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtoull;
# 220 "/usr/include/c++/4.3/cstdlib" 3
using __gnu_cxx::strtold;
# 222 "/usr/include/c++/4.3/cstdlib" 3
}
# 424 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __signbitl(long double) throw() __attribute__((__const__));
# 426 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isinfl(long double) throw() __attribute__((__const__));
# 428 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __isnanl(long double) throw() __attribute__((__const__));
# 438 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern "C" __attribute__((__weak__)) int __finitel(long double) throw() __attribute__((__const__));
# 463 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
namespace __gnu_cxx {
# 465 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline long long abs(long long) __attribute__((visibility("default")));
# 466 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 468 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
namespace std {
# 470 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
template<class T> extern inline T __pow_helper(T, int);
# 471 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
template<class T> extern inline T __cmath_power(T, unsigned);
# 472 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 474 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::abs;
# 475 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::fabs;
# 476 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::ceil;
# 477 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::floor;
# 478 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::sqrt;
# 479 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::pow;
# 480 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::log;
# 481 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::log10;
# 482 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::fmod;
# 483 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::modf;
# 484 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::exp;
# 485 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::frexp;
# 486 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::ldexp;
# 487 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::asin;
# 488 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::sin;
# 489 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::sinh;
# 490 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::acos;
# 491 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::cos;
# 492 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::cosh;
# 493 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::atan;
# 494 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::atan2;
# 495 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::tan;
# 496 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
using std::tanh;
# 550 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
namespace std {
# 553 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline long abs(long) __attribute__((visibility("default")));
# 554 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float abs(float) __attribute__((visibility("default")));
# 555 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline double abs(double) __attribute__((visibility("default")));
# 556 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float fabs(float) __attribute__((visibility("default")));
# 557 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float ceil(float) __attribute__((visibility("default")));
# 558 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float floor(float) __attribute__((visibility("default")));
# 559 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float sqrt(float) __attribute__((visibility("default")));
# 560 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float pow(float, float) __attribute__((visibility("default")));
# 561 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float pow(float, int) __attribute__((visibility("default")));
# 562 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline double pow(double, int) __attribute__((visibility("default")));
# 563 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float log(float) __attribute__((visibility("default")));
# 564 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float log10(float) __attribute__((visibility("default")));
# 565 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float fmod(float, float) __attribute__((visibility("default")));
# 566 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float modf(float, float *) __attribute__((visibility("default")));
# 567 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float exp(float) __attribute__((visibility("default")));
# 568 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float frexp(float, int *) __attribute__((visibility("default")));
# 569 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float ldexp(float, int) __attribute__((visibility("default")));
# 570 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float asin(float) __attribute__((visibility("default")));
# 571 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float sin(float) __attribute__((visibility("default")));
# 572 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float sinh(float) __attribute__((visibility("default")));
# 573 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float acos(float) __attribute__((visibility("default")));
# 574 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float cos(float) __attribute__((visibility("default")));
# 575 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float cosh(float) __attribute__((visibility("default")));
# 576 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float atan(float) __attribute__((visibility("default")));
# 577 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float atan2(float, float) __attribute__((visibility("default")));
# 578 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float tan(float) __attribute__((visibility("default")));
# 579 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
extern inline float tanh(float) __attribute__((visibility("default")));
# 582 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 585 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float logb(float a)
# 586 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 587 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return logbf(a);
# 588 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 590 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline int ilogb(float a)
# 591 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 592 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return ilogbf(a);
# 593 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 595 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float scalbn(float a, int b)
# 596 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 597 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return scalbnf(a, b);
# 598 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 600 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float scalbln(float a, long b)
# 601 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 602 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return scalblnf(a, b);
# 603 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 605 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float exp2(float a)
# 606 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 607 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return exp2f(a);
# 608 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 610 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float exp10(float a)
# 611 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 612 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return exp10f(a);
# 613 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 615 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float expm1(float a)
# 616 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 617 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return expm1f(a);
# 618 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 620 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float log2(float a)
# 621 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 622 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return log2f(a);
# 623 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 625 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float log1p(float a)
# 626 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 627 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return log1pf(a);
# 628 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 630 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float rsqrt(float a)
# 631 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 632 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return rsqrtf(a);
# 633 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 635 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float acosh(float a)
# 636 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 637 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return acoshf(a);
# 638 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 640 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float asinh(float a)
# 641 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 642 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return asinhf(a);
# 643 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 645 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float atanh(float a)
# 646 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 647 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return atanhf(a);
# 648 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 650 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float hypot(float a, float b)
# 651 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 652 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return hypotf(a, b);
# 653 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 655 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float cbrt(float a)
# 656 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 657 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return cbrtf(a);
# 658 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 660 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 661 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 662 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
sincosf(a, sptr, cptr);
# 663 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 665 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float erf(float a)
# 666 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 667 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return erff(a);
# 668 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 670 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float erfc(float a)
# 671 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 672 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return erfcf(a);
# 673 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 675 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float lgamma(float a)
# 676 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 677 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return lgammaf(a);
# 678 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 680 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float tgamma(float a)
# 681 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 682 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return tgammaf(a);
# 683 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 685 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float copysign(float a, float b)
# 686 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 687 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return copysignf(a, b);
# 688 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 690 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double copysign(double a, float b)
# 691 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 692 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return copysign(a, (double)b);
# 693 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 695 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float copysign(float a, double b)
# 696 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 697 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return copysignf(a, (float)b);
# 698 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 700 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float nextafter(float a, float b)
# 701 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 702 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return nextafterf(a, b);
# 703 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 705 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float remainder(float a, float b)
# 706 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 707 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return remainderf(a, b);
# 708 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 710 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 711 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 712 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return remquof(a, b, quo);
# 713 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 715 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float round(float a)
# 716 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 717 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return roundf(a);
# 718 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 720 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long lround(float a)
# 721 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 722 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return lroundf(a);
# 723 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 725 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long long llround(float a)
# 726 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 727 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return llroundf(a);
# 728 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 730 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float trunc(float a)
# 731 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 732 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return truncf(a);
# 733 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 735 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float rint(float a)
# 736 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 737 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return rintf(a);
# 738 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 740 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long lrint(float a)
# 741 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 742 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return lrintf(a);
# 743 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 745 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline long long llrint(float a)
# 746 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 747 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return llrintf(a);
# 748 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 750 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float nearbyint(float a)
# 751 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 752 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return nearbyintf(a);
# 753 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 755 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float fdim(float a, float b)
# 756 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 757 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fdimf(a, b);
# 758 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 760 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 761 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 762 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmaf(a, b, c);
# 763 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 765 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 766 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 767 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umin(a, b);
# 768 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 770 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 771 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 772 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umin((unsigned)a, b);
# 773 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 775 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 776 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 777 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umin(a, (unsigned)b);
# 778 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 780 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float min(float a, float b)
# 781 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 782 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fminf(a, b);
# 783 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 785 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double min(double a, double b)
# 786 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 787 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmin(a, b);
# 788 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 790 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double min(float a, double b)
# 791 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 792 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmin((double)a, b);
# 793 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 795 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double min(double a, float b)
# 796 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 797 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmin(a, (double)b);
# 798 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 800 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 801 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 802 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umax(a, b);
# 803 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 805 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 806 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 807 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umax((unsigned)a, b);
# 808 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 810 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 811 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 812 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return umax(a, (unsigned)b);
# 813 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 815 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline float max(float a, float b)
# 816 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 817 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmaxf(a, b);
# 818 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 820 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double max(double a, double b)
# 821 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 822 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmax(a, b);
# 823 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 825 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double max(float a, double b)
# 826 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 827 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmax((double)a, b);
# 828 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 830 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
static inline double max(double a, float b)
# 831 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
{
# 832 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
return fmax(a, (double)b);
# 833 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h"
}
# 59 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
template<class T, int dim = 1, cudaTextureReadMode = cudaReadModeElementType>
# 60 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
struct texture : public textureReference {
# 62 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 63 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 64 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 65 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
{
# 66 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->normalized) = norm;
# 67 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->filterMode) = fMode;
# 68 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[0]) = aMode;
# 69 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[1]) = aMode;
# 70 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[2]) = aMode;
# 71 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->channelDesc) = cudaCreateChannelDesc< T> ();
# 72 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 75 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 76 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 77 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
desc)
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
{
# 79 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->normalized) = norm;
# 80 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->filterMode) = fMode;
# 81 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[0]) = aMode;
# 82 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[1]) = aMode;
# 83 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
((this->addressMode)[2]) = aMode;
# 84 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
(this->channelDesc) = desc;
# 85 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
}
# 86 "/home/gdiamos/temp/cuda/bin//../include/cuda_texture_types.h"
};
# 77 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaSetupArgument(T
# 79 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
arg, size_t
# 80 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset)
# 82 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 83 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 84 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 94 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 95 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 96 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 97 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 98 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 99 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 102 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 103 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 105 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 106 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 107 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 108 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 109 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 110 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 111 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 113 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 114 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 115 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 117 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 118 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 119 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 120 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 121 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 122 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 123 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 125 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 126 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 127 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 129 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 130 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 131 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, const void *
# 132 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
src, size_t
# 133 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 134 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 136 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 138 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 139 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 140 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 148 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 149 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, char *
# 150 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 151 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 152 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 153 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 155 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 156 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 157 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 159 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 160 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 161 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, const T &
# 162 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 163 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 164 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 165 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 167 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 168 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 171 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 172 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, char *
# 173 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 174 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 175 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 176 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 177 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 179 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 180 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 181 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 183 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 184 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 185 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
dst, const T &
# 186 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol, size_t
# 187 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
count, size_t
# 188 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, cudaMemcpyKind
# 189 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
kind, cudaStream_t
# 190 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
stream)
# 192 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 193 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 194 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 196 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 197 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, char *
# 198 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 200 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 201 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 202 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 204 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 205 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 206 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, const T &
# 207 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 209 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 211 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 219 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size, char *
# 221 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 223 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 224 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 225 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 227 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 228 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size, const T &
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 232 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 233 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 234 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 242 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 243 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 244 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 245 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const void *
# 246 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 247 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
desc, size_t
# 248 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 250 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 251 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, (&desc), size);
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 254 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 255 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 256 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 257 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const void *
# 258 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
devPtr, size_t
# 259 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 261 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 262 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 263 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 265 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 266 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 267 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const cudaArray *
# 268 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 269 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
desc)
# 271 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 272 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, (&desc));
# 273 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 275 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 276 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 277 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex, const cudaArray *
# 278 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
array)
# 280 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 281 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
auto cudaChannelFormatDesc desc;
# 282 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
auto cudaError_t err = cudaGetChannelDesc(&desc, array);
# 284 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? (cudaBindTextureToArray(tex, array, desc)) : err;
# 285 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 293 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 294 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 295 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex)
# 297 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 298 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 299 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 307 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 308 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 309 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 310 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
tex)
# 312 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 313 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 314 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 322 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
template<class T> inline cudaError_t
# 323 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
cudaLaunch(T *
# 324 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
symbol)
# 326 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
{
# 327 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
return cudaLaunch((const char *)symbol);
# 328 "/home/gdiamos/temp/cuda/bin//../include/cuda_runtime.h"
}
# 43 "nbody_kernel.cu"
static float __shadow_softeningSquared;




# 1 "/tmp/tmpxft_000015ec_00000000-1_bodysystemcuda.cudafe1.stub.h" 1

extern "C" {


extern __attribute__((__weak__)) void __device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi(float4 *, float4 *, float4 *, float4 *, float, float, int);

}
template <bool>
void __globfunc_integrateBodies( float4 *,float4 *,float4 *,float4 *,float,float,int);
extern "C" {



extern __attribute__((__weak__)) void __device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi(float4 *, float4 *, float4 *, float4 *, float, float, int);

}
template <bool>
void __globfunc_integrateBodies( float4 *,float4 *,float4 *,float4 *,float,float,int);
extern "C" {



}
# 49 "nbody_kernel.cu" 2
# 52 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef unsigned CUdeviceptr; }
# 54 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef int CUdevice; }
# 55 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 56 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 57 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 58 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 59 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 60 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUevent_st *CUevent; }
# 61 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef struct CUstream_st *CUstream; }
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 72 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUctx_flags_enum {
# 73 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_AUTO,
# 74 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_SPIN,
# 75 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_YIELD,
# 76 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_SCHED_MASK,
# 77 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_CTX_FLAGS_MASK = 3
# 78 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUctx_flags; }
# 92 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 83 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUarray_format_enum {
# 84 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 85 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 86 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 87 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 88 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 89 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 90 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 91 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 92 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUarray_format; }
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 97 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUaddress_mode_enum {
# 98 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 99 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 100 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR
# 101 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUaddress_mode; }
# 109 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 106 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUfilter_mode_enum {
# 107 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 108 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 109 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUfilter_mode; }
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 114 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUdevice_attribute_enum {
# 115 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 116 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 117 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 118 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 119 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 120 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 121 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 122 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 123 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 124 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 125 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 126 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 127 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 128 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 129 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 130 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 132 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 133 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 134 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT
# 135 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUdevice_attribute; }
# 151 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 140 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUdevprop_st {
# 141 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int maxThreadsPerBlock;
# 142 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int maxThreadsDim[3];
# 143 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int maxGridSize[3];
# 144 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int sharedMemPerBlock;
# 145 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int totalConstantMemory;
# 146 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int SIMDWidth;
# 147 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int memPitch;
# 148 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int regsPerBlock;
# 149 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int clockRate;
# 150 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
int textureAlign;
# 151 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUdevprop; }
# 160 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 156 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUmemorytype_enum {
# 157 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 158 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 159 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_MEMORYTYPE_ARRAY
# 160 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUmemorytype; }
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 166 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUjit_option_enum {
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 178 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 182 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_WALL_TIME,
# 186 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 192 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 196 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 202 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 206 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 213 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_TARGET,
# 218 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 220 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUjit_option; }
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 225 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUjit_target_enum {
# 227 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_10,
# 228 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_11,
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_12,
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_TARGET_COMPUTE_13
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUjit_target; }
# 244 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 236 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum CUjit_fallback_enum {
# 239 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_PREFER_PTX,
# 242 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CU_PREFER_BINARY
# 244 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUjit_fallback; }
# 289 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
enum cudaError_enum {
# 254 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_SUCCESS,
# 255 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 256 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 257 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 258 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 260 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 261 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 263 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 264 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 265 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 266 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 267 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 268 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 269 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 270 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 271 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 272 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 274 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 275 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 277 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 279 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 281 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 283 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 284 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 285 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 286 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 288 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 289 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUresult; }
# 300 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuInit(unsigned);
# 308 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice *, int);
# 309 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int *);
# 310 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetName(char *, int, CUdevice);
# 311 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int *, int *, CUdevice);
# 312 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceTotalMem(unsigned *, CUdevice);
# 313 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop *, CUdevice);
# 314 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int *, CUdevice_attribute, CUdevice);
# 322 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxCreate(CUcontext *, unsigned, CUdevice);
# 323 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxDestroy(CUcontext);
# 324 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext *, unsigned);
# 325 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext);
# 326 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxPushCurrent(CUcontext);
# 327 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxPopCurrent(CUcontext *);
# 328 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice *);
# 329 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 338 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule *, const char *);
# 339 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule *, const void *);
# 340 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule *, const void *, unsigned, CUjit_option *, void **);
# 341 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule *, const void *);
# 342 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule);
# 343 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction *, CUmodule, const char *);
# 344 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleGetGlobal(CUdeviceptr *, unsigned *, CUmodule, const char *);
# 345 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref *, CUmodule, const char *);
# 353 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemGetInfo(unsigned *, unsigned *);
# 355 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemAlloc(CUdeviceptr *, unsigned);
# 356 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemAllocPitch(CUdeviceptr *, unsigned *, unsigned, unsigned, unsigned);
# 364 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemFree(CUdeviceptr);
# 365 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemGetAddressRange(CUdeviceptr *, unsigned *, CUdeviceptr);
# 367 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemAllocHost(void **, unsigned);
# 368 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemFreeHost(void *);
# 381 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD(CUdeviceptr, const void *, unsigned);
# 382 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoH(void *, CUdeviceptr, unsigned);
# 385 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoD(CUdeviceptr, CUdeviceptr, unsigned);
# 388 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoA(CUarray, unsigned, CUdeviceptr, unsigned);
# 389 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoD(CUdeviceptr, CUarray, unsigned, unsigned);
# 392 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoA(CUarray, unsigned, const void *, unsigned);
# 393 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoH(void *, CUarray, unsigned, unsigned);
# 396 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoA(CUarray, unsigned, CUarray, unsigned, unsigned);
# 418 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 400 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 402 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcXInBytes; unsigned srcY;
# 403 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype srcMemoryType;
# 404 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
const void *srcHost;
# 405 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr srcDevice;
# 406 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray srcArray;
# 407 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcPitch;
# 409 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstXInBytes; unsigned dstY;
# 410 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype dstMemoryType;
# 411 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *dstHost;
# 412 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr dstDevice;
# 413 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray dstArray;
# 414 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstPitch;
# 416 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned WidthInBytes;
# 417 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 418 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_MEMCPY2D; }
# 419 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy2D(const CUDA_MEMCPY2D *);
# 420 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned(const CUDA_MEMCPY2D *);
# 449 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 424 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 426 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcXInBytes; unsigned srcY; unsigned srcZ;
# 427 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcLOD;
# 428 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype srcMemoryType;
# 429 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
const void *srcHost;
# 430 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr srcDevice;
# 431 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray srcArray;
# 432 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *reserved0;
# 433 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcPitch;
# 434 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned srcHeight;
# 436 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstXInBytes; unsigned dstY; unsigned dstZ;
# 437 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstLOD;
# 438 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUmemorytype dstMemoryType;
# 439 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *dstHost;
# 440 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUdeviceptr dstDevice;
# 441 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray dstArray;
# 442 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
void *reserved1;
# 443 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstPitch;
# 444 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned dstHeight;
# 446 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned WidthInBytes;
# 447 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 448 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Depth;
# 449 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_MEMCPY3D; }
# 450 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy3D(const CUDA_MEMCPY3D *);
# 465 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync(CUdeviceptr, const void *, unsigned, CUstream);
# 467 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync(void *, CUdeviceptr, unsigned, CUstream);
# 471 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync(CUarray, unsigned, const void *, unsigned, CUstream);
# 473 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync(void *, CUarray, unsigned, unsigned, CUstream);
# 477 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync(const CUDA_MEMCPY2D *, CUstream);
# 480 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync(const CUDA_MEMCPY3D *, CUstream);
# 487 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD8(CUdeviceptr, unsigned char, unsigned);
# 488 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD16(CUdeviceptr, unsigned short, unsigned);
# 489 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD32(CUdeviceptr, unsigned, unsigned);
# 491 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD2D8(CUdeviceptr, unsigned, unsigned char, unsigned, unsigned);
# 492 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD2D16(CUdeviceptr, unsigned, unsigned short, unsigned, unsigned);
# 493 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuMemsetD2D32(CUdeviceptr, unsigned, unsigned, unsigned, unsigned);
# 502 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction, int, int, int);
# 503 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction, unsigned);
# 526 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 512 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR {
# 516 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Width;
# 517 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 522 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray_format Format;
# 525 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned NumChannels;
# 526 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 528 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArrayCreate(CUarray *, const CUDA_ARRAY_DESCRIPTOR *);
# 529 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor(CUDA_ARRAY_DESCRIPTOR *, CUarray);
# 530 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray);
# 552 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" { typedef
# 533 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR {
# 537 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Width;
# 538 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Height;
# 539 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Depth;
# 543 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
CUarray_format Format;
# 546 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned NumChannels;
# 550 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
unsigned Flags;
# 552 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 553 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArray3DCreate(CUarray *, const CUDA_ARRAY3D_DESCRIPTOR *);
# 554 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor(CUDA_ARRAY3D_DESCRIPTOR *, CUarray);
# 561 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref *);
# 562 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref);
# 564 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref, CUarray, unsigned);
# 567 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress(unsigned *, CUtexref, CUdeviceptr, unsigned);
# 568 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref, CUarray_format, int);
# 570 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref, int, CUaddress_mode);
# 571 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref, CUfilter_mode);
# 572 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref, unsigned);
# 580 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetAddress(CUdeviceptr *, CUtexref);
# 581 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray *, CUtexref);
# 582 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode *, CUtexref, int);
# 583 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode *, CUtexref);
# 584 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format *, int *, CUtexref);
# 585 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned *, CUtexref);
# 593 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction, unsigned);
# 594 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction, int, unsigned);
# 595 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction, int, float);
# 596 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction, int, void *, unsigned);
# 597 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction, int, CUtexref);
# 608 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction);
# 609 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction, int, int);
# 610 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction, int, int, CUstream);
# 617 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent *, unsigned);
# 618 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent, CUstream);
# 619 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent);
# 620 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent);
# 621 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventDestroy(CUevent);
# 622 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float *, CUevent, CUevent);
# 629 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream *, unsigned);
# 630 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream);
# 631 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream);
# 632 "/home/gdiamos/temp/cuda/bin//../include/cuda.h"
extern "C" CUresult cuStreamDestroy(CUstream);
# 64 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
enum CUTBoolean {
# 66 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
CUTFalse,
# 67 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
CUTTrue
# 68 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
};
# 76 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" void cutFree(void *);
# 94 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" void cutCheckBankAccess(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, const char *, const int, const char *, const int);
# 107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" char *cutFindFilePath(const char *, const char *);
# 122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilef(const char *, float **, unsigned *, bool = false);
# 138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFiled(const char *, double **, unsigned *, bool = false);
# 154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFilei(const char *, int **, unsigned *, bool = false);
# 169 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileui(const char *, unsigned **, unsigned *, bool = false);
# 185 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileb(const char *, char **, unsigned *, bool = false);
# 201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutReadFileub(const char *, unsigned char **, unsigned *, bool = false);
# 215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilef(const char *, const float *, unsigned, const float, bool = false);
# 229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFiled(const char *, const float *, unsigned, const double, bool = false);
# 241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFilei(const char *, const int *, unsigned, bool = false);
# 253 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileui(const char *, const unsigned *, unsigned, bool = false);
# 265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileb(const char *, const char *, unsigned, bool = false);
# 277 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutWriteFileub(const char *, const unsigned char *, unsigned, bool = false);
# 293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMub(const char *, unsigned char **, unsigned *, unsigned *);
# 306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPMub(const char *, unsigned char **, unsigned *, unsigned *);
# 320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPPM4ub(const char *, unsigned char **, unsigned *, unsigned *);
# 336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMi(const char *, unsigned **, unsigned *, unsigned *);
# 352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMs(const char *, unsigned short **, unsigned *, unsigned *);
# 367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutLoadPGMf(const char *, float **, unsigned *, unsigned *);
# 379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMub(const char *, unsigned char *, unsigned, unsigned);
# 391 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPMub(const char *, unsigned char *, unsigned, unsigned);
# 404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePPM4ub(const char *, unsigned char *, unsigned, unsigned);
# 416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMi(const char *, unsigned *, unsigned, unsigned);
# 428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMs(const char *, unsigned short *, unsigned, unsigned);
# 440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutSavePGMf(const char *, float *, unsigned, unsigned);
# 461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCmdLineFlag(const int, const char **, const char *);
# 475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumenti(const int, const char **, const char *, int *);
# 489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentf(const int, const char **, const char *, float *);
# 503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentstr(const int, const char **, const char *, char **);
# 518 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutGetCmdLineArgumentListstr(const int, const char **, const char *, char **, unsigned *);
# 532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCheckCondition(int, const char *, const int);
# 544 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparef(const float *, const float *, const unsigned);
# 557 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparei(const int *, const int *, const unsigned);
# 571 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareuit(const unsigned *, const unsigned *, const unsigned, const float, const float);
# 584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareub(const unsigned char *, const unsigned char *, const unsigned);
# 599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareubt(const unsigned char *, const unsigned char *, const unsigned, const float, const float);
# 613 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareube(const unsigned char *, const unsigned char *, const unsigned, const float);
# 627 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparefe(const float *, const float *, const unsigned, const float);
# 642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparefet(const float *, const float *, const unsigned, const float, const float);
# 657 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCompareL2fe(const float *, const float *, const unsigned, const float);
# 672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutComparePPM(const char *, const char *, const float, const float, bool = false);
# 685 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutCreateTimer(unsigned *);
# 694 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutDeleteTimer(unsigned);
# 702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutStartTimer(const unsigned);
# 710 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutStopTimer(const unsigned);
# 718 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" CUTBoolean cutResetTimer(const unsigned);
# 727 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" float cutGetTimerValue(const unsigned);
# 738 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil.h"
extern "C" float cutGetAverageTimerValue(const unsigned);
# 19 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
inline void __cutilBankChecker(unsigned tidx, unsigned tidy, unsigned tidz, unsigned
# 20 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
bdimx, unsigned bdimy, unsigned bdimz, char *
# 21 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
aname, int index, char *file, int line)
# 22 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
{
# 23 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
cutCheckBankAccess(tidx, tidy, tidz, bdimx, bdimy, bdimz, file, line, aname, index);
# 24 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_bankchecker.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 90 "/usr/include/wchar.h" 3
extern "C" { typedef
# 79 "/usr/include/wchar.h" 3
struct __mbstate_t {
# 80 "/usr/include/wchar.h" 3
int __count;
# 82 "/usr/include/wchar.h" 3
union {
# 84 "/usr/include/wchar.h" 3
unsigned __wch;
# 88 "/usr/include/wchar.h" 3
char __wchb[4];
# 89 "/usr/include/wchar.h" 3
} __value;
# 90 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct _G_fpos_t {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct _G_fpos64_t {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t; }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t; }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t; }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t; }
# 43 "/usr/lib/gcc/x86_64-linux-gnu/4.3.3/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[((((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t))];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void *, char *, size_t); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void *, const char *, size_t); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void *, __off64_t *, int); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void *); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct _IO_cookie_io_functions_t {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file *, int, void *, _IO_cookie_io_functions_t);
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 458 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE *);
# 459 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int, _IO_FILE *);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE *) throw();
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE *) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE *);
# 469 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 470 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 471 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 488 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 492 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 493 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 495 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 496 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 498 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 91 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 97 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 145 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 146 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 147 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 155 "/usr/include/stdio.h" 3
extern "C" int remove(const char *) throw();
# 157 "/usr/include/stdio.h" 3
extern "C" int rename(const char *, const char *) throw();
# 162 "/usr/include/stdio.h" 3
extern "C" int renameat(int, const char *, int, const char *) throw();
# 172 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 182 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 186 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char *) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char *) throw();
# 204 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char *, const char *) throw() __attribute__((__malloc__));
# 214 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE *);
# 219 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE *);
# 229 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE *);
# 239 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 249 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__, const char *__restrict__);
# 255 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 274 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__, const char *__restrict__);
# 276 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__, const char *__restrict__, FILE *__restrict__);
# 283 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int, const char *) throw();
# 289 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__, const char *__restrict__, _IO_cookie_io_functions_t) throw();
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void *, size_t, const char *) throw();
# 300 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char **, size_t *) throw();
# 307 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__, char *__restrict__) throw();
# 311 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__, char *__restrict__, int, size_t) throw();
# 318 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__, char *__restrict__, size_t) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE *) throw();
# 331 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 337 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__, ...);
# 339 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__, const char *__restrict__, ...) throw();
# 346 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 352 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__, __gnuc_va_list);
# 354 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 361 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__, size_t, const char *__restrict__, ...) throw();
# 365 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__, size_t, const char *__restrict__, __gnuc_va_list) throw();
# 374 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 377 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 380 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__, const char *__restrict__, ...) throw();
# 390 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int, const char *__restrict__, __gnuc_va_list);
# 393 "/usr/include/stdio.h" 3
extern "C" int dprintf(int, const char *__restrict__, ...);
# 403 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__, const char *__restrict__, ...);
# 409 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__, ...);
# 411 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__, const char *__restrict__, ...) throw();
# 449 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 457 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__, __gnuc_va_list);
# 461 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 509 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE *);
# 510 "/usr/include/stdio.h" 3
extern "C" int getc(FILE *);
# 516 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 528 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE *);
# 529 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 539 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE *);
# 551 "/usr/include/stdio.h" 3
extern "C" int fputc(int, FILE *);
# 552 "/usr/include/stdio.h" 3
extern "C" int putc(int, FILE *);
# 558 "/usr/include/stdio.h" 3
extern "C" int putchar(int);
# 572 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int, FILE *);
# 580 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int, FILE *);
# 581 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int);
# 588 "/usr/include/stdio.h" 3
extern "C" int getw(FILE *);
# 591 "/usr/include/stdio.h" 3
extern "C" int putw(int, FILE *);
# 600 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__, int, FILE *__restrict__);
# 608 "/usr/include/stdio.h" 3
extern "C" char *gets(char *);
# 618 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__, int, FILE *__restrict__);
# 634 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 637 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__, size_t *__restrict__, int, FILE *__restrict__);
# 647 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__, size_t *__restrict__, FILE *__restrict__);
# 658 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__, FILE *__restrict__);
# 664 "/usr/include/stdio.h" 3
extern "C" int puts(const char *);
# 671 "/usr/include/stdio.h" 3
extern "C" int ungetc(int, FILE *);
# 678 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 684 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 695 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__, FILE *__restrict__);
# 706 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__, size_t, size_t, FILE *__restrict__);
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__, size_t, size_t, FILE *__restrict__);
# 718 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE *, long, int);
# 723 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE *);
# 728 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE *);
# 742 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE *, __off_t, int);
# 747 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE *);
# 767 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__, fpos_t *__restrict__);
# 772 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE *, const fpos_t *);
# 787 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE *, __off64_t, int);
# 788 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE *);
# 789 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__, fpos64_t *__restrict__);
# 790 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE *, const fpos64_t *);
# 795 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE *) throw();
# 797 "/usr/include/stdio.h" 3
extern "C" int feof(FILE *) throw();
# 799 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE *) throw();
# 804 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE *) throw();
# 805 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE *) throw();
# 806 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE *) throw();
# 815 "/usr/include/stdio.h" 3
extern "C" void perror(const char *);
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 827 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE *) throw();
# 832 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE *) throw();
# 842 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char *, const char *);
# 848 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE *);
# 854 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char *) throw();
# 860 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char *);
# 865 "/usr/include/stdio.h" 3
struct obstack;
# 868 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__, const char *__restrict__, ...) throw();
# 871 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__, const char *__restrict__, __gnuc_va_list) throw();
# 882 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE *) throw();
# 886 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE *) throw();
# 889 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE *) throw();
# 162 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { typedef float2 cuFloatComplex; }
# 164 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline float cuCrealf(cuFloatComplex x)
# 165 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 166 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.x;
# 167 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 169 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline float cuCimagf(cuFloatComplex x)
# 170 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 171 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.y;
# 172 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 174 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex make_cuFloatComplex(float
# 175 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
r, float i)
# 176 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 177 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuFloatComplex res;
# 178 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.x) = r;
# 179 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.y) = i;
# 180 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return res;
# 181 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 183 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuConjf(cuFloatComplex x)
# 184 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 185 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x));
# 186 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 187 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex
# 188 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 189 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 190 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y));
# 192 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 194 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex
# 195 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 196 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 197 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y));
# 199 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 206 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex
# 207 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 208 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 209 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuFloatComplex prod;
# 210 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
prod = make_cuFloatComplex(cuCrealf(x) * cuCrealf(y) - cuCimagf(x) * cuCimagf(y), cuCrealf(x) * cuCimagf(y) + cuCimagf(x) * cuCrealf(y));
# 214 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return prod;
# 215 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 222 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex
# 223 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 224 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 225 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuFloatComplex quot;
# 226 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float s = ((float)fabs((double)cuCrealf(y)) + (float)fabs((double)cuCimagf(y)));
# 228 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float oos = ((1.0F) / s);
# 229 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float ars = (cuCrealf(x) * oos);
# 230 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float ais = (cuCimagf(x) * oos);
# 231 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float brs = (cuCrealf(y) * oos);
# 232 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float bis = (cuCimagf(y) * oos);
# 233 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
s = brs * brs + bis * bis;
# 234 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
oos = (1.0F) / s;
# 235 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
quot = make_cuFloatComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);
# 237 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return quot;
# 238 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 248 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline float cuCabsf(cuFloatComplex x)
# 249 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 250 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float a = cuCrealf(x);
# 251 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float b = cuCimagf(x);
# 252 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto float v; auto float w; auto float t;
# 253 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
a = (float)fabs(a);
# 254 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
b = (float)fabs(b);
# 255 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (a > b) {
# 256 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = a;
# 257 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = b;
# 258 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} else {
# 259 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = b;
# 260 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = a;
# 261 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 262 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = w / v;
# 263 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = (1.0F) + t * t;
# 264 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v * (float)sqrt(t);
# 265 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) {
# 266 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v + w;
# 267 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 268 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return t;
# 269 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 272 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { typedef double2 cuDoubleComplex; }
# 274 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline double cuCreal(cuDoubleComplex x)
# 275 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 276 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.x;
# 277 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 279 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline double cuCimag(cuDoubleComplex x)
# 280 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 281 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return x.y;
# 282 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 284 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex make_cuDoubleComplex(double
# 285 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
r, double i)
# 286 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 287 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuDoubleComplex res;
# 288 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.x) = r;
# 289 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
(res.y) = i;
# 290 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return res;
# 291 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 293 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuConj(cuDoubleComplex x)
# 294 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 295 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x));
# 296 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 298 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex
# 299 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 300 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 301 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y));
# 303 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 305 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex
# 306 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 307 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 308 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y));
# 310 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 317 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex
# 318 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 319 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 320 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuDoubleComplex prod;
# 321 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
prod = make_cuDoubleComplex(cuCreal(x) * cuCreal(y) - cuCimag(x) * cuCimag(y), cuCreal(x) * cuCimag(y) + cuCimag(x) * cuCreal(y));
# 325 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return prod;
# 326 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 333 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex
# 334 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 335 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 336 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto cuDoubleComplex quot;
# 337 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double s = (fabs(cuCreal(y)) + fabs(cuCimag(y)));
# 338 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double oos = ((1.0) / s);
# 339 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double ars = (cuCreal(x) * oos);
# 340 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double ais = (cuCimag(x) * oos);
# 341 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double brs = (cuCreal(y) * oos);
# 342 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double bis = (cuCimag(y) * oos);
# 343 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
s = brs * brs + bis * bis;
# 344 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
oos = (1.0) / s;
# 345 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
quot = make_cuDoubleComplex((ars * brs + ais * bis) * oos, (ais * brs - ars * bis) * oos);
# 347 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return quot;
# 348 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 356 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
extern "C" { static inline double cuCabs(cuDoubleComplex x)
# 357 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 358 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double a = cuCreal(x);
# 359 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double b = cuCimag(x);
# 360 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
auto double v; auto double w; auto double t;
# 361 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
a = fabs(a);
# 362 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
b = fabs(b);
# 363 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (a > b) {
# 364 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = a;
# 365 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = b;
# 366 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} else {
# 367 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
v = b;
# 368 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
w = a;
# 369 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 370 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = w / v;
# 371 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = (1.0) + t * t;
# 372 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v * sqrt(t);
# 373 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308)))
# 374 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 375 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
t = v + w;
# 376 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 377 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return t;
# 378 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
} }
# 387 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
typedef cuFloatComplex cuComplex;
# 388 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
static inline cuComplex make_cuComplex(float x, float
# 389 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
y)
# 390 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 391 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex(x, y);
# 392 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 395 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex
# 396 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
c)
# 397 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 398 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c));
# 399 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 401 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex
# 402 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
c)
# 403 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
{
# 404 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c));
# 405 "/home/gdiamos/temp/cuda/bin//../include/cuComplex.h"
}
# 74 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef
# 64 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
enum cufftResult_t {
# 65 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_SUCCESS,
# 66 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_PLAN,
# 67 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_ALLOC_FAILED,
# 68 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_TYPE,
# 69 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_VALUE,
# 70 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INTERNAL_ERROR,
# 71 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_EXEC_FAILED,
# 72 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_SETUP_FAILED,
# 73 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_INVALID_SIZE
# 74 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
} cufftResult; }
# 79 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef unsigned cufftHandle; }
# 82 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef float cufftReal; }
# 87 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef cuComplex cufftComplex; }
# 98 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" { typedef
# 94 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
enum cufftType_t {
# 95 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_R2C = 42,
# 96 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_C2R = 44,
# 97 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
CUFFT_C2C = 41
# 98 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
} cufftType; }
# 100 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftPlan1d(cufftHandle *, int, cufftType, int);
# 105 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftPlan2d(cufftHandle *, int, int, cufftType);
# 109 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftPlan3d(cufftHandle *, int, int, int, cufftType);
# 113 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftDestroy(cufftHandle);
# 115 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftExecC2C(cufftHandle, cufftComplex *, cufftComplex *, int);
# 120 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftExecR2C(cufftHandle, cufftReal *, cufftComplex *);
# 124 "/home/gdiamos/temp/cuda/bin//../include/cufft.h"
extern "C" cufftResult cufftExecC2R(cufftHandle, cufftComplex *, cufftReal *);
# 22 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilCondition(int val, char *file, int line)
# 23 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 24 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((CUTFalse) == (cutCheckCondition(val, file, line))) {
# 25 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(1);
# 26 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 27 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 29 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilExit(int argc, char **argv)
# 30 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 31 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (!(cutCheckCmdLineFlag(argc, (const char **)argv, "noprompt"))) {
# 32 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
printf("\nPress ENTER to exit...\n");
# 33 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fflush(stdout);
# 34 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fflush(stderr);
# 35 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
getchar();
# 36 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 37 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(0);
# 38 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 41 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline int cutGetMaxGflopsDeviceId()
# 42 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 43 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int device_count = 0;
# 44 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cudaGetDeviceCount(&device_count);
# 46 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaDeviceProp device_properties;
# 47 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int max_gflops_device = 0;
# 48 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int max_gflops = 0;
# 50 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int current_device = 0;
# 51 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 52 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
max_gflops = device_properties.multiProcessorCount * device_properties.clockRate;
# 53 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
++current_device;
# 55 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
while (current_device < device_count)
# 56 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 57 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cudaGetDeviceProperties(&device_properties, current_device);
# 58 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int gflops = (device_properties.multiProcessorCount * device_properties.clockRate);
# 59 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (gflops > max_gflops)
# 60 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 61 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
max_gflops = gflops;
# 62 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
max_gflops_device = current_device;
# 63 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 64 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
++current_device;
# 65 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 67 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
return max_gflops_device;
# 68 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 70 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeCallNoSync(cudaError err, const char *file, const int line)
# 71 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 72 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 73 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCallNoSync() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 75 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 76 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 77 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 79 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeCall(cudaError err, const char *file, const int line)
# 80 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 81 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 82 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cudaSafeCall() Runtime API error in file <%s>, line %i : %s.\n", file, line, cudaGetErrorString(err));
# 84 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 85 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 86 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 88 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cudaSafeThreadSync(const char *file, const int line)
# 89 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 90 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaError err = cudaThreadSynchronize();
# 91 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 92 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cudaThreadSynchronize() Driver API error in file \'%s\' in line %i : %s.\n", file, line, cudaGetErrorString(err));
# 94 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 95 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 96 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 98 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cufftSafeCall(cufftResult err, const char *file, const int line)
# 99 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((CUFFT_SUCCESS) != err) {
# 101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cufftSafeCall() CUFFT error in file <%s>, line %i.\n", file, line);
# 103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilCheckError(CUTBoolean err, const char *file, const int line)
# 108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((CUTTrue) != err) {
# 110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error in file <%s>, line %i.\n", file, line);
# 112 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 113 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 114 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 116 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilCheckMsg(const char *errorMessage, const char *file, const int line)
# 117 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 118 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaError_t err = cudaGetLastError();
# 119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cutilCheckMsg() CUTIL CUDA error: %s in file <%s>, line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 123 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 132 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 133 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void __cutilSafeMalloc(void *pointer, const char *file, const int line)
# 134 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 135 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (!(pointer)) {
# 136 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cutilSafeMalloc host malloc failure in file <%s>, line %i\n", file, line);
# 138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 145 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void cutilDeviceInit(int ARGC, char **ARGV)
# 146 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int deviceCount;
# 148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceCount(&deviceCount), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h", 148);
# 149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (deviceCount == 0) {
# 150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CUTIL CUDA error: no devices supporting CUDA.\n");
# 151 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 152 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 153 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto int dev = 0;
# 154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 155 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if (dev < 0) { dev = 0; } if (dev > (deviceCount - 1)) { dev = deviceCount - 1; }
# 157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaDeviceProp deviceProp;
# 158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
__cudaSafeCallNoSync(cudaGetDeviceProperties(&deviceProp, dev), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h", 158);
# 159 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((deviceProp.major) < 1) {
# 160 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "cutil error: device does not support CUDA.\n");
# 161 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1); }
# 163 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 164 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "Using device %d: %s\n", dev, deviceProp.name); }
# 165 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
__cudaSafeCall(cudaSetDevice(dev), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h", 165);
# 166 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 171 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
inline void cutilCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 172 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
{
# 173 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
auto cudaError_t err = cudaGetLastError();
# 174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 177 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 178 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 179 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
err = cudaThreadSynchronize();
# 180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
if ((cudaSuccess) != err) {
# 181 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
fprintf(stderr, "CCUDA error: %s in file \'%s\' in line %i : %s.\n", errorMessage, file, line, cudaGetErrorString(err));
# 183 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
exit(-1);
# 184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 185 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_runtime.h"
}
# 16 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuSafeCallNoSync(CUresult err, const char *file, const int line)
# 17 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 18 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 19 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cuSafeCallNoSync() Driver API error = %04d from file <%s>, line %i.\n", err, file, line);
# 21 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 22 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 23 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 24 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuSafeCall(CUresult err, const char *file, const int line)
# 25 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 26 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(err, file, line);
# 27 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 29 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuCtxSync(const char *file, const int line)
# 30 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 31 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuCtxSynchronize();
# 32 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 33 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cuCtxSynchronize() API error = %04d in file <%s>, line %i.\n", err, file, line);
# 35 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 36 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 37 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 39 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void __cuCheckMsg(const char *msg, const char *file, const int line)
# 40 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 41 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuCtxSynchronize();
# 42 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 43 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> %s", msg);
# 44 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "cutilDrvCheckMsg -> cuCtxSynchronize API error = %04d in file <%s>, line %i.\n", err, file, line);
# 46 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 47 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 48 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 54 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void cutilDeviceInitDrv(int cuDevice, int ARGC, char **ARGV)
# 55 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 56 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
cuDevice = 0;
# 57 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto int deviceCount = 0;
# 58 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuInit(0);
# 59 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) == err) {
# 60 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGetCount(&deviceCount), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h", 60); }
# 61 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if (deviceCount == 0) {
# 62 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "CUTIL DeviceInitDrv error: no devices supporting CUDA\n");
# 63 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 64 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 65 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto int dev = 0;
# 66 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
cutGetCmdLineArgumenti(ARGC, (const char **)ARGV, "device", &dev);
# 67 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if (dev < 0) { dev = 0; }
# 68 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if (dev > (deviceCount - 1)) { dev = deviceCount - 1; }
# 69 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
__cuSafeCallNoSync(cuDeviceGet(&cuDevice, dev), "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h", 69);
# 70 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto char name[100];
# 71 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
cuDeviceGetName(name, 100, cuDevice);
# 72 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((cutCheckCmdLineFlag(ARGC, (const char **)ARGV, "quiet")) == (CUTFalse)) {
# 73 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Using device %d: %s\n", dev, name); }
# 74 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 78 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
inline void cutilDrvCudaCheckCtxLost(const char *errorMessage, const char *file, const int line)
# 79 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
{
# 80 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
auto CUresult err = cuCtxSynchronize();
# 81 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_ERROR_INVALID_CONTEXT) != err) {
# 82 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 84 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 85 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 86 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
err = cuCtxSynchronize();
# 87 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
if ((CUDA_SUCCESS) != err) {
# 88 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
fprintf(stderr, "Cuda error: %s in file \'%s\' in line %i\n", errorMessage, file, line);
# 90 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
exit(-1);
# 91 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 92 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline_drvapi.h"
}
# 12 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
inline void print_NVCC_min_spec(const char *sSDKsample, const char *sNVCCReq, const char *sDriverReq)
# 13 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
{
# 14 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf("CUDA %d.%02d Toolkit built this project.\n", 2010 / 1000, 2010 % 100);
# 15 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf("  [ %s ] requirements:\n", sSDKsample);
# 16 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf(" -> CUDA %s Toolkit\n", sNVCCReq);
# 17 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
printf(" -> %s NVIDIA Display Driver.\n", sDriverReq);
# 18 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_inline.h"
}
# 98 "/usr/include/c++/4.3/cstdio" 3
namespace std __attribute__((visibility("default"))) {
# 100 "/usr/include/c++/4.3/cstdio" 3
using ::FILE;
# 101 "/usr/include/c++/4.3/cstdio" 3
using ::fpos_t;
# 103 "/usr/include/c++/4.3/cstdio" 3
using ::clearerr;
# 104 "/usr/include/c++/4.3/cstdio" 3
using ::fclose;
# 105 "/usr/include/c++/4.3/cstdio" 3
using ::feof;
# 106 "/usr/include/c++/4.3/cstdio" 3
using ::ferror;
# 107 "/usr/include/c++/4.3/cstdio" 3
using ::fflush;
# 108 "/usr/include/c++/4.3/cstdio" 3
using ::fgetc;
# 109 "/usr/include/c++/4.3/cstdio" 3
using ::fgetpos;
# 110 "/usr/include/c++/4.3/cstdio" 3
using ::fgets;
# 111 "/usr/include/c++/4.3/cstdio" 3
using ::fopen;
# 112 "/usr/include/c++/4.3/cstdio" 3
using ::fprintf;
# 113 "/usr/include/c++/4.3/cstdio" 3
using ::fputc;
# 114 "/usr/include/c++/4.3/cstdio" 3
using ::fputs;
# 115 "/usr/include/c++/4.3/cstdio" 3
using ::fread;
# 116 "/usr/include/c++/4.3/cstdio" 3
using ::freopen;
# 117 "/usr/include/c++/4.3/cstdio" 3
using ::fscanf;
# 118 "/usr/include/c++/4.3/cstdio" 3
using ::fseek;
# 119 "/usr/include/c++/4.3/cstdio" 3
using ::fsetpos;
# 120 "/usr/include/c++/4.3/cstdio" 3
using ::ftell;
# 121 "/usr/include/c++/4.3/cstdio" 3
using ::fwrite;
# 122 "/usr/include/c++/4.3/cstdio" 3
using ::getc;
# 123 "/usr/include/c++/4.3/cstdio" 3
using ::getchar;
# 124 "/usr/include/c++/4.3/cstdio" 3
using ::gets;
# 125 "/usr/include/c++/4.3/cstdio" 3
using ::perror;
# 126 "/usr/include/c++/4.3/cstdio" 3
using ::printf;
# 127 "/usr/include/c++/4.3/cstdio" 3
using ::putc;
# 128 "/usr/include/c++/4.3/cstdio" 3
using ::putchar;
# 129 "/usr/include/c++/4.3/cstdio" 3
using ::puts;
# 130 "/usr/include/c++/4.3/cstdio" 3
using ::remove;
# 131 "/usr/include/c++/4.3/cstdio" 3
using ::rename;
# 132 "/usr/include/c++/4.3/cstdio" 3
using ::rewind;
# 133 "/usr/include/c++/4.3/cstdio" 3
using ::scanf;
# 134 "/usr/include/c++/4.3/cstdio" 3
using ::setbuf;
# 135 "/usr/include/c++/4.3/cstdio" 3
using ::setvbuf;
# 136 "/usr/include/c++/4.3/cstdio" 3
using ::sprintf;
# 137 "/usr/include/c++/4.3/cstdio" 3
using ::sscanf;
# 138 "/usr/include/c++/4.3/cstdio" 3
using ::tmpfile;
# 139 "/usr/include/c++/4.3/cstdio" 3
using ::tmpnam;
# 140 "/usr/include/c++/4.3/cstdio" 3
using ::ungetc;
# 141 "/usr/include/c++/4.3/cstdio" 3
using ::vfprintf;
# 142 "/usr/include/c++/4.3/cstdio" 3
using ::vprintf;
# 143 "/usr/include/c++/4.3/cstdio" 3
using ::vsprintf;
# 145 "/usr/include/c++/4.3/cstdio" 3
}
# 155 "/usr/include/c++/4.3/cstdio" 3
namespace __gnu_cxx __attribute__((visibility("default"))) {
# 170 "/usr/include/c++/4.3/cstdio" 3
using ::snprintf;
# 171 "/usr/include/c++/4.3/cstdio" 3
using ::vfscanf;
# 172 "/usr/include/c++/4.3/cstdio" 3
using ::vscanf;
# 173 "/usr/include/c++/4.3/cstdio" 3
using ::vsnprintf;
# 174 "/usr/include/c++/4.3/cstdio" 3
using ::vsscanf;
# 177 "/usr/include/c++/4.3/cstdio" 3
}
# 179 "/usr/include/c++/4.3/cstdio" 3
namespace std __attribute__((visibility("default"))) {
# 181 "/usr/include/c++/4.3/cstdio" 3
using __gnu_cxx::snprintf;
# 182 "/usr/include/c++/4.3/cstdio" 3
using __gnu_cxx::vfscanf;
# 183 "/usr/include/c++/4.3/cstdio" 3
using __gnu_cxx::vscanf;
# 184 "/usr/include/c++/4.3/cstdio" 3
using __gnu_cxx::vsnprintf;
# 185 "/usr/include/c++/4.3/cstdio" 3
using __gnu_cxx::vsscanf;
# 187 "/usr/include/c++/4.3/cstdio" 3
}
# 147 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned GLenum; }
# 148 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned char GLboolean; }
# 149 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned GLbitfield; }
# 150 "/usr/include/GL/gl.h" 3
extern "C" { typedef void GLvoid; }
# 151 "/usr/include/GL/gl.h" 3
extern "C" { typedef signed char GLbyte; }
# 152 "/usr/include/GL/gl.h" 3
extern "C" { typedef short GLshort; }
# 153 "/usr/include/GL/gl.h" 3
extern "C" { typedef int GLint; }
# 154 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned char GLubyte; }
# 155 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned short GLushort; }
# 156 "/usr/include/GL/gl.h" 3
extern "C" { typedef unsigned GLuint; }
# 157 "/usr/include/GL/gl.h" 3
extern "C" { typedef int GLsizei; }
# 158 "/usr/include/GL/gl.h" 3
extern "C" { typedef float GLfloat; }
# 159 "/usr/include/GL/gl.h" 3
extern "C" { typedef float GLclampf; }
# 160 "/usr/include/GL/gl.h" 3
extern "C" { typedef double GLdouble; }
# 161 "/usr/include/GL/gl.h" 3
extern "C" { typedef double GLclampd; }
# 774 "/usr/include/GL/gl.h" 3
extern "C" void glClearIndex(GLfloat) __attribute__((visibility("default")));
# 776 "/usr/include/GL/gl.h" 3
extern "C" void glClearColor(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((visibility("default")));
# 778 "/usr/include/GL/gl.h" 3
extern "C" void glClear(GLbitfield) __attribute__((visibility("default")));
# 780 "/usr/include/GL/gl.h" 3
extern "C" void glIndexMask(GLuint) __attribute__((visibility("default")));
# 782 "/usr/include/GL/gl.h" 3
extern "C" void glColorMask(GLboolean, GLboolean, GLboolean, GLboolean) __attribute__((visibility("default")));
# 784 "/usr/include/GL/gl.h" 3
extern "C" void glAlphaFunc(GLenum, GLclampf) __attribute__((visibility("default")));
# 786 "/usr/include/GL/gl.h" 3
extern "C" void glBlendFunc(GLenum, GLenum) __attribute__((visibility("default")));
# 788 "/usr/include/GL/gl.h" 3
extern "C" void glLogicOp(GLenum) __attribute__((visibility("default")));
# 790 "/usr/include/GL/gl.h" 3
extern "C" void glCullFace(GLenum) __attribute__((visibility("default")));
# 792 "/usr/include/GL/gl.h" 3
extern "C" void glFrontFace(GLenum) __attribute__((visibility("default")));
# 794 "/usr/include/GL/gl.h" 3
extern "C" void glPointSize(GLfloat) __attribute__((visibility("default")));
# 796 "/usr/include/GL/gl.h" 3
extern "C" void glLineWidth(GLfloat) __attribute__((visibility("default")));
# 798 "/usr/include/GL/gl.h" 3
extern "C" void glLineStipple(GLint, GLushort) __attribute__((visibility("default")));
# 800 "/usr/include/GL/gl.h" 3
extern "C" void glPolygonMode(GLenum, GLenum) __attribute__((visibility("default")));
# 802 "/usr/include/GL/gl.h" 3
extern "C" void glPolygonOffset(GLfloat, GLfloat) __attribute__((visibility("default")));
# 804 "/usr/include/GL/gl.h" 3
extern "C" void glPolygonStipple(const GLubyte *) __attribute__((visibility("default")));
# 806 "/usr/include/GL/gl.h" 3
extern "C" void glGetPolygonStipple(GLubyte *) __attribute__((visibility("default")));
# 808 "/usr/include/GL/gl.h" 3
extern "C" void glEdgeFlag(GLboolean) __attribute__((visibility("default")));
# 810 "/usr/include/GL/gl.h" 3
extern "C" void glEdgeFlagv(const GLboolean *) __attribute__((visibility("default")));
# 812 "/usr/include/GL/gl.h" 3
extern "C" void glScissor(GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 814 "/usr/include/GL/gl.h" 3
extern "C" void glClipPlane(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 816 "/usr/include/GL/gl.h" 3
extern "C" void glGetClipPlane(GLenum, GLdouble *) __attribute__((visibility("default")));
# 818 "/usr/include/GL/gl.h" 3
extern "C" void glDrawBuffer(GLenum) __attribute__((visibility("default")));
# 820 "/usr/include/GL/gl.h" 3
extern "C" void glReadBuffer(GLenum) __attribute__((visibility("default")));
# 822 "/usr/include/GL/gl.h" 3
extern "C" void glEnable(GLenum) __attribute__((visibility("default")));
# 824 "/usr/include/GL/gl.h" 3
extern "C" void glDisable(GLenum) __attribute__((visibility("default")));
# 826 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glIsEnabled(GLenum) __attribute__((visibility("default")));
# 829 "/usr/include/GL/gl.h" 3
extern "C" void glEnableClientState(GLenum) __attribute__((visibility("default")));
# 831 "/usr/include/GL/gl.h" 3
extern "C" void glDisableClientState(GLenum) __attribute__((visibility("default")));
# 834 "/usr/include/GL/gl.h" 3
extern "C" void glGetBooleanv(GLenum, GLboolean *) __attribute__((visibility("default")));
# 836 "/usr/include/GL/gl.h" 3
extern "C" void glGetDoublev(GLenum, GLdouble *) __attribute__((visibility("default")));
# 838 "/usr/include/GL/gl.h" 3
extern "C" void glGetFloatv(GLenum, GLfloat *) __attribute__((visibility("default")));
# 840 "/usr/include/GL/gl.h" 3
extern "C" void glGetIntegerv(GLenum, GLint *) __attribute__((visibility("default")));
# 843 "/usr/include/GL/gl.h" 3
extern "C" void glPushAttrib(GLbitfield) __attribute__((visibility("default")));
# 845 "/usr/include/GL/gl.h" 3
extern "C" void glPopAttrib() __attribute__((visibility("default")));
# 848 "/usr/include/GL/gl.h" 3
extern "C" void glPushClientAttrib(GLbitfield) __attribute__((visibility("default")));
# 850 "/usr/include/GL/gl.h" 3
extern "C" void glPopClientAttrib() __attribute__((visibility("default")));
# 853 "/usr/include/GL/gl.h" 3
extern "C" GLint glRenderMode(GLenum) __attribute__((visibility("default")));
# 855 "/usr/include/GL/gl.h" 3
extern "C" GLenum glGetError() __attribute__((visibility("default")));
# 857 "/usr/include/GL/gl.h" 3
extern "C" const GLubyte *glGetString(GLenum) __attribute__((visibility("default")));
# 859 "/usr/include/GL/gl.h" 3
extern "C" void glFinish() __attribute__((visibility("default")));
# 861 "/usr/include/GL/gl.h" 3
extern "C" void glFlush() __attribute__((visibility("default")));
# 863 "/usr/include/GL/gl.h" 3
extern "C" void glHint(GLenum, GLenum) __attribute__((visibility("default")));
# 870 "/usr/include/GL/gl.h" 3
extern "C" void glClearDepth(GLclampd) __attribute__((visibility("default")));
# 872 "/usr/include/GL/gl.h" 3
extern "C" void glDepthFunc(GLenum) __attribute__((visibility("default")));
# 874 "/usr/include/GL/gl.h" 3
extern "C" void glDepthMask(GLboolean) __attribute__((visibility("default")));
# 876 "/usr/include/GL/gl.h" 3
extern "C" void glDepthRange(GLclampd, GLclampd) __attribute__((visibility("default")));
# 883 "/usr/include/GL/gl.h" 3
extern "C" void glClearAccum(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 885 "/usr/include/GL/gl.h" 3
extern "C" void glAccum(GLenum, GLfloat) __attribute__((visibility("default")));
# 892 "/usr/include/GL/gl.h" 3
extern "C" void glMatrixMode(GLenum) __attribute__((visibility("default")));
# 894 "/usr/include/GL/gl.h" 3
extern "C" void glOrtho(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 898 "/usr/include/GL/gl.h" 3
extern "C" void glFrustum(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 902 "/usr/include/GL/gl.h" 3
extern "C" void glViewport(GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 905 "/usr/include/GL/gl.h" 3
extern "C" void glPushMatrix() __attribute__((visibility("default")));
# 907 "/usr/include/GL/gl.h" 3
extern "C" void glPopMatrix() __attribute__((visibility("default")));
# 909 "/usr/include/GL/gl.h" 3
extern "C" void glLoadIdentity() __attribute__((visibility("default")));
# 911 "/usr/include/GL/gl.h" 3
extern "C" void glLoadMatrixd(const GLdouble *) __attribute__((visibility("default")));
# 912 "/usr/include/GL/gl.h" 3
extern "C" void glLoadMatrixf(const GLfloat *) __attribute__((visibility("default")));
# 914 "/usr/include/GL/gl.h" 3
extern "C" void glMultMatrixd(const GLdouble *) __attribute__((visibility("default")));
# 915 "/usr/include/GL/gl.h" 3
extern "C" void glMultMatrixf(const GLfloat *) __attribute__((visibility("default")));
# 917 "/usr/include/GL/gl.h" 3
extern "C" void glRotated(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 919 "/usr/include/GL/gl.h" 3
extern "C" void glRotatef(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 922 "/usr/include/GL/gl.h" 3
extern "C" void glScaled(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 923 "/usr/include/GL/gl.h" 3
extern "C" void glScalef(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 925 "/usr/include/GL/gl.h" 3
extern "C" void glTranslated(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 926 "/usr/include/GL/gl.h" 3
extern "C" void glTranslatef(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 933 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glIsList(GLuint) __attribute__((visibility("default")));
# 935 "/usr/include/GL/gl.h" 3
extern "C" void glDeleteLists(GLuint, GLsizei) __attribute__((visibility("default")));
# 937 "/usr/include/GL/gl.h" 3
extern "C" GLuint glGenLists(GLsizei) __attribute__((visibility("default")));
# 939 "/usr/include/GL/gl.h" 3
extern "C" void glNewList(GLuint, GLenum) __attribute__((visibility("default")));
# 941 "/usr/include/GL/gl.h" 3
extern "C" void glEndList() __attribute__((visibility("default")));
# 943 "/usr/include/GL/gl.h" 3
extern "C" void glCallList(GLuint) __attribute__((visibility("default")));
# 945 "/usr/include/GL/gl.h" 3
extern "C" void glCallLists(GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 948 "/usr/include/GL/gl.h" 3
extern "C" void glListBase(GLuint) __attribute__((visibility("default")));
# 955 "/usr/include/GL/gl.h" 3
extern "C" void glBegin(GLenum) __attribute__((visibility("default")));
# 957 "/usr/include/GL/gl.h" 3
extern "C" void glEnd() __attribute__((visibility("default")));
# 960 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 961 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 962 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2i(GLint, GLint) __attribute__((visibility("default")));
# 963 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2s(GLshort, GLshort) __attribute__((visibility("default")));
# 965 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 966 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 967 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 968 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 970 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 971 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 972 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 973 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 975 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2dv(const GLdouble *) __attribute__((visibility("default")));
# 976 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2fv(const GLfloat *) __attribute__((visibility("default")));
# 977 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2iv(const GLint *) __attribute__((visibility("default")));
# 978 "/usr/include/GL/gl.h" 3
extern "C" void glVertex2sv(const GLshort *) __attribute__((visibility("default")));
# 980 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3dv(const GLdouble *) __attribute__((visibility("default")));
# 981 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3fv(const GLfloat *) __attribute__((visibility("default")));
# 982 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3iv(const GLint *) __attribute__((visibility("default")));
# 983 "/usr/include/GL/gl.h" 3
extern "C" void glVertex3sv(const GLshort *) __attribute__((visibility("default")));
# 985 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4dv(const GLdouble *) __attribute__((visibility("default")));
# 986 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4fv(const GLfloat *) __attribute__((visibility("default")));
# 987 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4iv(const GLint *) __attribute__((visibility("default")));
# 988 "/usr/include/GL/gl.h" 3
extern "C" void glVertex4sv(const GLshort *) __attribute__((visibility("default")));
# 991 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3b(GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
# 992 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 993 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 994 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 995 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 997 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3bv(const GLbyte *) __attribute__((visibility("default")));
# 998 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3dv(const GLdouble *) __attribute__((visibility("default")));
# 999 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3fv(const GLfloat *) __attribute__((visibility("default")));
# 1000 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3iv(const GLint *) __attribute__((visibility("default")));
# 1001 "/usr/include/GL/gl.h" 3
extern "C" void glNormal3sv(const GLshort *) __attribute__((visibility("default")));
# 1004 "/usr/include/GL/gl.h" 3
extern "C" void glIndexd(GLdouble) __attribute__((visibility("default")));
# 1005 "/usr/include/GL/gl.h" 3
extern "C" void glIndexf(GLfloat) __attribute__((visibility("default")));
# 1006 "/usr/include/GL/gl.h" 3
extern "C" void glIndexi(GLint) __attribute__((visibility("default")));
# 1007 "/usr/include/GL/gl.h" 3
extern "C" void glIndexs(GLshort) __attribute__((visibility("default")));
# 1008 "/usr/include/GL/gl.h" 3
extern "C" void glIndexub(GLubyte) __attribute__((visibility("default")));
# 1010 "/usr/include/GL/gl.h" 3
extern "C" void glIndexdv(const GLdouble *) __attribute__((visibility("default")));
# 1011 "/usr/include/GL/gl.h" 3
extern "C" void glIndexfv(const GLfloat *) __attribute__((visibility("default")));
# 1012 "/usr/include/GL/gl.h" 3
extern "C" void glIndexiv(const GLint *) __attribute__((visibility("default")));
# 1013 "/usr/include/GL/gl.h" 3
extern "C" void glIndexsv(const GLshort *) __attribute__((visibility("default")));
# 1014 "/usr/include/GL/gl.h" 3
extern "C" void glIndexubv(const GLubyte *) __attribute__((visibility("default")));
# 1016 "/usr/include/GL/gl.h" 3
extern "C" void glColor3b(GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
# 1017 "/usr/include/GL/gl.h" 3
extern "C" void glColor3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1018 "/usr/include/GL/gl.h" 3
extern "C" void glColor3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1019 "/usr/include/GL/gl.h" 3
extern "C" void glColor3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 1020 "/usr/include/GL/gl.h" 3
extern "C" void glColor3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1021 "/usr/include/GL/gl.h" 3
extern "C" void glColor3ub(GLubyte, GLubyte, GLubyte) __attribute__((visibility("default")));
# 1022 "/usr/include/GL/gl.h" 3
extern "C" void glColor3ui(GLuint, GLuint, GLuint) __attribute__((visibility("default")));
# 1023 "/usr/include/GL/gl.h" 3
extern "C" void glColor3us(GLushort, GLushort, GLushort) __attribute__((visibility("default")));
# 1025 "/usr/include/GL/gl.h" 3
extern "C" void glColor4b(GLbyte, GLbyte, GLbyte, GLbyte) __attribute__((visibility("default")));
# 1027 "/usr/include/GL/gl.h" 3
extern "C" void glColor4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1029 "/usr/include/GL/gl.h" 3
extern "C" void glColor4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1031 "/usr/include/GL/gl.h" 3
extern "C" void glColor4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1033 "/usr/include/GL/gl.h" 3
extern "C" void glColor4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1035 "/usr/include/GL/gl.h" 3
extern "C" void glColor4ub(GLubyte, GLubyte, GLubyte, GLubyte) __attribute__((visibility("default")));
# 1037 "/usr/include/GL/gl.h" 3
extern "C" void glColor4ui(GLuint, GLuint, GLuint, GLuint) __attribute__((visibility("default")));
# 1039 "/usr/include/GL/gl.h" 3
extern "C" void glColor4us(GLushort, GLushort, GLushort, GLushort) __attribute__((visibility("default")));
# 1043 "/usr/include/GL/gl.h" 3
extern "C" void glColor3bv(const GLbyte *) __attribute__((visibility("default")));
# 1044 "/usr/include/GL/gl.h" 3
extern "C" void glColor3dv(const GLdouble *) __attribute__((visibility("default")));
# 1045 "/usr/include/GL/gl.h" 3
extern "C" void glColor3fv(const GLfloat *) __attribute__((visibility("default")));
# 1046 "/usr/include/GL/gl.h" 3
extern "C" void glColor3iv(const GLint *) __attribute__((visibility("default")));
# 1047 "/usr/include/GL/gl.h" 3
extern "C" void glColor3sv(const GLshort *) __attribute__((visibility("default")));
# 1048 "/usr/include/GL/gl.h" 3
extern "C" void glColor3ubv(const GLubyte *) __attribute__((visibility("default")));
# 1049 "/usr/include/GL/gl.h" 3
extern "C" void glColor3uiv(const GLuint *) __attribute__((visibility("default")));
# 1050 "/usr/include/GL/gl.h" 3
extern "C" void glColor3usv(const GLushort *) __attribute__((visibility("default")));
# 1052 "/usr/include/GL/gl.h" 3
extern "C" void glColor4bv(const GLbyte *) __attribute__((visibility("default")));
# 1053 "/usr/include/GL/gl.h" 3
extern "C" void glColor4dv(const GLdouble *) __attribute__((visibility("default")));
# 1054 "/usr/include/GL/gl.h" 3
extern "C" void glColor4fv(const GLfloat *) __attribute__((visibility("default")));
# 1055 "/usr/include/GL/gl.h" 3
extern "C" void glColor4iv(const GLint *) __attribute__((visibility("default")));
# 1056 "/usr/include/GL/gl.h" 3
extern "C" void glColor4sv(const GLshort *) __attribute__((visibility("default")));
# 1057 "/usr/include/GL/gl.h" 3
extern "C" void glColor4ubv(const GLubyte *) __attribute__((visibility("default")));
# 1058 "/usr/include/GL/gl.h" 3
extern "C" void glColor4uiv(const GLuint *) __attribute__((visibility("default")));
# 1059 "/usr/include/GL/gl.h" 3
extern "C" void glColor4usv(const GLushort *) __attribute__((visibility("default")));
# 1062 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1d(GLdouble) __attribute__((visibility("default")));
# 1063 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1f(GLfloat) __attribute__((visibility("default")));
# 1064 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1i(GLint) __attribute__((visibility("default")));
# 1065 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1s(GLshort) __attribute__((visibility("default")));
# 1067 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 1068 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1069 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2i(GLint, GLint) __attribute__((visibility("default")));
# 1070 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2s(GLshort, GLshort) __attribute__((visibility("default")));
# 1072 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1073 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1074 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 1075 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1077 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1078 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1079 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1080 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1082 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1dv(const GLdouble *) __attribute__((visibility("default")));
# 1083 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1fv(const GLfloat *) __attribute__((visibility("default")));
# 1084 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1iv(const GLint *) __attribute__((visibility("default")));
# 1085 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord1sv(const GLshort *) __attribute__((visibility("default")));
# 1087 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2dv(const GLdouble *) __attribute__((visibility("default")));
# 1088 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2fv(const GLfloat *) __attribute__((visibility("default")));
# 1089 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2iv(const GLint *) __attribute__((visibility("default")));
# 1090 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord2sv(const GLshort *) __attribute__((visibility("default")));
# 1092 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3dv(const GLdouble *) __attribute__((visibility("default")));
# 1093 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3fv(const GLfloat *) __attribute__((visibility("default")));
# 1094 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3iv(const GLint *) __attribute__((visibility("default")));
# 1095 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord3sv(const GLshort *) __attribute__((visibility("default")));
# 1097 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4dv(const GLdouble *) __attribute__((visibility("default")));
# 1098 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4fv(const GLfloat *) __attribute__((visibility("default")));
# 1099 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4iv(const GLint *) __attribute__((visibility("default")));
# 1100 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoord4sv(const GLshort *) __attribute__((visibility("default")));
# 1103 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 1104 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1105 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2i(GLint, GLint) __attribute__((visibility("default")));
# 1106 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2s(GLshort, GLshort) __attribute__((visibility("default")));
# 1108 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3d(GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1109 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3f(GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1110 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3i(GLint, GLint, GLint) __attribute__((visibility("default")));
# 1111 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3s(GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1113 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4d(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1114 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4f(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1115 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4i(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1116 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4s(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1118 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2dv(const GLdouble *) __attribute__((visibility("default")));
# 1119 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2fv(const GLfloat *) __attribute__((visibility("default")));
# 1120 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2iv(const GLint *) __attribute__((visibility("default")));
# 1121 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos2sv(const GLshort *) __attribute__((visibility("default")));
# 1123 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3dv(const GLdouble *) __attribute__((visibility("default")));
# 1124 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3fv(const GLfloat *) __attribute__((visibility("default")));
# 1125 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3iv(const GLint *) __attribute__((visibility("default")));
# 1126 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos3sv(const GLshort *) __attribute__((visibility("default")));
# 1128 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4dv(const GLdouble *) __attribute__((visibility("default")));
# 1129 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4fv(const GLfloat *) __attribute__((visibility("default")));
# 1130 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4iv(const GLint *) __attribute__((visibility("default")));
# 1131 "/usr/include/GL/gl.h" 3
extern "C" void glRasterPos4sv(const GLshort *) __attribute__((visibility("default")));
# 1134 "/usr/include/GL/gl.h" 3
extern "C" void glRectd(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1135 "/usr/include/GL/gl.h" 3
extern "C" void glRectf(GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1136 "/usr/include/GL/gl.h" 3
extern "C" void glRecti(GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1137 "/usr/include/GL/gl.h" 3
extern "C" void glRects(GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1140 "/usr/include/GL/gl.h" 3
extern "C" void glRectdv(const GLdouble *, const GLdouble *) __attribute__((visibility("default")));
# 1141 "/usr/include/GL/gl.h" 3
extern "C" void glRectfv(const GLfloat *, const GLfloat *) __attribute__((visibility("default")));
# 1142 "/usr/include/GL/gl.h" 3
extern "C" void glRectiv(const GLint *, const GLint *) __attribute__((visibility("default")));
# 1143 "/usr/include/GL/gl.h" 3
extern "C" void glRectsv(const GLshort *, const GLshort *) __attribute__((visibility("default")));
# 1150 "/usr/include/GL/gl.h" 3
extern "C" void glVertexPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1153 "/usr/include/GL/gl.h" 3
extern "C" void glNormalPointer(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1156 "/usr/include/GL/gl.h" 3
extern "C" void glColorPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1159 "/usr/include/GL/gl.h" 3
extern "C" void glIndexPointer(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1162 "/usr/include/GL/gl.h" 3
extern "C" void glTexCoordPointer(GLint, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1165 "/usr/include/GL/gl.h" 3
extern "C" void glEdgeFlagPointer(GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1167 "/usr/include/GL/gl.h" 3
extern "C" void glGetPointerv(GLenum, GLvoid **) __attribute__((visibility("default")));
# 1169 "/usr/include/GL/gl.h" 3
extern "C" void glArrayElement(GLint) __attribute__((visibility("default")));
# 1171 "/usr/include/GL/gl.h" 3
extern "C" void glDrawArrays(GLenum, GLint, GLsizei) __attribute__((visibility("default")));
# 1173 "/usr/include/GL/gl.h" 3
extern "C" void glDrawElements(GLenum, GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1176 "/usr/include/GL/gl.h" 3
extern "C" void glInterleavedArrays(GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1183 "/usr/include/GL/gl.h" 3
extern "C" void glShadeModel(GLenum) __attribute__((visibility("default")));
# 1185 "/usr/include/GL/gl.h" 3
extern "C" void glLightf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1186 "/usr/include/GL/gl.h" 3
extern "C" void glLighti(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1187 "/usr/include/GL/gl.h" 3
extern "C" void glLightfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1189 "/usr/include/GL/gl.h" 3
extern "C" void glLightiv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1192 "/usr/include/GL/gl.h" 3
extern "C" void glGetLightfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1194 "/usr/include/GL/gl.h" 3
extern "C" void glGetLightiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1197 "/usr/include/GL/gl.h" 3
extern "C" void glLightModelf(GLenum, GLfloat) __attribute__((visibility("default")));
# 1198 "/usr/include/GL/gl.h" 3
extern "C" void glLightModeli(GLenum, GLint) __attribute__((visibility("default")));
# 1199 "/usr/include/GL/gl.h" 3
extern "C" void glLightModelfv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1200 "/usr/include/GL/gl.h" 3
extern "C" void glLightModeliv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1202 "/usr/include/GL/gl.h" 3
extern "C" void glMaterialf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1203 "/usr/include/GL/gl.h" 3
extern "C" void glMateriali(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1204 "/usr/include/GL/gl.h" 3
extern "C" void glMaterialfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1205 "/usr/include/GL/gl.h" 3
extern "C" void glMaterialiv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1207 "/usr/include/GL/gl.h" 3
extern "C" void glGetMaterialfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1208 "/usr/include/GL/gl.h" 3
extern "C" void glGetMaterialiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1210 "/usr/include/GL/gl.h" 3
extern "C" void glColorMaterial(GLenum, GLenum) __attribute__((visibility("default")));
# 1217 "/usr/include/GL/gl.h" 3
extern "C" void glPixelZoom(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1219 "/usr/include/GL/gl.h" 3
extern "C" void glPixelStoref(GLenum, GLfloat) __attribute__((visibility("default")));
# 1220 "/usr/include/GL/gl.h" 3
extern "C" void glPixelStorei(GLenum, GLint) __attribute__((visibility("default")));
# 1222 "/usr/include/GL/gl.h" 3
extern "C" void glPixelTransferf(GLenum, GLfloat) __attribute__((visibility("default")));
# 1223 "/usr/include/GL/gl.h" 3
extern "C" void glPixelTransferi(GLenum, GLint) __attribute__((visibility("default")));
# 1225 "/usr/include/GL/gl.h" 3
extern "C" void glPixelMapfv(GLenum, GLsizei, const GLfloat *) __attribute__((visibility("default")));
# 1227 "/usr/include/GL/gl.h" 3
extern "C" void glPixelMapuiv(GLenum, GLsizei, const GLuint *) __attribute__((visibility("default")));
# 1229 "/usr/include/GL/gl.h" 3
extern "C" void glPixelMapusv(GLenum, GLsizei, const GLushort *) __attribute__((visibility("default")));
# 1232 "/usr/include/GL/gl.h" 3
extern "C" void glGetPixelMapfv(GLenum, GLfloat *) __attribute__((visibility("default")));
# 1233 "/usr/include/GL/gl.h" 3
extern "C" void glGetPixelMapuiv(GLenum, GLuint *) __attribute__((visibility("default")));
# 1234 "/usr/include/GL/gl.h" 3
extern "C" void glGetPixelMapusv(GLenum, GLushort *) __attribute__((visibility("default")));
# 1236 "/usr/include/GL/gl.h" 3
extern "C" void glBitmap(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *) __attribute__((visibility("default")));
# 1241 "/usr/include/GL/gl.h" 3
extern "C" void glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1246 "/usr/include/GL/gl.h" 3
extern "C" void glDrawPixels(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1250 "/usr/include/GL/gl.h" 3
extern "C" void glCopyPixels(GLint, GLint, GLsizei, GLsizei, GLenum) __attribute__((visibility("default")));
# 1258 "/usr/include/GL/gl.h" 3
extern "C" void glStencilFunc(GLenum, GLint, GLuint) __attribute__((visibility("default")));
# 1260 "/usr/include/GL/gl.h" 3
extern "C" void glStencilMask(GLuint) __attribute__((visibility("default")));
# 1262 "/usr/include/GL/gl.h" 3
extern "C" void glStencilOp(GLenum, GLenum, GLenum) __attribute__((visibility("default")));
# 1264 "/usr/include/GL/gl.h" 3
extern "C" void glClearStencil(GLint) __attribute__((visibility("default")));
# 1272 "/usr/include/GL/gl.h" 3
extern "C" void glTexGend(GLenum, GLenum, GLdouble) __attribute__((visibility("default")));
# 1273 "/usr/include/GL/gl.h" 3
extern "C" void glTexGenf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1274 "/usr/include/GL/gl.h" 3
extern "C" void glTexGeni(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1276 "/usr/include/GL/gl.h" 3
extern "C" void glTexGendv(GLenum, GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1277 "/usr/include/GL/gl.h" 3
extern "C" void glTexGenfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1278 "/usr/include/GL/gl.h" 3
extern "C" void glTexGeniv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1280 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexGendv(GLenum, GLenum, GLdouble *) __attribute__((visibility("default")));
# 1281 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexGenfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1282 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexGeniv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1285 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnvf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1286 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnvi(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1288 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnvfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1289 "/usr/include/GL/gl.h" 3
extern "C" void glTexEnviv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1291 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexEnvfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1292 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexEnviv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1295 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameterf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1296 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameteri(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1298 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1300 "/usr/include/GL/gl.h" 3
extern "C" void glTexParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1303 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1305 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1308 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1310 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *) __attribute__((visibility("default")));
# 1314 "/usr/include/GL/gl.h" 3
extern "C" void glTexImage1D(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1320 "/usr/include/GL/gl.h" 3
extern "C" void glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1326 "/usr/include/GL/gl.h" 3
extern "C" void glGetTexImage(GLenum, GLint, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1333 "/usr/include/GL/gl.h" 3
extern "C" void glGenTextures(GLsizei, GLuint *) __attribute__((visibility("default")));
# 1335 "/usr/include/GL/gl.h" 3
extern "C" void glDeleteTextures(GLsizei, const GLuint *) __attribute__((visibility("default")));
# 1337 "/usr/include/GL/gl.h" 3
extern "C" void glBindTexture(GLenum, GLuint) __attribute__((visibility("default")));
# 1339 "/usr/include/GL/gl.h" 3
extern "C" void glPrioritizeTextures(GLsizei, const GLuint *, const GLclampf *) __attribute__((visibility("default")));
# 1343 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glAreTexturesResident(GLsizei, const GLuint *, GLboolean *) __attribute__((visibility("default")));
# 1347 "/usr/include/GL/gl.h" 3
extern "C" GLboolean glIsTexture(GLuint) __attribute__((visibility("default")));
# 1350 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1356 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1363 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexImage1D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint) __attribute__((visibility("default")));
# 1369 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) __attribute__((visibility("default")));
# 1376 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage1D(GLenum, GLint, GLint, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1381 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1391 "/usr/include/GL/gl.h" 3
extern "C" void glMap1d(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *) __attribute__((visibility("default")));
# 1394 "/usr/include/GL/gl.h" 3
extern "C" void glMap1f(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *) __attribute__((visibility("default")));
# 1398 "/usr/include/GL/gl.h" 3
extern "C" void glMap2d(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *) __attribute__((visibility("default")));
# 1402 "/usr/include/GL/gl.h" 3
extern "C" void glMap2f(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *) __attribute__((visibility("default")));
# 1407 "/usr/include/GL/gl.h" 3
extern "C" void glGetMapdv(GLenum, GLenum, GLdouble *) __attribute__((visibility("default")));
# 1408 "/usr/include/GL/gl.h" 3
extern "C" void glGetMapfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1409 "/usr/include/GL/gl.h" 3
extern "C" void glGetMapiv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1411 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1d(GLdouble) __attribute__((visibility("default")));
# 1412 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1f(GLfloat) __attribute__((visibility("default")));
# 1414 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1dv(const GLdouble *) __attribute__((visibility("default")));
# 1415 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord1fv(const GLfloat *) __attribute__((visibility("default")));
# 1417 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2d(GLdouble, GLdouble) __attribute__((visibility("default")));
# 1418 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2f(GLfloat, GLfloat) __attribute__((visibility("default")));
# 1420 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2dv(const GLdouble *) __attribute__((visibility("default")));
# 1421 "/usr/include/GL/gl.h" 3
extern "C" void glEvalCoord2fv(const GLfloat *) __attribute__((visibility("default")));
# 1423 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid1d(GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1424 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid1f(GLint, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1426 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid2d(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1428 "/usr/include/GL/gl.h" 3
extern "C" void glMapGrid2f(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1431 "/usr/include/GL/gl.h" 3
extern "C" void glEvalPoint1(GLint) __attribute__((visibility("default")));
# 1433 "/usr/include/GL/gl.h" 3
extern "C" void glEvalPoint2(GLint, GLint) __attribute__((visibility("default")));
# 1435 "/usr/include/GL/gl.h" 3
extern "C" void glEvalMesh1(GLenum, GLint, GLint) __attribute__((visibility("default")));
# 1437 "/usr/include/GL/gl.h" 3
extern "C" void glEvalMesh2(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1444 "/usr/include/GL/gl.h" 3
extern "C" void glFogf(GLenum, GLfloat) __attribute__((visibility("default")));
# 1446 "/usr/include/GL/gl.h" 3
extern "C" void glFogi(GLenum, GLint) __attribute__((visibility("default")));
# 1448 "/usr/include/GL/gl.h" 3
extern "C" void glFogfv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1450 "/usr/include/GL/gl.h" 3
extern "C" void glFogiv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1457 "/usr/include/GL/gl.h" 3
extern "C" void glFeedbackBuffer(GLsizei, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1459 "/usr/include/GL/gl.h" 3
extern "C" void glPassThrough(GLfloat) __attribute__((visibility("default")));
# 1461 "/usr/include/GL/gl.h" 3
extern "C" void glSelectBuffer(GLsizei, GLuint *) __attribute__((visibility("default")));
# 1463 "/usr/include/GL/gl.h" 3
extern "C" void glInitNames() __attribute__((visibility("default")));
# 1465 "/usr/include/GL/gl.h" 3
extern "C" void glLoadName(GLuint) __attribute__((visibility("default")));
# 1467 "/usr/include/GL/gl.h" 3
extern "C" void glPushName(GLuint) __attribute__((visibility("default")));
# 1469 "/usr/include/GL/gl.h" 3
extern "C" void glPopName() __attribute__((visibility("default")));
# 1519 "/usr/include/GL/gl.h" 3
extern "C" void glDrawRangeElements(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1522 "/usr/include/GL/gl.h" 3
extern "C" void glTexImage3D(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1529 "/usr/include/GL/gl.h" 3
extern "C" void glTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1536 "/usr/include/GL/gl.h" 3
extern "C" void glCopyTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1542 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
# 1543 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE3DPROC)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 1544 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 1545 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 1629 "/usr/include/GL/gl.h" 3
extern "C" void glColorTable(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1633 "/usr/include/GL/gl.h" 3
extern "C" void glColorSubTable(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1638 "/usr/include/GL/gl.h" 3
extern "C" void glColorTableParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1641 "/usr/include/GL/gl.h" 3
extern "C" void glColorTableParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1644 "/usr/include/GL/gl.h" 3
extern "C" void glCopyColorSubTable(GLenum, GLsizei, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1647 "/usr/include/GL/gl.h" 3
extern "C" void glCopyColorTable(GLenum, GLenum, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1650 "/usr/include/GL/gl.h" 3
extern "C" void glGetColorTable(GLenum, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1653 "/usr/include/GL/gl.h" 3
extern "C" void glGetColorTableParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1656 "/usr/include/GL/gl.h" 3
extern "C" void glGetColorTableParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1659 "/usr/include/GL/gl.h" 3
extern "C" void glBlendEquation(GLenum) __attribute__((visibility("default")));
# 1661 "/usr/include/GL/gl.h" 3
extern "C" void glBlendColor(GLclampf, GLclampf, GLclampf, GLclampf) __attribute__((visibility("default")));
# 1664 "/usr/include/GL/gl.h" 3
extern "C" void glHistogram(GLenum, GLsizei, GLenum, GLboolean) __attribute__((visibility("default")));
# 1667 "/usr/include/GL/gl.h" 3
extern "C" void glResetHistogram(GLenum) __attribute__((visibility("default")));
# 1669 "/usr/include/GL/gl.h" 3
extern "C" void glGetHistogram(GLenum, GLboolean, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1673 "/usr/include/GL/gl.h" 3
extern "C" void glGetHistogramParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1676 "/usr/include/GL/gl.h" 3
extern "C" void glGetHistogramParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1679 "/usr/include/GL/gl.h" 3
extern "C" void glMinmax(GLenum, GLenum, GLboolean) __attribute__((visibility("default")));
# 1682 "/usr/include/GL/gl.h" 3
extern "C" void glResetMinmax(GLenum) __attribute__((visibility("default")));
# 1684 "/usr/include/GL/gl.h" 3
extern "C" void glGetMinmax(GLenum, GLboolean, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1688 "/usr/include/GL/gl.h" 3
extern "C" void glGetMinmaxParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1691 "/usr/include/GL/gl.h" 3
extern "C" void glGetMinmaxParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1694 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionFilter1D(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1698 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionFilter2D(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) __attribute__((visibility("default")));
# 1702 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameterf(GLenum, GLenum, GLfloat) __attribute__((visibility("default")));
# 1705 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameterfv(GLenum, GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1708 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameteri(GLenum, GLenum, GLint) __attribute__((visibility("default")));
# 1711 "/usr/include/GL/gl.h" 3
extern "C" void glConvolutionParameteriv(GLenum, GLenum, const GLint *) __attribute__((visibility("default")));
# 1714 "/usr/include/GL/gl.h" 3
extern "C" void glCopyConvolutionFilter1D(GLenum, GLenum, GLint, GLint, GLsizei) __attribute__((visibility("default")));
# 1717 "/usr/include/GL/gl.h" 3
extern "C" void glCopyConvolutionFilter2D(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei) __attribute__((visibility("default")));
# 1721 "/usr/include/GL/gl.h" 3
extern "C" void glGetConvolutionFilter(GLenum, GLenum, GLenum, GLvoid *) __attribute__((visibility("default")));
# 1724 "/usr/include/GL/gl.h" 3
extern "C" void glGetConvolutionParameterfv(GLenum, GLenum, GLfloat *) __attribute__((visibility("default")));
# 1727 "/usr/include/GL/gl.h" 3
extern "C" void glGetConvolutionParameteriv(GLenum, GLenum, GLint *) __attribute__((visibility("default")));
# 1730 "/usr/include/GL/gl.h" 3
extern "C" void glSeparableFilter2D(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *) __attribute__((visibility("default")));
# 1734 "/usr/include/GL/gl.h" 3
extern "C" void glGetSeparableFilter(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *) __attribute__((visibility("default")));
# 1737 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLBLENDCOLORPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
# 1738 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONPROC)(GLenum); }
# 1739 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 1740 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
# 1741 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
# 1742 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORTABLEPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 1743 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 1744 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 1745 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 1746 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOLORSUBTABLEPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 1747 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
# 1748 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 1749 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 1750 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFPROC)(GLenum, GLenum, GLfloat); }
# 1751 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
# 1752 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIPROC)(GLenum, GLenum, GLint); }
# 1753 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
# 1754 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 1755 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
# 1756 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 1757 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 1758 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 1759 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *); }
# 1760 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *); }
# 1761 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 1762 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 1763 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 1764 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 1765 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 1766 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 1767 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLHISTOGRAMPROC)(GLenum, GLsizei, GLenum, GLboolean); }
# 1768 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMINMAXPROC)(GLenum, GLenum, GLboolean); }
# 1769 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLRESETHISTOGRAMPROC)(GLenum); }
# 1770 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLRESETMINMAXPROC)(GLenum); }
# 1883 "/usr/include/GL/gl.h" 3
extern "C" void glActiveTexture(GLenum) __attribute__((visibility("default")));
# 1885 "/usr/include/GL/gl.h" 3
extern "C" void glClientActiveTexture(GLenum) __attribute__((visibility("default")));
# 1887 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexImage1D(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1889 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexImage2D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1891 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexImage3D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1893 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1895 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1897 "/usr/include/GL/gl.h" 3
extern "C" void glCompressedTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *) __attribute__((visibility("default")));
# 1899 "/usr/include/GL/gl.h" 3
extern "C" void glGetCompressedTexImage(GLenum, GLint, GLvoid *) __attribute__((visibility("default")));
# 1901 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1d(GLenum, GLdouble) __attribute__((visibility("default")));
# 1903 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1905 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1f(GLenum, GLfloat) __attribute__((visibility("default")));
# 1907 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1909 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1i(GLenum, GLint) __attribute__((visibility("default")));
# 1911 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1913 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1s(GLenum, GLshort) __attribute__((visibility("default")));
# 1915 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1917 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2d(GLenum, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1919 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1921 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2f(GLenum, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1923 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1925 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2i(GLenum, GLint, GLint) __attribute__((visibility("default")));
# 1927 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1929 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2s(GLenum, GLshort, GLshort) __attribute__((visibility("default")));
# 1931 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1933 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3d(GLenum, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1935 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1937 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3f(GLenum, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1939 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1941 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3i(GLenum, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1943 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1945 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3s(GLenum, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1947 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1949 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4d(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 1951 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4dv(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 1953 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4f(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 1955 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4fv(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 1957 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4i(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 1959 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4iv(GLenum, const GLint *) __attribute__((visibility("default")));
# 1961 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4s(GLenum, GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 1963 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4sv(GLenum, const GLshort *) __attribute__((visibility("default")));
# 1966 "/usr/include/GL/gl.h" 3
extern "C" void glLoadTransposeMatrixd(const GLdouble [16]) __attribute__((visibility("default")));
# 1968 "/usr/include/GL/gl.h" 3
extern "C" void glLoadTransposeMatrixf(const GLfloat [16]) __attribute__((visibility("default")));
# 1970 "/usr/include/GL/gl.h" 3
extern "C" void glMultTransposeMatrixd(const GLdouble [16]) __attribute__((visibility("default")));
# 1972 "/usr/include/GL/gl.h" 3
extern "C" void glMultTransposeMatrixf(const GLfloat [16]) __attribute__((visibility("default")));
# 1974 "/usr/include/GL/gl.h" 3
extern "C" void glSampleCoverage(GLclampf, GLboolean) __attribute__((visibility("default")));
# 1976 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLACTIVETEXTUREPROC)(GLenum); }
# 1977 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREPROC)(GLenum); }
# 1978 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DPROC)(GLenum, GLdouble); }
# 1979 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVPROC)(GLenum, const GLdouble *); }
# 1980 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FPROC)(GLenum, GLfloat); }
# 1981 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVPROC)(GLenum, const GLfloat *); }
# 1982 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IPROC)(GLenum, GLint); }
# 1983 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVPROC)(GLenum, const GLint *); }
# 1984 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SPROC)(GLenum, GLshort); }
# 1985 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVPROC)(GLenum, const GLshort *); }
# 1986 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DPROC)(GLenum, GLdouble, GLdouble); }
# 1987 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVPROC)(GLenum, const GLdouble *); }
# 1988 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FPROC)(GLenum, GLfloat, GLfloat); }
# 1989 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVPROC)(GLenum, const GLfloat *); }
# 1990 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IPROC)(GLenum, GLint, GLint); }
# 1991 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVPROC)(GLenum, const GLint *); }
# 1992 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SPROC)(GLenum, GLshort, GLshort); }
# 1993 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVPROC)(GLenum, const GLshort *); }
# 1994 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 1995 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVPROC)(GLenum, const GLdouble *); }
# 1996 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 1997 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVPROC)(GLenum, const GLfloat *); }
# 1998 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IPROC)(GLenum, GLint, GLint, GLint); }
# 1999 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVPROC)(GLenum, const GLint *); }
# 2000 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SPROC)(GLenum, GLshort, GLshort, GLshort); }
# 2001 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVPROC)(GLenum, const GLshort *); }
# 2002 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 2003 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVPROC)(GLenum, const GLdouble *); }
# 2004 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 2005 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVPROC)(GLenum, const GLfloat *); }
# 2006 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 2007 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVPROC)(GLenum, const GLint *); }
# 2008 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 2009 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVPROC)(GLenum, const GLshort *); }
# 2010 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFPROC)(const GLfloat *); }
# 2011 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDPROC)(const GLdouble *); }
# 2012 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFPROC)(const GLfloat *); }
# 2013 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDPROC)(const GLdouble *); }
# 2014 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEPROC)(GLclampf, GLboolean); }
# 2015 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 2016 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 2017 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
# 2018 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 2019 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 2020 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 2021 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum, GLint, void *); }
# 2066 "/usr/include/GL/gl.h" 3
extern "C" void glActiveTextureARB(GLenum) __attribute__((visibility("default")));
# 2067 "/usr/include/GL/gl.h" 3
extern "C" void glClientActiveTextureARB(GLenum) __attribute__((visibility("default")));
# 2068 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1dARB(GLenum, GLdouble) __attribute__((visibility("default")));
# 2069 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2070 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1fARB(GLenum, GLfloat) __attribute__((visibility("default")));
# 2071 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2072 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1iARB(GLenum, GLint) __attribute__((visibility("default")));
# 2073 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2074 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1sARB(GLenum, GLshort) __attribute__((visibility("default")));
# 2075 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord1svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2076 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2dARB(GLenum, GLdouble, GLdouble) __attribute__((visibility("default")));
# 2077 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2078 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2fARB(GLenum, GLfloat, GLfloat) __attribute__((visibility("default")));
# 2079 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2080 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2iARB(GLenum, GLint, GLint) __attribute__((visibility("default")));
# 2081 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2082 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2sARB(GLenum, GLshort, GLshort) __attribute__((visibility("default")));
# 2083 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord2svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2084 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3dARB(GLenum, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 2085 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2086 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3fARB(GLenum, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 2087 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2088 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3iARB(GLenum, GLint, GLint, GLint) __attribute__((visibility("default")));
# 2089 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2090 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3sARB(GLenum, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 2091 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord3svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2092 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4dARB(GLenum, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 2093 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4dvARB(GLenum, const GLdouble *) __attribute__((visibility("default")));
# 2094 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4fARB(GLenum, GLfloat, GLfloat, GLfloat, GLfloat) __attribute__((visibility("default")));
# 2095 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4fvARB(GLenum, const GLfloat *) __attribute__((visibility("default")));
# 2096 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4iARB(GLenum, GLint, GLint, GLint, GLint) __attribute__((visibility("default")));
# 2097 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4ivARB(GLenum, const GLint *) __attribute__((visibility("default")));
# 2098 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4sARB(GLenum, GLshort, GLshort, GLshort, GLshort) __attribute__((visibility("default")));
# 2099 "/usr/include/GL/gl.h" 3
extern "C" void glMultiTexCoord4svARB(GLenum, const GLshort *) __attribute__((visibility("default")));
# 2101 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLACTIVETEXTUREARBPROC)(GLenum); }
# 2102 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREARBPROC)(GLenum); }
# 2103 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DARBPROC)(GLenum, GLdouble); }
# 2104 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVARBPROC)(GLenum, const GLdouble *); }
# 2105 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FARBPROC)(GLenum, GLfloat); }
# 2106 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVARBPROC)(GLenum, const GLfloat *); }
# 2107 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IARBPROC)(GLenum, GLint); }
# 2108 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVARBPROC)(GLenum, const GLint *); }
# 2109 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SARBPROC)(GLenum, GLshort); }
# 2110 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVARBPROC)(GLenum, const GLshort *); }
# 2111 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DARBPROC)(GLenum, GLdouble, GLdouble); }
# 2112 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVARBPROC)(GLenum, const GLdouble *); }
# 2113 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FARBPROC)(GLenum, GLfloat, GLfloat); }
# 2114 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVARBPROC)(GLenum, const GLfloat *); }
# 2115 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IARBPROC)(GLenum, GLint, GLint); }
# 2116 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVARBPROC)(GLenum, const GLint *); }
# 2117 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SARBPROC)(GLenum, GLshort, GLshort); }
# 2118 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVARBPROC)(GLenum, const GLshort *); }
# 2119 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 2120 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVARBPROC)(GLenum, const GLdouble *); }
# 2121 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 2122 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVARBPROC)(GLenum, const GLfloat *); }
# 2123 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IARBPROC)(GLenum, GLint, GLint, GLint); }
# 2124 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVARBPROC)(GLenum, const GLint *); }
# 2125 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SARBPROC)(GLenum, GLshort, GLshort, GLshort); }
# 2126 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVARBPROC)(GLenum, const GLshort *); }
# 2127 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 2128 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVARBPROC)(GLenum, const GLdouble *); }
# 2129 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 2130 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVARBPROC)(GLenum, const GLfloat *); }
# 2131 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IARBPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 2132 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVARBPROC)(GLenum, const GLint *); }
# 2133 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SARBPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 2134 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVARBPROC)(GLenum, const GLshort *); }
# 3335 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef char GLchar; }
# 3340 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLintptr; }
# 3341 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLsizeiptr; }
# 3346 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLintptrARB; }
# 3347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef ptrdiff_t GLsizeiptrARB; }
# 3352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef char GLcharARB; }
# 3353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef unsigned GLhandleARB; }
# 3358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef unsigned short GLhalfARB; }
# 3362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef unsigned short GLhalfNV; }
# 3366 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef signed long long GLint64EXT; }
# 3367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef unsigned long long GLuint64EXT; }
# 3599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
# 3600 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFPROC)(GLfloat); }
# 3601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFVPROC)(const GLfloat *); }
# 3602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDPROC)(GLdouble); }
# 3603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDVPROC)(const GLdouble *); }
# 3604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERPROC)(GLenum, GLsizei, const GLvoid *); }
# 3605 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSPROC)(GLenum, GLint *, GLsizei *, GLsizei); }
# 3606 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSPROC)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei); }
# 3607 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFPROC)(GLenum, GLfloat); }
# 3608 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVPROC)(GLenum, const GLfloat *); }
# 3609 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERIPROC)(GLenum, GLint); }
# 3610 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERIVPROC)(GLenum, const GLint *); }
# 3611 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BPROC)(GLbyte, GLbyte, GLbyte); }
# 3612 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVPROC)(const GLbyte *); }
# 3613 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DPROC)(GLdouble, GLdouble, GLdouble); }
# 3614 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVPROC)(const GLdouble *); }
# 3615 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FPROC)(GLfloat, GLfloat, GLfloat); }
# 3616 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVPROC)(const GLfloat *); }
# 3617 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IPROC)(GLint, GLint, GLint); }
# 3618 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVPROC)(const GLint *); }
# 3619 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SPROC)(GLshort, GLshort, GLshort); }
# 3620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVPROC)(const GLshort *); }
# 3621 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBPROC)(GLubyte, GLubyte, GLubyte); }
# 3622 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVPROC)(const GLubyte *); }
# 3623 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIPROC)(GLuint, GLuint, GLuint); }
# 3624 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVPROC)(const GLuint *); }
# 3625 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USPROC)(GLushort, GLushort, GLushort); }
# 3626 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVPROC)(const GLushort *); }
# 3627 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 3628 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DPROC)(GLdouble, GLdouble); }
# 3629 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DVPROC)(const GLdouble *); }
# 3630 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FPROC)(GLfloat, GLfloat); }
# 3631 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FVPROC)(const GLfloat *); }
# 3632 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IPROC)(GLint, GLint); }
# 3633 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IVPROC)(const GLint *); }
# 3634 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SPROC)(GLshort, GLshort); }
# 3635 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SVPROC)(const GLshort *); }
# 3636 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DPROC)(GLdouble, GLdouble, GLdouble); }
# 3637 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DVPROC)(const GLdouble *); }
# 3638 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FPROC)(GLfloat, GLfloat, GLfloat); }
# 3639 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FVPROC)(const GLfloat *); }
# 3640 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IPROC)(GLint, GLint, GLint); }
# 3641 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IVPROC)(const GLint *); }
# 3642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SPROC)(GLshort, GLshort, GLshort); }
# 3643 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SVPROC)(const GLshort *); }
# 3669 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENQUERIESPROC)(GLsizei, GLuint *); }
# 3670 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEQUERIESPROC)(GLsizei, const GLuint *); }
# 3671 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISQUERYPROC)(GLuint); }
# 3672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINQUERYPROC)(GLenum, GLuint); }
# 3673 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDQUERYPROC)(GLenum); }
# 3674 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYIVPROC)(GLenum, GLenum, GLint *); }
# 3675 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVPROC)(GLuint, GLenum, GLint *); }
# 3676 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVPROC)(GLuint, GLenum, GLuint *); }
# 3677 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERPROC)(GLenum, GLuint); }
# 3678 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEBUFFERSPROC)(GLsizei, const GLuint *); }
# 3679 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENBUFFERSPROC)(GLsizei, GLuint *); }
# 3680 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISBUFFERPROC)(GLuint); }
# 3681 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERDATAPROC)(GLenum, GLsizeiptr, const GLvoid *, GLenum); }
# 3682 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, const GLvoid *); }
# 3683 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, GLvoid *); }
# 3684 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERPROC)(GLenum, GLenum); }
# 3685 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERPROC)(GLenum); }
# 3686 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 3687 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVPROC)(GLenum, GLenum, GLvoid **); }
# 3787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum, GLenum); }
# 3788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSPROC)(GLsizei, const GLenum *); }
# 3789 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
# 3790 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEPROC)(GLenum, GLenum, GLint, GLuint); }
# 3791 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILMASKSEPARATEPROC)(GLenum, GLuint); }
# 3792 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLATTACHSHADERPROC)(GLuint, GLuint); }
# 3793 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONPROC)(GLuint, GLuint, const GLchar *); }
# 3794 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPILESHADERPROC)(GLuint); }
# 3795 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLCREATEPROGRAMPROC)(void); }
# 3796 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLCREATESHADERPROC)(GLenum); }
# 3797 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPROGRAMPROC)(GLuint); }
# 3798 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETESHADERPROC)(GLuint); }
# 3799 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDETACHSHADERPROC)(GLuint, GLuint); }
# 3800 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint); }
# 3801 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint); }
# 3802 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
# 3803 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
# 3804 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETATTACHEDSHADERSPROC)(GLuint, GLsizei, GLsizei *, GLuint *); }
# 3805 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONPROC)(GLuint, const GLchar *); }
# 3806 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMIVPROC)(GLuint, GLenum, GLint *); }
# 3807 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 3808 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERIVPROC)(GLuint, GLenum, GLint *); }
# 3809 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 3810 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERSOURCEPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 3811 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC)(GLuint, const GLchar *); }
# 3812 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMFVPROC)(GLuint, GLint, GLfloat *); }
# 3813 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMIVPROC)(GLuint, GLint, GLint *); }
# 3814 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVPROC)(GLuint, GLenum, GLdouble *); }
# 3815 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVPROC)(GLuint, GLenum, GLfloat *); }
# 3816 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVPROC)(GLuint, GLenum, GLint *); }
# 3817 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint, GLenum, GLvoid **); }
# 3818 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISPROGRAMPROC)(GLuint); }
# 3819 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISSHADERPROC)(GLuint); }
# 3820 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLINKPROGRAMPROC)(GLuint); }
# 3821 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADERSOURCEPROC)(GLuint, GLsizei, const GLchar **, const GLint *); }
# 3822 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUSEPROGRAMPROC)(GLuint); }
# 3823 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FPROC)(GLint, GLfloat); }
# 3824 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FPROC)(GLint, GLfloat, GLfloat); }
# 3825 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FPROC)(GLint, GLfloat, GLfloat, GLfloat); }
# 3826 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 3827 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IPROC)(GLint, GLint); }
# 3828 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IPROC)(GLint, GLint, GLint); }
# 3829 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IPROC)(GLint, GLint, GLint, GLint); }
# 3830 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IPROC)(GLint, GLint, GLint, GLint, GLint); }
# 3831 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FVPROC)(GLint, GLsizei, const GLfloat *); }
# 3832 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FVPROC)(GLint, GLsizei, const GLfloat *); }
# 3833 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FVPROC)(GLint, GLsizei, const GLfloat *); }
# 3834 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FVPROC)(GLint, GLsizei, const GLfloat *); }
# 3835 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IVPROC)(GLint, GLsizei, const GLint *); }
# 3836 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IVPROC)(GLint, GLsizei, const GLint *); }
# 3837 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IVPROC)(GLint, GLsizei, const GLint *); }
# 3838 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IVPROC)(GLint, GLsizei, const GLint *); }
# 3839 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3840 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3841 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3842 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMPROC)(GLuint); }
# 3843 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DPROC)(GLuint, GLdouble); }
# 3844 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVPROC)(GLuint, const GLdouble *); }
# 3845 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FPROC)(GLuint, GLfloat); }
# 3846 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVPROC)(GLuint, const GLfloat *); }
# 3847 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SPROC)(GLuint, GLshort); }
# 3848 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVPROC)(GLuint, const GLshort *); }
# 3849 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DPROC)(GLuint, GLdouble, GLdouble); }
# 3850 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVPROC)(GLuint, const GLdouble *); }
# 3851 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FPROC)(GLuint, GLfloat, GLfloat); }
# 3852 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVPROC)(GLuint, const GLfloat *); }
# 3853 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SPROC)(GLuint, GLshort, GLshort); }
# 3854 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVPROC)(GLuint, const GLshort *); }
# 3855 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 3856 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVPROC)(GLuint, const GLdouble *); }
# 3857 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 3858 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVPROC)(GLuint, const GLfloat *); }
# 3859 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SPROC)(GLuint, GLshort, GLshort, GLshort); }
# 3860 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVPROC)(GLuint, const GLshort *); }
# 3861 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVPROC)(GLuint, const GLbyte *); }
# 3862 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVPROC)(GLuint, const GLint *); }
# 3863 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVPROC)(GLuint, const GLshort *); }
# 3864 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 3865 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVPROC)(GLuint, const GLubyte *); }
# 3866 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVPROC)(GLuint, const GLuint *); }
# 3867 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVPROC)(GLuint, const GLushort *); }
# 3868 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVPROC)(GLuint, const GLbyte *); }
# 3869 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 3870 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVPROC)(GLuint, const GLdouble *); }
# 3871 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 3872 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVPROC)(GLuint, const GLfloat *); }
# 3873 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVPROC)(GLuint, const GLint *); }
# 3874 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 3875 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVPROC)(GLuint, const GLshort *); }
# 3876 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVPROC)(GLuint, const GLubyte *); }
# 3877 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVPROC)(GLuint, const GLuint *); }
# 3878 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVPROC)(GLuint, const GLushort *); }
# 3879 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *); }
# 3892 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3893 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3894 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3895 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3896 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3897 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 3982 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFARBPROC)(const GLfloat *); }
# 3983 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDARBPROC)(const GLdouble *); }
# 3984 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFARBPROC)(const GLfloat *); }
# 3985 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDARBPROC)(const GLdouble *); }
# 3993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEARBPROC)(GLclampf, GLboolean); }
# 4015 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 4016 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 4017 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
# 4018 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 4019 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 4020 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 4021 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)(GLenum, GLint, GLvoid *); }
# 4034 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFARBPROC)(GLenum, GLfloat); }
# 4035 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVARBPROC)(GLenum, const GLfloat *); }
# 4052 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTBVARBPROC)(GLint, const GLbyte *); }
# 4053 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTSVARBPROC)(GLint, const GLshort *); }
# 4054 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTIVARBPROC)(GLint, const GLint *); }
# 4055 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTFVARBPROC)(GLint, const GLfloat *); }
# 4056 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTDVARBPROC)(GLint, const GLdouble *); }
# 4057 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTUBVARBPROC)(GLint, const GLubyte *); }
# 4058 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTUSVARBPROC)(GLint, const GLushort *); }
# 4059 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTUIVARBPROC)(GLint, const GLuint *); }
# 4060 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWEIGHTPOINTERARBPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 4061 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXBLENDARBPROC)(GLint); }
# 4073 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCURRENTPALETTEMATRIXARBPROC)(GLint); }
# 4074 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXUBVARBPROC)(GLint, const GLubyte *); }
# 4075 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXUSVARBPROC)(GLint, const GLushort *); }
# 4076 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXUIVARBPROC)(GLint, const GLuint *); }
# 4077 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMATRIXINDEXPOINTERARBPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 4128 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DARBPROC)(GLdouble, GLdouble); }
# 4129 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DVARBPROC)(const GLdouble *); }
# 4130 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FARBPROC)(GLfloat, GLfloat); }
# 4131 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FVARBPROC)(const GLfloat *); }
# 4132 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IARBPROC)(GLint, GLint); }
# 4133 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IVARBPROC)(const GLint *); }
# 4134 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SARBPROC)(GLshort, GLshort); }
# 4135 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SVARBPROC)(const GLshort *); }
# 4136 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DARBPROC)(GLdouble, GLdouble, GLdouble); }
# 4137 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DVARBPROC)(const GLdouble *); }
# 4138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FARBPROC)(GLfloat, GLfloat, GLfloat); }
# 4139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FVARBPROC)(const GLfloat *); }
# 4140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IARBPROC)(GLint, GLint, GLint); }
# 4141 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IVARBPROC)(const GLint *); }
# 4142 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SARBPROC)(GLshort, GLshort, GLshort); }
# 4143 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SVARBPROC)(const GLshort *); }
# 4212 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DARBPROC)(GLuint, GLdouble); }
# 4213 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVARBPROC)(GLuint, const GLdouble *); }
# 4214 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FARBPROC)(GLuint, GLfloat); }
# 4215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVARBPROC)(GLuint, const GLfloat *); }
# 4216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SARBPROC)(GLuint, GLshort); }
# 4217 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVARBPROC)(GLuint, const GLshort *); }
# 4218 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DARBPROC)(GLuint, GLdouble, GLdouble); }
# 4219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVARBPROC)(GLuint, const GLdouble *); }
# 4220 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FARBPROC)(GLuint, GLfloat, GLfloat); }
# 4221 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVARBPROC)(GLuint, const GLfloat *); }
# 4222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SARBPROC)(GLuint, GLshort, GLshort); }
# 4223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVARBPROC)(GLuint, const GLshort *); }
# 4224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 4225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVARBPROC)(GLuint, const GLdouble *); }
# 4226 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 4227 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVARBPROC)(GLuint, const GLfloat *); }
# 4228 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SARBPROC)(GLuint, GLshort, GLshort, GLshort); }
# 4229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVARBPROC)(GLuint, const GLshort *); }
# 4230 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVARBPROC)(GLuint, const GLbyte *); }
# 4231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVARBPROC)(GLuint, const GLint *); }
# 4232 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVARBPROC)(GLuint, const GLshort *); }
# 4233 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBARBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 4234 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVARBPROC)(GLuint, const GLubyte *); }
# 4235 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVARBPROC)(GLuint, const GLuint *); }
# 4236 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVARBPROC)(GLuint, const GLushort *); }
# 4237 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVARBPROC)(GLuint, const GLbyte *); }
# 4238 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 4239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVARBPROC)(GLuint, const GLdouble *); }
# 4240 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 4241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVARBPROC)(GLuint, const GLfloat *); }
# 4242 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVARBPROC)(GLuint, const GLint *); }
# 4243 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SARBPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 4244 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVARBPROC)(GLuint, const GLshort *); }
# 4245 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVARBPROC)(GLuint, const GLubyte *); }
# 4246 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVARBPROC)(GLuint, const GLuint *); }
# 4247 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVARBPROC)(GLuint, const GLushort *); }
# 4248 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERARBPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *); }
# 4249 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
# 4250 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
# 4251 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMSTRINGARBPROC)(GLenum, GLenum, GLsizei, const GLvoid *); }
# 4252 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDPROGRAMARBPROC)(GLenum, GLuint); }
# 4253 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPROGRAMSARBPROC)(GLsizei, const GLuint *); }
# 4254 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENPROGRAMSARBPROC)(GLsizei, GLuint *); }
# 4255 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 4256 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
# 4257 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 4258 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
# 4259 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 4260 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
# 4261 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 4262 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
# 4263 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
# 4264 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
# 4265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
# 4266 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
# 4267 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMIVARBPROC)(GLenum, GLenum, GLint *); }
# 4268 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGARBPROC)(GLenum, GLenum, GLvoid *); }
# 4269 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVARBPROC)(GLuint, GLenum, GLdouble *); }
# 4270 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVARBPROC)(GLuint, GLenum, GLfloat *); }
# 4271 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVARBPROC)(GLuint, GLenum, GLint *); }
# 4272 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVARBPROC)(GLuint, GLenum, GLvoid **); }
# 4273 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISPROGRAMARBPROC)(GLuint); }
# 4296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERARBPROC)(GLenum, GLuint); }
# 4297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEBUFFERSARBPROC)(GLsizei, const GLuint *); }
# 4298 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENBUFFERSARBPROC)(GLsizei, GLuint *); }
# 4299 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISBUFFERARBPROC)(GLuint); }
# 4300 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERDATAARBPROC)(GLenum, GLsizeiptrARB, const GLvoid *, GLenum); }
# 4301 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid *); }
# 4302 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, GLvoid *); }
# 4303 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERARBPROC)(GLenum, GLenum); }
# 4304 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERARBPROC)(GLenum); }
# 4305 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVARBPROC)(GLenum, GLenum, GLint *); }
# 4306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVARBPROC)(GLenum, GLenum, GLvoid **); }
# 4321 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENQUERIESARBPROC)(GLsizei, GLuint *); }
# 4322 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEQUERIESARBPROC)(GLsizei, const GLuint *); }
# 4323 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISQUERYARBPROC)(GLuint); }
# 4324 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINQUERYARBPROC)(GLenum, GLuint); }
# 4325 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDQUERYARBPROC)(GLenum); }
# 4326 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYIVARBPROC)(GLenum, GLenum, GLint *); }
# 4327 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVARBPROC)(GLuint, GLenum, GLint *); }
# 4328 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVARBPROC)(GLuint, GLenum, GLuint *); }
# 4374 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEOBJECTARBPROC)(GLhandleARB); }
# 4375 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLhandleARB (*PFNGLGETHANDLEARBPROC)(GLenum); }
# 4376 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDETACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
# 4377 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLhandleARB (*PFNGLCREATESHADEROBJECTARBPROC)(GLenum); }
# 4378 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, const GLcharARB **, const GLint *); }
# 4379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMPILESHADERARBPROC)(GLhandleARB); }
# 4380 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLhandleARB (*PFNGLCREATEPROGRAMOBJECTARBPROC)(void); }
# 4381 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLATTACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
# 4382 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLINKPROGRAMARBPROC)(GLhandleARB); }
# 4383 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUSEPROGRAMOBJECTARBPROC)(GLhandleARB); }
# 4384 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMARBPROC)(GLhandleARB); }
# 4385 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FARBPROC)(GLint, GLfloat); }
# 4386 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FARBPROC)(GLint, GLfloat, GLfloat); }
# 4387 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FARBPROC)(GLint, GLfloat, GLfloat, GLfloat); }
# 4388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FARBPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 4389 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IARBPROC)(GLint, GLint); }
# 4390 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IARBPROC)(GLint, GLint, GLint); }
# 4391 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IARBPROC)(GLint, GLint, GLint, GLint); }
# 4392 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IARBPROC)(GLint, GLint, GLint, GLint, GLint); }
# 4393 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 4394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 4395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 4396 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 4397 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1IVARBPROC)(GLint, GLsizei, const GLint *); }
# 4398 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2IVARBPROC)(GLint, GLsizei, const GLint *); }
# 4399 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3IVARBPROC)(GLint, GLsizei, const GLint *); }
# 4400 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4IVARBPROC)(GLint, GLsizei, const GLint *); }
# 4401 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 4402 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 4403 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 4404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERFVARBPROC)(GLhandleARB, GLenum, GLfloat *); }
# 4405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERIVARBPROC)(GLhandleARB, GLenum, GLint *); }
# 4406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINFOLOGARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
# 4407 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETATTACHEDOBJECTSARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLhandleARB *); }
# 4408 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
# 4409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
# 4410 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMFVARBPROC)(GLhandleARB, GLint, GLfloat *); }
# 4411 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMIVARBPROC)(GLhandleARB, GLint, GLint *); }
# 4412 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
# 4422 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONARBPROC)(GLhandleARB, GLuint, const GLcharARB *); }
# 4423 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
# 4424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
# 4452 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSARBPROC)(GLsizei, const GLenum *); }
# 4464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLAMPCOLORARBPROC)(GLenum, GLenum); }
# 4488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDCOLOREXTPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
# 4496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOLYGONOFFSETEXTPROC)(GLfloat, GLfloat); }
# 4509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE3DEXTPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 4510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4519 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLfloat *); }
# 4520 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLsizei, const GLfloat *); }
# 4529 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4530 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4542 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE1DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
# 4543 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE2DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
# 4544 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei); }
# 4545 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 4546 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 4563 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMEXTPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 4564 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4565 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4566 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXEXTPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 4567 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4568 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4569 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLHISTOGRAMEXTPROC)(GLenum, GLsizei, GLenum, GLboolean); }
# 4570 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMINMAXEXTPROC)(GLenum, GLenum, GLboolean); }
# 4571 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESETHISTOGRAMEXTPROC)(GLenum); }
# 4572 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESETMINMAXEXTPROC)(GLenum); }
# 4592 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFEXTPROC)(GLenum, GLenum, GLfloat); }
# 4595 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 4596 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIEXTPROC)(GLenum, GLenum, GLint); }
# 4597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 4598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 4599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
# 4600 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTEREXTPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 4601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTEREXTPROC)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *); }
# 4604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *); }
# 4622 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLESGIPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4623 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, const GLfloat *); }
# 4624 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, const GLint *); }
# 4625 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORTABLESGIPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 4626 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLESGIPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 4627 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, GLfloat *); }
# 4628 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, GLint *); }
# 4636 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENSGIXPROC)(GLenum); }
# 4649 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERISGISPROC)(GLenum, GLint); }
# 4650 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERIVSGISPROC)(GLenum, const GLint *); }
# 4651 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERFSGISPROC)(GLenum, GLfloat); }
# 4652 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTEXGENPARAMETERFVSGISPROC)(GLenum, const GLfloat *); }
# 4653 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC)(GLenum, GLint *); }
# 4654 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC)(GLenum, GLfloat *); }
# 4663 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXIMAGE4DSGISPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 4664 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXSUBIMAGE4DSGISPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4685 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLARETEXTURESRESIDENTEXTPROC)(GLsizei, const GLuint *, GLboolean *); }
# 4686 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDTEXTUREEXTPROC)(GLenum, GLuint); }
# 4687 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETETEXTURESEXTPROC)(GLsizei, const GLuint *); }
# 4688 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENTEXTURESEXTPROC)(GLsizei, GLuint *); }
# 4689 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISTEXTUREEXTPROC)(GLuint); }
# 4690 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIORITIZETEXTURESEXTPROC)(GLsizei, const GLuint *, const GLclampf *); }
# 4699 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDETAILTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
# 4700 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETDETAILTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 4709 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHARPENTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
# 4710 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETSHARPENTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 4727 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKSGISPROC)(GLclampf, GLboolean); }
# 4728 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEPATTERNSGISPROC)(GLenum); }
# 4748 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLARRAYELEMENTEXTPROC)(GLint); }
# 4749 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
# 4750 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSEXTPROC)(GLenum, GLint, GLsizei); }
# 4751 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTEREXTPROC)(GLsizei, GLsizei, const GLboolean *); }
# 4752 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPOINTERVEXTPROC)(GLenum, GLvoid **); }
# 4753 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const GLvoid *); }
# 4754 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const GLvoid *); }
# 4755 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
# 4756 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const GLvoid *); }
# 4788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONEXTPROC)(GLenum); }
# 4819 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFSGIXPROC)(GLenum, GLfloat); }
# 4820 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFVSGIXPROC)(GLenum, const GLfloat *); }
# 4821 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERISGIXPROC)(GLenum, GLint); }
# 4822 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSPRITEPARAMETERIVSGIXPROC)(GLenum, const GLint *); }
# 4835 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFEXTPROC)(GLenum, GLfloat); }
# 4836 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVEXTPROC)(GLenum, const GLfloat *); }
# 4845 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFSGISPROC)(GLenum, GLfloat); }
# 4846 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVSGISPROC)(GLenum, const GLfloat *); }
# 4859 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETINSTRUMENTSSGIXPROC)(void); }
# 4860 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINSTRUMENTSBUFFERSGIXPROC)(GLsizei, GLint *); }
# 4861 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLPOLLINSTRUMENTSSGIXPROC)(GLint *); }
# 4862 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREADINSTRUMENTSSGIXPROC)(GLint); }
# 4863 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTARTINSTRUMENTSSGIXPROC)(void); }
# 4864 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTOPINSTRUMENTSSGIXPROC)(GLint); }
# 4876 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEZOOMSGIXPROC)(GLint); }
# 4884 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTAGSAMPLEBUFFERSGIXPROC)(void); }
# 4895 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEFORMATIONMAP3DSGIXPROC)(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *); }
# 4896 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEFORMATIONMAP3FSGIXPROC)(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *); }
# 4897 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEFORMSGIXPROC)(GLbitfield); }
# 4898 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC)(GLbitfield); }
# 4906 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREFERENCEPLANESGIXPROC)(const GLdouble *); }
# 4914 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHRASTERSGIXPROC)(void); }
# 4927 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGFUNCSGISPROC)(GLsizei, const GLfloat *); }
# 4928 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFOGFUNCSGISPROC)(GLfloat *); }
# 4945 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIHPPROC)(GLenum, GLenum, GLint); }
# 4946 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFHPPROC)(GLenum, GLenum, GLfloat); }
# 4947 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, const GLint *); }
# 4948 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, const GLfloat *); }
# 4949 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, GLint *); }
# 4950 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, GLfloat *); }
# 4967 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4968 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
# 4980 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLHINTPGIPROC)(GLenum, GLint); }
# 4991 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORTABLEEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 4992 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEEXTPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 4993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4994 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 5011 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLISTPARAMETERFVSGIXPROC)(GLuint, GLenum, GLfloat *); }
# 5012 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLISTPARAMETERIVSGIXPROC)(GLuint, GLenum, GLint *); }
# 5013 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERFSGIXPROC)(GLuint, GLenum, GLfloat); }
# 5014 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERFVSGIXPROC)(GLuint, GLenum, const GLfloat *); }
# 5015 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERISGIXPROC)(GLuint, GLenum, GLint); }
# 5016 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLISTPARAMETERIVSGIXPROC)(GLuint, GLenum, const GLint *); }
# 5044 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXMATERIALEXTPROC)(GLenum, GLenum); }
# 5052 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXFUNCEXTPROC)(GLenum, GLclampf); }
# 5065 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOCKARRAYSEXTPROC)(GLint, GLsizei); }
# 5066 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNLOCKARRAYSEXTPROC)(void); }
# 5075 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCULLPARAMETERDVEXTPROC)(GLenum, GLdouble *); }
# 5076 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCULLPARAMETERFVEXTPROC)(GLenum, GLfloat *); }
# 5105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTCOLORMATERIALSGIXPROC)(GLenum, GLenum); }
# 5106 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFSGIXPROC)(GLenum, GLenum, GLfloat); }
# 5107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
# 5108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTISGIXPROC)(GLenum, GLenum, GLint); }
# 5109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, const GLint *); }
# 5110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFSGIXPROC)(GLenum, GLfloat); }
# 5111 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)(GLenum, const GLfloat *); }
# 5112 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELISGIXPROC)(GLenum, GLint); }
# 5113 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)(GLenum, const GLint *); }
# 5114 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFSGIXPROC)(GLenum, GLenum, GLfloat); }
# 5115 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
# 5116 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALISGIXPROC)(GLenum, GLenum, GLint); }
# 5117 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, const GLint *); }
# 5118 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
# 5119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, GLint *); }
# 5120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
# 5121 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, GLint *); }
# 5122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLIGHTENVISGIXPROC)(GLenum, GLint); }
# 5138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSEXTPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
# 5156 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLAPPLYTEXTUREEXTPROC)(GLenum); }
# 5157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURELIGHTEXTPROC)(GLenum); }
# 5158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTUREMATERIALEXTPROC)(GLenum, GLenum); }
# 5179 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLASYNCMARKERSGIXPROC)(GLuint); }
# 5180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLFINISHASYNCSGIXPROC)(GLuint *); }
# 5181 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLPOLLASYNCSGIXPROC)(GLuint *); }
# 5182 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENASYNCMARKERSSGIXPROC)(GLsizei); }
# 5183 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEASYNCMARKERSSGIXPROC)(GLuint, GLsizei); }
# 5184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISASYNCMARKERSGIXPROC)(GLuint); }
# 5203 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
# 5204 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALPOINTERVINTELPROC)(GLenum, const GLvoid **); }
# 5205 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
# 5206 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERVINTELPROC)(GLint, GLenum, const GLvoid **); }
# 5221 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)(GLenum, GLenum, GLint); }
# 5222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)(GLenum, GLenum, GLfloat); }
# 5223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 5224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 5260 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
# 5261 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVEXTPROC)(const GLbyte *); }
# 5262 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
# 5263 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVEXTPROC)(const GLdouble *); }
# 5264 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
# 5265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVEXTPROC)(const GLfloat *); }
# 5266 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IEXTPROC)(GLint, GLint, GLint); }
# 5267 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVEXTPROC)(const GLint *); }
# 5268 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SEXTPROC)(GLshort, GLshort, GLshort); }
# 5269 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVEXTPROC)(const GLshort *); }
# 5270 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBEXTPROC)(GLubyte, GLubyte, GLubyte); }
# 5271 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVEXTPROC)(const GLubyte *); }
# 5272 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIEXTPROC)(GLuint, GLuint, GLuint); }
# 5273 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVEXTPROC)(const GLuint *); }
# 5274 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USEXTPROC)(GLushort, GLushort, GLushort); }
# 5275 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVEXTPROC)(const GLushort *); }
# 5276 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, const GLvoid *); }
# 5284 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURENORMALEXTPROC)(GLenum); }
# 5293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC)(GLenum, GLint *, GLsizei *, GLsizei); }
# 5294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC)(GLenum, const GLsizei *, GLenum, const GLvoid **, GLsizei); }
# 5306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFEXTPROC)(GLfloat); }
# 5307 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDFVEXTPROC)(const GLfloat *); }
# 5308 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDEXTPROC)(GLdouble); }
# 5309 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDDVEXTPROC)(const GLdouble *); }
# 5310 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 5343 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
# 5344 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3BVEXTPROC)(const GLbyte *); }
# 5345 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
# 5346 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3DVEXTPROC)(const GLdouble *); }
# 5347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
# 5348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3FVEXTPROC)(const GLfloat *); }
# 5349 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3IEXTPROC)(GLint, GLint, GLint); }
# 5350 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3IVEXTPROC)(const GLint *); }
# 5351 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3SEXTPROC)(GLshort, GLshort, GLshort); }
# 5352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENT3SVEXTPROC)(const GLshort *); }
# 5353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
# 5354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3BVEXTPROC)(const GLbyte *); }
# 5355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
# 5356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3DVEXTPROC)(const GLdouble *); }
# 5357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
# 5358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3FVEXTPROC)(const GLfloat *); }
# 5359 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3IEXTPROC)(GLint, GLint, GLint); }
# 5360 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3IVEXTPROC)(const GLint *); }
# 5361 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3SEXTPROC)(GLshort, GLshort, GLshort); }
# 5362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMAL3SVEXTPROC)(const GLshort *); }
# 5363 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTANGENTPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 5364 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINORMALPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 5388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHTEXTURESUNXPROC)(void); }
# 5403 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORBSUNPROC)(GLbyte); }
# 5404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORSSUNPROC)(GLshort); }
# 5405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORISUNPROC)(GLint); }
# 5406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORFSUNPROC)(GLfloat); }
# 5407 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORDSUNPROC)(GLdouble); }
# 5408 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUBSUNPROC)(GLubyte); }
# 5409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUSSUNPROC)(GLushort); }
# 5410 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUISUNPROC)(GLuint); }
# 5424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUISUNPROC)(GLuint); }
# 5425 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSSUNPROC)(GLushort); }
# 5426 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBSUNPROC)(GLubyte); }
# 5427 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVSUNPROC)(const GLuint *); }
# 5428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSVSUNPROC)(const GLushort *); }
# 5429 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBVSUNPROC)(const GLubyte *); }
# 5430 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEPOINTERSUNPROC)(GLenum, GLsizei, const GLvoid **); }
# 5477 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat); }
# 5478 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FVSUNPROC)(const GLubyte *, const GLfloat *); }
# 5479 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 5480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FVSUNPROC)(const GLubyte *, const GLfloat *); }
# 5481 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5482 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 5483 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5484 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 5485 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5486 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 5487 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 5489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5490 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 5491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)(GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 5492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)(const GLfloat *, const GLubyte *, const GLfloat *); }
# 5493 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5494 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 5495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 5497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5498 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 5499 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 5501 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 5502 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *); }
# 5503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 5504 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)(const GLuint *, const GLubyte *, const GLfloat *); }
# 5505 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 5507 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 5509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 5511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5512 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 5513 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5514 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 5515 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5516 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 5524 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEEXTPROC)(GLenum, GLenum, GLenum, GLenum); }
# 5532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEINGRPROC)(GLenum, GLenum, GLenum, GLenum); }
# 5578 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFEXTPROC)(GLfloat); }
# 5579 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFVEXTPROC)(const GLfloat *); }
# 5580 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTPOINTEREXTPROC)(GLsizei, GLenum, GLsizei, const GLvoid *); }
# 5593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGENVPROC)(void); }
# 5594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGENVPROC)(GLsizei, const GLvoid *); }
# 5614 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFVNVPROC)(GLenum, const GLfloat *); }
# 5615 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFNVPROC)(GLenum, GLfloat); }
# 5616 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERIVNVPROC)(GLenum, const GLint *); }
# 5617 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERINVPROC)(GLenum, GLint); }
# 5618 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum); }
# 5619 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINEROUTPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean); }
# 5620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINALCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum); }
# 5621 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLfloat *); }
# 5622 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLint *); }
# 5623 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLfloat *); }
# 5624 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLint *); }
# 5625 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 5626 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
# 5650 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRESIZEBUFFERSMESAPROC)(void); }
# 5681 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DMESAPROC)(GLdouble, GLdouble); }
# 5682 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2DVMESAPROC)(const GLdouble *); }
# 5683 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FMESAPROC)(GLfloat, GLfloat); }
# 5684 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2FVMESAPROC)(const GLfloat *); }
# 5685 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IMESAPROC)(GLint, GLint); }
# 5686 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2IVMESAPROC)(const GLint *); }
# 5687 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SMESAPROC)(GLshort, GLshort); }
# 5688 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS2SVMESAPROC)(const GLshort *); }
# 5689 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DMESAPROC)(GLdouble, GLdouble, GLdouble); }
# 5690 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3DVMESAPROC)(const GLdouble *); }
# 5691 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FMESAPROC)(GLfloat, GLfloat, GLfloat); }
# 5692 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3FVMESAPROC)(const GLfloat *); }
# 5693 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IMESAPROC)(GLint, GLint, GLint); }
# 5694 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3IVMESAPROC)(const GLint *); }
# 5695 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SMESAPROC)(GLshort, GLshort, GLshort); }
# 5696 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS3SVMESAPROC)(const GLshort *); }
# 5697 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4DMESAPROC)(GLdouble, GLdouble, GLdouble, GLdouble); }
# 5698 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4DVMESAPROC)(const GLdouble *); }
# 5699 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4FMESAPROC)(GLfloat, GLfloat, GLfloat, GLfloat); }
# 5700 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4FVMESAPROC)(const GLfloat *); }
# 5701 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4IMESAPROC)(GLint, GLint, GLint, GLint); }
# 5702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4IVMESAPROC)(const GLint *); }
# 5703 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4SMESAPROC)(GLshort, GLshort, GLshort, GLshort); }
# 5704 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWINDOWPOS4SVMESAPROC)(const GLshort *); }
# 5721 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIMODEDRAWARRAYSIBMPROC)(const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint); }
# 5722 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIMODEDRAWELEMENTSIBMPROC)(const GLenum *, const GLsizei *, GLenum, const GLvoid *const *, GLsizei, GLint); }
# 5737 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 5738 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 5739 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTERLISTIBMPROC)(GLint, const GLboolean **, GLint); }
# 5740 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 5741 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINDEXPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 5742 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 5743 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 5744 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 5776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTBUFFERMASK3DFXPROC)(GLuint); }
# 5785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMASKEXTPROC)(GLclampf, GLboolean); }
# 5786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEPATTERNEXTPROC)(GLenum); }
# 5810 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXTURECOLORMASKSGISPROC)(GLboolean, GLboolean, GLboolean, GLboolean); }
# 5818 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLIGLOOINTERFACESGIXPROC)(GLenum, const GLvoid *); }
# 5840 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFENCESNVPROC)(GLsizei, const GLuint *); }
# 5841 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFENCESNVPROC)(GLsizei, GLuint *); }
# 5842 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISFENCENVPROC)(GLuint); }
# 5843 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLTESTFENCENVPROC)(GLuint); }
# 5844 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFENCEIVNVPROC)(GLuint, GLenum, GLint *); }
# 5845 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHFENCENVPROC)(GLuint); }
# 5846 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETFENCENVPROC)(GLuint, GLenum); }
# 5862 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const GLvoid *); }
# 5863 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPPARAMETERIVNVPROC)(GLenum, GLenum, const GLint *); }
# 5864 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMAPPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
# 5865 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, GLvoid *); }
# 5866 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
# 5867 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 5868 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
# 5869 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
# 5870 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEVALMAPSNVPROC)(GLenum, GLenum); }
# 5883 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
# 5884 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 5975 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLAREPROGRAMSRESIDENTNVPROC)(GLsizei, const GLuint *, GLboolean *); }
# 5976 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDPROGRAMNVPROC)(GLenum, GLuint); }
# 5977 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEPROGRAMSNVPROC)(GLsizei, const GLuint *); }
# 5978 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEXECUTEPROGRAMNVPROC)(GLenum, GLuint, const GLfloat *); }
# 5979 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENPROGRAMSNVPROC)(GLsizei, GLuint *); }
# 5980 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERDVNVPROC)(GLenum, GLuint, GLenum, GLdouble *); }
# 5981 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
# 5982 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMIVNVPROC)(GLuint, GLenum, GLint *); }
# 5983 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGNVPROC)(GLuint, GLenum, GLubyte *); }
# 5984 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTRACKMATRIXIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
# 5985 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVNVPROC)(GLuint, GLenum, GLdouble *); }
# 5986 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVNVPROC)(GLuint, GLenum, GLfloat *); }
# 5987 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVNVPROC)(GLuint, GLenum, GLint *); }
# 5988 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVNVPROC)(GLuint, GLenum, GLvoid **); }
# 5989 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISPROGRAMNVPROC)(GLuint); }
# 5990 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLLOADPROGRAMNVPROC)(GLenum, GLuint, GLsizei, const GLubyte *); }
# 5991 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DNVPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 5992 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DVNVPROC)(GLenum, GLuint, const GLdouble *); }
# 5993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FNVPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 5994 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FVNVPROC)(GLenum, GLuint, const GLfloat *); }
# 5995 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4DVNVPROC)(GLenum, GLuint, GLuint, const GLdouble *); }
# 5996 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4FVNVPROC)(GLenum, GLuint, GLuint, const GLfloat *); }
# 5997 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLREQUESTRESIDENTPROGRAMSNVPROC)(GLsizei, const GLuint *); }
# 5998 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRACKMATRIXNVPROC)(GLenum, GLuint, GLenum, GLenum); }
# 5999 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERNVPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 6000 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DNVPROC)(GLuint, GLdouble); }
# 6001 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVNVPROC)(GLuint, const GLdouble *); }
# 6002 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FNVPROC)(GLuint, GLfloat); }
# 6003 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVNVPROC)(GLuint, const GLfloat *); }
# 6004 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SNVPROC)(GLuint, GLshort); }
# 6005 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVNVPROC)(GLuint, const GLshort *); }
# 6006 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DNVPROC)(GLuint, GLdouble, GLdouble); }
# 6007 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVNVPROC)(GLuint, const GLdouble *); }
# 6008 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FNVPROC)(GLuint, GLfloat, GLfloat); }
# 6009 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVNVPROC)(GLuint, const GLfloat *); }
# 6010 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SNVPROC)(GLuint, GLshort, GLshort); }
# 6011 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVNVPROC)(GLuint, const GLshort *); }
# 6012 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 6013 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVNVPROC)(GLuint, const GLdouble *); }
# 6014 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 6015 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVNVPROC)(GLuint, const GLfloat *); }
# 6016 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SNVPROC)(GLuint, GLshort, GLshort, GLshort); }
# 6017 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVNVPROC)(GLuint, const GLshort *); }
# 6018 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6019 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVNVPROC)(GLuint, const GLdouble *); }
# 6020 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6021 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVNVPROC)(GLuint, const GLfloat *); }
# 6022 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SNVPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 6023 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVNVPROC)(GLuint, const GLshort *); }
# 6024 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBNVPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 6025 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVNVPROC)(GLuint, const GLubyte *); }
# 6026 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 6027 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 6028 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 6029 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 6030 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 6031 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 6032 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 6033 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 6034 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 6035 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 6036 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 6037 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 6038 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4UBVNVPROC)(GLuint, GLsizei, const GLubyte *); }
# 6073 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERIVATIPROC)(GLenum, const GLint *); }
# 6074 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERFVATIPROC)(GLenum, const GLfloat *); }
# 6075 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERIVATIPROC)(GLenum, GLint *); }
# 6076 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERFVATIPROC)(GLenum, GLfloat *); }
# 6097 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENFRAGMENTSHADERSATIPROC)(GLuint); }
# 6098 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAGMENTSHADERATIPROC)(GLuint); }
# 6099 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFRAGMENTSHADERATIPROC)(GLuint); }
# 6100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINFRAGMENTSHADERATIPROC)(void); }
# 6101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDFRAGMENTSHADERATIPROC)(void); }
# 6102 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPASSTEXCOORDATIPROC)(GLuint, GLuint, GLenum); }
# 6103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSAMPLEMAPATIPROC)(GLuint, GLuint, GLenum); }
# 6104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6106 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)(GLuint, const GLfloat *); }
# 6119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPNTRIANGLESIATIPROC)(GLenum, GLint); }
# 6120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPNTRIANGLESFATIPROC)(GLenum, GLfloat); }
# 6139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLNEWOBJECTBUFFERATIPROC)(GLsizei, const GLvoid *, GLenum); }
# 6140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISOBJECTBUFFERATIPROC)(GLuint); }
# 6141 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUPDATEOBJECTBUFFERATIPROC)(GLuint, GLuint, GLsizei, const GLvoid *, GLenum); }
# 6142 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 6143 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERIVATIPROC)(GLuint, GLenum, GLint *); }
# 6144 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFREEOBJECTBUFFERATIPROC)(GLuint); }
# 6145 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLARRAYOBJECTATIPROC)(GLenum, GLint, GLenum, GLsizei, GLuint, GLuint); }
# 6146 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETARRAYOBJECTFVATIPROC)(GLenum, GLenum, GLfloat *); }
# 6147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETARRAYOBJECTIVATIPROC)(GLenum, GLenum, GLint *); }
# 6148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTARRAYOBJECTATIPROC)(GLuint, GLenum, GLsizei, GLuint, GLuint); }
# 6149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 6150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 6199 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINVERTEXSHADEREXTPROC)(void); }
# 6200 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDVERTEXSHADEREXTPROC)(void); }
# 6201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVERTEXSHADEREXTPROC)(GLuint); }
# 6202 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENVERTEXSHADERSEXTPROC)(GLuint); }
# 6203 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEVERTEXSHADEREXTPROC)(GLuint); }
# 6204 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADEROP1EXTPROC)(GLenum, GLuint, GLuint); }
# 6205 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADEROP2EXTPROC)(GLenum, GLuint, GLuint, GLuint); }
# 6206 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSHADEROP3EXTPROC)(GLenum, GLuint, GLuint, GLuint, GLuint); }
# 6207 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSWIZZLEEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
# 6208 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLWRITEMASKEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
# 6209 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLINSERTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
# 6210 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLEXTRACTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
# 6211 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLGENSYMBOLSEXTPROC)(GLenum, GLenum, GLenum, GLuint); }
# 6212 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETINVARIANTEXTPROC)(GLuint, GLenum, const GLvoid *); }
# 6213 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETLOCALCONSTANTEXTPROC)(GLuint, GLenum, const GLvoid *); }
# 6214 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTBVEXTPROC)(GLuint, const GLbyte *); }
# 6215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTSVEXTPROC)(GLuint, const GLshort *); }
# 6216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTIVEXTPROC)(GLuint, const GLint *); }
# 6217 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTFVEXTPROC)(GLuint, const GLfloat *); }
# 6218 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTDVEXTPROC)(GLuint, const GLdouble *); }
# 6219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTUBVEXTPROC)(GLuint, const GLubyte *); }
# 6220 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTUSVEXTPROC)(GLuint, const GLushort *); }
# 6221 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTUIVEXTPROC)(GLuint, const GLuint *); }
# 6222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVARIANTPOINTEREXTPROC)(GLuint, GLenum, GLuint, const GLvoid *); }
# 6223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
# 6224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
# 6225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDLIGHTPARAMETEREXTPROC)(GLenum, GLenum); }
# 6226 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDMATERIALPARAMETEREXTPROC)(GLenum, GLenum); }
# 6227 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDTEXGENPARAMETEREXTPROC)(GLenum, GLenum, GLenum); }
# 6228 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)(GLenum, GLenum); }
# 6229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLuint (*PFNGLBINDPARAMETEREXTPROC)(GLenum); }
# 6230 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISVARIANTENABLEDEXTPROC)(GLuint, GLenum); }
# 6231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 6232 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 6233 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 6234 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVARIANTPOINTERVEXTPROC)(GLuint, GLenum, GLvoid **); }
# 6235 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 6236 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 6237 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 6238 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 6239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 6240 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 6292 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1SATIPROC)(GLenum, GLshort); }
# 6293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1SVATIPROC)(GLenum, const GLshort *); }
# 6294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1IATIPROC)(GLenum, GLint); }
# 6295 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1IVATIPROC)(GLenum, const GLint *); }
# 6296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1FATIPROC)(GLenum, GLfloat); }
# 6297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1FVATIPROC)(GLenum, const GLfloat *); }
# 6298 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1DATIPROC)(GLenum, GLdouble); }
# 6299 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM1DVATIPROC)(GLenum, const GLdouble *); }
# 6300 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SATIPROC)(GLenum, GLshort, GLshort); }
# 6301 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SVATIPROC)(GLenum, const GLshort *); }
# 6302 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IATIPROC)(GLenum, GLint, GLint); }
# 6303 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IVATIPROC)(GLenum, const GLint *); }
# 6304 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FATIPROC)(GLenum, GLfloat, GLfloat); }
# 6305 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FVATIPROC)(GLenum, const GLfloat *); }
# 6306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DATIPROC)(GLenum, GLdouble, GLdouble); }
# 6307 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DVATIPROC)(GLenum, const GLdouble *); }
# 6308 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
# 6309 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SVATIPROC)(GLenum, const GLshort *); }
# 6310 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
# 6311 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IVATIPROC)(GLenum, const GLint *); }
# 6312 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 6313 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
# 6314 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 6315 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
# 6316 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SATIPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 6317 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SVATIPROC)(GLenum, const GLshort *); }
# 6318 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IATIPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 6319 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IVATIPROC)(GLenum, const GLint *); }
# 6320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6321 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FVATIPROC)(GLenum, const GLfloat *); }
# 6322 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6323 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DVATIPROC)(GLenum, const GLdouble *); }
# 6324 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3BATIPROC)(GLenum, GLbyte, GLbyte, GLbyte); }
# 6325 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3BVATIPROC)(GLenum, const GLbyte *); }
# 6326 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
# 6327 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3SVATIPROC)(GLenum, const GLshort *); }
# 6328 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
# 6329 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3IVATIPROC)(GLenum, const GLint *); }
# 6330 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 6331 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
# 6332 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 6333 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMALSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
# 6334 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)(GLenum); }
# 6335 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXBLENDENVIATIPROC)(GLenum, GLint); }
# 6336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXBLENDENVFATIPROC)(GLenum, GLfloat); }
# 6346 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLELEMENTPOINTERATIPROC)(GLenum, const GLvoid *); }
# 6347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYATIPROC)(GLenum, GLsizei); }
# 6348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYATIPROC)(GLenum, GLuint, GLuint, GLsizei); }
# 6356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWMESHARRAYSSUNPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 6382 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENOCCLUSIONQUERIESNVPROC)(GLsizei, GLuint *); }
# 6383 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEOCCLUSIONQUERIESNVPROC)(GLsizei, const GLuint *); }
# 6384 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISOCCLUSIONQUERYNVPROC)(GLuint); }
# 6385 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINOCCLUSIONQUERYNVPROC)(GLuint); }
# 6386 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDOCCLUSIONQUERYNVPROC)(void); }
# 6387 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYIVNVPROC)(GLuint, GLenum, GLint *); }
# 6388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYUIVNVPROC)(GLuint, GLenum, GLuint *); }
# 6397 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERINVPROC)(GLenum, GLint); }
# 6398 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPOINTPARAMETERIVNVPROC)(GLenum, const GLint *); }
# 6418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLACTIVESTENCILFACEEXTPROC)(GLenum); }
# 6438 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLELEMENTPOINTERAPPLEPROC)(GLenum, const GLvoid *); }
# 6439 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYAPPLEPROC)(GLenum, GLint, GLsizei); }
# 6440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, GLint, GLsizei); }
# 6441 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)(GLenum, const GLint *, const GLsizei *, GLsizei); }
# 6442 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei); }
# 6457 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFENCESAPPLEPROC)(GLsizei, GLuint *); }
# 6458 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFENCESAPPLEPROC)(GLsizei, const GLuint *); }
# 6459 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSETFENCEAPPLEPROC)(GLuint); }
# 6460 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISFENCEAPPLEPROC)(GLuint); }
# 6461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLTESTFENCEAPPLEPROC)(GLuint); }
# 6462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHFENCEAPPLEPROC)(GLuint); }
# 6463 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLTESTOBJECTAPPLEPROC)(GLenum, GLuint); }
# 6464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFINISHOBJECTAPPLEPROC)(GLenum, GLint); }
# 6475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDVERTEXARRAYAPPLEPROC)(GLuint); }
# 6476 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEVERTEXARRAYSAPPLEPROC)(GLsizei, const GLuint *); }
# 6477 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENVERTEXARRAYSAPPLEPROC)(GLsizei, const GLuint *); }
# 6478 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISVERTEXARRAYAPPLEPROC)(GLuint); }
# 6488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGEAPPLEPROC)(GLsizei, GLvoid *); }
# 6489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)(GLsizei, GLvoid *); }
# 6490 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)(GLenum, GLint); }
# 6506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWBUFFERSATIPROC)(GLsizei, const GLenum *); }
# 6539 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6540 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6541 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLfloat *); }
# 6542 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLdouble *); }
# 6543 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat *); }
# 6544 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble *); }
# 6597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX2HNVPROC)(GLhalfNV, GLhalfNV); }
# 6598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX2HVNVPROC)(const GLhalfNV *); }
# 6599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 6600 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX3HVNVPROC)(const GLhalfNV *); }
# 6601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 6602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEX4HVNVPROC)(const GLhalfNV *); }
# 6603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 6604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLNORMAL3HVNVPROC)(const GLhalfNV *); }
# 6605 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 6606 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR3HVNVPROC)(const GLhalfNV *); }
# 6607 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 6608 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLOR4HVNVPROC)(const GLhalfNV *); }
# 6609 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD1HNVPROC)(GLhalfNV); }
# 6610 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD1HVNVPROC)(const GLhalfNV *); }
# 6611 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2HNVPROC)(GLhalfNV, GLhalfNV); }
# 6612 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD2HVNVPROC)(const GLhalfNV *); }
# 6613 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 6614 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD3HVNVPROC)(const GLhalfNV *); }
# 6615 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 6616 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXCOORD4HVNVPROC)(const GLhalfNV *); }
# 6617 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HNVPROC)(GLenum, GLhalfNV); }
# 6618 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HVNVPROC)(GLenum, const GLhalfNV *); }
# 6619 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HNVPROC)(GLenum, GLhalfNV, GLhalfNV); }
# 6620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HVNVPROC)(GLenum, const GLhalfNV *); }
# 6621 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HNVPROC)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV); }
# 6622 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HVNVPROC)(GLenum, const GLhalfNV *); }
# 6623 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HNVPROC)(GLenum, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 6624 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HVNVPROC)(GLenum, const GLhalfNV *); }
# 6625 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDHNVPROC)(GLhalfNV); }
# 6626 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFOGCOORDHVNVPROC)(const GLhalfNV *); }
# 6627 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HNVPROC)(GLhalfNV, GLhalfNV, GLhalfNV); }
# 6628 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HVNVPROC)(const GLhalfNV *); }
# 6629 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHNVPROC)(GLhalfNV); }
# 6630 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHVNVPROC)(const GLhalfNV *); }
# 6631 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HNVPROC)(GLuint, GLhalfNV); }
# 6632 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HVNVPROC)(GLuint, const GLhalfNV *); }
# 6633 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HNVPROC)(GLuint, GLhalfNV, GLhalfNV); }
# 6634 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HVNVPROC)(GLuint, const GLhalfNV *); }
# 6635 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HNVPROC)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV); }
# 6636 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HVNVPROC)(GLuint, const GLhalfNV *); }
# 6637 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HNVPROC)(GLuint, GLhalfNV, GLhalfNV, GLhalfNV, GLhalfNV); }
# 6638 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HVNVPROC)(GLuint, const GLhalfNV *); }
# 6639 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 6640 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 6641 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 6642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4HVNVPROC)(GLuint, GLsizei, const GLhalfNV *); }
# 6651 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPIXELDATARANGENVPROC)(GLenum, GLsizei, GLvoid *); }
# 6652 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFLUSHPIXELDATARANGENVPROC)(GLenum); }
# 6661 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTNVPROC)(void); }
# 6662 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTINDEXNVPROC)(GLuint); }
# 6679 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLvoid *(*PFNGLMAPOBJECTBUFFERATIPROC)(GLuint); }
# 6680 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNMAPOBJECTBUFFERATIPROC)(GLuint); }
# 6689 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEATIPROC)(GLenum, GLenum, GLenum, GLenum); }
# 6690 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEATIPROC)(GLenum, GLenum, GLint, GLuint); }
# 6700 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint); }
# 6701 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 6702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 6714 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHBOUNDSEXTPROC)(GLclampd, GLclampd); }
# 6726 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEEXTPROC)(GLenum, GLenum); }
# 6778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISRENDERBUFFEREXTPROC)(GLuint); }
# 6779 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDRENDERBUFFEREXTPROC)(GLenum, GLuint); }
# 6780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETERENDERBUFFERSEXTPROC)(GLsizei, const GLuint *); }
# 6781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENRENDERBUFFERSEXTPROC)(GLsizei, GLuint *); }
# 6782 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEEXTPROC)(GLenum, GLenum, GLsizei, GLsizei); }
# 6783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 6784 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISFRAMEBUFFEREXTPROC)(GLuint); }
# 6785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAMEBUFFEREXTPROC)(GLenum, GLuint); }
# 6786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDELETEFRAMEBUFFERSEXTPROC)(GLsizei, const GLuint *); }
# 6787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENFRAMEBUFFERSEXTPROC)(GLsizei, GLuint *); }
# 6788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)(GLenum); }
# 6789 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 6790 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 6791 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint); }
# 6792 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)(GLenum, GLenum, GLenum, GLuint); }
# 6793 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
# 6794 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGENERATEMIPMAPEXTPROC)(GLenum); }
# 6802 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLSTRINGMARKERGREMEDYPROC)(GLsizei, const GLvoid *); }
# 6815 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTI64VEXTPROC)(GLuint, GLenum, GLint64EXT *); }
# 6816 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC)(GLuint, GLenum, GLuint64EXT *); }
# 6824 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXBUFFEREXTPROC)(GLenum, GLenum, GLuint); }
# 6842 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKNVPROC)(GLenum); }
# 6843 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKNVPROC)(void); }
# 6844 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)(GLuint, const GLint *, GLenum); }
# 6845 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERRANGENVPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
# 6846 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFEROFFSETNVPROC)(GLenum, GLuint, GLuint, GLintptr); }
# 6847 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDBUFFERBASENVPROC)(GLenum, GLuint, GLuint); }
# 6848 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)(GLuint, GLsizei, const GLint *, GLenum); }
# 6849 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLACTIVEVARYINGNVPROC)(GLuint, const GLchar *); }
# 6850 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETVARYINGLOCATIONNVPROC)(GLuint, const GLchar *); }
# 6851 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETACTIVEVARYINGNVPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
# 6852 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)(GLuint, GLuint, GLint *); }
# 6863 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHRANGEDNVPROC)(GLdouble, GLdouble); }
# 6864 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARDEPTHDNVPROC)(GLdouble); }
# 6865 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDEPTHBOUNDSDNVPROC)(GLdouble, GLdouble); }
# 6898 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCOLORMASKINDEXEDEXTPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean); }
# 6899 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETBOOLEANINDEXEDVEXTPROC)(GLenum, GLuint, GLboolean *); }
# 6900 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETINTEGERINDEXEDVEXTPROC)(GLenum, GLuint, GLint *); }
# 6901 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLENABLEINDEXEDEXTPROC)(GLenum, GLuint); }
# 6902 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDISABLEINDEXEDEXTPROC)(GLenum, GLuint); }
# 6903 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLboolean (*PFNGLISENABLEDINDEXEDEXTPROC)(GLenum, GLuint); }
# 6916 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 6917 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, const GLuint *); }
# 6918 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLint *); }
# 6919 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLuint *); }
# 6920 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARCOLORIIEXTPROC)(GLint, GLint, GLint, GLint); }
# 6921 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLCLEARCOLORIUIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
# 6931 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORMBUFFEREXTPROC)(GLuint, GLint, GLuint); }
# 6932 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETUNIFORMBUFFERSIZEEXTPROC)(GLuint, GLint); }
# 6933 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLintptr (*PFNGLGETUNIFORMOFFSETEXTPROC)(GLuint, GLint); }
# 6974 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETUNIFORMUIVEXTPROC)(GLuint, GLint, GLuint *); }
# 6975 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBINDFRAGDATALOCATIONEXTPROC)(GLuint, GLuint, const GLchar *); }
# 6976 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef GLint (*PFNGLGETFRAGDATALOCATIONEXTPROC)(GLuint, const GLchar *); }
# 6977 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UIEXTPROC)(GLint, GLuint); }
# 6978 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UIEXTPROC)(GLint, GLuint, GLuint); }
# 6979 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UIEXTPROC)(GLint, GLuint, GLuint, GLuint); }
# 6980 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UIEXTPROC)(GLint, GLuint, GLuint, GLuint, GLuint); }
# 6981 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM1UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 6982 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM2UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 6983 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM3UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 6984 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLUNIFORM4UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 6985 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IEXTPROC)(GLuint, GLint); }
# 6986 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IEXTPROC)(GLuint, GLint, GLint); }
# 6987 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IEXTPROC)(GLuint, GLint, GLint, GLint); }
# 6988 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IEXTPROC)(GLuint, GLint, GLint, GLint, GLint); }
# 6989 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIEXTPROC)(GLuint, GLuint); }
# 6990 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIEXTPROC)(GLuint, GLuint, GLuint); }
# 6991 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
# 6992 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIEXTPROC)(GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IVEXTPROC)(GLuint, const GLint *); }
# 6994 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IVEXTPROC)(GLuint, const GLint *); }
# 6995 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IVEXTPROC)(GLuint, const GLint *); }
# 6996 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IVEXTPROC)(GLuint, const GLint *); }
# 6997 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIVEXTPROC)(GLuint, const GLuint *); }
# 6998 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIVEXTPROC)(GLuint, const GLuint *); }
# 6999 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIVEXTPROC)(GLuint, const GLuint *); }
# 7000 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIVEXTPROC)(GLuint, const GLuint *); }
# 7001 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4BVEXTPROC)(GLuint, const GLbyte *); }
# 7002 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4SVEXTPROC)(GLuint, const GLshort *); }
# 7003 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UBVEXTPROC)(GLuint, const GLubyte *); }
# 7004 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4USVEXTPROC)(GLuint, const GLushort *); }
# 7005 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLVERTEXATTRIBIPOINTEREXTPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 7006 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIIVEXTPROC)(GLuint, GLenum, GLint *); }
# 7007 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIUIVEXTPROC)(GLuint, GLenum, GLuint *); }
# 7019 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERIEXTPROC)(GLuint, GLenum, GLint); }
# 7020 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREEXTPROC)(GLenum, GLenum, GLuint, GLint); }
# 7021 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
# 7022 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)(GLenum, GLenum, GLuint, GLint, GLenum); }
# 7030 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMVERTEXLIMITNVPROC)(GLenum, GLint); }
# 7053 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
# 7054 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
# 7055 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
# 7056 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 7057 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
# 7058 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
# 7059 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
# 7060 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
# 7061 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
# 7062 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 7063 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
# 7064 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
# 7065 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC)(GLenum, GLuint, GLint *); }
# 7066 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC)(GLenum, GLuint, GLuint *); }
# 7067 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERIIVNVPROC)(GLenum, GLuint, GLint *); }
# 7068 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC)(GLenum, GLuint, GLuint *); }
# 7078 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLfloat *); }
# 7079 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLint *); }
# 7080 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLuint *); }
# 7088 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei); }
# 7096 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei); }
# 7104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLBLITFRAMEBUFFEREXTPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum); }
# 7113 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 7114 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glext.h" 3
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei); }
# 2165 "/usr/include/GL/gl.h" 3
extern "C" GLhandleARB glCreateDebugObjectMESA() __attribute__((visibility("default")));
# 2166 "/usr/include/GL/gl.h" 3
extern "C" void glClearDebugLogMESA(GLhandleARB, GLenum, GLenum) __attribute__((visibility("default")));
# 2167 "/usr/include/GL/gl.h" 3
extern "C" void glGetDebugLogMESA(GLhandleARB, GLenum, GLenum, GLsizei, GLsizei *, GLcharARB *) __attribute__((visibility("default")));
# 2169 "/usr/include/GL/gl.h" 3
extern "C" GLsizei glGetDebugLogLengthMESA(GLhandleARB, GLenum, GLenum) __attribute__((visibility("default")));
# 2204 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*GLprogramcallbackMESA)(GLenum, GLvoid *); }
# 2206 "/usr/include/GL/gl.h" 3
extern "C" void glProgramCallbackMESA(GLenum, GLprogramcallbackMESA, GLvoid *) __attribute__((visibility("default")));
# 2208 "/usr/include/GL/gl.h" 3
extern "C" void glGetProgramRegisterfvMESA(GLenum, GLsizei, const GLubyte *, GLfloat *) __attribute__((visibility("default")));
# 2251 "/usr/include/GL/gl.h" 3
extern "C" void glBlendEquationSeparateATI(GLenum, GLenum) __attribute__((visibility("default")));
# 2252 "/usr/include/GL/gl.h" 3
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEATIPROC)(GLenum, GLenum); }
# 270 "/usr/include/GL/glu.h" 3
class GLUnurbs;
# 271 "/usr/include/GL/glu.h" 3
class GLUquadric;
# 272 "/usr/include/GL/glu.h" 3
class GLUtesselator;
# 279 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUnurbs GLUnurbsObj; }
# 280 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUquadric GLUquadricObj; }
# 281 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUtesselator GLUtesselatorObj; }
# 282 "/usr/include/GL/glu.h" 3
extern "C" { typedef GLUtesselator GLUtriangulatorObj; }
# 287 "/usr/include/GL/glu.h" 3
extern "C" { typedef void (*_GLUfuncptr)(void); }
# 289 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginCurve(GLUnurbs *) __attribute__((visibility("default")));
# 290 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginPolygon(GLUtesselator *) __attribute__((visibility("default")));
# 291 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginSurface(GLUnurbs *) __attribute__((visibility("default")));
# 292 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginTrim(GLUnurbs *) __attribute__((visibility("default")));
# 293 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild1DMipmapLevels(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
# 294 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild1DMipmaps(GLenum, GLint, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
# 295 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild2DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
# 296 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild2DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
# 297 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild3DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *) __attribute__((visibility("default")));
# 298 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild3DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) __attribute__((visibility("default")));
# 299 "/usr/include/GL/glu.h" 3
extern "C" GLboolean gluCheckExtension(const GLubyte *, const GLubyte *) __attribute__((visibility("default")));
# 300 "/usr/include/GL/glu.h" 3
extern "C" void gluCylinder(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint) __attribute__((visibility("default")));
# 301 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteNurbsRenderer(GLUnurbs *) __attribute__((visibility("default")));
# 302 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteQuadric(GLUquadric *) __attribute__((visibility("default")));
# 303 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteTess(GLUtesselator *) __attribute__((visibility("default")));
# 304 "/usr/include/GL/glu.h" 3
extern "C" void gluDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint) __attribute__((visibility("default")));
# 305 "/usr/include/GL/glu.h" 3
extern "C" void gluEndCurve(GLUnurbs *) __attribute__((visibility("default")));
# 306 "/usr/include/GL/glu.h" 3
extern "C" void gluEndPolygon(GLUtesselator *) __attribute__((visibility("default")));
# 307 "/usr/include/GL/glu.h" 3
extern "C" void gluEndSurface(GLUnurbs *) __attribute__((visibility("default")));
# 308 "/usr/include/GL/glu.h" 3
extern "C" void gluEndTrim(GLUnurbs *) __attribute__((visibility("default")));
# 309 "/usr/include/GL/glu.h" 3
extern "C" const GLubyte *gluErrorString(GLenum) __attribute__((visibility("default")));
# 310 "/usr/include/GL/glu.h" 3
extern "C" void gluGetNurbsProperty(GLUnurbs *, GLenum, GLfloat *) __attribute__((visibility("default")));
# 311 "/usr/include/GL/glu.h" 3
extern "C" const GLubyte *gluGetString(GLenum) __attribute__((visibility("default")));
# 312 "/usr/include/GL/glu.h" 3
extern "C" void gluGetTessProperty(GLUtesselator *, GLenum, GLdouble *) __attribute__((visibility("default")));
# 313 "/usr/include/GL/glu.h" 3
extern "C" void gluLoadSamplingMatrices(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *) __attribute__((visibility("default")));
# 314 "/usr/include/GL/glu.h" 3
extern "C" void gluLookAt(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 315 "/usr/include/GL/glu.h" 3
extern "C" GLUnurbs *gluNewNurbsRenderer() __attribute__((visibility("default")));
# 316 "/usr/include/GL/glu.h" 3
extern "C" GLUquadric *gluNewQuadric() __attribute__((visibility("default")));
# 317 "/usr/include/GL/glu.h" 3
extern "C" GLUtesselator *gluNewTess() __attribute__((visibility("default")));
# 318 "/usr/include/GL/glu.h" 3
extern "C" void gluNextContour(GLUtesselator *, GLenum) __attribute__((visibility("default")));
# 319 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallback(GLUnurbs *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
# 320 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallbackData(GLUnurbs *, GLvoid *) __attribute__((visibility("default")));
# 321 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallbackDataEXT(GLUnurbs *, GLvoid *) __attribute__((visibility("default")));
# 322 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum) __attribute__((visibility("default")));
# 323 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsProperty(GLUnurbs *, GLenum, GLfloat) __attribute__((visibility("default")));
# 324 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsSurface(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum) __attribute__((visibility("default")));
# 325 "/usr/include/GL/glu.h" 3
extern "C" void gluOrtho2D(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 326 "/usr/include/GL/glu.h" 3
extern "C" void gluPartialDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble) __attribute__((visibility("default")));
# 327 "/usr/include/GL/glu.h" 3
extern "C" void gluPerspective(GLdouble, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 328 "/usr/include/GL/glu.h" 3
extern "C" void gluPickMatrix(GLdouble, GLdouble, GLdouble, GLdouble, GLint *) __attribute__((visibility("default")));
# 329 "/usr/include/GL/glu.h" 3
extern "C" GLint gluProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
# 330 "/usr/include/GL/glu.h" 3
extern "C" void gluPwlCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLenum) __attribute__((visibility("default")));
# 331 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricCallback(GLUquadric *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
# 332 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricDrawStyle(GLUquadric *, GLenum) __attribute__((visibility("default")));
# 333 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricNormals(GLUquadric *, GLenum) __attribute__((visibility("default")));
# 334 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricOrientation(GLUquadric *, GLenum) __attribute__((visibility("default")));
# 335 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricTexture(GLUquadric *, GLboolean) __attribute__((visibility("default")));
# 336 "/usr/include/GL/glu.h" 3
extern "C" GLint gluScaleImage(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *) __attribute__((visibility("default")));
# 337 "/usr/include/GL/glu.h" 3
extern "C" void gluSphere(GLUquadric *, GLdouble, GLint, GLint) __attribute__((visibility("default")));
# 338 "/usr/include/GL/glu.h" 3
extern "C" void gluTessBeginContour(GLUtesselator *) __attribute__((visibility("default")));
# 339 "/usr/include/GL/glu.h" 3
extern "C" void gluTessBeginPolygon(GLUtesselator *, GLvoid *) __attribute__((visibility("default")));
# 340 "/usr/include/GL/glu.h" 3
extern "C" void gluTessCallback(GLUtesselator *, GLenum, _GLUfuncptr) __attribute__((visibility("default")));
# 341 "/usr/include/GL/glu.h" 3
extern "C" void gluTessEndContour(GLUtesselator *) __attribute__((visibility("default")));
# 342 "/usr/include/GL/glu.h" 3
extern "C" void gluTessEndPolygon(GLUtesselator *) __attribute__((visibility("default")));
# 343 "/usr/include/GL/glu.h" 3
extern "C" void gluTessNormal(GLUtesselator *, GLdouble, GLdouble, GLdouble) __attribute__((visibility("default")));
# 344 "/usr/include/GL/glu.h" 3
extern "C" void gluTessProperty(GLUtesselator *, GLenum, GLdouble) __attribute__((visibility("default")));
# 345 "/usr/include/GL/glu.h" 3
extern "C" void gluTessVertex(GLUtesselator *, GLdouble *, GLvoid *) __attribute__((visibility("default")));
# 346 "/usr/include/GL/glu.h" 3
extern "C" GLint gluUnProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
# 347 "/usr/include/GL/glu.h" 3
extern "C" GLint gluUnProject4(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *) __attribute__((visibility("default")));
# 231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutStrokeRoman; }
# 232 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutStrokeMonoRoman; }
# 239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutBitmap9By15; }
# 240 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutBitmap8By13; }
# 241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutBitmapTimesRoman10; }
# 242 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutBitmapTimesRoman24; }
# 243 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutBitmapHelvetica10; }
# 244 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutBitmapHelvetica12; }
# 245 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" { extern void *glutBitmapHelvetica18; }
# 394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutInit(int *, char **);
# 395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutInitDisplayMode(unsigned);
# 397 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutInitDisplayString(const char *);
# 399 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutInitWindowPosition(int, int);
# 400 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutInitWindowSize(int, int);
# 401 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutMainLoop();
# 404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutCreateWindow(const char *);
# 405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutCreateSubWindow(int, int, int, int, int);
# 406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutDestroyWindow(int);
# 407 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPostRedisplay();
# 409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPostWindowRedisplay(int);
# 411 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSwapBuffers();
# 412 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutGetWindow();
# 413 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetWindow(int);
# 414 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetWindowTitle(const char *);
# 415 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetIconTitle(const char *);
# 416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPositionWindow(int, int);
# 417 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutReshapeWindow(int, int);
# 418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPopWindow();
# 419 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPushWindow();
# 420 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutIconifyWindow();
# 421 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutShowWindow();
# 422 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutHideWindow();
# 424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutFullScreen();
# 425 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetCursor(int);
# 427 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWarpPointer(int, int);
# 431 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutEstablishOverlay();
# 432 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutRemoveOverlay();
# 433 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutUseLayer(GLenum);
# 434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPostOverlayRedisplay();
# 436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPostWindowOverlayRedisplay(int);
# 438 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutShowOverlay();
# 439 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutHideOverlay();
# 443 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutCreateMenu(void (*)(int));
# 444 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutDestroyMenu(int);
# 445 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutGetMenu();
# 446 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetMenu(int);
# 447 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutAddMenuEntry(const char *, int);
# 448 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutAddSubMenu(const char *, int);
# 449 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutChangeToMenuEntry(int, const char *, int);
# 450 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutChangeToSubMenu(int, const char *, int);
# 451 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutRemoveMenuItem(int);
# 452 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutAttachMenu(int);
# 453 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutDetachMenu(int);
# 456 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutDisplayFunc(void (*)(void));
# 457 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutReshapeFunc(void (*)(int, int));
# 458 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutKeyboardFunc(void (*)(unsigned char, int, int));
# 459 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutMouseFunc(void (*)(int, int, int, int));
# 460 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutMotionFunc(void (*)(int, int));
# 461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutPassiveMotionFunc(void (*)(int, int));
# 462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutEntryFunc(void (*)(int));
# 463 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutVisibilityFunc(void (*)(int));
# 464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutIdleFunc(void (*)(void));
# 465 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutTimerFunc(unsigned, void (*)(int), int);
# 466 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutMenuStateFunc(void (*)(int));
# 468 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSpecialFunc(void (*)(int, int, int));
# 469 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSpaceballMotionFunc(void (*)(int, int, int));
# 470 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSpaceballRotateFunc(void (*)(int, int, int));
# 471 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSpaceballButtonFunc(void (*)(int, int));
# 472 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutButtonBoxFunc(void (*)(int, int));
# 473 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutDialsFunc(void (*)(int, int));
# 474 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutTabletMotionFunc(void (*)(int, int));
# 475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutTabletButtonFunc(void (*)(int, int, int, int));
# 477 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutMenuStatusFunc(void (*)(int, int, int));
# 478 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutOverlayDisplayFunc(void (*)(void));
# 480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWindowStatusFunc(void (*)(int));
# 483 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutKeyboardUpFunc(void (*)(unsigned char, int, int));
# 484 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSpecialUpFunc(void (*)(int, int, int));
# 485 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutJoystickFunc(void (*)(unsigned, int, int, int), int);
# 491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetColor(int, GLfloat, GLfloat, GLfloat);
# 492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" GLfloat glutGetColor(int, int);
# 493 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutCopyColormap(int);
# 496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutGet(GLenum);
# 497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutDeviceGet(GLenum);
# 500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutExtensionSupported(const char *);
# 503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutGetModifiers();
# 504 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutLayerGet(GLenum);
# 508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutBitmapCharacter(void *, int);
# 509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutBitmapWidth(void *, int);
# 510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutStrokeCharacter(void *, int);
# 511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutStrokeWidth(void *, int);
# 513 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutBitmapLength(void *, const unsigned char *);
# 514 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutStrokeLength(void *, const unsigned char *);
# 518 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireSphere(GLdouble, GLint, GLint);
# 519 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidSphere(GLdouble, GLint, GLint);
# 520 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireCone(GLdouble, GLdouble, GLint, GLint);
# 521 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidCone(GLdouble, GLdouble, GLint, GLint);
# 522 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireCube(GLdouble);
# 523 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidCube(GLdouble);
# 524 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireTorus(GLdouble, GLdouble, GLint, GLint);
# 525 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidTorus(GLdouble, GLdouble, GLint, GLint);
# 526 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireDodecahedron();
# 527 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidDodecahedron();
# 528 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireTeapot(GLdouble);
# 529 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidTeapot(GLdouble);
# 530 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireOctahedron();
# 531 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidOctahedron();
# 532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireTetrahedron();
# 533 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidTetrahedron();
# 534 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutWireIcosahedron();
# 535 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSolidIcosahedron();
# 539 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutVideoResizeGet(GLenum);
# 540 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetupVideoResizing();
# 541 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutStopVideoResizing();
# 542 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutVideoResize(int, int, int, int);
# 543 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutVideoPan(int, int, int, int);
# 546 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutReportErrors();
# 562 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutIgnoreKeyRepeat(int);
# 563 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutSetKeyRepeat(int);
# 564 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutForceJoystickFunc();
# 576 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutGameModeString(const char *);
# 577 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutEnterGameMode();
# 578 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" void glutLeaveGameMode();
# 579 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glut.h"
extern "C" int glutGameModeGet(GLenum);
# 67 "/home/gdiamos/temp/cuda/bin//../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLSetGLDevice(int);
# 68 "/home/gdiamos/temp/cuda/bin//../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLRegisterBufferObject(GLuint);
# 69 "/home/gdiamos/temp/cuda/bin//../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLMapBufferObject(void **, GLuint);
# 70 "/home/gdiamos/temp/cuda/bin//../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLUnmapBufferObject(GLuint);
# 71 "/home/gdiamos/temp/cuda/bin//../include/cuda_gl_interop.h"
extern "C" cudaError_t cudaGLUnregisterBufferObject(GLuint);
# 47 "bodysystemcuda.cu"
extern "C" { void setDeviceSoftening(float softening)
# 48 "bodysystemcuda.cu"
{
# 49 "bodysystemcuda.cu"
auto float softeningSq = (softening * softening);
# 51 "bodysystemcuda.cu"
__cudaSafeCall(cudaMemcpyToSymbol("softeningSquared", &softeningSq, sizeof(float), 0, cudaMemcpyHostToDevice), "bodysystemcuda.cu", 53);
# 54 "bodysystemcuda.cu"
} }
# 56 "bodysystemcuda.cu"
extern "C" { void allocateNBodyArrays(float *vel[2], int numBodies)
# 57 "bodysystemcuda.cu"
{
# 59 "bodysystemcuda.cu"
auto unsigned memSize = ((sizeof(float) * (4)) * numBodies);
# 61 "bodysystemcuda.cu"
__cudaSafeCall(cudaMalloc((void **)(vel + 0), memSize), "bodysystemcuda.cu", 61);
# 62 "bodysystemcuda.cu"
__cudaSafeCall(cudaMalloc((void **)(vel + 1), memSize), "bodysystemcuda.cu", 62);
# 63 "bodysystemcuda.cu"
} }
# 65 "bodysystemcuda.cu"
extern "C" { void deleteNBodyArrays(float *vel[2])
# 66 "bodysystemcuda.cu"
{
# 67 "bodysystemcuda.cu"
__cudaSafeCall(cudaFree((void **)(vel[0])), "bodysystemcuda.cu", 67);
# 68 "bodysystemcuda.cu"
__cudaSafeCall(cudaFree((void **)(vel[1])), "bodysystemcuda.cu", 68);
# 69 "bodysystemcuda.cu"
} }
# 71 "bodysystemcuda.cu"
extern "C" { void copyArrayFromDevice(float *host, const float *
# 72 "bodysystemcuda.cu"
device, unsigned
# 73 "bodysystemcuda.cu"
pbo, int
# 74 "bodysystemcuda.cu"
numBodies)
# 75 "bodysystemcuda.cu"
{
# 76 "bodysystemcuda.cu"
if (pbo) {
# 77 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLMapBufferObject((void **)(&device), pbo), "bodysystemcuda.cu", 77); }
# 78 "bodysystemcuda.cu"
__cudaSafeCall(cudaMemcpy(host, device, (numBodies * 4) * sizeof(float), cudaMemcpyDeviceToHost), "bodysystemcuda.cu", 79);
# 80 "bodysystemcuda.cu"
if (pbo) {
# 81 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnmapBufferObject(pbo), "bodysystemcuda.cu", 81); }
# 82 "bodysystemcuda.cu"
} }
# 84 "bodysystemcuda.cu"
extern "C" { void copyArrayToDevice(float *device, const float *host, int numBodies)
# 85 "bodysystemcuda.cu"
{
# 86 "bodysystemcuda.cu"
__cudaSafeCall(cudaMemcpy(device, host, (numBodies * 4) * sizeof(float), cudaMemcpyHostToDevice), "bodysystemcuda.cu", 87);
# 88 "bodysystemcuda.cu"
} }
# 90 "bodysystemcuda.cu"
extern "C" { void registerGLBufferObject(unsigned pbo)
# 91 "bodysystemcuda.cu"
{
# 92 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLRegisterBufferObject(pbo), "bodysystemcuda.cu", 92);
# 93 "bodysystemcuda.cu"
} }
# 95 "bodysystemcuda.cu"
extern "C" { void unregisterGLBufferObject(unsigned pbo)
# 96 "bodysystemcuda.cu"
{
# 97 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnregisterBufferObject(pbo), "bodysystemcuda.cu", 97);
# 98 "bodysystemcuda.cu"
} }
# 100 "bodysystemcuda.cu"
extern "C" { void threadSync() { cudaThreadSynchronize(); } }
# 103 "bodysystemcuda.cu"
extern "C" { void integrateNbodySystem(float *newPos, float *newVel, float *
# 104 "bodysystemcuda.cu"
oldPos, float *oldVel, unsigned
# 105 "bodysystemcuda.cu"
pboOldPos, unsigned pboNewPos, float
# 106 "bodysystemcuda.cu"
deltaTime, float damping, int
# 107 "bodysystemcuda.cu"
numBodies, int p, int q, int
# 108 "bodysystemcuda.cu"
bUsePBO)
# 109 "bodysystemcuda.cu"
{
# 110 "bodysystemcuda.cu"
auto int sharedMemSize = ((p * q) * sizeof(float4));
# 112 "bodysystemcuda.cu"
auto dim3 threads(p, q, 1);
# 113 "bodysystemcuda.cu"
auto dim3 grid(numBodies / p, 1, 1);
# 115 "bodysystemcuda.cu"
if (bUsePBO)
# 116 "bodysystemcuda.cu"
{
# 117 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLMapBufferObject((void **)(&oldPos), pboOldPos), "bodysystemcuda.cu", 117);
# 118 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLMapBufferObject((void **)(&newPos), pboNewPos), "bodysystemcuda.cu", 118);
# 119 "bodysystemcuda.cu"
}
# 139 "bodysystemcuda.cu"
if ((threads.y) == (1))
# 140 "bodysystemcuda.cu"
{
# 149 "bodysystemcuda.cu"
cudaConfigureCall(grid, threads, sharedMemSize) ? ((void)0) : (__device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi)((float4 *)newPos, (float4 *)newVel, (float4 *)oldPos, (float4 *)oldVel, deltaTime, damping, numBodies);
# 153 "bodysystemcuda.cu"
} else
# 155 "bodysystemcuda.cu"
{
# 163 "bodysystemcuda.cu"
cudaConfigureCall(grid, threads, sharedMemSize) ? ((void)0) : (__device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi)((float4 *)newPos, (float4 *)newVel, (float4 *)oldPos, (float4 *)oldVel, deltaTime, damping, numBodies);
# 167 "bodysystemcuda.cu"
}
# 170 "bodysystemcuda.cu"
__cutilCheckMsg("Kernel execution failed", "bodysystemcuda.cu", 170);
# 172 "bodysystemcuda.cu"
if (bUsePBO)
# 173 "bodysystemcuda.cu"
{
# 174 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnmapBufferObject(pboNewPos), "bodysystemcuda.cu", 174);
# 175 "bodysystemcuda.cu"
__cudaSafeCall(cudaGLUnmapBufferObject(pboOldPos), "bodysystemcuda.cu", 175);
# 176 "bodysystemcuda.cu"
}
# 177 "bodysystemcuda.cu"
} }

# 1 "/tmp/tmpxft_000015ec_00000000-1_bodysystemcuda.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_000015ec_00000000-3_bodysystemcuda.fatbin.c" 1
# 1 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h" 1
# 83 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
extern "C" {
# 97 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* cubin;
} __cudaFatCubinEntry;
# 113 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* ptx;
} __cudaFatPtxEntry;
# 125 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* gpuProfileName;
    char* debug;
} __cudaFatDebugEntry;


typedef enum {
      __cudaFatDontSearchFlag = (1 << 0),
      __cudaFatDontCacheFlag = (1 << 1),
      __cudaFatSassDebugFlag = (1 << 2)
} __cudaFatCudaBinaryFlag;
# 144 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct {
    char* name;
} __cudaFatSymbol;
# 157 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
typedef struct __cudaFatCudaBinaryRec {
    unsigned long magic;
    unsigned long version;
    unsigned long gpuInfoVersion;
    char* key;
    char* ident;
    char* usageMode;
    __cudaFatPtxEntry *ptx;
    __cudaFatCubinEntry *cubin;
    __cudaFatDebugEntry *debug;
    void* debugInfo;
    unsigned int flags;
    __cudaFatSymbol *exported;
    __cudaFatSymbol *imported;
    struct __cudaFatCudaBinaryRec *dependends;
} __cudaFatCudaBinary;
# 191 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
    typedef enum {
        __cudaFatAvoidPTX,
        __cudaFatPreferBestCode
    } __cudaFatCompilationPolicy;
# 214 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
void fatGetCubinForGpuWithPolicy( __cudaFatCudaBinary *binary, __cudaFatCompilationPolicy policy, char* gpuName, char* *cubin, char* *dbgInfoFile );
# 225 "/home/gdiamos/temp/cuda/bin//../include/__cudaFatFormat.h"
void fatFreeCubin( char* cubin, char* dbgInfoFile );


}
# 2 "/tmp/tmpxft_000015ec_00000000-3_bodysystemcuda.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$sm_13$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d33315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x74736e6f630a7d6eull,
0x616e09090a7b2073ull,0x203d20202020656dull,0x6e696e6574666f73ull,0x6465726175715367ull,
0x616e67657309090aull,0x6e6f63203d20656dull,0x67657309090a7473ull,0x30203d20206d756eull,
0x657366666f09090aull,0x090a30203d202074ull,0x2020736574796209ull,0x630a7d0a34203d20ull,
0x6e090a7b2065646full,0x5a5f203d20656d61ull,0x726765746e693531ull,0x6569646f42657461ull,
0x76454530624c4973ull,0x3474616f6c663650ull,0x31535f31535f3153ull,0x6d6c090a6966665full,
0x090a30203d206d65ull,0x36203d206d656d73ull,0x2020676572090a34ull,0x6162090a3332203dull,
0x090a31203d202072ull,0x0a7b2074736e6f63ull,0x616e676573090909ull,0x6e6f63203d20656dull,
0x65730909090a7473ull,0x203d20206d756e67ull,0x66666f0909090a31ull,0x30203d2020746573ull,
0x657479620909090aull,0x0a34203d20202073ull,0x0a7b206d656d0909ull,0x3030307830090909ull,
0x090a206666333030ull,0x62090a7d090a7d09ull,0x7b2065646f636e69ull,0x303031783009090aull,
0x7830203530303030ull,0x3038376333303430ull,0x3430303061783020ull,0x3430783020313232ull,
0x0a20303837303032ull,0x3030306178300909ull,0x3078302031303434ull,0x2030383730303234ull,
0x6334303030617830ull,0x3234307830203532ull,0x090a203038373030ull,0x3030313034783009ull,
0x3030783020393032ull,0x3020303837303030ull,0x3034303030306178ull,0x3030343078302064ull,
0x09090a2030383730ull,0x3432303130347830ull,0x3030307830203534ull,0x7830203038373030ull,
0x3930343030313033ull,0x3030313463783020ull,0x3009090a20303837ull,0x3132323030303278ull,
0x3030343078302031ull,0x3678302030383763ull,0x2039303030303130ull,0x3738303030307830ull,
0x783009090a203038ull,0x3130633130303031ull,0x6330303434783020ull,0x3033783020303837ull,
0x3020393238303430ull,0x3837303031346378ull,0x32783009090a2030ull,0x2033303030383030ull,
0x3730303030307830ull,0x3030327830203038ull,0x7830203930306430ull,0x3038373832323430ull,
0x3064783009090a20ull,0x3020313134306530ull,0x3837303061303878ull,0x3030306178302030ull,
0x3078302064336534ull,0x2030383730303234ull,0x303031783009090aull,0x7830206432386630ull,
0x3038376333303630ull,0x3130303032783020ull,0x3430783020313465ull,0x0a20303837303030ull,
0x3030303178300909ull,0x3078302035333866ull,0x2030383763333034ull,0x3866303030317830ull,
0x3036307830203933ull,0x090a203038376333ull,0x3130303031783009ull,0x3430783020313065ull,
0x3020303837633330ull,0x6666313031303378ull,0x3130343678302064ull,0x09090a2038633738ull,
0x6130303030317830ull,0x3036307830203133ull,0x7830203038376333ull,0x3330303137303031ull,
0x3030303030783020ull,0x3009090a20303832ull,0x3138343030306178ull,0x3032343078302035ull,
0x3478302030383730ull,0x2039303232303030ull,0x3730303030307830ull,0x783009090a203038ull,
0x3934303231303036ull,0x3830303030783020ull,0x3034783020303837ull,0x3020393034313131ull,
0x3837303030303078ull,0x64783009090a2030ull,0x2035303630303830ull,0x3730303430307830ull,
0x3130337830203038ull,0x7830203934343230ull,0x3038373030313463ull,0x3036783009090a20ull,
0x3020353036313031ull,0x3837383030303078ull,0x3130303478302030ull,0x3078302064343232ull,
0x2030383730303030ull,0x303036783009090aull,0x7830203930303230ull,0x3038373834303030ull,
0x3030313033783020ull,0x3463783020353032ull,0x0a20303837303031ull,0x3031303378300909ull,
0x6378302039343632ull,0x2030383730303134ull,0x3430303030327830ull,0x3034307830203930ull,
0x090a203038373434ull,0x3130313036783009ull,0x3030783020353034ull,0x3020303837343030ull,
0x3530323130303678ull,0x3430303078302031ull,0x09090a2030383738ull,0x3238323030337830ull,
0x3030327830203030ull,0x7830203434386133ull,0x3430363832303032ull,0x3830303032783020ull,
0x3009090a20303036ull,0x3032323430303078ull,0x3030306378302035ull,0x3378302030383730ull,
0x2035303230343030ull,0x3730303134637830ull,0x783009090a203038ull,0x3130303034303033ull,
0x3030313463783020ull,0x3033783020303837ull,0x3020646631316337ull,0x6337303130343678ull,
0x33783009090a2038ull,0x2064343031343030ull,0x3730303134637830ull,0x3031327830203038ull,
0x7830203834306631ull,0x3434306630303132ull,0x3032783009090a20ull,0x3020313065313030ull,
0x3837343230343078ull,0x3530303378302030ull,0x3678302064663130ull,0x2038643734303063ull,
0x303031783009090aull,0x7830203535323230ull,0x3038376333303430ull,0x3230303031783020ull,
0x3430783020353534ull,0x0a20303832643330ull,0x6530306478300909ull,0x3878302031306132ull,
0x2030383730306130ull,0x3032303034307830ull,0x3234657830203130ull,0x090a203038373030ull,
0x3230303430783009ull,0x3465783020313032ull,0x3020303837343032ull,0x3034323030343078ull,
0x3032346578302031ull,0x09090a2030383738ull,0x3632303034307830ull,0x3234657830203130ull,
0x7830203038376330ull,0x3330656666313638ull,0x3030303030783020ull,0x3009090a20303030ull,
0x3030633630303178ull,0x3030303078302033ull,0x3278302030303130ull,0x2031303861343030ull,
0x3030303030307830ull,0x783009090a203330ull,0x3930303034303030ull,0x3030303063783020ull,
0x3031783020303837ull,0x3020313038663030ull,0x3837633330363078ull,0x62783009090a2030ull,
0x2034303236633439ull,0x3036343439627830ull,0x3030637830203830ull,0x7830203435323031ull,
0x6330343636343962ull,0x3065783009090a20ull,0x3020353534303230ull,0x3837343530303078ull,
0x3330306578302030ull,0x3078302035353630ull,0x2030383734353030ull,0x303162783009090aull,
0x7830203535613230ull,0x3038373030303030ull,0x3230303039783020ull,0x3034783020353561ull,
0x0a20303837303030ull,0x3531306378300909ull,0x6378302038356132ull,0x2034356132363130ull,
0x6530353130637830ull,0x3030307830203535ull,0x090a203038373030ull,0x3035313065783009ull,
0x3030783020393034ull,0x3020303837383330ull,0x3061323130306578ull,0x3330303078302035ull,
0x09090a2030383734ull,0x6132333030657830ull,0x3030307830203533ull,0x7830203038376332ull,
0x3833613663343962ull,0x3634343962783020ull,0x3009090a20343538ull,0x3263316530306378ull,
0x3634396278302063ull,0x6578302063306336ull,0x2064326132353130ull,0x3763323030307830ull,
0x783009090a203038ull,0x6432363033303065ull,0x6332303030783020ull,0x3162783020303837ull,
0x3020643236313030ull,0x3837303030303078ull,0x39783009090a2030ull,0x2064323631303030ull,
0x3730303030347830ull,0x3030637830203038ull,0x7830203835363162ull,0x6332363136313063ull,
0x3063783009090a20ull,0x3020643265306230ull,0x3837303030303078ull,0x6230306578302030ull,
0x3078302039306132ull,0x2030383738303030ull,0x303065783009090aull,0x7830203530363165ull,
0x3038373430303030ull,0x3133303065783020ull,0x3030783020353336ull,0x0a20303837343330ull,
0x6334396278300909ull,0x6278302038333237ull,0x2034353037343439ull,0x6331653030637830ull,
0x3439627830206332ull,0x090a206330343736ull,0x3235313065783009ull,0x3030783020643261ull,
0x3020303837633230ull,0x3236303330306578ull,0x3230303078302064ull,0x09090a2030383763ull,
0x3631303031627830ull,0x3030307830206432ull,0x7830203038373030ull,0x6432363130303039ull,
0x3030303034783020ull,0x3009090a20303837ull,0x3536316230306378ull,0x3631306378302038ull,
0x6378302063323631ull,0x2064326530623030ull,0x3730303030307830ull,0x783009090a203038ull,
0x3930613262303065ull,0x3830303030783020ull,0x3065783020303837ull,0x3020353036316530ull,
0x3837343030303078ull,0x65783009090a2030ull,0x2035353631333030ull,0x3734333030307830ull,
0x3439627830203038ull,0x7830203433613763ull,0x3833383734343962ull,0x3063783009090a20ull,
0x3020633261316430ull,0x3063373634396278ull,0x6530306578302063ull,0x3078302064326331ull,
0x2030383763323030ull,0x303065783009090aull,0x7830206432363033ull,0x3038376332303030ull,
0x3130303162783020ull,0x3030783020643236ull,0x0a20303837303030ull,0x3030303978300909ull,
0x3478302064323631ull,0x2030383730303030ull,0x3631623030637830ull,0x3130637830203835ull,
0x090a206332363136ull,0x3137303063783009ull,0x3030783020643236ull,0x3020303837303030ull,
0x3363316230306578ull,0x3030303078302039ull,0x09090a2030383738ull,0x3631643030657830ull,
0x3030307830203533ull,0x7830203038373430ull,0x3130303834303032ull,0x3030303030783020ull,
0x3009090a20333030ull,0x6631303830303378ull,0x3030343678302064ull,0x6578302038643734ull,
0x2064323631333030ull,0x3734353030307830ull,0x783009090a203038ull,0x3930303830303864ull,
0x3030303032783020ull,0x3031783020303837ull,0x3020333030633330ull,0x3832313030303078ull,
0x38783009090a2030ull,0x2033306566663136ull,0x3030303030307830ull,0x3030327830203030ull,
0x7830206433653931ull,0x3330303030303030ull,0x3033783009090a20ull,0x3020646666313031ull,
0x6437343130343678ull,0x3331303278302038ull,0x3278302038343461ull,0x2034343661313130ull,
0x303031783009090aull,0x7830203330306532ull,0x3038323130303030ull,0x6430303032783020ull,
0x3430783020353134ull,0x0a20303837383232ull,0x6530306478300909ull,0x3878302031306130ull,
0x2030383730306130ull,0x3864653030657830ull,0x3230307830203130ull,0x090a203038373030ull,
0x6464303065783009ull,0x3030783020353038ull,0x3020303837343032ull,0x3138646230306578ull,
0x3032303078302035ull,0x09090a2030383738ull,0x6137303031637830ull,0x3031637830203030ull,
0x7830203830613731ull,0x3032613735303163ull,0x6561303132783020ull,0x3009090a20343038ull,
0x3138643030306578ull,0x3132303078302031ull,0x6578302030383730ull,0x2035313864323030ull,
0x3730333230307830ull,0x783009090a203038ull,0x3931386438303065ull,0x3831323030783020ull,
0x3064783020303837ull,0x3020313132306530ull,0x3837303061306178ull,0x32783009090a2030ull,
0x2030316365613031ull,0x3438303030317830ull,0x3030317830203430ull,0x7830203930303130ull,
0x3038376333303430ull,0x3064783009090a20ull,0x3020313038306530ull,0x3837303061306178ull,
0x3030303378302030ull,0x3078302033303030ull,0x2030383730303030ull,0x303061783009090aull,
0x7830203131343030ull,0x3038373431313430ull,0x3030303061783020ull,0x3434783020353138ull,
0x0a20303837343030ull,0x3030306178300909ull,0x3078302039313030ull,0x2030383734313134ull,
0x6130303030397830ull,0x3030307830206431ull,0x090a203038373030ull,0x3030303061783009ull,
0x3434783020353163ull,0x3020303837343630ull,0x3165386533303278ull,0x6666663078302064ull,
0x09090a2066666666ull,0x6130373030637830ull,0x3030307830203531ull,0x7830203063376330ull,
0x3531613030303061ull,0x3436303438783020ull,0x3009090a20303837ull,0x3230316230303478ull,
0x3030303078302064ull,0x3678302030383730ull,0x2064323231613030ull,0x3763323030307830ull,
0x783009090a203038ull,0x6432363130313033ull,0x3030313463783020ull,0x3036783020303837ull,
0x3020643230316130ull,0x3837633230303078ull,0x32783009090a2030ull,0x2064326330303430ull,
0x3763323034307830ull,0x3030617830203038ull,0x7830206432363130ull,0x3038373436303434ull,
0x3063783009090a20ull,0x3020643136313730ull,0x6337633030303078ull,0x3030306178302030ull,
0x3878302064316530ull,0x2030383734363034ull,0x303032783009090aull,0x7830203531613030ull,
0x3038376331303430ull,0x3138303034783020ull,0x3030783020643136ull,0x0a20303837303030ull,
0x3930303678300909ull,0x3078302064313431ull,0x2030383763313030ull,0x6530303130337830ull,
0x3134637830206431ull,0x090a203038373030ull,0x3138303036783009ull,0x3030783020643134ull,
0x3020303837633130ull,0x3165303030303378ull,0x3130343078302039ull,0x09090a2030383738ull,
0x3830363030337830ull,0x3034367830203131ull,0x7830203038376330ull,0x3130343030303064ull,
0x3830303430783020ull,0x3009090a20303837ull,0x3030306631303378ull,0x3031346578302031ull,
0x3378302030383730ull,0x2035313830303030ull,0x3734313034307830ull,0x783009090a203038ull,
0x3131303030303061ull,0x3431306332783020ull,0x3064783020303837ull,0x3020313138303530ull,
0x3837383030343078ull,0x33783009090a2030ull,0x2064663530633730ull,0x3734313063367830ull,
0x3030327830203863ull,0x7830203130303030ull,0x3038373031303430ull,0x3064783009090a20ull,
0x3020313030303230ull,0x3035633230343078ull,0x3030303378302030ull,0x3078302033303030ull,
0x2030383730303030ull,0x303066783009090aull,0x7830203130303030ull,0x3130303030303065ull,
0x630a7d0a7d090a20ull,0x6e090a7b2065646full,0x5a5f203d20656d61ull,0x726765746e693531ull,
0x6569646f42657461ull,0x76454531624c4973ull,0x3474616f6c663650ull,0x31535f31535f3153ull,
0x6d6c090a6966665full,0x090a30203d206d65ull,0x36203d206d656d73ull,0x2020676572090a34ull,
0x6162090a3732203dull,0x090a31203d202072ull,0x0a7b2074736e6f63ull,0x616e676573090909ull,
0x6e6f63203d20656dull,0x65730909090a7473ull,0x203d20206d756e67ull,0x66666f0909090a31ull,
0x30203d2020746573ull,0x657479620909090aull,0x0a38203d20202073ull,0x0a7b206d656d0909ull,
0x3030307830090909ull,0x7830206666333030ull,0x3130303030303030ull,0x7d090a7d09090a20ull,
0x646f636e6962090aull,0x783009090a7b2065ull,0x3132303030303031ull,0x6333303430783020ull,
0x3061783020303837ull,0x3020393232343030ull,0x3837303032343078ull,0x61783009090a2030ull,
0x2064323434303030ull,0x3730303234307830ull,0x3030617830203038ull,0x7830203530633430ull,
0x3038373030323430ull,0x3034783009090a20ull,0x3020313065323431ull,0x3837303030303078ull,
0x3030306178302030ull,0x3078302064343032ull,0x2030383730303034ull,0x313033783009090aull,
0x7830203130303030ull,0x3038373030313463ull,0x3034313034783020ull,0x3030783020353534ull,
0x0a20303837303030ull,0x3431303678300909ull,0x3078302039306332ull,0x2030383730303030ull,
0x6161333130327830ull,0x3031317830203031ull,0x090a203030636630ull,0x3030303031783009ull,
0x3630783020643034ull,0x3020303837633330ull,0x3338303430303378ull,0x3031346378302035ull,
0x09090a2030383730ull,0x3039613030327830ull,0x3030307830203330ull,0x7830203038373030ull,
0x6430306430303032ull,0x3433323430783020ull,0x3009090a20303837ull,0x3136306530306478ull,
0x3061303878302031ull,0x6478302030383730ull,0x2039313232303830ull,0x3730303430307830ull,
0x783009090a203038ull,0x6433653430303061ull,0x3030323430783020ull,0x3031783020303837ull,
0x3020353238663030ull,0x3837633330343078ull,0x31783009090a2030ull,0x2031333866303030ull,
0x3763333036307830ull,0x3030327830203038ull,0x7830203934653130ull,0x3038373030303430ull,
0x3031783009090a20ull,0x3020393338663030ull,0x3837633330343078ull,0x3030303178302030ull,
0x3078302031306531ull,0x2030383763333036ull,0x303061783009090aull,0x7830203132633030ull,
0x3038373030303430ull,0x3132313033783020ull,0x3436783020646666ull,0x0a20386337383130ull,
0x3030303178300909ull,0x3178302034346138ull,0x2030346338323030ull,0x6530303030317830ull,
0x3034307830203135ull,0x090a203038376333ull,0x6337303031783009ull,0x3030783020333030ull,
0x3020303832303030ull,0x3030303731303478ull,0x3030303078302064ull,0x09090a2030383730ull,
0x3230363130367830ull,0x3030307830206430ull,0x7830203038376330ull,0x6430363030313033ull,
0x3030313463783020ull,0x3009090a20303837ull,0x3130303631303678ull,0x3030303078302039ull,
0x3478302030383763ull,0x2031306132633030ull,0x3730303030307830ull,0x783009090a203038ull,
0x3130383264303036ull,0x3030303030783020ull,0x3034783020303837ull,0x3020643061323031ull,
0x3837303030303078ull,0x61783009090a2030ull,0x2035313834303030ull,0x3730303234307830ull,
0x3130337830203038ull,0x7830203130303030ull,0x3038373030313463ull,0x3036783009090a20ull,
0x3020643138323131ull,0x3837633030303078ull,0x6330303678302030ull,0x3078302064303832ull,
0x2030383730303030ull,0x303034783009090aull,0x7830203130613261ull,0x3038373030303030ull,
0x3030313033783020ull,0x3463783020643165ull,0x0a20303837303031ull,0x3030303278300909ull,
0x3078302064303630ull,0x2030383734353034ull,0x3030303130337830ull,0x3134637830203130ull,
0x090a203038373030ull,0x3230313036783009ull,0x3030783020353538ull,0x3020303837633130ull,
0x3038326130303678ull,0x3030303078302031ull,0x09090a2030383730ull,0x3638353130327830ull,
0x3130327830206330ull,0x7830206331616133ull,0x3130303030303033ull,0x6330303430783020ull,
0x3009090a20303837ull,0x3165383430303278ull,0x3030303078302064ull,0x3278302033303030ull,
0x2063303638333130ull,0x3038333130327830ull,0x783009090a203030ull,0x3530653034303030ull,
0x3030303063783020ull,0x3033783020303837ull,0x3020646635316337ull,0x6337303130343678ull,
0x33783009090a2038ull,0x2064303630343030ull,0x3730303134637830ull,0x3030337830203038ull,
0x7830203130303034ull,0x3038373030313463ull,0x3032783009090a20ull,0x3020393530313030ull,
0x3837343030343078ull,0x3430303378302030ull,0x6378302031363430ull,0x2030383730303134ull,
0x303132783009090aull,0x7830206335306633ull,0x6331306630303132ull,0x3230303032783020ull,
0x3430783020313063ull,0x0a20303837383130ull,0x3530303378300909ull,0x3678302064663130ull,
0x2038643734303034ull,0x6530303030317830ull,0x3036307830203536ull,0x090a203038376333ull,
0x3230303031783009ull,0x3430783020353665ull,0x3020303832643330ull,0x3032336530306478ull,
0x3061303878302031ull,0x09090a2030383730ull,0x3030303034307830ull,0x3234657830203130ull,
0x7830203038373030ull,0x3130323030303430ull,0x3430323465783020ull,0x3009090a20303837ull,
0x3034303030343078ull,0x3032346578302031ull,0x3078302030383738ull,0x2031303630303034ull,
0x3763303234657830ull,0x783009090a203038ull,0x3330656666313638ull,0x3030303030783020ull,
0x3031783020303030ull,0x3020333030353730ull,0x3031303030303078ull,0x32783009090a2030ull,
0x2031306161343030ull,0x3030303030307830ull,0x3030307830203330ull,0x7830203930303034ull,
0x3038373030303063ull,0x3031783009090a20ull,0x3020313038663030ull,0x3837633330343078ull,
0x3135396278302030ull,0x6278302063303236ull,0x2034303036343439ull,0x303063783009090aull,
0x7830203436363033ull,0x3830343630353962ull,0x3031303065783020ull,0x3030783020353632ull,
0x0a20303837343630ull,0x3230306578300909ull,0x3078302035363430ull,0x2030383734363030ull,
0x3233303031627830ull,0x3030307830203536ull,0x090a203038373030ull,0x3330303039783009ull,
0x3034783020353632ull,0x3020303837303030ull,0x3632333931306378ull,0x6131306378302038ull,
0x09090a2034363233ull,0x3832393130637830ull,0x3030307830203536ull,0x7830203038373030ull,
0x3530323039313065ull,0x3833303030783020ull,0x3009090a20303837ull,0x3032333330306578ull,
0x3330303078302064ull,0x6578302030383730ull,0x2031333233323030ull,0x3734323030307830ull,
0x783009090a203038ull,0x3830613631353962ull,0x3634343962783020ull,0x3063783020383338ull,
0x3020343634303230ull,0x3263363035396278ull,0x65783009090a2034ull,0x2035366331653030ull,
0x3734363030307830ull,0x3030657830203038ull,0x7830203536323139ull,0x3038373436303030ull,
0x3162783009090a20ull,0x3020353632333030ull,0x3837303030303078ull,0x3030303978302030ull,
0x3478302035363233ull,0x2030383730303030ull,0x313063783009090aull,0x7830203836323339ull,
0x3436323361313063ull,0x3239313063783020ull,0x3030783020353638ull,0x0a20303837303030ull,
0x3931306578300909ull,0x3078302035306331ull,0x2030383734303030ull,0x3233323030657830ull,
0x3030307830203930ull,0x090a203038376330ull,0x3339303065783009ull,0x3030783020353232ull,
0x3020303837303330ull,0x3332373135396278ull,0x3434396278302030ull,0x09090a2038333037ull,
0x3831633030637830ull,0x3539627830203436ull,0x7830206330343730ull,0x3536633165303065ull,
0x3436303030783020ull,0x3009090a20303837ull,0x3636303330306578ull,0x3630303078302035ull,
0x6278302030383734ull,0x2035363233303031ull,0x3730303030307830ull,0x783009090a203038ull,
0x3536323330303039ull,0x3030303034783020ull,0x3063783020303837ull,0x3020383632333931ull,
0x3632336131306378ull,0x63783009090a2034ull,0x2035363832393130ull,0x3730303030307830ull,
0x3130657830203038ull,0x7830203530633139ull,0x3038373430303030ull,0x3065783009090a20ull,
0x3020393032336330ull,0x3837383030303078ull,0x3330306578302030ull,0x3078302035323233ull,
0x2030383734323030ull,0x353962783009090aull,0x7830203033613731ull,0x3833383734343962ull,
0x3163303063783020ull,0x3962783020343638ull,0x0a20633063373035ull,0x6530306578300909ull,
0x3078302035366331ull,0x2030383734363030ull,0x3630333030657830ull,0x3030307830203536ull,
0x090a203038373436ull,0x3330303162783009ull,0x3030783020353632ull,0x3020303837303030ull,
0x3632333030303978ull,0x3030303478302035ull,0x09090a2030383730ull,0x3233393130637830ull,
0x3130637830203836ull,0x7830203436323361ull,0x3536323334313063ull,0x3030303030783020ull,
0x3009090a20303837ull,0x3363313931306578ull,0x3030303078302039ull,0x6578302030383734ull,
0x2031333233633030ull,0x3738303030307830ull,0x783009090a203038ull,0x3130303834303032ull,
0x3030303030783020ull,0x3033783020333030ull,0x3020646631306130ull,0x6437343030343678ull,
0x65783009090a2038ull,0x2035323233333030ull,0x3734323030307830ull,0x3038647830203038ull,
0x7830203930303830ull,0x3038373030303032ull,0x3031783009090a20ull,0x3020333030353430ull,
0x3832313030303078ull,0x6631363878302030ull,0x3078302033306566ull,0x2030303030303030ull,
0x303032783009090aull,0x7830206433653931ull,0x3330303030303030ull,0x3132313033783020ull,
0x3436783020646666ull,0x0a20386437343130ull,0x3831303278300909ull,0x3278302063356561ull,
0x2038316338623030ull,0x3033303030327830ull,0x3034307830206431ull,0x090a203038376331ull,
0x3733303031783009ull,0x3030783020333030ull,0x3020303832313030ull,0x3030333830303178ull,
0x3030303078302033ull,0x09090a2030383730ull,0x3032353130347830ull,0x3030307830203130ull,
0x7830203038373030ull,0x3130323234313036ull,0x3030303030783020ull,0x3009090a20303837ull,
0x3030303031303378ull,0x3031346378302031ull,0x3678302030383730ull,0x2031303032343130ull,
0x3730303030307830ull,0x783009090a203038ull,0x3130303030303032ull,0x6334303430783020ull,
0x3032783020303837ull,0x3020313030383430ull,0x3030303030303078ull,0x30783009090a2033ull,
0x2035303030343030ull,0x3730303030637830ull,0x3034307830203038ull,0x7830203130303030ull,
0x3038373833323465ull,0x3430783009090a20ull,0x3020313032303030ull,0x3837303332346578ull,
0x3030343078302030ull,0x6578302031303430ull,0x2030383734323234ull,0x313638783009090aull,
0x7830203330656666ull,0x3030303030303030ull,0x3163373033783020ull,0x3436783020646631ull,
0x0a20386337343130ull,0x3930306178300909ull,0x3078302033303038ull,0x2030303030303030ull,
0x3038393030317830ull,0x3030307830203330ull,0x090a203038323030ull,0x3131383033783009ull,
0x3436783020646637ull,0x3020386337633034ull,0x3030383930303178ull,0x3030303078302033ull,
0x09090a2030383230ull,0x3632303030327830ull,0x3034307830203130ull,0x7830203038373832ull,
0x3130303034303033ull,0x3030313463783020ull,0x3009090a20303837ull,0x3034313430303378ull,
0x3031346378302035ull,0x3178302030383730ull,0x2039303038313030ull,0x3030303030307830ull,
0x783009090a203330ull,0x3130303830303032ull,0x3030303030783020ull,0x3030783020373030ull,
0x3020353030303030ull,0x3837303030306378ull,0x32783009090a2030ull,0x2039303438313030ull,
0x3030303030307830ull,0x3030327830203330ull,0x7830203130323030ull,0x3038373030303430ull,
0x3033783009090a20ull,0x3020646635306230ull,0x6337343130343678ull,0x6530356278302038ull,
0x6278302038333036ull,0x2030333236633035ull,0x303462783009090aull,0x7830203532346330ull,
0x3038373432323030ull,0x3139303031783020ull,0x3030783020333030ull,0x0a20303832303030ull,
0x3030306678300909ull,0x6578302031303030ull,0x2032303030303030ull,0x3464303030327830ull,
0x3234307830203531ull,0x090a203038373433ull,0x3065303064783009ull,0x3038783020313061ull,
0x3020303837303061ull,0x3038646530306578ull,0x3032303078302031ull,0x09090a2030383730ull,
0x3864633030657830ull,0x3230307830203530ull,0x7830203038373430ull,0x3531386439303065ull,
0x3830323030783020ull,0x3009090a20303837ull,0x3138613230303178ull,0x3030316378302063ull,
0x6378302030306137ull,0x2038306137313031ull,0x6137353031637830ull,0x783009090a203032ull,
0x3530386330303032ull,0x3433323430783020ull,0x3065783020303837ull,0x3020313138643030ull,
0x3837303132303078ull,0x65783009090a2030ull,0x2035313864323030ull,0x3734343230307830ull,
0x3030657830203038ull,0x7830203931386438ull,0x3038373034323030ull,0x3064783009090a20ull,
0x3020313132306530ull,0x3837303061306178ull,0x6430313278302030ull,0x3178302030316365ull,
0x2034303438303030ull,0x303031783009090aull,0x7830203930303130ull,0x3038376333303430ull,
0x3065303064783020ull,0x3061783020313038ull,0x0a20303837303061ull,0x3030303378300909ull,
0x3078302033303030ull,0x2030383730303030ull,0x3630303030617830ull,0x3134307830203131ull,
0x090a203038373431ull,0x3030303061783009ull,0x3434783020353138ull,0x3020303837343030ull,
0x3130303030306178ull,0x3131343078302039ull,0x09090a2030383734ull,0x6130303030397830ull,
0x3030307830206431ull,0x7830203038373030ull,0x3531633030303061ull,0x3436303434783020ull,
0x3009090a20303837ull,0x3165386533303278ull,0x6666663078302064ull,0x6378302066666666ull,
0x2035316130373030ull,0x3763303030307830ull,0x783009090a203063ull,0x3531613030303061ull,
0x3436303438783020ull,0x3034783020303837ull,0x3020353230316230ull,0x3837303030303078ull,
0x36783009090a2030ull,0x2035323231613030ull,0x3734323030307830ull,0x3130337830203038ull,
0x7830203532323130ull,0x3038373030313463ull,0x3036783009090a20ull,0x3020353230316130ull,
0x3837343230303078ull,0x3034303278302030ull,0x3078302035326330ull,0x2030383734323034ull,
0x303061783009090aull,0x7830203532323130ull,0x3038373436303434ull,0x3137303063783020ull,
0x3030783020643132ull,0x0a20306337633030ull,0x3030306178300909ull,0x3878302064316530ull,
0x2030383734363034ull,0x6130303030327830ull,0x3034307830203531ull,0x090a203038376331ull,
0x3138303034783009ull,0x3030783020643136ull,0x3020303837303030ull,0x3134313930303678ull,
0x3130303078302064ull,0x09090a2030383763ull,0x6530303130337830ull,0x3134637830206431ull,
0x7830203038373030ull,0x6431343138303036ull,0x6331303030783020ull,0x3009090a20303837ull,
0x3165303030303378ull,0x3130343078302039ull,0x3378302030383738ull,0x2031313830363030ull,
0x3763303034367830ull,0x783009090a203038ull,0x3130363030303064ull,0x3830303430783020ull,
0x3033783020303837ull,0x3020313030306631ull,0x3837303031346578ull,0x33783009090a2030ull,
0x2035313830303030ull,0x3734313034307830ull,0x3030617830203038ull,0x7830203131303030ull,
0x3038373431306332ull,0x3064783009090a20ull,0x3020313138303530ull,0x3837383030343078ull,
0x6337303378302030ull,0x3678302064663730ull,0x2038633734313063ull,0x303032783009090aull,
0x7830203130303030ull,0x3038373031303430ull,0x3033303064783020ull,0x3430783020313030ull,
0x0a20303035633230ull,0x3030303378300909ull,0x3078302033303030ull,0x2030383730303030ull,
0x3030303030667830ull,0x3030657830203130ull,0x090a203130303030ull,0x000000000a7d0a7dull
};


}



extern "C" {


static const unsigned long long __deviceText_$compute_13$[] = {
0x6f69737265762e09ull,0x2e090a332e31206eull,0x7320746567726174ull,0x2f2f090a33315f6dull,
0x656c69706d6f6320ull,0x2f20687469772064ull,0x6964672f656d6f68ull,0x6d65742f736f6d61ull,
0x6f2f616475632f70ull,0x696c2f34366e6570ull,0x2f090a65622f2f62ull,0x6e65706f766e202full,
0x746c697562206363ull,0x38303032206e6f20ull,0x0a0a33302d32312dull,0x752e206765722e09ull,
0x313c617225203233ull,0x65722e090a3b3e37ull,0x25203436752e2067ull,0x3b3e37313c616472ull,
0x2e206765722e090aull,0x3c61662520323366ull,0x722e090a3b3e3731ull,0x203436662e206765ull,
0x3e37313c61646625ull,0x206765722e090a3bull,0x767225203233752eull,0x722e090a3b3e353cull,
0x203436752e206765ull,0x3b3e353c76647225ull,0x2e206765722e090aull,0x3c76662520323366ull,
0x65722e090a3b3e35ull,0x25203436662e2067ull,0x0a3b3e353c766466ull,0x2d2d2d2f2f090a0aull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x6d6f43202f2f090aull,
0x2f20676e696c6970ull,0x78706d742f706d74ull,0x31303030305f7466ull,0x303030305f636535ull,
0x5f30312d30303030ull,0x7473797379646f62ull,0x632e616475636d65ull,0x2f2820692e337070ull,
0x494263632f706d74ull,0x5943727151462e23ull,0x2d2d2d2f2f090a29ull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2f2f090a0aull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x74704f202f2f090aull,0x2f090a3a736e6f69ull,
0x2d2d2d2d2d2d2d2full,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2f2f090a2d2d2d2dull,
0x7465677261542020ull,0x5349202c7874703aull,0x2c33315f6d733a41ull,0x3a6e6169646e4520ull,
0x202c656c7474696cull,0x207265746e696f50ull,0x0a34363a657a6953ull,0x334f2d20202f2f09ull,
0x696d6974704f2809ull,0x6c206e6f6974617aull,0x2f090a296c657665ull,0x280930672d20202full,
0x656c206775626544ull,0x2f2f090a296c6576ull,0x522809326d2d2020ull,0x64612074726f7065ull,
0x736569726f736976ull,0x2d2d2d2f2f090a29ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x656c69662e090a0aull,0x6d6f633c22093109ull,0x6e696c2d646e616dull,
0x69662e090a223e65ull,0x742f22093209656cull,0x6678706d742f706dull,0x3531303030305f74ull,
0x30303030305f6365ull,0x6f625f392d303030ull,0x6d65747379737964ull,0x6475632e61647563ull,
0x7570672e32656661ull,0x656c69662e090a22ull,0x7273752f22093309ull,0x6363672f62696c2full,
0x2d34365f3638782full,0x6e672d78756e696cull,0x2f332e332e342f75ull,0x2f6564756c636e69ull,
0x682e666564647473ull,0x656c69662e090a22ull,0x6d6f682f22093409ull,0x6f6d616964672f65ull,
0x632f706d65742f73ull,0x2f6e69622f616475ull,0x6c636e692f2e2e2full,0x2f7472632f656475ull,
0x725f656369766564ull,0x682e656d69746e75ull,0x656c69662e090a22ull,0x6d6f682f22093509ull,
0x6f6d616964672f65ull,0x632f706d65742f73ull,0x2f6e69622f616475ull,0x6c636e692f2e2e2full,
0x74736f682f656475ull,0x73656e696665645full,0x69662e090a22682eull,0x682f22093609656cull,
0x616964672f656d6full,0x706d65742f736f6dull,0x69622f616475632full,0x6e692f2e2e2f2f6eull,
0x75622f6564756c63ull,0x79745f6e69746c69ull,0x090a22682e736570ull,0x093709656c69662eull,
0x672f656d6f682f22ull,0x742f736f6d616964ull,0x616475632f706d65ull,0x2e2e2f2f6e69622full,
0x6564756c636e692full,0x5f6563697665642full,0x22682e7365707974ull,0x09656c69662e090aull,
0x656d6f682f220938ull,0x736f6d616964672full,0x75632f706d65742full,0x2f2f6e69622f6164ull,
0x756c636e692f2e2eull,0x65766972642f6564ull,0x2e73657079745f72ull,0x6c69662e090a2268ull,
0x6f682f2209390965ull,0x6d616964672f656dull,0x2f706d65742f736full,0x6e69622f61647563ull,
0x636e692f2e2e2f2full,0x7865742f6564756cull,0x7079745f65727574ull,0x2e090a22682e7365ull,
0x09303109656c6966ull,0x672f656d6f682f22ull,0x742f736f6d616964ull,0x616475632f706d65ull,
0x2e2e2f2f6e69622full,0x6564756c636e692full,0x5f726f746365762full,0x22682e7365707974ull,
0x09656c69662e090aull,0x6d6f682f22093131ull,0x6f6d616964672f65ull,0x632f706d65742f73ull,
0x2f6e69622f616475ull,0x6c636e692f2e2e2full,0x697665642f656475ull,0x636e75616c5f6563ull,
0x656d617261705f68ull,0x0a22682e73726574ull,0x3109656c69662e09ull,0x656d6f682f220932ull,
0x736f6d616964672full,0x75632f706d65742full,0x2f2f6e69622f6164ull,0x756c636e692f2e2eull,
0x732f7472632f6564ull,0x635f656761726f74ull,0x0a22682e7373616cull,0x3109656c69662e09ull,
0x2f7273752f220933ull,0x2f6564756c636e69ull,0x7079742f73746962ull,0x2e090a22682e7365ull,
0x09343109656c6966ull,0x6e692f7273752f22ull,0x69742f6564756c63ull,0x2e090a22682e656dull,
0x09353109656c6966ull,0x6b5f79646f626e22ull,0x75632e6c656e7265ull,0x656c69662e090a22ull,
0x6f682f2209363109ull,0x6d616964672f656dull,0x2f706d65742f736full,0x6e69622f61647563ull,
0x636e692f2e2e2f2full,0x6d6f632f6564756cull,0x636e75665f6e6f6dull,0x22682e736e6f6974ull,
0x09656c69662e090aull,0x6d6f682f22093731ull,0x6f6d616964672f65ull,0x632f706d65742f73ull,
0x2f6e69622f616475ull,0x6c636e692f2e2e2full,0x2f7472632f656475ull,0x63616d5f636e7566ull,
0x2e090a22682e6f72ull,0x09383109656c6966ull,0x672f656d6f682f22ull,0x742f736f6d616964ull,
0x616475632f706d65ull,0x2e2e2f2f6e69622full,0x6564756c636e692full,0x75665f6874616d2full,
0x2e736e6f6974636eull,0x6c69662e090a2268ull,0x682f220939310965ull,0x616964672f656d6full,
0x706d65742f736f6dull,0x69622f616475632full,0x6e692f2e2e2f2f6eull,0x65642f6564756c63ull,
0x6e75665f65636976ull,0x682e736e6f697463ull,0x656c69662e090a22ull,0x6f682f2209303209ull,
0x6d616964672f656dull,0x2f706d65742f736full,0x6e69622f61647563ull,0x636e692f2e2e2f2full,
0x74616d2f6564756cull,0x6174736e6f635f68ull,0x090a22682e73746eull,0x313209656c69662eull,
0x2f656d6f682f2209ull,0x2f736f6d61696467ull,0x6475632f706d6574ull,0x2e2f2f6e69622f61ull,
0x64756c636e692f2eull,0x5f31315f6d732f65ull,0x665f63696d6f7461ull,0x736e6f6974636e75ull,
0x69662e090a22682eull,0x2f2209323209656cull,0x6964672f656d6f68ull,0x6d65742f736f6d61ull,
0x622f616475632f70ull,0x692f2e2e2f2f6e69ull,0x732f6564756c636eull,0x6f74615f32315f6dull,
0x636e75665f63696dull,0x22682e736e6f6974ull,0x09656c69662e090aull,0x6d6f682f22093332ull,
0x6f6d616964672f65ull,0x632f706d65742f73ull,0x2f6e69622f616475ull,0x6c636e692f2e2e2full,
0x315f6d732f656475ull,0x656c62756f645f33ull,0x6f6974636e75665full,0x2e090a22682e736eull,
0x09343209656c6966ull,0x672f656d6f682f22ull,0x742f736f6d616964ull,0x616475632f706d65ull,
0x2e2e2f2f6e69622full,0x6564756c636e692full,0x657275747865742full,0x665f68637465665full,
0x736e6f6974636e75ull,0x69662e090a22682eull,0x2f2209353209656cull,0x6964672f656d6f68ull,
0x6d65742f736f6d61ull,0x622f616475632f70ull,0x692f2e2e2f2f6e69ull,0x6d2f6564756c636eull,
0x636e75665f687461ull,0x62645f736e6f6974ull,0x682e337874705f6cull,0x7478652e090a0a22ull,
0x6168732e096e7265ull,0x696c612e20646572ull,0x622e203631206e67ull,0x6465726168732038ull,
0x090a3b5d5b736f50ull,0x2e2074736e6f632eull,0x74666f7320323366ull,0x757153676e696e65ull,
0x090a0a3b64657261ull,0x5f207972746e652eull,0x6765746e6935315aull,0x69646f4265746172ull,
0x454530624c497365ull,0x74616f6c66365076ull,0x535f31535f315334ull,0x7b090a6966665f31ull,
0x2e206765722e090aull,0x333c722520323375ull,0x65722e090a3b3e36ull,0x25203436752e2067ull,
0x0a3b3e38323c6472ull,0x662e206765722e09ull,0x33393c6625203233ull,0x6765722e090a3b3eull,
0x2520646572702e20ull,0x2e090a3b3e373c70ull,0x752e206d61726170ull,0x6475635f5f203436ull,
0x5a5f5f6d72617061ull,0x726765746e693531ull,0x6569646f42657461ull,0x76454530624c4973ull,
0x3474616f6c663650ull,0x31535f31535f3153ull,0x77656e5f6966665full,0x702e090a3b736f50ull,
0x36752e206d617261ull,0x616475635f5f2034ull,0x315a5f5f6d726170ull,0x61726765746e6935ull,
0x736569646f426574ull,0x5076454530624c49ull,0x533474616f6c6636ull,0x5f31535f31535f31ull,
0x5677656e5f696666ull,0x61702e090a3b6c65ull,0x3436752e206d6172ull,0x70616475635f5f20ull,
0x35315a5f5f6d7261ull,0x7461726765746e69ull,0x49736569646f4265ull,0x365076454530624cull,
0x31533474616f6c66ull,0x665f31535f31535full,0x6f50646c6f5f6966ull,0x7261702e090a3b73ull,
0x203436752e206d61ull,0x6170616475635f5full,0x6935315a5f5f6d72ull,0x657461726765746eull,
0x4c49736569646f42ull,0x6636507645453062ull,0x5f31533474616f6cull,0x66665f31535f3153ull,
0x6c6556646c6f5f69ull,0x617261702e090a3bull,0x5f203233662e206dull,0x726170616475635full,
0x6e6935315a5f5f6dull,0x4265746172676574ull,0x624c49736569646full,0x6c66365076454530ull,
0x535f31533474616full,0x6966665f31535f31ull,0x695461746c65645full,0x61702e090a3b656dull,
0x3233662e206d6172ull,0x70616475635f5f20ull,0x35315a5f5f6d7261ull,0x7461726765746e69ull,
0x49736569646f4265ull,0x365076454530624cull,0x31533474616f6c66ull,0x665f31535f31535full,
0x69706d61645f6966ull,0x61702e090a3b676eull,0x3233732e206d6172ull,0x70616475635f5f20ull,
0x35315a5f5f6d7261ull,0x7461726765746e69ull,0x49736569646f4265ull,0x365076454530624cull,
0x31533474616f6c66ull,0x665f31535f31535full,0x6f426d756e5f6966ull,0x2e090a3b73656964ull,
0x3209353109636f6cull,0x424c240a30093730ull,0x6935315a5f5f3142ull,0x657461726765746eull,
0x4c49736569646f42ull,0x6636507645453062ull,0x5f31533474616f6cull,0x66665f31535f3153ull,
0x636f6c2e090a3a69ull,0x0931313209353109ull,0x752e747663090a30ull,0x09203631752e3233ull,
0x746e25202c317225ull,0x2020203b782e6469ull,0x63090a202f2f0920ull,0x752e3233752e7476ull,
0x2c32722509203631ull,0x2e64696174632520ull,0x2f2f092020203b78ull,0x6c2e6c756d090a20ull,
0x2509203233752e6full,0x2c317225202c3372ull,0x2020203b32722520ull,0x63090a202f2f0920ull,
0x752e3233752e7476ull,0x2c34722509203631ull,0x3b782e6469742520ull,0x2f2f092020202020ull,
0x752e646461090a20ull,0x2c35722509203233ull,0x7225202c33722520ull,0x2020202020203b34ull,
0x63090a202f2f0920ull,0x732e3436752e7476ull,0x3164722509203233ull,0x20203b357225202cull,
0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,0x647225202c326472ull,
0x20203b3631202c31ull,0x6c090a202f2f0920ull,0x2e6d617261702e64ull,0x6472250920343675ull,
0x75635f5f5b202c33ull,0x5f5f6d7261706164ull,0x6765746e6935315aull,0x69646f4265746172ull,
0x454530624c497365ull,0x74616f6c66365076ull,0x535f31535f315334ull,0x6c6f5f6966665f31ull,
0x2f093b5d736f5064ull,0x3039353a6469202full,0x70616475635f5f20ull,0x35315a5f5f6d7261ull,
0x7461726765746e69ull,0x49736569646f4265ull,0x365076454530624cull,0x31533474616f6c66ull,
0x665f31535f31535full,0x6f50646c6f5f6966ull,0x61090a3078302b73ull,0x09203436752e6464ull,
0x7225202c34647225ull,0x33647225202c3264ull,0x2f2f09202020203bull,0x6c672e646c090a20ull,
0x2e34762e6c61626full,0x66257b0920323366ull,0x66252c3266252c31ull,0x202c7d3466252c33ull,
0x5d302b346472255bull,0x2e090a202f2f093bull,0x3109353109636f6cull,0x7663090a30093235ull,
0x31752e3233732e74ull,0x202c367225092036ull,0x792e646961746325ull,0x202f2f092020203bull,
0x33732e766f6d090aull,0x202c377225092032ull,0x202020203b367225ull,0x2020202020202020ull,
0x7663090a202f2f09ull,0x31752e3233732e74ull,0x202c387225092036ull,0x3b792e6469746e25ull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203233732eull,0x202c387225202c39ull,
0x202020203b317225ull,0x646c090a202f2f09ull,0x732e6d617261702eull,0x3031722509203233ull,
0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x726765746e693531ull,0x6569646f42657461ull,
0x76454530624c4973ull,0x3474616f6c663650ull,0x31535f31535f3153ull,0x6d756e5f6966665full,
0x3b5d736569646f42ull,0x363a6469202f2f09ull,0x6475635f5f203030ull,0x5a5f5f6d72617061ull,
0x726765746e693531ull,0x6569646f42657461ull,0x76454530624c4973ull,0x3474616f6c663650ull,
0x31535f31535f3153ull,0x6d756e5f6966665full,0x302b736569646f42ull,0x2e766964090a3078ull,
0x3172250920323373ull,0x2c30317225202c31ull,0x2020203b39722520ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x25202c3231722509ull,0x367225202c313172ull,0x2f0920202020203bull,
0x70746573090a202full,0x203233752e65672eull,0x7225202c31702509ull,0x3b32317225202c36ull,
0x090a202f2f092020ull,0x203233662e766f6dull,0x6630202c35662509ull,0x3030303030303030ull,
0x2f0920202020203bull,0x766f6d090a30202full,0x662509203233662eull,0x3030306630202c36ull,
0x20203b3030303030ull,0x30202f2f09202020ull,0x33662e766f6d090aull,0x202c376625092032ull,
0x3030303030306630ull,0x20202020203b3030ull,0x40090a30202f2f09ull,0x2061726220317025ull,
0x335f305f744c2409ull,0x2020202020203b31ull,0x2f2f092020202020ull,0x752e766f6d090a20ull,
0x3564722509203436ull,0x646572616873202cull,0x202020203b736f50ull,0x6d090a202f2f0920ull,
0x09203233732e766full,0x7225202c33317225ull,0x20202020203b3131ull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203233732e6full,0x367225202c343172ull,0x20203b317225202cull,
0x63090a202f2f0920ull,0x752e3233732e7476ull,0x3531722509203631ull,0x696174636e25202cull,
0x2f2f09203b782e64ull,0x6c2e6c756d090a20ull,0x2509203233732e6full,0x317225202c363172ull,
0x203b317225202c35ull,0x63090a202f2f0920ull,0x752e3233752e7476ull,0x3731722509203631ull,
0x792e64697425202cull,0x2f2f09202020203bull,0x6c2e6c756d090a20ull,0x2509203233752e6full,
0x317225202c383172ull,0x203b317225202c37ull,0x6d090a202f2f0920ull,0x09203233752e766full,
0x3b30202c39317225ull,0x2020202020202020ull,0x2f2f092020202020ull,0x2e70746573090a20ull,
0x09203233752e7467ull,0x317225202c327025ull,0x203b39317225202cull,0x61090a202f2f0920ull,
0x09203233732e6464ull,0x7225202c30327225ull,0x3b337225202c3431ull,0x2f2f092020202020ull,
0x732e747663090a20ull,0x09203233752e3436ull,0x7225202c36647225ull,0x2020202020203b31ull,
0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,0x2c37647225092034ull,0x31202c3664722520ull,
0x2f2f092020203b36ull,0x752e646461090a20ull,0x3132722509203233ull,0x202c38317225202cull,
0x202020203b347225ull,0x63090a202f2f0920ull,0x752e3436752e7476ull,0x3864722509203233ull,
0x203b31327225202cull,0x2f2f092020202020ull,0x6c2e6c756d090a20ull,0x2509203436752e6full,
0x647225202c396472ull,0x20203b3631202c38ull,0x61090a202f2f0920ull,0x09203436752e6464ull,
0x25202c3031647225ull,0x647225202c356472ull,0x2f2f092020203b39ull,0x732e646461090a20ull,
0x3232722509203233ull,0x202c30327225202cull,0x202020203b347225ull,0x63090a202f2f0920ull,
0x732e3436732e7476ull,0x3164722509203233ull,0x3b32327225202c31ull,0x2f2f092020202020ull,
0x6c2e6c756d090a20ull,0x2509203436752e6full,0x7225202c32316472ull,0x3b3631202c313164ull,
0x61090a202f2f0920ull,0x09203436752e6464ull,0x25202c3331647225ull,0x647225202c336472ull,
0x2f2f0920203b3231ull,0x732e627573090a20ull,0x3332722509203233ull,0x202c30327225202cull,
0x2020203b36317225ull,0x61090a202f2f0920ull,0x09203233732e6464ull,0x7225202c34327225ull,
0x3b33327225202c34ull,0x2f2f092020202020ull,0x732e747663090a20ull,0x09203233732e3436ull,
0x25202c3431647225ull,0x202020203b343272ull,0x6d090a202f2f0920ull,0x36752e6f6c2e6c75ull,
0x3531647225092034ull,0x2c3431647225202cull,0x2f2f09203b363120ull,0x752e646461090a20ull,
0x3164722509203436ull,0x2c33647225202c36ull,0x203b353164722520ull,0x6d090a202f2f0920ull,
0x09203233732e766full,0x7225202c35327225ull,0x20202020203b3331ull,0x2f2f092020202020ull,
0x5f305f744c240a20ull,0x3c2f2f200a3a3532ull,0x6f4c203e706f6f6cull,0x2079646f6220706full,
0x32353120656e696cull,0x6e697473656e202cull,0x3a68747065642067ull,0x69747365202c3120ull,
0x746920646574616dull,0x736e6f6974617265ull,0x776f6e6b6e75203aull,0x09636f6c2e090a6eull,
0x3009343531093531ull,0x33732e646461090aull,0x2c36327225092032ull,0x7225202c37722520ull,
0x2020202020203b32ull,0x6573090a202f2f09ull,0x33732e746c2e7074ull,0x202c337025092032ull,
0x7225202c36327225ull,0x202f2f09203b3531ull,0x752e706c6573090aull,0x3164722509203436ull,
0x3331647225202c37ull,0x2c3631647225202cull,0x2f2f093b33702520ull,0x6c672e646c090a20ull,
0x2e34762e6c61626full,0x66257b0920323366ull,0x66252c3966252c38ull,0x7d313166252c3031ull,
0x37316472255b202cull,0x202f2f093b5d302bull,0x6168732e7473090aull,0x203233662e646572ull,
0x2b30316472255b09ull,0x3b386625202c5d30ull,0x363a6469202f2f09ull,0x6572616873203330ull,
0x3078302b736f5064ull,0x6168732e7473090aull,0x203233662e646572ull,0x2b30316472255b09ull,
0x3b396625202c5d34ull,0x363a6469202f2f09ull,0x6572616873203530ull,0x3078302b736f5064ull,
0x6168732e7473090aull,0x203233662e646572ull,0x2b30316472255b09ull,0x30316625202c5d38ull,
0x3a6469202f2f093bull,0x7261687320373036ull,0x78302b736f506465ull,0x68732e7473090a30ull,
0x3233662e64657261ull,0x30316472255b0920ull,0x6625202c5d32312bull,0x69202f2f093b3131ull,
0x6873203930363a64ull,0x2b736f5064657261ull,0x6f6c2e090a307830ull,0x3935310935310963ull,
0x2e726162090a3009ull,0x3b300920636e7973ull,0x2020202020202020ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x09353109636f6c2eull,0x6d090a3009323631ull,0x09203233662e766full,
0x6625202c32316625ull,0x2020202020203b37ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,
0x3331662509203233ull,0x20203b366625202cull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x6625202c34316625ull,0x2020202020203b35ull,0x2f2f092020202020ull,
0x3270252140090a20ull,0x4c24092061726220ull,0x203b36325f305f74ull,0x2020202020202020ull,
0x2f200a202f2f0920ull,0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,
0x3120656e696c2079ull,0x64616568202c3235ull,0x64656c6562616c20ull,0x325f305f744c2420ull,
0x752e646461090a35ull,0x3732722509203233ull,0x33202c317225202cull,0x202020202020203bull,
0x73090a202f2f0920ull,0x09203233732e7268ull,0x7225202c38327225ull,0x203b3133202c3732ull,
0x2f2f092020202020ull,0x732e766f6d090a20ull,0x3932722509203233ull,0x202020203b33202cull,
0x2020202020202020ull,0x61090a202f2f0920ull,0x09203233622e646eull,0x7225202c30337225ull,
0x39327225202c3832ull,0x2f2f09202020203bull,0x732e646461090a20ull,0x3133722509203233ull,
0x202c30337225202cull,0x2020203b37327225ull,0x73090a202f2f0920ull,0x09203233732e7268ull,
0x7225202c32337225ull,0x20203b32202c3133ull,0x2f2f092020202020ull,0x752e747663090a20ull,
0x09203233752e3436ull,0x25202c3831647225ull,0x202020203b383172ull,0x6d090a202f2f0920ull,
0x36752e6f6c2e6c75ull,0x3931647225092034ull,0x2c3831647225202cull,0x2f2f09203b363120ull,
0x752e646461090a20ull,0x3264722509203436ull,0x2c35647225202c30ull,0x203b393164722520ull,
0x6c090a202f2f0920ull,0x2e74736e6f632e64ull,0x3166250920323366ull,0x74666f735b202c35ull,
0x757153676e696e65ull,0x2f093b5d64657261ull,0x3238353a6469202full,0x696e6574666f7320ull,
0x657261757153676eull,0x6d090a3078302b64ull,0x09203233752e766full,0x3b30202c33337225ull,
0x2020202020202020ull,0x2f2f092020202020ull,0x6f6c3c2f2f200a20ull,0x74726150203e706full,
0x706f6f6c20666f20ull,0x696c2079646f6220ull,0x202c32353120656eull,0x62616c2064616568ull,
0x744c242064656c65ull,0x6d090a35325f305full,0x09203233732e766full,0x7225202c34337225ull,
0x20202020203b3233ull,0x2f2f092020202020ull,0x5f305f744c240a20ull,0x3c2f2f200a3a3832ull,
0x6f4c203e706f6f6cull,0x2079646f6220706full,0x32363120656e696cull,0x6e697473656e202cull,
0x3a68747065642067ull,0x69747365202c3220ull,0x746920646574616dull,0x736e6f6974617265ull,
0x776f6e6b6e75203aull,0x09636f6c2e090a6eull,0x3009303131093531ull,0x6168732e646c090aull,
0x203233662e646572ull,0x5b202c3631662509ull,0x5d302b3032647225ull,0x3a6469202f2f093bull,
0x7261687320303136ull,0x78302b736f506465ull,0x68732e646c090a30ull,0x3233662e64657261ull,
0x202c373166250920ull,0x342b30326472255bull,0x6469202f2f093b5dull,0x616873203131363aull,
0x302b736f50646572ull,0x732e646c090a3078ull,0x33662e6465726168ull,0x2c38316625092032ull,
0x2b30326472255b20ull,0x69202f2f093b5d38ull,0x6873203231363a64ull,0x2b736f5064657261ull,
0x627573090a307830ull,0x662509203233662eull,0x36316625202c3931ull,0x20203b316625202cull,
0x0a202f2f09202020ull,0x3233662e62757309ull,0x202c303266250920ull,0x6625202c37316625ull,
0x0920202020203b32ull,0x627573090a202f2full,0x662509203233662eull,0x38316625202c3132ull,
0x20203b336625202cull,0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c323266250920ull,
0x6625202c39316625ull,0x09202020203b3931ull,0x6c756d090a202f2full,0x662509203233662eull,
0x30326625202c3332ull,0x203b30326625202cull,0x0a202f2f09202020ull,0x3233662e6c756d09ull,
0x202c343266250920ull,0x6625202c31326625ull,0x09202020203b3132ull,0x646461090a202f2full,
0x662509203233662eull,0x32326625202c3532ull,0x203b33326625202cull,0x0a202f2f09202020ull,
0x3233662e64646109ull,0x202c363266250920ull,0x6625202c34326625ull,0x09202020203b3532ull,
0x646461090a202f2full,0x662509203233662eull,0x36326625202c3732ull,0x203b35316625202cull,
0x0a202f2f09202020ull,0x662e747271737209ull,0x3832662509203233ull,0x203b37326625202cull,
0x0920202020202020ull,0x6c756d090a202f2full,0x662509203233662eull,0x38326625202c3932ull,
0x203b38326625202cull,0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c303366250920ull,
0x6625202c38326625ull,0x09202020203b3932ull,0x6c756d090a202f2full,0x662509203233662eull,
0x30336625202c3133ull,0x20203b346625202cull,0x0a202f2f09202020ull,0x3233662e64616d09ull,
0x202c323166250920ull,0x6625202c39316625ull,0x32316625202c3133ull,0x6d090a202f2f093bull,
0x09203233662e6461ull,0x6625202c33316625ull,0x31336625202c3032ull,0x093b33316625202cull,
0x64616d090a202f2full,0x662509203233662eull,0x31326625202c3431ull,0x202c31336625202cull,
0x2f2f093b34316625ull,0x09636f6c2e090a20ull,0x3009333131093531ull,0x6168732e646c090aull,
0x203233662e646572ull,0x5b202c3233662509ull,0x36312b3032647225ull,0x6469202f2f093b5dull,
0x616873203331363aull,0x302b736f50646572ull,0x732e646c090a3078ull,0x33662e6465726168ull,
0x2c33336625092032ull,0x2b30326472255b20ull,0x202f2f093b5d3032ull,0x73203431363a6469ull,
0x736f506465726168ull,0x646c090a3078302bull,0x2e6465726168732eull,0x3366250920323366ull,
0x326472255b202c34ull,0x2f093b5d34322b30ull,0x3531363a6469202full,0x5064657261687320ull,
0x090a3078302b736full,0x203233662e627573ull,0x25202c3533662509ull,0x316625202c323366ull,
0x2f0920202020203bull,0x2e627573090a202full,0x3366250920323366ull,0x2c33336625202c36ull,
0x2020203b32662520ull,0x090a202f2f092020ull,0x203233662e627573ull,0x25202c3733662509ull,
0x336625202c343366ull,0x2f0920202020203bull,0x2e6c756d090a202full,0x3366250920323366ull,
0x2c35336625202c38ull,0x20203b3533662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,
0x25202c3933662509ull,0x336625202c363366ull,0x2f09202020203b36ull,0x2e6c756d090a202full,
0x3466250920323366ull,0x2c37336625202c30ull,0x20203b3733662520ull,0x090a202f2f092020ull,
0x203233662e646461ull,0x25202c3134662509ull,0x336625202c383366ull,0x2f09202020203b39ull,
0x2e646461090a202full,0x3466250920323366ull,0x2c30346625202c32ull,0x20203b3134662520ull,
0x090a202f2f092020ull,0x203233662e646461ull,0x25202c3334662509ull,0x316625202c323466ull,
0x2f09202020203b35ull,0x72717372090a202full,0x2509203233662e74ull,0x346625202c343466ull,
0x2020202020203b33ull,0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3534662509ull,
0x346625202c343466ull,0x2f09202020203b34ull,0x2e6c756d090a202full,0x3466250920323366ull,
0x2c34346625202c36ull,0x20203b3534662520ull,0x090a202f2f092020ull,0x203233662e6c756dull,
0x25202c3734662509ull,0x346625202c363466ull,0x2f0920202020203bull,0x2e64616d090a202full,
0x3166250920323366ull,0x2c35336625202c32ull,0x25202c3734662520ull,0x202f2f093b323166ull,
0x33662e64616d090aull,0x2c33316625092032ull,0x25202c3633662520ull,0x316625202c373466ull,
0x090a202f2f093b33ull,0x203233662e64616dull,0x25202c3431662509ull,0x346625202c373366ull,
0x3b34316625202c37ull,0x6c2e090a202f2f09ull,0x313109353109636full,0x2e646c090a300937ull,
0x662e646572616873ull,0x3834662509203233ull,0x30326472255b202cull,0x2f2f093b5d32332bull,
0x203631363a646920ull,0x6f50646572616873ull,0x6c090a3078302b73ull,0x6465726168732e64ull,
0x662509203233662eull,0x6472255b202c3934ull,0x093b5d36332b3032ull,0x31363a6469202f2full,
0x6465726168732037ull,0x0a3078302b736f50ull,0x726168732e646c09ull,0x09203233662e6465ull,
0x255b202c30356625ull,0x5d30342b30326472ull,0x3a6469202f2f093bull,0x7261687320383136ull,
0x78302b736f506465ull,0x662e627573090a30ull,0x3135662509203233ull,0x202c38346625202cull,
0x202020203b316625ull,0x73090a202f2f0920ull,0x09203233662e6275ull,0x6625202c32356625ull,
0x3b326625202c3934ull,0x2f2f092020202020ull,0x662e627573090a20ull,0x3335662509203233ull,
0x202c30356625202cull,0x202020203b336625ull,0x6d090a202f2f0920ull,0x09203233662e6c75ull,
0x6625202c34356625ull,0x31356625202c3135ull,0x2f2f09202020203bull,0x662e6c756d090a20ull,
0x3535662509203233ull,0x202c32356625202cull,0x2020203b32356625ull,0x6d090a202f2f0920ull,
0x09203233662e6c75ull,0x6625202c36356625ull,0x33356625202c3335ull,0x2f2f09202020203bull,
0x662e646461090a20ull,0x3735662509203233ull,0x202c34356625202cull,0x2020203b35356625ull,
0x61090a202f2f0920ull,0x09203233662e6464ull,0x6625202c38356625ull,0x37356625202c3635ull,
0x2f2f09202020203bull,0x662e646461090a20ull,0x3935662509203233ull,0x202c38356625202cull,
0x2020203b35316625ull,0x72090a202f2f0920ull,0x3233662e74727173ull,0x202c303666250920ull,
0x2020203b39356625ull,0x2f2f092020202020ull,0x662e6c756d090a20ull,0x3136662509203233ull,
0x202c30366625202cull,0x2020203b30366625ull,0x6d090a202f2f0920ull,0x09203233662e6c75ull,
0x6625202c32366625ull,0x31366625202c3036ull,0x2f2f09202020203bull,0x662e6c756d090a20ull,
0x3336662509203233ull,0x202c32366625202cull,0x202020203b346625ull,0x6d090a202f2f0920ull,
0x09203233662e6461ull,0x6625202c32316625ull,0x33366625202c3135ull,0x093b32316625202cull,
0x64616d090a202f2full,0x662509203233662eull,0x32356625202c3331ull,0x202c33366625202cull,
0x2f2f093b33316625ull,0x662e64616d090a20ull,0x3431662509203233ull,0x202c33356625202cull,
0x6625202c33366625ull,0x0a202f2f093b3431ull,0x353109636f6c2e09ull,0x090a300938313109ull,
0x203436752e646461ull,0x202c303264722509ull,0x36202c3032647225ull,0x2f09202020203b34ull,
0x732e646c090a202full,0x33662e6465726168ull,0x2c34366625092032ull,0x2b30326472255b20ull,
0x2f2f093b5d36312dull,0x203931363a646920ull,0x6f50646572616873ull,0x6c090a3078302b73ull,
0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3536ull,0x3b5d32312d2b3032ull,
0x363a6469202f2f09ull,0x6572616873203032ull,0x3078302b736f5064ull,0x6168732e646c090aull,
0x203233662e646572ull,0x5b202c3636662509ull,0x382d2b3032647225ull,0x6469202f2f093b5dull,
0x616873203132363aull,0x302b736f50646572ull,0x2e627573090a3078ull,0x3666250920323366ull,
0x2c34366625202c37ull,0x2020203b31662520ull,0x090a202f2f092020ull,0x203233662e627573ull,
0x25202c3836662509ull,0x326625202c353666ull,0x2f0920202020203bull,0x2e627573090a202full,
0x3666250920323366ull,0x2c36366625202c39ull,0x2020203b33662520ull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x25202c3037662509ull,0x366625202c373666ull,0x2f09202020203b37ull,
0x2e6c756d090a202full,0x3766250920323366ull,0x2c38366625202c31ull,0x20203b3836662520ull,
0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3237662509ull,0x366625202c393666ull,
0x2f09202020203b39ull,0x2e646461090a202full,0x3766250920323366ull,0x2c30376625202c33ull,
0x20203b3137662520ull,0x090a202f2f092020ull,0x203233662e646461ull,0x25202c3437662509ull,
0x376625202c323766ull,0x2f09202020203b33ull,0x2e646461090a202full,0x3766250920323366ull,
0x2c34376625202c35ull,0x20203b3531662520ull,0x090a202f2f092020ull,0x33662e7472717372ull,
0x2c36376625092032ull,0x20203b3537662520ull,0x2f09202020202020ull,0x2e6c756d090a202full,
0x3766250920323366ull,0x2c36376625202c37ull,0x20203b3637662520ull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x25202c3837662509ull,0x376625202c363766ull,0x2f09202020203b37ull,
0x2e6c756d090a202full,0x3766250920323366ull,0x2c38376625202c39ull,0x2020203b34662520ull,
0x090a202f2f092020ull,0x203233662e64616dull,0x25202c3231662509ull,0x376625202c373666ull,
0x3b32316625202c39ull,0x616d090a202f2f09ull,0x2509203233662e64ull,0x366625202c333166ull,
0x2c39376625202c38ull,0x2f093b3331662520ull,0x2e64616d090a202full,0x3166250920323366ull,
0x2c39366625202c34ull,0x25202c3937662520ull,0x202f2f093b343166ull,0x3109636f6c2e090aull,
0x0a30093931310935ull,0x3233752e64646109ull,0x202c333372250920ull,0x3b34202c33337225ull,
0x0920202020202020ull,0x746573090a202f2full,0x3233752e746c2e70ull,0x25202c3470250920ull,
0x317225202c333372ull,0x0a202f2f0920203bull,0x7262203470254009ull,0x305f744c24092061ull,
0x202020203b38325full,0x0920202020202020ull,0x5f744c240a202f2full,0x2f200a3a36325f30ull,
0x203e706f6f6c3c2full,0x20666f2074726150ull,0x646f6220706f6f6cull,0x3120656e696c2079ull,
0x64616568202c3235ull,0x64656c6562616c20ull,0x325f305f744c2420ull,0x09636f6c2e090a35ull,
0x3009323631093531ull,0x33662e766f6d090aull,0x202c376625092032ull,0x2020203b32316625ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,0x33316625202c3666ull,
0x202020202020203bull,0x202f2f0920202020ull,0x33662e766f6d090aull,0x202c356625092032ull,
0x2020203b34316625ull,0x2020202020202020ull,0x6c2e090a202f2f09ull,0x363109353109636full,
0x726162090a300934ull,0x300920636e79732eull,0x202020202020203bull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233732e64646109ull,0x25202c3772250920ull,0x20203b31202c3772ull,
0x0920202020202020ull,0x646461090a202f2full,0x722509203436752eull,0x647225202c363164ull,
0x37647225202c3631ull,0x0a202f2f0920203bull,0x3436752e64646109ull,0x2c33316472250920ull,
0x202c333164722520ull,0x0920203b37647225ull,0x746573090a202f2full,0x3233752e656e2e70ull,
0x25202c3570250920ull,0x32317225202c3772ull,0x0a202f2f0920203bull,0x7262203570254009ull,
0x305f744c24092061ull,0x202020203b35325full,0x0920202020202020ull,0x617262090a202f2full,
0x4c240920696e752eull,0x203b33325f305f74ull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x31335f305f744c24ull,0x5f305f744c240a3aull,0x6f6c2e090a3a3332ull,0x3931320935310963ull,
0x702e646c090a3009ull,0x3436752e6d617261ull,0x2c31326472250920ull,0x616475635f5f5b20ull,
0x315a5f5f6d726170ull,0x61726765746e6935ull,0x736569646f426574ull,0x5076454530624c49ull,
0x533474616f6c6636ull,0x5f31535f31535f31ull,0x56646c6f5f696666ull,0x202f2f093b5d6c65ull,
0x5f203232363a6469ull,0x726170616475635full,0x6e6935315a5f5f6dull,0x4265746172676574ull,
0x624c49736569646full,0x6c66365076454530ull,0x535f31533474616full,0x6966665f31535f31ull,
0x2b6c6556646c6f5full,0x646461090a307830ull,0x722509203436752eull,0x647225202c323264ull,
0x32647225202c3132ull,0x0a202f2f0920203bull,0x626f6c672e646c09ull,0x33662e34762e6c61ull,
0x303866257b092032ull,0x66252c313866252cull,0x7d333866252c3238ull,0x32326472255b202cull,
0x202f2f093b5d302bull,0x3109636f6c2e090aull,0x0a30093532320935ull,0x617261702e646c09ull,
0x2509203233662e6dull,0x5f5f5b202c343866ull,0x6d72617061647563ull,0x746e6935315a5f5full,
0x6f42657461726765ull,0x30624c4973656964ull,0x6f6c663650764545ull,0x31535f3153347461ull,
0x5f6966665f31535full,0x6d695461746c6564ull,0x69202f2f093b5d65ull,0x5f5f203538353a64ull,
0x6d72617061647563ull,0x746e6935315a5f5full,0x6f42657461726765ull,0x30624c4973656964ull,
0x6f6c663650764545ull,0x31535f3153347461ull,0x5f6966665f31535full,0x6d695461746c6564ull,
0x6c090a3078302b65ull,0x2e6d617261702e64ull,0x3866250920323366ull,0x75635f5f5b202c35ull,
0x5f5f6d7261706164ull,0x6765746e6935315aull,0x69646f4265746172ull,0x454530624c497365ull,
0x74616f6c66365076ull,0x535f31535f315334ull,0x61645f6966665f31ull,0x093b5d676e69706dull,
0x38353a6469202f2full,0x616475635f5f2036ull,0x315a5f5f6d726170ull,0x61726765746e6935ull,
0x736569646f426574ull,0x5076454530624c49ull,0x533474616f6c6636ull,0x5f31535f31535f31ull,
0x706d61645f696666ull,0x0a3078302b676e69ull,0x3233662e64616d09ull,0x202c363866250920ull,
0x6625202c34386625ull,0x3b30386625202c37ull,0x756d090a202f2f09ull,0x2509203233662e6cull,
0x386625202c373866ull,0x3b36386625202c35ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,
0x0a30093632320935ull,0x3233662e64616d09ull,0x202c383866250920ull,0x6625202c34386625ull,
0x3b31386625202c36ull,0x756d090a202f2f09ull,0x2509203233662e6cull,0x386625202c393866ull,
0x3b38386625202c35ull,0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093732320935ull,
0x3233662e64616d09ull,0x202c303966250920ull,0x6625202c34386625ull,0x3b32386625202c35ull,
0x756d090a202f2f09ull,0x2509203233662e6cull,0x386625202c313966ull,0x3b30396625202c35ull,
0x202f2f0920202020ull,0x3109636f6c2e090aull,0x0a30093033320935ull,0x3233662e64616d09ull,
0x25202c3166250920ull,0x386625202c373866ull,0x093b316625202c34ull,0x6f6c2e090a202f2full,
0x3133320935310963ull,0x2e64616d090a3009ull,0x3266250920323366ull,0x202c39386625202cull,
0x6625202c34386625ull,0x090a202f2f093b32ull,0x09353109636f6c2eull,0x6d090a3009323332ull,
0x09203233662e6461ull,0x396625202c336625ull,0x2c34386625202c31ull,0x2f2f093b33662520ull,
0x09636f6c2e090a20ull,0x3009353332093531ull,0x7261702e646c090aull,0x09203436752e6d61ull,
0x5b202c3332647225ull,0x6170616475635f5full,0x6935315a5f5f6d72ull,0x657461726765746eull,
0x4c49736569646f42ull,0x6636507645453062ull,0x5f31533474616f6cull,0x66665f31535f3153ull,
0x736f5077656e5f69ull,0x6469202f2f093b5dull,0x635f5f203732363aull,0x5f6d726170616475ull,
0x65746e6935315a5full,0x646f426574617267ull,0x4530624c49736569ull,0x616f6c6636507645ull,
0x5f31535f31533474ull,0x6e5f6966665f3153ull,0x78302b736f507765ull,0x752e646461090a30ull,
0x3264722509203436ull,0x3332647225202c34ull,0x203b32647225202cull,0x73090a202f2f0920ull,
0x6c61626f6c672e74ull,0x203233662e34762eull,0x2b34326472255b09ull,0x3166257b202c5d30ull,
0x3366252c3266252cull,0x2f093b7d3466252cull,0x636f6c2e090a202full,0x0936333209353109ull,
0x61702e646c090a30ull,0x203436752e6d6172ull,0x202c353264722509ull,0x70616475635f5f5bull,
0x35315a5f5f6d7261ull,0x7461726765746e69ull,0x49736569646f4265ull,0x365076454530624cull,
0x31533474616f6c66ull,0x665f31535f31535full,0x655677656e5f6966ull,0x69202f2f093b5d6cull,
0x5f5f203233363a64ull,0x6d72617061647563ull,0x746e6935315a5f5full,0x6f42657461726765ull,
0x30624c4973656964ull,0x6f6c663650764545ull,0x31535f3153347461ull,0x5f6966665f31535full,
0x302b6c655677656eull,0x2e646461090a3078ull,0x6472250920343675ull,0x32647225202c3632ull,
0x3b32647225202c35ull,0x090a202f2f092020ull,0x61626f6c672e7473ull,0x3233662e34762e6cull,
0x36326472255b0920ull,0x66257b202c5d302bull,0x2c393866252c3738ull,0x3866252c31396625ull,
0x0a202f2f093b7d33ull,0x353109636f6c2e09ull,0x090a300938333209ull,0x2020203b74697865ull,
0x2020202020202020ull,0x2020202020202020ull,0x2f09202020202020ull,0x6557444c240a202full,
0x6935315a5f5f646eull,0x657461726765746eull,0x4c49736569646f42ull,0x6636507645453062ull,
0x5f31533474616f6cull,0x66665f31535f3153ull,0x2f2f207d090a3a69ull,0x746e6935315a5f20ull,
0x6f42657461726765ull,0x30624c4973656964ull,0x6f6c663650764545ull,0x31535f3153347461ull,
0x0a6966665f31535full,0x7972746e652e090aull,0x746e6935315a5f20ull,0x6f42657461726765ull,
0x31624c4973656964ull,0x6f6c663650764545ull,0x31535f3153347461ull,0x0a6966665f31535full,
0x6765722e090a7b09ull,0x7225203233752e20ull,0x2e090a3b3e37343cull,0x3436752e20676572ull,
0x3e35333c64722520ull,0x206765722e090a3bull,0x3c6625203233662eull,0x722e090a3b3e3639ull,
0x646572702e206765ull,0x3b3e30313c702520ull,0x6d617261702e090aull,0x5f5f203436752e20ull,
0x6d72617061647563ull,0x746e6935315a5f5full,0x6f42657461726765ull,0x31624c4973656964ull,
0x6f6c663650764545ull,0x31535f3153347461ull,0x5f6966665f31535full,0x0a3b736f5077656eull,
0x206d617261702e09ull,0x635f5f203436752eull,0x5f6d726170616475ull,0x65746e6935315a5full,
0x646f426574617267ull,0x4531624c49736569ull,0x616f6c6636507645ull,0x5f31535f31533474ull,
0x6e5f6966665f3153ull,0x090a3b6c65567765ull,0x2e206d617261702eull,0x75635f5f20343675ull,
0x5f5f6d7261706164ull,0x6765746e6935315aull,0x69646f4265746172ull,0x454531624c497365ull,
0x74616f6c66365076ull,0x535f31535f315334ull,0x6c6f5f6966665f31ull,0x2e090a3b736f5064ull,
0x752e206d61726170ull,0x6475635f5f203436ull,0x5a5f5f6d72617061ull,0x726765746e693531ull,
0x6569646f42657461ull,0x76454531624c4973ull,0x3474616f6c663650ull,0x31535f31535f3153ull,
0x646c6f5f6966665full,0x702e090a3b6c6556ull,0x33662e206d617261ull,0x616475635f5f2032ull,
0x315a5f5f6d726170ull,0x61726765746e6935ull,0x736569646f426574ull,0x5076454531624c49ull,
0x533474616f6c6636ull,0x5f31535f31535f31ull,0x746c65645f696666ull,0x090a3b656d695461ull,
0x2e206d617261702eull,0x75635f5f20323366ull,0x5f5f6d7261706164ull,0x6765746e6935315aull,
0x69646f4265746172ull,0x454531624c497365ull,0x74616f6c66365076ull,0x535f31535f315334ull,
0x61645f6966665f31ull,0x090a3b676e69706dull,0x2e206d617261702eull,0x75635f5f20323373ull,
0x5f5f6d7261706164ull,0x6765746e6935315aull,0x69646f4265746172ull,0x454531624c497365ull,
0x74616f6c66365076ull,0x535f31535f315334ull,0x756e5f6966665f31ull,0x3b736569646f426dull,
0x3109636f6c2e090aull,0x0a30093730320935ull,0x5a5f5f3142424c24ull,0x726765746e693531ull,
0x6569646f42657461ull,0x76454531624c4973ull,0x3474616f6c663650ull,0x31535f31535f3153ull,
0x2e090a3a6966665full,0x3209353109636f6cull,0x7663090a30093131ull,0x31752e3233752e74ull,
0x202c317225092036ull,0x3b782e6469746e25ull,0x202f2f0920202020ull,0x33752e747663090aull,
0x2509203631752e32ull,0x61746325202c3272ull,0x2020203b782e6469ull,0x756d090a202f2f09ull,
0x3233752e6f6c2e6cull,0x25202c3372250920ull,0x3b327225202c3172ull,0x202f2f0920202020ull,
0x33752e747663090aull,0x2509203631752e32ull,0x64697425202c3472ull,0x20202020203b782eull,
0x6461090a202f2f09ull,0x2509203233752e64ull,0x2c337225202c3572ull,0x2020203b34722520ull,
0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233732e34ull,0x357225202c316472ull,
0x202020202020203bull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x202c326472250920ull,
0x3631202c31647225ull,0x202f2f092020203bull,0x7261702e646c090aull,0x09203436752e6d61ull,
0x5f5b202c33647225ull,0x726170616475635full,0x6e6935315a5f5f6dull,0x4265746172676574ull,
0x624c49736569646full,0x6c66365076454531ull,0x535f31533474616full,0x6966665f31535f31ull,
0x5d736f50646c6f5full,0x3a6469202f2f093bull,0x75635f5f20383336ull,0x5f5f6d7261706164ull,
0x6765746e6935315aull,0x69646f4265746172ull,0x454531624c497365ull,0x74616f6c66365076ull,
0x535f31535f315334ull,0x6c6f5f6966665f31ull,0x3078302b736f5064ull,0x36752e646461090aull,
0x2c34647225092034ull,0x25202c3264722520ull,0x202020203b336472ull,0x646c090a202f2f09ull,
0x2e6c61626f6c672eull,0x09203233662e3476ull,0x3266252c3166257bull,0x3466252c3366252cull,
0x346472255b202c7dull,0x202f2f093b5d302bull,0x3109636f6c2e090aull,0x0a30093235310935ull,
0x3233732e74766309ull,0x722509203631752eull,0x6961746325202c36ull,0x092020203b792e64ull,
0x766f6d090a202f2full,0x722509203233732eull,0x203b367225202c37ull,0x2020202020202020ull,
0x0a202f2f09202020ull,0x3233732e74766309ull,0x722509203631752eull,0x6469746e25202c38ull,
0x09202020203b792eull,0x6c756d090a202f2full,0x203233732e6f6c2eull,0x7225202c39722509ull,
0x203b317225202c38ull,0x0a202f2f09202020ull,0x617261702e646c09ull,0x2509203233732e6dull,
0x5f5f5b202c303172ull,0x6d72617061647563ull,0x746e6935315a5f5full,0x6f42657461726765ull,
0x31624c4973656964ull,0x6f6c663650764545ull,0x31535f3153347461ull,0x5f6966665f31535full,
0x6569646f426d756eull,0x69202f2f093b5d73ull,0x5f5f203734363a64ull,0x6d72617061647563ull,
0x746e6935315a5f5full,0x6f42657461726765ull,0x31624c4973656964ull,0x6f6c663650764545ull,
0x31535f3153347461ull,0x5f6966665f31535full,0x6569646f426d756eull,0x64090a3078302b73ull,
0x09203233732e7669ull,0x7225202c31317225ull,0x3b397225202c3031ull,0x2f2f092020202020ull,
0x752e646461090a20ull,0x3231722509203233ull,0x202c31317225202cull,0x202020203b367225ull,
0x63090a202f2f0920ull,0x752e3233752e7476ull,0x3331722509203631ull,0x792e64697425202cull,
0x2f2f09202020203bull,0x2e70746573090a20ull,0x09203233752e6567ull,0x367225202c317025ull,
0x203b32317225202cull,0x6d090a202f2f0920ull,0x09203436752e766full,0x6873202c35647225ull,
0x3b736f5064657261ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,0x2c35662509203233ull,
0x3030303030663020ull,0x202020203b303030ull,0x090a30202f2f0920ull,0x203233662e766f6dull,
0x6630202c36662509ull,0x3030303030303030ull,0x2f0920202020203bull,0x766f6d090a30202full,
0x662509203233662eull,0x3030306630202c37ull,0x20203b3030303030ull,0x30202f2f09202020ull,
0x622031702540090aull,0x5f744c2409206172ull,0x2020203b36335f31ull,0x2020202020202020ull,
0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x317225202c343172ull,0x2020202020203b31ull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203233752eull,0x33317225202c3531ull,
0x20203b317225202cull,0x6461090a202f2f09ull,0x2509203233732e64ull,0x317225202c363172ull,
0x203b327225202c33ull,0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203233732eull,
0x2c367225202c3731ull,0x2020203b38722520ull,0x7663090a202f2f09ull,0x31752e3233752e74ull,
0x2c38317225092036ull,0x64696174636e2520ull,0x202f2f09203b782eull,0x6f6c2e6c756d090aull,
0x722509203233752eull,0x38317225202c3931ull,0x20203b317225202cull,0x6f6d090a202f2f09ull,
0x2509203233752e76ull,0x203b30202c303272ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x672e70746573090aull,0x2509203233752e74ull,0x2c317225202c3270ull,0x20203b3032722520ull,
0x6461090a202f2f09ull,0x2509203233752e64ull,0x317225202c313272ull,0x203b347225202c35ull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203233752eull,0x37317225202c3232ull,
0x20203b317225202cull,0x7663090a202f2f09ull,0x33752e3436752e74ull,0x2c36647225092032ull,
0x20203b3132722520ull,0x202f2f0920202020ull,0x33752e646461090aull,0x2c33327225092032ull,
0x7225202c33722520ull,0x20202020203b3232ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,
0x202c376472250920ull,0x3631202c36647225ull,0x202f2f092020203bull,0x33752e646461090aull,
0x2c34327225092032ull,0x25202c3332722520ull,0x202020203b353172ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x647225202c386472ull,0x3b35647225202c37ull,0x202f2f0920202020ull,
0x33752e627573090aull,0x2c35327225092032ull,0x25202c3432722520ull,0x202020203b393172ull,
0x7663090a202f2f09ull,0x33752e3436732e74ull,0x2c39647225092032ull,0x2020203b39722520ull,
0x202f2f0920202020ull,0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c303164ull,
0x20203b3631202c39ull,0x6461090a202f2f09ull,0x2509203233752e64ull,0x327225202c363272ull,
0x203b347225202c34ull,0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233752e34ull,
0x7225202c31316472ull,0x20202020203b3632ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,
0x2c32316472250920ull,0x202c313164722520ull,0x202f2f09203b3631ull,0x36752e646461090aull,
0x3331647225092034ull,0x202c33647225202cull,0x20203b3231647225ull,0x6461090a202f2f09ull,
0x2509203233752e64ull,0x327225202c373272ull,0x203b347225202c35ull,0x202f2f0920202020ull,
0x36752e747663090aull,0x2509203233752e34ull,0x7225202c34316472ull,0x20202020203b3732ull,
0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c35316472250920ull,0x202c343164722520ull,
0x202f2f09203b3631ull,0x36752e646461090aull,0x3631647225092034ull,0x202c33647225202cull,
0x20203b3531647225ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,0x317225202c383272ull,
0x2020202020203b34ull,0x202f2f0920202020ull,0x325f315f744c240aull,0x6c3c2f2f200a3a34ull,
0x6f6f4c203e706f6full,0x6c2079646f622070ull,0x2c32353120656e69ull,0x676e697473656e20ull,
0x203a687470656420ull,0x6d69747365202c31ull,0x6574692064657461ull,0x3a736e6f69746172ull,
0x6e776f6e6b6e7520ull,0x3109636f6c2e090aull,0x0a30093435310935ull,0x3233732e64646109ull,
0x202c393272250920ull,0x7225202c36317225ull,0x09202020203b3731ull,0x746573090a202f2full,
0x3233752e746c2e70ull,0x25202c3370250920ull,0x317225202c393272ull,0x0a202f2f09203b38ull,
0x36752e706c657309ull,0x3731647225092034ull,0x2c3331647225202cull,0x202c363164722520ull,
0x202f2f093b337025ull,0x6f6c672e646c090aull,0x662e34762e6c6162ull,0x3866257b09203233ull,
0x3166252c3966252cull,0x2c7d313166252c30ull,0x2b37316472255b20ull,0x0a202f2f093b5d30ull,
0x726168732e747309ull,0x09203233662e6465ull,0x5d302b386472255bull,0x09203b386625202cull,
0x34363a6469202f2full,0x6465726168732039ull,0x0a3078302b736f50ull,0x726168732e747309ull,
0x09203233662e6465ull,0x5d342b386472255bull,0x09203b396625202cull,0x35363a6469202f2full,
0x6465726168732031ull,0x0a3078302b736f50ull,0x726168732e747309ull,0x09203233662e6465ull,
0x5d382b386472255bull,0x093b30316625202cull,0x35363a6469202f2full,0x6465726168732033ull,
0x0a3078302b736f50ull,0x726168732e747309ull,0x09203233662e6465ull,0x32312b386472255bull,
0x3b31316625202c5dull,0x363a6469202f2f09ull,0x6572616873203535ull,0x3078302b736f5064ull,
0x3109636f6c2e090aull,0x0a30093935310935ull,0x6e79732e72616209ull,0x2020203b30092063ull,
0x2020202020202020ull,0x0920202020202020ull,0x6f6c2e090a202f2full,0x3236310935310963ull,
0x2e766f6d090a3009ull,0x3166250920323366ull,0x203b376625202c32ull,0x2020202020202020ull,
0x090a202f2f092020ull,0x203233662e766f6dull,0x25202c3331662509ull,0x20202020203b3666ull,
0x2f09202020202020ull,0x2e766f6d090a202full,0x3166250920323366ull,0x203b356625202c34ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x7262203270252140ull,0x315f744c24092061ull,
0x202020203b35325full,0x2f09202020202020ull,0x6c3c2f2f200a202full,0x726150203e706f6full,
0x6f6f6c20666f2074ull,0x6c2079646f622070ull,0x2c32353120656e69ull,0x616c206461656820ull,
0x4c242064656c6562ull,0x090a34325f315f74ull,0x203233752e646461ull,0x25202c3033722509ull,
0x20203b33202c3172ull,0x2f09202020202020ull,0x2e726873090a202full,0x3372250920323373ull,
0x2c30337225202c31ull,0x202020203b313320ull,0x090a202f2f092020ull,0x203233732e766f6dull,
0x33202c3233722509ull,0x202020202020203bull,0x2f09202020202020ull,0x2e646e61090a202full,
0x3372250920323362ull,0x2c31337225202c33ull,0x20203b3233722520ull,0x090a202f2f092020ull,
0x203233732e646461ull,0x25202c3433722509ull,0x337225202c333372ull,0x2f09202020203b30ull,
0x2e726873090a202full,0x3372250920323373ull,0x2c34337225202c35ull,0x20202020203b3220ull,
0x090a202f2f092020ull,0x2e3436752e747663ull,0x6472250920323375ull,0x35317225202c3831ull,
0x2f0920202020203bull,0x2e6c756d090a202full,0x09203436752e6f6cull,0x25202c3931647225ull,
0x3631202c38316472ull,0x090a202f2f09203bull,0x203436752e646461ull,0x202c303264722509ull,
0x7225202c35647225ull,0x2f0920203b393164ull,0x632e646c090a202full,0x3233662e74736e6full,
0x202c353166250920ull,0x696e6574666f735bull,0x657261757153676eull,0x69202f2f093b5d64ull,
0x6f73203732363a64ull,0x53676e696e657466ull,0x302b646572617571ull,0x2e766f6d090a3078ull,
0x3372250920323375ull,0x2020203b30202c36ull,0x2020202020202020ull,0x200a202f2f092020ull,
0x3e706f6f6c3c2f2full,0x666f207472615020ull,0x6f6220706f6f6c20ull,0x20656e696c207964ull,
0x616568202c323531ull,0x656c6562616c2064ull,0x5f315f744c242064ull,0x2e766f6d090a3432ull,
0x3372250920323373ull,0x3b35337225202c37ull,0x2020202020202020ull,0x240a202f2f092020ull,
0x3a37325f315f744cull,0x6f6f6c3c2f2f200aull,0x20706f6f4c203e70ull,0x6e696c2079646f62ull,
0x6e202c3236312065ull,0x6420676e69747365ull,0x2c32203a68747065ull,0x74616d6974736520ull,
0x6172657469206465ull,0x75203a736e6f6974ull,0x090a6e776f6e6b6eull,0x09353109636f6c2eull,
0x6c090a3009303131ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3631ull,
0x2f093b5d302b3032ull,0x3635363a6469202full,0x5064657261687320ull,0x090a3078302b736full,
0x65726168732e646cull,0x2509203233662e64ull,0x72255b202c373166ull,0x093b5d342b303264ull,
0x35363a6469202f2full,0x6465726168732037ull,0x0a3078302b736f50ull,0x726168732e646c09ull,
0x09203233662e6465ull,0x255b202c38316625ull,0x3b5d382b30326472ull,0x363a6469202f2f09ull,
0x6572616873203835ull,0x3078302b736f5064ull,0x33662e627573090aull,0x2c39316625092032ull,
0x25202c3631662520ull,0x20202020203b3166ull,0x7573090a202f2f09ull,0x2509203233662e62ull,
0x316625202c303266ull,0x203b326625202c37ull,0x202f2f0920202020ull,0x33662e627573090aull,
0x2c31326625092032ull,0x25202c3831662520ull,0x20202020203b3366ull,0x756d090a202f2f09ull,
0x2509203233662e6cull,0x316625202c323266ull,0x3b39316625202c39ull,0x202f2f0920202020ull,
0x33662e6c756d090aull,0x2c33326625092032ull,0x25202c3032662520ull,0x202020203b303266ull,
0x756d090a202f2f09ull,0x2509203233662e6cull,0x326625202c343266ull,0x3b31326625202c31ull,
0x202f2f0920202020ull,0x33662e646461090aull,0x2c35326625092032ull,0x25202c3232662520ull,
0x202020203b333266ull,0x6461090a202f2f09ull,0x2509203233662e64ull,0x326625202c363266ull,
0x3b35326625202c34ull,0x202f2f0920202020ull,0x33662e646461090aull,0x2c37326625092032ull,
0x25202c3632662520ull,0x202020203b353166ull,0x7372090a202f2f09ull,0x203233662e747271ull,
0x25202c3832662509ull,0x202020203b373266ull,0x202f2f0920202020ull,0x33662e6c756d090aull,
0x2c39326625092032ull,0x25202c3832662520ull,0x202020203b383266ull,0x756d090a202f2f09ull,
0x2509203233662e6cull,0x326625202c303366ull,0x3b39326625202c38ull,0x202f2f0920202020ull,
0x33662e6c756d090aull,0x2c31336625092032ull,0x25202c3033662520ull,0x20202020203b3466ull,
0x616d090a202f2f09ull,0x2509203233662e64ull,0x316625202c323166ull,0x2c31336625202c39ull,
0x2f093b3231662520ull,0x2e64616d090a202full,0x3166250920323366ull,0x2c30326625202c33ull,
0x25202c3133662520ull,0x202f2f093b333166ull,0x33662e64616d090aull,0x2c34316625092032ull,
0x25202c3132662520ull,0x316625202c313366ull,0x090a202f2f093b34ull,0x09353109636f6c2eull,
0x6c090a3009333131ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3233ull,
0x093b5d36312b3032ull,0x35363a6469202f2full,0x6465726168732039ull,0x0a3078302b736f50ull,
0x726168732e646c09ull,0x09203233662e6465ull,0x255b202c33336625ull,0x5d30322b30326472ull,
0x3a6469202f2f093bull,0x7261687320303636ull,0x78302b736f506465ull,0x68732e646c090a30ull,
0x3233662e64657261ull,0x202c343366250920ull,0x322b30326472255bull,0x69202f2f093b5d34ull,
0x6873203136363a64ull,0x2b736f5064657261ull,0x627573090a307830ull,0x662509203233662eull,
0x32336625202c3533ull,0x20203b316625202cull,0x0a202f2f09202020ull,0x3233662e62757309ull,
0x202c363366250920ull,0x6625202c33336625ull,0x0920202020203b32ull,0x627573090a202f2full,
0x662509203233662eull,0x34336625202c3733ull,0x20203b336625202cull,0x0a202f2f09202020ull,
0x3233662e6c756d09ull,0x202c383366250920ull,0x6625202c35336625ull,0x09202020203b3533ull,
0x6c756d090a202f2full,0x662509203233662eull,0x36336625202c3933ull,0x203b36336625202cull,
0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c303466250920ull,0x6625202c37336625ull,
0x09202020203b3733ull,0x646461090a202f2full,0x662509203233662eull,0x38336625202c3134ull,
0x203b39336625202cull,0x0a202f2f09202020ull,0x3233662e64646109ull,0x202c323466250920ull,
0x6625202c30346625ull,0x09202020203b3134ull,0x646461090a202f2full,0x662509203233662eull,
0x32346625202c3334ull,0x203b35316625202cull,0x0a202f2f09202020ull,0x662e747271737209ull,
0x3434662509203233ull,0x203b33346625202cull,0x0920202020202020ull,0x6c756d090a202f2full,
0x662509203233662eull,0x34346625202c3534ull,0x203b34346625202cull,0x0a202f2f09202020ull,
0x3233662e6c756d09ull,0x202c363466250920ull,0x6625202c34346625ull,0x09202020203b3534ull,
0x6c756d090a202f2full,0x662509203233662eull,0x36346625202c3734ull,0x20203b346625202cull,
0x0a202f2f09202020ull,0x3233662e64616d09ull,0x202c323166250920ull,0x6625202c35336625ull,
0x32316625202c3734ull,0x6d090a202f2f093bull,0x09203233662e6461ull,0x6625202c33316625ull,
0x37346625202c3633ull,0x093b33316625202cull,0x64616d090a202f2full,0x662509203233662eull,
0x37336625202c3431ull,0x202c37346625202cull,0x2f2f093b34316625ull,0x09636f6c2e090a20ull,
0x3009373131093531ull,0x6168732e646c090aull,0x203233662e646572ull,0x5b202c3834662509ull,
0x32332b3032647225ull,0x6469202f2f093b5dull,0x616873203236363aull,0x302b736f50646572ull,
0x732e646c090a3078ull,0x33662e6465726168ull,0x2c39346625092032ull,0x2b30326472255b20ull,
0x202f2f093b5d3633ull,0x73203336363a6469ull,0x736f506465726168ull,0x646c090a3078302bull,
0x2e6465726168732eull,0x3566250920323366ull,0x326472255b202c30ull,0x2f093b5d30342b30ull,
0x3436363a6469202full,0x5064657261687320ull,0x090a3078302b736full,0x203233662e627573ull,
0x25202c3135662509ull,0x316625202c383466ull,0x2f0920202020203bull,0x2e627573090a202full,
0x3566250920323366ull,0x2c39346625202c32ull,0x2020203b32662520ull,0x090a202f2f092020ull,
0x203233662e627573ull,0x25202c3335662509ull,0x336625202c303566ull,0x2f0920202020203bull,
0x2e6c756d090a202full,0x3566250920323366ull,0x2c31356625202c34ull,0x20203b3135662520ull,
0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3535662509ull,0x356625202c323566ull,
0x2f09202020203b32ull,0x2e6c756d090a202full,0x3566250920323366ull,0x2c33356625202c36ull,
0x20203b3335662520ull,0x090a202f2f092020ull,0x203233662e646461ull,0x25202c3735662509ull,
0x356625202c343566ull,0x2f09202020203b35ull,0x2e646461090a202full,0x3566250920323366ull,
0x2c36356625202c38ull,0x20203b3735662520ull,0x090a202f2f092020ull,0x203233662e646461ull,
0x25202c3935662509ull,0x316625202c383566ull,0x2f09202020203b35ull,0x72717372090a202full,
0x2509203233662e74ull,0x356625202c303666ull,0x2020202020203b39ull,0x090a202f2f092020ull,
0x203233662e6c756dull,0x25202c3136662509ull,0x366625202c303666ull,0x2f09202020203b30ull,
0x2e6c756d090a202full,0x3666250920323366ull,0x2c30366625202c32ull,0x20203b3136662520ull,
0x090a202f2f092020ull,0x203233662e6c756dull,0x25202c3336662509ull,0x346625202c323666ull,
0x2f0920202020203bull,0x2e64616d090a202full,0x3166250920323366ull,0x2c31356625202c32ull,
0x25202c3336662520ull,0x202f2f093b323166ull,0x33662e64616d090aull,0x2c33316625092032ull,
0x25202c3235662520ull,0x316625202c333666ull,0x090a202f2f093b33ull,0x203233662e64616dull,
0x25202c3431662509ull,0x366625202c333566ull,0x3b34316625202c33ull,0x6c2e090a202f2f09ull,
0x313109353109636full,0x646461090a300938ull,0x722509203436752eull,0x647225202c303264ull,
0x203b3436202c3032ull,0x0a202f2f09202020ull,0x726168732e646c09ull,0x09203233662e6465ull,
0x255b202c34366625ull,0x36312d2b30326472ull,0x6469202f2f093b5dull,0x616873203536363aull,
0x302b736f50646572ull,0x732e646c090a3078ull,0x33662e6465726168ull,0x2c35366625092032ull,
0x2b30326472255b20ull,0x2f2f093b5d32312dull,0x203636363a646920ull,0x6f50646572616873ull,
0x6c090a3078302b73ull,0x6465726168732e64ull,0x662509203233662eull,0x6472255b202c3636ull,
0x093b5d382d2b3032ull,0x36363a6469202f2full,0x6465726168732037ull,0x0a3078302b736f50ull,
0x3233662e62757309ull,0x202c373666250920ull,0x6625202c34366625ull,0x0920202020203b31ull,
0x627573090a202f2full,0x662509203233662eull,0x35366625202c3836ull,0x20203b326625202cull,
0x0a202f2f09202020ull,0x3233662e62757309ull,0x202c393666250920ull,0x6625202c36366625ull,
0x0920202020203b33ull,0x6c756d090a202f2full,0x662509203233662eull,0x37366625202c3037ull,
0x203b37366625202cull,0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c313766250920ull,
0x6625202c38366625ull,0x09202020203b3836ull,0x6c756d090a202f2full,0x662509203233662eull,
0x39366625202c3237ull,0x203b39366625202cull,0x0a202f2f09202020ull,0x3233662e64646109ull,
0x202c333766250920ull,0x6625202c30376625ull,0x09202020203b3137ull,0x646461090a202f2full,
0x662509203233662eull,0x32376625202c3437ull,0x203b33376625202cull,0x0a202f2f09202020ull,
0x3233662e64646109ull,0x202c353766250920ull,0x6625202c34376625ull,0x09202020203b3531ull,
0x717372090a202f2full,0x09203233662e7472ull,0x6625202c36376625ull,0x20202020203b3537ull,
0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c373766250920ull,0x6625202c36376625ull,
0x09202020203b3637ull,0x6c756d090a202f2full,0x662509203233662eull,0x36376625202c3837ull,
0x203b37376625202cull,0x0a202f2f09202020ull,0x3233662e6c756d09ull,0x202c393766250920ull,
0x6625202c38376625ull,0x0920202020203b34ull,0x64616d090a202f2full,0x662509203233662eull,
0x37366625202c3231ull,0x202c39376625202cull,0x2f2f093b32316625ull,0x662e64616d090a20ull,
0x3331662509203233ull,0x202c38366625202cull,0x6625202c39376625ull,0x0a202f2f093b3331ull,
0x3233662e64616d09ull,0x202c343166250920ull,0x6625202c39366625ull,0x34316625202c3937ull,
0x2e090a202f2f093bull,0x3109353109636f6cull,0x6461090a30093931ull,0x2509203233752e64ull,
0x337225202c363372ull,0x2020203b34202c36ull,0x202f2f0920202020ull,0x6c2e70746573090aull,
0x2509203233752e74ull,0x36337225202c3470ull,0x20203b317225202cull,0x2540090a202f2f09ull,
0x0920617262203470ull,0x37325f315f744c24ull,0x202020202020203bull,0x202f2f0920202020ull,
0x325f315f744c240aull,0x6c3c2f2f200a3a35ull,0x726150203e706f6full,0x6f6f6c20666f2074ull,
0x6c2079646f622070ull,0x2c32353120656e69ull,0x616c206461656820ull,0x4c242064656c6562ull,
0x090a34325f315f74ull,0x09353109636f6c2eull,0x6d090a3009323631ull,0x09203233662e766full,
0x316625202c376625ull,0x2020202020203b32ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,
0x2c36662509203233ull,0x20203b3331662520ull,0x2020202020202020ull,0x6d090a202f2f0920ull,
0x09203233662e766full,0x316625202c356625ull,0x2020202020203b34ull,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x3009343631093531ull,0x79732e726162090aull,0x20203b300920636eull,
0x2020202020202020ull,0x2020202020202020ull,0x6461090a202f2f09ull,0x2509203233732e64ull,
0x2c377225202c3772ull,0x20202020203b3120ull,0x202f2f0920202020ull,0x33732e646461090aull,
0x2c37317225092032ull,0x25202c3731722520ull,0x20202020203b3872ull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c36316472ull,0x647225202c363164ull,0x202f2f09203b3031ull,
0x36752e646461090aull,0x3331647225092034ull,0x2c3331647225202cull,0x203b303164722520ull,
0x6573090a202f2f09ull,0x33752e656e2e7074ull,0x202c357025092032ull,0x317225202c377225ull,
0x202f2f0920203b32ull,0x622035702540090aull,0x5f744c2409206172ull,0x2020203b34325f31ull,
0x2020202020202020ull,0x7262090a202f2f09ull,0x240920696e752e61ull,0x3b32325f315f744cull,
0x2020202020202020ull,0x202f2f0920202020ull,0x335f315f744c240aull,0x2e6c756d090a3a36ull,
0x09203233752e6f6cull,0x7225202c38337225ull,0x3b317225202c3331ull,0x090a202f2f092020ull,
0x203233752e646461ull,0x25202c3933722509ull,0x347225202c383372ull,0x2f0920202020203bull,
0x2e747663090a202full,0x203233752e343675ull,0x202c313264722509ull,0x2020203b39337225ull,
0x090a202f2f092020ull,0x752e6f6c2e6c756dull,0x3264722509203436ull,0x3132647225202c32ull,
0x2f09203b3631202cull,0x2e646461090a202full,0x6472250920343675ull,0x2c35647225202c38ull,
0x203b323264722520ull,0x240a202f2f092020ull,0x3a32325f315f744cull,0x3109636f6c2e090aull,
0x0a30093138310935ull,0x726168732e747309ull,0x09203233662e6465ull,0x5d302b386472255bull,
0x09203b376625202cull,0x36363a6469202f2full,0x6465726168732038ull,0x0a3078302b736f50ull,
0x353109636f6c2e09ull,0x090a300932383109ull,0x65726168732e7473ull,0x5b09203233662e64ull,
0x2c5d342b38647225ull,0x2f09203b36662520ull,0x3936363a6469202full,0x5064657261687320ull,
0x090a3078302b736full,0x09353109636f6c2eull,0x73090a3009333831ull,0x6465726168732e74ull,
0x255b09203233662eull,0x202c5d382b386472ull,0x2f2f09203b356625ull,0x203037363a646920ull,
0x6f50646572616873ull,0x2e090a3078302b73ull,0x3109353109636f6cull,0x6162090a30093538ull,
0x0920636e79732e72ull,0x2020202020203b30ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x33752e766f6d090aull,0x2c30347225092032ull,0x20202020203b3020ull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x33752e656e2e7074ull,0x202c367025092032ull,0x7225202c33317225ull,
0x202f2f09203b3034ull,0x622036702540090aull,0x5f744c2409206172ull,0x2020203b32335f31ull,
0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233752e76ull,0x203b31202c313472ull,
0x2020202020202020ull,0x202f2f0920202020ull,0x6c2e70746573090aull,0x2509203233752e65ull,
0x2c387225202c3770ull,0x20203b3134722520ull,0x2540090a202f2f09ull,0x0920617262203770ull,
0x32335f315f744c24ull,0x202020202020203bull,0x202f2f0920202020ull,0x33752e627573090aull,
0x2c32347225092032ull,0x3b31202c38722520ull,0x2020202020202020ull,0x7663090a202f2f09ull,
0x33752e3436732e74ull,0x3332647225092032ull,0x20203b317225202cull,0x202f2f0920202020ull,
0x6f6c2e6c756d090aull,0x722509203436752eull,0x647225202c343264ull,0x203b3631202c3332ull,
0x6461090a202f2f09ull,0x2509203233752e64ull,0x347225202c333472ull,0x20203b317225202cull,
0x202f2f0920202020ull,0x36752e747663090aull,0x2509203233752e34ull,0x7225202c35326472ull,
0x20202020203b3334ull,0x756d090a202f2f09ull,0x3436752e6f6c2e6cull,0x2c36326472250920ull,
0x202c353264722520ull,0x202f2f09203b3631ull,0x36752e646461090aull,0x3732647225092034ull,
0x202c35647225202cull,0x20203b3632647225ull,0x6f6d090a202f2f09ull,0x2509203233732e76ull,
0x203b31202c343472ull,0x2020202020202020ull,0x202f2f0920202020ull,0x33732e766f6d090aull,
0x2c35347225092032ull,0x20203b3234722520ull,0x2020202020202020ull,0x744c240a202f2f09ull,
0x200a3a34335f315full,0x3e706f6f6c3c2f2full,0x6f6220706f6f4c20ull,0x20656e696c207964ull,
0x73656e202c353831ull,0x70656420676e6974ull,0x65202c31203a6874ull,0x646574616d697473ull,
0x6974617265746920ull,0x6b6e75203a736e6full,0x6c2e090a6e776f6eull,0x393109353109636full,
0x2e646c090a300932ull,0x662e646572616873ull,0x3038662509203233ull,0x37326472255b202cull,
0x202f2f093b5d302bull,0x73203137363a6469ull,0x736f506465726168ull,0x6461090a3078302bull,
0x2509203233662e64ull,0x30386625202c3766ull,0x20203b376625202cull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x0a30093339310935ull,0x726168732e646c09ull,0x09203233662e6465ull,
0x255b202c31386625ull,0x3b5d342b37326472ull,0x363a6469202f2f09ull,0x6572616873203237ull,
0x3078302b736f5064ull,0x33662e646461090aull,0x202c366625092032ull,0x6625202c31386625ull,
0x2020202020203b36ull,0x6c2e090a202f2f09ull,0x393109353109636full,0x2e646c090a300934ull,
0x662e646572616873ull,0x3238662509203233ull,0x37326472255b202cull,0x202f2f093b5d382bull,
0x73203337363a6469ull,0x736f506465726168ull,0x6461090a3078302bull,0x2509203233662e64ull,
0x32386625202c3566ull,0x20203b356625202cull,0x202f2f0920202020ull,0x33732e646461090aull,
0x2c34347225092032ull,0x31202c3434722520ull,0x202020202020203bull,0x6461090a202f2f09ull,
0x2509203436752e64ull,0x7225202c37326472ull,0x647225202c343264ull,0x202f2f09203b3732ull,
0x6e2e70746573090aull,0x2509203233752e65ull,0x34347225202c3870ull,0x20203b387225202cull,
0x2540090a202f2f09ull,0x0920617262203870ull,0x34335f315f744c24ull,0x202020202020203bull,
0x202f2f0920202020ull,0x335f315f744c240aull,0x315f744c240a3a32ull,0x6c2e090a3a30335full,
0x313209353109636full,0x2e646c090a300939ull,0x36752e6d61726170ull,0x3832647225092034ull,
0x6475635f5f5b202cull,0x5a5f5f6d72617061ull,0x726765746e693531ull,0x6569646f42657461ull,
0x76454531624c4973ull,0x3474616f6c663650ull,0x31535f31535f3153ull,0x646c6f5f6966665full,
0x2f2f093b5d6c6556ull,0x203437363a646920ull,0x6170616475635f5full,0x6935315a5f5f6d72ull,
0x657461726765746eull,0x4c49736569646f42ull,0x6636507645453162ull,0x5f31533474616f6cull,
0x66665f31535f3153ull,0x6c6556646c6f5f69ull,0x6461090a3078302bull,0x2509203436752e64ull,
0x7225202c39326472ull,0x647225202c383264ull,0x202f2f0920203b32ull,0x6f6c672e646c090aull,
0x662e34762e6c6162ull,0x3866257b09203233ull,0x252c343866252c33ull,0x363866252c353866ull,
0x326472255b202c7dull,0x2f2f093b5d302b39ull,0x09636f6c2e090a20ull,0x3009353232093531ull,
0x7261702e646c090aull,0x09203233662e6d61ull,0x5f5b202c37386625ull,0x726170616475635full,
0x6e6935315a5f5f6dull,0x4265746172676574ull,0x624c49736569646full,0x6c66365076454531ull,
0x535f31533474616full,0x6966665f31535f31ull,0x695461746c65645full,0x202f2f093b5d656dull,
0x5f203133363a6469ull,0x726170616475635full,0x6e6935315a5f5f6dull,0x4265746172676574ull,
0x624c49736569646full,0x6c66365076454531ull,0x535f31533474616full,0x6966665f31535f31ull,
0x695461746c65645full,0x090a3078302b656dull,0x6d617261702e646cull,0x662509203233662eull,
0x635f5f5b202c3838ull,0x5f6d726170616475ull,0x65746e6935315a5full,0x646f426574617267ull,
0x4531624c49736569ull,0x616f6c6636507645ull,0x5f31535f31533474ull,0x645f6966665f3153ull,
0x3b5d676e69706d61ull,0x363a6469202f2f09ull,0x6475635f5f203233ull,0x5a5f5f6d72617061ull,
0x726765746e693531ull,0x6569646f42657461ull,0x76454531624c4973ull,0x3474616f6c663650ull,
0x31535f31535f3153ull,0x6d61645f6966665full,0x3078302b676e6970ull,0x33662e64616d090aull,
0x2c39386625092032ull,0x25202c3738662520ull,0x33386625202c3766ull,0x6d090a202f2f093bull,
0x09203233662e6c75ull,0x6625202c30396625ull,0x39386625202c3838ull,0x2f2f09202020203bull,
0x09636f6c2e090a20ull,0x3009363232093531ull,0x33662e64616d090aull,0x2c31396625092032ull,
0x25202c3738662520ull,0x34386625202c3666ull,0x6d090a202f2f093bull,0x09203233662e6c75ull,
0x6625202c32396625ull,0x31396625202c3838ull,0x2f2f09202020203bull,0x09636f6c2e090a20ull,
0x3009373232093531ull,0x33662e64616d090aull,0x2c33396625092032ull,0x25202c3738662520ull,
0x35386625202c3566ull,0x6d090a202f2f093bull,0x09203233662e6c75ull,0x6625202c34396625ull,
0x33396625202c3838ull,0x2f2f09202020203bull,0x09636f6c2e090a20ull,0x3009303332093531ull,
0x33662e64616d090aull,0x202c316625092032ull,0x6625202c30396625ull,0x3b316625202c3738ull,
0x6c2e090a202f2f09ull,0x333209353109636full,0x64616d090a300931ull,0x662509203233662eull,
0x2c32396625202c32ull,0x25202c3738662520ull,0x0a202f2f093b3266ull,0x353109636f6c2e09ull,
0x090a300932333209ull,0x203233662e64616dull,0x6625202c33662509ull,0x37386625202c3439ull,
0x2f093b336625202cull,0x636f6c2e090a202full,0x0935333209353109ull,0x61702e646c090a30ull,
0x203436752e6d6172ull,0x202c303364722509ull,0x70616475635f5f5bull,0x35315a5f5f6d7261ull,
0x7461726765746e69ull,0x49736569646f4265ull,0x365076454531624cull,0x31533474616f6c66ull,
0x665f31535f31535full,0x6f5077656e5f6966ull,0x69202f2f093b5d73ull,0x5f5f203937363a64ull,
0x6d72617061647563ull,0x746e6935315a5f5full,0x6f42657461726765ull,0x31624c4973656964ull,
0x6f6c663650764545ull,0x31535f3153347461ull,0x5f6966665f31535full,0x302b736f5077656eull,
0x2e646461090a3078ull,0x6472250920343675ull,0x33647225202c3133ull,0x3b32647225202c30ull,
0x090a202f2f092020ull,0x61626f6c672e7473ull,0x3233662e34762e6cull,0x31336472255b0920ull,
0x66257b202c5d302bull,0x66252c3266252c31ull,0x093b7d3466252c33ull,0x6f6c2e090a202f2full,
0x3633320935310963ull,0x702e646c090a3009ull,0x3436752e6d617261ull,0x2c32336472250920ull,
0x616475635f5f5b20ull,0x315a5f5f6d726170ull,0x61726765746e6935ull,0x736569646f426574ull,
0x5076454531624c49ull,0x533474616f6c6636ull,0x5f31535f31535f31ull,0x5677656e5f696666ull,
0x202f2f093b5d6c65ull,0x5f203438363a6469ull,0x726170616475635full,0x6e6935315a5f5f6dull,
0x4265746172676574ull,0x624c49736569646full,0x6c66365076454531ull,0x535f31533474616full,
0x6966665f31535f31ull,0x2b6c655677656e5full,0x646461090a307830ull,0x722509203436752eull,
0x647225202c333364ull,0x32647225202c3233ull,0x0a202f2f0920203bull,0x626f6c672e747309ull,
0x33662e34762e6c61ull,0x336472255b092032ull,0x257b202c5d302b33ull,0x323966252c303966ull,
0x66252c343966252cull,0x202f2f093b7d3638ull,0x3109636f6c2e090aull,0x0a30093833320935ull,
0x20203b7469786509ull,0x2020202020202020ull,0x2020202020202020ull,0x0920202020202020ull,
0x57444c240a202f2full,0x35315a5f5f646e65ull,0x7461726765746e69ull,0x49736569646f4265ull,
0x365076454531624cull,0x31533474616f6c66ull,0x665f31535f31535full,0x2f207d090a3a6966ull,
0x6e6935315a5f202full,0x4265746172676574ull,0x624c49736569646full,0x6c66365076454531ull,
0x535f31533474616full,0x6966665f31535f31ull,0x0000000000000a0aull
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_13",(char*)__deviceText_$sm_13$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"0f9a0f2cc0d249e1",(char*)"bodysystemcuda.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0};
# 5 "/tmp/tmpxft_000015ec_00000000-1_bodysystemcuda.cudafe1.stub.c" 2
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 1
# 74 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/host_defines.h" 1
# 75 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2
# 100 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h"
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

extern void __cudaRegisterShared(
  void **fatCubinHandle,
  void **devicePtr
);

extern void __cudaRegisterSharedVar(
  void **fatCubinHandle,
  void **devicePtr,
  size_t size,
  size_t alignment,
  int storage
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


}




extern int atexit(void(*)(void)) throw();







static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}
# 215 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h" 1
# 68 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/crt/func_macro.h" 1 3
# 69 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h" 2

static clock_t __cuda_clock(void)
{
  return clock();
}

static void *__cuda_memset(void *s, int c, size_t n)
{
  return memset(s, c, n);
}

static void *__cuda_memcpy(void *d, const void *s, size_t n)
{
  return memcpy(d, s, n);
}
# 93 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h"
# 1 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 1 3
# 844 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
extern __attribute__((__weak__)) int __cuda_error_not_implememted(void); int __cuda_error_not_implememted(void);
# 900 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static int __cuda_abs(int a)
{
  return abs(a);
}

static float __cuda_fabsf(float a)
{
  return fabsf(a);
}

static long long int __cuda_llabs(long long int a)
{

  return ::llabs(a);



}

static float __cuda_exp2f(float a)
{
  return exp2f(a);
}

# 1 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 1 3
# 347 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/math_constants.h" 1 3
# 348 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3



static int __cuda___isnan(double a);
static int __cuda___isnanf(float a);
static int __double2int_rz(double);
static unsigned int __double2uint_rz(double);
static long long int __double2ll_rz(double);
static unsigned long long int __double2ull_rz(double);
# 370 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static int __mulhi(int a, int b)
{
  long long int c = (long long int)a * (long long int)b;

  return (int)(c >> 32);
}

static unsigned int __umulhi(unsigned int a, unsigned int b)
{
  unsigned long long int c = (unsigned long long int)a * (unsigned long long int)b;

  return (unsigned int)(c >> 32);
}

static unsigned long long int __umul64hi(unsigned long long int a, unsigned long long int b)
{
  unsigned int a_lo = (unsigned int)a;
  unsigned long long int a_hi = a >> 32;
  unsigned int b_lo = (unsigned int)b;
  unsigned long long int b_hi = b >> 32;
  unsigned long long int m1 = a_lo * b_hi;
  unsigned long long int m2 = a_hi * b_lo;
  unsigned int carry;

  carry = (0ULL + __umulhi(a_lo, b_lo) + (unsigned int)m1 + (unsigned int)m2) >> 32;

  return a_hi * b_hi + (m1 >> 32) + (m2 >> 32) + carry;
}

static long long int __mul64hi(long long int a, long long int b)
{
  long long int res;
  res = __umul64hi(a, b);
  if (a < 0LL) res = res - b;
  if (b < 0LL) res = res - a;
  return res;
}

static float __saturatef(float a)
{
  return a >= 1.0f ? 1.0f : a <= 0.0f ? 0.0f : a;
}

static unsigned int __sad(int a, int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static unsigned int __usad(unsigned int a, unsigned int b, unsigned int c)
{
  long long int diff = (long long int)a - (long long int)b;

  return (unsigned int)(__cuda_llabs(diff) + (long long int)c);
}

static int __mul24(int a, int b)
{

  a &= 0xffffff;
  a = (a & 0x800000) != 0 ? a | ~0xffffff : a;
  b &= 0xffffff;
  b = (b & 0x800000) != 0 ? b | ~0xffffff : b;


  return a * b;
}

static unsigned int __umul24(unsigned int a, unsigned int b)
{

  a &= 0xffffff;
  b &= 0xffffff;


  return a * b;
}

static float __int_as_float(int a)
{
  volatile union {int a; float b;} u;

  u.a = a;

  return u.b;
}

static int __float_as_int(float a)
{
  volatile union {float a; int b;} u;

  u.a = a;

  return u.b;
}

static long long int __internal_float2ll_kernel(float a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  ia = __float_as_int(a);
  shift = 189 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)(((ia << 8) | 0x80000000) >> 1) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundMinInf && t != 0ULL && ia > 0x80000000) {
    res++;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL && (int)ia > 0) {
    res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)-(long long int)res;
  return (long long int)res;
}

static int __internal_float2int(float a, enum cudaRoundMode rndMode)
{
  return (int)__internal_float2ll_kernel(a, 2147483647LL, -2147483648LL, 0LL, rndMode);
}

static int __float2int_rz(float a)
{



  return __internal_float2int(a, cudaRoundZero);

}

static int __float2int_ru(float a)
{
  return __internal_float2int(a, cudaRoundPosInf);
}

static int __float2int_rd(float a)
{
  return __internal_float2int(a, cudaRoundMinInf);
}

static int __float2int_rn(float a)
{
  return __internal_float2int(a, cudaRoundNearest);
}

static long long int __internal_float2ll(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __float2ll_rz(float a)
{



  return __internal_float2ll(a, cudaRoundZero);

}

static long long int __float2ll_ru(float a)
{
  return __internal_float2ll(a, cudaRoundPosInf);
}

static long long int __float2ll_rd(float a)
{
  return __internal_float2ll(a, cudaRoundMinInf);
}

static long long int __float2ll_rn(float a)
{
  return __internal_float2ll(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull_kernel(float a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  unsigned long long int res, t = 0ULL;
  int shift;
  unsigned int ia;

  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;
  ia = __float_as_int(a);
  shift = 190 - ((ia >> 23) & 0xff);
  res = (unsigned long long int)((ia << 8) | 0x80000000) << 32;
  if (shift >= 64) {
    t = res >> (int)(shift > 64);
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (rndMode == cudaRoundNearest && (long long int)t < 0LL) {
    res += t == 0x8000000000000000ULL ? res & 1ULL : 1ULL;
  }
  else if (rndMode == cudaRoundPosInf && t != 0ULL) {
    res++;
  }
  return res;
}

static unsigned int __internal_float2uint(float a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_float2ull_kernel(a, 4294967295U, 0U, rndMode);
}

static unsigned int __float2uint_rz(float a)
{



  return __internal_float2uint(a, cudaRoundZero);

}

static unsigned int __float2uint_ru(float a)
{
  return __internal_float2uint(a, cudaRoundPosInf);
}

static unsigned int __float2uint_rd(float a)
{
  return __internal_float2uint(a, cudaRoundMinInf);
}

static unsigned int __float2uint_rn(float a)
{
  return __internal_float2uint(a, cudaRoundNearest);
}

static unsigned long long int __internal_float2ull(float a, enum cudaRoundMode rndMode)
{
  return __internal_float2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __float2ull_rz(float a)
{



  return __internal_float2ull(a, cudaRoundZero);

}

static unsigned long long int __float2ull_ru(float a)
{
  return __internal_float2ull(a, cudaRoundPosInf);
}

static unsigned long long int __float2ull_rd(float a)
{
  return __internal_float2ull(a, cudaRoundMinInf);
}

static unsigned long long int __float2ull_rn(float a)
{
  return __internal_float2ull(a, cudaRoundNearest);
}

static int __internal_normalize64(unsigned long long int *a)
{
  int lz = 0;

  if ((*a & 0xffffffff00000000ULL) == 0ULL) {
    *a <<= 32;
    lz += 32;
  }
  if ((*a & 0xffff000000000000ULL) == 0ULL) {
    *a <<= 16;
    lz += 16;
  }
  if ((*a & 0xff00000000000000ULL) == 0ULL) {
    *a <<= 8;
    lz += 8;
  }
  if ((*a & 0xf000000000000000ULL) == 0ULL) {
    *a <<= 4;
    lz += 4;
  }
  if ((*a & 0xC000000000000000ULL) == 0ULL) {
    *a <<= 2;
    lz += 2;
  }
  if ((*a & 0x8000000000000000ULL) == 0ULL) {
    *a <<= 1;
    lz += 1;
  }
  return lz;
}

static int __internal_normalize(unsigned int *a)
{
  unsigned long long int t = (unsigned long long int)*a;
  int lz = __internal_normalize64(&t);

  *a = (unsigned int)(t >> 32);

  return lz - 32;
}

static float __internal_int2float_kernel(int a, enum cudaRoundMode rndMode)
{
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  if (a < 0) res.i = (unsigned int)-a;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if (a < 0) res.i |= 0x80000000;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.f;
}

static float __int2float_rz(int a)
{
  return __internal_int2float_kernel(a, cudaRoundZero);
}

static float __int2float_ru(int a)
{
  return __internal_int2float_kernel(a, cudaRoundPosInf);
}

static float __int2float_rd(int a)
{
  return __internal_int2float_kernel(a, cudaRoundMinInf);
}

static float __int2float_rn(int a)
{



  return __internal_int2float_kernel(a, cudaRoundNearest);

}

static float __internal_uint2float_kernel(unsigned int a, enum cudaRoundMode rndMode)
{
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.f;
  shift = __internal_normalize((unsigned int*)&res.i);
  t = res.i << 24;
  res.i = (res.i >> 8);
  res.i += (127 + 30 - shift) << 23;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : (t >> 31);
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.f;
}

static float __uint2float_rz(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundZero);
}

static float __uint2float_ru(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundPosInf);
}

static float __uint2float_rd(unsigned int a)
{
  return __internal_uint2float_kernel(a, cudaRoundMinInf);
}

static float __uint2float_rn(unsigned int a)
{



  return __internal_uint2float_kernel(a, cudaRoundNearest);

}

static float __ll2float_rn(long long int a)
{
  return (float)a;
}

static float __ull2float_rn(unsigned long long int a)
{



  unsigned long long int temp;
  unsigned int res, t;
  int shift;
  if (a == 0ULL) return 0.0f;
  temp = a;
  shift = __internal_normalize64(&temp);
  temp = (temp >> 8) | ((temp & 0xffULL) ? 1ULL : 0ULL);
  res = (unsigned int)(temp >> 32);
  t = (unsigned int)temp;
  res += (127 + 62 - shift) << 23;
  res += t == 0x80000000 ? res & 1 : t >> 31;
  return __int_as_float(res);

}

static float __internal_fmul_kernel(float a, float b, int rndNearest)
{
  unsigned long long product;
  volatile union {
    float f;
    unsigned int i;
  } xx, yy;
  unsigned expo_x, expo_y;

  xx.f = a;
  yy.f = b;

  expo_y = 0xFF;
  expo_x = expo_y & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = expo_y & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {
multiply:
    expo_x = expo_x + expo_y;
    expo_y = xx.i ^ yy.i;
    xx.i = xx.i & 0x00ffffff;
    yy.i = yy.i << 8;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i | 0x80000000;

    product = ((unsigned long long)xx.i) * yy.i;
    expo_x = expo_x - 127 + 2;
    expo_y = expo_y & 0x80000000;
    xx.i = (unsigned int)(product >> 32);
    yy.i = (unsigned int)(product & 0xffffffff);

    if (xx.i < 0x00800000) {
      xx.i = (xx.i << 1) | (yy.i >> 31);
      yy.i = (yy.i << 1);
      expo_x--;
    }
    if (expo_x <= 0xFD) {
      xx.i = xx.i | expo_y;
      xx.i = xx.i + (expo_x << 23);

      if (yy.i < 0x80000000) return xx.f;
      xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
               && rndNearest);
      return xx.f;
    } else if ((int)expo_x >= 254) {

      xx.i = (expo_y | 0x7F800000) - (!rndNearest);
      return xx.f;
    } else {

      expo_x = ((unsigned int)-((int)expo_x));
      if (expo_x > 25) {

        xx.i = expo_y;
        return xx.f;
      } else {
        yy.i = (xx.i << (32 - expo_x)) | ((yy.i) ? 1 : 0);
        xx.i = expo_y + (xx.i >> expo_x);
        xx.i += (((yy.i == 0x80000000) ? (xx.i & 1) : (yy.i >> 31))
                 && rndNearest);
        return xx.f;
      }
    }
  } else {
    product = xx.i ^ yy.i;
    product = product & 0x80000000;
    if (!(xx.i & 0x7fffffff)) {
      if (expo_y != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_y = yy.i << 1;
      if (expo_y == 0xFF000000) {
        xx.i = expo_y | 0x00C00000;
      } else {
        xx.i = yy.i | 0x00400000;
      }
      return xx.f;
    }
    if (!(yy.i & 0x7fffffff)) {
      if (expo_x != 254) {
        xx.i = (unsigned int)product;
        return xx.f;
      }
      expo_x = xx.i << 1;
      if (expo_x == 0xFF000000) {
        xx.i = expo_x | 0x00C00000;
      } else {
        xx.i = xx.i | 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {
      expo_y++;
      expo_x++;
      if (expo_x == 0) {
        expo_y |= xx.i & 0x80000000;




        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        xx.i = (xx.i >> 8) | (expo_y & 0x80000000);
        expo_y &= ~0x80000000;
        expo_y--;
        goto multiply;
      }
      if (expo_y == 0) {
        expo_x |= yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        yy.i = (yy.i >> 8) | (expo_x & 0x80000000);
        expo_x &= ~0x80000000;
        expo_x--;
        goto multiply;
      }
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xFF000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xFF000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    xx.i = (unsigned int)product | 0x7f800000;
    return xx.f;
  }
}

static float __internal_fadd_kernel(float a, float b, int rndNearest)
{
  volatile union {
    float f;
    unsigned int i;
  } xx, yy;
  unsigned int expo_x;
  unsigned int expo_y;
  unsigned int temp;

  xx.f = a;
  yy.f = b;


  expo_y = yy.i << 1;
  if (expo_y > (xx.i << 1)) {
    expo_y = xx.i;
    xx.i = yy.i;
    yy.i = expo_y;
  }

  temp = 0xff;
  expo_x = temp & (xx.i >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy.i >> 23);
  expo_y = expo_y - 1;

  if ((expo_x <= 0xFD) &&
      (expo_y <= 0xFD)) {

add:
    expo_y = expo_x - expo_y;
    if (expo_y > 25) {
      expo_y = 31;
    }
    temp = xx.i ^ yy.i;
    xx.i = xx.i & ~0x7f000000;
    xx.i = xx.i | 0x00800000;
    yy.i = yy.i & ~0xff000000;
    yy.i = yy.i | 0x00800000;

    if ((int)temp < 0) {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      temp = (unsigned int)(-((int)temp));
      xx.i = xx.i - (yy.i >> expo_y) - (temp ? 1 : 0);
      if (xx.i & 0x00800000) {
        if (expo_x <= 0xFD) {
          xx.i = xx.i & ~0x00800000;
          xx.i = (xx.i + (expo_x << 23)) + 0x00800000;
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {
        if ((temp | (xx.i << 1)) == 0) {

          xx.i = 0;
          return xx.f;
        }

        yy.i = xx.i & 0x80000000;
        do {
          xx.i = (xx.i << 1) | (temp >> 31);
          temp <<= 1;
          expo_x--;
        } while (!(xx.i & 0x00800000));
        xx.i = xx.i | yy.i;
      }
    } else {

      temp = 32 - expo_y;
      temp = (expo_y) ? (yy.i << temp) : 0;
      xx.i = xx.i + (yy.i >> expo_y);
      if (!(xx.i & 0x01000000)) {
        if (expo_x <= 0xFD) {
          expo_y = xx.i & 1;
          xx.i = xx.i + (expo_x << 23);
          if (temp < 0x80000000) return xx.f;
          xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
                   && rndNearest);
          return xx.f;
        }
      } else {

        temp = (xx.i << 31) | (temp >> 1);

        xx.i = ((xx.i & 0x80000000) | (xx.i >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
    if (expo_x <= 0xFD) {
      expo_y = xx.i & 1;
      xx.i += (((temp == 0x80000000) ? expo_y : (temp >> 31))
               && rndNearest);
      xx.i = xx.i + (expo_x << 23);
      return xx.f;
    }
    if ((int)expo_x >= 254) {

        xx.i = ((xx.i & 0x80000000) | 0x7f800000) - (!rndNearest);
        return xx.f;
    }

    expo_y = expo_x + 32;
    yy.i = xx.i & 0x80000000;
    xx.i = xx.i & ~0xff000000;

    expo_x = (unsigned int)(-((int)expo_x));
    temp = xx.i << expo_y | ((temp) ? 1 : 0);
    xx.i = yy.i | (xx.i >> expo_x);
    xx.i += (((temp == 0x80000000) ? (xx.i & 1) : (temp >> 31))
             && rndNearest);
    return xx.f;
  } else {

    if (!(yy.i << 1)) {
      if (xx.i == 0x80000000) {
          xx.i = yy.i;
      }
      if ((xx.i << 1) > 0xff000000) {
          xx.i |= 0x00400000;
      }
      return xx.f;
    }
    if ((expo_y != 254) && (expo_x != 254)) {

      if (expo_x == (unsigned int) -1) {
        temp = xx.i & 0x80000000;
        xx.i = xx.i << 8;
        while (!(xx.i & 0x80000000)) {
          xx.i <<= 1;
          expo_x--;
        }
        expo_x++;
        xx.i = (xx.i >> 8) | temp;
      }
      if (expo_y == (unsigned int) -1) {
        temp = yy.i & 0x80000000;
        yy.i = yy.i << 8;
        while (!(yy.i & 0x80000000)) {
          yy.i <<= 1;
          expo_y--;
        }
        expo_y++;
        yy.i = (yy.i >> 8) | temp;
      }
      goto add;
    }
    expo_x = xx.i << 1;
    expo_y = yy.i << 1;

    if (expo_x > 0xff000000) {

      xx.i = xx.i | 0x00400000;
      return xx.f;
    }

    if (expo_y > 0xff000000) {

      xx.i = yy.i | 0x00400000;
      return xx.f;
    }
    if ((expo_x == 0xff000000) && (expo_y == 0xff000000)) {




      expo_x = xx.i ^ yy.i;
      xx.i = xx.i | ((expo_x) ? 0xffc00000 : 0);
      return xx.f;
    }

    if (expo_y == 0xff000000) {
      xx.i = yy.i;
    }
    return xx.f;
  }
}

static float __fadd_rz(float a, float b)
{
  return __internal_fadd_kernel(a, b, 0);
}

static float __fmul_rz(float a, float b)
{
  return __internal_fmul_kernel(a, b, 0);
}

static float __fadd_rn(float a, float b)
{
  return __internal_fadd_kernel(a, b, 1);
}

static float __fmul_rn(float a, float b)
{
  return __internal_fmul_kernel(a, b, 1);
}

static void __brkpt(int c)
{

}
# 1164 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
extern int __cudaSynchronizeThreads(void**, void*);



static inline __attribute__((always_inline)) void __syncthreads(void)
{
  volatile int _ = 0;
  L: if (__cudaSynchronizeThreads((void**)&&L, (void*)&_)) goto L;
}
# 1185 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static void __trap(void)
{
  __builtin_trap();
}
# 1207 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static float __fdividef(float a, float b)
{






  if (__cuda_fabsf(b) > 8.507059173e37f) {
    if (__cuda_fabsf(a) <= 3.402823466e38f) {
      return ((a / b) / 3.402823466e38f) / 3.402823466e38f;
    } else {
      return __int_as_float(0x7fffffff);
    }
  } else {
    return a / b;
  }

}

static float __sinf(float a)
{
  return sinf(a);
}

static float __cosf(float a)
{
  return cosf(a);
}

static float __log2f(float a)
{
  return log2f(a);
}







static float __internal_accurate_fdividef(float a, float b)
{
  if (__cuda_fabsf(b) > 8.507059173e37f) {
    a *= .25f;
    b *= .25f;
  }
  return __fdividef(a, b);
}

static float __tanf(float a)
{



  return __sinf(a) / __cosf(a);

}

static void __sincosf(float a, float *sptr, float *cptr)
{



  *sptr = __sinf(a);
  *cptr = __cosf(a);

}

static float __expf(float a)
{



  return __cuda_exp2f(a * 1.442695041f);

}

static float __exp10f(float a)
{



  return __cuda_exp2f(a * 3.321928094f);

}

static float __log10f(float a)
{



  return 0.301029996f * __log2f(a);

}

static float __logf(float a)
{



  return 0.693147181f * __log2f(a);

}

static float __powf(float a, float b)
{



  return __cuda_exp2f(b * __log2f(a));

}

static float fdividef(float a, float b)
{





  return __internal_accurate_fdividef(a, b);

}

static int __clz(int a)
{
  return (a)?(158-(__float_as_int(__uint2float_rz((unsigned int)a))>>23)):32;
}

static int __ffs(int a)
{
  return 32 - __clz (a & -a);
}

static int __popc(unsigned int a)
{
  a = a - ((a >> 1) & 0x55555555);
  a = (a & 0x33333333) + ((a >> 2) & 0x33333333);
  a = (a + (a >> 4)) & 0x0f0f0f0f;
  a = ((__umul24(a, 0x808080) << 1) + a) >> 24;
  return a;
}

static int __clzll(long long int a)
{
  int ahi = ((int)((unsigned long long)a >> 32));
  int alo = ((int)((unsigned long long)a & 0xffffffffULL));
  int res;
  if (ahi) {
      res = 0;
  } else {
      res = 32;
      ahi = alo;
  }
  res = res + __clz(ahi);
  return res;
}

static int __ffsll(long long int a)
{
  return 64 - __clzll (a & -a);
}

static int __popcll(unsigned long long int a)
{
  unsigned int ahi = ((unsigned int)(a >> 32));
  unsigned int alo = ((unsigned int)(a & 0xffffffffULL));
  alo = alo - ((alo >> 1) & 0x55555555);
  alo = (alo & 0x33333333) + ((alo >> 2) & 0x33333333);
  ahi = ahi - ((ahi >> 1) & 0x55555555);
  ahi = (ahi & 0x33333333) + ((ahi >> 2) & 0x33333333);
  alo = alo + ahi;
  alo = (alo & 0x0f0f0f0f) + ((alo >> 4) & 0x0f0f0f0f);
  alo = ((__umul24(alo, 0x808080) << 1) + alo) >> 24;
  return alo;
}
# 1426 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
static double fdivide(double a, double b)
{
  return a / b;
}



static int __internal_double2int(double a, enum cudaRoundMode rndMode);
static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode);
static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode);
static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode);

static int __double2int_rz(double a)
{
  return __internal_double2int(a, cudaRoundZero);
}

static unsigned int __double2uint_rz(double a)
{
  return __internal_double2uint(a, cudaRoundZero);
}

static long long int __double2ll_rz(double a)
{
  return __internal_double2ll(a, cudaRoundZero);
}

static unsigned long long int __double2ull_rz(double a)
{
  return __internal_double2ull(a, cudaRoundZero);
}
# 1470 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/sm_11_atomic_functions.h" 1 3
# 257 "/home/gdiamos/temp/cuda/bin//../include/sm_11_atomic_functions.h" 3
static int __iAtomicAdd(int *address, int val)
{
  int old = *address;

  *address = old + val;

  return old;
}

static unsigned int __uAtomicAdd(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old + val;

  return old;
}

static int __iAtomicExch(int *address, int val)
{
  int old = *address;

  *address = val;

  return old;
}

static unsigned int __uAtomicExch(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = val;

  return old;
}

static float __fAtomicExch(float *address, float val)
{
  float old = *address;

  *address = val;

  return old;
}

static int __iAtomicMin(int *address, int val)
{
  int old = *address;

  *address = old < val ? old : val;

  return old;
}

static unsigned int __uAtomicMin(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old < val ? old : val;

  return old;
}

static int __iAtomicMax(int *address, int val)
{
  int old = *address;

  *address = old > val ? old : val;

  return old;
}

static unsigned int __uAtomicMax(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old > val ? old : val;

  return old;
}

static unsigned int __uAtomicInc(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = (old >= val) ? 0 : old + 1;

  return old;
}

static unsigned int __uAtomicDec(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = ((old == 0) | (old > val)) ? val : (old - 1);

  return old;
}

static int __iAtomicAnd(int *address, int val)
{
  int old = *address;

  *address = old & val;

  return old;
}

static unsigned int __uAtomicAnd(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old & val;

  return old;
}

static int __iAtomicOr(int *address, int val)
{
  int old = *address;

  *address = old | val;

  return old;
}

static unsigned int __uAtomicOr(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old | val;

  return old;
}

static int __iAtomicXor(int *address, int val)
{
  int old = *address;

  *address = old ^ val;

  return old;
}

static unsigned int __uAtomicXor(unsigned int *address, unsigned int val)
{
  unsigned int old = *address;

  *address = old ^ val;

  return old;
}

static int __iAtomicCAS(int *address, int compare, int val)
{
  int old = *address;

  *address = old == compare ? val : old;

  return old;
}

static unsigned int __uAtomicCAS(unsigned int *address, unsigned int compare, unsigned int val)
{
  unsigned int old = *address;

  *address = old == compare ? val : old;

  return old;
}
# 1471 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/sm_12_atomic_functions.h" 1 3
# 118 "/home/gdiamos/temp/cuda/bin//../include/sm_12_atomic_functions.h" 3
static unsigned long long int __ullAtomicAdd(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = old + val;

  return old;
}

static unsigned long long int __ullAtomicExch(unsigned long long int *address, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = val;

  return old;
}

static unsigned long long int __ullAtomicCAS(unsigned long long int *address, unsigned long long int compare, unsigned long long int val)
{
  unsigned long long int old = *address;

  *address = old == compare ? val : old;

  return old;
}



static int __any(int cond)
{
  return cond;
}

static int __all(int cond)
{
  return cond;
}
# 1472 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/sm_13_double_functions.h" 1 3
# 266 "/home/gdiamos/temp/cuda/bin//../include/sm_13_double_functions.h" 3
static double __longlong_as_double(long long int a)
{
  volatile union {long long int a; double b;} u;

  u.a = a;

  return u.b;
}

static long long int __double_as_longlong(double a)
{
  volatile union {double a; long long int b;} u;

  u.a = a;

  return u.b;
}

static float __internal_double2float_kernel(double a)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx;
  volatile union {
    float f;
    unsigned int i;
  } res;
  int shift;
  xx.d = a;
  if (xx.i == 0) return 0.0f;
  res.i = (((unsigned int) (xx.i >> 32)) & 0x80000000);
  if ((xx.i & 0x7ff0000000000000ULL) == 0x7ff0000000000000ULL) {
    if ((xx.i & 0x7fffffffffffffffULL) > 0x7ff0000000000000ULL) {

      res.i = 0x7f8fffff;
    } else {

      res.i |= 0x7f800000;
    }
    return res.f;
  }
  shift = ((int) ((xx.i >> 52) & 0x7ff)) - 1023;

  xx.i = (xx.i & 0x000fffffffffffffULL);
  if (shift >= 128) {
    res.i |= 0x7f7fffff;
    return res.f;
  }
  if (shift <= -127) {
    if (shift < -180) {

      xx.i = 0;
    } else {
      xx.i |= 0x0010000000000000ULL;
      xx.i >>= 127 + shift;
    }
  } else {
    res.i |= (unsigned int) (127 + shift) << 23;
  }
  res.i |= ((unsigned int) (xx.i >> 29)) & 0x007fffff;
  xx.i &= 0x1fffffff;
  return res.f;
}

static double __internal_ll2double_kernel(long long int a, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  if (a < 0) res.i = (unsigned long long int)-a;
  shift = __internal_normalize64((unsigned long long int*)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if (a < 0) res.i |= 0x8000000000000000ULL;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t && (a < 0)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && (a > 0)) {
    res.i++;
  }
  return res.d;
}

static double __internal_ull2double_kernel(unsigned long long int a, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } res;
  int shift;
  unsigned int t;
  res.i = a;
  if (a == 0) return res.d;
  shift = __internal_normalize64((unsigned long long int *)&res.i);
  t = ((unsigned int) res.i) << 21;
  res.i >>= 11;
  res.i += ((unsigned long long int)(1023 + 62 - shift)) << 52;
  if ((rndMode == cudaRoundNearest) && (t >= 0x80000000)) {
    res.i += (t == 0x80000000) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.d;
}

static long long int __internal_double2ll_kernel(double a, long long int max, long long int min, long long int nan, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx, res;
  unsigned long long int t = 0;
  int shift;

  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= min) return min;
  shift = (int) (1023 + 62 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL) >> 1;
  if (shift >= 64) {
    t = res.i;
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundMinInf) && t &&
          (xx.i > 0x8000000000000000ULL)) {
    res.i++;
  }
  else if ((rndMode == cudaRoundPosInf) && t && ((long long int)xx.i > 0)) {
    res.i++;
  }
  if ((long long int)xx.i < 0) {
    res.i = (unsigned long long int)(-(long long int)res.i);
  }
  return res.i;
}

static unsigned long long int __internal_double2ull_kernel(double a, unsigned long long int max, unsigned long long int nan, enum cudaRoundMode rndMode)
{
  volatile union {
    double d;
    unsigned long long int i;
  } xx, res;
  unsigned long long int t = 0;
  int shift;
  xx.d = a;
  if (sizeof(a) == sizeof(double) && __cuda___isnan((double)a)) return nan; if (sizeof(a) == sizeof(float) && __cuda___isnanf((float)a)) return nan; if (a >= max) return max; if (a <= 0LL) return 0LL;

  if (a == 0.0) return 0LL;
  shift = (int) (1023 + 63 - ((xx.i >> 52) & 0x7ff));
  res.i = ((xx.i << 11) | 0x8000000000000000ULL);
  if (shift >= 64) {
    t = res.i >> (int)(shift > 64);
    res.i = 0;
  } else if (shift) {
    t = res.i << (64 - shift);
    res.i = res.i >> shift;
  }
  if ((rndMode == cudaRoundNearest) && (t >= 0x8000000000000000ULL)) {
    res.i += (t == 0x8000000000000000ULL) ? (res.i & 1) : 1;
  }
  else if ((rndMode == cudaRoundPosInf) && t) {
    res.i++;
  }
  return res.i;
}

static int __double2hiint(double a)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.d = a;

  return cvt.i[1];
}

static int __double2loint(double a)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.d = a;

  return cvt.i[0];
}

static double __hiloint2double(int a, int b)
{
  volatile union {
    double d;
    signed int i[2];
  } cvt;

  cvt.i[0] = b;
  cvt.i[1] = a;

  return cvt.d;
}

static float __double2float_rn(double a)
{
  return (float)a;
}

static float __double2float_rz(double a)
{
  return __internal_double2float_kernel(a);
}

static int __internal_double2int(double a, enum cudaRoundMode rndMode)
{
  return (int)__internal_double2ll_kernel(a, 2147483647LL, -2147483648LL, -2147483648LL, rndMode);
}

static int __double2int_rn(double a)
{
  return __internal_double2int(a, cudaRoundNearest);
}

static int __double2int_ru(double a)
{
  return __internal_double2int(a, cudaRoundPosInf);
}

static int __double2int_rd(double a)
{
  return __internal_double2int(a, cudaRoundMinInf);
}

static unsigned int __internal_double2uint(double a, enum cudaRoundMode rndMode)
{
  return (unsigned int)__internal_double2ull_kernel(a, 4294967295ULL, 2147483648ULL, rndMode);
}

static unsigned int __double2uint_rn(double a)
{
  return __internal_double2uint(a, cudaRoundNearest);
}

static unsigned int __double2uint_ru(double a)
{
  return __internal_double2uint(a, cudaRoundPosInf);
}

static unsigned int __double2uint_rd(double a)
{
  return __internal_double2uint(a, cudaRoundMinInf);
}

static long long int __internal_double2ll(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ll_kernel(a, 9223372036854775807LL, -9223372036854775807LL -1LL, -9223372036854775807LL -1LL, rndMode);
}

static long long int __double2ll_rn(double a)
{
  return __internal_double2ll(a, cudaRoundNearest);
}

static long long int __double2ll_ru(double a)
{
  return __internal_double2ll(a, cudaRoundPosInf);
}

static long long int __double2ll_rd(double a)
{
  return __internal_double2ll(a, cudaRoundMinInf);
}

static unsigned long long int __internal_double2ull(double a, enum cudaRoundMode rndMode)
{
  return __internal_double2ull_kernel(a, 18446744073709551615ULL, 9223372036854775808ULL, rndMode);
}

static unsigned long long int __double2ull_rn(double a)
{
  return __internal_double2ull(a, cudaRoundNearest);
}

static unsigned long long int __double2ull_ru(double a)
{
  return __internal_double2ull(a, cudaRoundPosInf);
}

static unsigned long long int __double2ull_rd(double a)
{
  return __internal_double2ull(a, cudaRoundMinInf);
}

static double __int2double_rn(int a)
{
  return (double)a;
}

static double __uint2double_rn(unsigned int a)
{
  return (double)a;
}

static double __ll2double_rn(long long int a)
{
  return (double)a;
}

static double __ll2double_rz(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundZero);
}

static double __ll2double_rd(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundMinInf);
}

static double __ll2double_ru(long long int a)
{
  return __internal_ll2double_kernel(a, cudaRoundPosInf);
}

static double __ull2double_rn(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundNearest);
}

static double __ull2double_rz(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundZero);
}

static double __ull2double_rd(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundMinInf);
}

static double __ull2double_ru(unsigned long long int a)
{
  return __internal_ull2double_kernel(a, cudaRoundPosInf);
}





static double __internal_fma_kernel(double x, double y, double z, enum cudaRoundMode rndMode)
{



  struct {
    unsigned int lo;
    unsigned int hi;
  } xx, yy, zz, ww;
  unsigned int s, t, u, prod0, prod1, prod2, prod3, expo_x, expo_y, expo_z;

  xx.hi = __double2hiint(x);
  xx.lo = __double2loint(x);
  yy.hi = __double2hiint(y);
  yy.lo = __double2loint(y);
  zz.hi = __double2hiint(z);
  zz.lo = __double2loint(z);

  expo_z = 0x7FF;
  t = xx.hi >> 20;
  expo_x = expo_z & t;
  expo_x = expo_x - 1;
  t = yy.hi >> 20;
  expo_y = expo_z & t;
  expo_y = expo_y - 1;
  t = zz.hi >> 20;
  expo_z = expo_z & t;
  expo_z = expo_z - 1;

  if (!((expo_x <= 0x7FD) &&
        (expo_y <= 0x7FD) &&
        (expo_z <= 0x7FD))) {





    if (((yy.hi << 1) | (yy.lo != 0)) > 0xffe00000) {
      yy.hi |= 0x00080000;
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) > 0xffe00000) {
      zz.hi |= 0x00080000;
      return __hiloint2double(zz.hi, zz.lo);
    }
    if (((xx.hi << 1) | (xx.lo != 0)) > 0xffe00000) {
      xx.hi |= 0x00080000;
      return __hiloint2double(xx.hi, xx.lo);
    }
# 690 "/home/gdiamos/temp/cuda/bin//../include/sm_13_double_functions.h" 3
    if (((((xx.hi << 1) | xx.lo) == 0) &&
         (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000)) ||
        ((((yy.hi << 1) | yy.lo) == 0) &&
         (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000))) {
      xx.hi = 0xfff80000;
      xx.lo = 0x00000000;
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      if ((((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) ||
          (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000)) {
        if ((int)(xx.hi ^ yy.hi ^ zz.hi) < 0) {
          xx.hi = 0xfff80000;
          xx.lo = 0x00000000;
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
    }




    if (((xx.hi << 1) | (xx.lo != 0)) == 0xffe00000) {
      xx.hi = xx.hi ^ (yy.hi & 0x80000000);
      return __hiloint2double(xx.hi, xx.lo);
    }
    if (((yy.hi << 1) | (yy.lo != 0)) == 0xffe00000) {
      yy.hi = yy.hi ^ (xx.hi & 0x80000000);
      return __hiloint2double(yy.hi, yy.lo);
    }
    if (((zz.hi << 1) | (zz.lo != 0)) == 0xffe00000) {
      return __hiloint2double(zz.hi, zz.lo);
    }





    if ((zz.hi == 0x80000000) && (zz.lo == 0)) {
      if ((((xx.hi << 1) | xx.lo) == 0) ||
          (((yy.hi << 1) | yy.lo) == 0)) {
        if ((int)(xx.hi ^ yy.hi) < 0) {
          return __hiloint2double(zz.hi, zz.lo);
        }
      }
    }



    if ((((zz.hi << 1) | zz.lo) == 0) &&
        ((((xx.hi << 1) | xx.lo) == 0) ||
         (((yy.hi << 1) | yy.lo) == 0))) {
      if (rndMode == cudaRoundMinInf) {
        return __hiloint2double((xx.hi ^ yy.hi ^ zz.hi) & 0x80000000, zz.lo);
      } else {
        zz.hi &= 0x7fffffff;
        return __hiloint2double(zz.hi, zz.lo);
      }
    }




    if ((((xx.hi << 1) | xx.lo) == 0) ||
        (((yy.hi << 1) | yy.lo) == 0)) {
      return __hiloint2double(zz.hi, zz.lo);
    }

    if (expo_x == 0xffffffff) {
      expo_x++;
      t = xx.hi & 0x80000000;
      s = xx.lo >> 21;
      xx.lo = xx.lo << 11;
      xx.hi = xx.hi << 11;
      xx.hi = xx.hi | s;
      if (!xx.hi) {
        xx.hi = xx.lo;
        xx.lo = 0;
        expo_x -= 32;
      }
      while ((int)xx.hi > 0) {
        s = xx.lo >> 31;
        xx.lo = xx.lo + xx.lo;
        xx.hi = xx.hi + xx.hi;
        xx.hi = xx.hi | s;
        expo_x--;
      }
      xx.lo = (xx.lo >> 11);
      xx.lo |= (xx.hi << 21);
      xx.hi = (xx.hi >> 11) | t;
    }
    if (expo_y == 0xffffffff) {
      expo_y++;
      t = yy.hi & 0x80000000;
      s = yy.lo >> 21;
      yy.lo = yy.lo << 11;
      yy.hi = yy.hi << 11;
      yy.hi = yy.hi | s;
      if (!yy.hi) {
        yy.hi = yy.lo;
        yy.lo = 0;
        expo_y -= 32;
      }
      while ((int)yy.hi > 0) {
        s = yy.lo >> 31;
        yy.lo = yy.lo + yy.lo;
        yy.hi = yy.hi + yy.hi;
        yy.hi = yy.hi | s;
        expo_y--;
      }
      yy.lo = (yy.lo >> 11);
      yy.lo |= (yy.hi << 21);
      yy.hi = (yy.hi >> 11) | t;
    }
    if (expo_z == 0xffffffff) {
      expo_z++;
      t = zz.hi & 0x80000000;
      s = zz.lo >> 21;
      zz.lo = zz.lo << 11;
      zz.hi = zz.hi << 11;
      zz.hi = zz.hi | s;
      if (!zz.hi) {
        zz.hi = zz.lo;
        zz.lo = 0;
        expo_z -= 32;
      }
      while ((int)zz.hi > 0) {
        s = zz.lo >> 31;
        zz.lo = zz.lo + zz.lo;
        zz.hi = zz.hi + zz.hi;
        zz.hi = zz.hi | s;
        expo_z--;
      }
      zz.lo = (zz.lo >> 11);
      zz.lo |= (zz.hi << 21);
      zz.hi = (zz.hi >> 11) | t;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx.hi ^ yy.hi;
  t = xx.lo >> 21;
  xx.lo = xx.lo << 11;
  xx.hi = xx.hi << 11;
  xx.hi = xx.hi | t;
  yy.hi = yy.hi & 0x000fffff;
  xx.hi = xx.hi | 0x80000000;
  yy.hi = yy.hi | 0x00100000;

  prod0 = xx.lo * yy.lo;
  prod1 = __umulhi (xx.lo, yy.lo);
  prod2 = xx.hi * yy.lo;
  prod3 = xx.lo * yy.hi;
  prod1 += prod2;
  t = prod1 < prod2;
  prod1 += prod3;
  t += prod1 < prod3;
  prod2 = __umulhi (xx.hi, yy.lo);
  prod3 = __umulhi (xx.lo, yy.hi);
  prod2 += prod3;
  s = prod2 < prod3;
  prod3 = xx.hi * yy.hi;
  prod2 += prod3;
  s += prod2 < prod3;
  prod2 += t;
  s += prod2 < t;
  prod3 = __umulhi (xx.hi, yy.hi) + s;

  yy.lo = prod0;
  yy.hi = prod1;
  xx.lo = prod2;
  xx.hi = prod3;
  expo_x = expo_x - (1023 - 2);
  expo_y = expo_y & 0x80000000;

  if (xx.hi < 0x00100000) {
    s = xx.lo >> 31;
    s = (xx.hi << 1) + s;
    xx.hi = s;
    s = yy.hi >> 31;
    s = (xx.lo << 1) + s;
    xx.lo = s;
    s = yy.lo >> 31;
    s = (yy.hi << 1) + s;
    yy.hi = s;
    s = yy.lo << 1;
    yy.lo = s;
    expo_x--;
  }

  t = 0;
  if (((zz.hi << 1) | zz.lo) != 0) {

    s = zz.hi & 0x80000000;

    zz.hi &= 0x000fffff;
    zz.hi |= 0x00100000;
    ww.hi = 0;
    ww.lo = 0;


    if ((int)expo_z > (int)expo_x) {
      t = expo_z;
      expo_z = expo_x;
      expo_x = t;
      t = zz.hi;
      zz.hi = xx.hi;
      xx.hi = t;
      t = zz.lo;
      zz.lo = xx.lo;
      xx.lo = t;
      t = ww.hi;
      ww.hi = yy.hi;
      yy.hi = t;
      t = ww.lo;
      ww.lo = yy.lo;
      yy.lo = t;
      t = expo_y;
      expo_y = s;
      s = t;
    }



    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 107) {

      t = 0;
      while (expo_z >= 32) {
        t = ww.lo | (t != 0);
        ww.lo = ww.hi;
        ww.hi = zz.lo;
        zz.lo = zz.hi;
        zz.hi = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        t = (t >> expo_z) | (ww.lo << (32 - expo_z)) |
                ((t << (32 - expo_z)) != 0);
        ww.lo = (ww.lo >> expo_z) | (ww.hi << (32 - expo_z));
        ww.hi = (ww.hi >> expo_z) | (zz.lo << (32 - expo_z));
        zz.lo = (zz.lo >> expo_z) | (zz.hi << (32 - expo_z));
        zz.hi = (zz.hi >> expo_z);
      }
    } else {
      t = 1;
      ww.lo = 0;
      ww.hi = 0;
      zz.lo = 0;
      zz.hi = 0;
    }
    if ((int)u < 0) {

      t = (unsigned)(-(int)t);
      s = (t != 0);
      u = yy.lo - s;
      s = u > yy.lo;
      yy.lo = u - ww.lo;
      s += yy.lo > u;
      u = yy.hi - s;
      s = u > yy.hi;
      yy.hi = u - ww.hi;
      s += yy.hi > u;
      u = xx.lo - s;
      s = u > xx.lo;
      xx.lo = u - zz.lo;
      s += xx.lo > u;
      xx.hi = (xx.hi - zz.hi) - s;
      if (!(xx.hi | xx.lo | yy.hi | yy.lo | t)) {

        if (rndMode == cudaRoundMinInf) {
          return __hiloint2double(0x80000000, xx.lo);
        } else {
          return __hiloint2double(xx.hi, xx.lo);
        }
      }
      if ((int)xx.hi < 0) {



        t = ~t;
        yy.lo = ~yy.lo;
        yy.hi = ~yy.hi;
        xx.lo = ~xx.lo;
        xx.hi = ~xx.hi;
        if (++t == 0) {
          if (++yy.lo == 0) {
            if (++yy.hi == 0) {
              if (++xx.lo == 0) {
              ++xx.hi;
              }
            }
          }
        }
        expo_y ^= 0x80000000;
      }


      while (!(xx.hi & 0x00100000)) {
        xx.hi = (xx.hi << 1) | (xx.lo >> 31);
        xx.lo = (xx.lo << 1) | (yy.hi >> 31);
        yy.hi = (yy.hi << 1) | (yy.lo >> 31);
        yy.lo = (yy.lo << 1);
        expo_x--;
      }
    } else {

      yy.lo = yy.lo + ww.lo;
      s = yy.lo < ww.lo;
      yy.hi = yy.hi + s;
      u = yy.hi < s;
      yy.hi = yy.hi + ww.hi;
      u += yy.hi < ww.hi;
      xx.lo = xx.lo + u;
      s = xx.lo < u;
      xx.lo = xx.lo + zz.lo;
      s += xx.lo < zz.lo;
      xx.hi = xx.hi + zz.hi + s;
      if (xx.hi & 0x00200000) {
        t = t | (yy.lo << 31);
        yy.lo = (yy.lo >> 1) | (yy.hi << 31);
        yy.hi = (yy.hi >> 1) | (xx.lo << 31);
        xx.lo = (xx.lo >> 1) | (xx.hi << 31);
        xx.hi = ((xx.hi & 0x80000000) | (xx.hi >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  t = yy.lo | (t != 0);
  t = yy.hi | (t != 0);

  xx.hi |= expo_y;
  if (expo_x <= 0x7FD) {

    xx.hi = xx.hi & ~0x00100000;
    s = xx.lo & 1;
    u = xx.lo;
    if (rndMode == cudaRoundNearest) {
      xx.lo += (t == 0x80000000) ? s : (t >> 31);
    } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
               ((rndMode == cudaRoundMinInf) && t && expo_y)) {
      xx.lo += 1;
    }
    xx.hi += (u > xx.lo);
    xx.hi += ((expo_x + 1) << 20);
    return __hiloint2double(xx.hi, xx.lo);
  } else if ((int)expo_x >= 2046) {

    if ((rndMode == cudaRoundNearest) ||
        ((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      xx.hi = (xx.hi & 0x80000000) | 0x7ff00000;
      xx.lo = 0;
    } else {
      xx.hi = (xx.hi & 0x80000000) | 0x7fefffff;
      xx.lo = 0xffffffff;
    }
    return __hiloint2double(xx.hi, xx.lo);
  }

  expo_x = (unsigned)(-(int)expo_x);
  if (expo_x > 54) {

    if (((rndMode == cudaRoundPosInf) && (!expo_y)) ||
        ((rndMode == cudaRoundMinInf) && expo_y)) {
      return __hiloint2double(xx.hi & 0x80000000, 1);
    } else {
      return __hiloint2double(xx.hi & 0x80000000, 0);
    }
  }
  yy.hi = xx.hi & 0x80000000;
  xx.hi = xx.hi & ~0xffe00000;
  if (expo_x >= 32) {
    t = xx.lo | (t != 0);
    xx.lo = xx.hi;
    xx.hi = 0;
    expo_x -= 32;
  }
  if (expo_x) {
    t = (t >> expo_x) | (xx.lo << (32 - expo_x)) | (t != 0);
    xx.lo = (xx.lo >> expo_x) | (xx.hi << (32 - expo_x));
    xx.hi = (xx.hi >> expo_x);
  }
  expo_x = xx.lo & 1;
  u = xx.lo;
  if (rndMode == cudaRoundNearest) {
    xx.lo += (t == 0x80000000) ? expo_x : (t >> 31);
  } else if (((rndMode == cudaRoundPosInf) && t && (!expo_y)) ||
             ((rndMode == cudaRoundMinInf) && t && expo_y)) {
    xx.lo += 1;
  }
  xx.hi += (u > xx.lo);
  xx.hi |= yy.hi;
  return __hiloint2double(xx.hi, xx.lo);
}

static double __fma_rn(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundNearest);
}

static double __fma_rd(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundMinInf);
}

static double __fma_ru(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundPosInf);
}

static double __fma_rz(double x, double y, double z)
{
  return __internal_fma_kernel(x, y, z, cudaRoundZero);
}

static double __dadd_rz(double a, double b)
{
  return __fma_rz(a, 1.0, b);
}

static double __dadd_ru(double a, double b)
{
  return __fma_ru(a, 1.0, b);
}

static double __dadd_rd(double a, double b)
{
  return __fma_rd(a, 1.0, b);
}

static double __dmul_rz(double a, double b)
{
  return __fma_rz(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_ru(double a, double b)
{
  return __fma_ru(a, b, __longlong_as_double(0x8000000000000000ULL));
}

static double __dmul_rd(double a, double b)
{
  return __fma_rd(a, b, 0.0);
}

static double __dadd_rn(double a, double b)
{
  return __fma_rn(a, 1.0, b);
}

static double __dmul_rn(double a, double b)
{
  return __fma_rn(a, b, __longlong_as_double(0x8000000000000000ULL));
}
# 1473 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/texture_fetch_functions.h" 1 3
# 1910 "/home/gdiamos/temp/cuda/bin//../include/texture_fetch_functions.h" 3
extern void __cudaTextureFetch(const void *tex, void *index, int integer, void *val);

static int4 __itexfetchi(const void *tex, int4 index)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static uint4 __utexfetchi(const void *tex, int4 index)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static float4 __ftexfetchi(const void *tex, int4 index)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 1, (void*)&val);

  return val;
}

static int4 __itexfetch(const void *tex, float4 index, int dim)
{
  int4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static uint4 __utexfetch(const void *tex, float4 index, int dim)
{
  uint4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}

static float4 __ftexfetch(const void *tex, float4 index, int dim)
{
  float4 val;

  __cudaTextureFetch(tex, (void*)&index, 0, (void*)&val);

  return val;
}
# 1474 "/home/gdiamos/temp/cuda/bin//../include/device_functions.h" 2 3
# 925 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 2 3


static int __cuda___signbitf(float a)
{
  return (int)((unsigned int)__float_as_int(a) >> 31);
}




static float __cuda_copysignf(float a, float b)
{
  return __int_as_float((__float_as_int(b) & 0x80000000) |
                        (__float_as_int(a) & ~0x80000000));
}
# 949 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
extern __attribute__((__weak__)) int min(int a, int b); int min(int a, int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umin(unsigned int a, unsigned int b); unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

extern __attribute__((__weak__)) int max(int a, int b); int max(int a, int b)
{
  return a > b ? a : b;
}

extern __attribute__((__weak__)) unsigned int umax(unsigned int a, unsigned int b); unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}
# 1035 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static float __internal_nearbyintf(float a)
{
  float fa = fabsf(a);

  if (fa >= 8388608.0f) {
    return a;
  } else {
    volatile float u = 8388608.0f + fa;

    u = u - 8388608.0f;
    return copysignf(u, a);
  }
}

static float __internal_fminf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;

  cvta.f = a;
  cvtb.f = b;
  if ((cvta.i << 1) > 0xff000000) return b;
  if ((cvtb.i << 1) > 0xff000000) return a;
  if ((cvta.i | cvtb.i) == 0x80000000) {
    return __int_as_float(0x80000000);
  }
  return a < b ? a : b;
}

static float __internal_fmaxf(float a, float b)
{
  volatile union {
    float f;
    unsigned int i;
  } cvta, cvtb;

  cvta.f = a;
  cvtb.f = b;
  if ((cvta.i << 1) > 0xff000000) return b;
  if ((cvtb.i << 1) > 0xff000000) return a;
  if ((cvta.f == 0.0f) && (cvtb.f == 0.0f)) {
    cvta.i &= cvtb.i;
    return cvta.f;
  }
  return a > b ? a : b;
}
# 1123 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static long int __cuda_labs(long int a)
{
  return labs(a);
}

static float __cuda_ceilf(float a)
{
  return ceilf(a);
}

static float __cuda_floorf(float a)
{
  return floorf(a);
}

static float __cuda_sqrtf(float a)
{
   return sqrtf(a);
}

static float __cuda_rsqrtf(float a)
{
   return 1.0f / sqrtf(a);
}

static float __cuda_truncf(float a)
{
  return truncf(a);
}

static int __cuda_max(int a, int b)
{
  return max(a, b);
}

static int __cuda_min(int a, int b)
{
  return min(a, b);
}

static unsigned int __cuda_umax(unsigned int a, unsigned int b)
{
  return umax(a, b);
}

static unsigned int __cuda_umin(unsigned int a, unsigned int b)
{
  return umin(a, b);
}

static long long int __cuda_llrintf(float a)
{



  return __float2ll_rn(a);

}

static long int __cuda_lrintf(float a)
{




  return (long int)__cuda_llrintf(a);




}

static float __cuda_nearbyintf(float a)
{





  return __internal_nearbyintf(a);

}

static float __cuda_fmaxf(float a, float b)
{





  return __internal_fmaxf(a, b);

}

static float __cuda_fminf(float a, float b)
{





  return __internal_fminf(a, b);

}
# 1244 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static int __cuda___finitef(float a)
{
  return __cuda_fabsf(a) < __int_as_float(0x7f800000);
}
# 1258 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static int __cuda___isinff(float a)
{
  return __cuda_fabsf(a) == __int_as_float(0x7f800000);
}

static int __cuda___isnanf(float a)
{
  return !(__cuda_fabsf(a) <= __int_as_float(0x7f800000));
}

static float __cuda_nextafterf(float a, float b)
{
  unsigned int ia;
  unsigned int ib;
  ia = __float_as_int(a);
  ib = __float_as_int(b);




  if (__cuda___isnanf(a) || __cuda___isnanf(b)) return a + b;
  if (__int_as_float (ia | ib) == 0.0f) return __int_as_float(ib);





  if (__int_as_float(ia) == 0.0f) {
    return __cuda_copysignf(__int_as_float(0x00000001), b);
  }

  if ((a < b) && (a < 0.0f)) ia--;
  if ((a < b) && (a > 0.0f)) ia++;
  if ((a > b) && (a < 0.0f)) ia++;
  if ((a > b) && (a > 0.0f)) ia--;
  a = __int_as_float(ia);





  return a;
}

static float __cuda_nanf(const char *tagp)
{

  return __int_as_float(0x7fffffff);
}


static float __internal_atanhf_kernel(float a_1, float a_2)
{
  float a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 1.566305595598990E-001f/64.0f;
  t = t * a2 + 1.995081856004762E-001f/16.0f;
  t = t * a2 + 3.333382699617026E-001f/4.0f;
  t = t * a2;
  t = t * a + a_2;
  t = t + a_1;
  return t;
}




static float __internal_atanf_kernel(float a)
{
  float t4, t0, t1;

  t4 = a * a;
  t0 = - 5.674867153f;
  t0 = t4 * - 0.823362947f + t0;
  t0 = t0 * t4 - 6.565555096f;
  t0 = t0 * t4;
  t0 = t0 * a;
  t1 = t4 + 11.33538818f;
  t1 = t1 * t4 + 28.84246826f;
  t1 = t1 * t4 + 19.69667053f;
  t1 = 1.0f / t1;
  a = t0 * t1 + a;
  return a;
}


static float __internal_tan_kernel(float a)
{
  float a2, s, t;

  a2 = a * a;
  t = 4.114678393115178E-003f * a2 - 8.231194034909670E-001f;
  s = a2 - 2.469348886157666E+000f;
  s = 1.0f / s;
  t = t * s;
  t = t * a2;
  t = t * a + a;
  return t;
}

static float __internal_accurate_logf(float a)
{
  float t;
  float z;
  float m;
  int ia, e;
  ia = __float_as_int(a);

  if ((ia < 0x00800000) || (ia > 0x7f7fffff)) {
    return __logf(a);
  }

  m = __int_as_float((ia & 0x807fffff) | 0x3f800000);
  e = ((unsigned)ia >> 23) - 127;
  if (m > 1.414213562f) {
    m = m * 0.5f;
    e = e + 1;
  }
  t = m - 1.0f;
  z = m + 1.0f;
  z = t / z;
  z = -t * z;
  z = __internal_atanhf_kernel(t, z);
  z = (float)e * 0.693147181f + z;
  return z;
}

static float2 __internal_log_ep(float a)
{
  float2 res;
  int expo;
  float m;
  float log_hi, log_lo;
  float t_hi, t_lo;
  float f, g, u, v, q;



  float r, s, e;

  expo = (__float_as_int(a) >> 23) & 0xff;


  if (expo == 0) {
    a *= 16777216.0f;
    expo = (__float_as_int(a) >> 23) & 0xff;
    expo -= 24;
  }

  expo -= 127;
  m = __int_as_float((__float_as_int(a) & 0x807fffff) | 0x3f800000);
  if (m > 1.414213562f) {
    m = m * 0.5f;
    expo = expo + 1;
  }






  f = m - 1.0f;
  g = m + 1.0f;
  g = 1.0f / g;
  u = 2.0f * f * g;
  v = u * u;
  q = 1.49356810919559350E-001f/64.0f;
  q = q * v + 1.99887797540072460E-001f/16.0f;
  q = q * v + 3.33333880955515580E-001f/4.0f;
  q = q * v;
  q = q * u;
  log_hi = __int_as_float(__float_as_int(u) & 0xfffff000);
  v = __int_as_float(__float_as_int(f) & 0xfffff000);
  u = 2.0f * (f - log_hi);
  f = f - v;
  u = u - log_hi * v;
  u = u - log_hi * f;
  u = g * u;



  r = log_hi + u;
  s = u - (r - log_hi);
  log_hi = r;
  log_lo = s;

  r = log_hi + q;
  s = ((log_hi - r) + q) + log_lo;
  log_hi = e = r + s;
  log_lo = (r - e) + s;


  t_hi = expo * 0.6931457519f;
  t_lo = expo * 1.4286067653e-6f;


  r = t_hi + log_hi;
  s = (((t_hi - r) + log_hi) + log_lo) + t_lo;
  res.y = e = r + s;
  res.x = (r - e) + s;
  return res;
}

static float __internal_accurate_log2f(float a)
{
  return 1.442695041f * __internal_accurate_logf(a);
}




static float2 __internal_dsmul (float2 x, float2 y)
{
    float2 z;

    volatile float up, vp, u1, u2, v1, v2, mh, ml;



    up = x.y * 4097.0f;
    u1 = (x.y - up) + up;
    u2 = x.y - u1;
    vp = y.y * 4097.0f;
    v1 = (y.y - vp) + vp;
    v2 = y.y - v1;
    mh = __fmul_rn(x.y,y.y);
    ml = (((u1 * v1 - mh) + u1 * v2) + u2 * v1) + u2 * v2;
    ml = (__fmul_rn(x.y,y.x) + __fmul_rn(x.x,y.y)) + ml;
    z.y = up = mh + ml;
    z.x = (mh - up) + ml;
    return z;
}


static unsigned int __cudart_i2opi_f [] = {
  0x3c439041,
  0xdb629599,
  0xf534ddc0,
  0xfc2757d1,
  0x4e441529,
  0xa2f9836e,
};


static float __internal_trig_reduction_kernel(float a, int *quadrant)
{
  float j;
  int q;
  if (__cuda_fabsf(a) > 48039.0f) {

    unsigned int ia = __float_as_int(a);
    unsigned int s = ia & 0x80000000;
    unsigned int result[7];
    unsigned int phi, plo;
    unsigned int hi, lo;
    unsigned int e;
    int idx;
    e = ((ia >> 23) & 0xff) - 128;
    ia = (ia << 8) | 0x80000000;

    idx = 4 - (e >> 5);
    hi = 0;



    for (q = 0; q < 6; q++) {
      plo = __cudart_i2opi_f[q] * ia;
      phi = __umulhi (__cudart_i2opi_f[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q] = lo;
    }
    result[q] = hi;
    e = e & 31;



    hi = result[idx+2];
    lo = result[idx+1];
    if (e) {
      q = 32 - e;
      hi = (hi << e) | (lo >> q);
      lo = (lo << e) | (result[idx] >> q);
    }
    q = hi >> 30;

    hi = (hi << 2) | (lo >> 30);
    lo = (lo << 2);
    e = (hi + (lo > 0)) > 0x80000000;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned int t;
      hi = ~hi;
      lo = -(int)lo;
      t = (lo == 0);
      hi += t;
      s = s ^ 0x80000000;
    }
    *quadrant = q;

    e = 0;
    while ((int)hi > 0) {
      hi = (hi << 1) | (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xc90fdaa2;
    hi = __umulhi(hi, 0xc90fdaa2);
    if ((int)hi > 0) {
      hi = (hi << 1) | (lo >> 31);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | (((e + 126) << 23) + (hi >> 8) + ((hi << 24) >= 0x80000000));
    return __int_as_float(ia);
  }
  q = __float2int_rn(a * 0.636619772f);
  j = (float)q;
  a = a - j * 1.5703125000000000e+000f;
  a = a - j * 4.8351287841796875e-004f;
  a = a - j * 3.1385570764541626e-007f;
  a = a - j * 6.0771005065061922e-011f;
  *quadrant = q;
  return a;
}
# 1597 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
static float __internal_expf_kernel(float a, float scale)
{
  float j, z;

  j = __cuda_truncf(a * 1.442695041f);
  z = a - j * 0.6931457519f;
  z = z - j * 1.4286067653e-6f;
  z = z * 1.442695041f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j + scale);
  return z;
}

static float __internal_accurate_expf(float a)
{
  float z;
  z = __internal_expf_kernel(a, 0.0f);
  if (a < -105.0f) z = 0.0f;
  if (a > 105.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_accurate_exp10f(float a)
{
  float j, z;
  j = __cuda_truncf(a * 3.321928094f);
  z = a - j * 3.0102920532226563e-001f;
  z = z - j * 7.9034171557301747e-007f;
  z = z * 3.321928094f;
  z = __cuda_exp2f(z) * __cuda_exp2f(j);
  if (a < -46.0f) z = 0.0f;
  if (a > 46.0f) z = __int_as_float(0x7f800000);
  return z;
}

static float __internal_lgammaf_pos(float a)
{
  float sum;
  float s, t;

  if (a == __int_as_float(0x7f800000)) {
    return a;
  }
  if (a >= 3.0f) {
    if (a >= 7.8f) {



      s = 1.0f / a;
      t = s * s;
      sum = 0.77783067e-3f;
      sum = sum * t - 0.2777655457e-2f;
      sum = sum * t + 0.83333273853e-1f;
      sum = sum * s + 0.918938533204672f;
      s = 0.5f * __internal_accurate_logf(a);
      t = a - 0.5f;
      s = s * t;
      t = s - a;
      s = __fadd_rn(s, sum);
      t = t + s;
      return t;
    } else {
      a = a - 3.0f;
      s = - 7.488903254816711E+002f;
      s = s * a - 1.234974215949363E+004f;
      s = s * a - 4.106137688064877E+004f;
      s = s * a - 4.831066242492429E+004f;
      s = s * a - 1.430333998207429E+005f;
      t = a - 2.592509840117874E+002f;
      t = t * a - 1.077717972228532E+004f;
      t = t * a - 9.268505031444956E+004f;
      t = t * a - 2.063535768623558E+005f;
      t = s / t;
      t = t + a;
      return t;
    }
  } else if (a >= 1.5f) {
    a = a - 2.0f;
    t = + 4.959849168282574E-005f;
    t = t * a - 2.208948403848352E-004f;
    t = t * a + 5.413142447864599E-004f;
    t = t * a - 1.204516976842832E-003f;
    t = t * a + 2.884251838546602E-003f;
    t = t * a - 7.382757963931180E-003f;
    t = t * a + 2.058131963026755E-002f;
    t = t * a - 6.735248600734503E-002f;
    t = t * a + 3.224670187176319E-001f;
    t = t * a + 4.227843368636472E-001f;
    t = t * a;
    return t;
  } else if (a >= 0.7f) {
    a = 1.0f - a;
    t = + 4.588266515364258E-002f;
    t = t * a + 1.037396712740616E-001f;
    t = t * a + 1.228036339653591E-001f;
    t = t * a + 1.275242157462838E-001f;
    t = t * a + 1.432166835245778E-001f;
    t = t * a + 1.693435824224152E-001f;
    t = t * a + 2.074079329483975E-001f;
    t = t * a + 2.705875136435339E-001f;
    t = t * a + 4.006854436743395E-001f;
    t = t * a + 8.224669796332661E-001f;
    t = t * a + 5.772156651487230E-001f;
    t = t * a;
    return t;
  } else {
    t = + 3.587515669447039E-003f;
    t = t * a - 5.471285428060787E-003f;
    t = t * a - 4.462712795343244E-002f;
    t = t * a + 1.673177015593242E-001f;
    t = t * a - 4.213597883575600E-002f;
    t = t * a - 6.558672843439567E-001f;
    t = t * a + 5.772153712885004E-001f;
    t = t * a;
    t = t * a + a;
    return -__internal_accurate_logf(t);
  }
}


static float __internal_sin_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = - 1.95152959e-4f;
  z = z * x2 + 8.33216087e-3f;
  z = z * x2 - 1.66666546e-1f;
  z = z * x2;
  z = z * x + x;

  return z;
}


static float __internal_cos_kernel(float x)
{
  float x2, z;

  x2 = x * x;
  z = 2.44331571e-5f;
  z = z * x2 - 1.38873163e-3f;
  z = z * x2 + 4.16666457e-2f;
  z = z * x2 - 5.00000000e-1f;
  z = z * x2 + 1.00000000e+0f;
  return z;
}

static float __internal_accurate_sinf(float a)
{
  float z;
  int i;

  if ((__cuda___isinff(a)) || (a == 0.0f)) {
    return __fmul_rn (a, 0.0f);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}







static float __cuda_rintf(float a)
{



  return __cuda_nearbyintf(a);

}

static float __cuda_sinf(float a)
{





  return __internal_accurate_sinf(a);

}

static float __cuda_cosf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kernel(z);
  } else {
    z = __internal_sin_kernel(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;

}

static float __cuda_tanf(float a)
{





  float z;
  int i;

  if (__cuda___isinff(a)) {
    return __int_as_float(0x7fffffff);
  }
  z = __internal_trig_reduction_kernel(a, &i);

  z = __internal_tan_kernel(z);
  if (i & 1) {
    z = -1.0f / z;
  }
  return z;

}

static float __cuda_log2f(float a)
{





  return __internal_accurate_log2f(a);

}

static float __cuda_expf(float a)
{





  return __internal_accurate_expf(a);

}

static float __cuda_exp10f(float a)
{





  return __internal_accurate_exp10f(a);

}

static float __cuda_coshf(float a)
{
  float z;

  a = __cuda_fabsf(a);
  z = __internal_expf_kernel(a, -2.0f);
  z = 2.0f * z + 0.125f / z;
  if (a >= 90.0f) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static float __cuda_sinhf(float a)
{
  float s, z;

  s = a;
  a = __cuda_fabsf(a);
  if (a < 1.0f) {
    float a2 = a * a;

    z = 2.816951222e-6f;
    z = z * a2 + 1.983615978e-4f;
    z = z * a2 + 8.333350058e-3f;
    z = z * a2 + 1.666666650e-1f;
    z = z * a2;
    z = z * a + a;
  } else {
    z = __internal_expf_kernel(a, -2.0f);
    z = 2.0f * z - 0.125f / z;
    if (a >= 90.0f) {
      z = __int_as_float(0x7f800000);
    }
  }
  return __cuda_copysignf(z, s);
}

static float __cuda_tanhf(float a)
{
  float s, t;

  t = __cuda_fabsf(a);
  if (t < 0.55f) {
    float z, z2;
    z = t;
    z2 = z * z;
    t = 1.643758066599993e-2f;
    t = t * z2 - 5.267181327760551e-2f;
    t = t * z2 + 1.332072505223051e-1f;
    t = t * z2 - 3.333294663641083e-1f;
    t = t * z2;
    s = t * z + z;
  } else {
    s = 1.0f - 2.0f / (__internal_expf_kernel(2.0f * t, 0.0f) + 1.0f);
    if (t >= 88.0f) {
      s = 1.0f;
    }
  }
  return __cuda_copysignf(s, a);
}

static float __cuda_atan2f(float a, float b)
{



  float t0, t1, t3, fa, fb;



  fb = __cuda_fabsf(b);
  fa = __cuda_fabsf(a);

  if (fa == 0.0f && fb == 0.0f) {
    t3 = __cuda___signbitf(b) ? 3.141592654f : 0;
  } else if ((fa == __int_as_float(0x7f800000)) && (fb == __int_as_float(0x7f800000))) {
    t3 = __cuda___signbitf(b) ? 2.356194490f : 0.785398163f;
  } else {

    if (fb < fa) {
      t0 = fa;
      t1 = fb;
    } else {
      t0 = fb;
      t1 = fa;
    }
    t3 = __internal_accurate_fdividef(t1, t0);
    t3 = __internal_atanf_kernel(t3);

    if (fa > fb) t3 = 1.570796327f - t3;
    if (b < 0.0f) t3 = 3.141592654f - t3;
  }
  t3 = __cuda_copysignf(t3, a);

  return t3;

}

static float __cuda_atanf(float a)
{
  float t0, t1;


  t0 = __cuda_fabsf(a);
  t1 = t0;
  if (t0 > 1.0f) {
    t1 = 1.0f / t1;
  }

  t1 = __internal_atanf_kernel(t1);

  if (t0 > 1.0f) {
    t1 = 1.570796327f - t1;
  }
  return __cuda_copysignf(t1, a);
}


static float __internal_asinf_kernel(float a)
{
  float t2, t3, t4;

  t2 = a * a;
  t3 = - 0.501162291f;
  t3 = t3 * t2 + 0.915201485f;
  t3 = t3 * t2;
  t3 = t3 * a;
  t4 = t2 - 5.478654385f;
  t4 = t4 * t2 + 5.491230488f;
  t4 = 1.0f / t4;
  a = t3 * t4 + a;
  return a;
}

static float __cuda_asinf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t2 = -2.0f * t1 + 1.570796327f;
  if (t0 > 0.575f) {
    t1 = t2;
  }
  return __cuda_copysignf(t1, a);
}

static float __cuda_acosf(float a)
{
  float t0, t1, t2;

  t0 = __cuda_fabsf(a);
  t2 = 1.0f - t0;
  t2 = 0.5f * t2;
  t2 = __cuda_sqrtf(t2);
  t1 = t0 > 0.575f ? t2 : t0;
  t1 = __internal_asinf_kernel(t1);
  t1 = t0 > 0.575f ? 2.0f * t1 : 1.570796327f - t1;
  if (__cuda___signbitf(a)) {
    t1 = 3.141592654f - t1;
  }
  return t1;
}

static float __cuda_logf(float a)
{





  return __internal_accurate_logf(a);

}

static float __cuda_log10f(float a)
{





  return 0.434294482f * __internal_accurate_logf(a);

}

static float __cuda_log1pf(float a)
{



  float t;




  if (a >= -0.394f && a <= 0.65f) {

    t = a + 2.0f;
    t = a / t;
    t = -a * t;
    t = __internal_atanhf_kernel (a, t);
  } else {
    t = __internal_accurate_logf (1.0f + a);
  }
  return t;

}

static float __cuda_acoshf(float a)
{



  float t;

  t = a - 1.0f;
  if (__cuda_fabsf(t) > 8388608.0f) {

    return 0.693147181f + __internal_accurate_logf(a);
  } else {
    t = t + __cuda_sqrtf(a * t + t);
    return __cuda_log1pf(t);
  }

}

static float __cuda_asinhf(float a)
{



  float fa, oofa, t;

  fa = __cuda_fabsf(a);
  if (fa > 8.507059173e37f) {
    t = 0.693147181f + __logf(fa);
  } else {
    oofa = 1.0f / fa;
    t = fa + fa / (oofa + __cuda_sqrtf(1.0f + oofa * oofa));
    t = __cuda_log1pf(t);
  }
  return __cuda_copysignf(t, a);

}

static float __cuda_atanhf(float a)
{



  float fa, t;

  fa = __cuda_fabsf(a);
  t = (2.0f * fa) / (1.0f - fa);
  t = 0.5f * __cuda_log1pf(t);
  return __cuda_copysignf(t, a);

}

static float __cuda_expm1f(float a)
{
  float t, z, j, u;

  t = __cuda_rintf (a * 1.442695041f);
  z = a - t * 0.6931457519f;
  z = z - t * 1.4286067653e-6f;

  if (__cuda_fabsf(a) < 0.41f) {
    z = a;
    t = 0.0f;
  }

  j = t;
  if (t == 128.0f) j = j - 1.0f;

  u = 1.38795078474044430E-003f;
  u = u * z + 8.38241261853264930E-003f;
  u = u * z + 4.16678317762833940E-002f;
  u = u * z + 1.66663978874356580E-001f;
  u = u * z + 4.99999940395997040E-001f;
  u = u * z;
  u = u * z + z;
  if (a == 0.0f) u = a;

  z = __cuda_exp2f (j);
  a = z - 1.0f;
  if (a != 0.0f) u = u * z + a;
  if (t == 128.0f) u = u + u;

  if (j > 128.0f) u = __int_as_float(0x7f800000);
  if (j < -25.0f) u = -1.0f;
  return u;
}

static float __cuda_hypotf(float a, float b)
{



  float v, w, t;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);

  if (a > b) {
    v = a;
    w = b;
  } else {
    v = b;
    w = a;
  }
  t = __internal_accurate_fdividef(w, v);
  t = 1.0f + t * t;
  t = v * __cuda_sqrtf(t);
  if (v == 0.0f) {
    t = v + w;
  }
  if ((v == __int_as_float(0x7f800000)) || (w == __int_as_float(0x7f800000))) {
    t = __int_as_float(0x7f800000);
  }
  return t;

}

static float __cuda_cbrtf(float a)
{



  float s, t;

  s = __cuda_fabsf(a);
  if ((a == 0.0f) || (s == __int_as_float(0x7f800000))) {
    return a;
  }
  t = __cuda_exp2f(0.333333333f * __log2f(s));
  t = t - (t - (s / (t * t))) * 0.333333333f;
  if (__cuda___signbitf(a)) {
     t = -t;
  }
  return t;

}

static float __cuda_erff(float a)
{
  float t, r, q;

  t = __cuda_fabsf(a);
  if (t < 1.0f) {
    t = t * t;
    r = -5.58510127926029810E-004f;
    r = r * t + 4.90688891415893070E-003f;
    r = r * t - 2.67027980930150640E-002f;
    r = r * t + 1.12799056505903940E-001f;
    r = r * t - 3.76122956138427440E-001f;
    r = r * t + 1.12837911712623450E+000f;
    a = a * r;
  } else if (t <= __int_as_float(0x7f800000)) {



    q = 0.3275911f * t + 1.0f;
    q = 1.0f / q;
    r = 1.061405429f;
    r = r * q - 1.453152027f;
    r = r * q + 1.421413741f;
    r = r * q - 0.284496736f;
    r = r * q + 0.254829592f;
    r = r * q;
    q = __internal_expf_kernel(-a * a, 0.0f);
    r = 1.0f - q * r;
    if (t >= 5.5f) {
      r = 1.0f;
    }
    a = __int_as_float (__float_as_int(r) | (__float_as_int(a) & 0x80000000));
  }
  return a;
}

static float __cuda_erfcf(float a)
{
  if (a <= 0.55f) {
    return 1.0f - __cuda_erff(a);
  } else if (a > 10.0f) {
    return 0.0f;
  } else {
    float p;
    float q;
    float h;
    float l;




    p = + 4.014893410762552E-006f;
    p = p * a + 5.640401259462436E-001f;
    p = p * a + 2.626649872281140E+000f;
    p = p * a + 5.486372652389673E+000f;
    p = p * a + 5.250714831459401E+000f;
    q = a + 4.651376250488319E+000f;
    q = q * a + 1.026302828878470E+001f;
    q = q * a + 1.140762166021288E+001f;
    q = q * a + 5.251211619089947E+000f;

    h = 1.0f / q;
    q = 2.0f * h - q * h * h;
    p = p * q;

    h = __int_as_float(__float_as_int(a) & 0xfffff000);
    l = __fadd_rn (a, -h);
    q = __fmul_rn (-h, h);
    q = __internal_expf_kernel(q, 0.0f);
    a = a + h;
    l = l * a;
    h = __internal_expf_kernel(-l, 0.0f);
    q = q * h;
    p = p * q;
    return p;
  }
}

static float __cuda_lgammaf(float a)
{
  float t;
  float i;
  int quot;
  t = __internal_lgammaf_pos(__cuda_fabsf(a));
  if (a >= 0.0f) return t;
  a = __cuda_fabsf(a);
  i = __cuda_floorf(a);
  if (a == i) return __int_as_float(0x7f800000);
  if (a < 1e-19f) return -__internal_accurate_logf(a);
  i = __cuda_rintf (2.0f * a);
  quot = (int)i;
  i = a - 0.5f * i;
  i = i * 3.141592654f;
  if (quot & 1) {
    i = __internal_cos_kernel(i);
  } else {
    i = __internal_sin_kernel(i);
  }
  i = __cuda_fabsf(i);
  t = 1.144729886f - __internal_accurate_logf(i * a) - t;
  return t;
}

static float __cuda_ldexpf(float a, int b)
{



  float fa = __cuda_fabsf(a);

  if ((fa == 0.0f) || (fa == __int_as_float(0x7f800000)) || (b == 0)) {
    return a;
  }
  else if (__cuda_abs(b) < 126) {
    return a * __cuda_exp2f((float)b);
  }
  else if (__cuda_abs(b) < 252) {
    int bhalf = b / 2;
    return a * __cuda_exp2f((float)bhalf) * __cuda_exp2f((float)(b - bhalf));
  }
  else {
    int bquarter = b / 4;
    float t = __cuda_exp2f((float)bquarter);
    return a * t * t * t * __cuda_exp2f((float)(b - 3 * bquarter));
  }

}

static float __cuda_scalbnf(float a, int b)
{




  return __cuda_ldexpf(a, b);

}

static float __cuda_scalblnf(float a, long int b)
{



  int t;
  if (b > 2147483647L) {
    t = 2147483647;
  } else if (b < (-2147483647 - 1)) {
    t = (-2147483647 - 1);
  } else {
    t = (int)b;
  }
  return __cuda_scalbnf(a, t);

}

static float __cuda_frexpf(float a, int *b)
{
  float fa = __cuda_fabsf(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 1.175494351e-38f) {
    a *= 16777216.0f;
    denorm = 24;
  } else {
    denorm = 0;
  }
  expo = ((__float_as_int(a) >> 23) & 0xff);
  if ((fa == 0.0f) || (expo == 0xff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 126;
    a = __int_as_float(((__float_as_int(a) & 0x807fffff) | 0x3f000000));
  }
  *b = expo;
  return a;
}

static float __cuda_modff(float a, float *b)
{



  float t;
  if (__cuda___finitef(a)) {
    t = __cuda_truncf(a);
    *b = t;
    t = a - t;
    return __cuda_copysignf(t, a);
  } else if (__cuda___isinff(a)) {
    t = 0.0f;
    *b = a;
    return __cuda_copysignf(t, a);
  } else {
    *b = a;
    return a;
  }

}

static float __cuda_fmodf(float a, float b)
{



  float orig_a = a;
  float orig_b = b;
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }







    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5f;
    }
    return __cuda_copysignf(a, orig_a);
  } else {
    return orig_a;
  }

}

static float __cuda_remainderf(float a, float b)
{

  float twoa = 0.0f;
  unsigned int quot0 = 0;
  float orig_a = a;
  float orig_b = b;

  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {

    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2509 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2541 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  return a;
}

static float __cuda_remquof(float a, float b, int* quo)
{
  float twoa = 0.0f;
  unsigned int quot = 0;
  unsigned int sign;
  float orig_a = a;
  float orig_b = b;


  sign = 0 - (__cuda___signbitf(a) != __cuda___signbitf(b));
  a = __cuda_fabsf(a);
  b = __cuda_fabsf(b);
  if (!((a <= __int_as_float(0x7f800000)) && (b <= __int_as_float(0x7f800000)))) {
    *quo = quot;
    return orig_a + orig_b;
  }
  if ((a == __int_as_float(0x7f800000)) || (b == 0.0f)) {
    *quo = quot;
    return __int_as_float(0x7fffffff);
  } else if (a >= b) {


    int expoa = (a < 1.175494351e-38f) ?
        ((int)__log2f(a)) : (((__float_as_int(a) >> 23) & 0xff) - 127);
    int expob = (b < 1.175494351e-38f) ?
        ((int)__log2f(b)) : (((__float_as_int(b) >> 23) & 0xff) - 127);
    int scale = expoa - expob;
    float scaled_b = __cuda_ldexpf(b, scale);
    if (scaled_b <= 0.5f * a) {
      scaled_b *= 2.0f;
    }
# 2594 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        twoa = (2.0f * a - scaled_b) - scaled_b;
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5f;
    }
  }


  twoa = 2.0f * a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
    a = __cuda_copysignf (a, -1.0f);
  }
# 2629 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
  a = __int_as_float((__float_as_int(orig_a) & 0x80000000)^
                     __float_as_int(a));
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *quo = quot;
  return a;
}

static float __cuda_fmaf(float a, float b, float c)
{
  unsigned int xx, yy, zz, ww;
  unsigned int temp, s, u;
  unsigned int expo_x, expo_y, expo_z;

  xx = __float_as_int(a);
  yy = __float_as_int(b);
  zz = __float_as_int(c);
# 2655 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
  temp = 0xff;
  expo_x = temp & (xx >> 23);
  expo_x = expo_x - 1;
  expo_y = temp & (yy >> 23);
  expo_y = expo_y - 1;
  expo_z = temp & (zz >> 23);
  expo_z = expo_z - 1;

  if (!((expo_x <= 0xFD) &&
        (expo_y <= 0xFD) &&
        (expo_z <= 0xFD))) {




    if ((yy << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
    if ((zz << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
    if ((xx << 1) > 0xff000000) {
      return __int_as_float(0x7fffffff);
    }
# 2690 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
    if ((((xx << 1) == 0) && ((yy << 1) == 0xff000000)) ||
        (((yy << 1) == 0) && ((xx << 1) == 0xff000000))) {
      return __int_as_float(0x7fffffff);
    }
    if ((zz << 1) == 0xff000000) {
      if (((yy << 1) == 0xff000000) || ((xx << 1) == 0xff000000)) {
        if ((int)(xx ^ yy ^ zz) < 0) {
          return __int_as_float(0x7fffffff);
        }
      }
    }




    if ((xx << 1) == 0xff000000) {
      xx = xx ^ (yy & 0x80000000);
      return __int_as_float(xx);
    }
    if ((yy << 1) == 0xff000000) {
      yy = yy ^ (xx & 0x80000000);
      return __int_as_float(yy);
    }
    if ((zz << 1) == 0xff000000) {
      return __int_as_float(zz);
    }





    if (zz == 0x80000000) {
      if (((xx << 1) == 0) || ((yy << 1) == 0)) {
        if ((int)(xx ^ yy) < 0) {
          return __int_as_float(zz);
        }
      }
    }



    if (((zz << 1) == 0) &&
        (((xx << 1) == 0) || ((yy << 1) == 0))) {
      zz &= 0x7fffffff;
      return __int_as_float(zz);
    }



    if (((xx << 1) == 0) || ((yy << 1) == 0)) {
      return __int_as_float(zz);
    }

    if (expo_x == (unsigned int)-1) {
      temp = xx & 0x80000000;
      xx = xx << 8;
      while (!(xx & 0x80000000)) {
        xx <<= 1;
        expo_x--;
      }
      expo_x++;
      xx = (xx >> 8) | temp;
    }

    if (expo_y == (unsigned int)-1) {
      temp = yy & 0x80000000;
      yy = yy << 8;
      while (!(yy & 0x80000000)) {
        yy <<= 1;
        expo_y--;
      }
      expo_y++;
      yy = (yy >> 8) | temp;
    }

    if ((expo_z == (unsigned int)-1) && ((zz << 1) != 0)) {
      temp = zz & 0x80000000;
      zz = zz << 8;
      while (!(zz & 0x80000000)) {
        zz <<= 1;
        expo_z--;
      }
      expo_z++;
      zz = (zz >> 8) | temp;
    }
  }

  expo_x = expo_x + expo_y;
  expo_y = xx ^ yy;
  xx = xx & 0x00ffffff;
  yy = yy << 8;
  xx = xx | 0x00800000;
  yy = yy | 0x80000000;

  s = __umulhi(xx, yy);
  yy = xx * yy;
  xx = s;
  expo_x = expo_x - 127 + 2;
  expo_y = expo_y & 0x80000000;


  if (xx < 0x00800000) {
      xx = (xx << 1) | (yy >> 31);
      yy = (yy << 1);
      expo_x--;
  }
  temp = 0;
  if ((zz << 1) != 0) {
    s = zz & 0x80000000;
    zz &= 0x00ffffff;
    zz |= 0x00800000;
    ww = 0;

    if ((int)expo_z > (int)expo_x) {
      temp = expo_z;
      expo_z = expo_x;
      expo_x = temp;
      temp = zz;
      zz = xx;
      xx = temp;
      temp = ww;
      ww = yy;
      yy = temp;
      temp = expo_y;
      expo_y = s;
      s = temp;
    }


    expo_z = expo_x - expo_z;
    u = expo_y ^ s;
    if (expo_z <= 49) {

      temp = 0;
      while (expo_z >= 32) {
        temp = ww | (temp != 0);
        ww = zz;
        zz = 0;
        expo_z -= 32;
      }
      if (expo_z) {
        temp = ((temp >> expo_z) | (ww << (32 - expo_z)) |
                ((temp << (32 - expo_z)) != 0));
        ww = (ww >> expo_z) | (zz << (32 - expo_z));
        zz = (zz >> expo_z);
      }
    } else {
      temp = 1;
      ww = 0;
      zz = 0;
    }
    if ((int)u < 0) {

      temp = (unsigned)(-(int)temp);
      s = (temp != 0);
      u = yy - s;
      s = u > yy;
      yy = u - ww;
      s += yy > u;
      xx = (xx - zz) - s;
      if (!(xx | yy | temp)) {

        return __int_as_float(xx);
      }
      if ((int)xx < 0) {



        temp = ~temp;
        yy = ~yy;
        xx = ~xx;
        if (++temp == 0) {
          if (++yy == 0) {
            ++xx;
          }
        }
        expo_y ^= 0x80000000;
      }

      while (!(xx & 0x00800000)) {
        xx = (xx << 1) | (yy >> 31);
        yy = (yy << 1);
        expo_x--;
      }
    } else {

      yy = yy + ww;
      s = yy < ww;
      xx = xx + zz + s;
      if (xx & 0x01000000) {
        temp = temp | (yy << 31);
        yy = (yy >> 1) | (xx << 31);
        xx = ((xx & 0x80000000) | (xx >> 1)) & ~0x40000000;
        expo_x++;
      }
    }
  }
  temp = yy | (temp != 0);
  if (expo_x <= 0xFD) {

    xx |= expo_y;
    s = xx & 1;
    xx += (temp == 0x80000000) ? s : (temp >> 31);
    xx = xx + (expo_x << 23);
    return __int_as_float(xx);
  } else if ((int)expo_x >= 126) {

    xx = expo_y | 0x7f800000;
    return __int_as_float(xx);
  }

  expo_x = (unsigned int)(-(int)expo_x);
  if (expo_x > 25) {

    return __int_as_float(expo_y);
  }
  yy = (xx << (32 - expo_x)) | ((yy) ? 1 : 0);
  xx = expo_y + (xx >> expo_x);
  xx = xx + ((yy==0x80000000) ? (xx & 1) : (yy >> 31));
  xx |= expo_y;




  return __int_as_float(xx);
}

static float __internal_accurate_powf(float a, float b)
{
  float2 loga, prod;



  float t;



  loga = __internal_log_ep(a);


  if (__cuda_fabsf(b) > 1.0e34f) b *= 1.220703125e-4f;
  prod.y = b;
  prod.x = 0.0f;
  prod = __internal_dsmul (prod, loga);


  if (__float_as_int(prod.y) == 0x42b17218) {
    prod.y = __int_as_float(__float_as_int(prod.y) - 1);
    prod.x = prod.x + __int_as_float(0x37000000);
  }


  t = __cuda_expf(prod.y);

  if (t != __int_as_float(0x7f800000)) {



    t = t * prod.x + t;
  }
  return t;
}

static float __cuda_powif(float a, int b)
{
  unsigned int e = __cuda_abs(b);
  float r = 1.0f;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0f/r : r;
    }
    a = a * a;
  }
}

static double __cuda_powi(double a, int b)
{
  unsigned int e = __cuda_abs(b);
  double r = 1.0;

  while (1) {
    if ((e & 1) != 0) {
      r = r * a;
    }
    e = e >> 1;
    if (e == 0) {
      return b < 0 ? 1.0/r : r;
    }
    a = a * a;
  }
}

static float __cuda_powf(float a, float b)
{





  int bIsOddInteger;
  float t;
  if (a == 1.0f || b == 0.0f) {
    return 1.0f;
  }
  if (__cuda___isnanf(a) || __cuda___isnanf(b)) {
    return a + b;
  }
  if (a == __int_as_float(0x7f800000)) {
    return __cuda___signbitf(b) ? 0.0f : __int_as_float(0x7f800000);
  }
  if (__cuda___isinff(b)) {
    if (a == -1.0f) {
      return 1.0f;
    }
    t = (__cuda_fabsf(a) > 1.0f) ? __int_as_float(0x7f800000) : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0f * floorf(0.5f * b))) == 1.0f;
  if (a == 0.0f) {
    t = bIsOddInteger ? a : 0.0f;
    if (b < 0.0f) {
      t = 1.0f / t;
    }
    return t;
  }
  if (a == -__int_as_float(0x7f800000)) {
    t = (b < 0.0f) ? -1.0f/a : -a;
    if (bIsOddInteger) {
      t = __int_as_float(__float_as_int(t) ^ 0x80000000);
    }
    return t;
  }
  if ((a < 0.0f) && (b != __cuda_truncf(b))) {
    return __int_as_float(0x7fffffff);
  }
  t = __cuda_fabsf(a);
  t = __internal_accurate_powf(t, b);
  if ((a < 0.0f) && bIsOddInteger) {
    t = __int_as_float(__float_as_int(t) ^ 0x80000000);
  }
  return t;

}


static float __internal_tgammaf_kernel(float a)
{
  float t;
  t = - 1.05767296987211380E-003f;
  t = t * a + 7.09279059435508670E-003f;
  t = t * a - 9.65347121958557050E-003f;
  t = t * a - 4.21736613253687960E-002f;
  t = t * a + 1.66542401247154280E-001f;
  t = t * a - 4.20043267827838460E-002f;
  t = t * a - 6.55878234051332940E-001f;
  t = t * a + 5.77215696929794240E-001f;
  t = t * a + 1.00000000000000000E+000f;
  return t;
}





static float __cuda_tgammaf(float a)
{
  float s, xx, x=a;
  if (x >= 0.0f) {
    if (x > 36.0f) x = 36.0f;
    s = 1.0f;
    xx = x;
    if (x > 34.03f) {
      xx -= 1.0f;
    }
    while (xx > 1.5f) {
      xx = xx - 1.0f;
      s = s * xx;
    }
    if (x >= 0.5f) {
      xx = xx - 1.0f;
    }
    xx = __internal_tgammaf_kernel(xx);
    if (x < 0.5f) {
      xx = xx * x;
    }
    s = s / xx;
    if (x > 34.03f) {

      xx = x - 1.0f;
      s = s * xx;
    }
    return s;
  } else {
    if (x == __cuda_floorf(x)) {
      x = __int_as_float(0x7fffffff);

      return x;

    }
    if (x < -41.1f) x = -41.1f;
    xx = x;
    if (x < -34.03f) {
      xx += 6.0f;
    }
    s = xx;
    while (xx < -0.5f) {
      xx = xx + 1.0f;
      s = s * xx;
    }
    xx = __internal_tgammaf_kernel(xx);
    s = s * xx;
    s = 1.0f / s;
    if (x < -34.03f) {
      xx = x;
      xx *= (x + 1.0f);
      xx *= (x + 2.0f);
      xx *= (x + 3.0f);
      xx *= (x + 4.0f);
      xx *= (x + 5.0f);
      xx = 1.0f / xx;
      s = s * xx;
      if ((a < -42.0f) && !(((int)a)&1)) {
        s = __int_as_float(0x80000000);
      }
    }
    return s;
  }
}

static float __cuda_roundf(float a)
{



  float fa = __cuda_fabsf(a);
  if (fa > 8388608.0f) {
    return a;
  } else {
    float u = __cuda_floorf(fa + 0.5f);
    if (fa < 0.5f) u = 0.0f;
    return __cuda_copysignf(u, a);
  }

}

static long long int __internal_llroundf_kernel(float a)
{
  unsigned long long int res, t = 0LL;
  int shift;
  unsigned int ia = __float_as_int(a);
  if ((ia << 1) > 0xff000000) return 0LL;
  if ((int)ia >= 0x5f000000) return 0x7fffffffffffffffLL;
  if (ia >= 0xdf000000) return 0x8000000000000000LL;
  shift = 189 - ((ia >> 23) & 0xff);
  res = ((long long int)(((ia << 8) | 0x80000000) >> 1)) << 32;
  if (shift >= 64) {
    t = res;
    res = 0;
  } else if (shift) {
    t = res << (64 - shift);
    res = res >> shift;
  }
  if (t >= 0x8000000000000000LL) {
      res++;
  }
  if ((int)ia < 0) res = (unsigned long long int)(-(long long int)res);
  return (long long int)res;
}

static long long int __cuda_llroundf(float a)
{



  return __internal_llroundf_kernel(a);

}

static long int __cuda_lroundf(float a)
{




  return (long int)__cuda_llroundf(a);
# 3192 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
}

static float __cuda_fdimf(float a, float b)
{
  float t;
  t = a - b;
  if (a <= b) {
    t = 0.0f;
  }
  return t;
}

static int __cuda_ilogbf(float a)
{
  unsigned int i;
  int expo;
  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    if ((i == 0x7f800000)) {
      expo = ((int)((unsigned int)-1 >> 1));
    }
    if ((i > 0x7f800000)) {
      expo = -((int)((unsigned int)-1 >> 1))-1;
    }
  }
  return expo;
}

static float __cuda_logbf(float a)
{



  unsigned int i;
  int expo;
  float res;

  if (__cuda___isnanf(a)) return a + a;

  a = __cuda_fabsf(a);
  if (a <= 1.175494351e-38f) {

    if (a == 0.0f) {
      res = -__int_as_float(0x7f800000);
    } else {
      expo = -126;
      i = __float_as_int(a);
      i = i << 8;
      while ((int)i >= 0) {
        expo--;
        i = i + i;
      }
      res = (float)expo;
    }
  } else {
    i = __float_as_int(a);
    expo = ((int)((i >> 23) & 0xff)) - 127;
    res = (float)expo;
    if ((i >= 0x7f800000)) {

      res = a + a;
    }
  }
  return res;

}

static void __cuda_sincosf(float a, float *sptr, float *cptr)
{





  float t, u, s, c;
  int quadrant;
  if (__cuda___isinff(a)) {
    *sptr = __int_as_float(0x7fffffff);
    *cptr = __int_as_float(0x7fffffff);
    return;
  }
  if (a == 0.0f) {
    *sptr = a;
    *cptr = 1.0f;
    return;
  }
  t = __internal_trig_reduction_kernel(a, &quadrant);
  u = __internal_cos_kernel(t);
  t = __internal_sin_kernel(t);
  if (quadrant & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (quadrant & 2) {
    s = -s;
  }
  quadrant++;
  if (quadrant & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;

}
# 3323 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
extern __attribute__((__weak__)) double rsqrt(double a); double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

extern __attribute__((__weak__)) float rsqrtf(float a); float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}
# 3861 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 3
# 1 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 1 3
# 59 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 3
static double __cuda_fabs(double a)
{
  return fabs(a);
}

static double __cuda_fmax(double a, double b)
{

  volatile union {
    double d;
    unsigned long long int l;
  } cvta, cvtb;
  cvta.d = a;
  cvtb.d = b;
  if ((cvtb.l << 1) > 0xffe0000000000000ULL) return a;
  if ((cvta.l << 1) > 0xffe0000000000000ULL) return b;
  if ((cvta.d == 0.0) && (cvtb.d == 0.0)) {
    cvta.l &= cvtb.l;
    return cvta.d;
  }
  return a > b ? a : b;



}

static double __cuda_fmin(double a, double b)
{

  volatile union {
    double d;
    unsigned long long int l;
  } cvta, cvtb;
  cvta.d = a;
  cvtb.d = b;
  if ((cvtb.l << 1) > 0xffe0000000000000ULL) return a;
  if ((cvta.l << 1) > 0xffe0000000000000ULL) return b;
  if ((cvta.l | cvtb.l) == 0x8000000000000000ULL) {
    return __longlong_as_double(0x8000000000000000ULL) ;
  }
  return a < b ? a : b;



}

static double __cuda_ceil(double a)
{
  return ceil(a);
}

static double __cuda_floor(double a)
{
  return floor(a);
}

static double __cuda_trunc(double a)
{
  return trunc(a);
}

static double __cuda_nearbyint(double a)
{



  double res = nearbyint(a);





  return res;

}







static double __cuda_rint(double a)
{
  return __cuda_nearbyint(a);
}

static long int __cuda_lrint(double a)
{

  return (long int)__double2ll_rn(a);



}

static long long int __cuda_llrint(double a)
{
  return __double2ll_rn(a);
}

static int __cuda___signbit(double a)
{
  return (int)((unsigned int)__double2hiint(a) >> 31);
}

static int __cuda___finite(double a)
{
  return __cuda_fabs(a) < __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isinf(double a)
{
  return __cuda_fabs(a) == __longlong_as_double(0x7ff0000000000000ULL);
}

static int __cuda___isnan(double a)
{
  return !(__cuda_fabs(a) <= __longlong_as_double(0x7ff0000000000000ULL));
}

static double __cuda_copysign(double a, double b)
{
  int alo, ahi, bhi;

  bhi = __double2hiint(b);
  alo = __double2loint(a);
  ahi = __double2hiint(a);
  ahi = (bhi & 0x80000000) | (ahi & ~0x80000000);
  return __hiloint2double(ahi, alo);
}


static unsigned long long int __cudart_i2opi_d [] = {
  0x6bfb5fb11f8d5d08ULL,
  0x3d0739f78a5292eaULL,
  0x7527bac7ebe5f17bULL,
  0x4f463f669e5fea2dULL,
  0x6d367ecf27cb09b7ULL,
  0xef2f118b5a0a6d1fULL,
  0x1ff897ffde05980fULL,
  0x9c845f8bbdf9283bULL,
  0x3991d639835339f4ULL,
  0xe99c7026b45f7e41ULL,
  0xe88235f52ebb4484ULL,
  0xfe1deb1cb129a73eULL,
  0x06492eea09d1921cULL,
  0xb7246e3a424dd2e0ULL,
  0xfe5163abdebbc561ULL,
  0xdb6295993c439041ULL,
  0xfc2757d1f534ddc0ULL,
  0xa2f9836e4e441529ULL,
};

static double __internal_trig_reduction_kerneld(double a, int *quadrant)
{
  double j;
  int q;
  if (__cuda_fabs(a) > 2147483648.0) {

    unsigned long long int ia;
    unsigned long long int s;
    unsigned long long int result[5];
    unsigned long long int phi, plo;
    unsigned long long int hi, lo;
    unsigned int e;
    int idx;

    ia = __double_as_longlong(a);
    s = ia & 0x8000000000000000ULL;
    e = (unsigned int)(((ia >> 52) & 0x7ff) - 1024);
    ia = (ia << 11) | 0x8000000000000000ULL;

    idx = 16 - (e >> 6);
    hi = 0;



    for (q = (idx-1); q < min(18,idx+3); q++) {
      plo = __cudart_i2opi_d[q] * ia;
      phi = __umul64hi (__cudart_i2opi_d[q], ia);
      lo = hi + plo;
      hi = phi + (lo < plo);
      result[q-(idx-1)] = lo;
    }
    result[q-(idx-1)] = hi;
    e = e & 63;



    hi = result[3];
    lo = result[2];
    if (e) {
      q = 64 - e;
      hi = (hi << e) | (lo >> q);
      lo = (lo << e) | (result[1] >> q);
    }
    q = (int)(hi >> 62);

    hi = (hi << 2) | (lo >> 62);
    lo = (lo << 2);
    e = (hi | (lo > 0)) > 0x8000000000000000ULL;
    q += e;
    if (s) q = -q;
    if (e) {
      unsigned long long int t;
      hi = ~hi;
      lo = -(long long int)lo;
      t = (lo == 0ULL);
      hi += t;
      s = s ^ 0x8000000000000000ULL;
    }
    *quadrant = q;

    e = 0;
    while ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    lo = hi * 0xC90FDAA22168C235ULL;
    hi = __umul64hi (hi, 0xC90FDAA22168C235ULL);
    if ((long long int)hi > 0) {
      hi = (hi << 1) | (lo >> 63);
      lo = (lo << 1);
      e--;
    }
    hi = hi + (lo > 0);
    ia = s | ((((unsigned long long int)(e + 1022)) << 52) + (hi >> 11) +
              ((hi << 53) >= 0x8000000000000000ULL));
    return __longlong_as_double(ia);
  }

  q = __double2int_rn (a * 6.3661977236758138e-1);
  j = (double)q;




  a = __fma_rn (-j, 1.5707963267948966e+000, a);
  a = __fma_rn (-j, 6.1232339957367574e-017, a);
  a = __fma_rn (-j, 8.4784276603688985e-032, a);
  *quadrant = q;
  return a;
}


static double __internal_sin_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = 1.5896230157221844E-010;
  z = __fma_rn (z, x2, -2.5050747762850355E-008);
  z = __fma_rn (z, x2, 2.7557313621385676E-006);
  z = __fma_rn (z, x2, -1.9841269829589539E-004);
  z = __fma_rn (z, x2, 8.3333333333221182E-003);
  z = __fma_rn (z, x2, -1.6666666666666630E-001);
  z = z * x2;
  z = __fma_rn (z, x, x);
  return z;
}


static double __internal_cos_kerneld(double x)
{
  double x2, z;
  x2 = x * x;
  z = -1.136788825395985E-011;
  z = __fma_rn (z, x2, 2.087588480545065E-009);
  z = __fma_rn (z, x2, -2.755731555403950E-007);
  z = __fma_rn (z, x2, 2.480158729365970E-005);
  z = __fma_rn (z, x2, -1.388888888888074E-003);
  z = __fma_rn (z, x2, 4.166666666666664E-002);
  z = __fma_rn (z, x2, -5.000000000000000E-001);
  z = __fma_rn (z, x2, 1.000000000000000E+000);
  return z;
}


static double __internal_tan_kerneld(double x, int i)
{
  double x2, z, q;
  x2 = x * x;
  z = 9.8006287203286300E-006;
  z = __fma_rn (z, x2, -2.4279526494179897E-005);
  z = __fma_rn (z, x2, 4.8644173130937162E-005);
  z = __fma_rn (z, x2, -2.5640012693782273E-005);
  z = __fma_rn (z, x2, 6.7223984330880073E-005);
  z = __fma_rn (z, x2, 8.3559287318211639E-005);
  z = __fma_rn (z, x2, 2.4375039850848564E-004);
  z = __fma_rn (z, x2, 5.8886487754856672E-004);
  z = __fma_rn (z, x2, 1.4560454844672040E-003);
  z = __fma_rn (z, x2, 3.5921008885857180E-003);
  z = __fma_rn (z, x2, 8.8632379218613715E-003);
  z = __fma_rn (z, x2, 2.1869488399337889E-002);
  z = __fma_rn (z, x2, 5.3968253972902704E-002);
  z = __fma_rn (z, x2, 1.3333333333325342E-001);
  z = __fma_rn (z, x2, 3.3333333333333381E-001);
  z = z * x2;
  q = __fma_rn (z, x, x);
  if (i) {
    double s = q - x;
    double w = __fma_rn (z, x, -s);
    z = 1.0 / q;
    z = -z;
    s = __fma_rn (q, z, 1.0);
    q = __fma_rn (z, __fma_rn (z, w, s), z);
  }
  return q;
}

static double __cuda_sqrt(double a)
{
  return sqrt(a);
}

static double __cuda_rsqrt(double a)
{

    return 1.0 / sqrt(a);



}


static double __internal_expm1_kernel (double a)
{
  double t;
  t = 2.08842685477913050E-009;
  t = __fma_rn (t, a, 2.51366409033551950E-008);
  t = __fma_rn (t, a, 2.75574612072447230E-007);
  t = __fma_rn (t, a, 2.75571539284473460E-006);
  t = __fma_rn (t, a, 2.48015869443077950E-005);
  t = __fma_rn (t, a, 1.98412699878799470E-004);
  t = __fma_rn (t, a, 1.38888888892029890E-003);
  t = __fma_rn (t, a, 8.33333333327662860E-003);
  t = __fma_rn (t, a, 4.16666666666656370E-002);
  t = __fma_rn (t, a, 1.66666666666667380E-001);
  t = __fma_rn (t, a, 5.00000000000000000E-001);
  t = t * a;
  t = __fma_rn (t, a, a);
  return t;
}


static double __internal_atanh_kernel (double a_1, double a_2)
{
  double a, a2, t;

  a = a_1 + a_2;
  a2 = a * a;
  t = 7.597322383488143E-002/65536.0;
  t = __fma_rn (t, a2, 6.457518383364042E-002/16384.0);
  t = __fma_rn (t, a2, 7.705685707267146E-002/4096.0);
  t = __fma_rn (t, a2, 9.090417561104036E-002/1024.0);
  t = __fma_rn (t, a2, 1.111112158368149E-001/256.0);
  t = __fma_rn (t, a2, 1.428571416261528E-001/64.0);
  t = __fma_rn (t, a2, 2.000000000069858E-001/16.0);
  t = __fma_rn (t, a2, 3.333333333333198E-001/4.0);
  t = t * a2;
  t = __fma_rn (t, a, a_2);
  t = t + a_1;
  return t;
}

static double __internal_exp2i_kernel(int b)
{
  return __hiloint2double((b + 1023) << 20, 0);
}

static double __internal_half(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi - 0x00100000, ilo);
}

static double __internal_twice(double a)
{
  unsigned int ihi, ilo;
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  return __hiloint2double(ihi + 0x00100000, ilo);
}

static double __cuda_sin(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a) || (a == 0.0)) {
    return __dmul_rn(a, 0.0);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static double __cuda_cos(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  i++;
  if (i & 1) {
    z = __internal_cos_kerneld(z);
  } else {
    z = __internal_sin_kerneld(z);
  }
  if (i & 2) {
    z = -z;
  }
  return z;
}

static void __cuda_sincos(double a, double *sptr, double *cptr)
{
  double t, u, s, c;
  int i;
  if (__cuda___isinf(a)) {
    *sptr = __longlong_as_double(0xfff8000000000000ULL);
    *cptr = __longlong_as_double(0xfff8000000000000ULL);
    return;
  }
  if (a == 0.0) {
    *sptr = a;
    *cptr = 1.0;
    return;
  }
  t = __internal_trig_reduction_kerneld(a, &i);
  u = __internal_cos_kerneld(t);
  t = __internal_sin_kerneld(t);
  if (i & 1) {
    s = u;
    c = t;
  } else {
    s = t;
    c = u;
  }
  if (i & 2) {
    s = -s;
  }
  i++;
  if (i & 2) {
    c = -c;
  }
  *sptr = s;
  *cptr = c;
}

static double __cuda_tan(double a)
{
  double z;
  int i;
  if (__cuda___isinf(a)) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  z = __internal_trig_reduction_kerneld(a, &i);

  z = __internal_tan_kerneld(z, i & 1);
  return z;
}

static double __cuda_log(double a)
{
  double m, f, g, u, v, tmp, q, ulo, log_lo, log_hi;
  int ihi, ilo;
  int e = 0;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);
  if (__cuda___isnan(a)) {
    return a + a;
  }

  if (a < 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }

  if (a == 0) {
    return -__longlong_as_double(0x7ff0000000000000ULL);
  }

  if (__cuda___isinf(a)) {
    return a;
  }

  if (a < 2.22507385850720140e-308) {
    a = a * 18014398509481984.0;
    e = -54;
    ihi = __double2hiint(a);
    ilo = __double2loint(a);
  }



  e += ((ihi >> 20) & 0x7ff) - 1023;
  m = __hiloint2double ((ihi & 0x800fffff) | 0x3ff00000, ilo);
  if (m > 1.4142135623730951e+0) {
    m = __internal_half(m);
    e = e + 1;
  }

  f = m - 1.0;
  g = m + 1.0;
  g = 1.0 / g;
  u = f * g;
  u = u + u;

  v = u * u;
  q = 6.7261411553826339E-2/65536.0;
  q = __fma_rn (q, v, 6.6133829643643394E-2/16384.0);
  q = __fma_rn (q, v, 7.6940931149150890E-2/4096.0);
  q = __fma_rn (q, v, 9.0908745692137444E-2/1024.0);
  q = __fma_rn (q, v, 1.1111111499059706E-1/256.0);
  q = __fma_rn (q, v, 1.4285714283305975E-1/64.0);
  q = __fma_rn (q, v, 2.0000000000007223E-1/16.0);
  q = __fma_rn (q, v, 3.3333333333333326E-1/4.0);
  tmp = __internal_twice (f - u);
  tmp = __fma_rn (-u, f, tmp);
  ulo = g * tmp;

  q = q * v;
  q = q * u;

  log_hi = u;
  log_lo = ulo + q;

  q = __fma_rn ( e, 6.9314718055994529e-1, log_hi);
  tmp = __fma_rn (-e, 6.9314718055994529e-1, q);
  tmp = tmp - log_hi;
  log_hi = q;
  log_lo = log_lo - tmp;
  log_lo = __fma_rn (e, 2.3190468138462996e-17, log_lo);
  return log_hi + log_lo;
}


static double2 __internal_ddadd_xgty (double2 x, double2 y)
{
    double2 z;

    volatile double r, s, e;



    r = x.y + y.y;
    e = x.y - r;
    s = ((e + y.y) + y.x) + x.x;
    z.y = e = r + s;
    z.x = (r - e) + s;
    return z;
}


static double2 __internal_ddmul (double2 x, double2 y)
{

    volatile double e;



    double2 t, z;
    t.y = x.y * y.y;
    t.x = __fma_rn (x.y, y.y, -t.y);
    t.x = __fma_rn (x.x, y.x, t.x);
    t.x = __fma_rn (x.y, y.x, t.x);
    t.x = __fma_rn (x.x, y.y, t.x);
    z.y = e = t.y + t.x;
    z.x = (t.y - e) + t.x;
    return z;
}

static double2 __internal_log_ext_prec(double a)
{
  double2 res;
  double2 qq, cc, uu, tt;
  double f, g, u, v, q, ulo, tmp, m;
  int ilo, ihi, expo;

  ihi = __double2hiint(a);
  ilo = __double2loint(a);
  expo = (ihi >> 20) & 0x7ff;

  if (expo == 0) {
    a *= 18014398509481984.0;
    ihi = __double2hiint(a);
    ilo = __double2loint(a);
    expo = (ihi >> 20) & 0x7ff;
    expo -= 54;
  }
  expo -= 1023;




  m = __hiloint2double((ihi & 0x800fffff) | 0x3ff00000, ilo);
  if (m > 1.4142135623730951e+0) {
    m = __internal_half(m);
    expo = expo + 1;
  }





  f = m - 1.0;
  g = m + 1.0;
  g = 1.0 / g;
  u = f * g;
  u = u + u;

  v = u * u;
  q = 6.6253631649203309E-2/65536.0;
  q = __fma_rn (q, v, 6.6250935587260612E-2/16384.0);
  q = __fma_rn (q, v, 7.6935437806732829E-2/4096.0);
  q = __fma_rn (q, v, 9.0908878711093280E-2/1024.0);
  q = __fma_rn (q, v, 1.1111111322892790E-1/256.0);
  q = __fma_rn (q, v, 1.4285714284546502E-1/64.0);
  q = __fma_rn (q, v, 2.0000000000003113E-1/16.0);
  q = q * v;

  tmp = __internal_twice (f - u);
  tmp = __fma_rn (-u, f, tmp);
  ulo = g * tmp;

  qq.y = q;
  qq.x = 0.0;
  uu.y = u;
  uu.x = ulo;
  cc.y = 3.3333333333333331E-1/4.0;
  cc.x = -9.8201492846582465E-18/4.0;
  qq = __internal_ddadd_xgty (cc, qq);

  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  qq = __internal_ddmul(qq, uu);
  uu = __internal_ddadd_xgty (uu, qq);
  u = uu.y;
  ulo = uu.x;

  tt.y = expo * 6.9314718055966296e-001;
  tt.x = expo * 2.8235290563031577e-013;

  res = __internal_ddadd_xgty (tt, uu);
  return res;
}

static double __cuda_log2(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 1.4426950408889634e+0, t * 2.0355273740931033e-17);
}

static double __cuda_log10(double a)
{
  double t;
  t = __cuda_log(a);
  return __fma_rn (t, 4.3429448190325182e-1, t * 1.09831965021676510e-17);
}

static double __cuda_log1p(double a)
{
  double t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  if ((a < -0.4) || (a > 6.6666666666666667e-1)) {
    return __cuda_log (a + 1.0);
  }

  t = a + 2.0;
  t = a / t;
  t = -a * t;
  t = __internal_atanh_kernel(a, t);
  return t;
}

static double __internal_exp_kernel(double a, int scale)
{
  double t, fac, z;
  int i;

  t = __cuda_rint (a * 1.4426950408889634e+0);
  i = (int)t;
  z = __fma_rn (t, -6.9314718055994529e-1, a);
  z = __fma_rn (t, -2.3190468138462996e-17, z);
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }
  t = __internal_expm1_kernel(z);

  z = __hiloint2double((1022 + i + scale) << 20, 0);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_exp(double a)
{
  if (a > 7.0978271289338397e+2) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a <= -7.4513321910194122e+2) {
    return 0.0;
  }
  a = __internal_exp_kernel(a, 0);
  return a;
}

static double __cuda_exp2(double a)
{
  double z;
  double t;
  double fac;
  int i;

  if (a >= 1024.0) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a < -1075.0) {
    return 0.0;
  }
  t = __cuda_rint (a);
  z = a - t;
  i = (int)t;
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }

  z = __fma_rn (z, 6.9314718055994529e-1, z * 2.3190468138462996e-17);
  t = __internal_expm1_kernel(z);
  z = __hiloint2double((1022 + i) << 20, 0);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_exp10(double a)
{
  double z;
  double t;
  double fac;
  int i;

  if (a >= 3.0825471555991675e+2) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a < -3.2360724533877976e+2) {
    return 0.0;
  }
  t = __cuda_rint (a * 3.3219280948873622e+0);
  i = (int)t;
  z = __fma_rn (t, -3.0102999566398120e-1, a);
  z = __fma_rn (t, -(-2.8037281277851704e-18), z);
  fac = 2.0;
  if (i <= -1021) {
    i += 55;
    fac = 5.5511151231257827e-17;
  }

  z = __fma_rn (z, 2.3025850929940459e+0, z * (-2.1707562233822494e-16));
  t = __internal_expm1_kernel(z);

  z = __hiloint2double((1022 + i) << 20, 0);
  t = __fma_rn (t, z, z);
  t = t * fac;
  return t;
}

static double __cuda_expm1(double a)
{
  double t, z, u;
  int i, j;
  if (a > 7.0978271289338397e+2) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (a < -53.0) {
    return -1.0;
  }
  t = __cuda_rint (a * 1.4426950408889634e+0);
  i = (int)t;
  z = __fma_rn (t, -6.9314718055994529e-1, a);
  z = __fma_rn (t, -2.3190468138462996e-17, z);
  if (__cuda_fabs(a) < 0.405465108) {
    z = a;
    i = 0;
  }
  j = (i == 1024) ? (i - 1) : i;
  t = __internal_expm1_kernel(z);
  u = __hiloint2double((1023 + j) << 20, 0);
  a = u - 1.0;
  t = __fma_rn (t, u, a);
  if (z == 0.0) t = z;
  if (i == 1024) t = t + t;
  return t;
}

static double __cuda_cosh(double a)
{
  double z;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  a = __cuda_fabs(a);
  z = __internal_exp_kernel(a, -2);
  z = __fma_rn(2.0, z, 0.125 / z);
  if (a >= 7.1047586007394398e+2) {
    z = __int_as_float(0x7f800000);
  }
  return z;
}

static double __cuda_sinh(double a)
{
  double s, z;
  s = a;
  a = __cuda_fabs(a);
  if (a < 1.0) {
    double a2 = a * a;

    z = 1.632386098183803E-010;
    z = __fma_rn (z, a2, 2.504854501385687E-008);
    z = __fma_rn (z, a2, 2.755734274788706E-006);
    z = __fma_rn (z, a2, 1.984126976294102E-004);
    z = __fma_rn (z, a2, 8.333333333452911E-003);
    z = __fma_rn (z, a2, 1.666666666666606E-001);
    z = z * a2;
    z = __fma_rn (z, a, a);
  } else if (a < 2.0) {
    z = __cuda_expm1(a);
    z = __internal_half (z + z / (z + 1.0));
  } else {
    z = __internal_exp_kernel(a, -1);
    z = z + (1.0 / (-4.0 * z));
    if (a >= 7.1047586007394398e+2) {
      z = __longlong_as_double(0x7ff0000000000000ULL);
    }
  }
  z = __cuda_copysign(z, s);
  return z;
}

static double __cuda_tanh(double a)
{
  double t;
  t = __cuda_fabs(a);
  if (t >= 0.55) {
    double s;
    s = 1.0 - 2.0 / (__internal_exp_kernel(2.0 * t, 0) + 1.0);
    if (t > 350.0) {
      s = 1.0;
    }
    a = __cuda_copysign(s, a);
  } else {
    double a2;
    a2 = a * a;
    t = 5.102147717274194E-005;
    t = __fma_rn (t, a2, -2.103023983278533E-004);
    t = __fma_rn (t, a2, 5.791370145050539E-004);
    t = __fma_rn (t, a2, -1.453216755611004E-003);
    t = __fma_rn (t, a2, 3.591719696944118E-003);
    t = __fma_rn (t, a2, -8.863194503940334E-003);
    t = __fma_rn (t, a2, 2.186948597477980E-002);
    t = __fma_rn (t, a2, -5.396825387607743E-002);
    t = __fma_rn (t, a2, 1.333333333316870E-001);
    t = __fma_rn (t, a2, -3.333333333333232E-001);
    t = t * a2;
    t = __fma_rn (t, a, a);
    a = __cuda_copysign(t, a);
  }
  return a;
}

static double __internal_atan_kernel(double a)
{
  double t, a2;
  a2 = a * a;
  t = -2.0258553044438358E-005 ;
  t = __fma_rn (t, a2, 2.2302240345758510E-004);
  t = __fma_rn (t, a2, -1.1640717779930576E-003);
  t = __fma_rn (t, a2, 3.8559749383629918E-003);
  t = __fma_rn (t, a2, -9.1845592187165485E-003);
  t = __fma_rn (t, a2, 1.6978035834597331E-002);
  t = __fma_rn (t, a2, -2.5826796814495994E-002);
  t = __fma_rn (t, a2, 3.4067811082715123E-002);
  t = __fma_rn (t, a2, -4.0926382420509971E-002);
  t = __fma_rn (t, a2, 4.6739496199157994E-002);
  t = __fma_rn (t, a2, -5.2392330054601317E-002);
  t = __fma_rn (t, a2, 5.8773077721790849E-002);
  t = __fma_rn (t, a2, -6.6658603633512573E-002);
  t = __fma_rn (t, a2, 7.6922129305867837E-002);
  t = __fma_rn (t, a2, -9.0909012354005225E-002);
  t = __fma_rn (t, a2, 1.1111110678749424E-001);
  t = __fma_rn (t, a2, -1.4285714271334815E-001);
  t = __fma_rn (t, a2, 1.9999999999755019E-001);
  t = __fma_rn (t, a2, -3.3333333333331860E-001);
  t = t * a2;
  t = __fma_rn (t, a, a);
  return t;
}

static double __cuda_atan2(double a, double b)
{
  double t0, t1, t3;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }


  t3 = __cuda_fabs(b);
  t1 = __cuda_fabs(a);
  if (t3 == 0.0 && t1 == 0.0) {
    t3 = __cuda___signbit(b) ? 3.1415926535897931e+0 : 0;
  } else if (__cuda___isinf(t3) && __cuda___isinf(t1)) {
    t3 = __cuda___signbit(b) ? 2.3561944901923448e+0 : 7.8539816339744828e-1;
  } else {
    t0 = __cuda_fmax (t1, t3);
    t1 = __cuda_fmin (t1, t3);
    t3 = t1 / t0;
    t3 = __internal_atan_kernel(t3);

    if (__cuda_fabs(a) > __cuda_fabs(b)) t3 = 1.5707963267948966e+0 - t3;
    if (b < 0.0) t3 = 3.1415926535897931e+0 - t3;
  }
  t3 = __cuda_copysign(t3, a);
  return t3;
}

static double __cuda_atan(double a)
{
  double t0, t1;

  t0 = __cuda_fabs(a);
  t1 = t0;
  if (t0 > 1.0) {
    t1 = 1.0 / t1;
  }

  t1 = __internal_atan_kernel(t1);

  if (t0 > 1.0) {
    t1 = 1.5707963267948966e+0 - t1;
  }
  return __cuda_copysign (t1, a);
}


static double __internal_asin_kernel(double a, double b)
{
  double r;
  r = 6.259798167646803E-002;
  r = __fma_rn (r, b, -7.620591484676952E-002);
  r = __fma_rn (r, b, 6.686894879337643E-002);
  r = __fma_rn (r, b, -1.787828218369301E-002);
  r = __fma_rn (r, b, 1.745227928732326E-002);
  r = __fma_rn (r, b, 1.000422754245580E-002);
  r = __fma_rn (r, b, 1.418108777515123E-002);
  r = __fma_rn (r, b, 1.733194598980628E-002);
  r = __fma_rn (r, b, 2.237350511593569E-002);
  r = __fma_rn (r, b, 3.038188875134962E-002);
  r = __fma_rn (r, b, 4.464285849810986E-002);
  r = __fma_rn (r, b, 7.499999998342270E-002);
  r = __fma_rn (r, b, 1.666666666667375E-001);
  r = r * b;
  return r;
}

static double __cuda_asin(double a)
{
  double t0, t1;
  t0 = __cuda_fabs(a);
  if (t0 > 1.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  if (t0 > 0.575) {
    t1 = __fma_rn (-0.5, t0, 0.5);
    t0 = __cuda_sqrt (t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = -2.0 * t0;
    t1 = __fma_rn (t0, t1, 6.1232339957367660e-17);
    t0 = t0 + 7.8539816339744828e-1;
    t1 = t0 + t1;
    t1 = t1 + 7.8539816339744828e-1;
  } else {
    t1 = t0 * t0;
    t1 = __internal_asin_kernel (t0, t1);
    t1 = __fma_rn (t1, t0, t0);
  }
  return __cuda_copysign(t1, a);
}

static double __cuda_acos(double a)
{
  double t0, t1;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t0 = __cuda_fabs (a);
  if (t0 > 0.575) {
    t1 = __fma_rn (-0.5, t0, 0.5);
    t0 = __cuda_sqrt(t1);
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    t0 = 2.0 * t0;
    if (__cuda___signbit(a)) {
      t0 = __fma_rn (1.0, t0, -1.2246467991473532e-16);
      t0 = 3.1415926535897931e+0 - t0;
    }
  } else {
    t1 = t0 * t0;
    t1 = __internal_asin_kernel (t0, t1);
    t0 = __fma_rn (t1, t0, t0);
    if (__cuda___signbit(a)) {
      t0 = __fma_rn (1.0, t0, +6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 + t0;
    } else {
      t0 = __fma_rn (1.0, t0, -6.1232339957367660e-17);
      t0 = 1.5707963267948966e+0 - t0;
    }
  }
  return t0;
}

static double __cuda_acosh(double a)
{
  double t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = a - 1.0;
  if (__cuda_fabs(t) > 4503599627370496.0) {

    return 6.9314718055994529e-1 + __cuda_log(a);
  } else {
    t = t + __cuda_sqrt(__fma_rn(a, t, t));
    return __cuda_log1p(t);
  }
}

static double __cuda_asinh(double a)
{
# 1136 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 3
  double fa, t;
  fa = __cuda_fabs(a);
  if (fa > 1.0e153) {
    t = 6.9314718055994529e-1 + __cuda_log(fa);
  } else {
    t = fa * fa;
    t = __cuda_log1p (fa + t / (1.0 + __cuda_sqrt(1.0 + t)));
  }

  return __cuda_copysign(t, a);
}

static double __cuda_atanh(double a)
{
  double fa, t;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  fa = __cuda_fabs(a);
  t = (2.0 * fa) / (1.0 - fa);
  t = 0.5 * __cuda_log1p(t);

  if (__cuda___isnan(t)) {
    return t;
  }

  if (__cuda___signbit(a)) {
    t = -t;
  }
  return t;
}

static double __cuda_hypot(double a, double b)
{
  double v, w, t;
  if (__cuda___isinf(a) || __cuda___isinf(b)) {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  v = __cuda_fmax(a, b);
  w = __cuda_fmin(a, b);
  t = w / v;
  t = __fma_rn (t, t, 1.0);
  t = v * __cuda_sqrt(t);
  if (v == 0.0) {
    t = v + w;
  }
  return t;
}

static double __cuda_cbrt(double a)
{
  float s;
  double t, r;
  int ilo, ihi, expo, nexpo, denorm;
  if ((a == 0.0) || !(__cuda___finite(a))) {
    return a + a;
  }
  t = __cuda_fabs(a);
  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  denorm = 0;
  if (expo == 0) {

    t = t * 18014398509481984.0;
    denorm = 18;
    ilo = __double2loint(t);
    ihi = __double2hiint(t);
    expo = ((int)((unsigned int)ihi >> 20) & 0x7ff);
  }

  nexpo = __float2int_rn(0.333333333f * (float)(expo - 1022));
  ihi -= (3 * nexpo) << 20;
  r = __hiloint2double(ihi, ilo);

  s = (float)r;
  t = __cuda_exp2f(0.333333333f * __log2f(s));

  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;
  t = t - (t - (r / (t * t))) * 3.3333333333333333e-1;

  ilo = __double2loint(t);
  ihi = __double2hiint(t);
  ihi += (nexpo - denorm) << 20;
  t = __hiloint2double(ihi, ilo);
  if (__cuda___signbit(a)) {
     t = -t;
  }
  return t;
}

static double __internal_accurate_pow(double a, double b)
{
  double2 loga;
  double2 prod;
  double t_hi, t_lo;
  double tmp;



  double e;



  loga = __internal_log_ext_prec(a);


  if (__cuda_fabs(b) > 1e304) b *= 1.220703125e-4;

  t_hi = loga.y * b;
  t_lo = __fma_rn (loga.y, b, -t_hi);
  t_lo = __fma_rn (loga.x, b, t_lo);
  prod.y = e = t_hi + t_lo;
  prod.x = (t_hi - e) + t_lo;


  tmp = __cuda_exp(prod.y);

  if (!__cuda___isinf(tmp)) {



    tmp = __fma_rn (tmp, prod.x, tmp);
  }
  return tmp;
}

static double __cuda_pow(double a, double b)
{
  int bIsOddInteger;
  double t;
  if (a == 1.0 || b == 0.0) {
    return 1.0;
  }
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return __cuda___signbit(b) ? 0.0 : __longlong_as_double(0x7ff0000000000000ULL);
  }
  if (__cuda___isinf(b)) {
    if (a == -1.0) {
      return 1.0;
    }
    t = __cuda_fabs(a) > 1.0 ? __longlong_as_double(0x7ff0000000000000ULL) : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  bIsOddInteger = (b - (2.0 * __cuda_floor(0.5 * b))) == 1.0;
  if (a == 0.0) {
    t = bIsOddInteger ? a : 0.0;
    if (b < 0.0) {
      t = 1.0 / t;
    }
    return t;
  }
  if (a == -__longlong_as_double(0x7ff0000000000000ULL)) {
    t = (b < 0.0) ? -1.0/a : -a;
    if (bIsOddInteger) {
      t = __longlong_as_double(__double_as_longlong(t)^0x8000000000000000ULL);
    }
    return t;
  }
  if ((a < 0.0) && (b != __cuda_trunc(b))) {
    return __longlong_as_double(0xfff8000000000000ULL);
  }
  t = __cuda_fabs(a);
  t = __internal_accurate_pow(t, b);
  if ((a < 0.0) && bIsOddInteger) {
    t = __longlong_as_double(__double_as_longlong(t) ^ 0x8000000000000000ULL);
  }
  return t;
}

static double __cuda_erf(double a)
{
  double t, r, q;

  if (__cuda___isnan(a)) {
    return a + a;
  }

  t = __cuda_fabs(a);
  if (t >= 1.0) {
    r = -1.28836351230756500E-019;
    r = __fma_rn (r, t, 1.30597472161093370E-017);
    r = __fma_rn (r, t, -6.33924401259620500E-016);
    r = __fma_rn (r, t, 1.96231865908940140E-014);
    r = __fma_rn (r, t, -4.35272243559990750E-013);
    r = __fma_rn (r, t, 7.37083927929352150E-012);
    r = __fma_rn (r, t, -9.91402142550461630E-011);
    r = __fma_rn (r, t, 1.08817017167760820E-009);
    r = __fma_rn (r, t, -9.93918713097634620E-009);
    r = __fma_rn (r, t, 7.66739923255145500E-008);
    r = __fma_rn (r, t, -5.05440278302806720E-007);
    r = __fma_rn (r, t, 2.87474157099000620E-006);
    r = __fma_rn (r, t, -1.42246725399722510E-005);
    r = __fma_rn (r, t, 6.16994555079419460E-005);
    r = __fma_rn (r, t, -2.36305221938908790E-004);
    r = __fma_rn (r, t, 8.05032844055371070E-004);
    r = __fma_rn (r, t, -2.45833366629108140E-003);
    r = __fma_rn (r, t, 6.78340988296706120E-003);
    r = __fma_rn (r, t, -1.70509103597554640E-002);
    r = __fma_rn (r, t, 3.93322852515666300E-002);
    r = __fma_rn (r, t, -8.37271292613764040E-002);
    r = __fma_rn (r, t, 1.64870423707623280E-001);
    r = __fma_rn (r, t, -2.99729521787681470E-001);
    r = __fma_rn (r, t, 4.99394435612628580E-001);
    r = __fma_rn (r, t, -7.52014596480123030E-001);
    r = __fma_rn (r, t, 9.99933138314926250E-001);
    r = __fma_rn (r, t, -1.12836725321102670E+000);
    r = __fma_rn (r, t, 9.99998988715182450E-001);
    q = __internal_exp_kernel(-t * t, 0);
    r = __fma_rn (r, -q, 1.0);
    if (t >= 6.5) {
      r = 1.0;
    }
    a = __cuda_copysign (r, a);
  } else {
    q = t * t;
    r = -7.77946848895991420E-010;
    r = __fma_rn (r, q, 1.37109803980285950E-008);
    r = __fma_rn (r, q, -1.62063137584932240E-007);
    r = __fma_rn (r, q, 1.64471315712790040E-006);
    r = __fma_rn (r, q, -1.49247123020098620E-005);
    r = __fma_rn (r, q, 1.20552935769006260E-004);
    r = __fma_rn (r, q, -8.54832592931448980E-004);
    r = __fma_rn (r, q, 5.22397760611847340E-003);
    r = __fma_rn (r, q, -2.68661706431114690E-002);
    r = __fma_rn (r, q, 1.12837916709441850E-001);
    r = __fma_rn (r, q, -3.76126389031835210E-001);
    r = __fma_rn (r, q, 1.12837916709551260E+000);
    a = r * a;
  }
  return a;
}

static double __cuda_erfc(double a)
{
  double p, q, h, l;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  if (a <= 0.55) {
    return 1.0 - __cuda_erf(a);
  }
  if (a > 27.3) {
    return 0.0;
  }
  if (a <= 5.0) {
    p = 5.64189549785304440E-001;
    p = __fma_rn (p, a, 8.17405083437083490E+000);
    p = __fma_rn (p, a, 5.68958722557864720E+001);
    p = __fma_rn (p, a, 2.42568747802647010E+002);
    p = __fma_rn (p, a, 6.80381374390412930E+002);
    p = __fma_rn (p, a, 1.25873132236024590E+003);
    p = __fma_rn (p, a, 1.43925353963809330E+003);
    p = __fma_rn (p, a, 8.15949420587659230E+002);
    q = a+ 1.44881247113239940E+001;
    q = __fma_rn (q, a, 1.01345387970210510E+002);
    q = __fma_rn (q, a, 4.37184684964009650E+002);
    q = __fma_rn (q, a, 1.25588209225251330E+003);
    q = __fma_rn (q, a, 2.43864015012647630E+003);
    q = __fma_rn (q, a, 3.10570469008816280E+003);
    q = __fma_rn (q, a, 2.35995386578953550E+003);
    q = __fma_rn (q, a, 8.15949420692539320E+002);
  } else {
    p = 5.64189583545675280E-001;
    p = __fma_rn (p, a, 2.04728556066513970E+000);
    p = __fma_rn (p, a, 6.75128409662943610E+000);
    p = __fma_rn (p, a, 1.10459345071747900E+001);
    p = __fma_rn (p, a, 1.22570382896313600E+001);
    p = __fma_rn (p, a, 6.01884641114116460E+000);
    q = a+ 3.62871917534986780E+000;
    q = __fma_rn (q, a, 1.24663395327043550E+001);
    q = __fma_rn (q, a, 2.13927672803974790E+001);
    q = __fma_rn (q, a, 2.72082423532866070E+001);
    q = __fma_rn (q, a, 1.86422906830006700E+001);
    q = __fma_rn (q, a, 6.13809834548870550E+000);
  }
  p = p / q;
  h = -a * a;
  l = __fma_rn (-a, a, -h);
  q = __internal_exp_kernel(h, 0);
  q = __fma_rn (q, l, q);
  p = p * q;
  return p;
}


static double __internal_tgamma_kernel(double a)
{
  double t;
  t = -4.42689340712524750E-010;
  t = __fma_rn (t, a, -2.02665918466589540E-007);
  t = __fma_rn (t, a, 1.13812117211195270E-006);
  t = __fma_rn (t, a, -1.25077348166307480E-006);
  t = __fma_rn (t, a, -2.01365017404087710E-005);
  t = __fma_rn (t, a, 1.28050126073544860E-004);
  t = __fma_rn (t, a, -2.15241408115274180E-004);
  t = __fma_rn (t, a, -1.16516754597046040E-003);
  t = __fma_rn (t, a, 7.21894322484663810E-003);
  t = __fma_rn (t, a, -9.62197153268626320E-003);
  t = __fma_rn (t, a, -4.21977345547223940E-002);
  t = __fma_rn (t, a, 1.66538611382503560E-001);
  t = __fma_rn (t, a, -4.20026350341054440E-002);
  t = __fma_rn (t, a, -6.55878071520257120E-001);
  t = __fma_rn (t, a, 5.77215664901532870E-001);
  t = __fma_rn (t, a, 1.00000000000000000E+000);
  return t;
}


static double __internal_stirling_poly(double a)
{
  double x = 1.0 / a;
  double z = 0.0;
  z = __fma_rn (z, x, 8.3949872067208726e-004);
  z = __fma_rn (z, x, -5.1717909082605919e-005);
  z = __fma_rn (z, x, -5.9216643735369393e-004);
  z = __fma_rn (z, x, 6.9728137583658571e-005);
  z = __fma_rn (z, x, 7.8403922172006662e-004);
  z = __fma_rn (z, x, -2.2947209362139917e-004);
  z = __fma_rn (z, x, -2.6813271604938273e-003);
  z = __fma_rn (z, x, 3.4722222222222220e-003);
  z = __fma_rn (z, x, 8.3333333333333329e-002);
  z = __fma_rn (z, x, 1.0000000000000000e+000);
  return z;
}

static double __internal_tgamma_stirling(double a)
{
  if (a < 1.7162437695630274e+002) {

    volatile double t_hi, t_lo, e;



    double2 loga, prod;
    double z = __internal_stirling_poly (a);
    double b = a - 0.5;


    loga = __internal_log_ext_prec(a);


    t_hi = loga.y * b;
    t_lo = __fma_rn (loga.y, b, -t_hi);
    t_lo = __fma_rn (loga.x, b, t_lo);
    prod.y = e = t_hi + t_lo;
    prod.x = (t_hi - e) + t_lo;


    loga.y = -a;
    loga.x = 0.0;
    prod = __internal_ddadd_xgty (prod, loga);


    a = __cuda_exp(prod.y);

    if (!__cuda___isinf(a)) {



      a = __fma_rn (a, prod.x, a);
    }
    a = __fma_rn (a, 2.5066282746310007e+0, a * (-1.8328579980459167e-16));
    return a * z;
  } else {
    return __longlong_as_double(0x7ff0000000000000ULL);
  }
}

static double __cuda_tgamma(double a)
{
  double s, xx, x = a;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  if (__cuda_fabs(x) < 15.0) {




    if (x >= 0.0) {
      s = 1.0;
      xx = x;
      while (xx > 1.5) {
        s = __fma_rn(s, xx, -s);
        xx = xx - 1.0;
      }
      if (x >= 0.5) {
        xx = xx - 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      if (x < 0.5) {
        xx = xx * x;
      }
      s = s / xx;
    } else {
      xx = x;
      s = xx;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      while (xx < -0.5) {
        s = __fma_rn (s, xx, s);
        xx = xx + 1.0;
      }
      xx = __internal_tgamma_kernel (xx);
      s = s * xx;
      s = 1.0 / s;
    }
    return s;
  } else {
    if (x >= 0.0) {
      return __internal_tgamma_stirling (x);
    } else {
      double t;
      int quot;
      if (x == __cuda_floor(x)) {
        return __longlong_as_double(0xfff8000000000000ULL);
      }
      if (x < -185.0) {
        int negative;
        x = __cuda_floor(x);
        negative = ((x - (2.0 * __cuda_floor(0.5 * x))) == 1.0);
        return negative ? __longlong_as_double(0x8000000000000000ULL) : 0.0;
      }

      xx = __cuda_rint (__internal_twice(x));
      quot = (int)xx;
      xx = __fma_rn (-0.5, xx, x);
      xx = xx * 3.1415926535897931e+0;
      if (quot & 1) {
        xx = __internal_cos_kerneld (xx);
      } else {
        xx = __internal_sin_kerneld (xx);
      }
      if (quot & 2) {
        xx = -xx;
      }
      x = __cuda_fabs (x);
      s = __cuda_exp (-x);
      t = x - 0.5;
      if (x > 140.0) t = __internal_half(t);
      t = __cuda_pow (x, t);
      if (x > 140.0) s = s * t;
      s = s * __internal_stirling_poly (x);
      s = s * x;
      s = s * xx;
      s = 1.0 / s;
      s = __fma_rn (s, 1.2533141373155003e+0, (-9.1642899902295834e-17) * s);
      s = s / t;
      return s;
    }
  }
}

static double __internal_lgamma_pos(double a)
{
  double sum;
  double s, t;

  if (a == __longlong_as_double(0x7ff0000000000000ULL)) {
    return a;
  }
  if (a >= 3.0) {
    if (a >= 8.0) {



      s = 1.0 / a;
      t = s * s;
      sum = -0.1633436431e-2;
      sum = __fma_rn (sum, t, 0.83645878922e-3);
      sum = __fma_rn (sum, t, -0.5951896861197e-3);
      sum = __fma_rn (sum, t, 0.793650576493454e-3);
      sum = __fma_rn (sum, t, -0.277777777735865004e-2);
      sum = __fma_rn (sum, t, 0.833333333333331018375e-1);
      sum = __fma_rn (sum, s, 0.918938533204672);
      s = __internal_half(__cuda_log (a));
      t = a - 0.5;
      s = s * t;
      t = s - a;
      s = s + sum;
      t = t + s;
      return t;
    } else {
      a = a - 3.0;
      s = -4.02412642744125560E+003;
      s = __fma_rn (s, a, -2.97693796998962000E+005);
      s = __fma_rn (s, a, -6.38367087682528790E+006);
      s = __fma_rn (s, a, -5.57807214576539320E+007);
      s = __fma_rn (s, a, -2.24585140671479230E+008);
      s = __fma_rn (s, a, -4.70690608529125090E+008);
      s = __fma_rn (s, a, -7.62587065363263010E+008);
      s = __fma_rn (s, a, -9.71405112477113250E+008);
      t = a -1.02277248359873170E+003;
      t = __fma_rn (t, a, -1.34815350617954480E+005);
      t = __fma_rn (t, a, -4.64321188814343610E+006);
      t = __fma_rn (t, a, -6.48011106025542540E+007);
      t = __fma_rn (t, a, -4.19763847787431360E+008);
      t = __fma_rn (t, a, -1.25629926018000720E+009);
      t = __fma_rn (t, a, -1.40144133846491690E+009);
      t = s / t;
      t = t + a;
      return t;
    }
  } else if (a >= 1.5) {
    a = a - 2.0;
    t = 9.84839283076310610E-009;
    t = __fma_rn (t, a, -6.69743850483466500E-008);
    t = __fma_rn (t, a, 2.16565148880011450E-007);
    t = __fma_rn (t, a, -4.86170275781575260E-007);
    t = __fma_rn (t, a, 9.77962097401114400E-007);
    t = __fma_rn (t, a, -2.03041287574791810E-006);
    t = __fma_rn (t, a, 4.36119725805364580E-006);
    t = __fma_rn (t, a, -9.43829310866446590E-006);
    t = __fma_rn (t, a, 2.05106878496644220E-005);
    t = __fma_rn (t, a, -4.49271383742108440E-005);
    t = __fma_rn (t, a, 9.94570466342226000E-005);
    t = __fma_rn (t, a, -2.23154589559238440E-004);
    t = __fma_rn (t, a, 5.09669559149637430E-004);
    t = __fma_rn (t, a, -1.19275392649162300E-003);
    t = __fma_rn (t, a, 2.89051032936815490E-003);
    t = __fma_rn (t, a, -7.38555102806811700E-003);
    t = __fma_rn (t, a, 2.05808084278121250E-002);
    t = __fma_rn (t, a, -6.73523010532073720E-002);
    t = __fma_rn (t, a, 3.22467033424113040E-001);
    t = __fma_rn (t, a, 4.22784335098467190E-001);
    t = t * a;
    return t;
  } else if (a >= 0.7) {
    a = 1.0 - a;
    t = 1.17786911519331130E-002;
    t = __fma_rn (t, a, 3.89046747413522300E-002);
    t = __fma_rn (t, a, 5.90045711362049900E-002);
    t = __fma_rn (t, a, 6.02143305254344420E-002);
    t = __fma_rn (t, a, 5.61652708964839180E-002);
    t = __fma_rn (t, a, 5.75052755193461370E-002);
    t = __fma_rn (t, a, 6.21061973447320710E-002);
    t = __fma_rn (t, a, 6.67614724532521880E-002);
    t = __fma_rn (t, a, 7.14856037245421020E-002);
    t = __fma_rn (t, a, 7.69311251313347100E-002);
    t = __fma_rn (t, a, 8.33503129714946310E-002);
    t = __fma_rn (t, a, 9.09538288991182800E-002);
    t = __fma_rn (t, a, 1.00099591546322310E-001);
    t = __fma_rn (t, a, 1.11334278141734510E-001);
    t = __fma_rn (t, a, 1.25509666613462880E-001);
    t = __fma_rn (t, a, 1.44049896457704160E-001);
    t = __fma_rn (t, a, 1.69557177031481600E-001);
    t = __fma_rn (t, a, 2.07385551032182120E-001);
    t = __fma_rn (t, a, 2.70580808427600350E-001);
    t = __fma_rn (t, a, 4.00685634386517050E-001);
    t = __fma_rn (t, a, 8.22467033424113540E-001);
    t = __fma_rn (t, a, 5.77215664901532870E-001);
    t = t * a;
    return t;
  } else {
    t= -9.04051686831357990E-008;
    t = __fma_rn (t, a, 7.06814224969349250E-007);
    t = __fma_rn (t, a, -3.80702154637902830E-007);
    t = __fma_rn (t, a, -2.12880892189316100E-005);
    t = __fma_rn (t, a, 1.29108470307156190E-004);
    t = __fma_rn (t, a, -2.15932815215386580E-004);
    t = __fma_rn (t, a, -1.16484324388538480E-003);
    t = __fma_rn (t, a, 7.21883433044470670E-003);
    t = __fma_rn (t, a, -9.62194579514229560E-003);
    t = __fma_rn (t, a, -4.21977386992884450E-002);
    t = __fma_rn (t, a, 1.66538611813682460E-001);
    t = __fma_rn (t, a, -4.20026350606819980E-002);
    t = __fma_rn (t, a, -6.55878071519427450E-001);
    t = __fma_rn (t, a, 5.77215664901523870E-001);
    t = t * a;
    t = __fma_rn (t, a, a);
    return -__cuda_log (t);
  }
}

static double __cuda_lgamma(double a)
{
  double t;
  double i;
  long long int quot;
  if (__cuda___isnan(a)) {
    return a + a;
  }
  t = __internal_lgamma_pos(__cuda_fabs(a));
  if (a >= 0.0) return t;
  a = __cuda_fabs(a);
  i = __cuda_floor(a);
  if (a == i) return __longlong_as_double(0x7ff0000000000000ULL);
  if (a < 1e-19) return -__cuda_log(a);
  i = __cuda_rint (2.0 * a);
  quot = (long long int)i;
  i = __fma_rn (-0.5, i, a);
  i = i * 3.1415926535897931e+0;
  if (quot & 1) {
    i = __internal_cos_kerneld(i);
  } else {
    i = __internal_sin_kerneld(i);
  }
  i = __cuda_fabs(i);
  t = __cuda_log(3.1415926535897931e+0 / (i * a)) - t;
  return t;
}

static double __cuda_ldexp(double a, int b)
{
  double fa = __cuda_fabs (a);
  if ((fa == 0.0) || (fa == __longlong_as_double(0x7ff0000000000000ULL)) || (!(fa <= __longlong_as_double(0x7ff0000000000000ULL)))) {
    return a + a;
  }
  if (b == 0) {
    return a;
  }
  if (b > 2200) b = 2200;
  if (b < -2200) b = -2200;
  if (__cuda_abs (b) < 1022) {
    return a * __internal_exp2i_kernel(b);
  }
  if (__cuda_abs (b) < 2044) {
    int bhalf = b / 2;
    return a * __internal_exp2i_kernel (bhalf) *
           __internal_exp2i_kernel (b - bhalf);
  } else {
    int bquarter = b / 4;
    double t = __internal_exp2i_kernel(bquarter);
    return a * t * t * t *__internal_exp2i_kernel (b - 3 * bquarter);
  }
}

static double __cuda_scalbn(double a, int b)
{

  return __cuda_ldexp(a, b);
}

static double __cuda_scalbln(double a, long int b)
{


  if (b < -2147483648L) b = -2147483648L;
  if (b > 2147483647L) b = 2147483647L;

  return __cuda_scalbn(a, (int)b);
}

static double __cuda_frexp(double a, int *b)
{
  double fa = __cuda_fabs(a);
  unsigned int expo;
  unsigned int denorm;

  if (fa < 2.22507385850720140e-308) {
    a *= 18014398509481984.0;
    denorm = 54;
  } else {
    denorm = 0;
  }
  expo = (__double2hiint(a) >> 20) & 0x7ff;
  if ((fa == 0.0) || (expo == 0x7ff)) {
    expo = 0;
    a = a + a;
  } else {
    expo = expo - denorm - 1022;
    a = __longlong_as_double((__double_as_longlong(a) & 0x800fffffffffffffULL)|
                              0x3fe0000000000000ULL);
  }
  *b = expo;
  return a;
}

static double __cuda_modf(double a, double *b)
{
  double t;
  if (__cuda___finite(a)) {
    t = __cuda_trunc(a);
    *b = t;
    t = a - t;
    return __cuda_copysign(t, a);
  } else if (__cuda___isinf(a)) {
    t = 0.0;
    *b = a;
    return __cuda_copysign(t, a);
  } else {
    *b = a + a;
    return a + a;
  }
}

static double __cuda_fmod(double a, double b)
{
  double orig_a = a;
  double orig_b = b;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (!((a <= __longlong_as_double(0x7ff0000000000000ULL)) && (b <= __longlong_as_double(0x7ff0000000000000ULL)))) {
      return orig_a + orig_b;
  }
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    int bhi = __double2hiint(b);
    int blo = __double2loint(b);
    int ahi = __double2hiint(a);
    double scaled_b = 0.0;
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      if (a >= scaled_b) {
        a -= scaled_b;
      }
      scaled_b *= 0.5;
    }
    return __cuda_copysign (a, orig_a);
  } else {
    return orig_a;
  }
}

static double __cuda_remainder(double a, double b)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot0 = 0;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    return a + b;
  }
  orig_a = a;
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot0 = 0;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot0 = 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && quot0)) {
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  return a;
}

static double __cuda_remquo(double a, double b, int *c)
{
  double orig_a;
  double twoa = 0.0;
  unsigned int quot = 0;
  unsigned int sign;
  int bhi;
  int blo;
  int ahi;
  if (__cuda___isnan(a) || __cuda___isnan(b)) {
    *c = quot;
    return a + b;
  }
  orig_a = a;
  sign = 0 - (__cuda___signbit(a) != __cuda___signbit(b));
  a = __cuda_fabs(a);
  b = __cuda_fabs(b);
  if (a == __longlong_as_double(0x7ff0000000000000ULL) || b == 0.0) {
    *c = quot;
    return __longlong_as_double(0xfff8000000000000ULL);
  } else if (a >= b) {
    double scaled_b = 0.0;
    bhi = __double2hiint(b);
    blo = __double2loint(b);
    ahi = __double2hiint(a);
    if (b < 2.22507385850720140e-308) {
      double t = b;
      while ((t < a) && (t < 2.22507385850720140e-308)) {
        t = t + t;
      }
      bhi = __double2hiint(t);
      blo = __double2loint(t);
      scaled_b = t;
    }
    if (a >= 2.22507385850720140e-308) {
      scaled_b = __hiloint2double ((bhi & 0x000fffff)|(ahi & 0x7ff00000), blo);
    }
    if (scaled_b > a) {
      scaled_b *= 0.5;
    }
    while (scaled_b >= b) {
      quot <<= 1;
      if (a >= scaled_b) {
        a -= scaled_b;
        quot += 1;
      }
      scaled_b *= 0.5;
    }
  }

  twoa = a + a;
  if ((twoa > b) || ((twoa == b) && (quot & 1))) {
    quot++;
    a -= b;
  }
  bhi = __double2hiint(a);
  blo = __double2loint(a);
  ahi = __double2hiint(orig_a);
  a = __hiloint2double((ahi & 0x80000000) ^ bhi, blo);
  quot = quot & (~((~0)<<3));
  quot = quot ^ sign;
  quot = quot - sign;
  *c = quot;
  return a;
}

static double __cuda_nextafter(double a, double b)
{
  unsigned long long int ia;
  unsigned long long int ib;
  ia = __double_as_longlong(a);
  ib = __double_as_longlong(b);
  if (__cuda___isnan(a) || __cuda___isnan(b)) return a + b;
  if (((ia | ib) << 1) == 0ULL) return b;
  if ((ia + ia) == 0ULL) {
    return __cuda_copysign (__longlong_as_double(0x0000000000000001ULL), b);
  }
  if ((a < b) && (a < 0.0)) ia--;
  if ((a < b) && (a > 0.0)) ia++;
  if ((a > b) && (a < 0.0)) ia++;
  if ((a > b) && (a > 0.0)) ia--;
  a = __longlong_as_double(ia);
  return a;
}

static double __cuda_nan(const char *s)
{
  unsigned long long i = 0;
  int c;
  int ovfl = 0;
  int invld = 0;
  if (*s == '0') {
    s++;
    if ((*s == 'x') || (*s == 'X')) {
      s++;
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x0fffffffffffffffULL) {
          ovfl = 1;
        }
        c = (((*s) >= 'A') && ((*s) <= 'F')) ? (*s + 'a' - 'A') : (*s);
        if ((c >= 'a') && (c <= 'f')) {
          c = c - 'a' + 10;
          i = i * 16 + c;
        } else if ((c >= '0') && (c <= '9')) {
          c = c - '0';
          i = i * 16 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    } else {
      while (*s == '0') s++;
      while (*s) {
        if (i > 0x1fffffffffffffffULL) {
          ovfl = 1;
        }
        c = *s;
        if ((c >= '0') && (c <= '7')) {
          c = c - '0';
          i = i * 8 + c;
        } else {
          invld = 1;
        }
        s++;
      }
    }
  } else {
    while (*s) {
      c = *s;
      if ((i > 1844674407370955161ULL) ||
          ((i == 1844674407370955161ULL) && (c > '5'))) {
        ovfl = 1;
      }
      if ((c >= '0') && (c <= '9')) {
        c = c - '0';
        i = i * 10 + c;
      } else {
        invld = 1;
      }
      s++;
    }
  }
  if (ovfl) {
    i = ~0ULL;
  }
  if (invld) {
    i = 0ULL;
  }
  i = (i & 0x000fffffffffffffULL) | 0x7ff8000000000000ULL;
  return __longlong_as_double(i);
}

static double __cuda_round(double a)
{
  double fa = __cuda_fabs(a);
  if (fa > 4503599627370496.0) {
    return a;
  } else {
    double u = __cuda_floor(fa + 0.5);
    if (fa < 0.5) u = 0;
    return __cuda_copysign(u, a);
  }
}

static long long int __cuda_llround(double a)
{

  if (a >= 9223372036854775807.0) return 0x7fffffffffffffffLL;
  if (a <= -9223372036854775808.0) return 0x8000000000000000LL;

  return (long long int)(__cuda_round(a));
}

static long int __cuda_lround(double a)
{

  return (long int)(__cuda_llround(a));
# 2124 "/home/gdiamos/temp/cuda/bin//../include/math_functions_dbl_ptx3.h" 3
}

static double __cuda_fdim(double a, double b)
{
  double t;
  t = a - b;
  if (a <= b) {
    t = 0.0;
  }
  return t;
}

static int __cuda_ilogb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return -((int)((unsigned int)-1 >> 1))-1;
  if (__cuda___isinf(a)) return ((int)((unsigned int)-1 >> 1));
  if (a == 0.0) return -((int)((unsigned int)-1 >> 1))-1;
  a = __cuda_fabs(a);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return ((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return expo;
  }
}

static double __cuda_logb(double a)
{
  unsigned long long int i;
  unsigned int ihi;
  unsigned int ilo;
  if (__cuda___isnan(a)) return a + a;
  a = __cuda_fabs(a);
  if (a == __longlong_as_double(0x7ff0000000000000ULL)) return a;
  if (a == 0.0) return -__longlong_as_double(0x7ff0000000000000ULL);
  ilo = __double2loint(a);
  ihi = __double2hiint(a);
  i = ((unsigned long long int)ihi) << 32 | (unsigned long long int)ilo;
  if (a >= 2.22507385850720140e-308) {
    return (double)((int)((ihi >> 20) & 0x7ff)) - 1023;
  } else {
    int expo = -1022;
    while (i < 0x0010000000000000ULL) {
      expo--;
      i = i + i;
    }
    return (double)expo;
  }
}

static double __cuda_fma(double a, double b, double c)
{
  return __fma_rn(a, b, c);
}
# 3862 "/home/gdiamos/temp/cuda/bin//../include/math_functions.h" 2 3
# 94 "/home/gdiamos/temp/cuda/bin//../include/common_functions.h" 2
# 216 "/home/gdiamos/temp/cuda/bin//../include/crt/host_runtime.h" 2
# 6 "/tmp/tmpxft_000015ec_00000000-1_bodysystemcuda.cudafe1.stub.c" 2
struct __T20;
struct __T21;
struct __T20 {float4 *__par0;float4 *__par1;float4 *__par2;float4 *__par3;float __par4;float __par5;int __par6;int __dummy_field;};
struct __T21 {float4 *__par0;float4 *__par1;float4 *__par2;float4 *__par3;float __par4;float __par5;int __par6;int __dummy_field;};






static void __sti____cudaRegisterAll_49_tmpxft_000015ec_00000000_7_bodysystemcuda_cpp1_ii_c14de7b3(void) __attribute__((__constructor__));
 __attribute__((__weak__)) void __device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi(float4 *__par0, float4 *__par1, float4 *__par2, float4 *__par3, float __par4, float __par5, int __par6){auto struct __T20 *__T238;
char __[256]; *(char**)&__T238 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T238->__par0 - (size_t)__T238) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T238->__par1 - (size_t)__T238) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T238->__par2 - (size_t)__T238) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T238->__par3 - (size_t)__T238) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T238->__par4 - (size_t)__T238) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T238->__par5 - (size_t)__T238) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T238->__par6 - (size_t)__T238) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi); (void)cudaLaunch(((char *)__device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi)); };}

}
template <>
void __globfunc_integrateBodies<((bool)0)> ( float4 *__cuda_0,float4 *__cuda_1,float4 *__cuda_2,float4 *__cuda_3,float __cuda_4,float __cuda_5,int __cuda_6)
{ __device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6); }
extern "C" {

 __attribute__((__weak__)) void __device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi(float4 *__par0, float4 *__par1, float4 *__par2, float4 *__par3, float __par4, float __par5, int __par6){auto struct __T21 *__T239;
char __[256]; *(char**)&__T239 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T239->__par0 - (size_t)__T239) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T239->__par1 - (size_t)__T239) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T239->__par2 - (size_t)__T239) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T239->__par3 - (size_t)__T239) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par4, sizeof(__par4), (size_t)&__T239->__par4 - (size_t)__T239) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par5, sizeof(__par5), (size_t)&__T239->__par5 - (size_t)__T239) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par6, sizeof(__par6), (size_t)&__T239->__par6 - (size_t)__T239) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi); (void)cudaLaunch(((char *)__device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi)); };}

}
template <>
void __globfunc_integrateBodies<((bool)1)> ( float4 *__cuda_0,float4 *__cuda_1,float4 *__cuda_2,float4 *__cuda_3,float __cuda_4,float __cuda_5,int __cuda_6)
{ __device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4,__cuda_5,__cuda_6); }
extern "C" {







static void __sti____cudaRegisterAll_49_tmpxft_000015ec_00000000_7_bodysystemcuda_cpp1_ii_c14de7b3(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi, (char*)"_Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi", "_Z15integrateBodiesILb1EEvP6float4S1_S1_S1_ffi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi, (char*)"_Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi", "_Z15integrateBodiesILb0EEvP6float4S1_S1_S1_ffi", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterVar(__cudaFatCubinHandle, (char*)&__shadow_softeningSquared, (char*)"softeningSquared", "softeningSquared", 0, 4, 1, 0);__cudaRegisterShared(__cudaFatCubinHandle, (void**)"sharedPos");}

}
# 179 "bodysystemcuda.cu" 2
