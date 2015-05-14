#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t1519;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t1475;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
 void HeaderHandler__ctor_m9779 (HeaderHandler_t1519 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
 Object_t * HeaderHandler_Invoke_m9780 (HeaderHandler_t1519 * __this, HeaderU5BU5D_t1475* ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
 Object_t * HeaderHandler_BeginInvoke_m9781 (HeaderHandler_t1519 * __this, HeaderU5BU5D_t1475* ___headers, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
 Object_t * HeaderHandler_EndInvoke_m9782 (HeaderHandler_t1519 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
