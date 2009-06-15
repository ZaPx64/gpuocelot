# 1 "/tmp/tmpxft_00001ddd_00000000-1_simpleTexture3D.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00001ddd_00000000-1_simpleTexture3D.cudafe1.cpp"
# 1 "simpleTexture3D.cu"
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
# 212 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned GLenum; }
# 213 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned GLbitfield; }
# 214 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned GLuint; }
# 215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef int GLint; }
# 216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef int GLsizei; }
# 218 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned char GLboolean; }
# 219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef signed char GLbyte; }
# 220 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef short GLshort; }
# 221 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned char GLubyte; }
# 222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned short GLushort; }
# 223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef float GLfloat; }
# 224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef float GLclampf; }
# 225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef double GLdouble; }
# 226 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef double GLclampd; }
# 227 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void GLvoid; }
# 237 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef signed long long GLint64EXT; }
# 238 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned long long GLuint64EXT; }
# 776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glAccum(GLenum, GLfloat);
# 777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glAlphaFunc(GLenum, GLclampf);
# 778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLboolean glAreTexturesResident(GLsizei, const GLuint *, GLboolean *);
# 779 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glArrayElement(GLint);
# 780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glBegin(GLenum);
# 781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glBindTexture(GLenum, GLuint);
# 782 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glBitmap(GLsizei, GLsizei, GLfloat, GLfloat, GLfloat, GLfloat, const GLubyte *);
# 783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glBlendFunc(GLenum, GLenum);
# 784 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCallList(GLuint);
# 785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCallLists(GLsizei, GLenum, const GLvoid *);
# 786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glClear(GLbitfield);
# 787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glClearAccum(GLfloat, GLfloat, GLfloat, GLfloat);
# 788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glClearColor(GLclampf, GLclampf, GLclampf, GLclampf);
# 789 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glClearDepth(GLclampd);
# 790 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glClearIndex(GLfloat);
# 791 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glClearStencil(GLint);
# 792 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glClipPlane(GLenum, const GLdouble *);
# 793 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3b(GLbyte, GLbyte, GLbyte);
# 794 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3bv(const GLbyte *);
# 795 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3d(GLdouble, GLdouble, GLdouble);
# 796 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3dv(const GLdouble *);
# 797 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3f(GLfloat, GLfloat, GLfloat);
# 798 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3fv(const GLfloat *);
# 799 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3i(GLint, GLint, GLint);
# 800 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3iv(const GLint *);
# 801 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3s(GLshort, GLshort, GLshort);
# 802 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3sv(const GLshort *);
# 803 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3ub(GLubyte, GLubyte, GLubyte);
# 804 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3ubv(const GLubyte *);
# 805 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3ui(GLuint, GLuint, GLuint);
# 806 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3uiv(const GLuint *);
# 807 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3us(GLushort, GLushort, GLushort);
# 808 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor3usv(const GLushort *);
# 809 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4b(GLbyte, GLbyte, GLbyte, GLbyte);
# 810 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4bv(const GLbyte *);
# 811 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4d(GLdouble, GLdouble, GLdouble, GLdouble);
# 812 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4dv(const GLdouble *);
# 813 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4f(GLfloat, GLfloat, GLfloat, GLfloat);
# 814 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4fv(const GLfloat *);
# 815 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4i(GLint, GLint, GLint, GLint);
# 816 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4iv(const GLint *);
# 817 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4s(GLshort, GLshort, GLshort, GLshort);
# 818 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4sv(const GLshort *);
# 819 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4ub(GLubyte, GLubyte, GLubyte, GLubyte);
# 820 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4ubv(const GLubyte *);
# 821 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4ui(GLuint, GLuint, GLuint, GLuint);
# 822 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4uiv(const GLuint *);
# 823 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4us(GLushort, GLushort, GLushort, GLushort);
# 824 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColor4usv(const GLushort *);
# 825 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColorMask(GLboolean, GLboolean, GLboolean, GLboolean);
# 826 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColorMaterial(GLenum, GLenum);
# 827 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glColorPointer(GLint, GLenum, GLsizei, const GLvoid *);
# 828 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCopyPixels(GLint, GLint, GLsizei, GLsizei, GLenum);
# 829 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCopyTexImage1D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint);
# 830 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint);
# 831 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCopyTexSubImage1D(GLenum, GLint, GLint, GLint, GLint, GLsizei);
# 832 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei);
# 833 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glCullFace(GLenum);
# 834 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDeleteLists(GLuint, GLsizei);
# 835 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDeleteTextures(GLsizei, const GLuint *);
# 836 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDepthFunc(GLenum);
# 837 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDepthMask(GLboolean);
# 838 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDepthRange(GLclampd, GLclampd);
# 839 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDisable(GLenum);
# 840 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDisableClientState(GLenum);
# 841 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDrawArrays(GLenum, GLint, GLsizei);
# 842 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDrawBuffer(GLenum);
# 843 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDrawElements(GLenum, GLsizei, GLenum, const GLvoid *);
# 844 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glDrawPixels(GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
# 845 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEdgeFlag(GLboolean);
# 846 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEdgeFlagPointer(GLsizei, const GLvoid *);
# 847 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEdgeFlagv(const GLboolean *);
# 848 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEnable(GLenum);
# 849 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEnableClientState(GLenum);
# 850 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEnd();
# 851 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEndList();
# 852 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord1d(GLdouble);
# 853 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord1dv(const GLdouble *);
# 854 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord1f(GLfloat);
# 855 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord1fv(const GLfloat *);
# 856 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord2d(GLdouble, GLdouble);
# 857 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord2dv(const GLdouble *);
# 858 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord2f(GLfloat, GLfloat);
# 859 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalCoord2fv(const GLfloat *);
# 860 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalMesh1(GLenum, GLint, GLint);
# 861 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalMesh2(GLenum, GLint, GLint, GLint, GLint);
# 862 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalPoint1(GLint);
# 863 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glEvalPoint2(GLint, GLint);
# 864 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFeedbackBuffer(GLsizei, GLenum, GLfloat *);
# 865 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFinish();
# 866 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFlush();
# 867 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFogf(GLenum, GLfloat);
# 868 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFogfv(GLenum, const GLfloat *);
# 869 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFogi(GLenum, GLint);
# 870 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFogiv(GLenum, const GLint *);
# 871 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFrontFace(GLenum);
# 872 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glFrustum(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
# 873 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLuint glGenLists(GLsizei);
# 874 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGenTextures(GLsizei, GLuint *);
# 875 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetBooleanv(GLenum, GLboolean *);
# 876 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetClipPlane(GLenum, GLdouble *);
# 877 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetDoublev(GLenum, GLdouble *);
# 878 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLenum glGetError();
# 879 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetFloatv(GLenum, GLfloat *);
# 880 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetIntegerv(GLenum, GLint *);
# 881 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetLightfv(GLenum, GLenum, GLfloat *);
# 882 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetLightiv(GLenum, GLenum, GLint *);
# 883 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetMapdv(GLenum, GLenum, GLdouble *);
# 884 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetMapfv(GLenum, GLenum, GLfloat *);
# 885 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetMapiv(GLenum, GLenum, GLint *);
# 886 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetMaterialfv(GLenum, GLenum, GLfloat *);
# 887 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetMaterialiv(GLenum, GLenum, GLint *);
# 888 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetPixelMapfv(GLenum, GLfloat *);
# 889 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetPixelMapuiv(GLenum, GLuint *);
# 890 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetPixelMapusv(GLenum, GLushort *);
# 891 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetPointerv(GLenum, GLvoid **);
# 892 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetPolygonStipple(GLubyte *);
# 893 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" const GLubyte *glGetString(GLenum);
# 894 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexEnvfv(GLenum, GLenum, GLfloat *);
# 895 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexEnviv(GLenum, GLenum, GLint *);
# 896 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexGendv(GLenum, GLenum, GLdouble *);
# 897 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexGenfv(GLenum, GLenum, GLfloat *);
# 898 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexGeniv(GLenum, GLenum, GLint *);
# 899 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexImage(GLenum, GLint, GLenum, GLenum, GLvoid *);
# 900 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *);
# 901 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *);
# 902 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexParameterfv(GLenum, GLenum, GLfloat *);
# 903 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glGetTexParameteriv(GLenum, GLenum, GLint *);
# 904 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glHint(GLenum, GLenum);
# 905 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexMask(GLuint);
# 906 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexPointer(GLenum, GLsizei, const GLvoid *);
# 907 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexd(GLdouble);
# 908 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexdv(const GLdouble *);
# 909 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexf(GLfloat);
# 910 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexfv(const GLfloat *);
# 911 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexi(GLint);
# 912 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexiv(const GLint *);
# 913 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexs(GLshort);
# 914 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexsv(const GLshort *);
# 915 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexub(GLubyte);
# 916 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glIndexubv(const GLubyte *);
# 917 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glInitNames();
# 918 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glInterleavedArrays(GLenum, GLsizei, const GLvoid *);
# 919 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLboolean glIsEnabled(GLenum);
# 920 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLboolean glIsList(GLuint);
# 921 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLboolean glIsTexture(GLuint);
# 922 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLightModelf(GLenum, GLfloat);
# 923 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLightModelfv(GLenum, const GLfloat *);
# 924 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLightModeli(GLenum, GLint);
# 925 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLightModeliv(GLenum, const GLint *);
# 926 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLightf(GLenum, GLenum, GLfloat);
# 927 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLightfv(GLenum, GLenum, const GLfloat *);
# 928 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLighti(GLenum, GLenum, GLint);
# 929 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLightiv(GLenum, GLenum, const GLint *);
# 930 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLineStipple(GLint, GLushort);
# 931 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLineWidth(GLfloat);
# 932 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glListBase(GLuint);
# 933 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLoadIdentity();
# 934 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLoadMatrixd(const GLdouble *);
# 935 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLoadMatrixf(const GLfloat *);
# 936 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLoadName(GLuint);
# 937 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glLogicOp(GLenum);
# 938 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMap1d(GLenum, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
# 939 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMap1f(GLenum, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
# 940 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMap2d(GLenum, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble, GLint, GLint, const GLdouble *);
# 941 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMap2f(GLenum, GLfloat, GLfloat, GLint, GLint, GLfloat, GLfloat, GLint, GLint, const GLfloat *);
# 942 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMapGrid1d(GLint, GLdouble, GLdouble);
# 943 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMapGrid1f(GLint, GLfloat, GLfloat);
# 944 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMapGrid2d(GLint, GLdouble, GLdouble, GLint, GLdouble, GLdouble);
# 945 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMapGrid2f(GLint, GLfloat, GLfloat, GLint, GLfloat, GLfloat);
# 946 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMaterialf(GLenum, GLenum, GLfloat);
# 947 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMaterialfv(GLenum, GLenum, const GLfloat *);
# 948 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMateriali(GLenum, GLenum, GLint);
# 949 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMaterialiv(GLenum, GLenum, const GLint *);
# 950 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMatrixMode(GLenum);
# 951 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMultMatrixd(const GLdouble *);
# 952 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glMultMatrixf(const GLfloat *);
# 953 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNewList(GLuint, GLenum);
# 954 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3b(GLbyte, GLbyte, GLbyte);
# 955 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3bv(const GLbyte *);
# 956 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3d(GLdouble, GLdouble, GLdouble);
# 957 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3dv(const GLdouble *);
# 958 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3f(GLfloat, GLfloat, GLfloat);
# 959 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3fv(const GLfloat *);
# 960 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3i(GLint, GLint, GLint);
# 961 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3iv(const GLint *);
# 962 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3s(GLshort, GLshort, GLshort);
# 963 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormal3sv(const GLshort *);
# 964 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glNormalPointer(GLenum, GLsizei, const GLvoid *);
# 965 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glOrtho(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
# 966 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPassThrough(GLfloat);
# 967 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelMapfv(GLenum, GLsizei, const GLfloat *);
# 968 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelMapuiv(GLenum, GLsizei, const GLuint *);
# 969 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelMapusv(GLenum, GLsizei, const GLushort *);
# 970 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelStoref(GLenum, GLfloat);
# 971 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelStorei(GLenum, GLint);
# 972 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelTransferf(GLenum, GLfloat);
# 973 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelTransferi(GLenum, GLint);
# 974 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPixelZoom(GLfloat, GLfloat);
# 975 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPointSize(GLfloat);
# 976 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPolygonMode(GLenum, GLenum);
# 977 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPolygonOffset(GLfloat, GLfloat);
# 978 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPolygonStipple(const GLubyte *);
# 979 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPopAttrib();
# 980 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPopClientAttrib();
# 981 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPopMatrix();
# 982 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPopName();
# 983 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPrioritizeTextures(GLsizei, const GLuint *, const GLclampf *);
# 984 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPushAttrib(GLbitfield);
# 985 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPushClientAttrib(GLbitfield);
# 986 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPushMatrix();
# 987 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glPushName(GLuint);
# 988 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2d(GLdouble, GLdouble);
# 989 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2dv(const GLdouble *);
# 990 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2f(GLfloat, GLfloat);
# 991 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2fv(const GLfloat *);
# 992 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2i(GLint, GLint);
# 993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2iv(const GLint *);
# 994 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2s(GLshort, GLshort);
# 995 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos2sv(const GLshort *);
# 996 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3d(GLdouble, GLdouble, GLdouble);
# 997 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3dv(const GLdouble *);
# 998 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3f(GLfloat, GLfloat, GLfloat);
# 999 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3fv(const GLfloat *);
# 1000 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3i(GLint, GLint, GLint);
# 1001 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3iv(const GLint *);
# 1002 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3s(GLshort, GLshort, GLshort);
# 1003 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos3sv(const GLshort *);
# 1004 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4d(GLdouble, GLdouble, GLdouble, GLdouble);
# 1005 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4dv(const GLdouble *);
# 1006 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4f(GLfloat, GLfloat, GLfloat, GLfloat);
# 1007 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4fv(const GLfloat *);
# 1008 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4i(GLint, GLint, GLint, GLint);
# 1009 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4iv(const GLint *);
# 1010 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4s(GLshort, GLshort, GLshort, GLshort);
# 1011 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRasterPos4sv(const GLshort *);
# 1012 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glReadBuffer(GLenum);
# 1013 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *);
# 1014 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRectd(GLdouble, GLdouble, GLdouble, GLdouble);
# 1015 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRectdv(const GLdouble *, const GLdouble *);
# 1016 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRectf(GLfloat, GLfloat, GLfloat, GLfloat);
# 1017 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRectfv(const GLfloat *, const GLfloat *);
# 1018 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRecti(GLint, GLint, GLint, GLint);
# 1019 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRectiv(const GLint *, const GLint *);
# 1020 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRects(GLshort, GLshort, GLshort, GLshort);
# 1021 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRectsv(const GLshort *, const GLshort *);
# 1022 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLint glRenderMode(GLenum);
# 1023 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRotated(GLdouble, GLdouble, GLdouble, GLdouble);
# 1024 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glRotatef(GLfloat, GLfloat, GLfloat, GLfloat);
# 1025 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glScaled(GLdouble, GLdouble, GLdouble);
# 1026 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glScalef(GLfloat, GLfloat, GLfloat);
# 1027 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glScissor(GLint, GLint, GLsizei, GLsizei);
# 1028 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glSelectBuffer(GLsizei, GLuint *);
# 1029 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glShadeModel(GLenum);
# 1030 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glStencilFunc(GLenum, GLint, GLuint);
# 1031 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glStencilMask(GLuint);
# 1032 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glStencilOp(GLenum, GLenum, GLenum);
# 1033 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1d(GLdouble);
# 1034 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1dv(const GLdouble *);
# 1035 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1f(GLfloat);
# 1036 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1fv(const GLfloat *);
# 1037 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1i(GLint);
# 1038 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1iv(const GLint *);
# 1039 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1s(GLshort);
# 1040 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord1sv(const GLshort *);
# 1041 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2d(GLdouble, GLdouble);
# 1042 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2dv(const GLdouble *);
# 1043 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2f(GLfloat, GLfloat);
# 1044 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2fv(const GLfloat *);
# 1045 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2i(GLint, GLint);
# 1046 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2iv(const GLint *);
# 1047 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2s(GLshort, GLshort);
# 1048 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord2sv(const GLshort *);
# 1049 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3d(GLdouble, GLdouble, GLdouble);
# 1050 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3dv(const GLdouble *);
# 1051 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3f(GLfloat, GLfloat, GLfloat);
# 1052 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3fv(const GLfloat *);
# 1053 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3i(GLint, GLint, GLint);
# 1054 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3iv(const GLint *);
# 1055 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3s(GLshort, GLshort, GLshort);
# 1056 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord3sv(const GLshort *);
# 1057 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4d(GLdouble, GLdouble, GLdouble, GLdouble);
# 1058 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4dv(const GLdouble *);
# 1059 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4f(GLfloat, GLfloat, GLfloat, GLfloat);
# 1060 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4fv(const GLfloat *);
# 1061 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4i(GLint, GLint, GLint, GLint);
# 1062 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4iv(const GLint *);
# 1063 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4s(GLshort, GLshort, GLshort, GLshort);
# 1064 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoord4sv(const GLshort *);
# 1065 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexCoordPointer(GLint, GLenum, GLsizei, const GLvoid *);
# 1066 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexEnvf(GLenum, GLenum, GLfloat);
# 1067 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexEnvfv(GLenum, GLenum, const GLfloat *);
# 1068 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexEnvi(GLenum, GLenum, GLint);
# 1069 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexEnviv(GLenum, GLenum, const GLint *);
# 1070 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexGend(GLenum, GLenum, GLdouble);
# 1071 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexGendv(GLenum, GLenum, const GLdouble *);
# 1072 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexGenf(GLenum, GLenum, GLfloat);
# 1073 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexGenfv(GLenum, GLenum, const GLfloat *);
# 1074 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexGeni(GLenum, GLenum, GLint);
# 1075 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexGeniv(GLenum, GLenum, const GLint *);
# 1076 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexImage1D(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
# 1077 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *);
# 1078 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexParameterf(GLenum, GLenum, GLfloat);
# 1079 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexParameterfv(GLenum, GLenum, const GLfloat *);
# 1080 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexParameteri(GLenum, GLenum, GLint);
# 1081 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexParameteriv(GLenum, GLenum, const GLint *);
# 1082 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexSubImage1D(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const GLvoid *);
# 1083 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *);
# 1084 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTranslated(GLdouble, GLdouble, GLdouble);
# 1085 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glTranslatef(GLfloat, GLfloat, GLfloat);
# 1086 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2d(GLdouble, GLdouble);
# 1087 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2dv(const GLdouble *);
# 1088 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2f(GLfloat, GLfloat);
# 1089 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2fv(const GLfloat *);
# 1090 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2i(GLint, GLint);
# 1091 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2iv(const GLint *);
# 1092 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2s(GLshort, GLshort);
# 1093 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex2sv(const GLshort *);
# 1094 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3d(GLdouble, GLdouble, GLdouble);
# 1095 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3dv(const GLdouble *);
# 1096 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3f(GLfloat, GLfloat, GLfloat);
# 1097 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3fv(const GLfloat *);
# 1098 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3i(GLint, GLint, GLint);
# 1099 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3iv(const GLint *);
# 1100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3s(GLshort, GLshort, GLshort);
# 1101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex3sv(const GLshort *);
# 1102 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4d(GLdouble, GLdouble, GLdouble, GLdouble);
# 1103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4dv(const GLdouble *);
# 1104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4f(GLfloat, GLfloat, GLfloat, GLfloat);
# 1105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4fv(const GLfloat *);
# 1106 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4i(GLint, GLint, GLint, GLint);
# 1107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4iv(const GLint *);
# 1108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4s(GLshort, GLshort, GLshort, GLshort);
# 1109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertex4sv(const GLshort *);
# 1110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glVertexPointer(GLint, GLenum, GLsizei, const GLvoid *);
# 1111 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" void glViewport(GLint, GLint, GLsizei, GLsizei);
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
extern "C" void gluBeginCurve(GLUnurbs *);
# 290 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginPolygon(GLUtesselator *);
# 291 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginSurface(GLUnurbs *);
# 292 "/usr/include/GL/glu.h" 3
extern "C" void gluBeginTrim(GLUnurbs *);
# 293 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild1DMipmapLevels(GLenum, GLint, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);
# 294 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild1DMipmaps(GLenum, GLint, GLsizei, GLenum, GLenum, const void *);
# 295 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild2DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);
# 296 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild2DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *);
# 297 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild3DMipmapLevels(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, GLint, GLint, GLint, const void *);
# 298 "/usr/include/GL/glu.h" 3
extern "C" GLint gluBuild3DMipmaps(GLenum, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *);
# 299 "/usr/include/GL/glu.h" 3
extern "C" GLboolean gluCheckExtension(const GLubyte *, const GLubyte *);
# 300 "/usr/include/GL/glu.h" 3
extern "C" void gluCylinder(GLUquadric *, GLdouble, GLdouble, GLdouble, GLint, GLint);
# 301 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteNurbsRenderer(GLUnurbs *);
# 302 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteQuadric(GLUquadric *);
# 303 "/usr/include/GL/glu.h" 3
extern "C" void gluDeleteTess(GLUtesselator *);
# 304 "/usr/include/GL/glu.h" 3
extern "C" void gluDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint);
# 305 "/usr/include/GL/glu.h" 3
extern "C" void gluEndCurve(GLUnurbs *);
# 306 "/usr/include/GL/glu.h" 3
extern "C" void gluEndPolygon(GLUtesselator *);
# 307 "/usr/include/GL/glu.h" 3
extern "C" void gluEndSurface(GLUnurbs *);
# 308 "/usr/include/GL/glu.h" 3
extern "C" void gluEndTrim(GLUnurbs *);
# 309 "/usr/include/GL/glu.h" 3
extern "C" const GLubyte *gluErrorString(GLenum);
# 310 "/usr/include/GL/glu.h" 3
extern "C" void gluGetNurbsProperty(GLUnurbs *, GLenum, GLfloat *);
# 311 "/usr/include/GL/glu.h" 3
extern "C" const GLubyte *gluGetString(GLenum);
# 312 "/usr/include/GL/glu.h" 3
extern "C" void gluGetTessProperty(GLUtesselator *, GLenum, GLdouble *);
# 313 "/usr/include/GL/glu.h" 3
extern "C" void gluLoadSamplingMatrices(GLUnurbs *, const GLfloat *, const GLfloat *, const GLint *);
# 314 "/usr/include/GL/glu.h" 3
extern "C" void gluLookAt(GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble, GLdouble);
# 315 "/usr/include/GL/glu.h" 3
extern "C" GLUnurbs *gluNewNurbsRenderer();
# 316 "/usr/include/GL/glu.h" 3
extern "C" GLUquadric *gluNewQuadric();
# 317 "/usr/include/GL/glu.h" 3
extern "C" GLUtesselator *gluNewTess();
# 318 "/usr/include/GL/glu.h" 3
extern "C" void gluNextContour(GLUtesselator *, GLenum);
# 319 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallback(GLUnurbs *, GLenum, _GLUfuncptr);
# 320 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallbackData(GLUnurbs *, GLvoid *);
# 321 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCallbackDataEXT(GLUnurbs *, GLvoid *);
# 322 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLenum);
# 323 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsProperty(GLUnurbs *, GLenum, GLfloat);
# 324 "/usr/include/GL/glu.h" 3
extern "C" void gluNurbsSurface(GLUnurbs *, GLint, GLfloat *, GLint, GLfloat *, GLint, GLint, GLfloat *, GLint, GLint, GLenum);
# 325 "/usr/include/GL/glu.h" 3
extern "C" void gluOrtho2D(GLdouble, GLdouble, GLdouble, GLdouble);
# 326 "/usr/include/GL/glu.h" 3
extern "C" void gluPartialDisk(GLUquadric *, GLdouble, GLdouble, GLint, GLint, GLdouble, GLdouble);
# 327 "/usr/include/GL/glu.h" 3
extern "C" void gluPerspective(GLdouble, GLdouble, GLdouble, GLdouble);
# 328 "/usr/include/GL/glu.h" 3
extern "C" void gluPickMatrix(GLdouble, GLdouble, GLdouble, GLdouble, GLint *);
# 329 "/usr/include/GL/glu.h" 3
extern "C" GLint gluProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);
# 330 "/usr/include/GL/glu.h" 3
extern "C" void gluPwlCurve(GLUnurbs *, GLint, GLfloat *, GLint, GLenum);
# 331 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricCallback(GLUquadric *, GLenum, _GLUfuncptr);
# 332 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricDrawStyle(GLUquadric *, GLenum);
# 333 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricNormals(GLUquadric *, GLenum);
# 334 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricOrientation(GLUquadric *, GLenum);
# 335 "/usr/include/GL/glu.h" 3
extern "C" void gluQuadricTexture(GLUquadric *, GLboolean);
# 336 "/usr/include/GL/glu.h" 3
extern "C" GLint gluScaleImage(GLenum, GLsizei, GLsizei, GLenum, const void *, GLsizei, GLsizei, GLenum, GLvoid *);
# 337 "/usr/include/GL/glu.h" 3
extern "C" void gluSphere(GLUquadric *, GLdouble, GLint, GLint);
# 338 "/usr/include/GL/glu.h" 3
extern "C" void gluTessBeginContour(GLUtesselator *);
# 339 "/usr/include/GL/glu.h" 3
extern "C" void gluTessBeginPolygon(GLUtesselator *, GLvoid *);
# 340 "/usr/include/GL/glu.h" 3
extern "C" void gluTessCallback(GLUtesselator *, GLenum, _GLUfuncptr);
# 341 "/usr/include/GL/glu.h" 3
extern "C" void gluTessEndContour(GLUtesselator *);
# 342 "/usr/include/GL/glu.h" 3
extern "C" void gluTessEndPolygon(GLUtesselator *);
# 343 "/usr/include/GL/glu.h" 3
extern "C" void gluTessNormal(GLUtesselator *, GLdouble, GLdouble, GLdouble);
# 344 "/usr/include/GL/glu.h" 3
extern "C" void gluTessProperty(GLUtesselator *, GLenum, GLdouble);
# 345 "/usr/include/GL/glu.h" 3
extern "C" void gluTessVertex(GLUtesselator *, GLdouble *, GLvoid *);
# 346 "/usr/include/GL/glu.h" 3
extern "C" GLint gluUnProject(GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble *, GLdouble *, GLdouble *);
# 347 "/usr/include/GL/glu.h" 3
extern "C" GLint gluUnProject4(GLdouble, GLdouble, GLdouble, GLdouble, const GLdouble *, const GLdouble *, const GLint *, GLdouble, GLdouble, GLdouble *, GLdouble *, GLdouble *, GLdouble *);
# 1173 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 1174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
# 1175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXIMAGE3DPROC)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *); }
# 1176 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 1289 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLACTIVETEXTUREPROC)(GLenum); }
# 1290 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREPROC)(GLenum); }
# 1291 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const GLvoid *); }
# 1292 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 1293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const GLvoid *); }
# 1294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 1295 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 1296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid *); }
# 1297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum, GLint, GLvoid *); }
# 1298 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDPROC)(const GLdouble [16]); }
# 1299 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFPROC)(const GLfloat [16]); }
# 1300 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDPROC)(const GLdouble [16]); }
# 1301 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFPROC)(const GLfloat [16]); }
# 1302 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DPROC)(GLenum, GLdouble); }
# 1303 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVPROC)(GLenum, const GLdouble *); }
# 1304 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FPROC)(GLenum, GLfloat); }
# 1305 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVPROC)(GLenum, const GLfloat *); }
# 1306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IPROC)(GLenum, GLint); }
# 1307 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVPROC)(GLenum, const GLint *); }
# 1308 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SPROC)(GLenum, GLshort); }
# 1309 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVPROC)(GLenum, const GLshort *); }
# 1310 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DPROC)(GLenum, GLdouble, GLdouble); }
# 1311 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVPROC)(GLenum, const GLdouble *); }
# 1312 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FPROC)(GLenum, GLfloat, GLfloat); }
# 1313 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVPROC)(GLenum, const GLfloat *); }
# 1314 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IPROC)(GLenum, GLint, GLint); }
# 1315 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVPROC)(GLenum, const GLint *); }
# 1316 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SPROC)(GLenum, GLshort, GLshort); }
# 1317 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVPROC)(GLenum, const GLshort *); }
# 1318 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 1319 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVPROC)(GLenum, const GLdouble *); }
# 1320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 1321 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVPROC)(GLenum, const GLfloat *); }
# 1322 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IPROC)(GLenum, GLint, GLint, GLint); }
# 1323 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVPROC)(GLenum, const GLint *); }
# 1324 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SPROC)(GLenum, GLshort, GLshort, GLshort); }
# 1325 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVPROC)(GLenum, const GLshort *); }
# 1326 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 1327 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVPROC)(GLenum, const GLdouble *); }
# 1328 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 1329 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVPROC)(GLenum, const GLfloat *); }
# 1330 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 1331 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVPROC)(GLenum, const GLint *); }
# 1332 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 1333 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVPROC)(GLenum, const GLshort *); }
# 1334 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEPROC)(GLclampf, GLboolean); }
# 1432 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDCOLORPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
# 1433 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDEQUATIONPROC)(GLenum); }
# 1434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
# 1435 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERPROC)(GLenum, GLsizei, const GLvoid *); }
# 1436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDDPROC)(GLdouble); }
# 1437 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDDVPROC)(const GLdouble *); }
# 1438 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDFPROC)(GLfloat); }
# 1439 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDFVPROC)(const GLfloat *); }
# 1440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSPROC)(GLenum, GLint *, GLsizei *, GLsizei); }
# 1441 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSPROC)(GLenum, GLsizei *, GLenum, const GLvoid **, GLsizei); }
# 1442 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERFPROC)(GLenum, GLfloat); }
# 1443 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVPROC)(GLenum, GLfloat *); }
# 1444 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BPROC)(GLbyte, GLbyte, GLbyte); }
# 1445 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVPROC)(const GLbyte *); }
# 1446 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DPROC)(GLdouble, GLdouble, GLdouble); }
# 1447 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVPROC)(const GLdouble *); }
# 1448 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FPROC)(GLfloat, GLfloat, GLfloat); }
# 1449 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVPROC)(const GLfloat *); }
# 1450 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IPROC)(GLint, GLint, GLint); }
# 1451 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVPROC)(const GLint *); }
# 1452 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SPROC)(GLshort, GLshort, GLshort); }
# 1453 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVPROC)(const GLshort *); }
# 1454 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBPROC)(GLubyte, GLubyte, GLubyte); }
# 1455 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVPROC)(const GLubyte *); }
# 1456 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIPROC)(GLuint, GLuint, GLuint); }
# 1457 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVPROC)(const GLuint *); }
# 1458 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USPROC)(GLushort, GLushort, GLushort); }
# 1459 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVPROC)(const GLushort *); }
# 1460 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERPROC)(GLint, GLenum, GLsizei, GLvoid *); }
# 1461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2DPROC)(GLdouble, GLdouble); }
# 1462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2DVPROC)(const GLdouble *); }
# 1463 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2FPROC)(GLfloat, GLfloat); }
# 1464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2FVPROC)(const GLfloat *); }
# 1465 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2IPROC)(GLint, GLint); }
# 1466 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2IVPROC)(const GLint *); }
# 1467 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2SPROC)(GLshort, GLshort); }
# 1468 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2SVPROC)(const GLshort *); }
# 1469 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3DPROC)(GLdouble, GLdouble, GLdouble); }
# 1470 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3DVPROC)(const GLdouble *); }
# 1471 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3FPROC)(GLfloat, GLfloat, GLfloat); }
# 1472 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3FVPROC)(const GLfloat *); }
# 1473 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3IPROC)(GLint, GLint, GLint); }
# 1474 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3IVPROC)(const GLint *); }
# 1475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3SPROC)(GLshort, GLshort, GLshort); }
# 1476 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3SVPROC)(const GLshort *); }
# 1584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef ptrdiff_t GLsizeiptr; }
# 1585 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef ptrdiff_t GLintptr; }
# 1587 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBEGINQUERYPROC)(GLenum, GLuint); }
# 1588 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDBUFFERPROC)(GLenum, GLuint); }
# 1589 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBUFFERDATAPROC)(GLenum, GLsizeiptr, const GLvoid *, GLenum); }
# 1590 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, const GLvoid *); }
# 1591 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEBUFFERSPROC)(GLsizei, const GLuint *); }
# 1592 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEQUERIESPROC)(GLsizei, const GLuint *); }
# 1593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENDQUERYPROC)(GLenum); }
# 1594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENBUFFERSPROC)(GLsizei, GLuint *); }
# 1595 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENQUERIESPROC)(GLsizei, GLuint *); }
# 1596 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 1597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVPROC)(GLenum, GLenum, GLvoid **); }
# 1598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAPROC)(GLenum, GLintptr, GLsizeiptr, GLvoid *); }
# 1599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVPROC)(GLuint, GLenum, GLint *); }
# 1600 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVPROC)(GLuint, GLenum, GLuint *); }
# 1601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYIVPROC)(GLenum, GLenum, GLint *); }
# 1602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISBUFFERPROC)(GLuint); }
# 1603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISQUERYPROC)(GLuint); }
# 1604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERPROC)(GLenum, GLenum); }
# 1605 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERPROC)(GLenum); }
# 1721 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef char GLchar; }
# 1723 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLATTACHSHADERPROC)(GLuint, GLuint); }
# 1724 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONPROC)(GLuint, GLuint, const GLchar *); }
# 1725 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum, GLenum); }
# 1726 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPILESHADERPROC)(GLuint); }
# 1727 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLCREATEPROGRAMPROC)(void); }
# 1728 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLCREATESHADERPROC)(GLenum); }
# 1729 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEPROGRAMPROC)(GLuint); }
# 1730 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETESHADERPROC)(GLuint); }
# 1731 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDETACHSHADERPROC)(GLuint, GLuint); }
# 1732 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint); }
# 1733 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWBUFFERSPROC)(GLsizei, const GLenum *); }
# 1734 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint); }
# 1735 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
# 1736 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *); }
# 1737 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETATTACHEDSHADERSPROC)(GLuint, GLsizei, GLsizei *, GLuint *); }
# 1738 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONPROC)(GLuint, const GLchar *); }
# 1739 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 1740 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMIVPROC)(GLuint, GLenum, GLint *); }
# 1741 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETSHADERINFOLOGPROC)(GLuint, GLsizei, GLsizei *, GLchar *); }
# 1742 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETSHADERSOURCEPROC)(GLint, GLsizei, GLsizei *, GLchar *); }
# 1743 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETSHADERIVPROC)(GLuint, GLenum, GLint *); }
# 1744 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONPROC)(GLint, const GLchar *); }
# 1745 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETUNIFORMFVPROC)(GLuint, GLint, GLfloat *); }
# 1746 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETUNIFORMIVPROC)(GLuint, GLint, GLint *); }
# 1747 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint, GLenum, GLvoid *); }
# 1748 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVPROC)(GLuint, GLenum, GLdouble *); }
# 1749 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVPROC)(GLuint, GLenum, GLfloat *); }
# 1750 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVPROC)(GLuint, GLenum, GLint *); }
# 1751 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISPROGRAMPROC)(GLuint); }
# 1752 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISSHADERPROC)(GLuint); }
# 1753 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLINKPROGRAMPROC)(GLuint); }
# 1754 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSHADERSOURCEPROC)(GLuint, GLsizei, const GLchar **, const GLint *); }
# 1755 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEPROC)(GLenum, GLenum, GLint, GLuint); }
# 1756 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSTENCILMASKSEPARATEPROC)(GLenum, GLuint); }
# 1757 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEPROC)(GLenum, GLenum, GLenum, GLenum); }
# 1758 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1FPROC)(GLint, GLfloat); }
# 1759 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1FVPROC)(GLint, GLsizei, const GLfloat *); }
# 1760 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1IPROC)(GLint, GLint); }
# 1761 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1IVPROC)(GLint, GLsizei, const GLint *); }
# 1762 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2FPROC)(GLint, GLfloat, GLfloat); }
# 1763 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2FVPROC)(GLint, GLsizei, const GLfloat *); }
# 1764 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2IPROC)(GLint, GLint, GLint); }
# 1765 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2IVPROC)(GLint, GLsizei, const GLint *); }
# 1766 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3FPROC)(GLint, GLfloat, GLfloat, GLfloat); }
# 1767 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3FVPROC)(GLint, GLsizei, const GLfloat *); }
# 1768 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3IPROC)(GLint, GLint, GLint, GLint); }
# 1769 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3IVPROC)(GLint, GLsizei, const GLint *); }
# 1770 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4FPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 1771 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4FVPROC)(GLint, GLsizei, const GLfloat *); }
# 1772 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4IPROC)(GLint, GLint, GLint, GLint, GLint); }
# 1773 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4IVPROC)(GLint, GLsizei, const GLint *); }
# 1774 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1775 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUSEPROGRAMPROC)(GLuint); }
# 1778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMPROC)(GLuint); }
# 1779 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DPROC)(GLuint, GLdouble); }
# 1780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVPROC)(GLuint, const GLdouble *); }
# 1781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FPROC)(GLuint, GLfloat); }
# 1782 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVPROC)(GLuint, const GLfloat *); }
# 1783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SPROC)(GLuint, GLshort); }
# 1784 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVPROC)(GLuint, const GLshort *); }
# 1785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DPROC)(GLuint, GLdouble, GLdouble); }
# 1786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVPROC)(GLuint, const GLdouble *); }
# 1787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FPROC)(GLuint, GLfloat, GLfloat); }
# 1788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVPROC)(GLuint, const GLfloat *); }
# 1789 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SPROC)(GLuint, GLshort, GLshort); }
# 1790 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVPROC)(GLuint, const GLshort *); }
# 1791 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 1792 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVPROC)(GLuint, const GLdouble *); }
# 1793 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 1794 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVPROC)(GLuint, const GLfloat *); }
# 1795 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SPROC)(GLuint, GLshort, GLshort, GLshort); }
# 1796 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVPROC)(GLuint, const GLshort *); }
# 1797 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVPROC)(GLuint, const GLbyte *); }
# 1798 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVPROC)(GLuint, const GLint *); }
# 1799 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVPROC)(GLuint, const GLshort *); }
# 1800 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 1801 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVPROC)(GLuint, const GLubyte *); }
# 1802 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVPROC)(GLuint, const GLuint *); }
# 1803 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVPROC)(GLuint, const GLushort *); }
# 1804 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVPROC)(GLuint, const GLbyte *); }
# 1805 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 1806 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVPROC)(GLuint, const GLdouble *); }
# 1807 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 1808 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVPROC)(GLuint, const GLfloat *); }
# 1809 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVPROC)(GLuint, const GLint *); }
# 1810 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 1811 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVPROC)(GLuint, const GLshort *); }
# 1812 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVPROC)(GLuint, const GLubyte *); }
# 1813 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVPROC)(GLuint, const GLuint *); }
# 1814 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVPROC)(GLuint, const GLushort *); }
# 1815 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid *); }
# 1938 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1939 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1940 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1941 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3X4FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1942 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X2FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1943 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4X3FVPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 1975 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTBUFFERMASK3DFXPROC)(GLuint); }
# 2015 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYAPPLEPROC)(GLenum, GLint, GLsizei); }
# 2016 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, GLint, GLsizei); }
# 2017 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLELEMENTPOINTERAPPLEPROC)(GLenum, const void *); }
# 2018 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)(GLenum, const GLint *, const GLsizei *, GLsizei); }
# 2019 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum, GLuint, GLuint, const GLint *, const GLsizei *, GLsizei); }
# 2039 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEFENCESAPPLEPROC)(GLsizei, const GLuint *); }
# 2040 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFINISHFENCEAPPLEPROC)(GLuint); }
# 2041 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFINISHOBJECTAPPLEPROC)(GLenum, GLint); }
# 2042 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENFENCESAPPLEPROC)(GLsizei, GLuint *); }
# 2043 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISFENCEAPPLEPROC)(GLuint); }
# 2044 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSETFENCEAPPLEPROC)(GLuint); }
# 2045 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLTESTFENCEAPPLEPROC)(GLuint); }
# 2046 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLTESTOBJECTAPPLEPROC)(GLenum, GLuint); }
# 2119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC)(GLenum, GLenum, GLvoid **); }
# 2120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXTURERANGEAPPLEPROC)(GLenum, GLsizei, GLvoid *); }
# 2147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDVERTEXARRAYAPPLEPROC)(GLuint); }
# 2148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEVERTEXARRAYSAPPLEPROC)(GLsizei, const GLuint *); }
# 2149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENVERTEXARRAYSAPPLEPROC)(GLsizei, const GLuint *); }
# 2150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISVERTEXARRAYAPPLEPROC)(GLuint); }
# 2174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)(GLsizei, void *); }
# 2175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)(GLenum, GLint); }
# 2176 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGEAPPLEPROC)(GLsizei, void *); }
# 2210 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLAMPCOLORARBPROC)(GLenum, GLenum); }
# 2256 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWBUFFERSARBPROC)(GLsizei, const GLenum *); }
# 2405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORSUBTABLEPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 2406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORTABLEPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 2407 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
# 2408 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
# 2409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const GLvoid *); }
# 2410 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *); }
# 2411 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFPROC)(GLenum, GLenum, GLfloat); }
# 2412 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, const GLfloat *); }
# 2413 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIPROC)(GLenum, GLenum, GLint); }
# 2414 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, const GLint *); }
# 2415 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
# 2416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCOLORTABLEPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 2417 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 2418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
# 2419 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 2420 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 2421 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 2422 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *); }
# 2423 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 2424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 2425 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETHISTOGRAMPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 2426 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 2427 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 2428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMINMAXPROC)(GLenum, GLboolean, GLenum, GLenum, GLvoid *); }
# 2429 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVPROC)(GLenum, GLenum, GLfloat *); }
# 2430 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVPROC)(GLenum, GLenum, GLint *); }
# 2431 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTERPROC)(GLenum, GLenum, GLenum, GLvoid *, GLvoid *, GLvoid *); }
# 2432 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLHISTOGRAMPROC)(GLenum, GLsizei, GLenum, GLboolean); }
# 2433 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMINMAXPROC)(GLenum, GLenum, GLboolean); }
# 2434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRESETHISTOGRAMPROC)(GLenum); }
# 2435 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRESETMINMAXPROC)(GLenum); }
# 2436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *, const GLvoid *); }
# 2491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCURRENTPALETTEMATRIXARBPROC)(GLint); }
# 2492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMATRIXINDEXPOINTERARBPROC)(GLint, GLenum, GLsizei, GLvoid *); }
# 2493 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMATRIXINDEXUBVARBPROC)(GLint, GLubyte *); }
# 2494 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMATRIXINDEXUIVARBPROC)(GLint, GLuint *); }
# 2495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMATRIXINDEXUSVARBPROC)(GLint, GLushort *); }
# 2522 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSAMPLECOVERAGEARBPROC)(GLclampf, GLboolean); }
# 2571 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLACTIVETEXTUREARBPROC)(GLenum); }
# 2572 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLIENTACTIVETEXTUREARBPROC)(GLenum); }
# 2573 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DARBPROC)(GLenum, GLdouble); }
# 2574 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1DVARBPROC)(GLenum, const GLdouble *); }
# 2575 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FARBPROC)(GLenum, GLfloat); }
# 2576 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1FVARBPROC)(GLenum, const GLfloat *); }
# 2577 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IARBPROC)(GLenum, GLint); }
# 2578 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1IVARBPROC)(GLenum, const GLint *); }
# 2579 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SARBPROC)(GLenum, GLshort); }
# 2580 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1SVARBPROC)(GLenum, const GLshort *); }
# 2581 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DARBPROC)(GLenum, GLdouble, GLdouble); }
# 2582 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2DVARBPROC)(GLenum, const GLdouble *); }
# 2583 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FARBPROC)(GLenum, GLfloat, GLfloat); }
# 2584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2FVARBPROC)(GLenum, const GLfloat *); }
# 2585 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IARBPROC)(GLenum, GLint, GLint); }
# 2586 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2IVARBPROC)(GLenum, const GLint *); }
# 2587 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SARBPROC)(GLenum, GLshort, GLshort); }
# 2588 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2SVARBPROC)(GLenum, const GLshort *); }
# 2589 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 2590 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3DVARBPROC)(GLenum, const GLdouble *); }
# 2591 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 2592 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3FVARBPROC)(GLenum, const GLfloat *); }
# 2593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IARBPROC)(GLenum, GLint, GLint, GLint); }
# 2594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3IVARBPROC)(GLenum, const GLint *); }
# 2595 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SARBPROC)(GLenum, GLshort, GLshort, GLshort); }
# 2596 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3SVARBPROC)(GLenum, const GLshort *); }
# 2597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DARBPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 2598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4DVARBPROC)(GLenum, const GLdouble *); }
# 2599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FARBPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 2600 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4FVARBPROC)(GLenum, const GLfloat *); }
# 2601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IARBPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 2602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4IVARBPROC)(GLenum, const GLint *); }
# 2603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SARBPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 2604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4SVARBPROC)(GLenum, const GLshort *); }
# 2656 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBEGINQUERYARBPROC)(GLenum, GLuint); }
# 2657 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEQUERIESARBPROC)(GLsizei, const GLuint *); }
# 2658 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENDQUERYARBPROC)(GLenum); }
# 2659 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENQUERIESARBPROC)(GLsizei, GLuint *); }
# 2660 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYOBJECTIVARBPROC)(GLuint, GLenum, GLint *); }
# 2661 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUIVARBPROC)(GLuint, GLenum, GLuint *); }
# 2662 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYIVARBPROC)(GLenum, GLenum, GLint *); }
# 2663 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISQUERYARBPROC)(GLuint); }
# 2702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERFARBPROC)(GLenum, GLfloat); }
# 2703 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVARBPROC)(GLenum, GLfloat *); }
# 2764 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef char GLcharARB; }
# 2765 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned GLhandleARB; }
# 2767 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLATTACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
# 2768 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPILESHADERARBPROC)(GLhandleARB); }
# 2769 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLhandleARB (*PFNGLCREATEPROGRAMOBJECTARBPROC)(void); }
# 2770 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLhandleARB (*PFNGLCREATESHADEROBJECTARBPROC)(GLenum); }
# 2771 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEOBJECTARBPROC)(GLhandleARB); }
# 2772 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDETACHOBJECTARBPROC)(GLhandleARB, GLhandleARB); }
# 2773 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETACTIVEUNIFORMARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
# 2774 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETATTACHEDOBJECTSARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLhandleARB *); }
# 2775 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLhandleARB (*PFNGLGETHANDLEARBPROC)(GLenum); }
# 2776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETINFOLOGARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
# 2777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERFVARBPROC)(GLhandleARB, GLenum, GLfloat *); }
# 2778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETOBJECTPARAMETERIVARBPROC)(GLhandleARB, GLenum, GLint *); }
# 2779 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, GLsizei *, GLcharARB *); }
# 2780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLGETUNIFORMLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
# 2781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETUNIFORMFVARBPROC)(GLhandleARB, GLint, GLfloat *); }
# 2782 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETUNIFORMIVARBPROC)(GLhandleARB, GLint, GLint *); }
# 2783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLINKPROGRAMARBPROC)(GLhandleARB); }
# 2784 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSHADERSOURCEARBPROC)(GLhandleARB, GLsizei, const GLcharARB **, const GLint *); }
# 2785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1FARBPROC)(GLint, GLfloat); }
# 2786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 2787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1IARBPROC)(GLint, GLint); }
# 2788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1IVARBPROC)(GLint, GLsizei, const GLint *); }
# 2789 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2FARBPROC)(GLint, GLfloat, GLfloat); }
# 2790 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 2791 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2IARBPROC)(GLint, GLint, GLint); }
# 2792 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2IVARBPROC)(GLint, GLsizei, const GLint *); }
# 2793 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3FARBPROC)(GLint, GLfloat, GLfloat, GLfloat); }
# 2794 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 2795 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3IARBPROC)(GLint, GLint, GLint, GLint); }
# 2796 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3IVARBPROC)(GLint, GLsizei, const GLint *); }
# 2797 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4FARBPROC)(GLint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 2798 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4FVARBPROC)(GLint, GLsizei, const GLfloat *); }
# 2799 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4IARBPROC)(GLint, GLint, GLint, GLint, GLint); }
# 2800 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4IVARBPROC)(GLint, GLsizei, const GLint *); }
# 2801 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX2FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 2802 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX3FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 2803 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMMATRIX4FVARBPROC)(GLint, GLsizei, GLboolean, const GLfloat *); }
# 2804 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUSEPROGRAMOBJECTARBPROC)(GLhandleARB); }
# 2805 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVALIDATEPROGRAMARBPROC)(GLhandleARB); }
# 2914 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *); }
# 2915 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *); }
# 2916 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *); }
# 2917 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *); }
# 2918 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *); }
# 2919 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *); }
# 2920 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)(GLenum, GLint, void *); }
# 3094 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXDARBPROC)(GLdouble [16]); }
# 3095 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLOADTRANSPOSEMATRIXFARBPROC)(GLfloat [16]); }
# 3096 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXDARBPROC)(GLdouble [16]); }
# 3097 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTTRANSPOSEMATRIXFARBPROC)(GLfloat [16]); }
# 3156 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXBLENDARBPROC)(GLint); }
# 3157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTPOINTERARBPROC)(GLint, GLenum, GLsizei, GLvoid *); }
# 3158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTBVARBPROC)(GLint, GLbyte *); }
# 3159 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTDVARBPROC)(GLint, GLdouble *); }
# 3160 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTFVARBPROC)(GLint, GLfloat *); }
# 3161 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTIVARBPROC)(GLint, GLint *); }
# 3162 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTSVARBPROC)(GLint, GLshort *); }
# 3163 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTUBVARBPROC)(GLint, GLubyte *); }
# 3164 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTUIVARBPROC)(GLint, GLuint *); }
# 3165 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWEIGHTUSVARBPROC)(GLint, GLushort *); }
# 3219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef ptrdiff_t GLsizeiptrARB; }
# 3220 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef ptrdiff_t GLintptrARB; }
# 3222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDBUFFERARBPROC)(GLenum, GLuint); }
# 3223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBUFFERDATAARBPROC)(GLenum, GLsizeiptrARB, const GLvoid *, GLenum); }
# 3224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, const GLvoid *); }
# 3225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEBUFFERSARBPROC)(GLsizei, const GLuint *); }
# 3226 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENBUFFERSARBPROC)(GLsizei, GLuint *); }
# 3227 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETBUFFERPARAMETERIVARBPROC)(GLenum, GLenum, GLint *); }
# 3228 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETBUFFERPOINTERVARBPROC)(GLenum, GLenum, GLvoid **); }
# 3229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETBUFFERSUBDATAARBPROC)(GLenum, GLintptrARB, GLsizeiptrARB, GLvoid *); }
# 3230 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISBUFFERARBPROC)(GLuint); }
# 3231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLvoid *(*PFNGLMAPBUFFERARBPROC)(GLenum, GLenum); }
# 3232 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLUNMAPBUFFERARBPROC)(GLenum); }
# 3335 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDPROGRAMARBPROC)(GLenum, GLuint); }
# 3336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEPROGRAMSARBPROC)(GLsizei, const GLuint *); }
# 3337 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
# 3338 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENABLEVERTEXATTRIBARRAYARBPROC)(GLuint); }
# 3339 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENPROGRAMSARBPROC)(GLsizei, GLuint *); }
# 3340 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
# 3341 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMENVPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
# 3342 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)(GLenum, GLuint, GLdouble *); }
# 3343 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)(GLenum, GLuint, GLfloat *); }
# 3344 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGARBPROC)(GLenum, GLenum, void *); }
# 3345 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMIVARBPROC)(GLenum, GLenum, GLint *); }
# 3346 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVARBPROC)(GLuint, GLenum, GLvoid **); }
# 3347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVARBPROC)(GLuint, GLenum, GLdouble *); }
# 3348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVARBPROC)(GLuint, GLenum, GLfloat *); }
# 3349 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVARBPROC)(GLuint, GLenum, GLint *); }
# 3350 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISPROGRAMARBPROC)(GLuint); }
# 3351 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 3352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
# 3353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 3354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
# 3355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DARBPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 3356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)(GLenum, GLuint, const GLdouble *); }
# 3357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FARBPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 3358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)(GLenum, GLuint, const GLfloat *); }
# 3359 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMSTRINGARBPROC)(GLenum, GLenum, GLsizei, const void *); }
# 3360 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DARBPROC)(GLuint, GLdouble); }
# 3361 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVARBPROC)(GLuint, const GLdouble *); }
# 3362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FARBPROC)(GLuint, GLfloat); }
# 3363 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVARBPROC)(GLuint, const GLfloat *); }
# 3364 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SARBPROC)(GLuint, GLshort); }
# 3365 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVARBPROC)(GLuint, const GLshort *); }
# 3366 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DARBPROC)(GLuint, GLdouble, GLdouble); }
# 3367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVARBPROC)(GLuint, const GLdouble *); }
# 3368 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FARBPROC)(GLuint, GLfloat, GLfloat); }
# 3369 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVARBPROC)(GLuint, const GLfloat *); }
# 3370 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SARBPROC)(GLuint, GLshort, GLshort); }
# 3371 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVARBPROC)(GLuint, const GLshort *); }
# 3372 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 3373 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVARBPROC)(GLuint, const GLdouble *); }
# 3374 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 3375 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVARBPROC)(GLuint, const GLfloat *); }
# 3376 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SARBPROC)(GLuint, GLshort, GLshort, GLshort); }
# 3377 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVARBPROC)(GLuint, const GLshort *); }
# 3378 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NBVARBPROC)(GLuint, const GLbyte *); }
# 3379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NIVARBPROC)(GLuint, const GLint *); }
# 3380 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NSVARBPROC)(GLuint, const GLshort *); }
# 3381 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBARBPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 3382 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUBVARBPROC)(GLuint, const GLubyte *); }
# 3383 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUIVARBPROC)(GLuint, const GLuint *); }
# 3384 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4NUSVARBPROC)(GLuint, const GLushort *); }
# 3385 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4BVARBPROC)(GLuint, const GLbyte *); }
# 3386 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DARBPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 3387 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVARBPROC)(GLuint, const GLdouble *); }
# 3388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FARBPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 3389 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVARBPROC)(GLuint, const GLfloat *); }
# 3390 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4IVARBPROC)(GLuint, const GLint *); }
# 3391 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SARBPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 3392 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVARBPROC)(GLuint, const GLshort *); }
# 3393 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVARBPROC)(GLuint, const GLubyte *); }
# 3394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UIVARBPROC)(GLuint, const GLuint *); }
# 3395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4USVARBPROC)(GLuint, const GLushort *); }
# 3396 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERARBPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *); }
# 3478 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDATTRIBLOCATIONARBPROC)(GLhandleARB, GLuint, const GLcharARB *); }
# 3479 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETACTIVEATTRIBARBPROC)(GLhandleARB, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLcharARB *); }
# 3480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLGETATTRIBLOCATIONARBPROC)(GLhandleARB, const GLcharARB *); }
# 3495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2DARBPROC)(GLdouble, GLdouble); }
# 3496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2DVARBPROC)(const GLdouble *); }
# 3497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2FARBPROC)(GLfloat, GLfloat); }
# 3498 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2FVARBPROC)(const GLfloat *); }
# 3499 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2IARBPROC)(GLint, GLint); }
# 3500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2IVARBPROC)(const GLint *); }
# 3501 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2SARBPROC)(GLshort, GLshort); }
# 3502 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2SVARBPROC)(const GLshort *); }
# 3503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3DARBPROC)(GLdouble, GLdouble, GLdouble); }
# 3504 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3DVARBPROC)(const GLdouble *); }
# 3505 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3FARBPROC)(GLfloat, GLfloat, GLfloat); }
# 3506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3FVARBPROC)(const GLfloat *); }
# 3507 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3IARBPROC)(GLint, GLint, GLint); }
# 3508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3IVARBPROC)(const GLint *); }
# 3509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3SARBPROC)(GLshort, GLshort, GLshort); }
# 3510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3SVARBPROC)(const GLshort *); }
# 3602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWBUFFERSATIPROC)(GLsizei, const GLenum *); }
# 3619 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWELEMENTARRAYATIPROC)(GLenum, GLsizei); }
# 3620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTARRAYATIPROC)(GLenum, GLuint, GLuint, GLsizei); }
# 3621 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLELEMENTPOINTERATIPROC)(GLenum, const void *); }
# 3645 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERFVATIPROC)(GLenum, GLfloat *); }
# 3646 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTEXBUMPPARAMETERIVATIPROC)(GLenum, GLint *); }
# 3647 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERFVATIPROC)(GLenum, GLfloat *); }
# 3648 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXBUMPPARAMETERIVATIPROC)(GLenum, GLint *); }
# 3719 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 3720 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 3721 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLALPHAFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 3722 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBEGINFRAGMENTSHADERATIPROC)(void); }
# 3723 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDFRAGMENTSHADERATIPROC)(GLuint); }
# 3724 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP1ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 3725 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP2ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 3726 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORFRAGMENTOP3ATIPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 3727 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEFRAGMENTSHADERATIPROC)(GLuint); }
# 3728 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENDFRAGMENTSHADERATIPROC)(void); }
# 3729 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLGENFRAGMENTSHADERSATIPROC)(GLuint); }
# 3730 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPASSTEXCOORDATIPROC)(GLuint, GLuint, GLenum); }
# 3731 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSAMPLEMAPATIPROC)(GLuint, GLuint, GLenum); }
# 3732 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)(GLuint, const GLfloat *); }
# 3758 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void *(*PFNGLMAPOBJECTBUFFERATIPROC)(GLuint); }
# 3759 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNMAPOBJECTBUFFERATIPROC)(GLuint); }
# 3783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPNTRIANGLESFATIPROC)(GLenum, GLfloat); }
# 3784 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPNTRIANGLESIATIPROC)(GLenum, GLint); }
# 3803 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSTENCILFUNCSEPARATEATIPROC)(GLenum, GLenum, GLint, GLuint); }
# 3804 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSTENCILOPSEPARATEATIPROC)(GLenum, GLenum, GLenum, GLenum); }
# 3896 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLARRAYOBJECTATIPROC)(GLenum, GLint, GLenum, GLsizei, GLuint, GLuint); }
# 3897 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFREEOBJECTBUFFERATIPROC)(GLuint); }
# 3898 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETARRAYOBJECTFVATIPROC)(GLenum, GLenum, GLfloat *); }
# 3899 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETARRAYOBJECTIVATIPROC)(GLenum, GLenum, GLint *); }
# 3900 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 3901 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETOBJECTBUFFERIVATIPROC)(GLuint, GLenum, GLint *); }
# 3902 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 3903 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVARIANTARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 3904 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISOBJECTBUFFERATIPROC)(GLuint); }
# 3905 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLNEWOBJECTBUFFERATIPROC)(GLsizei, const void *, GLenum); }
# 3906 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUPDATEOBJECTBUFFERATIPROC)(GLuint, GLuint, GLsizei, const void *, GLenum); }
# 3907 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTARRAYOBJECTATIPROC)(GLuint, GLenum, GLsizei, GLuint, GLuint); }
# 3931 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)(GLuint, GLenum, GLfloat *); }
# 3932 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)(GLuint, GLenum, GLint *); }
# 3933 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)(GLuint, GLint, GLenum, GLboolean, GLsizei, GLuint, GLuint); }
# 3959 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)(GLenum); }
# 3960 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3BATIPROC)(GLenum, GLbyte, GLbyte, GLbyte); }
# 3961 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3BVATIPROC)(GLenum, const GLbyte *); }
# 3962 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 3963 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
# 3964 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 3965 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
# 3966 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
# 3967 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3IVATIPROC)(GLenum, const GLint *); }
# 3968 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
# 3969 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALSTREAM3SVATIPROC)(GLenum, const GLshort *); }
# 3970 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXBLENDENVFATIPROC)(GLenum, GLfloat); }
# 3971 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXBLENDENVIATIPROC)(GLenum, GLint); }
# 3972 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DATIPROC)(GLenum, GLdouble, GLdouble); }
# 3973 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2DVATIPROC)(GLenum, const GLdouble *); }
# 3974 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FATIPROC)(GLenum, GLfloat, GLfloat); }
# 3975 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2FVATIPROC)(GLenum, const GLfloat *); }
# 3976 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IATIPROC)(GLenum, GLint, GLint); }
# 3977 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2IVATIPROC)(GLenum, const GLint *); }
# 3978 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SATIPROC)(GLenum, GLshort, GLshort); }
# 3979 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM2SVATIPROC)(GLenum, const GLshort *); }
# 3980 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble); }
# 3981 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3DVATIPROC)(GLenum, const GLdouble *); }
# 3982 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat); }
# 3983 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3FVATIPROC)(GLenum, const GLfloat *); }
# 3984 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IATIPROC)(GLenum, GLint, GLint, GLint); }
# 3985 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3IVATIPROC)(GLenum, const GLint *); }
# 3986 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SATIPROC)(GLenum, GLshort, GLshort, GLshort); }
# 3987 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM3SVATIPROC)(GLenum, const GLshort *); }
# 3988 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DATIPROC)(GLenum, GLdouble, GLdouble, GLdouble, GLdouble); }
# 3989 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4DVATIPROC)(GLenum, const GLdouble *); }
# 3990 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FATIPROC)(GLenum, GLfloat, GLfloat, GLfloat, GLfloat); }
# 3991 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4FVATIPROC)(GLenum, const GLfloat *); }
# 3992 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IATIPROC)(GLenum, GLint, GLint, GLint, GLint); }
# 3993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4IVATIPROC)(GLenum, const GLint *); }
# 3994 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SATIPROC)(GLenum, GLshort, GLshort, GLshort, GLshort); }
# 3995 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXSTREAM4SVATIPROC)(GLenum, const GLshort *); }
# 4100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLGETUNIFORMBUFFERSIZEEXTPROC)(GLuint, GLint); }
# 4101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLintptr (*PFNGLGETUNIFORMOFFSETEXTPROC)(GLuint, GLint); }
# 4102 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORMBUFFEREXTPROC)(GLuint, GLint, GLuint); }
# 4123 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDCOLOREXTPROC)(GLclampf, GLclampf, GLclampf, GLclampf); }
# 4139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDEQUATIONSEPARATEEXTPROC)(GLenum, GLenum); }
# 4157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDFUNCSEPARATEEXTPROC)(GLenum, GLenum, GLenum, GLenum); }
# 4184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLENDEQUATIONEXTPROC)(GLenum); }
# 4234 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *); }
# 4235 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCOLORSUBTABLEEXTPROC)(GLenum, GLsizei, GLint, GLint, GLsizei); }
# 4249 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLOCKARRAYSEXTPROC)(GLint, GLsizei); }
# 4250 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNLOCKARRAYSEXTPROC)(void); }
# 4285 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const void *); }
# 4286 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *); }
# 4287 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFEXTPROC)(GLenum, GLenum, GLfloat); }
# 4288 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 4289 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIEXTPROC)(GLenum, GLenum, GLint); }
# 4290 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 4291 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 4292 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)(GLenum, GLenum, GLint, GLint, GLsizei, GLsizei); }
# 4293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCONVOLUTIONFILTEREXTPROC)(GLenum, GLenum, GLenum, void *); }
# 4294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4295 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETSEPARABLEFILTEREXTPROC)(GLenum, GLenum, GLenum, void *, void *, void *); }
# 4297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSEPARABLEFILTER2DEXTPROC)(GLenum, GLenum, GLsizei, GLsizei, GLenum, GLenum, const void *, const void *); }
# 4337 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINORMALPOINTEREXTPROC)(GLenum, GLsizei, void *); }
# 4338 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTANGENTPOINTEREXTPROC)(GLenum, GLsizei, void *); }
# 4352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE1DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint); }
# 4353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYTEXIMAGE2DEXTPROC)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint); }
# 4354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei); }
# 4355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 4356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei); }
# 4373 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCULLPARAMETERDVEXTPROC)(GLenum, GLdouble *); }
# 4374 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCULLPARAMETERFVEXTPROC)(GLenum, GLfloat *); }
# 4391 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDEPTHBOUNDSEXTPROC)(GLclampd, GLclampd); }
# 4404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORMASKINDEXEDEXTPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean); }
# 4405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDISABLEINDEXEDEXTPROC)(GLenum, GLuint); }
# 4406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENABLEINDEXEDEXTPROC)(GLenum, GLuint); }
# 4407 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETBOOLEANINDEXEDVEXTPROC)(GLenum, GLuint, GLboolean *); }
# 4408 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETINTEGERINDEXEDVEXTPROC)(GLenum, GLuint, GLint *); }
# 4409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISENABLEDINDEXEDEXTPROC)(GLenum, GLuint); }
# 4427 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWARRAYSINSTANCEDEXTPROC)(GLenum, GLint, GLsizei, GLsizei); }
# 4428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWELEMENTSINSTANCEDEXTPROC)(GLenum, GLsizei, GLenum, const GLvoid *, GLsizei); }
# 4445 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWRANGEELEMENTSEXTPROC)(GLenum, GLuint, GLuint, GLsizei, GLenum, const GLvoid *); }
# 4467 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDPOINTEREXTPROC)(GLenum, GLsizei, const GLvoid *); }
# 4468 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDDEXTPROC)(GLdouble); }
# 4469 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDDVEXTPROC)(const GLdouble *); }
# 4470 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDFEXTPROC)(GLfloat); }
# 4471 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDFVEXTPROC)(const GLfloat *); }
# 4503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTCOLORMATERIALEXTPROC)(GLenum, GLenum); }
# 4504 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFEXTPROC)(GLenum, GLfloat); }
# 4505 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFVEXTPROC)(GLenum, GLfloat *); }
# 4506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELIEXTPROC)(GLenum, GLint); }
# 4507 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELIVEXTPROC)(GLenum, GLint *); }
# 4508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFEXTPROC)(GLenum, GLenum, GLfloat); }
# 4509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTIEXTPROC)(GLenum, GLenum, GLint); }
# 4511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4512 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFEXTPROC)(GLenum, GLenum, const GLfloat); }
# 4513 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 4514 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALIEXTPROC)(GLenum, GLenum, const GLint); }
# 4515 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 4516 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4517 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4518 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 4519 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 4520 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLIGHTENVIEXTPROC)(GLenum, GLint); }
# 4555 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBLITFRAMEBUFFEREXTPROC)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum); }
# 4572 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLenum, GLsizei, GLenum, GLsizei, GLsizei); }
# 4637 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDFRAMEBUFFEREXTPROC)(GLenum, GLuint); }
# 4638 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDRENDERBUFFEREXTPROC)(GLenum, GLuint); }
# 4639 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLenum (*PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)(GLenum); }
# 4640 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEFRAMEBUFFERSEXTPROC)(GLsizei, const GLuint *); }
# 4641 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETERENDERBUFFERSEXTPROC)(GLsizei, const GLuint *); }
# 4642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)(GLenum, GLenum, GLenum, GLuint); }
# 4643 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 4644 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint); }
# 4645 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)(GLenum, GLenum, GLenum, GLuint, GLint, GLint); }
# 4646 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENFRAMEBUFFERSEXTPROC)(GLsizei, GLuint *); }
# 4647 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENRENDERBUFFERSEXTPROC)(GLsizei, GLuint *); }
# 4648 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENERATEMIPMAPEXTPROC)(GLenum); }
# 4649 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLenum, GLenum, GLenum, GLint *); }
# 4650 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4651 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISFRAMEBUFFEREXTPROC)(GLuint); }
# 4652 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISRENDERBUFFEREXTPROC)(GLuint); }
# 4653 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEEXTPROC)(GLenum, GLenum, GLsizei, GLsizei); }
# 4715 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREEXTPROC)(GLenum, GLenum, GLuint, GLint); }
# 4716 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)(GLenum, GLenum, GLuint, GLint, GLenum); }
# 4717 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)(GLenum, GLenum, GLuint, GLint, GLint); }
# 4718 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERIEXTPROC)(GLuint, GLenum, GLint); }
# 4734 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)(GLenum, GLuint, GLsizei, const GLfloat *); }
# 4735 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)(GLenum, GLuint, GLsizei, const GLfloat *); }
# 4776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDFRAGDATALOCATIONEXTPROC)(GLuint, GLuint, const GLchar *); }
# 4777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLGETFRAGDATALOCATIONEXTPROC)(GLuint, const GLchar *); }
# 4778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETUNIFORMUIVEXTPROC)(GLuint, GLint, GLuint *); }
# 4779 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIIVEXTPROC)(GLuint, GLenum, GLint *); }
# 4780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIUIVEXTPROC)(GLuint, GLenum, GLuint *); }
# 4781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1UIEXTPROC)(GLint, GLuint); }
# 4782 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM1UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 4783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2UIEXTPROC)(GLint, GLuint, GLuint); }
# 4784 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM2UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 4785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3UIEXTPROC)(GLint, GLuint, GLuint, GLuint); }
# 4786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM3UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 4787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4UIEXTPROC)(GLint, GLuint, GLuint, GLuint, GLuint); }
# 4788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLUNIFORM4UIVEXTPROC)(GLint, GLsizei, const GLuint *); }
# 4789 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IEXTPROC)(GLuint, GLint); }
# 4790 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1IVEXTPROC)(GLuint, const GLint *); }
# 4791 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIEXTPROC)(GLuint, GLuint); }
# 4792 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI1UIVEXTPROC)(GLuint, const GLuint *); }
# 4793 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IEXTPROC)(GLuint, GLint, GLint); }
# 4794 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2IVEXTPROC)(GLuint, const GLint *); }
# 4795 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIEXTPROC)(GLuint, GLuint, GLuint); }
# 4796 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI2UIVEXTPROC)(GLuint, const GLuint *); }
# 4797 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IEXTPROC)(GLuint, GLint, GLint, GLint); }
# 4798 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3IVEXTPROC)(GLuint, const GLint *); }
# 4799 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
# 4800 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI3UIVEXTPROC)(GLuint, const GLuint *); }
# 4801 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4BVEXTPROC)(GLuint, const GLbyte *); }
# 4802 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IEXTPROC)(GLuint, GLint, GLint, GLint, GLint); }
# 4803 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4IVEXTPROC)(GLuint, const GLint *); }
# 4804 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4SVEXTPROC)(GLuint, const GLshort *); }
# 4805 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UBVEXTPROC)(GLuint, const GLubyte *); }
# 4806 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIEXTPROC)(GLuint, GLuint, GLuint, GLuint, GLuint); }
# 4807 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4UIVEXTPROC)(GLuint, const GLuint *); }
# 4808 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBI4USVEXTPROC)(GLuint, const GLushort *); }
# 4809 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBIPOINTEREXTPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid *); }
# 4869 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETHISTOGRAMEXTPROC)(GLenum, GLboolean, GLenum, GLenum, void *); }
# 4870 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4871 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4872 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMINMAXEXTPROC)(GLenum, GLboolean, GLenum, GLenum, void *); }
# 4873 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 4874 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMINMAXPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 4875 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLHISTOGRAMEXTPROC)(GLenum, GLsizei, GLenum, GLboolean); }
# 4876 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMINMAXEXTPROC)(GLenum, GLenum, GLboolean); }
# 4877 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRESETHISTOGRAMEXTPROC)(GLenum); }
# 4878 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRESETMINMAXEXTPROC)(GLenum); }
# 4909 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLINDEXFUNCEXTPROC)(GLenum, GLfloat); }
# 4922 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLINDEXMATERIALEXTPROC)(GLenum, GLenum); }
# 4955 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLAPPLYTEXTUREEXTPROC)(GLenum); }
# 4956 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXTURELIGHTEXTPROC)(GLenum); }
# 4957 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXTUREMATERIALEXTPROC)(GLenum, GLenum); }
# 4981 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIDRAWARRAYSEXTPROC)(GLenum, GLint *, GLsizei *, GLsizei); }
# 4982 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIDRAWELEMENTSEXTPROC)(GLenum, GLsizei *, GLenum, const GLvoid **, GLsizei); }
# 5014 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSAMPLEMASKEXTPROC)(GLclampf, GLboolean); }
# 5015 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSAMPLEPATTERNEXTPROC)(GLenum); }
# 5095 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORTABLEEXTPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const void *); }
# 5096 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEEXTPROC)(GLenum, GLenum, GLenum, void *); }
# 5097 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)(GLenum, GLenum, GLfloat *); }
# 5098 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)(GLenum, GLenum, GLint *); }
# 5138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 5139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 5140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)(GLenum, GLenum, const GLfloat); }
# 5141 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum, GLenum, const GLfloat *); }
# 5142 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)(GLenum, GLenum, const GLint); }
# 5143 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 5175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERFEXTPROC)(GLenum, GLfloat); }
# 5176 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERFVEXTPROC)(GLenum, GLfloat *); }
# 5194 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOLYGONOFFSETEXTPROC)(GLfloat, GLfloat); }
# 5216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBEGINSCENEEXTPROC)(void); }
# 5217 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENDSCENEEXTPROC)(void); }
# 5239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BEXTPROC)(GLbyte, GLbyte, GLbyte); }
# 5240 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3BVEXTPROC)(const GLbyte *); }
# 5241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DEXTPROC)(GLdouble, GLdouble, GLdouble); }
# 5242 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3DVEXTPROC)(const GLdouble *); }
# 5243 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FEXTPROC)(GLfloat, GLfloat, GLfloat); }
# 5244 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3FVEXTPROC)(const GLfloat *); }
# 5245 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IEXTPROC)(GLint, GLint, GLint); }
# 5246 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3IVEXTPROC)(const GLint *); }
# 5247 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SEXTPROC)(GLshort, GLshort, GLshort); }
# 5248 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3SVEXTPROC)(const GLshort *); }
# 5249 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBEXTPROC)(GLubyte, GLubyte, GLubyte); }
# 5250 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UBVEXTPROC)(const GLubyte *); }
# 5251 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIEXTPROC)(GLuint, GLuint, GLuint); }
# 5252 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3UIVEXTPROC)(const GLuint *); }
# 5253 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USEXTPROC)(GLushort, GLushort, GLushort); }
# 5254 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3USVEXTPROC)(const GLushort *); }
# 5255 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLvoid *); }
# 5332 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLACTIVESTENCILFACEEXTPROC)(GLenum); }
# 5357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXSUBIMAGE1DEXTPROC)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *); }
# 5358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXSUBIMAGE2DEXTPROC)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *); }
# 5359 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXSUBIMAGE3DEXTPROC)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *); }
# 5436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXIMAGE3DEXTPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *); }
# 5473 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXBUFFEREXTPROC)(GLenum, GLenum, GLuint); }
# 5706 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLEARCOLORIIEXTPROC)(GLint, GLint, GLint, GLint); }
# 5707 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLEARCOLORIUIEXTPROC)(GLuint, GLuint, GLuint, GLuint); }
# 5708 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, GLint *); }
# 5709 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, GLuint *); }
# 5710 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXPARAMETERIIVEXTPROC)(GLenum, GLenum, const GLint *); }
# 5711 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXPARAMETERIUIVEXTPROC)(GLenum, GLenum, const GLuint *); }
# 5761 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLARETEXTURESRESIDENTEXTPROC)(GLsizei, const GLuint *, GLboolean *); }
# 5762 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDTEXTUREEXTPROC)(GLenum, GLuint); }
# 5763 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETETEXTURESEXTPROC)(GLsizei, const GLuint *); }
# 5764 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENTEXTURESEXTPROC)(GLsizei, GLuint *); }
# 5765 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISTEXTUREEXTPROC)(GLuint); }
# 5766 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPRIORITIZETEXTURESEXTPROC)(GLsizei, const GLuint *, const GLclampf *); }
# 5787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXTURENORMALEXTPROC)(GLenum); }
# 5855 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYOBJECTI64VEXTPROC)(GLuint, GLenum, GLint64EXT *); }
# 5856 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETQUERYOBJECTUI64VEXTPROC)(GLuint, GLenum, GLuint64EXT *); }
# 5904 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLARRAYELEMENTEXTPROC)(GLint); }
# 5905 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const void *); }
# 5906 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWARRAYSEXTPROC)(GLenum, GLint, GLsizei); }
# 5907 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTEREXTPROC)(GLsizei, GLsizei, const GLboolean *); }
# 5908 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPOINTERVEXTPROC)(GLenum, void **); }
# 5909 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLINDEXPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const void *); }
# 5910 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALPOINTEREXTPROC)(GLenum, GLsizei, GLsizei, const void *); }
# 5911 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORDPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const void *); }
# 5912 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXPOINTEREXTPROC)(GLint, GLenum, GLsizei, GLsizei, const void *); }
# 6044 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBEGINVERTEXSHADEREXTPROC)(void); }
# 6045 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLBINDLIGHTPARAMETEREXTPROC)(GLenum, GLenum); }
# 6046 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLBINDMATERIALPARAMETEREXTPROC)(GLenum, GLenum); }
# 6047 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLBINDPARAMETEREXTPROC)(GLenum); }
# 6048 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLBINDTEXGENPARAMETEREXTPROC)(GLenum, GLenum, GLenum); }
# 6049 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)(GLenum, GLenum); }
# 6050 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDVERTEXSHADEREXTPROC)(GLuint); }
# 6051 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEVERTEXSHADEREXTPROC)(GLuint); }
# 6052 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
# 6053 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)(GLuint); }
# 6054 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENDVERTEXSHADEREXTPROC)(void); }
# 6055 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLEXTRACTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
# 6056 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLGENSYMBOLSEXTPROC)(GLenum, GLenum, GLenum, GLuint); }
# 6057 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLGENVERTEXSHADERSEXTPROC)(GLuint); }
# 6058 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETINVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 6059 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETINVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 6060 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETINVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 6061 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 6062 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 6063 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 6064 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVARIANTBOOLEANVEXTPROC)(GLuint, GLenum, GLboolean *); }
# 6065 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVARIANTFLOATVEXTPROC)(GLuint, GLenum, GLfloat *); }
# 6066 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVARIANTINTEGERVEXTPROC)(GLuint, GLenum, GLint *); }
# 6067 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVARIANTPOINTERVEXTPROC)(GLuint, GLenum, GLvoid **); }
# 6068 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLINSERTCOMPONENTEXTPROC)(GLuint, GLuint, GLuint); }
# 6069 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISVARIANTENABLEDEXTPROC)(GLuint, GLenum); }
# 6070 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSETINVARIANTEXTPROC)(GLuint, GLenum, GLvoid *); }
# 6071 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSETLOCALCONSTANTEXTPROC)(GLuint, GLenum, GLvoid *); }
# 6072 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSHADEROP1EXTPROC)(GLenum, GLuint, GLuint); }
# 6073 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSHADEROP2EXTPROC)(GLenum, GLuint, GLuint, GLuint); }
# 6074 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSHADEROP3EXTPROC)(GLenum, GLuint, GLuint, GLuint, GLuint); }
# 6075 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSWIZZLEEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
# 6076 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTPOINTEREXTPROC)(GLuint, GLenum, GLuint, GLvoid *); }
# 6077 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTBVEXTPROC)(GLuint, GLbyte *); }
# 6078 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTDVEXTPROC)(GLuint, GLdouble *); }
# 6079 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTFVEXTPROC)(GLuint, GLfloat *); }
# 6080 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTIVEXTPROC)(GLuint, GLint *); }
# 6081 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTSVEXTPROC)(GLuint, GLshort *); }
# 6082 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTUBVEXTPROC)(GLuint, GLubyte *); }
# 6083 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTUIVEXTPROC)(GLuint, GLuint *); }
# 6084 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVARIANTUSVEXTPROC)(GLuint, GLushort *); }
# 6085 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWRITEMASKEXTPROC)(GLuint, GLuint, GLenum, GLenum, GLenum, GLenum); }
# 6153 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXWEIGHTPOINTEREXTPROC)(GLint, GLenum, GLsizei, void *); }
# 6154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFEXTPROC)(GLfloat); }
# 6155 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXWEIGHTFVEXTPROC)(GLfloat *); }
# 6170 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSTRINGMARKERGREMEDYPROC)(GLsizei, const void *); }
# 6192 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, const GLfloat *); }
# 6193 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, const GLint *); }
# 6194 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFHPPROC)(GLenum, GLenum, const GLfloat); }
# 6195 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum, GLenum, const GLfloat *); }
# 6196 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIHPPROC)(GLenum, GLenum, const GLint); }
# 6197 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum, GLenum, const GLint *); }
# 6247 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIMODEDRAWARRAYSIBMPROC)(const GLenum *, const GLint *, const GLsizei *, GLsizei, GLint); }
# 6248 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTIMODEDRAWELEMENTSIBMPROC)(const GLenum *, const GLsizei *, GLenum, const GLvoid *const *, GLsizei, GLint); }
# 6313 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 6314 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLEDGEFLAGPOINTERLISTIBMPROC)(GLint, const GLboolean **, GLint); }
# 6315 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 6316 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLINDEXPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 6317 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALPOINTERLISTIBMPROC)(GLenum, GLint, const GLvoid **, GLint); }
# 6318 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 6319 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 6320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXPOINTERLISTIBMPROC)(GLint, GLenum, GLint, const GLvoid **, GLint); }
# 6375 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORPOINTERVINTELPROC)(GLint, GLenum, const void **); }
# 6376 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMALPOINTERVINTELPROC)(GLenum, const void **); }
# 6377 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORDPOINTERVINTELPROC)(GLint, GLenum, const void **); }
# 6378 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXPOINTERVINTELPROC)(GLint, GLenum, const void **); }
# 6394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXSCISSORFUNCINTELPROC)(GLenum, GLenum, GLenum); }
# 6395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXSCISSORINTELPROC)(GLenum, GLclampf, GLclampf); }
# 6414 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLBUFFERREGIONENABLEDEXTPROC)(void); }
# 6415 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEBUFFERREGIONEXTPROC)(GLenum); }
# 6416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDRAWBUFFERREGIONEXTPROC)(GLuint, GLint, GLint, GLsizei, GLsizei, GLint, GLint); }
# 6417 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLNEWBUFFERREGIONEXTPROC)(GLenum); }
# 6418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREADBUFFERREGIONEXTPROC)(GLuint, GLint, GLint, GLsizei, GLsizei); }
# 6462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRESIZEBUFFERSMESAPROC)(void); }
# 6475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2DMESAPROC)(GLdouble, GLdouble); }
# 6476 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2DVMESAPROC)(const GLdouble *); }
# 6477 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2FMESAPROC)(GLfloat, GLfloat); }
# 6478 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2FVMESAPROC)(const GLfloat *); }
# 6479 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2IMESAPROC)(GLint, GLint); }
# 6480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2IVMESAPROC)(const GLint *); }
# 6481 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2SMESAPROC)(GLshort, GLshort); }
# 6482 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS2SVMESAPROC)(const GLshort *); }
# 6483 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3DMESAPROC)(GLdouble, GLdouble, GLdouble); }
# 6484 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3DVMESAPROC)(const GLdouble *); }
# 6485 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3FMESAPROC)(GLfloat, GLfloat, GLfloat); }
# 6486 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3FVMESAPROC)(const GLfloat *); }
# 6487 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3IMESAPROC)(GLint, GLint, GLint); }
# 6488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3IVMESAPROC)(const GLint *); }
# 6489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3SMESAPROC)(GLshort, GLshort, GLshort); }
# 6490 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS3SVMESAPROC)(const GLshort *); }
# 6491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4DMESAPROC)(GLdouble, GLdouble, GLdouble, GLdouble); }
# 6492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4DVMESAPROC)(const GLdouble *); }
# 6493 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4FMESAPROC)(GLfloat, GLfloat, GLfloat, GLfloat); }
# 6494 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4FVMESAPROC)(const GLfloat *); }
# 6495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4IMESAPROC)(GLint, GLint, GLint, GLint); }
# 6496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4IVMESAPROC)(const GLint *); }
# 6497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4SMESAPROC)(GLshort, GLshort, GLshort, GLshort); }
# 6498 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLWINDOWPOS4SVMESAPROC)(const GLshort *); }
# 6573 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLEARDEPTHDNVPROC)(GLdouble); }
# 6574 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDEPTHBOUNDSDNVPROC)(GLdouble, GLdouble); }
# 6575 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDEPTHRANGEDNVPROC)(GLdouble, GLdouble); }
# 6641 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLEVALMAPSNVPROC)(GLenum, GLenum); }
# 6642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
# 6643 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMAPATTRIBPARAMETERIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
# 6644 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLboolean, void *); }
# 6645 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMAPPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 6646 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETMAPPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
# 6647 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMAPCONTROLPOINTSNVPROC)(GLenum, GLuint, GLenum, GLsizei, GLsizei, GLint, GLint, GLboolean, const void *); }
# 6648 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMAPPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
# 6649 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMAPPARAMETERIVNVPROC)(GLenum, GLenum, const GLint *); }
# 6674 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEFENCESNVPROC)(GLsizei, const GLuint *); }
# 6675 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFINISHFENCENVPROC)(GLuint); }
# 6676 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENFENCESNVPROC)(GLsizei, GLuint *); }
# 6677 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFENCEIVNVPROC)(GLuint, GLenum, GLint *); }
# 6678 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISFENCENVPROC)(GLuint); }
# 6679 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSETFENCENVPROC)(GLuint, GLenum); }
# 6680 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLTESTFENCENVPROC)(GLuint); }
# 6744 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble *); }
# 6745 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat *); }
# 6746 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)(GLuint, GLsizei, const GLubyte *, GLdouble, GLdouble, GLdouble, GLdouble); }
# 6747 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLdouble []); }
# 6748 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)(GLuint, GLsizei, const GLubyte *, GLfloat, GLfloat, GLfloat, GLfloat); }
# 6749 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)(GLuint, GLsizei, const GLubyte *, const GLfloat []); }
# 6805 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)(GLenum, GLsizei, GLsizei, GLenum, GLsizei, GLsizei); }
# 6849 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
# 6850 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
# 6851 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6852 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
# 6853 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
# 6854 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
# 6855 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4INVPROC)(GLenum, GLuint, GLint, GLint, GLint, GLint); }
# 6856 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)(GLenum, GLuint, const GLint *); }
# 6857 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)(GLenum, GLuint, GLuint, GLuint, GLuint, GLuint); }
# 6858 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)(GLenum, GLuint, const GLuint *); }
# 6859 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)(GLenum, GLuint, GLsizei, const GLint *); }
# 6860 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)(GLenum, GLuint, GLsizei, const GLuint *); }
# 6861 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMVERTEXLIMITNVPROC)(GLenum, GLint); }
# 6888 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef unsigned short GLhalf; }
# 6890 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR3HNVPROC)(GLhalf, GLhalf, GLhalf); }
# 6891 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR3HVNVPROC)(const GLhalf *); }
# 6892 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4HNVPROC)(GLhalf, GLhalf, GLhalf, GLhalf); }
# 6893 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4HVNVPROC)(const GLhalf *); }
# 6894 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDHNVPROC)(GLhalf); }
# 6895 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGCOORDHVNVPROC)(const GLhalf *); }
# 6896 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HNVPROC)(GLenum, GLhalf); }
# 6897 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD1HVNVPROC)(GLenum, const GLhalf *); }
# 6898 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HNVPROC)(GLenum, GLhalf, GLhalf); }
# 6899 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD2HVNVPROC)(GLenum, const GLhalf *); }
# 6900 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HNVPROC)(GLenum, GLhalf, GLhalf, GLhalf); }
# 6901 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD3HVNVPROC)(GLenum, const GLhalf *); }
# 6902 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HNVPROC)(GLenum, GLhalf, GLhalf, GLhalf, GLhalf); }
# 6903 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLMULTITEXCOORD4HVNVPROC)(GLenum, const GLhalf *); }
# 6904 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMAL3HNVPROC)(GLhalf, GLhalf, GLhalf); }
# 6905 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMAL3HVNVPROC)(const GLhalf *); }
# 6906 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HNVPROC)(GLhalf, GLhalf, GLhalf); }
# 6907 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSECONDARYCOLOR3HVNVPROC)(const GLhalf *); }
# 6908 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD1HNVPROC)(GLhalf); }
# 6909 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD1HVNVPROC)(const GLhalf *); }
# 6910 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2HNVPROC)(GLhalf, GLhalf); }
# 6911 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2HVNVPROC)(const GLhalf *); }
# 6912 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD3HNVPROC)(GLhalf, GLhalf, GLhalf); }
# 6913 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD3HVNVPROC)(const GLhalf *); }
# 6914 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD4HNVPROC)(GLhalf, GLhalf, GLhalf, GLhalf); }
# 6915 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD4HVNVPROC)(const GLhalf *); }
# 6916 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEX2HNVPROC)(GLhalf, GLhalf); }
# 6917 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEX2HVNVPROC)(const GLhalf *); }
# 6918 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEX3HNVPROC)(GLhalf, GLhalf, GLhalf); }
# 6919 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEX3HVNVPROC)(const GLhalf *); }
# 6920 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEX4HNVPROC)(GLhalf, GLhalf, GLhalf, GLhalf); }
# 6921 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEX4HVNVPROC)(const GLhalf *); }
# 6922 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HNVPROC)(GLuint, GLhalf); }
# 6923 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1HVNVPROC)(GLuint, const GLhalf *); }
# 6924 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HNVPROC)(GLuint, GLhalf, GLhalf); }
# 6925 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2HVNVPROC)(GLuint, const GLhalf *); }
# 6926 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HNVPROC)(GLuint, GLhalf, GLhalf, GLhalf); }
# 6927 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3HVNVPROC)(GLuint, const GLhalf *); }
# 6928 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HNVPROC)(GLuint, GLhalf, GLhalf, GLhalf, GLhalf); }
# 6929 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4HVNVPROC)(GLuint, const GLhalf *); }
# 6930 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1HVNVPROC)(GLuint, GLsizei, const GLhalf *); }
# 6931 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2HVNVPROC)(GLuint, GLsizei, const GLhalf *); }
# 6932 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3HVNVPROC)(GLuint, GLsizei, const GLhalf *); }
# 6933 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4HVNVPROC)(GLuint, GLsizei, const GLhalf *); }
# 6934 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHNVPROC)(GLhalf); }
# 6935 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXWEIGHTHVNVPROC)(const GLhalf *); }
# 7021 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBEGINOCCLUSIONQUERYNVPROC)(GLuint); }
# 7022 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEOCCLUSIONQUERIESNVPROC)(GLsizei, const GLuint *); }
# 7023 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENDOCCLUSIONQUERYNVPROC)(void); }
# 7024 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENOCCLUSIONQUERIESNVPROC)(GLsizei, GLuint *); }
# 7025 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYIVNVPROC)(GLuint, GLenum, GLint *); }
# 7026 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETOCCLUSIONQUERYUIVNVPROC)(GLuint, GLenum, GLuint *); }
# 7027 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISOCCLUSIONQUERYNVPROC)(GLuint); }
# 7064 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLint *); }
# 7065 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLuint *); }
# 7066 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)(GLenum, GLuint, GLuint, GLsizei, const GLfloat *); }
# 7088 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFLUSHPIXELDATARANGENVPROC)(GLenum); }
# 7089 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPIXELDATARANGENVPROC)(GLenum, GLsizei, void *); }
# 7107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERINVPROC)(GLenum, GLint); }
# 7108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPOINTPARAMETERIVNVPROC)(GLenum, const GLint *); }
# 7125 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTINDEXNVPROC)(GLuint); }
# 7126 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPRIMITIVERESTARTNVPROC)(void); }
# 7192 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum); }
# 7193 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMBINEROUTPUTNVPROC)(GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLenum, GLboolean, GLboolean, GLboolean); }
# 7194 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFNVPROC)(GLenum, GLfloat); }
# 7195 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERFVNVPROC)(GLenum, const GLfloat *); }
# 7196 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERINVPROC)(GLenum, GLint); }
# 7197 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMBINERPARAMETERIVNVPROC)(GLenum, const GLint *); }
# 7198 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFINALCOMBINERINPUTNVPROC)(GLenum, GLenum, GLenum, GLenum); }
# 7199 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLfloat *); }
# 7200 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLenum, GLint *); }
# 7201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLenum, GLfloat *); }
# 7202 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLenum, GLint *); }
# 7203 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 7204 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)(GLenum, GLenum, GLint *); }
# 7231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, const GLfloat *); }
# 7232 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum, GLenum, GLfloat *); }
# 7491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLACTIVEVARYINGNVPROC)(GLuint, const GLchar *); }
# 7492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBEGINTRANSFORMFEEDBACKNVPROC)(GLenum); }
# 7493 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDBUFFERBASENVPROC)(GLenum, GLuint, GLuint); }
# 7494 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDBUFFEROFFSETNVPROC)(GLenum, GLuint, GLuint, GLintptr); }
# 7495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDBUFFERRANGENVPROC)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr); }
# 7496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLENDTRANSFORMFEEDBACKNVPROC)(void); }
# 7497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETACTIVEVARYINGNVPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *); }
# 7498 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)(GLuint, GLuint, GLint *); }
# 7499 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLGETVARYINGLOCATIONNVPROC)(GLuint, const GLchar *); }
# 7500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)(GLuint, const GLint *, GLenum); }
# 7501 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)(GLuint, GLsizei, const GLint *, GLenum); }
# 7530 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFLUSHVERTEXARRAYRANGENVPROC)(void); }
# 7531 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXARRAYRANGENVPROC)(GLsizei, void *); }
# 7640 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLAREPROGRAMSRESIDENTNVPROC)(GLsizei, const GLuint *, GLboolean *); }
# 7641 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLBINDPROGRAMNVPROC)(GLenum, GLuint); }
# 7642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEPROGRAMSNVPROC)(GLsizei, const GLuint *); }
# 7643 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLEXECUTEPROGRAMNVPROC)(GLenum, GLuint, const GLfloat *); }
# 7644 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGENPROGRAMSNVPROC)(GLsizei, GLuint *); }
# 7645 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERDVNVPROC)(GLenum, GLuint, GLenum, GLdouble *); }
# 7646 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMPARAMETERFVNVPROC)(GLenum, GLuint, GLenum, GLfloat *); }
# 7647 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMSTRINGNVPROC)(GLuint, GLenum, GLubyte *); }
# 7648 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETPROGRAMIVNVPROC)(GLuint, GLenum, GLint *); }
# 7649 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTRACKMATRIXIVNVPROC)(GLenum, GLuint, GLenum, GLint *); }
# 7650 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBPOINTERVNVPROC)(GLuint, GLenum, GLvoid **); }
# 7651 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBDVNVPROC)(GLuint, GLenum, GLdouble *); }
# 7652 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBFVNVPROC)(GLuint, GLenum, GLfloat *); }
# 7653 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETVERTEXATTRIBIVNVPROC)(GLuint, GLenum, GLint *); }
# 7654 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISPROGRAMNVPROC)(GLuint); }
# 7655 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLLOADPROGRAMNVPROC)(GLenum, GLuint, GLsizei, const GLubyte *); }
# 7656 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DNVPROC)(GLenum, GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 7657 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4DVNVPROC)(GLenum, GLuint, const GLdouble *); }
# 7658 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FNVPROC)(GLenum, GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 7659 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMPARAMETER4FVNVPROC)(GLenum, GLuint, const GLfloat *); }
# 7660 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4DVNVPROC)(GLenum, GLuint, GLuint, const GLdouble *); }
# 7661 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPROGRAMPARAMETERS4FVNVPROC)(GLenum, GLuint, GLuint, const GLfloat *); }
# 7662 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREQUESTRESIDENTPROGRAMSNVPROC)(GLsizei, GLuint *); }
# 7663 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTRACKMATRIXNVPROC)(GLenum, GLuint, GLenum, GLenum); }
# 7664 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DNVPROC)(GLuint, GLdouble); }
# 7665 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1DVNVPROC)(GLuint, const GLdouble *); }
# 7666 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FNVPROC)(GLuint, GLfloat); }
# 7667 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1FVNVPROC)(GLuint, const GLfloat *); }
# 7668 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SNVPROC)(GLuint, GLshort); }
# 7669 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB1SVNVPROC)(GLuint, const GLshort *); }
# 7670 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DNVPROC)(GLuint, GLdouble, GLdouble); }
# 7671 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2DVNVPROC)(GLuint, const GLdouble *); }
# 7672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FNVPROC)(GLuint, GLfloat, GLfloat); }
# 7673 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2FVNVPROC)(GLuint, const GLfloat *); }
# 7674 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SNVPROC)(GLuint, GLshort, GLshort); }
# 7675 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB2SVNVPROC)(GLuint, const GLshort *); }
# 7676 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble); }
# 7677 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3DVNVPROC)(GLuint, const GLdouble *); }
# 7678 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 7679 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3FVNVPROC)(GLuint, const GLfloat *); }
# 7680 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SNVPROC)(GLuint, GLshort, GLshort, GLshort); }
# 7681 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB3SVNVPROC)(GLuint, const GLshort *); }
# 7682 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DNVPROC)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble); }
# 7683 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4DVNVPROC)(GLuint, const GLdouble *); }
# 7684 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FNVPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat); }
# 7685 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4FVNVPROC)(GLuint, const GLfloat *); }
# 7686 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SNVPROC)(GLuint, GLshort, GLshort, GLshort, GLshort); }
# 7687 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4SVNVPROC)(GLuint, const GLshort *); }
# 7688 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBNVPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte); }
# 7689 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIB4UBVNVPROC)(GLuint, const GLubyte *); }
# 7690 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBPOINTERNVPROC)(GLuint, GLint, GLenum, GLsizei, const void *); }
# 7691 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 7692 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 7693 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS1SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 7694 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 7695 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 7696 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS2SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 7697 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 7698 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 7699 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS3SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 7700 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4DVNVPROC)(GLuint, GLsizei, const GLdouble *); }
# 7701 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4FVNVPROC)(GLuint, GLsizei, const GLfloat *); }
# 7702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4SVNVPROC)(GLuint, GLsizei, const GLshort *); }
# 7703 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLVERTEXATTRIBS4UBVNVPROC)(GLuint, GLsizei, const GLubyte *); }
# 7872 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLEARDEPTHFOESPROC)(GLclampd); }
# 7873 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCLIPPLANEFOESPROC)(GLenum, const GLfloat *); }
# 7874 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDEPTHRANGEFOESPROC)(GLclampf, GLclampf); }
# 7875 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRUSTUMFOESPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 7876 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCLIPPLANEFOESPROC)(GLenum, GLfloat *); }
# 7877 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLORTHOFOESPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8044 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDETAILTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
# 8045 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETDETAILTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 8059 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFOGFUNCSGISPROC)(GLsizei, const GLfloat *); }
# 8060 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFOGFUNCSGISPROC)(GLfloat *); }
# 8104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSAMPLEMASKSGISPROC)(GLclampf, GLboolean); }
# 8105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSAMPLEPATTERNSGISPROC)(GLenum); }
# 8128 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETSHARPENTEXFUNCSGISPROC)(GLenum, GLfloat *); }
# 8129 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSHARPENTEXFUNCSGISPROC)(GLenum, GLsizei, const GLfloat *); }
# 8143 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXIMAGE4DSGISPROC)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *); }
# 8144 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXSUBIMAGE4DSGISPROC)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *); }
# 8180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLfloat *); }
# 8181 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXFILTERFUNCSGISPROC)(GLenum, GLenum, GLsizei, const GLfloat *); }
# 8220 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLASYNCMARKERSGIXPROC)(GLuint); }
# 8221 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLDELETEASYNCMARKERSSGIXPROC)(GLuint, GLsizei); }
# 8222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLFINISHASYNCSGIXPROC)(GLuint *); }
# 8223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLuint (*PFNGLGENASYNCMARKERSSGIXPROC)(GLsizei); }
# 8224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLboolean (*PFNGLISASYNCMARKERSGIXPROC)(GLuint); }
# 8225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef GLint (*PFNGLPOLLASYNCSGIXPROC)(GLuint *); }
# 8305 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFLUSHRASTERSGIXPROC)(void); }
# 8334 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXTUREFOGSGIXPROC)(GLenum); }
# 8347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTCOLORMATERIALSGIXPROC)(GLenum, GLenum); }
# 8348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFSGIXPROC)(GLenum, GLfloat); }
# 8349 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)(GLenum, GLfloat *); }
# 8350 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELISGIXPROC)(GLenum, GLint); }
# 8351 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)(GLenum, GLint *); }
# 8352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFSGIXPROC)(GLenum, GLenum, GLfloat); }
# 8353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
# 8354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTISGIXPROC)(GLenum, GLenum, GLint); }
# 8355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, GLint *); }
# 8356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFSGIXPROC)(GLenum, GLenum, const GLfloat); }
# 8357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
# 8358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALISGIXPROC)(GLenum, GLenum, const GLint); }
# 8359 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, const GLint *); }
# 8360 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTFVSGIXPROC)(GLenum, GLenum, GLfloat *); }
# 8361 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTLIGHTIVSGIXPROC)(GLenum, GLenum, GLint *); }
# 8362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALFVSGIXPROC)(GLenum, GLenum, const GLfloat *); }
# 8363 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETFRAGMENTMATERIALIVSGIXPROC)(GLenum, GLenum, const GLint *); }
# 8392 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFRAMEZOOMSGIXPROC)(GLint); }
# 8434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLPIXELTEXGENSGIXPROC)(GLenum); }
# 8456 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREFERENCEPLANESGIXPROC)(const GLdouble *); }
# 8509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFSGIXPROC)(GLenum, GLfloat); }
# 8510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSPRITEPARAMETERFVSGIXPROC)(GLenum, GLfloat *); }
# 8511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSPRITEPARAMETERISGIXPROC)(GLenum, GLint); }
# 8512 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLSPRITEPARAMETERIVSGIXPROC)(GLenum, GLint *); }
# 8528 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTAGSAMPLEBUFFERSGIXPROC)(void); }
# 8706 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, const GLfloat *); }
# 8707 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, const GLint *); }
# 8708 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLORTABLESGIPROC)(GLenum, GLenum, GLsizei, GLenum, GLenum, const void *); }
# 8709 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOPYCOLORTABLESGIPROC)(GLenum, GLenum, GLint, GLint, GLsizei); }
# 8710 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)(GLenum, GLenum, GLfloat *); }
# 8711 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)(GLenum, GLenum, GLint *); }
# 8712 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGETCOLORTABLESGIPROC)(GLenum, GLenum, GLenum, void *); }
# 8746 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLFINISHTEXTURESUNXPROC)(void); }
# 8773 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORBSUNPROC)(GLbyte); }
# 8774 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORDSUNPROC)(GLdouble); }
# 8775 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORFSUNPROC)(GLfloat); }
# 8776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORISUNPROC)(GLint); }
# 8777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORSSUNPROC)(GLshort); }
# 8778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUBSUNPROC)(GLubyte); }
# 8779 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUISUNPROC)(GLuint); }
# 8780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLGLOBALALPHAFACTORUSSUNPROC)(GLushort); }
# 8812 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREADVIDEOPIXELSSUNPROC)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *); }
# 8854 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEPOINTERSUNPROC)(GLenum, GLsizei, const void *); }
# 8855 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBSUNPROC)(GLubyte); }
# 8856 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUBVSUNPROC)(const GLubyte *); }
# 8857 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUISUNPROC)(GLuint); }
# 8858 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVSUNPROC)(const GLuint *); }
# 8859 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSSUNPROC)(GLushort); }
# 8860 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUSVSUNPROC)(const GLushort *); }
# 8879 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8880 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8881 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8882 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 8883 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat); }
# 8884 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX2FVSUNPROC)(const GLubyte *, const GLfloat *); }
# 8885 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FSUNPROC)(GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 8886 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLCOLOR4UBVERTEX3FVSUNPROC)(const GLubyte *, const GLfloat *); }
# 8887 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8888 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8889 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8890 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 8891 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8892 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8893 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 8894 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)(const GLuint *, const GLubyte *, const GLfloat *); }
# 8895 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8896 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 8897 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8898 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8899 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8900 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8901 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8902 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *, const GLfloat *); }
# 8903 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)(GLuint, GLfloat, GLfloat, GLfloat); }
# 8904 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)(const GLuint *, const GLfloat *); }
# 8905 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8906 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 8907 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8908 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8909 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)(GLfloat, GLfloat, GLubyte, GLubyte, GLubyte, GLubyte, GLfloat, GLfloat, GLfloat); }
# 8910 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)(const GLfloat *, const GLubyte *, const GLfloat *); }
# 8911 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8912 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *); }
# 8913 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8914 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD2FVERTEX3FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8915 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8916 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *, const GLfloat *, const GLfloat *); }
# 8917 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FSUNPROC)(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat); }
# 8918 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLTEXCOORD4FVERTEX4FVSUNPROC)(const GLfloat *, const GLfloat *); }
# 8993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { typedef void (*PFNGLADDSWAPHINTRECTWINPROC)(GLint, GLint, GLsizei, GLsizei); }
# 9020 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYTEXSUBIMAGE3DPROC __glewCopyTexSubImage3D; }
# 9021 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWRANGEELEMENTSPROC __glewDrawRangeElements; }
# 9022 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXIMAGE3DPROC __glewTexImage3D; }
# 9023 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXSUBIMAGE3DPROC __glewTexSubImage3D; }
# 9025 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLACTIVETEXTUREPROC __glewActiveTexture; }
# 9026 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLIENTACTIVETEXTUREPROC __glewClientActiveTexture; }
# 9027 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXIMAGE1DPROC __glewCompressedTexImage1D; }
# 9028 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXIMAGE2DPROC __glewCompressedTexImage2D; }
# 9029 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXIMAGE3DPROC __glewCompressedTexImage3D; }
# 9030 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC __glewCompressedTexSubImage1D; }
# 9031 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC __glewCompressedTexSubImage2D; }
# 9032 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC __glewCompressedTexSubImage3D; }
# 9033 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOMPRESSEDTEXIMAGEPROC __glewGetCompressedTexImage; }
# 9034 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLOADTRANSPOSEMATRIXDPROC __glewLoadTransposeMatrixd; }
# 9035 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLOADTRANSPOSEMATRIXFPROC __glewLoadTransposeMatrixf; }
# 9036 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTTRANSPOSEMATRIXDPROC __glewMultTransposeMatrixd; }
# 9037 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTTRANSPOSEMATRIXFPROC __glewMultTransposeMatrixf; }
# 9038 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1DPROC __glewMultiTexCoord1d; }
# 9039 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1DVPROC __glewMultiTexCoord1dv; }
# 9040 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1FPROC __glewMultiTexCoord1f; }
# 9041 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1FVPROC __glewMultiTexCoord1fv; }
# 9042 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1IPROC __glewMultiTexCoord1i; }
# 9043 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1IVPROC __glewMultiTexCoord1iv; }
# 9044 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1SPROC __glewMultiTexCoord1s; }
# 9045 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1SVPROC __glewMultiTexCoord1sv; }
# 9046 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2DPROC __glewMultiTexCoord2d; }
# 9047 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2DVPROC __glewMultiTexCoord2dv; }
# 9048 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2FPROC __glewMultiTexCoord2f; }
# 9049 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2FVPROC __glewMultiTexCoord2fv; }
# 9050 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2IPROC __glewMultiTexCoord2i; }
# 9051 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2IVPROC __glewMultiTexCoord2iv; }
# 9052 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2SPROC __glewMultiTexCoord2s; }
# 9053 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2SVPROC __glewMultiTexCoord2sv; }
# 9054 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3DPROC __glewMultiTexCoord3d; }
# 9055 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3DVPROC __glewMultiTexCoord3dv; }
# 9056 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3FPROC __glewMultiTexCoord3f; }
# 9057 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3FVPROC __glewMultiTexCoord3fv; }
# 9058 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3IPROC __glewMultiTexCoord3i; }
# 9059 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3IVPROC __glewMultiTexCoord3iv; }
# 9060 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3SPROC __glewMultiTexCoord3s; }
# 9061 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3SVPROC __glewMultiTexCoord3sv; }
# 9062 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4DPROC __glewMultiTexCoord4d; }
# 9063 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4DVPROC __glewMultiTexCoord4dv; }
# 9064 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4FPROC __glewMultiTexCoord4f; }
# 9065 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4FVPROC __glewMultiTexCoord4fv; }
# 9066 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4IPROC __glewMultiTexCoord4i; }
# 9067 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4IVPROC __glewMultiTexCoord4iv; }
# 9068 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4SPROC __glewMultiTexCoord4s; }
# 9069 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4SVPROC __glewMultiTexCoord4sv; }
# 9070 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSAMPLECOVERAGEPROC __glewSampleCoverage; }
# 9072 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDCOLORPROC __glewBlendColor; }
# 9073 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDEQUATIONPROC __glewBlendEquation; }
# 9074 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDFUNCSEPARATEPROC __glewBlendFuncSeparate; }
# 9075 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDPOINTERPROC __glewFogCoordPointer; }
# 9076 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDDPROC __glewFogCoordd; }
# 9077 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDDVPROC __glewFogCoorddv; }
# 9078 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDFPROC __glewFogCoordf; }
# 9079 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDFVPROC __glewFogCoordfv; }
# 9080 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIDRAWARRAYSPROC __glewMultiDrawArrays; }
# 9081 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIDRAWELEMENTSPROC __glewMultiDrawElements; }
# 9082 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERFPROC __glewPointParameterf; }
# 9083 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERFVPROC __glewPointParameterfv; }
# 9084 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3BPROC __glewSecondaryColor3b; }
# 9085 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3BVPROC __glewSecondaryColor3bv; }
# 9086 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3DPROC __glewSecondaryColor3d; }
# 9087 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3DVPROC __glewSecondaryColor3dv; }
# 9088 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3FPROC __glewSecondaryColor3f; }
# 9089 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3FVPROC __glewSecondaryColor3fv; }
# 9090 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3IPROC __glewSecondaryColor3i; }
# 9091 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3IVPROC __glewSecondaryColor3iv; }
# 9092 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3SPROC __glewSecondaryColor3s; }
# 9093 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3SVPROC __glewSecondaryColor3sv; }
# 9094 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UBPROC __glewSecondaryColor3ub; }
# 9095 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UBVPROC __glewSecondaryColor3ubv; }
# 9096 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UIPROC __glewSecondaryColor3ui; }
# 9097 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UIVPROC __glewSecondaryColor3uiv; }
# 9098 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3USPROC __glewSecondaryColor3us; }
# 9099 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3USVPROC __glewSecondaryColor3usv; }
# 9100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLORPOINTERPROC __glewSecondaryColorPointer; }
# 9101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2DPROC __glewWindowPos2d; }
# 9102 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2DVPROC __glewWindowPos2dv; }
# 9103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2FPROC __glewWindowPos2f; }
# 9104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2FVPROC __glewWindowPos2fv; }
# 9105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2IPROC __glewWindowPos2i; }
# 9106 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2IVPROC __glewWindowPos2iv; }
# 9107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2SPROC __glewWindowPos2s; }
# 9108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2SVPROC __glewWindowPos2sv; }
# 9109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3DPROC __glewWindowPos3d; }
# 9110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3DVPROC __glewWindowPos3dv; }
# 9111 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3FPROC __glewWindowPos3f; }
# 9112 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3FVPROC __glewWindowPos3fv; }
# 9113 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3IPROC __glewWindowPos3i; }
# 9114 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3IVPROC __glewWindowPos3iv; }
# 9115 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3SPROC __glewWindowPos3s; }
# 9116 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3SVPROC __glewWindowPos3sv; }
# 9118 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBEGINQUERYPROC __glewBeginQuery; }
# 9119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDBUFFERPROC __glewBindBuffer; }
# 9120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBUFFERDATAPROC __glewBufferData; }
# 9121 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBUFFERSUBDATAPROC __glewBufferSubData; }
# 9122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEBUFFERSPROC __glewDeleteBuffers; }
# 9123 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEQUERIESPROC __glewDeleteQueries; }
# 9124 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENDQUERYPROC __glewEndQuery; }
# 9125 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENBUFFERSPROC __glewGenBuffers; }
# 9126 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENQUERIESPROC __glewGenQueries; }
# 9127 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETBUFFERPARAMETERIVPROC __glewGetBufferParameteriv; }
# 9128 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETBUFFERPOINTERVPROC __glewGetBufferPointerv; }
# 9129 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETBUFFERSUBDATAPROC __glewGetBufferSubData; }
# 9130 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYOBJECTIVPROC __glewGetQueryObjectiv; }
# 9131 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYOBJECTUIVPROC __glewGetQueryObjectuiv; }
# 9132 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYIVPROC __glewGetQueryiv; }
# 9133 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISBUFFERPROC __glewIsBuffer; }
# 9134 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISQUERYPROC __glewIsQuery; }
# 9135 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMAPBUFFERPROC __glewMapBuffer; }
# 9136 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNMAPBUFFERPROC __glewUnmapBuffer; }
# 9138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLATTACHSHADERPROC __glewAttachShader; }
# 9139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDATTRIBLOCATIONPROC __glewBindAttribLocation; }
# 9140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDEQUATIONSEPARATEPROC __glewBlendEquationSeparate; }
# 9141 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPILESHADERPROC __glewCompileShader; }
# 9142 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCREATEPROGRAMPROC __glewCreateProgram; }
# 9143 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCREATESHADERPROC __glewCreateShader; }
# 9144 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEPROGRAMPROC __glewDeleteProgram; }
# 9145 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETESHADERPROC __glewDeleteShader; }
# 9146 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDETACHSHADERPROC __glewDetachShader; }
# 9147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDISABLEVERTEXATTRIBARRAYPROC __glewDisableVertexAttribArray; }
# 9148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWBUFFERSPROC __glewDrawBuffers; }
# 9149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENABLEVERTEXATTRIBARRAYPROC __glewEnableVertexAttribArray; }
# 9150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETACTIVEATTRIBPROC __glewGetActiveAttrib; }
# 9151 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETACTIVEUNIFORMPROC __glewGetActiveUniform; }
# 9152 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETATTACHEDSHADERSPROC __glewGetAttachedShaders; }
# 9153 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETATTRIBLOCATIONPROC __glewGetAttribLocation; }
# 9154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMINFOLOGPROC __glewGetProgramInfoLog; }
# 9155 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMIVPROC __glewGetProgramiv; }
# 9156 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETSHADERINFOLOGPROC __glewGetShaderInfoLog; }
# 9157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETSHADERSOURCEPROC __glewGetShaderSource; }
# 9158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETSHADERIVPROC __glewGetShaderiv; }
# 9159 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMLOCATIONPROC __glewGetUniformLocation; }
# 9160 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMFVPROC __glewGetUniformfv; }
# 9161 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMIVPROC __glewGetUniformiv; }
# 9162 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBPOINTERVPROC __glewGetVertexAttribPointerv; }
# 9163 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBDVPROC __glewGetVertexAttribdv; }
# 9164 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBFVPROC __glewGetVertexAttribfv; }
# 9165 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBIVPROC __glewGetVertexAttribiv; }
# 9166 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISPROGRAMPROC __glewIsProgram; }
# 9167 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISSHADERPROC __glewIsShader; }
# 9168 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLINKPROGRAMPROC __glewLinkProgram; }
# 9169 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSHADERSOURCEPROC __glewShaderSource; }
# 9170 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSTENCILFUNCSEPARATEPROC __glewStencilFuncSeparate; }
# 9171 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSTENCILMASKSEPARATEPROC __glewStencilMaskSeparate; }
# 9172 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSTENCILOPSEPARATEPROC __glewStencilOpSeparate; }
# 9173 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1FPROC __glewUniform1f; }
# 9174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1FVPROC __glewUniform1fv; }
# 9175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1IPROC __glewUniform1i; }
# 9176 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1IVPROC __glewUniform1iv; }
# 9177 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2FPROC __glewUniform2f; }
# 9178 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2FVPROC __glewUniform2fv; }
# 9179 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2IPROC __glewUniform2i; }
# 9180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2IVPROC __glewUniform2iv; }
# 9181 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3FPROC __glewUniform3f; }
# 9182 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3FVPROC __glewUniform3fv; }
# 9183 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3IPROC __glewUniform3i; }
# 9184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3IVPROC __glewUniform3iv; }
# 9185 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4FPROC __glewUniform4f; }
# 9186 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4FVPROC __glewUniform4fv; }
# 9187 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4IPROC __glewUniform4i; }
# 9188 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4IVPROC __glewUniform4iv; }
# 9189 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX2FVPROC __glewUniformMatrix2fv; }
# 9190 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX3FVPROC __glewUniformMatrix3fv; }
# 9191 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX4FVPROC __glewUniformMatrix4fv; }
# 9192 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUSEPROGRAMPROC __glewUseProgram; }
# 9193 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVALIDATEPROGRAMPROC __glewValidateProgram; }
# 9194 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1DPROC __glewVertexAttrib1d; }
# 9195 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1DVPROC __glewVertexAttrib1dv; }
# 9196 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1FPROC __glewVertexAttrib1f; }
# 9197 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1FVPROC __glewVertexAttrib1fv; }
# 9198 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1SPROC __glewVertexAttrib1s; }
# 9199 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1SVPROC __glewVertexAttrib1sv; }
# 9200 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2DPROC __glewVertexAttrib2d; }
# 9201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2DVPROC __glewVertexAttrib2dv; }
# 9202 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2FPROC __glewVertexAttrib2f; }
# 9203 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2FVPROC __glewVertexAttrib2fv; }
# 9204 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2SPROC __glewVertexAttrib2s; }
# 9205 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2SVPROC __glewVertexAttrib2sv; }
# 9206 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3DPROC __glewVertexAttrib3d; }
# 9207 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3DVPROC __glewVertexAttrib3dv; }
# 9208 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3FPROC __glewVertexAttrib3f; }
# 9209 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3FVPROC __glewVertexAttrib3fv; }
# 9210 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3SPROC __glewVertexAttrib3s; }
# 9211 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3SVPROC __glewVertexAttrib3sv; }
# 9212 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NBVPROC __glewVertexAttrib4Nbv; }
# 9213 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NIVPROC __glewVertexAttrib4Niv; }
# 9214 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NSVPROC __glewVertexAttrib4Nsv; }
# 9215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUBPROC __glewVertexAttrib4Nub; }
# 9216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUBVPROC __glewVertexAttrib4Nubv; }
# 9217 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUIVPROC __glewVertexAttrib4Nuiv; }
# 9218 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUSVPROC __glewVertexAttrib4Nusv; }
# 9219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4BVPROC __glewVertexAttrib4bv; }
# 9220 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4DPROC __glewVertexAttrib4d; }
# 9221 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4DVPROC __glewVertexAttrib4dv; }
# 9222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4FPROC __glewVertexAttrib4f; }
# 9223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4FVPROC __glewVertexAttrib4fv; }
# 9224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4IVPROC __glewVertexAttrib4iv; }
# 9225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4SPROC __glewVertexAttrib4s; }
# 9226 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4SVPROC __glewVertexAttrib4sv; }
# 9227 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4UBVPROC __glewVertexAttrib4ubv; }
# 9228 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4UIVPROC __glewVertexAttrib4uiv; }
# 9229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4USVPROC __glewVertexAttrib4usv; }
# 9230 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBPOINTERPROC __glewVertexAttribPointer; }
# 9232 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX2X3FVPROC __glewUniformMatrix2x3fv; }
# 9233 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX2X4FVPROC __glewUniformMatrix2x4fv; }
# 9234 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX3X2FVPROC __glewUniformMatrix3x2fv; }
# 9235 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX3X4FVPROC __glewUniformMatrix3x4fv; }
# 9236 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX4X2FVPROC __glewUniformMatrix4x2fv; }
# 9237 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX4X3FVPROC __glewUniformMatrix4x3fv; }
# 9239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTBUFFERMASK3DFXPROC __glewTbufferMask3DFX; }
# 9241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWELEMENTARRAYAPPLEPROC __glewDrawElementArrayAPPLE; }
# 9242 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC __glewDrawRangeElementArrayAPPLE; }
# 9243 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLELEMENTPOINTERAPPLEPROC __glewElementPointerAPPLE; }
# 9244 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC __glewMultiDrawElementArrayAPPLE; }
# 9245 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC __glewMultiDrawRangeElementArrayAPPLE; }
# 9247 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEFENCESAPPLEPROC __glewDeleteFencesAPPLE; }
# 9248 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFINISHFENCEAPPLEPROC __glewFinishFenceAPPLE; }
# 9249 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFINISHOBJECTAPPLEPROC __glewFinishObjectAPPLE; }
# 9250 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENFENCESAPPLEPROC __glewGenFencesAPPLE; }
# 9251 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISFENCEAPPLEPROC __glewIsFenceAPPLE; }
# 9252 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSETFENCEAPPLEPROC __glewSetFenceAPPLE; }
# 9253 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTESTFENCEAPPLEPROC __glewTestFenceAPPLE; }
# 9254 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTESTOBJECTAPPLEPROC __glewTestObjectAPPLE; }
# 9256 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC __glewGetTexParameterPointervAPPLE; }
# 9257 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXTURERANGEAPPLEPROC __glewTextureRangeAPPLE; }
# 9259 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDVERTEXARRAYAPPLEPROC __glewBindVertexArrayAPPLE; }
# 9260 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEVERTEXARRAYSAPPLEPROC __glewDeleteVertexArraysAPPLE; }
# 9261 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENVERTEXARRAYSAPPLEPROC __glewGenVertexArraysAPPLE; }
# 9262 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISVERTEXARRAYAPPLEPROC __glewIsVertexArrayAPPLE; }
# 9264 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC __glewFlushVertexArrayRangeAPPLE; }
# 9265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXARRAYPARAMETERIAPPLEPROC __glewVertexArrayParameteriAPPLE; }
# 9266 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXARRAYRANGEAPPLEPROC __glewVertexArrayRangeAPPLE; }
# 9268 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLAMPCOLORARBPROC __glewClampColorARB; }
# 9270 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWBUFFERSARBPROC __glewDrawBuffersARB; }
# 9272 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORSUBTABLEPROC __glewColorSubTable; }
# 9273 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORTABLEPROC __glewColorTable; }
# 9274 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORTABLEPARAMETERFVPROC __glewColorTableParameterfv; }
# 9275 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORTABLEPARAMETERIVPROC __glewColorTableParameteriv; }
# 9276 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONFILTER1DPROC __glewConvolutionFilter1D; }
# 9277 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONFILTER2DPROC __glewConvolutionFilter2D; }
# 9278 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERFPROC __glewConvolutionParameterf; }
# 9279 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERFVPROC __glewConvolutionParameterfv; }
# 9280 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERIPROC __glewConvolutionParameteri; }
# 9281 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERIVPROC __glewConvolutionParameteriv; }
# 9282 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCOLORSUBTABLEPROC __glewCopyColorSubTable; }
# 9283 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCOLORTABLEPROC __glewCopyColorTable; }
# 9284 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCONVOLUTIONFILTER1DPROC __glewCopyConvolutionFilter1D; }
# 9285 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCONVOLUTIONFILTER2DPROC __glewCopyConvolutionFilter2D; }
# 9286 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEPROC __glewGetColorTable; }
# 9287 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEPARAMETERFVPROC __glewGetColorTableParameterfv; }
# 9288 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEPARAMETERIVPROC __glewGetColorTableParameteriv; }
# 9289 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCONVOLUTIONFILTERPROC __glewGetConvolutionFilter; }
# 9290 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCONVOLUTIONPARAMETERFVPROC __glewGetConvolutionParameterfv; }
# 9291 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCONVOLUTIONPARAMETERIVPROC __glewGetConvolutionParameteriv; }
# 9292 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETHISTOGRAMPROC __glewGetHistogram; }
# 9293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETHISTOGRAMPARAMETERFVPROC __glewGetHistogramParameterfv; }
# 9294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETHISTOGRAMPARAMETERIVPROC __glewGetHistogramParameteriv; }
# 9295 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMINMAXPROC __glewGetMinmax; }
# 9296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMINMAXPARAMETERFVPROC __glewGetMinmaxParameterfv; }
# 9297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMINMAXPARAMETERIVPROC __glewGetMinmaxParameteriv; }
# 9298 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETSEPARABLEFILTERPROC __glewGetSeparableFilter; }
# 9299 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLHISTOGRAMPROC __glewHistogram; }
# 9300 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMINMAXPROC __glewMinmax; }
# 9301 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRESETHISTOGRAMPROC __glewResetHistogram; }
# 9302 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRESETMINMAXPROC __glewResetMinmax; }
# 9303 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSEPARABLEFILTER2DPROC __glewSeparableFilter2D; }
# 9305 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCURRENTPALETTEMATRIXARBPROC __glewCurrentPaletteMatrixARB; }
# 9306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMATRIXINDEXPOINTERARBPROC __glewMatrixIndexPointerARB; }
# 9307 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMATRIXINDEXUBVARBPROC __glewMatrixIndexubvARB; }
# 9308 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMATRIXINDEXUIVARBPROC __glewMatrixIndexuivARB; }
# 9309 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMATRIXINDEXUSVARBPROC __glewMatrixIndexusvARB; }
# 9311 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSAMPLECOVERAGEARBPROC __glewSampleCoverageARB; }
# 9313 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLACTIVETEXTUREARBPROC __glewActiveTextureARB; }
# 9314 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLIENTACTIVETEXTUREARBPROC __glewClientActiveTextureARB; }
# 9315 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1DARBPROC __glewMultiTexCoord1dARB; }
# 9316 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1DVARBPROC __glewMultiTexCoord1dvARB; }
# 9317 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1FARBPROC __glewMultiTexCoord1fARB; }
# 9318 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1FVARBPROC __glewMultiTexCoord1fvARB; }
# 9319 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1IARBPROC __glewMultiTexCoord1iARB; }
# 9320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1IVARBPROC __glewMultiTexCoord1ivARB; }
# 9321 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1SARBPROC __glewMultiTexCoord1sARB; }
# 9322 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1SVARBPROC __glewMultiTexCoord1svARB; }
# 9323 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2DARBPROC __glewMultiTexCoord2dARB; }
# 9324 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2DVARBPROC __glewMultiTexCoord2dvARB; }
# 9325 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2FARBPROC __glewMultiTexCoord2fARB; }
# 9326 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2FVARBPROC __glewMultiTexCoord2fvARB; }
# 9327 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2IARBPROC __glewMultiTexCoord2iARB; }
# 9328 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2IVARBPROC __glewMultiTexCoord2ivARB; }
# 9329 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2SARBPROC __glewMultiTexCoord2sARB; }
# 9330 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2SVARBPROC __glewMultiTexCoord2svARB; }
# 9331 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3DARBPROC __glewMultiTexCoord3dARB; }
# 9332 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3DVARBPROC __glewMultiTexCoord3dvARB; }
# 9333 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3FARBPROC __glewMultiTexCoord3fARB; }
# 9334 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3FVARBPROC __glewMultiTexCoord3fvARB; }
# 9335 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3IARBPROC __glewMultiTexCoord3iARB; }
# 9336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3IVARBPROC __glewMultiTexCoord3ivARB; }
# 9337 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3SARBPROC __glewMultiTexCoord3sARB; }
# 9338 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3SVARBPROC __glewMultiTexCoord3svARB; }
# 9339 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4DARBPROC __glewMultiTexCoord4dARB; }
# 9340 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4DVARBPROC __glewMultiTexCoord4dvARB; }
# 9341 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4FARBPROC __glewMultiTexCoord4fARB; }
# 9342 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4FVARBPROC __glewMultiTexCoord4fvARB; }
# 9343 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4IARBPROC __glewMultiTexCoord4iARB; }
# 9344 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4IVARBPROC __glewMultiTexCoord4ivARB; }
# 9345 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4SARBPROC __glewMultiTexCoord4sARB; }
# 9346 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4SVARBPROC __glewMultiTexCoord4svARB; }
# 9348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBEGINQUERYARBPROC __glewBeginQueryARB; }
# 9349 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEQUERIESARBPROC __glewDeleteQueriesARB; }
# 9350 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENDQUERYARBPROC __glewEndQueryARB; }
# 9351 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENQUERIESARBPROC __glewGenQueriesARB; }
# 9352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYOBJECTIVARBPROC __glewGetQueryObjectivARB; }
# 9353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYOBJECTUIVARBPROC __glewGetQueryObjectuivARB; }
# 9354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYIVARBPROC __glewGetQueryivARB; }
# 9355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISQUERYARBPROC __glewIsQueryARB; }
# 9357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERFARBPROC __glewPointParameterfARB; }
# 9358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERFVARBPROC __glewPointParameterfvARB; }
# 9360 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLATTACHOBJECTARBPROC __glewAttachObjectARB; }
# 9361 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPILESHADERARBPROC __glewCompileShaderARB; }
# 9362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCREATEPROGRAMOBJECTARBPROC __glewCreateProgramObjectARB; }
# 9363 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCREATESHADEROBJECTARBPROC __glewCreateShaderObjectARB; }
# 9364 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEOBJECTARBPROC __glewDeleteObjectARB; }
# 9365 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDETACHOBJECTARBPROC __glewDetachObjectARB; }
# 9366 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETACTIVEUNIFORMARBPROC __glewGetActiveUniformARB; }
# 9367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETATTACHEDOBJECTSARBPROC __glewGetAttachedObjectsARB; }
# 9368 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETHANDLEARBPROC __glewGetHandleARB; }
# 9369 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETINFOLOGARBPROC __glewGetInfoLogARB; }
# 9370 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETOBJECTPARAMETERFVARBPROC __glewGetObjectParameterfvARB; }
# 9371 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETOBJECTPARAMETERIVARBPROC __glewGetObjectParameterivARB; }
# 9372 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETSHADERSOURCEARBPROC __glewGetShaderSourceARB; }
# 9373 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMLOCATIONARBPROC __glewGetUniformLocationARB; }
# 9374 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMFVARBPROC __glewGetUniformfvARB; }
# 9375 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMIVARBPROC __glewGetUniformivARB; }
# 9376 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLINKPROGRAMARBPROC __glewLinkProgramARB; }
# 9377 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSHADERSOURCEARBPROC __glewShaderSourceARB; }
# 9378 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1FARBPROC __glewUniform1fARB; }
# 9379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1FVARBPROC __glewUniform1fvARB; }
# 9380 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1IARBPROC __glewUniform1iARB; }
# 9381 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1IVARBPROC __glewUniform1ivARB; }
# 9382 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2FARBPROC __glewUniform2fARB; }
# 9383 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2FVARBPROC __glewUniform2fvARB; }
# 9384 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2IARBPROC __glewUniform2iARB; }
# 9385 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2IVARBPROC __glewUniform2ivARB; }
# 9386 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3FARBPROC __glewUniform3fARB; }
# 9387 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3FVARBPROC __glewUniform3fvARB; }
# 9388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3IARBPROC __glewUniform3iARB; }
# 9389 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3IVARBPROC __glewUniform3ivARB; }
# 9390 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4FARBPROC __glewUniform4fARB; }
# 9391 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4FVARBPROC __glewUniform4fvARB; }
# 9392 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4IARBPROC __glewUniform4iARB; }
# 9393 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4IVARBPROC __glewUniform4ivARB; }
# 9394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX2FVARBPROC __glewUniformMatrix2fvARB; }
# 9395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX3FVARBPROC __glewUniformMatrix3fvARB; }
# 9396 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMMATRIX4FVARBPROC __glewUniformMatrix4fvARB; }
# 9397 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUSEPROGRAMOBJECTARBPROC __glewUseProgramObjectARB; }
# 9398 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVALIDATEPROGRAMARBPROC __glewValidateProgramARB; }
# 9400 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXIMAGE1DARBPROC __glewCompressedTexImage1DARB; }
# 9401 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXIMAGE2DARBPROC __glewCompressedTexImage2DARB; }
# 9402 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXIMAGE3DARBPROC __glewCompressedTexImage3DARB; }
# 9403 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC __glewCompressedTexSubImage1DARB; }
# 9404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC __glewCompressedTexSubImage2DARB; }
# 9405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC __glewCompressedTexSubImage3DARB; }
# 9406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOMPRESSEDTEXIMAGEARBPROC __glewGetCompressedTexImageARB; }
# 9408 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLOADTRANSPOSEMATRIXDARBPROC __glewLoadTransposeMatrixdARB; }
# 9409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLOADTRANSPOSEMATRIXFARBPROC __glewLoadTransposeMatrixfARB; }
# 9410 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTTRANSPOSEMATRIXDARBPROC __glewMultTransposeMatrixdARB; }
# 9411 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTTRANSPOSEMATRIXFARBPROC __glewMultTransposeMatrixfARB; }
# 9413 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXBLENDARBPROC __glewVertexBlendARB; }
# 9414 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTPOINTERARBPROC __glewWeightPointerARB; }
# 9415 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTBVARBPROC __glewWeightbvARB; }
# 9416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTDVARBPROC __glewWeightdvARB; }
# 9417 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTFVARBPROC __glewWeightfvARB; }
# 9418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTIVARBPROC __glewWeightivARB; }
# 9419 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTSVARBPROC __glewWeightsvARB; }
# 9420 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTUBVARBPROC __glewWeightubvARB; }
# 9421 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTUIVARBPROC __glewWeightuivARB; }
# 9422 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWEIGHTUSVARBPROC __glewWeightusvARB; }
# 9424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDBUFFERARBPROC __glewBindBufferARB; }
# 9425 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBUFFERDATAARBPROC __glewBufferDataARB; }
# 9426 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBUFFERSUBDATAARBPROC __glewBufferSubDataARB; }
# 9427 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEBUFFERSARBPROC __glewDeleteBuffersARB; }
# 9428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENBUFFERSARBPROC __glewGenBuffersARB; }
# 9429 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETBUFFERPARAMETERIVARBPROC __glewGetBufferParameterivARB; }
# 9430 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETBUFFERPOINTERVARBPROC __glewGetBufferPointervARB; }
# 9431 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETBUFFERSUBDATAARBPROC __glewGetBufferSubDataARB; }
# 9432 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISBUFFERARBPROC __glewIsBufferARB; }
# 9433 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMAPBUFFERARBPROC __glewMapBufferARB; }
# 9434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNMAPBUFFERARBPROC __glewUnmapBufferARB; }
# 9436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDPROGRAMARBPROC __glewBindProgramARB; }
# 9437 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEPROGRAMSARBPROC __glewDeleteProgramsARB; }
# 9438 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDISABLEVERTEXATTRIBARRAYARBPROC __glewDisableVertexAttribArrayARB; }
# 9439 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENABLEVERTEXATTRIBARRAYARBPROC __glewEnableVertexAttribArrayARB; }
# 9440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENPROGRAMSARBPROC __glewGenProgramsARB; }
# 9441 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMENVPARAMETERDVARBPROC __glewGetProgramEnvParameterdvARB; }
# 9442 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMENVPARAMETERFVARBPROC __glewGetProgramEnvParameterfvARB; }
# 9443 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC __glewGetProgramLocalParameterdvARB; }
# 9444 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC __glewGetProgramLocalParameterfvARB; }
# 9445 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMSTRINGARBPROC __glewGetProgramStringARB; }
# 9446 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMIVARBPROC __glewGetProgramivARB; }
# 9447 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBPOINTERVARBPROC __glewGetVertexAttribPointervARB; }
# 9448 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBDVARBPROC __glewGetVertexAttribdvARB; }
# 9449 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBFVARBPROC __glewGetVertexAttribfvARB; }
# 9450 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBIVARBPROC __glewGetVertexAttribivARB; }
# 9451 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISPROGRAMARBPROC __glewIsProgramARB; }
# 9452 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETER4DARBPROC __glewProgramEnvParameter4dARB; }
# 9453 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETER4DVARBPROC __glewProgramEnvParameter4dvARB; }
# 9454 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETER4FARBPROC __glewProgramEnvParameter4fARB; }
# 9455 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETER4FVARBPROC __glewProgramEnvParameter4fvARB; }
# 9456 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETER4DARBPROC __glewProgramLocalParameter4dARB; }
# 9457 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETER4DVARBPROC __glewProgramLocalParameter4dvARB; }
# 9458 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETER4FARBPROC __glewProgramLocalParameter4fARB; }
# 9459 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETER4FVARBPROC __glewProgramLocalParameter4fvARB; }
# 9460 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMSTRINGARBPROC __glewProgramStringARB; }
# 9461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1DARBPROC __glewVertexAttrib1dARB; }
# 9462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1DVARBPROC __glewVertexAttrib1dvARB; }
# 9463 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1FARBPROC __glewVertexAttrib1fARB; }
# 9464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1FVARBPROC __glewVertexAttrib1fvARB; }
# 9465 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1SARBPROC __glewVertexAttrib1sARB; }
# 9466 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1SVARBPROC __glewVertexAttrib1svARB; }
# 9467 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2DARBPROC __glewVertexAttrib2dARB; }
# 9468 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2DVARBPROC __glewVertexAttrib2dvARB; }
# 9469 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2FARBPROC __glewVertexAttrib2fARB; }
# 9470 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2FVARBPROC __glewVertexAttrib2fvARB; }
# 9471 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2SARBPROC __glewVertexAttrib2sARB; }
# 9472 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2SVARBPROC __glewVertexAttrib2svARB; }
# 9473 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3DARBPROC __glewVertexAttrib3dARB; }
# 9474 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3DVARBPROC __glewVertexAttrib3dvARB; }
# 9475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3FARBPROC __glewVertexAttrib3fARB; }
# 9476 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3FVARBPROC __glewVertexAttrib3fvARB; }
# 9477 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3SARBPROC __glewVertexAttrib3sARB; }
# 9478 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3SVARBPROC __glewVertexAttrib3svARB; }
# 9479 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NBVARBPROC __glewVertexAttrib4NbvARB; }
# 9480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NIVARBPROC __glewVertexAttrib4NivARB; }
# 9481 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NSVARBPROC __glewVertexAttrib4NsvARB; }
# 9482 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUBARBPROC __glewVertexAttrib4NubARB; }
# 9483 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUBVARBPROC __glewVertexAttrib4NubvARB; }
# 9484 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUIVARBPROC __glewVertexAttrib4NuivARB; }
# 9485 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4NUSVARBPROC __glewVertexAttrib4NusvARB; }
# 9486 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4BVARBPROC __glewVertexAttrib4bvARB; }
# 9487 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4DARBPROC __glewVertexAttrib4dARB; }
# 9488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4DVARBPROC __glewVertexAttrib4dvARB; }
# 9489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4FARBPROC __glewVertexAttrib4fARB; }
# 9490 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4FVARBPROC __glewVertexAttrib4fvARB; }
# 9491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4IVARBPROC __glewVertexAttrib4ivARB; }
# 9492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4SARBPROC __glewVertexAttrib4sARB; }
# 9493 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4SVARBPROC __glewVertexAttrib4svARB; }
# 9494 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4UBVARBPROC __glewVertexAttrib4ubvARB; }
# 9495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4UIVARBPROC __glewVertexAttrib4uivARB; }
# 9496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4USVARBPROC __glewVertexAttrib4usvARB; }
# 9497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBPOINTERARBPROC __glewVertexAttribPointerARB; }
# 9499 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDATTRIBLOCATIONARBPROC __glewBindAttribLocationARB; }
# 9500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETACTIVEATTRIBARBPROC __glewGetActiveAttribARB; }
# 9501 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETATTRIBLOCATIONARBPROC __glewGetAttribLocationARB; }
# 9503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2DARBPROC __glewWindowPos2dARB; }
# 9504 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2DVARBPROC __glewWindowPos2dvARB; }
# 9505 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2FARBPROC __glewWindowPos2fARB; }
# 9506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2FVARBPROC __glewWindowPos2fvARB; }
# 9507 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2IARBPROC __glewWindowPos2iARB; }
# 9508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2IVARBPROC __glewWindowPos2ivARB; }
# 9509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2SARBPROC __glewWindowPos2sARB; }
# 9510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2SVARBPROC __glewWindowPos2svARB; }
# 9511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3DARBPROC __glewWindowPos3dARB; }
# 9512 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3DVARBPROC __glewWindowPos3dvARB; }
# 9513 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3FARBPROC __glewWindowPos3fARB; }
# 9514 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3FVARBPROC __glewWindowPos3fvARB; }
# 9515 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3IARBPROC __glewWindowPos3iARB; }
# 9516 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3IVARBPROC __glewWindowPos3ivARB; }
# 9517 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3SARBPROC __glewWindowPos3sARB; }
# 9518 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3SVARBPROC __glewWindowPos3svARB; }
# 9520 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWBUFFERSATIPROC __glewDrawBuffersATI; }
# 9522 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWELEMENTARRAYATIPROC __glewDrawElementArrayATI; }
# 9523 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWRANGEELEMENTARRAYATIPROC __glewDrawRangeElementArrayATI; }
# 9524 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLELEMENTPOINTERATIPROC __glewElementPointerATI; }
# 9526 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTEXBUMPPARAMETERFVATIPROC __glewGetTexBumpParameterfvATI; }
# 9527 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTEXBUMPPARAMETERIVATIPROC __glewGetTexBumpParameterivATI; }
# 9528 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXBUMPPARAMETERFVATIPROC __glewTexBumpParameterfvATI; }
# 9529 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXBUMPPARAMETERIVATIPROC __glewTexBumpParameterivATI; }
# 9531 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLALPHAFRAGMENTOP1ATIPROC __glewAlphaFragmentOp1ATI; }
# 9532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLALPHAFRAGMENTOP2ATIPROC __glewAlphaFragmentOp2ATI; }
# 9533 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLALPHAFRAGMENTOP3ATIPROC __glewAlphaFragmentOp3ATI; }
# 9534 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBEGINFRAGMENTSHADERATIPROC __glewBeginFragmentShaderATI; }
# 9535 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDFRAGMENTSHADERATIPROC __glewBindFragmentShaderATI; }
# 9536 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORFRAGMENTOP1ATIPROC __glewColorFragmentOp1ATI; }
# 9537 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORFRAGMENTOP2ATIPROC __glewColorFragmentOp2ATI; }
# 9538 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORFRAGMENTOP3ATIPROC __glewColorFragmentOp3ATI; }
# 9539 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEFRAGMENTSHADERATIPROC __glewDeleteFragmentShaderATI; }
# 9540 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENDFRAGMENTSHADERATIPROC __glewEndFragmentShaderATI; }
# 9541 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENFRAGMENTSHADERSATIPROC __glewGenFragmentShadersATI; }
# 9542 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPASSTEXCOORDATIPROC __glewPassTexCoordATI; }
# 9543 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSAMPLEMAPATIPROC __glewSampleMapATI; }
# 9544 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSETFRAGMENTSHADERCONSTANTATIPROC __glewSetFragmentShaderConstantATI; }
# 9546 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMAPOBJECTBUFFERATIPROC __glewMapObjectBufferATI; }
# 9547 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNMAPOBJECTBUFFERATIPROC __glewUnmapObjectBufferATI; }
# 9549 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPNTRIANGLESFATIPROC __glPNTrianglewesfATI; }
# 9550 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPNTRIANGLESIATIPROC __glPNTrianglewesiATI; }
# 9552 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSTENCILFUNCSEPARATEATIPROC __glewStencilFuncSeparateATI; }
# 9553 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSTENCILOPSEPARATEATIPROC __glewStencilOpSeparateATI; }
# 9555 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLARRAYOBJECTATIPROC __glewArrayObjectATI; }
# 9556 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFREEOBJECTBUFFERATIPROC __glewFreeObjectBufferATI; }
# 9557 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETARRAYOBJECTFVATIPROC __glewGetArrayObjectfvATI; }
# 9558 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETARRAYOBJECTIVATIPROC __glewGetArrayObjectivATI; }
# 9559 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETOBJECTBUFFERFVATIPROC __glewGetObjectBufferfvATI; }
# 9560 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETOBJECTBUFFERIVATIPROC __glewGetObjectBufferivATI; }
# 9561 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVARIANTARRAYOBJECTFVATIPROC __glewGetVariantArrayObjectfvATI; }
# 9562 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVARIANTARRAYOBJECTIVATIPROC __glewGetVariantArrayObjectivATI; }
# 9563 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISOBJECTBUFFERATIPROC __glewIsObjectBufferATI; }
# 9564 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNEWOBJECTBUFFERATIPROC __glewNewObjectBufferATI; }
# 9565 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUPDATEOBJECTBUFFERATIPROC __glewUpdateObjectBufferATI; }
# 9566 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTARRAYOBJECTATIPROC __glewVariantArrayObjectATI; }
# 9568 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC __glewGetVertexAttribArrayObjectfvATI; }
# 9569 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC __glewGetVertexAttribArrayObjectivATI; }
# 9570 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBARRAYOBJECTATIPROC __glewVertexAttribArrayObjectATI; }
# 9572 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC __glewClientActiveVertexStreamATI; }
# 9573 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3BATIPROC __glewNormalStream3bATI; }
# 9574 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3BVATIPROC __glewNormalStream3bvATI; }
# 9575 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3DATIPROC __glewNormalStream3dATI; }
# 9576 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3DVATIPROC __glewNormalStream3dvATI; }
# 9577 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3FATIPROC __glewNormalStream3fATI; }
# 9578 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3FVATIPROC __glewNormalStream3fvATI; }
# 9579 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3IATIPROC __glewNormalStream3iATI; }
# 9580 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3IVATIPROC __glewNormalStream3ivATI; }
# 9581 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3SATIPROC __glewNormalStream3sATI; }
# 9582 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALSTREAM3SVATIPROC __glewNormalStream3svATI; }
# 9583 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXBLENDENVFATIPROC __glewVertexBlendEnvfATI; }
# 9584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXBLENDENVIATIPROC __glewVertexBlendEnviATI; }
# 9585 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2DATIPROC __glewVertexStream2dATI; }
# 9586 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2DVATIPROC __glewVertexStream2dvATI; }
# 9587 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2FATIPROC __glewVertexStream2fATI; }
# 9588 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2FVATIPROC __glewVertexStream2fvATI; }
# 9589 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2IATIPROC __glewVertexStream2iATI; }
# 9590 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2IVATIPROC __glewVertexStream2ivATI; }
# 9591 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2SATIPROC __glewVertexStream2sATI; }
# 9592 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM2SVATIPROC __glewVertexStream2svATI; }
# 9593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3DATIPROC __glewVertexStream3dATI; }
# 9594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3DVATIPROC __glewVertexStream3dvATI; }
# 9595 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3FATIPROC __glewVertexStream3fATI; }
# 9596 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3FVATIPROC __glewVertexStream3fvATI; }
# 9597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3IATIPROC __glewVertexStream3iATI; }
# 9598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3IVATIPROC __glewVertexStream3ivATI; }
# 9599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3SATIPROC __glewVertexStream3sATI; }
# 9600 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM3SVATIPROC __glewVertexStream3svATI; }
# 9601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4DATIPROC __glewVertexStream4dATI; }
# 9602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4DVATIPROC __glewVertexStream4dvATI; }
# 9603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4FATIPROC __glewVertexStream4fATI; }
# 9604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4FVATIPROC __glewVertexStream4fvATI; }
# 9605 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4IATIPROC __glewVertexStream4iATI; }
# 9606 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4IVATIPROC __glewVertexStream4ivATI; }
# 9607 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4SATIPROC __glewVertexStream4sATI; }
# 9608 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXSTREAM4SVATIPROC __glewVertexStream4svATI; }
# 9610 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMBUFFERSIZEEXTPROC __glewGetUniformBufferSizeEXT; }
# 9611 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMOFFSETEXTPROC __glewGetUniformOffsetEXT; }
# 9612 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORMBUFFEREXTPROC __glewUniformBufferEXT; }
# 9614 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDCOLOREXTPROC __glewBlendColorEXT; }
# 9616 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDEQUATIONSEPARATEEXTPROC __glewBlendEquationSeparateEXT; }
# 9618 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDFUNCSEPARATEEXTPROC __glewBlendFuncSeparateEXT; }
# 9620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLENDEQUATIONEXTPROC __glewBlendEquationEXT; }
# 9622 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORSUBTABLEEXTPROC __glewColorSubTableEXT; }
# 9623 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCOLORSUBTABLEEXTPROC __glewCopyColorSubTableEXT; }
# 9625 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLOCKARRAYSEXTPROC __glewLockArraysEXT; }
# 9626 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNLOCKARRAYSEXTPROC __glewUnlockArraysEXT; }
# 9628 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONFILTER1DEXTPROC __glewConvolutionFilter1DEXT; }
# 9629 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONFILTER2DEXTPROC __glewConvolutionFilter2DEXT; }
# 9630 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERFEXTPROC __glewConvolutionParameterfEXT; }
# 9631 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERFVEXTPROC __glewConvolutionParameterfvEXT; }
# 9632 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERIEXTPROC __glewConvolutionParameteriEXT; }
# 9633 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCONVOLUTIONPARAMETERIVEXTPROC __glewConvolutionParameterivEXT; }
# 9634 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC __glewCopyConvolutionFilter1DEXT; }
# 9635 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC __glewCopyConvolutionFilter2DEXT; }
# 9636 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCONVOLUTIONFILTEREXTPROC __glewGetConvolutionFilterEXT; }
# 9637 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC __glewGetConvolutionParameterfvEXT; }
# 9638 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC __glewGetConvolutionParameterivEXT; }
# 9639 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETSEPARABLEFILTEREXTPROC __glewGetSeparableFilterEXT; }
# 9640 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSEPARABLEFILTER2DEXTPROC __glewSeparableFilter2DEXT; }
# 9642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINORMALPOINTEREXTPROC __glewBinormalPointerEXT; }
# 9643 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTANGENTPOINTEREXTPROC __glewTangentPointerEXT; }
# 9645 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYTEXIMAGE1DEXTPROC __glewCopyTexImage1DEXT; }
# 9646 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYTEXIMAGE2DEXTPROC __glewCopyTexImage2DEXT; }
# 9647 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYTEXSUBIMAGE1DEXTPROC __glewCopyTexSubImage1DEXT; }
# 9648 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYTEXSUBIMAGE2DEXTPROC __glewCopyTexSubImage2DEXT; }
# 9649 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYTEXSUBIMAGE3DEXTPROC __glewCopyTexSubImage3DEXT; }
# 9651 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCULLPARAMETERDVEXTPROC __glewCullParameterdvEXT; }
# 9652 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCULLPARAMETERFVEXTPROC __glewCullParameterfvEXT; }
# 9654 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDEPTHBOUNDSEXTPROC __glewDepthBoundsEXT; }
# 9656 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORMASKINDEXEDEXTPROC __glewColorMaskIndexedEXT; }
# 9657 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDISABLEINDEXEDEXTPROC __glewDisableIndexedEXT; }
# 9658 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENABLEINDEXEDEXTPROC __glewEnableIndexedEXT; }
# 9659 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETBOOLEANINDEXEDVEXTPROC __glewGetBooleanIndexedvEXT; }
# 9660 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETINTEGERINDEXEDVEXTPROC __glewGetIntegerIndexedvEXT; }
# 9661 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISENABLEDINDEXEDEXTPROC __glewIsEnabledIndexedEXT; }
# 9663 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWARRAYSINSTANCEDEXTPROC __glewDrawArraysInstancedEXT; }
# 9664 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWELEMENTSINSTANCEDEXTPROC __glewDrawElementsInstancedEXT; }
# 9666 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWRANGEELEMENTSEXTPROC __glewDrawRangeElementsEXT; }
# 9668 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDPOINTEREXTPROC __glewFogCoordPointerEXT; }
# 9669 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDDEXTPROC __glewFogCoorddEXT; }
# 9670 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDDVEXTPROC __glewFogCoorddvEXT; }
# 9671 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDFEXTPROC __glewFogCoordfEXT; }
# 9672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDFVEXTPROC __glewFogCoordfvEXT; }
# 9674 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTCOLORMATERIALEXTPROC __glewFragmentColorMaterialEXT; }
# 9675 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELFEXTPROC __glewFragmentLightModelfEXT; }
# 9676 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELFVEXTPROC __glewFragmentLightModelfvEXT; }
# 9677 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELIEXTPROC __glewFragmentLightModeliEXT; }
# 9678 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELIVEXTPROC __glewFragmentLightModelivEXT; }
# 9679 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTFEXTPROC __glewFragmentLightfEXT; }
# 9680 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTFVEXTPROC __glewFragmentLightfvEXT; }
# 9681 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTIEXTPROC __glewFragmentLightiEXT; }
# 9682 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTIVEXTPROC __glewFragmentLightivEXT; }
# 9683 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALFEXTPROC __glewFragmentMaterialfEXT; }
# 9684 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALFVEXTPROC __glewFragmentMaterialfvEXT; }
# 9685 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALIEXTPROC __glewFragmentMaterialiEXT; }
# 9686 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALIVEXTPROC __glewFragmentMaterialivEXT; }
# 9687 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTLIGHTFVEXTPROC __glewGetFragmentLightfvEXT; }
# 9688 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTLIGHTIVEXTPROC __glewGetFragmentLightivEXT; }
# 9689 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTMATERIALFVEXTPROC __glewGetFragmentMaterialfvEXT; }
# 9690 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTMATERIALIVEXTPROC __glewGetFragmentMaterialivEXT; }
# 9691 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLIGHTENVIEXTPROC __glewLightEnviEXT; }
# 9693 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBLITFRAMEBUFFEREXTPROC __glewBlitFramebufferEXT; }
# 9695 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC __glewRenderbufferStorageMultisampleEXT; }
# 9697 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDFRAMEBUFFEREXTPROC __glewBindFramebufferEXT; }
# 9698 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDRENDERBUFFEREXTPROC __glewBindRenderbufferEXT; }
# 9699 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC __glewCheckFramebufferStatusEXT; }
# 9700 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEFRAMEBUFFERSEXTPROC __glewDeleteFramebuffersEXT; }
# 9701 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETERENDERBUFFERSEXTPROC __glewDeleteRenderbuffersEXT; }
# 9702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC __glewFramebufferRenderbufferEXT; }
# 9703 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEBUFFERTEXTURE1DEXTPROC __glewFramebufferTexture1DEXT; }
# 9704 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEBUFFERTEXTURE2DEXTPROC __glewFramebufferTexture2DEXT; }
# 9705 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEBUFFERTEXTURE3DEXTPROC __glewFramebufferTexture3DEXT; }
# 9706 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENFRAMEBUFFERSEXTPROC __glewGenFramebuffersEXT; }
# 9707 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENRENDERBUFFERSEXTPROC __glewGenRenderbuffersEXT; }
# 9708 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENERATEMIPMAPEXTPROC __glewGenerateMipmapEXT; }
# 9709 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC __glewGetFramebufferAttachmentParameterivEXT; }
# 9710 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC __glewGetRenderbufferParameterivEXT; }
# 9711 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISFRAMEBUFFEREXTPROC __glewIsFramebufferEXT; }
# 9712 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISRENDERBUFFEREXTPROC __glewIsRenderbufferEXT; }
# 9713 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRENDERBUFFERSTORAGEEXTPROC __glewRenderbufferStorageEXT; }
# 9715 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEBUFFERTEXTUREEXTPROC __glewFramebufferTextureEXT; }
# 9716 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC __glewFramebufferTextureFaceEXT; }
# 9717 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC __glewFramebufferTextureLayerEXT; }
# 9718 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMPARAMETERIEXTPROC __glewProgramParameteriEXT; }
# 9720 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETERS4FVEXTPROC __glewProgramEnvParameters4fvEXT; }
# 9721 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC __glewProgramLocalParameters4fvEXT; }
# 9723 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDFRAGDATALOCATIONEXTPROC __glewBindFragDataLocationEXT; }
# 9724 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGDATALOCATIONEXTPROC __glewGetFragDataLocationEXT; }
# 9725 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETUNIFORMUIVEXTPROC __glewGetUniformuivEXT; }
# 9726 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBIIVEXTPROC __glewGetVertexAttribIivEXT; }
# 9727 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBIUIVEXTPROC __glewGetVertexAttribIuivEXT; }
# 9728 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1UIEXTPROC __glewUniform1uiEXT; }
# 9729 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM1UIVEXTPROC __glewUniform1uivEXT; }
# 9730 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2UIEXTPROC __glewUniform2uiEXT; }
# 9731 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM2UIVEXTPROC __glewUniform2uivEXT; }
# 9732 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3UIEXTPROC __glewUniform3uiEXT; }
# 9733 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM3UIVEXTPROC __glewUniform3uivEXT; }
# 9734 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4UIEXTPROC __glewUniform4uiEXT; }
# 9735 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLUNIFORM4UIVEXTPROC __glewUniform4uivEXT; }
# 9736 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI1IEXTPROC __glewVertexAttribI1iEXT; }
# 9737 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI1IVEXTPROC __glewVertexAttribI1ivEXT; }
# 9738 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI1UIEXTPROC __glewVertexAttribI1uiEXT; }
# 9739 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI1UIVEXTPROC __glewVertexAttribI1uivEXT; }
# 9740 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI2IEXTPROC __glewVertexAttribI2iEXT; }
# 9741 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI2IVEXTPROC __glewVertexAttribI2ivEXT; }
# 9742 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI2UIEXTPROC __glewVertexAttribI2uiEXT; }
# 9743 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI2UIVEXTPROC __glewVertexAttribI2uivEXT; }
# 9744 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI3IEXTPROC __glewVertexAttribI3iEXT; }
# 9745 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI3IVEXTPROC __glewVertexAttribI3ivEXT; }
# 9746 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI3UIEXTPROC __glewVertexAttribI3uiEXT; }
# 9747 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI3UIVEXTPROC __glewVertexAttribI3uivEXT; }
# 9748 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4BVEXTPROC __glewVertexAttribI4bvEXT; }
# 9749 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4IEXTPROC __glewVertexAttribI4iEXT; }
# 9750 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4IVEXTPROC __glewVertexAttribI4ivEXT; }
# 9751 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4SVEXTPROC __glewVertexAttribI4svEXT; }
# 9752 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4UBVEXTPROC __glewVertexAttribI4ubvEXT; }
# 9753 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4UIEXTPROC __glewVertexAttribI4uiEXT; }
# 9754 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4UIVEXTPROC __glewVertexAttribI4uivEXT; }
# 9755 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBI4USVEXTPROC __glewVertexAttribI4usvEXT; }
# 9756 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBIPOINTEREXTPROC __glewVertexAttribIPointerEXT; }
# 9758 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETHISTOGRAMEXTPROC __glewGetHistogramEXT; }
# 9759 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETHISTOGRAMPARAMETERFVEXTPROC __glewGetHistogramParameterfvEXT; }
# 9760 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETHISTOGRAMPARAMETERIVEXTPROC __glewGetHistogramParameterivEXT; }
# 9761 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMINMAXEXTPROC __glewGetMinmaxEXT; }
# 9762 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMINMAXPARAMETERFVEXTPROC __glewGetMinmaxParameterfvEXT; }
# 9763 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMINMAXPARAMETERIVEXTPROC __glewGetMinmaxParameterivEXT; }
# 9764 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLHISTOGRAMEXTPROC __glewHistogramEXT; }
# 9765 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMINMAXEXTPROC __glewMinmaxEXT; }
# 9766 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRESETHISTOGRAMEXTPROC __glewResetHistogramEXT; }
# 9767 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRESETMINMAXEXTPROC __glewResetMinmaxEXT; }
# 9769 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLINDEXFUNCEXTPROC __glewIndexFuncEXT; }
# 9771 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLINDEXMATERIALEXTPROC __glewIndexMaterialEXT; }
# 9773 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLAPPLYTEXTUREEXTPROC __glewApplyTextureEXT; }
# 9774 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXTURELIGHTEXTPROC __glewTextureLightEXT; }
# 9775 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXTUREMATERIALEXTPROC __glewTextureMaterialEXT; }
# 9777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIDRAWARRAYSEXTPROC __glewMultiDrawArraysEXT; }
# 9778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIDRAWELEMENTSEXTPROC __glewMultiDrawElementsEXT; }
# 9780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSAMPLEMASKEXTPROC __glewSampleMaskEXT; }
# 9781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSAMPLEPATTERNEXTPROC __glewSamplePatternEXT; }
# 9783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORTABLEEXTPROC __glewColorTableEXT; }
# 9784 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEEXTPROC __glewGetColorTableEXT; }
# 9785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEPARAMETERFVEXTPROC __glewGetColorTableParameterfvEXT; }
# 9786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEPARAMETERIVEXTPROC __glewGetColorTableParameterivEXT; }
# 9788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC __glewGetPixelTransformParameterfvEXT; }
# 9789 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC __glewGetPixelTransformParameterivEXT; }
# 9790 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPIXELTRANSFORMPARAMETERFEXTPROC __glewPixelTransformParameterfEXT; }
# 9791 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC __glewPixelTransformParameterfvEXT; }
# 9792 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPIXELTRANSFORMPARAMETERIEXTPROC __glewPixelTransformParameteriEXT; }
# 9793 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC __glewPixelTransformParameterivEXT; }
# 9795 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERFEXTPROC __glewPointParameterfEXT; }
# 9796 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERFVEXTPROC __glewPointParameterfvEXT; }
# 9798 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOLYGONOFFSETEXTPROC __glewPolygonOffsetEXT; }
# 9800 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBEGINSCENEEXTPROC __glewBeginSceneEXT; }
# 9801 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENDSCENEEXTPROC __glewEndSceneEXT; }
# 9803 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3BEXTPROC __glewSecondaryColor3bEXT; }
# 9804 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3BVEXTPROC __glewSecondaryColor3bvEXT; }
# 9805 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3DEXTPROC __glewSecondaryColor3dEXT; }
# 9806 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3DVEXTPROC __glewSecondaryColor3dvEXT; }
# 9807 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3FEXTPROC __glewSecondaryColor3fEXT; }
# 9808 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3FVEXTPROC __glewSecondaryColor3fvEXT; }
# 9809 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3IEXTPROC __glewSecondaryColor3iEXT; }
# 9810 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3IVEXTPROC __glewSecondaryColor3ivEXT; }
# 9811 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3SEXTPROC __glewSecondaryColor3sEXT; }
# 9812 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3SVEXTPROC __glewSecondaryColor3svEXT; }
# 9813 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UBEXTPROC __glewSecondaryColor3ubEXT; }
# 9814 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UBVEXTPROC __glewSecondaryColor3ubvEXT; }
# 9815 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UIEXTPROC __glewSecondaryColor3uiEXT; }
# 9816 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3UIVEXTPROC __glewSecondaryColor3uivEXT; }
# 9817 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3USEXTPROC __glewSecondaryColor3usEXT; }
# 9818 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3USVEXTPROC __glewSecondaryColor3usvEXT; }
# 9819 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLORPOINTEREXTPROC __glewSecondaryColorPointerEXT; }
# 9821 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLACTIVESTENCILFACEEXTPROC __glewActiveStencilFaceEXT; }
# 9823 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXSUBIMAGE1DEXTPROC __glewTexSubImage1DEXT; }
# 9824 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXSUBIMAGE2DEXTPROC __glewTexSubImage2DEXT; }
# 9825 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXSUBIMAGE3DEXTPROC __glewTexSubImage3DEXT; }
# 9827 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXIMAGE3DEXTPROC __glewTexImage3DEXT; }
# 9829 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXBUFFEREXTPROC __glewTexBufferEXT; }
# 9831 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLEARCOLORIIEXTPROC __glewClearColorIiEXT; }
# 9832 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLEARCOLORIUIEXTPROC __glewClearColorIuiEXT; }
# 9833 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTEXPARAMETERIIVEXTPROC __glewGetTexParameterIivEXT; }
# 9834 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTEXPARAMETERIUIVEXTPROC __glewGetTexParameterIuivEXT; }
# 9835 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXPARAMETERIIVEXTPROC __glewTexParameterIivEXT; }
# 9836 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXPARAMETERIUIVEXTPROC __glewTexParameterIuivEXT; }
# 9838 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLARETEXTURESRESIDENTEXTPROC __glewAreTexturesResidentEXT; }
# 9839 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDTEXTUREEXTPROC __glewBindTextureEXT; }
# 9840 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETETEXTURESEXTPROC __glewDeleteTexturesEXT; }
# 9841 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENTEXTURESEXTPROC __glewGenTexturesEXT; }
# 9842 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISTEXTUREEXTPROC __glewIsTextureEXT; }
# 9843 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPRIORITIZETEXTURESEXTPROC __glewPrioritizeTexturesEXT; }
# 9845 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXTURENORMALEXTPROC __glewTextureNormalEXT; }
# 9847 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYOBJECTI64VEXTPROC __glewGetQueryObjecti64vEXT; }
# 9848 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETQUERYOBJECTUI64VEXTPROC __glewGetQueryObjectui64vEXT; }
# 9850 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLARRAYELEMENTEXTPROC __glewArrayElementEXT; }
# 9851 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORPOINTEREXTPROC __glewColorPointerEXT; }
# 9852 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWARRAYSEXTPROC __glewDrawArraysEXT; }
# 9853 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLEDGEFLAGPOINTEREXTPROC __glewEdgeFlagPointerEXT; }
# 9854 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPOINTERVEXTPROC __glewGetPointervEXT; }
# 9855 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLINDEXPOINTEREXTPROC __glewIndexPointerEXT; }
# 9856 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALPOINTEREXTPROC __glewNormalPointerEXT; }
# 9857 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORDPOINTEREXTPROC __glewTexCoordPointerEXT; }
# 9858 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXPOINTEREXTPROC __glewVertexPointerEXT; }
# 9860 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBEGINVERTEXSHADEREXTPROC __glewBeginVertexShaderEXT; }
# 9861 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDLIGHTPARAMETEREXTPROC __glewBindLightParameterEXT; }
# 9862 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDMATERIALPARAMETEREXTPROC __glewBindMaterialParameterEXT; }
# 9863 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDPARAMETEREXTPROC __glewBindParameterEXT; }
# 9864 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDTEXGENPARAMETEREXTPROC __glewBindTexGenParameterEXT; }
# 9865 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDTEXTUREUNITPARAMETEREXTPROC __glewBindTextureUnitParameterEXT; }
# 9866 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDVERTEXSHADEREXTPROC __glewBindVertexShaderEXT; }
# 9867 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEVERTEXSHADEREXTPROC __glewDeleteVertexShaderEXT; }
# 9868 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC __glewDisableVariantClientStateEXT; }
# 9869 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENABLEVARIANTCLIENTSTATEEXTPROC __glewEnableVariantClientStateEXT; }
# 9870 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENDVERTEXSHADEREXTPROC __glewEndVertexShaderEXT; }
# 9871 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLEXTRACTCOMPONENTEXTPROC __glewExtractComponentEXT; }
# 9872 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENSYMBOLSEXTPROC __glewGenSymbolsEXT; }
# 9873 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENVERTEXSHADERSEXTPROC __glewGenVertexShadersEXT; }
# 9874 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETINVARIANTBOOLEANVEXTPROC __glewGetInvariantBooleanvEXT; }
# 9875 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETINVARIANTFLOATVEXTPROC __glewGetInvariantFloatvEXT; }
# 9876 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETINVARIANTINTEGERVEXTPROC __glewGetInvariantIntegervEXT; }
# 9877 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC __glewGetLocalConstantBooleanvEXT; }
# 9878 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETLOCALCONSTANTFLOATVEXTPROC __glewGetLocalConstantFloatvEXT; }
# 9879 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETLOCALCONSTANTINTEGERVEXTPROC __glewGetLocalConstantIntegervEXT; }
# 9880 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVARIANTBOOLEANVEXTPROC __glewGetVariantBooleanvEXT; }
# 9881 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVARIANTFLOATVEXTPROC __glewGetVariantFloatvEXT; }
# 9882 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVARIANTINTEGERVEXTPROC __glewGetVariantIntegervEXT; }
# 9883 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVARIANTPOINTERVEXTPROC __glewGetVariantPointervEXT; }
# 9884 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLINSERTCOMPONENTEXTPROC __glewInsertComponentEXT; }
# 9885 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISVARIANTENABLEDEXTPROC __glewIsVariantEnabledEXT; }
# 9886 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSETINVARIANTEXTPROC __glewSetInvariantEXT; }
# 9887 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSETLOCALCONSTANTEXTPROC __glewSetLocalConstantEXT; }
# 9888 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSHADEROP1EXTPROC __glewShaderOp1EXT; }
# 9889 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSHADEROP2EXTPROC __glewShaderOp2EXT; }
# 9890 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSHADEROP3EXTPROC __glewShaderOp3EXT; }
# 9891 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSWIZZLEEXTPROC __glewSwizzleEXT; }
# 9892 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTPOINTEREXTPROC __glewVariantPointerEXT; }
# 9893 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTBVEXTPROC __glewVariantbvEXT; }
# 9894 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTDVEXTPROC __glewVariantdvEXT; }
# 9895 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTFVEXTPROC __glewVariantfvEXT; }
# 9896 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTIVEXTPROC __glewVariantivEXT; }
# 9897 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTSVEXTPROC __glewVariantsvEXT; }
# 9898 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTUBVEXTPROC __glewVariantubvEXT; }
# 9899 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTUIVEXTPROC __glewVariantuivEXT; }
# 9900 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVARIANTUSVEXTPROC __glewVariantusvEXT; }
# 9901 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWRITEMASKEXTPROC __glewWriteMaskEXT; }
# 9903 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXWEIGHTPOINTEREXTPROC __glewVertexWeightPointerEXT; }
# 9904 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXWEIGHTFEXTPROC __glewVertexWeightfEXT; }
# 9905 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXWEIGHTFVEXTPROC __glewVertexWeightfvEXT; }
# 9907 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSTRINGMARKERGREMEDYPROC __glewStringMarkerGREMEDY; }
# 9909 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC __glewGetImageTransformParameterfvHP; }
# 9910 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC __glewGetImageTransformParameterivHP; }
# 9911 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLIMAGETRANSFORMPARAMETERFHPPROC __glewImageTransformParameterfHP; }
# 9912 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLIMAGETRANSFORMPARAMETERFVHPPROC __glewImageTransformParameterfvHP; }
# 9913 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLIMAGETRANSFORMPARAMETERIHPPROC __glewImageTransformParameteriHP; }
# 9914 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLIMAGETRANSFORMPARAMETERIVHPPROC __glewImageTransformParameterivHP; }
# 9916 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIMODEDRAWARRAYSIBMPROC __glewMultiModeDrawArraysIBM; }
# 9917 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTIMODEDRAWELEMENTSIBMPROC __glewMultiModeDrawElementsIBM; }
# 9919 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORPOINTERLISTIBMPROC __glewColorPointerListIBM; }
# 9920 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLEDGEFLAGPOINTERLISTIBMPROC __glewEdgeFlagPointerListIBM; }
# 9921 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDPOINTERLISTIBMPROC __glewFogCoordPointerListIBM; }
# 9922 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLINDEXPOINTERLISTIBMPROC __glewIndexPointerListIBM; }
# 9923 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALPOINTERLISTIBMPROC __glewNormalPointerListIBM; }
# 9924 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLORPOINTERLISTIBMPROC __glewSecondaryColorPointerListIBM; }
# 9925 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORDPOINTERLISTIBMPROC __glewTexCoordPointerListIBM; }
# 9926 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXPOINTERLISTIBMPROC __glewVertexPointerListIBM; }
# 9928 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORPOINTERVINTELPROC __glewColorPointervINTEL; }
# 9929 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMALPOINTERVINTELPROC __glewNormalPointervINTEL; }
# 9930 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORDPOINTERVINTELPROC __glewTexCoordPointervINTEL; }
# 9931 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXPOINTERVINTELPROC __glewVertexPointervINTEL; }
# 9933 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXSCISSORFUNCINTELPROC __glewTexScissorFuncINTEL; }
# 9934 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXSCISSORINTELPROC __glewTexScissorINTEL; }
# 9936 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBUFFERREGIONENABLEDEXTPROC __glewBufferRegionEnabledEXT; }
# 9937 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEBUFFERREGIONEXTPROC __glewDeleteBufferRegionEXT; }
# 9938 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDRAWBUFFERREGIONEXTPROC __glewDrawBufferRegionEXT; }
# 9939 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNEWBUFFERREGIONEXTPROC __glewNewBufferRegionEXT; }
# 9940 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREADBUFFERREGIONEXTPROC __glewReadBufferRegionEXT; }
# 9942 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRESIZEBUFFERSMESAPROC __glewResizeBuffersMESA; }
# 9944 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2DMESAPROC __glewWindowPos2dMESA; }
# 9945 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2DVMESAPROC __glewWindowPos2dvMESA; }
# 9946 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2FMESAPROC __glewWindowPos2fMESA; }
# 9947 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2FVMESAPROC __glewWindowPos2fvMESA; }
# 9948 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2IMESAPROC __glewWindowPos2iMESA; }
# 9949 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2IVMESAPROC __glewWindowPos2ivMESA; }
# 9950 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2SMESAPROC __glewWindowPos2sMESA; }
# 9951 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS2SVMESAPROC __glewWindowPos2svMESA; }
# 9952 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3DMESAPROC __glewWindowPos3dMESA; }
# 9953 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3DVMESAPROC __glewWindowPos3dvMESA; }
# 9954 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3FMESAPROC __glewWindowPos3fMESA; }
# 9955 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3FVMESAPROC __glewWindowPos3fvMESA; }
# 9956 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3IMESAPROC __glewWindowPos3iMESA; }
# 9957 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3IVMESAPROC __glewWindowPos3ivMESA; }
# 9958 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3SMESAPROC __glewWindowPos3sMESA; }
# 9959 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS3SVMESAPROC __glewWindowPos3svMESA; }
# 9960 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4DMESAPROC __glewWindowPos4dMESA; }
# 9961 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4DVMESAPROC __glewWindowPos4dvMESA; }
# 9962 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4FMESAPROC __glewWindowPos4fMESA; }
# 9963 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4FVMESAPROC __glewWindowPos4fvMESA; }
# 9964 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4IMESAPROC __glewWindowPos4iMESA; }
# 9965 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4IVMESAPROC __glewWindowPos4ivMESA; }
# 9966 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4SMESAPROC __glewWindowPos4sMESA; }
# 9967 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLWINDOWPOS4SVMESAPROC __glewWindowPos4svMESA; }
# 9969 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLEARDEPTHDNVPROC __glewClearDepthdNV; }
# 9970 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDEPTHBOUNDSDNVPROC __glewDepthBoundsdNV; }
# 9971 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDEPTHRANGEDNVPROC __glewDepthRangedNV; }
# 9973 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLEVALMAPSNVPROC __glewEvalMapsNV; }
# 9974 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMAPATTRIBPARAMETERFVNVPROC __glewGetMapAttribParameterfvNV; }
# 9975 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMAPATTRIBPARAMETERIVNVPROC __glewGetMapAttribParameterivNV; }
# 9976 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMAPCONTROLPOINTSNVPROC __glewGetMapControlPointsNV; }
# 9977 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMAPPARAMETERFVNVPROC __glewGetMapParameterfvNV; }
# 9978 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETMAPPARAMETERIVNVPROC __glewGetMapParameterivNV; }
# 9979 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMAPCONTROLPOINTSNVPROC __glewMapControlPointsNV; }
# 9980 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMAPPARAMETERFVNVPROC __glewMapParameterfvNV; }
# 9981 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMAPPARAMETERIVNVPROC __glewMapParameterivNV; }
# 9983 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEFENCESNVPROC __glewDeleteFencesNV; }
# 9984 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFINISHFENCENVPROC __glewFinishFenceNV; }
# 9985 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENFENCESNVPROC __glewGenFencesNV; }
# 9986 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFENCEIVNVPROC __glewGetFenceivNV; }
# 9987 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISFENCENVPROC __glewIsFenceNV; }
# 9988 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSETFENCENVPROC __glewSetFenceNV; }
# 9989 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTESTFENCENVPROC __glewTestFenceNV; }
# 9991 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC __glewGetProgramNamedParameterdvNV; }
# 9992 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC __glewGetProgramNamedParameterfvNV; }
# 9993 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMNAMEDPARAMETER4DNVPROC __glewProgramNamedParameter4dNV; }
# 9994 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC __glewProgramNamedParameter4dvNV; }
# 9995 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMNAMEDPARAMETER4FNVPROC __glewProgramNamedParameter4fNV; }
# 9996 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC __glewProgramNamedParameter4fvNV; }
# 9998 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC __glewRenderbufferStorageMultisampleCoverageNV; }
# 10000 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETERI4INVPROC __glewProgramEnvParameterI4iNV; }
# 10001 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETERI4IVNVPROC __glewProgramEnvParameterI4ivNV; }
# 10002 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETERI4UINVPROC __glewProgramEnvParameterI4uiNV; }
# 10003 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETERI4UIVNVPROC __glewProgramEnvParameterI4uivNV; }
# 10004 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETERSI4IVNVPROC __glewProgramEnvParametersI4ivNV; }
# 10005 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC __glewProgramEnvParametersI4uivNV; }
# 10006 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETERI4INVPROC __glewProgramLocalParameterI4iNV; }
# 10007 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC __glewProgramLocalParameterI4ivNV; }
# 10008 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETERI4UINVPROC __glewProgramLocalParameterI4uiNV; }
# 10009 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC __glewProgramLocalParameterI4uivNV; }
# 10010 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC __glewProgramLocalParametersI4ivNV; }
# 10011 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC __glewProgramLocalParametersI4uivNV; }
# 10012 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMVERTEXLIMITNVPROC __glewProgramVertexLimitNV; }
# 10014 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR3HNVPROC __glewColor3hNV; }
# 10015 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR3HVNVPROC __glewColor3hvNV; }
# 10016 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4HNVPROC __glewColor4hNV; }
# 10017 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4HVNVPROC __glewColor4hvNV; }
# 10018 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDHNVPROC __glewFogCoordhNV; }
# 10019 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGCOORDHVNVPROC __glewFogCoordhvNV; }
# 10020 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1HNVPROC __glewMultiTexCoord1hNV; }
# 10021 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD1HVNVPROC __glewMultiTexCoord1hvNV; }
# 10022 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2HNVPROC __glewMultiTexCoord2hNV; }
# 10023 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD2HVNVPROC __glewMultiTexCoord2hvNV; }
# 10024 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3HNVPROC __glewMultiTexCoord3hNV; }
# 10025 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD3HVNVPROC __glewMultiTexCoord3hvNV; }
# 10026 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4HNVPROC __glewMultiTexCoord4hNV; }
# 10027 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLMULTITEXCOORD4HVNVPROC __glewMultiTexCoord4hvNV; }
# 10028 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMAL3HNVPROC __glewNormal3hNV; }
# 10029 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMAL3HVNVPROC __glewNormal3hvNV; }
# 10030 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3HNVPROC __glewSecondaryColor3hNV; }
# 10031 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSECONDARYCOLOR3HVNVPROC __glewSecondaryColor3hvNV; }
# 10032 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD1HNVPROC __glewTexCoord1hNV; }
# 10033 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD1HVNVPROC __glewTexCoord1hvNV; }
# 10034 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2HNVPROC __glewTexCoord2hNV; }
# 10035 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2HVNVPROC __glewTexCoord2hvNV; }
# 10036 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD3HNVPROC __glewTexCoord3hNV; }
# 10037 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD3HVNVPROC __glewTexCoord3hvNV; }
# 10038 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD4HNVPROC __glewTexCoord4hNV; }
# 10039 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD4HVNVPROC __glewTexCoord4hvNV; }
# 10040 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEX2HNVPROC __glewVertex2hNV; }
# 10041 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEX2HVNVPROC __glewVertex2hvNV; }
# 10042 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEX3HNVPROC __glewVertex3hNV; }
# 10043 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEX3HVNVPROC __glewVertex3hvNV; }
# 10044 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEX4HNVPROC __glewVertex4hNV; }
# 10045 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEX4HVNVPROC __glewVertex4hvNV; }
# 10046 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1HNVPROC __glewVertexAttrib1hNV; }
# 10047 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1HVNVPROC __glewVertexAttrib1hvNV; }
# 10048 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2HNVPROC __glewVertexAttrib2hNV; }
# 10049 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2HVNVPROC __glewVertexAttrib2hvNV; }
# 10050 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3HNVPROC __glewVertexAttrib3hNV; }
# 10051 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3HVNVPROC __glewVertexAttrib3hvNV; }
# 10052 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4HNVPROC __glewVertexAttrib4hNV; }
# 10053 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4HVNVPROC __glewVertexAttrib4hvNV; }
# 10054 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS1HVNVPROC __glewVertexAttribs1hvNV; }
# 10055 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS2HVNVPROC __glewVertexAttribs2hvNV; }
# 10056 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS3HVNVPROC __glewVertexAttribs3hvNV; }
# 10057 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS4HVNVPROC __glewVertexAttribs4hvNV; }
# 10058 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXWEIGHTHNVPROC __glewVertexWeighthNV; }
# 10059 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXWEIGHTHVNVPROC __glewVertexWeighthvNV; }
# 10061 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBEGINOCCLUSIONQUERYNVPROC __glewBeginOcclusionQueryNV; }
# 10062 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEOCCLUSIONQUERIESNVPROC __glewDeleteOcclusionQueriesNV; }
# 10063 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENDOCCLUSIONQUERYNVPROC __glewEndOcclusionQueryNV; }
# 10064 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENOCCLUSIONQUERIESNVPROC __glewGenOcclusionQueriesNV; }
# 10065 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETOCCLUSIONQUERYIVNVPROC __glewGetOcclusionQueryivNV; }
# 10066 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETOCCLUSIONQUERYUIVNVPROC __glewGetOcclusionQueryuivNV; }
# 10067 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISOCCLUSIONQUERYNVPROC __glewIsOcclusionQueryNV; }
# 10069 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC __glewProgramBufferParametersIivNV; }
# 10070 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC __glewProgramBufferParametersIuivNV; }
# 10071 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC __glewProgramBufferParametersfvNV; }
# 10073 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFLUSHPIXELDATARANGENVPROC __glewFlushPixelDataRangeNV; }
# 10074 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPIXELDATARANGENVPROC __glewPixelDataRangeNV; }
# 10076 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERINVPROC __glewPointParameteriNV; }
# 10077 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOINTPARAMETERIVNVPROC __glewPointParameterivNV; }
# 10079 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPRIMITIVERESTARTINDEXNVPROC __glewPrimitiveRestartIndexNV; }
# 10080 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPRIMITIVERESTARTNVPROC __glewPrimitiveRestartNV; }
# 10082 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMBINERINPUTNVPROC __glewCombinerInputNV; }
# 10083 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMBINEROUTPUTNVPROC __glewCombinerOutputNV; }
# 10084 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMBINERPARAMETERFNVPROC __glewCombinerParameterfNV; }
# 10085 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMBINERPARAMETERFVNVPROC __glewCombinerParameterfvNV; }
# 10086 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMBINERPARAMETERINVPROC __glewCombinerParameteriNV; }
# 10087 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMBINERPARAMETERIVNVPROC __glewCombinerParameterivNV; }
# 10088 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFINALCOMBINERINPUTNVPROC __glewFinalCombinerInputNV; }
# 10089 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC __glewGetCombinerInputParameterfvNV; }
# 10090 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC __glewGetCombinerInputParameterivNV; }
# 10091 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC __glewGetCombinerOutputParameterfvNV; }
# 10092 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC __glewGetCombinerOutputParameterivNV; }
# 10093 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC __glewGetFinalCombinerInputParameterfvNV; }
# 10094 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC __glewGetFinalCombinerInputParameterivNV; }
# 10096 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOMBINERSTAGEPARAMETERFVNVPROC __glewCombinerStageParameterfvNV; }
# 10097 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC __glewGetCombinerStageParameterfvNV; }
# 10099 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLACTIVEVARYINGNVPROC __glewActiveVaryingNV; }
# 10100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBEGINTRANSFORMFEEDBACKNVPROC __glewBeginTransformFeedbackNV; }
# 10101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDBUFFERBASENVPROC __glewBindBufferBaseNV; }
# 10102 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDBUFFEROFFSETNVPROC __glewBindBufferOffsetNV; }
# 10103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDBUFFERRANGENVPROC __glewBindBufferRangeNV; }
# 10104 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLENDTRANSFORMFEEDBACKNVPROC __glewEndTransformFeedbackNV; }
# 10105 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETACTIVEVARYINGNVPROC __glewGetActiveVaryingNV; }
# 10106 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC __glewGetTransformFeedbackVaryingNV; }
# 10107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVARYINGLOCATIONNVPROC __glewGetVaryingLocationNV; }
# 10108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC __glewTransformFeedbackAttribsNV; }
# 10109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC __glewTransformFeedbackVaryingsNV; }
# 10111 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFLUSHVERTEXARRAYRANGENVPROC __glewFlushVertexArrayRangeNV; }
# 10112 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXARRAYRANGENVPROC __glewVertexArrayRangeNV; }
# 10114 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLAREPROGRAMSRESIDENTNVPROC __glewAreProgramsResidentNV; }
# 10115 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLBINDPROGRAMNVPROC __glewBindProgramNV; }
# 10116 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEPROGRAMSNVPROC __glewDeleteProgramsNV; }
# 10117 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLEXECUTEPROGRAMNVPROC __glewExecuteProgramNV; }
# 10118 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENPROGRAMSNVPROC __glewGenProgramsNV; }
# 10119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMPARAMETERDVNVPROC __glewGetProgramParameterdvNV; }
# 10120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMPARAMETERFVNVPROC __glewGetProgramParameterfvNV; }
# 10121 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMSTRINGNVPROC __glewGetProgramStringNV; }
# 10122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETPROGRAMIVNVPROC __glewGetProgramivNV; }
# 10123 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTRACKMATRIXIVNVPROC __glewGetTrackMatrixivNV; }
# 10124 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBPOINTERVNVPROC __glewGetVertexAttribPointervNV; }
# 10125 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBDVNVPROC __glewGetVertexAttribdvNV; }
# 10126 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBFVNVPROC __glewGetVertexAttribfvNV; }
# 10127 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETVERTEXATTRIBIVNVPROC __glewGetVertexAttribivNV; }
# 10128 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISPROGRAMNVPROC __glewIsProgramNV; }
# 10129 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLLOADPROGRAMNVPROC __glewLoadProgramNV; }
# 10130 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMPARAMETER4DNVPROC __glewProgramParameter4dNV; }
# 10131 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMPARAMETER4DVNVPROC __glewProgramParameter4dvNV; }
# 10132 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMPARAMETER4FNVPROC __glewProgramParameter4fNV; }
# 10133 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMPARAMETER4FVNVPROC __glewProgramParameter4fvNV; }
# 10134 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMPARAMETERS4DVNVPROC __glewProgramParameters4dvNV; }
# 10135 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPROGRAMPARAMETERS4FVNVPROC __glewProgramParameters4fvNV; }
# 10136 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREQUESTRESIDENTPROGRAMSNVPROC __glewRequestResidentProgramsNV; }
# 10137 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTRACKMATRIXNVPROC __glewTrackMatrixNV; }
# 10138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1DNVPROC __glewVertexAttrib1dNV; }
# 10139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1DVNVPROC __glewVertexAttrib1dvNV; }
# 10140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1FNVPROC __glewVertexAttrib1fNV; }
# 10141 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1FVNVPROC __glewVertexAttrib1fvNV; }
# 10142 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1SNVPROC __glewVertexAttrib1sNV; }
# 10143 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB1SVNVPROC __glewVertexAttrib1svNV; }
# 10144 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2DNVPROC __glewVertexAttrib2dNV; }
# 10145 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2DVNVPROC __glewVertexAttrib2dvNV; }
# 10146 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2FNVPROC __glewVertexAttrib2fNV; }
# 10147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2FVNVPROC __glewVertexAttrib2fvNV; }
# 10148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2SNVPROC __glewVertexAttrib2sNV; }
# 10149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB2SVNVPROC __glewVertexAttrib2svNV; }
# 10150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3DNVPROC __glewVertexAttrib3dNV; }
# 10151 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3DVNVPROC __glewVertexAttrib3dvNV; }
# 10152 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3FNVPROC __glewVertexAttrib3fNV; }
# 10153 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3FVNVPROC __glewVertexAttrib3fvNV; }
# 10154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3SNVPROC __glewVertexAttrib3sNV; }
# 10155 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB3SVNVPROC __glewVertexAttrib3svNV; }
# 10156 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4DNVPROC __glewVertexAttrib4dNV; }
# 10157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4DVNVPROC __glewVertexAttrib4dvNV; }
# 10158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4FNVPROC __glewVertexAttrib4fNV; }
# 10159 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4FVNVPROC __glewVertexAttrib4fvNV; }
# 10160 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4SNVPROC __glewVertexAttrib4sNV; }
# 10161 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4SVNVPROC __glewVertexAttrib4svNV; }
# 10162 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4UBNVPROC __glewVertexAttrib4ubNV; }
# 10163 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIB4UBVNVPROC __glewVertexAttrib4ubvNV; }
# 10164 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBPOINTERNVPROC __glewVertexAttribPointerNV; }
# 10165 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS1DVNVPROC __glewVertexAttribs1dvNV; }
# 10166 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS1FVNVPROC __glewVertexAttribs1fvNV; }
# 10167 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS1SVNVPROC __glewVertexAttribs1svNV; }
# 10168 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS2DVNVPROC __glewVertexAttribs2dvNV; }
# 10169 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS2FVNVPROC __glewVertexAttribs2fvNV; }
# 10170 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS2SVNVPROC __glewVertexAttribs2svNV; }
# 10171 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS3DVNVPROC __glewVertexAttribs3dvNV; }
# 10172 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS3FVNVPROC __glewVertexAttribs3fvNV; }
# 10173 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS3SVNVPROC __glewVertexAttribs3svNV; }
# 10174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS4DVNVPROC __glewVertexAttribs4dvNV; }
# 10175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS4FVNVPROC __glewVertexAttribs4fvNV; }
# 10176 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS4SVNVPROC __glewVertexAttribs4svNV; }
# 10177 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLVERTEXATTRIBS4UBVNVPROC __glewVertexAttribs4ubvNV; }
# 10179 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLEARDEPTHFOESPROC __glewClearDepthfOES; }
# 10180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCLIPPLANEFOESPROC __glewClipPlanefOES; }
# 10181 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDEPTHRANGEFOESPROC __glewDepthRangefOES; }
# 10182 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRUSTUMFOESPROC __glewFrustumfOES; }
# 10183 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCLIPPLANEFOESPROC __glewGetClipPlanefOES; }
# 10184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLORTHOFOESPROC __glewOrthofOES; }
# 10186 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDETAILTEXFUNCSGISPROC __glewDetailTexFuncSGIS; }
# 10187 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETDETAILTEXFUNCSGISPROC __glewGetDetailTexFuncSGIS; }
# 10189 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFOGFUNCSGISPROC __glewFogFuncSGIS; }
# 10190 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFOGFUNCSGISPROC __glewGetFogFuncSGIS; }
# 10192 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSAMPLEMASKSGISPROC __glewSampleMaskSGIS; }
# 10193 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSAMPLEPATTERNSGISPROC __glewSamplePatternSGIS; }
# 10195 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETSHARPENTEXFUNCSGISPROC __glewGetSharpenTexFuncSGIS; }
# 10196 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSHARPENTEXFUNCSGISPROC __glewSharpenTexFuncSGIS; }
# 10198 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXIMAGE4DSGISPROC __glewTexImage4DSGIS; }
# 10199 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXSUBIMAGE4DSGISPROC __glewTexSubImage4DSGIS; }
# 10201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETTEXFILTERFUNCSGISPROC __glewGetTexFilterFuncSGIS; }
# 10202 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXFILTERFUNCSGISPROC __glewTexFilterFuncSGIS; }
# 10204 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLASYNCMARKERSGIXPROC __glewAsyncMarkerSGIX; }
# 10205 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLDELETEASYNCMARKERSSGIXPROC __glewDeleteAsyncMarkersSGIX; }
# 10206 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFINISHASYNCSGIXPROC __glewFinishAsyncSGIX; }
# 10207 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGENASYNCMARKERSSGIXPROC __glewGenAsyncMarkersSGIX; }
# 10208 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLISASYNCMARKERSGIXPROC __glewIsAsyncMarkerSGIX; }
# 10209 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPOLLASYNCSGIXPROC __glewPollAsyncSGIX; }
# 10211 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFLUSHRASTERSGIXPROC __glewFlushRasterSGIX; }
# 10213 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXTUREFOGSGIXPROC __glewTextureFogSGIX; }
# 10215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTCOLORMATERIALSGIXPROC __glewFragmentColorMaterialSGIX; }
# 10216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELFSGIXPROC __glewFragmentLightModelfSGIX; }
# 10217 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELFVSGIXPROC __glewFragmentLightModelfvSGIX; }
# 10218 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELISGIXPROC __glewFragmentLightModeliSGIX; }
# 10219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTMODELIVSGIXPROC __glewFragmentLightModelivSGIX; }
# 10220 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTFSGIXPROC __glewFragmentLightfSGIX; }
# 10221 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTFVSGIXPROC __glewFragmentLightfvSGIX; }
# 10222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTISGIXPROC __glewFragmentLightiSGIX; }
# 10223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTLIGHTIVSGIXPROC __glewFragmentLightivSGIX; }
# 10224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALFSGIXPROC __glewFragmentMaterialfSGIX; }
# 10225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALFVSGIXPROC __glewFragmentMaterialfvSGIX; }
# 10226 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALISGIXPROC __glewFragmentMaterialiSGIX; }
# 10227 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAGMENTMATERIALIVSGIXPROC __glewFragmentMaterialivSGIX; }
# 10228 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTLIGHTFVSGIXPROC __glewGetFragmentLightfvSGIX; }
# 10229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTLIGHTIVSGIXPROC __glewGetFragmentLightivSGIX; }
# 10230 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTMATERIALFVSGIXPROC __glewGetFragmentMaterialfvSGIX; }
# 10231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETFRAGMENTMATERIALIVSGIXPROC __glewGetFragmentMaterialivSGIX; }
# 10233 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFRAMEZOOMSGIXPROC __glewFrameZoomSGIX; }
# 10235 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLPIXELTEXGENSGIXPROC __glewPixelTexGenSGIX; }
# 10237 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREFERENCEPLANESGIXPROC __glewReferencePlaneSGIX; }
# 10239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSPRITEPARAMETERFSGIXPROC __glewSpriteParameterfSGIX; }
# 10240 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSPRITEPARAMETERFVSGIXPROC __glewSpriteParameterfvSGIX; }
# 10241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSPRITEPARAMETERISGIXPROC __glewSpriteParameteriSGIX; }
# 10242 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLSPRITEPARAMETERIVSGIXPROC __glewSpriteParameterivSGIX; }
# 10244 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTAGSAMPLEBUFFERSGIXPROC __glewTagSampleBufferSGIX; }
# 10246 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORTABLEPARAMETERFVSGIPROC __glewColorTableParameterfvSGI; }
# 10247 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORTABLEPARAMETERIVSGIPROC __glewColorTableParameterivSGI; }
# 10248 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLORTABLESGIPROC __glewColorTableSGI; }
# 10249 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOPYCOLORTABLESGIPROC __glewCopyColorTableSGI; }
# 10250 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEPARAMETERFVSGIPROC __glewGetColorTableParameterfvSGI; }
# 10251 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLEPARAMETERIVSGIPROC __glewGetColorTableParameterivSGI; }
# 10252 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGETCOLORTABLESGIPROC __glewGetColorTableSGI; }
# 10254 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLFINISHTEXTURESUNXPROC __glewFinishTextureSUNX; }
# 10256 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORBSUNPROC __glewGlobalAlphaFactorbSUN; }
# 10257 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORDSUNPROC __glewGlobalAlphaFactordSUN; }
# 10258 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORFSUNPROC __glewGlobalAlphaFactorfSUN; }
# 10259 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORISUNPROC __glewGlobalAlphaFactoriSUN; }
# 10260 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORSSUNPROC __glewGlobalAlphaFactorsSUN; }
# 10261 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORUBSUNPROC __glewGlobalAlphaFactorubSUN; }
# 10262 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORUISUNPROC __glewGlobalAlphaFactoruiSUN; }
# 10263 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLGLOBALALPHAFACTORUSSUNPROC __glewGlobalAlphaFactorusSUN; }
# 10265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREADVIDEOPIXELSSUNPROC __glewReadVideoPixelsSUN; }
# 10267 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEPOINTERSUNPROC __glewReplacementCodePointerSUN; }
# 10268 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUBSUNPROC __glewReplacementCodeubSUN; }
# 10269 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUBVSUNPROC __glewReplacementCodeubvSUN; }
# 10270 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUISUNPROC __glewReplacementCodeuiSUN; }
# 10271 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUIVSUNPROC __glewReplacementCodeuivSUN; }
# 10272 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUSSUNPROC __glewReplacementCodeusSUN; }
# 10273 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUSVSUNPROC __glewReplacementCodeusvSUN; }
# 10275 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR3FVERTEX3FSUNPROC __glewColor3fVertex3fSUN; }
# 10276 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR3FVERTEX3FVSUNPROC __glewColor3fVertex3fvSUN; }
# 10277 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC __glewColor4fNormal3fVertex3fSUN; }
# 10278 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewColor4fNormal3fVertex3fvSUN; }
# 10279 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4UBVERTEX2FSUNPROC __glewColor4ubVertex2fSUN; }
# 10280 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4UBVERTEX2FVSUNPROC __glewColor4ubVertex2fvSUN; }
# 10281 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4UBVERTEX3FSUNPROC __glewColor4ubVertex3fSUN; }
# 10282 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLCOLOR4UBVERTEX3FVSUNPROC __glewColor4ubVertex3fvSUN; }
# 10283 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMAL3FVERTEX3FSUNPROC __glewNormal3fVertex3fSUN; }
# 10284 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLNORMAL3FVERTEX3FVSUNPROC __glewNormal3fVertex3fvSUN; }
# 10285 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC __glewReplacementCodeuiColor3fVertex3fSUN; }
# 10286 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC __glewReplacementCodeuiColor3fVertex3fvSUN; }
# 10287 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC __glewReplacementCodeuiColor4fNormal3fVertex3fSUN; }
# 10288 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiColor4fNormal3fVertex3fvSUN; }
# 10289 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC __glewReplacementCodeuiColor4ubVertex3fSUN; }
# 10290 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC __glewReplacementCodeuiColor4ubVertex3fvSUN; }
# 10291 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC __glewReplacementCodeuiNormal3fVertex3fSUN; }
# 10292 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiNormal3fVertex3fvSUN; }
# 10293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC __glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN; }
# 10294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN; }
# 10295 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC __glewReplacementCodeuiTexCoord2fNormal3fVertex3fSUN; }
# 10296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC __glewReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN; }
# 10297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC __glewReplacementCodeuiTexCoord2fVertex3fSUN; }
# 10298 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC __glewReplacementCodeuiTexCoord2fVertex3fvSUN; }
# 10299 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC __glewReplacementCodeuiVertex3fSUN; }
# 10300 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC __glewReplacementCodeuiVertex3fvSUN; }
# 10301 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC __glewTexCoord2fColor3fVertex3fSUN; }
# 10302 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC __glewTexCoord2fColor3fVertex3fvSUN; }
# 10303 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC __glewTexCoord2fColor4fNormal3fVertex3fSUN; }
# 10304 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC __glewTexCoord2fColor4fNormal3fVertex3fvSUN; }
# 10305 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC __glewTexCoord2fColor4ubVertex3fSUN; }
# 10306 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC __glewTexCoord2fColor4ubVertex3fvSUN; }
# 10307 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC __glewTexCoord2fNormal3fVertex3fSUN; }
# 10308 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC __glewTexCoord2fNormal3fVertex3fvSUN; }
# 10309 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FVERTEX3FSUNPROC __glewTexCoord2fVertex3fSUN; }
# 10310 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD2FVERTEX3FVSUNPROC __glewTexCoord2fVertex3fvSUN; }
# 10311 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC __glewTexCoord4fColor4fNormal3fVertex4fSUN; }
# 10312 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC __glewTexCoord4fColor4fNormal3fVertex4fvSUN; }
# 10313 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD4FVERTEX4FSUNPROC __glewTexCoord4fVertex4fSUN; }
# 10314 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLTEXCOORD4FVERTEX4FVSUNPROC __glewTexCoord4fVertex4fvSUN; }
# 10316 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern PFNGLADDSWAPHINTRECTWINPROC __glewAddSwapHintRectWIN; }
# 10323 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_VERSION_1_1; }
# 10324 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_VERSION_1_2; }
# 10325 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_VERSION_1_3; }
# 10326 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_VERSION_1_4; }
# 10327 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_VERSION_1_5; }
# 10328 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_VERSION_2_0; }
# 10329 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_VERSION_2_1; }
# 10330 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_3DFX_multisample; }
# 10331 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_3DFX_tbuffer; }
# 10332 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_3DFX_texture_compression_FXT1; }
# 10333 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_client_storage; }
# 10334 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_element_array; }
# 10335 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_fence; }
# 10336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_float_pixels; }
# 10337 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_pixel_buffer; }
# 10338 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_specular_vector; }
# 10339 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_texture_range; }
# 10340 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_transform_hint; }
# 10341 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_vertex_array_object; }
# 10342 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_vertex_array_range; }
# 10343 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_APPLE_ycbcr_422; }
# 10344 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_color_buffer_float; }
# 10345 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_depth_texture; }
# 10346 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_draw_buffers; }
# 10347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_fragment_program; }
# 10348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_fragment_program_shadow; }
# 10349 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_fragment_shader; }
# 10350 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_half_float_pixel; }
# 10351 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_imaging; }
# 10352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_matrix_palette; }
# 10353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_multisample; }
# 10354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_multitexture; }
# 10355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_occlusion_query; }
# 10356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_pixel_buffer_object; }
# 10357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_point_parameters; }
# 10358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_point_sprite; }
# 10359 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_shader_objects; }
# 10360 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_shading_language_100; }
# 10361 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_shadow; }
# 10362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_shadow_ambient; }
# 10363 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_border_clamp; }
# 10364 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_compression; }
# 10365 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_cube_map; }
# 10366 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_env_add; }
# 10367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_env_combine; }
# 10368 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_env_crossbar; }
# 10369 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_env_dot3; }
# 10370 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_float; }
# 10371 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_mirrored_repeat; }
# 10372 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_non_power_of_two; }
# 10373 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_texture_rectangle; }
# 10374 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_transpose_matrix; }
# 10375 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_vertex_blend; }
# 10376 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_vertex_buffer_object; }
# 10377 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_vertex_program; }
# 10378 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_vertex_shader; }
# 10379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ARB_window_pos; }
# 10380 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATIX_point_sprites; }
# 10381 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATIX_texture_env_combine3; }
# 10382 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATIX_texture_env_route; }
# 10383 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATIX_vertex_shader_output_point_size; }
# 10384 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_draw_buffers; }
# 10385 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_element_array; }
# 10386 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_envmap_bumpmap; }
# 10387 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_fragment_shader; }
# 10388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_map_object_buffer; }
# 10389 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_pn_triangles; }
# 10390 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_separate_stencil; }
# 10391 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_text_fragment_shader; }
# 10392 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_texture_compression_3dc; }
# 10393 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_texture_env_combine3; }
# 10394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_texture_float; }
# 10395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_texture_mirror_once; }
# 10396 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_vertex_array_object; }
# 10397 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_vertex_attrib_array_object; }
# 10398 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_ATI_vertex_streams; }
# 10399 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_422_pixels; }
# 10400 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_Cg_shader; }
# 10401 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_abgr; }
# 10402 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_bgra; }
# 10403 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_bindable_uniform; }
# 10404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_blend_color; }
# 10405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_blend_equation_separate; }
# 10406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_blend_func_separate; }
# 10407 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_blend_logic_op; }
# 10408 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_blend_minmax; }
# 10409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_blend_subtract; }
# 10410 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_clip_volume_hint; }
# 10411 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_cmyka; }
# 10412 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_color_subtable; }
# 10413 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_compiled_vertex_array; }
# 10414 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_convolution; }
# 10415 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_coordinate_frame; }
# 10416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_copy_texture; }
# 10417 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_cull_vertex; }
# 10418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_depth_bounds_test; }
# 10419 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_draw_buffers2; }
# 10420 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_draw_instanced; }
# 10421 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_draw_range_elements; }
# 10422 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_fog_coord; }
# 10423 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_fragment_lighting; }
# 10424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_framebuffer_blit; }
# 10425 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_framebuffer_multisample; }
# 10426 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_framebuffer_object; }
# 10427 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_framebuffer_sRGB; }
# 10428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_geometry_shader4; }
# 10429 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_gpu_program_parameters; }
# 10430 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_gpu_shader4; }
# 10431 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_histogram; }
# 10432 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_index_array_formats; }
# 10433 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_index_func; }
# 10434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_index_material; }
# 10435 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_index_texture; }
# 10436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_light_texture; }
# 10437 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_misc_attribute; }
# 10438 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_multi_draw_arrays; }
# 10439 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_multisample; }
# 10440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_packed_depth_stencil; }
# 10441 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_packed_float; }
# 10442 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_packed_pixels; }
# 10443 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_paletted_texture; }
# 10444 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_pixel_buffer_object; }
# 10445 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_pixel_transform; }
# 10446 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_pixel_transform_color_table; }
# 10447 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_point_parameters; }
# 10448 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_polygon_offset; }
# 10449 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_rescale_normal; }
# 10450 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_scene_marker; }
# 10451 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_secondary_color; }
# 10452 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_separate_specular_color; }
# 10453 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_shadow_funcs; }
# 10454 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_shared_texture_palette; }
# 10455 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_stencil_clear_tag; }
# 10456 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_stencil_two_side; }
# 10457 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_stencil_wrap; }
# 10458 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_subtexture; }
# 10459 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture; }
# 10460 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture3D; }
# 10461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_array; }
# 10462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_buffer_object; }
# 10463 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_compression_dxt1; }
# 10464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_compression_latc; }
# 10465 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_compression_rgtc; }
# 10466 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_compression_s3tc; }
# 10467 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_cube_map; }
# 10468 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_edge_clamp; }
# 10469 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_env; }
# 10470 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_env_add; }
# 10471 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_env_combine; }
# 10472 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_env_dot3; }
# 10473 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_filter_anisotropic; }
# 10474 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_integer; }
# 10475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_lod_bias; }
# 10476 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_mirror_clamp; }
# 10477 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_object; }
# 10478 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_perturb_normal; }
# 10479 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_rectangle; }
# 10480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_sRGB; }
# 10481 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_texture_shared_exponent; }
# 10482 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_timer_query; }
# 10483 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_vertex_array; }
# 10484 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_vertex_shader; }
# 10485 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_EXT_vertex_weighting; }
# 10486 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_GREMEDY_string_marker; }
# 10487 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_HP_convolution_border_modes; }
# 10488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_HP_image_transform; }
# 10489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_HP_occlusion_test; }
# 10490 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_HP_texture_lighting; }
# 10491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_IBM_cull_vertex; }
# 10492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_IBM_multimode_draw_arrays; }
# 10493 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_IBM_rasterpos_clip; }
# 10494 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_IBM_static_data; }
# 10495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_IBM_texture_mirrored_repeat; }
# 10496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_IBM_vertex_array_lists; }
# 10497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_INGR_color_clamp; }
# 10498 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_INGR_interlace_read; }
# 10499 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_INTEL_parallel_arrays; }
# 10500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_INTEL_texture_scissor; }
# 10501 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_KTX_buffer_region; }
# 10502 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_MESAX_texture_stack; }
# 10503 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_MESA_pack_invert; }
# 10504 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_MESA_resize_buffers; }
# 10505 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_MESA_window_pos; }
# 10506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_MESA_ycbcr_texture; }
# 10507 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_blend_square; }
# 10508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_copy_depth_to_color; }
# 10509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_depth_buffer_float; }
# 10510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_depth_clamp; }
# 10511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_depth_range_unclamped; }
# 10512 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_evaluators; }
# 10513 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_fence; }
# 10514 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_float_buffer; }
# 10515 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_fog_distance; }
# 10516 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_fragment_program; }
# 10517 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_fragment_program2; }
# 10518 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_fragment_program4; }
# 10519 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_fragment_program_option; }
# 10520 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_framebuffer_multisample_coverage; }
# 10521 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_geometry_program4; }
# 10522 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_geometry_shader4; }
# 10523 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_gpu_program4; }
# 10524 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_half_float; }
# 10525 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_light_max_exponent; }
# 10526 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_multisample_filter_hint; }
# 10527 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_occlusion_query; }
# 10528 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_packed_depth_stencil; }
# 10529 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_parameter_buffer_object; }
# 10530 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_pixel_data_range; }
# 10531 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_point_sprite; }
# 10532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_primitive_restart; }
# 10533 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_register_combiners; }
# 10534 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_register_combiners2; }
# 10535 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texgen_emboss; }
# 10536 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texgen_reflection; }
# 10537 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texture_compression_vtc; }
# 10538 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texture_env_combine4; }
# 10539 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texture_expand_normal; }
# 10540 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texture_rectangle; }
# 10541 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texture_shader; }
# 10542 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texture_shader2; }
# 10543 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_texture_shader3; }
# 10544 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_transform_feedback; }
# 10545 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_array_range; }
# 10546 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_array_range2; }
# 10547 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_program; }
# 10548 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_program1_1; }
# 10549 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_program2; }
# 10550 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_program2_option; }
# 10551 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_program3; }
# 10552 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_NV_vertex_program4; }
# 10553 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_OES_byte_coordinates; }
# 10554 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_OES_compressed_paletted_texture; }
# 10555 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_OES_read_format; }
# 10556 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_OES_single_precision; }
# 10557 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_OML_interlace; }
# 10558 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_OML_resample; }
# 10559 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_OML_subsample; }
# 10560 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_PGI_misc_hints; }
# 10561 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_PGI_vertex_hints; }
# 10562 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_REND_screen_coordinates; }
# 10563 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_S3_s3tc; }
# 10564 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_color_range; }
# 10565 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_detail_texture; }
# 10566 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_fog_function; }
# 10567 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_generate_mipmap; }
# 10568 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_multisample; }
# 10569 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_pixel_texture; }
# 10570 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_sharpen_texture; }
# 10571 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_texture4D; }
# 10572 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_texture_border_clamp; }
# 10573 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_texture_edge_clamp; }
# 10574 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_texture_filter4; }
# 10575 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_texture_lod; }
# 10576 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIS_texture_select; }
# 10577 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_async; }
# 10578 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_async_histogram; }
# 10579 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_async_pixel; }
# 10580 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_blend_alpha_minmax; }
# 10581 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_clipmap; }
# 10582 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_depth_texture; }
# 10583 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_flush_raster; }
# 10584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_fog_offset; }
# 10585 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_fog_texture; }
# 10586 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_fragment_specular_lighting; }
# 10587 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_framezoom; }
# 10588 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_interlace; }
# 10589 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_ir_instrument1; }
# 10590 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_list_priority; }
# 10591 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_pixel_texture; }
# 10592 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_pixel_texture_bits; }
# 10593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_reference_plane; }
# 10594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_resample; }
# 10595 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_shadow; }
# 10596 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_shadow_ambient; }
# 10597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_sprite; }
# 10598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_tag_sample_buffer; }
# 10599 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_texture_add_env; }
# 10600 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_texture_coordinate_clamp; }
# 10601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_texture_lod_bias; }
# 10602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_texture_multi_buffer; }
# 10603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_texture_range; }
# 10604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_texture_scale_bias; }
# 10605 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_vertex_preclip; }
# 10606 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_vertex_preclip_hint; }
# 10607 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGIX_ycrcb; }
# 10608 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGI_color_matrix; }
# 10609 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGI_color_table; }
# 10610 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SGI_texture_color_table; }
# 10611 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUNX_constant_data; }
# 10612 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUN_convolution_border_modes; }
# 10613 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUN_global_alpha; }
# 10614 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUN_mesh_array; }
# 10615 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUN_read_video_pixels; }
# 10616 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUN_slice_accum; }
# 10617 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUN_triangle_list; }
# 10618 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_SUN_vertex; }
# 10619 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_WIN_phong_shading; }
# 10620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_WIN_specular_fog; }
# 10621 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean __GLEW_WIN_swap_hint; }
# 10660 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLenum glewInit();
# 10661 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLboolean glewIsSupported(const char *);
# 10669 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" { extern GLboolean glewExperimental; }
# 10670 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" GLboolean glewGetExtension(const char *);
# 10671 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" const GLubyte *glewGetErrorString(GLenum);
# 10672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/GL/glew.h"
extern "C" const GLubyte *glewGetString(GLenum);
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
# 52 "simpleTexture3D.cu"
extern "C" { typedef unsigned uint; }
# 53 "simpleTexture3D.cu"
typedef unsigned char uchar;
# 49 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
extern "C" { typedef unsigned uint; }
# 50 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
extern "C" { typedef unsigned short ushort; }
# 85 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float lerp(float a, float b, float t)
# 86 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 87 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return a + t * (b - a);
# 88 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 91 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float clamp(float f, float a, float b)
# 92 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 93 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return fmaxf(a, fminf(f, b));
# 94 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 100 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator-(int2 &a)
# 101 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 102 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(-(a.x), -(a.y));
# 103 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 106 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator+(int2 a, int2 b)
# 107 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 108 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x + b.x, a.y + b.y);
# 109 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 110 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(int2 &a, int2 b)
# 111 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 112 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y;
# 113 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 116 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator-(int2 a, int2 b)
# 117 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 118 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x - b.x, a.y - b.y);
# 119 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 120 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(int2 &a, int2 b)
# 121 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 122 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y;
# 123 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 126 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator*(int2 a, int2 b)
# 127 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 128 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x * b.x, a.y * b.y);
# 129 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 130 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator*(int2 a, int s)
# 131 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 132 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x * s, a.y * s);
# 133 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 134 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int2 operator*(int s, int2 a)
# 135 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 136 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int2(a.x * s, a.y * s);
# 137 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 138 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(int2 &a, int s)
# 139 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 140 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s;
# 141 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 147 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 make_float2(float s)
# 148 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 149 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(s, s);
# 150 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 151 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 make_float2(int2 a)
# 152 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 153 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2((float)(a.x), (float)(a.y));
# 154 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 157 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator-(float2 &a)
# 158 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 159 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(-(a.x), -(a.y));
# 160 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 163 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator+(float2 a, float2 b)
# 164 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 165 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x + b.x, a.y + b.y);
# 166 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 167 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(float2 &a, float2 b)
# 168 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 169 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y;
# 170 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 173 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator-(float2 a, float2 b)
# 174 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 175 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x - b.x, a.y - b.y);
# 176 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 177 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(float2 &a, float2 b)
# 178 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 179 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y;
# 180 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 183 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator*(float2 a, float2 b)
# 184 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 185 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x * b.x, a.y * b.y);
# 186 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 187 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator*(float2 a, float s)
# 188 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 189 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x * s, a.y * s);
# 190 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 191 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator*(float s, float2 a)
# 192 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 193 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x * s, a.y * s);
# 194 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 195 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(float2 &a, float s)
# 196 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 197 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s;
# 198 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 201 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator/(float2 a, float2 b)
# 202 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 203 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(a.x / b.x, a.y / b.y);
# 204 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 205 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator/(float2 a, float s)
# 206 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 207 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 208 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 209 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 210 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 operator/(float s, float2 a)
# 211 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 212 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 213 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 214 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 215 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(float2 &a, float s)
# 216 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 217 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 218 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a *= inv);
# 219 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 222 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 lerp(float2 a, float2 b, float t)
# 223 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 224 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a + (t * (b - a)));
# 225 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 228 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 clamp(float2 v, float a, float b)
# 229 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 230 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(clamp(v.x, a, b), clamp(v.y, a, b));
# 231 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 233 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 clamp(float2 v, float2 a, float2 b)
# 234 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 235 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y));
# 236 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 239 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float dot(float2 a, float2 b)
# 240 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 241 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return a.x * b.x + a.y * b.y;
# 242 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 245 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float length(float2 v)
# 246 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 247 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return sqrtf(dot(v, v));
# 248 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 251 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 normalize(float2 v)
# 252 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 253 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float invLen = rsqrtf(dot(v, v));
# 254 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (v * invLen);
# 255 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 258 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 floor(const float2 v)
# 259 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 260 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(floor(v.x), floor(v.y));
# 261 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 264 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 reflect(float2 i, float2 n)
# 265 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 266 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (i - (((2.0F) * n) * dot(n, i)));
# 267 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 270 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float2 fabs(float2 v)
# 271 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 272 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float2(fabs(v.x), fabs(v.y));
# 273 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 279 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float s)
# 280 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 281 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(s, s, s);
# 282 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 283 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float2 a)
# 284 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 285 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x, a.y, (0.0F));
# 286 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 287 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float2 a, float s)
# 288 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 289 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x, a.y, s);
# 290 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 291 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(float4 a)
# 292 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 293 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x, a.y, a.z);
# 294 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 295 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 make_float3(int3 a)
# 296 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 297 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3((float)(a.x), (float)(a.y), (float)(a.z));
# 298 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 301 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator-(float3 &a)
# 302 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 303 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(-(a.x), -(a.y), -(a.z));
# 304 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 307 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float3 fminf(float3 a, float3 b)
# 308 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 309 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z));
# 310 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 313 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float3 fmaxf(float3 a, float3 b)
# 314 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 315 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z));
# 316 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 319 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator+(float3 a, float3 b)
# 320 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 321 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x + b.x, a.y + b.y, a.z + b.z);
# 322 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 323 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator+(float3 a, float b)
# 324 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 325 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x + b, a.y + b, a.z + b);
# 326 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 327 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(float3 &a, float3 b)
# 328 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 329 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
# 330 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 333 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator-(float3 a, float3 b)
# 334 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 335 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x - b.x, a.y - b.y, a.z - b.z);
# 336 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 337 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator-(float3 a, float b)
# 338 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 339 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x - b, a.y - b, a.z - b);
# 340 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 341 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(float3 &a, float3 b)
# 342 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 343 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
# 344 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 347 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator*(float3 a, float3 b)
# 348 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 349 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x * b.x, a.y * b.y, a.z * b.z);
# 350 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 351 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator*(float3 a, float s)
# 352 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 353 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x * s, a.y * s, a.z * s);
# 354 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 355 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator*(float s, float3 a)
# 356 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 357 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x * s, a.y * s, a.z * s);
# 358 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 359 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(float3 &a, float s)
# 360 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 361 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 362 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 365 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator/(float3 a, float3 b)
# 366 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 367 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.x / b.x, a.y / b.y, a.z / b.z);
# 368 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 369 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator/(float3 a, float s)
# 370 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 371 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 372 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 373 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 374 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 operator/(float s, float3 a)
# 375 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 376 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 377 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 378 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 379 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(float3 &a, float s)
# 380 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 381 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 382 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a *= inv);
# 383 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 386 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 lerp(float3 a, float3 b, float t)
# 387 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 388 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a + (t * (b - a)));
# 389 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 392 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 clamp(float3 v, float a, float b)
# 393 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 394 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 395 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 397 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 clamp(float3 v, float3 a, float3 b)
# 398 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 399 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 400 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 403 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float dot(float3 a, float3 b)
# 404 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 405 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a.x * b.x + a.y * b.y) + a.z * b.z;
# 406 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 409 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 cross(float3 a, float3 b)
# 410 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 411 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x);
# 412 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 415 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float length(float3 v)
# 416 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 417 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return sqrtf(dot(v, v));
# 418 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 421 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 normalize(float3 v)
# 422 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 423 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float invLen = rsqrtf(dot(v, v));
# 424 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (v * invLen);
# 425 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 428 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 floor(const float3 v)
# 429 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 430 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(floor(v.x), floor(v.y), floor(v.z));
# 431 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 434 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 reflect(float3 i, float3 n)
# 435 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 436 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (i - (((2.0F) * n) * dot(n, i)));
# 437 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 440 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float3 fabs(float3 v)
# 441 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 442 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float3(fabs(v.x), fabs(v.y), fabs(v.z));
# 443 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 449 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(float s)
# 450 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 451 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(s, s, s, s);
# 452 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 453 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(float3 a)
# 454 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 455 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x, a.y, a.z, (0.0F));
# 456 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 457 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(float3 a, float w)
# 458 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 459 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x, a.y, a.z, w);
# 460 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 461 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 make_float4(int4 a)
# 462 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 463 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4((float)(a.x), (float)(a.y), (float)(a.z), (float)(a.w));
# 464 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 467 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator-(float4 &a)
# 468 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 469 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(-(a.x), -(a.y), -(a.z), -(a.w));
# 470 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 473 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float4 fminf(float4 a, float4 b)
# 474 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 475 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(fminf(a.x, b.x), fminf(a.y, b.y), fminf(a.z, b.z), fminf(a.w, b.w));
# 476 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 479 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
static inline float4 fmaxf(float4 a, float4 b)
# 480 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 481 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(fmaxf(a.x, b.x), fmaxf(a.y, b.y), fmaxf(a.z, b.z), fmaxf(a.w, b.w));
# 482 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 485 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator+(float4 a, float4 b)
# 486 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 487 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w);
# 488 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 489 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(float4 &a, float4 b)
# 490 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 491 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z; (a.w) += b.w;
# 492 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 495 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator-(float4 a, float4 b)
# 496 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 497 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w);
# 498 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 499 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(float4 &a, float4 b)
# 500 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 501 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z; (a.w) -= b.w;
# 502 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 505 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator*(float4 a, float s)
# 506 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 507 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
# 508 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 509 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator*(float s, float4 a)
# 510 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 511 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x * s, a.y * s, a.z * s, a.w * s);
# 512 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 513 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(float4 &a, float s)
# 514 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 515 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s; (a.w) *= s;
# 516 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 519 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator/(float4 a, float4 b)
# 520 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 521 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(a.x / b.x, a.y / b.y, a.z / b.z, a.w / b.w);
# 522 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 523 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator/(float4 a, float s)
# 524 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 525 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 526 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 527 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 528 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 operator/(float s, float4 a)
# 529 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 530 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 531 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a * inv);
# 532 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 533 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(float4 &a, float s)
# 534 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 535 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float inv = ((1.0F) / s);
# 536 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a *= inv);
# 537 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 540 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 lerp(float4 a, float4 b, float t)
# 541 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 542 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (a + (t * (b - a)));
# 543 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 546 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 clamp(float4 v, float a, float b)
# 547 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 548 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b), clamp(v.w, a, b));
# 549 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 551 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 clamp(float4 v, float4 a, float4 b)
# 552 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 553 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z), clamp(v.w, a.w, b.w));
# 554 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 557 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float dot(float4 a, float4 b)
# 558 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 559 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return ((a.x * b.x + a.y * b.y) + a.z * b.z) + a.w * b.w;
# 560 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 563 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float length(float4 r)
# 564 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 565 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return sqrtf(dot(r, r));
# 566 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 569 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 normalize(float4 v)
# 570 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 571 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
auto float invLen = rsqrtf(dot(v, v));
# 572 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return (v * invLen);
# 573 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 576 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 floor(const float4 v)
# 577 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 578 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(floor(v.x), floor(v.y), floor(v.z), floor(v.w));
# 579 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 582 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline float4 fabs(float4 v)
# 583 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 584 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_float4(fabs(v.x), fabs(v.y), fabs(v.z), fabs(v.w));
# 585 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 591 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 make_int3(int s)
# 592 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 593 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(s, s, s);
# 594 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 595 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 make_int3(float3 a)
# 596 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 597 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3((int)(a.x), (int)(a.y), (int)(a.z));
# 598 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 601 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator-(int3 &a)
# 602 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 603 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(-(a.x), -(a.y), -(a.z));
# 604 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 607 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 min(int3 a, int3 b)
# 608 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 609 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
# 610 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 613 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 max(int3 a, int3 b)
# 614 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 615 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
# 616 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 619 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator+(int3 a, int3 b)
# 620 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 621 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x + b.x, a.y + b.y, a.z + b.z);
# 622 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 623 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(int3 &a, int3 b)
# 624 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 625 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
# 626 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 629 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator-(int3 a, int3 b)
# 630 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 631 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x - b.x, a.y - b.y, a.z - b.z);
# 632 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 634 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(int3 &a, int3 b)
# 635 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 636 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
# 637 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 640 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator*(int3 a, int3 b)
# 641 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 642 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x * b.x, a.y * b.y, a.z * b.z);
# 643 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 644 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator*(int3 a, int s)
# 645 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 646 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x * s, a.y * s, a.z * s);
# 647 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 648 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator*(int s, int3 a)
# 649 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 650 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x * s, a.y * s, a.z * s);
# 651 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 652 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(int3 &a, int s)
# 653 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 654 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 655 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 658 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator/(int3 a, int3 b)
# 659 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 660 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x / b.x, a.y / b.y, a.z / b.z);
# 661 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 662 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator/(int3 a, int s)
# 663 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 664 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x / s, a.y / s, a.z / s);
# 665 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 666 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 operator/(int s, int3 a)
# 667 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 668 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(a.x / s, a.y / s, a.z / s);
# 669 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 670 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(int3 &a, int s)
# 671 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 672 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) /= s; (a.y) /= s; (a.z) /= s;
# 673 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 676 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int clamp(int f, int a, int b)
# 677 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 678 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return max(a, min(f, b));
# 679 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 681 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 clamp(int3 v, int a, int b)
# 682 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 683 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 684 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 686 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline int3 clamp(int3 v, int3 a, int3 b)
# 687 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 688 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_int3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 689 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 696 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 make_uint3(uint s)
# 697 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 698 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(s, s, s);
# 699 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 700 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 make_uint3(float3 a)
# 701 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 702 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3((unsigned)(a.x), (unsigned)(a.y), (unsigned)(a.z));
# 703 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 706 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 min(uint3 a, uint3 b)
# 707 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 708 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(min(a.x, b.x), min(a.y, b.y), min(a.z, b.z));
# 709 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 712 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 max(uint3 a, uint3 b)
# 713 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 714 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(max(a.x, b.x), max(a.y, b.y), max(a.z, b.z));
# 715 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 718 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator+(uint3 a, uint3 b)
# 719 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 720 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x + b.x, a.y + b.y, a.z + b.z);
# 721 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 722 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator+=(uint3 &a, uint3 b)
# 723 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 724 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) += b.x; (a.y) += b.y; (a.z) += b.z;
# 725 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 728 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator-(uint3 a, uint3 b)
# 729 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 730 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x - b.x, a.y - b.y, a.z - b.z);
# 731 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 733 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator-=(uint3 &a, uint3 b)
# 734 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 735 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) -= b.x; (a.y) -= b.y; (a.z) -= b.z;
# 736 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 739 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator*(uint3 a, uint3 b)
# 740 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 741 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x * b.x, a.y * b.y, a.z * b.z);
# 742 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 743 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator*(uint3 a, uint s)
# 744 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 745 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x * s, a.y * s, a.z * s);
# 746 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 747 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator*(uint s, uint3 a)
# 748 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 749 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x * s, a.y * s, a.z * s);
# 750 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 751 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator*=(uint3 &a, uint s)
# 752 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 753 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) *= s; (a.y) *= s; (a.z) *= s;
# 754 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 757 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator/(uint3 a, uint3 b)
# 758 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 759 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x / b.x, a.y / b.y, a.z / b.z);
# 760 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 761 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator/(uint3 a, uint s)
# 762 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 763 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x / s, a.y / s, a.z / s);
# 764 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 765 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 operator/(uint s, uint3 a)
# 766 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 767 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(a.x / s, a.y / s, a.z / s);
# 768 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 769 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline void operator/=(uint3 &a, uint s)
# 770 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 771 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
(a.x) /= s; (a.y) /= s; (a.z) /= s;
# 772 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 775 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint clamp(uint f, uint a, uint b)
# 776 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 777 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return max(a, min(f, b));
# 778 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 780 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 clamp(uint3 v, uint a, uint b)
# 781 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 782 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(clamp(v.x, a, b), clamp(v.y, a, b), clamp(v.z, a, b));
# 783 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 785 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
inline uint3 clamp(uint3 v, uint3 a, uint3 b)
# 786 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
{
# 787 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
return make_uint3(clamp(v.x, a.x, b.x), clamp(v.y, a.y, b.y), clamp(v.z, a.z, b.z));
# 788 "/usr/local/NVIDIA_CUDA_SDK/common/inc/cutil_math.h"
}
# 35 "simpleTexture3D_kernel.cu"
static texture< unsigned char, 3, cudaReadModeNormalizedFloat> tex;

