#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t3181;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void UnityAction_2__ctor_m17561_gshared (UnityAction_2_t3181 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define UnityAction_2__ctor_m17561(__this, ___object, ___method, method) (void)UnityAction_2__ctor_m17561_gshared((UnityAction_2_t3181 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::Invoke(T0,T1)
 void UnityAction_2_Invoke_m17562_gshared (UnityAction_2_t3181 * __this, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method);
#define UnityAction_2_Invoke_m17562(__this, ___arg0, ___arg1, method) (void)UnityAction_2_Invoke_m17562_gshared((UnityAction_2_t3181 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`2<System.Object,System.Object>::BeginInvoke(T0,T1,System.AsyncCallback,System.Object)
 Object_t * UnityAction_2_BeginInvoke_m17563_gshared (UnityAction_2_t3181 * __this, Object_t * ___arg0, Object_t * ___arg1, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define UnityAction_2_BeginInvoke_m17563(__this, ___arg0, ___arg1, ___callback, ___object, method) (Object_t *)UnityAction_2_BeginInvoke_m17563_gshared((UnityAction_2_t3181 *)__this, (Object_t *)___arg0, (Object_t *)___arg1, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 void UnityAction_2_EndInvoke_m17564_gshared (UnityAction_2_t3181 * __this, Object_t * ___result, MethodInfo* method);
#define UnityAction_2_EndInvoke_m17564(__this, ___result, method) (void)UnityAction_2_EndInvoke_m17564_gshared((UnityAction_2_t3181 *)__this, (Object_t *)___result, method)
