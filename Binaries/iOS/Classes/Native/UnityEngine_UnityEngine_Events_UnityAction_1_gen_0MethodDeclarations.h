#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t109;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::.ctor(System.Object,System.IntPtr)
 void UnityAction_1__ctor_m1571 (UnityAction_1_t109 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::Invoke(T0)
 void UnityAction_1_Invoke_m12495 (UnityAction_1_t109 * __this, Color_t108  ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Color>::BeginInvoke(T0,System.AsyncCallback,System.Object)
 Object_t * UnityAction_1_BeginInvoke_m12496 (UnityAction_1_t109 * __this, Color_t108  ___arg0, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Color>::EndInvoke(System.IAsyncResult)
 void UnityAction_1_EndInvoke_m12497 (UnityAction_1_t109 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
