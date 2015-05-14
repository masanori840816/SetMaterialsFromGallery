#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t1542;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
 void CallbackHandler__ctor_m8279 (CallbackHandler_t1542 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
 void CallbackHandler_Invoke_m8280 (CallbackHandler_t1542 * __this, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
 Object_t * CallbackHandler_BeginInvoke_m8281 (CallbackHandler_t1542 * __this, StreamingContext_t573  ___context, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
 void CallbackHandler_EndInvoke_m8282 (CallbackHandler_t1542 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
