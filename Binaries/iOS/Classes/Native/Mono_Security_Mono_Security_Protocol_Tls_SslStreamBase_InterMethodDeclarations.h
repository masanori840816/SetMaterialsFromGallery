#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1088;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t304;
// System.Threading.WaitHandle
struct WaitHandle_t1074;
// System.AsyncCallback
struct AsyncCallback_t39;

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
 void InternalAsyncResult__ctor_m5043 (InternalAsyncResult_t1088 * __this, AsyncCallback_t39 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t17* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
 bool InternalAsyncResult_get_ProceedAfterHandshake_m5044 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
 bool InternalAsyncResult_get_FromWrite_m5045 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
 ByteU5BU5D_t17* InternalAsyncResult_get_Buffer_m5046 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
 int32_t InternalAsyncResult_get_Offset_m5047 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
 int32_t InternalAsyncResult_get_Count_m5048 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
 int32_t InternalAsyncResult_get_BytesRead_m5049 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
 Object_t * InternalAsyncResult_get_AsyncState_m5050 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
 Exception_t304 * InternalAsyncResult_get_AsyncException_m5051 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
 bool InternalAsyncResult_get_CompletedWithError_m5052 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1074 * InternalAsyncResult_get_AsyncWaitHandle_m5053 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
 bool InternalAsyncResult_get_IsCompleted_m5054 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
 void InternalAsyncResult_SetComplete_m5055 (InternalAsyncResult_t1088 * __this, Exception_t304 * ___ex, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
 void InternalAsyncResult_SetComplete_m5056 (InternalAsyncResult_t1088 * __this, Exception_t304 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
 void InternalAsyncResult_SetComplete_m5057 (InternalAsyncResult_t1088 * __this, int32_t ___bytesRead, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
 void InternalAsyncResult_SetComplete_m5058 (InternalAsyncResult_t1088 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