# 1 "/tmp/tmpxft_00001ddd_00000000-1_simpleTexture3D.cudafe1.stub.h" 1

extern "C" {


extern void __device_stub__Z8d_renderPjjjf(uint *, uint, uint, float);


}
# 38 "simpleTexture3D_kernel.cu" 2
# 57 "simpleTexture3D.cu"
const char *volumeFilename = ("Bucky.raw");
# 58 "simpleTexture3D.cu"
static const cudaExtent volumeSize = (make_cudaExtent(32, 32, 32));
# 60 "simpleTexture3D.cu"
static const uint width = (512); static const uint height = (512);
# 61 "simpleTexture3D.cu"
static const dim3 blockSize(16, 16, 1);
# 62 "simpleTexture3D.cu"
static const dim3 gridSize((width) / blockSize.x, (height) / blockSize.y);
# 64 "simpleTexture3D.cu"
float w = ((0.5));
# 66 "simpleTexture3D.cu"
cudaArray *d_volumeArray = (0);
# 67 "simpleTexture3D.cu"
GLuint pbo;
# 69 "simpleTexture3D.cu"
bool linearFiltering = true;
# 70 "simpleTexture3D.cu"
bool animate = true;
# 71 "simpleTexture3D.cu"
unsigned count = (0);
# 72 "simpleTexture3D.cu"
unsigned limit = (2);
# 73 "simpleTexture3D.cu"
bool runTest = false;
# 76 "simpleTexture3D.cu"
void render()
# 77 "simpleTexture3D.cu"
{
# 79 "simpleTexture3D.cu"
auto uint *d_output;
# 80 "simpleTexture3D.cu"
__cudaSafeCall(cudaGLMapBufferObject((void **)(&d_output), pbo), "simpleTexture3D.cu", 80);
# 83 "simpleTexture3D.cu"
cudaConfigureCall(gridSize, blockSize) ? ((void)0) : __device_stub__Z8d_renderPjjjf(d_output, width, height, w);
# 84 "simpleTexture3D.cu"
__cutilCheckMsg("kernel failed", "simpleTexture3D.cu", 84);
# 86 "simpleTexture3D.cu"
__cudaSafeCall(cudaGLUnmapBufferObject(pbo), "simpleTexture3D.cu", 86);
# 87 "simpleTexture3D.cu"
}
# 90 "simpleTexture3D.cu"
void display()
# 91 "simpleTexture3D.cu"
{
# 92 "simpleTexture3D.cu"
render();
# 95 "simpleTexture3D.cu"
glClear(16384);
# 98 "simpleTexture3D.cu"
glDisable(2929);
# 99 "simpleTexture3D.cu"
glRasterPos2i(0, 0);
# 100 "simpleTexture3D.cu"
__glewBindBufferARB(35052, pbo);
# 101 "simpleTexture3D.cu"
glDrawPixels(width, height, 6408, 5121, 0);
# 102 "simpleTexture3D.cu"
__glewBindBufferARB(35052, 0);
# 104 "simpleTexture3D.cu"
glutSwapBuffers();
# 105 "simpleTexture3D.cu"
glutReportErrors();
# 107 "simpleTexture3D.cu"
++count;
# 108 "simpleTexture3D.cu"
if (count >= limit)
# 109 "simpleTexture3D.cu"
{
# 110 "simpleTexture3D.cu"
count = (0);
# 111 "simpleTexture3D.cu"
if (runTest)
# 112 "simpleTexture3D.cu"
{
# 113 "simpleTexture3D.cu"
exit(0);
# 114 "simpleTexture3D.cu"
}
# 115 "simpleTexture3D.cu"
}
# 117 "simpleTexture3D.cu"
}
# 119 "simpleTexture3D.cu"
void idle()
# 120 "simpleTexture3D.cu"
{
# 121 "simpleTexture3D.cu"
if (animate) {
# 122 "simpleTexture3D.cu"
w += (0.009999999776F);
# 123 "simpleTexture3D.cu"
glutPostRedisplay();
# 124 "simpleTexture3D.cu"
}
# 125 "simpleTexture3D.cu"
}
# 127 "simpleTexture3D.cu"
void keyboard(unsigned char key, int x, int y)
# 128 "simpleTexture3D.cu"
{
# 129 "simpleTexture3D.cu"
switch (key) {
# 130 "simpleTexture3D.cu"
case 27:
# 131 "simpleTexture3D.cu"
exit(0);
# 132 "simpleTexture3D.cu"
break;
# 133 "simpleTexture3D.cu"
case '=':
# 134 "simpleTexture3D.cu"
case '+':
# 135 "simpleTexture3D.cu"
w += (0.01000000000000000021);
# 136 "simpleTexture3D.cu"
break;
# 137 "simpleTexture3D.cu"
case '-':
# 138 "simpleTexture3D.cu"
w -= (0.01000000000000000021);
# 139 "simpleTexture3D.cu"
break;
# 140 "simpleTexture3D.cu"
case 'f':
# 141 "simpleTexture3D.cu"
linearFiltering = !linearFiltering;
# 142 "simpleTexture3D.cu"
(tex.filterMode) = linearFiltering ? cudaFilterModeLinear : cudaFilterModePoint;
# 143 "simpleTexture3D.cu"
break;
# 144 "simpleTexture3D.cu"
case ' ':
# 145 "simpleTexture3D.cu"
animate = !animate;
# 146 "simpleTexture3D.cu"
break;
# 147 "simpleTexture3D.cu"
default:
# 148 "simpleTexture3D.cu"
break;
# 149 "simpleTexture3D.cu"
}
# 150 "simpleTexture3D.cu"
glutPostRedisplay();
# 151 "simpleTexture3D.cu"
}
# 153 "simpleTexture3D.cu"
void reshape(int x, int y)
# 154 "simpleTexture3D.cu"
{
# 155 "simpleTexture3D.cu"
glViewport(0, 0, x, y);
# 157 "simpleTexture3D.cu"
glMatrixMode(5888);
# 158 "simpleTexture3D.cu"
glLoadIdentity();
# 160 "simpleTexture3D.cu"
glMatrixMode(5889);
# 161 "simpleTexture3D.cu"
glLoadIdentity();
# 162 "simpleTexture3D.cu"
glOrtho((0.0), (1.0), (0.0), (1.0), (0.0), (1.0));
# 163 "simpleTexture3D.cu"
}
# 165 "simpleTexture3D.cu"
void initCuda(const uchar *h_volume, cudaExtent volumeSize)
# 166 "simpleTexture3D.cu"
{
# 168 "simpleTexture3D.cu"
auto cudaChannelFormatDesc channelDesc = cudaCreateChannelDesc< unsigned char> ();
# 169 "simpleTexture3D.cu"
__cudaSafeCall(cudaMalloc3DArray(&d_volumeArray, &channelDesc, volumeSize), "simpleTexture3D.cu", 169);
# 172 "simpleTexture3D.cu"
auto cudaMemcpy3DParms copyParams = {(0)};
# 173 "simpleTexture3D.cu"
(copyParams.srcPtr) = make_cudaPitchedPtr((void *)h_volume, volumeSize.width * sizeof(uchar), volumeSize.width, volumeSize.height);
# 174 "simpleTexture3D.cu"
(copyParams.dstArray) = d_volumeArray;
# 175 "simpleTexture3D.cu"
(copyParams.extent) = volumeSize;
# 176 "simpleTexture3D.cu"
(copyParams.kind) = cudaMemcpyHostToDevice;
# 177 "simpleTexture3D.cu"
__cudaSafeCall(cudaMemcpy3D(&copyParams), "simpleTexture3D.cu", 177);
# 180 "simpleTexture3D.cu"
(tex.normalized) = (true);
# 181 "simpleTexture3D.cu"
(tex.filterMode) = cudaFilterModeLinear;
# 182 "simpleTexture3D.cu"
((tex.addressMode)[0]) = cudaAddressModeWrap;
# 183 "simpleTexture3D.cu"
((tex.addressMode)[1]) = cudaAddressModeWrap;
# 184 "simpleTexture3D.cu"
((tex.addressMode)[2]) = cudaAddressModeWrap;
# 187 "simpleTexture3D.cu"
__cudaSafeCall(cudaBindTextureToArray(tex, d_volumeArray, channelDesc), "simpleTexture3D.cu", 187);
# 188 "simpleTexture3D.cu"
}
# 190 "simpleTexture3D.cu"
void cleanup()
# 191 "simpleTexture3D.cu"
{
# 192 "simpleTexture3D.cu"
__cudaSafeCall(cudaGLUnregisterBufferObject(pbo), "simpleTexture3D.cu", 192);
# 193 "simpleTexture3D.cu"
__glewDeleteBuffersARB(1, &pbo);
# 194 "simpleTexture3D.cu"
}
# 196 "simpleTexture3D.cu"
void initOpenGL()
# 197 "simpleTexture3D.cu"
{
# 199 "simpleTexture3D.cu"
__glewGenBuffersARB(1, &pbo);
# 200 "simpleTexture3D.cu"
__glewBindBufferARB(35052, pbo);
# 201 "simpleTexture3D.cu"
__glewBufferDataARB(35052, (((width) * (height)) * sizeof(GLubyte)) * (4), 0, 35040);
# 202 "simpleTexture3D.cu"
__glewBindBufferARB(35052, 0);
# 204 "simpleTexture3D.cu"
__cudaSafeCall(cudaGLRegisterBufferObject(pbo), "simpleTexture3D.cu", 204);
# 205 "simpleTexture3D.cu"
printf("Test PASSED\n");
# 206 "simpleTexture3D.cu"
}
# 209 "simpleTexture3D.cu"
uchar *loadRawFile(const char *filename, size_t size)
# 210 "simpleTexture3D.cu"
{
# 211 "simpleTexture3D.cu"
auto FILE *fp = fopen(filename, "rb");
# 212 "simpleTexture3D.cu"
if (!(fp)) {
# 213 "simpleTexture3D.cu"
fprintf(stderr, "Error opening file \'%s\'\n", filename);
# 214 "simpleTexture3D.cu"
return 0;
# 215 "simpleTexture3D.cu"
}
# 217 "simpleTexture3D.cu"
auto uchar *data = ((uchar *)malloc(size));
# 218 "simpleTexture3D.cu"
auto size_t read = fread(data, 1, size, fp);
# 219 "simpleTexture3D.cu"
fclose(fp);
# 221 "simpleTexture3D.cu"
printf("Read \'%s\', %d bytes\n", filename, read);
# 223 "simpleTexture3D.cu"
return data;
# 224 "simpleTexture3D.cu"
}
# 230 "simpleTexture3D.cu"
int main(int argc, char **argv)
# 231 "simpleTexture3D.cu"
{
# 233 "simpleTexture3D.cu"
if (cutCheckCmdLineFlag(argc, (const char **)argv, "device"))
# 234 "simpleTexture3D.cu"
{
# 235 "simpleTexture3D.cu"
cutilDeviceInit(argc, argv);
# 236 "simpleTexture3D.cu"
} else
# 238 "simpleTexture3D.cu"
{
# 239 "simpleTexture3D.cu"
cudaSetDevice(cutGetMaxGflopsDeviceId());
# 240 "simpleTexture3D.cu"
}
# 242 "simpleTexture3D.cu"
runTest = !(cutCheckCmdLineFlag(argc, (const char **)argv, "noqatest"));
# 245 "simpleTexture3D.cu"
auto const char *path = (cutFindFilePath(volumeFilename, argv[0]));
# 246 "simpleTexture3D.cu"
if (path == (0)) {
# 247 "simpleTexture3D.cu"
fprintf(stderr, "Error finding file \'%s\'\n", volumeFilename);
# 248 "simpleTexture3D.cu"
exit(1);
# 249 "simpleTexture3D.cu"
}
# 251 "simpleTexture3D.cu"
auto size_t size = ((volumeSize.width * volumeSize.height) * volumeSize.depth);
# 252 "simpleTexture3D.cu"
auto uchar *h_volume = loadRawFile(path, size);
# 253 "simpleTexture3D.cu"
initCuda(h_volume, volumeSize);
# 254 "simpleTexture3D.cu"
free(h_volume);
# 256 "simpleTexture3D.cu"
printf("Press space to toggle animation\nPress \'+\' and \'-\' to change displayed slice\n");
# 260 "simpleTexture3D.cu"
glutInit(&argc, argv);
# 261 "simpleTexture3D.cu"
glutInitDisplayMode(0 | 2);
# 262 "simpleTexture3D.cu"
glutInitWindowSize(width, height);
# 263 "simpleTexture3D.cu"
glutCreateWindow("CUDA 3D texture");
# 264 "simpleTexture3D.cu"
glutDisplayFunc(display);
# 265 "simpleTexture3D.cu"
glutKeyboardFunc(keyboard);
# 266 "simpleTexture3D.cu"
glutReshapeFunc(reshape);
# 267 "simpleTexture3D.cu"
glutIdleFunc(idle);
# 269 "simpleTexture3D.cu"
glewInit();
# 270 "simpleTexture3D.cu"
if (!(glewIsSupported("GL_VERSION_2_0 GL_ARB_pixel_buffer_object"))) {
# 271 "simpleTexture3D.cu"
fprintf(stderr, "Required OpenGL extensions missing.");
# 272 "simpleTexture3D.cu"
cudaThreadExit();
# 273 "simpleTexture3D.cu"
exit(-1);
# 274 "simpleTexture3D.cu"
}
# 275 "simpleTexture3D.cu"
initOpenGL();
# 277 "simpleTexture3D.cu"
atexit(cleanup);
# 279 "simpleTexture3D.cu"
glutMainLoop();
# 281 "simpleTexture3D.cu"
cudaThreadExit();
# 282 "simpleTexture3D.cu"
return 0;
# 283 "simpleTexture3D.cu"
}

