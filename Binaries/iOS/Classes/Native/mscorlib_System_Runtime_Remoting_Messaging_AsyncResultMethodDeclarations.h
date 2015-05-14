#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t1467;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1074;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t991;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1464;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t1465;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t1466;

// System.Void System.Runtime.Remoting.Messaging.AsyncResult::.ctor()
 void AsyncResult__ctor_m7968 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncState()
 Object_t * AsyncResult_get_AsyncState_m7969 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1074 * AsyncResult_get_AsyncWaitHandle_m7970 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_CompletedSynchronously()
 bool AsyncResult_get_CompletedSynchronously_m7971 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_IsCompleted()
 bool AsyncResult_get_IsCompleted_m7972 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::get_EndInvokeCalled()
 bool AsyncResult_get_EndInvokeCalled_m7973 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_EndInvokeCalled(System.Boolean)
 void AsyncResult_set_EndInvokeCalled_m7974 (AsyncResult_t1467 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.AsyncResult::get_AsyncDelegate()
 Object_t * AsyncResult_get_AsyncDelegate_m7975 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.AsyncResult::get_NextSink()
 Object_t * AsyncResult_get_NextSink_m7976 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage,System.Runtime.Remoting.Messaging.IMessageSink)
 Object_t * AsyncResult_AsyncProcessMessage_m7977 (AsyncResult_t1467 * __this, Object_t * ___msg, Object_t * ___replySink, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::GetReplyMessage()
 Object_t * AsyncResult_GetReplyMessage_m7978 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetMessageCtrl(System.Runtime.Remoting.Messaging.IMessageCtrl)
 void AsyncResult_SetMessageCtrl_m7979 (AsyncResult_t1467 * __this, Object_t * ___mc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::SetCompletedSynchronously(System.Boolean)
 void AsyncResult_SetCompletedSynchronously_m7980 (AsyncResult_t1467 * __this, bool ___completed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::EndInvoke()
 Object_t * AsyncResult_EndInvoke_m7981 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage)
 Object_t * AsyncResult_SyncProcessMessage_m7982 (AsyncResult_t1467 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::get_CallMessage()
 MonoMethodMessage_t1464 * AsyncResult_get_CallMessage_m7983 (AsyncResult_t1467 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.AsyncResult::set_CallMessage(System.Runtime.Remoting.Messaging.MonoMethodMessage)
 void AsyncResult_set_CallMessage_m7984 (AsyncResult_t1467 * __this, MonoMethodMessage_t1464 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
