#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t1643;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t960;
// System.ResolveEventArgs
struct ResolveEventArgs_t1703;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m9795 (ResolveEventHandler_t1643 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t960 * ResolveEventHandler_Invoke_m9796 (ResolveEventHandler_t1643 * __this, Object_t * ___sender, ResolveEventArgs_t1703 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m9797 (ResolveEventHandler_t1643 * __this, Object_t * ___sender, ResolveEventArgs_t1703 * ___args, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t960 * ResolveEventHandler_EndInvoke_m9798 (ResolveEventHandler_t1643 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
