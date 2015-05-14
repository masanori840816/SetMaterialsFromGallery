#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2157;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_1__ctor_m10476_gshared (UnityAction_1_t2157 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define UnityAction_1__ctor_m10476(__this, ___object, ___method, method) (void)UnityAction_1__ctor_m10476_gshared((UnityAction_1_t2157 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::Invoke(T0)
 void UnityAction_1_Invoke_m10477_gshared (UnityAction_1_t2157 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityAction_1_Invoke_m10477(__this, ___arg0, method) (void)UnityAction_1_Invoke_m10477_gshared((UnityAction_1_t2157 *)__this, (Object_t *)___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
 Object_t * UnityAction_1_BeginInvoke_m10478_gshared (UnityAction_1_t2157 * __this, Object_t * ___arg0, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_1_BeginInvoke_m10478(__this, ___arg0, ___callback, ___object, method) (Object_t *)UnityAction_1_BeginInvoke_m10478_gshared((UnityAction_1_t2157 *)__this, (Object_t *)___arg0, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_1_EndInvoke_m10479_gshared (UnityAction_1_t2157 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_1_EndInvoke_m10479(__this, ___result, method) (void)UnityAction_1_EndInvoke_m10479_gshared((UnityAction_1_t2157 *)__this, (Object_t *)___result, method)