# 1 "/tmp/tmpxft_00001ddd_00000000-1_simpleTexture3D.cudafe1.stub.c" 1

extern "C" {

# 1 "/tmp/tmpxft_00001ddd_00000000-3_simpleTexture3D.fatbin.c" 1
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
# 2 "/tmp/tmpxft_00001ddd_00000000-3_simpleTexture3D.fatbin.c" 2




extern "C" {


static const unsigned long long __deviceText_$sm_13$[] = {
0x6365746968637261ull,0x6d737b2065727574ull,0x6962610a7d33315full,0x206e6f6973726576ull,
0x6f6d0a7d317b2020ull,0x202020656d616e64ull,0x696275637b202020ull,0x6c706d61730a7d6eull,
0x616e090a7b207265ull,0x203d20202020656dull,0x786574090a786574ull,0x30203d2074696e75ull,
0x2065646f630a7d0aull,0x20656d616e090a7bull,0x725f64385a5f203dull,0x6a6a507265646e65ull,
0x6d656d6c090a666aull,0x6d73090a30203d20ull,0x0a3633203d206d65ull,0x203d202067657209ull,
0x2020726162090a38ull,0x6e6f63090a30203dull,0x0909090a7b207473ull,0x20656d616e676573ull,
0x0a74736e6f63203dull,0x756e676573090909ull,0x090a31203d20206dull,0x74657366666f0909ull,
0x09090a30203d2020ull,0x2020736574796209ull,0x09090a3231203d20ull,0x09090a7b206d656dull,
0x3030386537783009ull,0x3030783020303030ull,0x3020666633303030ull,0x3030303038653378ull,
0x090a7d09090a2030ull,0x6f636e6962090a7dull,0x3009090a7b206564ull,0x3063343030306178ull,
0x3032343078302039ull,0x6178302030383730ull,0x2064303234303030ull,0x3730303234307830ull,
0x783009090a203038ull,0x3131303030303061ull,0x3030303430783020ull,0x3061783020303837ull,
0x3020353063633030ull,0x3837343032343478ull,0x36783009090a2030ull,0x2064303430333030ull,
0x3730313030367830ull,0x3830627830203038ull,0x7830206466333030ull,0x3863373031353036ull,
0x3061783009090a20ull,0x3020313136303030ull,0x3837343030343478ull,0x3238306378302030ull,
0x3078302031313830ull,0x2030383630303430ull,0x383063783009090aull,0x7830203530323032ull,
0x3038363030343030ull,0x3032383064783020ull,0x3030783020313032ull,0x0a20303837303034ull,
0x3030306178300909ull,0x3078302035316534ull,0x2030383730303234ull,0x3434303030617830ull,
0x3234307830203931ull,0x090a203038373030ull,0x3030303061783009ull,0x3430783020643130ull,
0x3020303837303030ull,0x3065633030306178ull,0x3032343478302039ull,0x09090a2030383734ull,
0x3230303030397830ull,0x3030307830203130ull,0x7830203038373030ull,0x3531613036303036ull,
0x6331303036783020ull,0x3009090a20303837ull,0x6635303038306278ull,0x3135303678302064ull,
0x6378302038633730ull,0x2031303830303030ull,0x3730303030307830ull,0x783009090a203038ull,
0x3530613030303061ull,0x3430303434783020ull,0x3063783020303837ull,0x3020353032303238ull,
0x3836303034303078ull,0x63783009090a2030ull,0x2039303430323830ull,0x3630303430307830ull,
0x3030397830203038ull,0x7830203930343030ull,0x3038373030303030ull,0x3033783009090a20ull,
0x3020646664633330ull,0x6337303132343678ull,0x3230306378302038ull,0x3178302034303230ull,
0x2038303066303031ull,0x303033783009090aull,0x7830206466666335ull,0x3863323031323436ull,
0x3030383266783020ull,0x3030783020313030ull,0x0a20343837303030ull,0x3030303378300909ull,
0x3078302033303030ull,0x2030303130303030ull,0x6363353030367830ull,0x3230367830203530ull,
0x090a203038376330ull,0x3030303063783009ull,0x3430783020393030ull,0x3020333030663733ull,
0x3032303230303378ull,0x3031346378302031ull,0x09090a2030383730ull,0x3430303030617830ull,
0x3034387830203530ull,0x7830203038373436ull,0x3130386330303032ull,0x3030323430783020ull,
0x3009090a20303837ull,0x3030306530306478ull,0x3063306178302035ull,0x7d090a2031383730ull,
0x00000000000a7d0aull
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
0x2f20676e696c6970ull,0x78706d742f706d74ull,0x31303030305f7466ull,0x303030305f646464ull,
0x5f30312d30303030ull,0x6554656c706d6973ull,0x2e44336572757478ull,0x2820692e33707063ull,
0x4263632f706d742full,0x617a4253792e2349ull,0x2d2d2f2f090a294eull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2f2f090a0a2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x704f202f2f090a2dull,0x090a3a736e6f6974ull,
0x2d2d2d2d2d2d2f2full,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2f090a2d2d2d2d2dull,
0x656772615420202full,0x49202c7874703a74ull,0x33315f6d733a4153ull,0x6e6169646e45202cull,
0x2c656c7474696c3aull,0x7265746e696f5020ull,0x34363a657a695320ull,0x4f2d20202f2f090aull,
0x6d6974704f280933ull,0x206e6f6974617a69ull,0x090a296c6576656cull,0x0930672d20202f2full,
0x6c20677562654428ull,0x2f090a296c657665ull,0x2809326d2d20202full,0x612074726f706552ull,
0x6569726f73697664ull,0x2d2d2f2f090a2973ull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,0x2d2d2d2d2d2d2d2dull,
0x2d2d2d2d2d2d2d2dull,0x6c69662e090a0a2dull,0x6f633c2209310965ull,0x696c2d646e616d6dull,
0x662e090a223e656eull,0x2f22093209656c69ull,0x78706d742f706d74ull,0x31303030305f7466ull,
0x303030305f646464ull,0x735f392d30303030ull,0x786554656c706d69ull,0x632e443365727574ull,
0x672e326566616475ull,0x69662e090a227570ull,0x752f22093309656cull,0x672f62696c2f7273ull,
0x365f3638782f6363ull,0x2d78756e696c2d34ull,0x2e332e342f756e67ull,0x64756c636e692f33ull,
0x6665646474732f65ull,0x69662e090a22682eull,0x682f22093409656cull,0x616964672f656d6full,
0x706d65742f736f6dull,0x69622f616475632full,0x6e692f2e2e2f2f6eull,0x72632f6564756c63ull,
0x6563697665642f74ull,0x656d69746e75725full,0x69662e090a22682eull,0x682f22093509656cull,
0x616964672f656d6full,0x706d65742f736f6dull,0x69622f616475632full,0x6e692f2e2e2f2f6eull,
0x6f682f6564756c63ull,0x6e696665645f7473ull,0x2e090a22682e7365ull,0x22093609656c6966ull,
0x64672f656d6f682full,0x65742f736f6d6169ull,0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,
0x2f6564756c636e69ull,0x5f6e69746c697562ull,0x22682e7365707974ull,0x09656c69662e090aull,
0x656d6f682f220937ull,0x736f6d616964672full,0x75632f706d65742full,0x2f2f6e69622f6164ull,
0x756c636e692f2e2eull,0x63697665642f6564ull,0x2e73657079745f65ull,0x6c69662e090a2268ull,
0x6f682f2209380965ull,0x6d616964672f656dull,0x2f706d65742f736full,0x6e69622f61647563ull,
0x636e692f2e2e2f2full,0x6972642f6564756cull,0x657079745f726576ull,0x662e090a22682e73ull,
0x2f22093909656c69ull,0x6964672f656d6f68ull,0x6d65742f736f6d61ull,0x622f616475632f70ull,
0x692f2e2e2f2f6e69ull,0x742f6564756c636eull,0x745f657275747865ull,0x0a22682e73657079ull,
0x3109656c69662e09ull,0x656d6f682f220930ull,0x736f6d616964672full,0x75632f706d65742full,
0x2f2f6e69622f6164ull,0x756c636e692f2e2eull,0x6f746365762f6564ull,0x2e73657079745f72ull,
0x6c69662e090a2268ull,0x682f220931310965ull,0x616964672f656d6full,0x706d65742f736f6dull,
0x69622f616475632full,0x6e692f2e2e2f2f6eull,0x65642f6564756c63ull,0x75616c5f65636976ull,
0x617261705f68636eull,0x682e73726574656dull,0x656c69662e090a22ull,0x6f682f2209323109ull,
0x6d616964672f656dull,0x2f706d65742f736full,0x6e69622f61647563ull,0x636e692f2e2e2f2full,
0x7472632f6564756cull,0x656761726f74732full,0x682e7373616c635full,0x656c69662e090a22ull,
0x73752f2209333109ull,0x64756c636e692f72ull,0x742f737469622f65ull,0x0a22682e73657079ull,
0x3109656c69662e09ull,0x2f7273752f220934ull,0x2f6564756c636e69ull,0x0a22682e656d6974ull,
0x3109656c69662e09ull,0x6c706d6973220935ull,0x6572757478655465ull,0x656e72656b5f4433ull,
0x2e090a2275632e6cull,0x09363109656c6966ull,0x672f656d6f682f22ull,0x742f736f6d616964ull,
0x616475632f706d65ull,0x2e2e2f2f6e69622full,0x6564756c636e692full,0x5f6e6f6d6d6f632full,
0x6e6f6974636e7566ull,0x662e090a22682e73ull,0x2209373109656c69ull,0x64672f656d6f682full,
0x65742f736f6d6169ull,0x2f616475632f706dull,0x2f2e2e2f2f6e6962ull,0x2f6564756c636e69ull,
0x636e75662f747263ull,0x682e6f7263616d5full,0x656c69662e090a22ull,0x6f682f2209383109ull,
0x6d616964672f656dull,0x2f706d65742f736full,0x6e69622f61647563ull,0x636e692f2e2e2f2full,
0x74616d2f6564756cull,0x6974636e75665f68ull,0x090a22682e736e6full,0x393109656c69662eull,
0x2f656d6f682f2209ull,0x2f736f6d61696467ull,0x6475632f706d6574ull,0x2e2f2f6e69622f61ull,
0x64756c636e692f2eull,0x6563697665642f65ull,0x6f6974636e75665full,0x2e090a22682e736eull,
0x09303209656c6966ull,0x672f656d6f682f22ull,0x742f736f6d616964ull,0x616475632f706d65ull,
0x2e2e2f2f6e69622full,0x6564756c636e692full,0x6f635f6874616d2full,0x2e73746e6174736eull,
0x6c69662e090a2268ull,0x682f220931320965ull,0x616964672f656d6full,0x706d65742f736f6dull,
0x69622f616475632full,0x6e692f2e2e2f2f6eull,0x6d732f6564756c63ull,0x6d6f74615f31315full,
0x74636e75665f6369ull,0x0a22682e736e6f69ull,0x3209656c69662e09ull,0x656d6f682f220932ull,
0x736f6d616964672full,0x75632f706d65742full,0x2f2f6e69622f6164ull,0x756c636e692f2e2eull,
0x32315f6d732f6564ull,0x5f63696d6f74615full,0x6e6f6974636e7566ull,0x662e090a22682e73ull,
0x2209333209656c69ull,0x64672f656d6f682full,0x65742f736f6d6169ull,0x2f616475632f706dull,
0x2f2e2e2f2f6e6962ull,0x2f6564756c636e69ull,0x6f645f33315f6d73ull,0x6e75665f656c6275ull,
0x682e736e6f697463ull,0x656c69662e090a22ull,0x6f682f2209343209ull,0x6d616964672f656dull,
0x2f706d65742f736full,0x6e69622f61647563ull,0x636e692f2e2e2f2full,0x7865742f6564756cull,
0x7465665f65727574ull,0x74636e75665f6863ull,0x0a22682e736e6f69ull,0x3209656c69662e09ull,
0x656d6f682f220935ull,0x736f6d616964672full,0x75632f706d65742full,0x2f2f6e69622f6164ull,
0x756c636e692f2e2eull,0x5f6874616d2f6564ull,0x6e6f6974636e7566ull,0x74705f6c62645f73ull,
0x090a0a22682e3378ull,0x36752e207865742eull,0x0a0a3b7865742034ull,0x207972746e652e09ull,
0x6e65725f64385a5full,0x666a6a6a50726564ull,0x65722e090a7b090aull,0x25203233752e2067ull,
0x090a3b3e38323c72ull,0x36752e206765722eull,0x3e363c6472252034ull,0x206765722e090a3bull,
0x3c6625203233662eull,0x722e090a3b3e3232ull,0x646572702e206765ull,0x0a3b3e353c702520ull,
0x206d617261702e09ull,0x635f5f203436752eull,0x5f6d726170616475ull,0x6e65725f64385a5full,
0x666a6a6a50726564ull,0x757074756f5f645full,0x7261702e090a3b74ull,0x203233752e206d61ull,
0x6170616475635f5full,0x5f64385a5f5f6d72ull,0x6a507265646e6572ull,0x67616d695f666a6aull,
0x61702e090a3b5765ull,0x3233752e206d6172ull,0x70616475635f5f20ull,0x64385a5f5f6d7261ull,
0x507265646e65725full,0x616d695f666a6a6aull,0x702e090a3b486567ull,0x33662e206d617261ull,
0x616475635f5f2032ull,0x385a5f5f6d726170ull,0x7265646e65725f64ull,0x3b775f666a6a6a50ull,
0x3109636f6c2e090aull,0x240a300938330935ull,0x385a5f5f3142424cull,0x7265646e65725f64ull,
0x090a3a666a6a6a50ull,0x09393109636f6c2eull,0x090a300938323331ull,0x2e3233752e747663ull,
0x3172250920363175ull,0x646961746325202cull,0x2f092020203b782eull,0x2e747663090a202full,
0x203631752e323375ull,0x6e25202c32722509ull,0x20203b782e646974ull,0x090a202f2f092020ull,
0x6f6c2e34326c756dull,0x722509203233752eull,0x202c317225202c33ull,0x2f0920203b327225ull,
0x2e747663090a202full,0x203631752e323375ull,0x7425202c34722509ull,0x2020203b782e6469ull,
0x090a202f2f092020ull,0x203233752e646461ull,0x7225202c35722509ull,0x203b337225202c34ull,
0x2f09202020202020ull,0x2e747663090a202full,0x752e3233662e6e72ull,0x2c31662509203233ull,
0x2020203b35722520ull,0x090a202f2f092020ull,0x6d617261702e646cull,0x722509203233752eull,
0x75635f5f5b202c36ull,0x5f5f6d7261706164ull,0x646e65725f64385aull,0x5f666a6a6a507265ull,
0x3b5d576567616d69ull,0x393a6469202f2f09ull,0x616475635f5f2031ull,0x385a5f5f6d726170ull,
0x7265646e65725f64ull,0x6d695f666a6a6a50ull,0x3078302b57656761ull,0x6e722e747663090aull,
0x3233752e3233662eull,0x25202c3266250920ull,0x20202020203b3672ull,0x6f6d090a202f2f09ull,
0x2509203233662e76ull,0x3b326625202c3366ull,0x2020202020202020ull,0x202f2f0920202020ull,
0x3109636f6c2e090aull,0x3009303532310939ull,0x33662e736261090aull,0x202c346625092032ull,
0x202020203b326625ull,0x2020202020202020ull,0x6f6d090a202f2f09ull,0x2509203233662e76ull,
0x65376630202c3566ull,0x203b303030303038ull,0x202f2f0920202020ull,0x6536303730352e38ull,
0x746573090a37332bull,0x3233662e74672e70ull,0x25202c3170250920ull,0x3b356625202c3466ull,
0x0a202f2f09202020ull,0x6220317025214009ull,0x5f744c2409206172ull,0x2020203b31315f30ull,
0x0920202020202020ull,0x6f6c2e090a202f2full,0x3532310939310963ull,0x766f6d090a300931ull,
0x662509203233662eull,0x3865336630202c36ull,0x20203b3030303030ull,0x30202f2f09202020ull,
0x6c756d090a35322eull,0x662509203233662eull,0x202c316625202c31ull,0x202020203b366625ull,
0x0a202f2f09202020ull,0x393109636f6c2e09ull,0x0a30093235323109ull,0x3233662e766f6d09ull,
0x30202c3766250920ull,0x3030303038653366ull,0x0920202020203b30ull,0x0a35322e30202f2full,
0x3233662e6c756d09ull,0x25202c3366250920ull,0x3b376625202c3266ull,0x0920202020202020ull,
0x5f744c240a202f2full,0x2e090a3a31315f30ull,0x3409353109636f6cull,0x766964090a300933ull,
0x662509203233662eull,0x202c316625202c38ull,0x202020203b336625ull,0x0a202f2f09202020ull,
0x393109636f6c2e09ull,0x0a30093832333109ull,0x3233752e74766309ull,0x722509203631752eull,
0x6961746325202c37ull,0x092020203b792e64ull,0x747663090a202f2full,0x3631752e3233752eull,
0x25202c3872250920ull,0x203b792e6469746eull,0x0a202f2f09202020ull,0x6c2e34326c756d09ull,
0x2509203233752e6full,0x2c377225202c3972ull,0x0920203b38722520ull,0x747663090a202f2full,
0x3631752e3233752eull,0x202c303172250920ull,0x203b792e64697425ull,0x0a202f2f09202020ull,
0x3233752e64646109ull,0x202c313172250920ull,0x7225202c30317225ull,0x0920202020203b39ull,
0x747663090a202f2full,0x2e3233662e6e722eull,0x3166250920323375ull,0x203b31317225202cull,
0x0a202f2f09202020ull,0x617261702e646c09ull,0x2509203233752e6dull,0x5f5f5b202c323172ull,
0x6d72617061647563ull,0x65725f64385a5f5full,0x6a6a6a507265646eull,0x486567616d695f66ull,
0x6469202f2f093b5dull,0x75635f5f2030393aull,0x5f5f6d7261706164ull,0x646e65725f64385aull,
0x5f666a6a6a507265ull,0x302b486567616d69ull,0x2e747663090a3078ull,0x752e3233662e6e72ull,
0x2c39662509203233ull,0x20203b3231722520ull,0x090a202f2f092020ull,0x203233662e766f6dull,
0x6625202c33662509ull,0x2020202020203b39ull,0x2f09202020202020ull,0x636f6c2e090a202full,
0x3035323109393109ull,0x2e736261090a3009ull,0x3166250920323366ull,0x203b396625202c30ull,
0x2020202020202020ull,0x090a202f2f092020ull,0x203233662e766f6dull,0x30202c3131662509ull,
0x3030303038653766ull,0x2f09202020203b30ull,0x303730352e38202full,0x73090a37332b6536ull,
0x662e74672e707465ull,0x2c32702509203233ull,0x25202c3031662520ull,0x2f2f09203b313166ull,
0x3270252140090a20ull,0x4c24092061726220ull,0x203b33315f305f74ull,0x2020202020202020ull,
0x2e090a202f2f0920ull,0x3109393109636f6cull,0x6d090a3009313532ull,0x09203233662e766full,
0x6630202c32316625ull,0x3030303030386533ull,0x2f2f09202020203bull,0x6d090a35322e3020ull,
0x09203233662e6c75ull,0x316625202c316625ull,0x203b32316625202cull,0x2f2f092020202020ull,
0x09636f6c2e090a20ull,0x0932353231093931ull,0x662e766f6d090a30ull,0x3331662509203233ull,
0x303865336630202cull,0x2020203b30303030ull,0x322e30202f2f0920ull,0x662e6c756d090a35ull,
0x2c33662509203233ull,0x6625202c39662520ull,0x20202020203b3331ull,0x4c240a202f2f0920ull,
0x0a3a33315f305f74ull,0x353109636f6c2e09ull,0x6d090a3009343409ull,0x09203233662e766full,
0x6625202c34316625ull,0x2020202020203b38ull,0x2f2f092020202020ull,0x662e766964090a20ull,
0x3531662509203233ull,0x25202c316625202cull,0x20202020203b3366ull,0x6c090a202f2f0920ull,
0x2e6d617261702e64ull,0x3166250920323366ull,0x75635f5f5b202c36ull,0x5f5f6d7261706164ull,
0x646e65725f64385aull,0x5f666a6a6a507265ull,0x69202f2f093b5d77ull,0x635f5f2039393a64ull,
0x5f6d726170616475ull,0x6e65725f64385a5full,0x666a6a6a50726564ull,0x090a3078302b775full,
0x203233662e766f6dull,0x30202c3731662509ull,0x3030303030303066ull,0x2f09202020203b30ull,
0x786574090a30202full,0x752e34762e64332eull,0x7b203233662e3233ull,0x3172252c33317225ull,
0x252c353172252c34ull,0x65745b2c7d363172ull,0x2c343166257b2c78ull,0x3166252c35316625ull,
0x5d7d373166252c36ull,0x09636f6c2e090a3bull,0x0a30093634093531ull,0x3233732e766f6d09ull,
0x202c373172250920ull,0x2020203b33317225ull,0x0920202020202020ull,0x746573090a202f2full,
0x2e3233752e746c2eull,0x3172250920323375ull,0x202c357225202c38ull,0x202f2f093b367225ull,
0x33732e67656e090aull,0x2c39317225092032ull,0x20203b3831722520ull,0x2020202020202020ull,
0x6573090a202f2f09ull,0x3233752e746c2e74ull,0x722509203233752eull,0x31317225202c3032ull,
0x093b32317225202cull,0x67656e090a202f2full,0x722509203233732eull,0x30327225202c3132ull,
0x202020202020203bull,0x0a202f2f09202020ull,0x3233622e646e6109ull,0x202c323272250920ull,
0x7225202c39317225ull,0x09202020203b3132ull,0x766f6d090a202f2full,0x722509203233752eull,
0x20203b30202c3332ull,0x2020202020202020ull,0x0a202f2f09202020ull,0x71652e7074657309ull,
0x702509203233732eull,0x2c32327225202c33ull,0x09203b3332722520ull,0x702540090a202f2full,
0x2409206172622033ull,0x3b35315f305f744cull,0x2020202020202020ull,0x0a202f2f09202020ull,
0x353109636f6c2e09ull,0x6d090a3009313509ull,0x09203233622e766full,0x7225202c38316625ull,
0x20202020203b3731ull,0x2f2f092020202020ull,0x662e766f6d090a20ull,0x3931662509203233ull,
0x663733346630202cull,0x2020203b30303030ull,0x353532202f2f0920ull,0x33662e6c756d090aull,
0x2c30326625092032ull,0x25202c3831662520ull,0x202020203b393166ull,0x7663090a202f2f09ull,
0x33752e697a722e74ull,0x2509203233662e32ull,0x326625202c343272ull,0x202f2f0920203b30ull,
0x7261702e646c090aull,0x09203436752e6d61ull,0x5f5b202c31647225ull,0x726170616475635full,
0x725f64385a5f5f6dull,0x6a6a507265646e65ull,0x74756f5f645f666aull,0x2f2f093b5d747570ull,
0x203030313a646920ull,0x6170616475635f5full,0x5f64385a5f5f6d72ull,0x6a507265646e6572ull,
0x756f5f645f666a6aull,0x3078302b74757074ull,0x2e34326c756d090aull,0x09203233752e6f6cull,
0x7225202c35327225ull,0x3b367225202c3131ull,0x6461090a202f2f09ull,0x2509203233752e64ull,
0x357225202c363272ull,0x203b35327225202cull,0x202f2f0920202020ull,0x36752e747663090aull,
0x2509203233752e34ull,0x327225202c326472ull,0x2020202020203b36ull,0x756d090a202f2f09ull,
0x3436752e6f6c2e6cull,0x202c336472250920ull,0x3b34202c32647225ull,0x202f2f0920202020ull,
0x36752e646461090aull,0x2c34647225092034ull,0x25202c3164722520ull,0x202020203b336472ull,
0x7473090a202f2f09ull,0x2e6c61626f6c672eull,0x72255b0920323375ull,0x25202c5d302b3464ull,
0x202f2f093b343272ull,0x240a3130313a6469ull,0x3a35315f305f744cull,0x3109636f6c2e090aull,
0x090a300933350935ull,0x2020203b74697865ull,0x2020202020202020ull,0x2020202020202020ull,
0x2f09202020202020ull,0x6557444c240a202full,0x5f64385a5f5f646eull,0x6a507265646e6572ull,
0x207d090a3a666a6aull,0x5f64385a5f202f2full,0x6a507265646e6572ull,0x0000000a0a666a6aull
};


}


static __cudaFatPtxEntry __ptxEntries [] = {{(char*)"compute_13",(char*)__deviceText_$compute_13$},{0,0}};
static __cudaFatCubinEntry __cubinEntries[] = {{(char*)"sm_13",(char*)__deviceText_$sm_13$},{0,0}};
static __cudaFatDebugEntry __debugEntries[] = {{0,0}};



static __cudaFatCudaBinary __fatDeviceText __attribute__ ((section (".nvFatBinSegment")))= {0x1ee55a01,0x00000003,0x8ecc680c,(char*)"925690b2c68eaff5",(char*)"simpleTexture3D.cu",(char*)" ",__ptxEntries,__cubinEntries,__debugEntries,0,0,0,0,0};
# 5 "/tmp/tmpxft_00001ddd_00000000-1_simpleTexture3D.cudafe1.stub.c" 2
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
# 6 "/tmp/tmpxft_00001ddd_00000000-1_simpleTexture3D.cudafe1.stub.c" 2
struct __T20;
struct __T20 {uint *__par0;uint __par1;uint __par2;float __par3;int __dummy_field;};



static void __sti____cudaRegisterAll_50_tmpxft_00001ddd_00000000_7_simpleTexture3D_cpp1_ii_c14de7b3(void) __attribute__((__constructor__));
void __device_stub__Z8d_renderPjjjf(uint *__par0, uint __par1, uint __par2, float __par3){auto struct __T20 *__T21;
char __[256]; *(char**)&__T21 = __;if (cudaSetupArgument((void*)(char*)&__par0, sizeof(__par0), (size_t)&__T21->__par0 - (size_t)__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par1, sizeof(__par1), (size_t)&__T21->__par1 - (size_t)__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par2, sizeof(__par2), (size_t)&__T21->__par2 - (size_t)__T21) != cudaSuccess) return;if (cudaSetupArgument((void*)(char*)&__par3, sizeof(__par3), (size_t)&__T21->__par3 - (size_t)__T21) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)__device_stub__Z8d_renderPjjjf); (void)cudaLaunch(((char *)__device_stub__Z8d_renderPjjjf)); };}



static void __sti____cudaRegisterAll_50_tmpxft_00001ddd_00000000_7_simpleTexture3D_cpp1_ii_c14de7b3(void){__cudaFatCubinHandle = __cudaRegisterFatBinary((void*)(&__fatDeviceText)); atexit(__cudaUnregisterBinaryUtil);__cudaRegisterFunction(__cudaFatCubinHandle, (const char*)__device_stub__Z8d_renderPjjjf, (char*)"_Z8d_renderPjjjf", "_Z8d_renderPjjjf", (-1), (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0);__cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&tex, 0, "tex", 3, 1, 0);}

}
# 285 "simpleTexture3D.cu" 2
