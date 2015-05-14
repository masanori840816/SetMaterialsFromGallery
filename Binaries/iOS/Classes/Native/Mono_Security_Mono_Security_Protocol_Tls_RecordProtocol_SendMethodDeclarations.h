#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1075;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1058;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t304;
// System.Threading.WaitHandle
struct WaitHandle_t1074;
// System.AsyncCallback
struct AsyncCallback_t39;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
 void SendRecordAsyncResult__ctor_m4938 (SendRecordAsyncResult_t1075 * __this, AsyncCallback_t39 * ___userCallback, Object_t * ___userState, HandshakeMessage_t1058 * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
 HandshakeMessage_t1058 * SendRecordAsyncResult_get_Message_m4939 (SendRecordAsyncResult_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
 Object_t * SendRecordAsyncResult_get_AsyncState_m4940 (SendRecordAsyncResult_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
 Exception_t304 * SendRecordAsyncResult_get_AsyncException_m4941 (SendRecordAsyncResult_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
 bool SendRecordAsyncResult_get_CompletedWithError_m4942 (SendRecordAsyncResult_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1074 * SendRecordAsyncResult_get_AsyncWaitHandle_m4943 (SendRecordAsyncResult_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
 bool SendRecordAsyncResult_get_IsCompleted_m4944 (SendRecordAsyncResult_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
 void SendRecordAsyncResult_SetComplete_m4945 (SendRecordAsyncResult_t1075 * __this, Exception_t304 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
 void SendRecordAsyncResult_SetComplete_m4946 (SendRecordAsyncResult_t1075 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
