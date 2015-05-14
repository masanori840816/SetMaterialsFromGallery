#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/Swapper
struct Swapper_t1155;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
 void Swapper__ctor_m6044 (Swapper_t1155 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
 void Swapper_Invoke_m6045 (Swapper_t1155 * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * Swapper_BeginInvoke_m6046 (Swapper_t1155 * __this, int32_t ___i, int32_t ___j, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
 void Swapper_EndInvoke_m6047 (Swapper_t1155 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
