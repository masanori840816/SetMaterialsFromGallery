#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t249;
// System.Object
struct Object_t;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t251;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1990 (Func_2_t249 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::Invoke(T)
 float Func_2_Invoke_m1991 (Func_2_t249 * __this, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m15252 (Func_2_t249 * __this, Object_t * ___arg1, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>::EndInvoke(System.IAsyncResult)
 float Func_2_EndInvoke_m15253 (Func_2_t249 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
