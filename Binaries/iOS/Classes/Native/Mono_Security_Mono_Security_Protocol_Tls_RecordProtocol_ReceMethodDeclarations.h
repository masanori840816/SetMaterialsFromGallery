#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1073;
// System.IO.Stream
struct Stream_t1057;
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

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m4926 (ReceiveRecordAsyncResult_t1073 * __this, AsyncCallback_t39 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t17* ___initialBuffer, Stream_t1057 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t1057 * ReceiveRecordAsyncResult_get_Record_m4927 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t17* ReceiveRecordAsyncResult_get_ResultingBuffer_m4928 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t17* ReceiveRecordAsyncResult_get_InitialBuffer_m4929 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m4930 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t304 * ReceiveRecordAsyncResult_get_AsyncException_m4931 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m4932 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1074 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m4933 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m4934 (ReceiveRecordAsyncResult_t1073 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m4935 (ReceiveRecordAsyncResult_t1073 * __this, Exception_t304 * ___ex, ByteU5BU5D_t17* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m4936 (ReceiveRecordAsyncResult_t1073 * __this, Exception_t304 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m4937 (ReceiveRecordAsyncResult_t1073 * __this, ByteU5BU5D_t17* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
