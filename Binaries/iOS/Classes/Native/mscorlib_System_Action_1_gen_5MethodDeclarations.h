#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Object>
struct Action_1_t2526;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Action_1__ctor_m13297_gshared (Action_1_t2526 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define Action_1__ctor_m13297(__this, ___object, ___method, method) (void)Action_1__ctor_m13297_gshared((Action_1_t2526 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
 void Action_1_Invoke_m13298_gshared (Action_1_t2526 * __this, Object_t * ___obj, MethodInfo* method);
#define Action_1_Invoke_m13298(__this, ___obj, method) (void)Action_1_Invoke_m13298_gshared((Action_1_t2526 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Action_1_BeginInvoke_m13300_gshared (Action_1_t2526 * __this, Object_t * ___obj, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define Action_1_BeginInvoke_m13300(__this, ___obj, ___callback, ___object, method) (Object_t *)Action_1_BeginInvoke_m13300_gshared((Action_1_t2526 *)__this, (Object_t *)___obj, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
 void Action_1_EndInvoke_m13302_gshared (Action_1_t2526 * __this, Object_t * ___result, MethodInfo* method);
#define Action_1_EndInvoke_m13302(__this, ___result, method) (void)Action_1_EndInvoke_m13302_gshared((Action_1_t2526 *)__this, (Object_t *)___result, method)
