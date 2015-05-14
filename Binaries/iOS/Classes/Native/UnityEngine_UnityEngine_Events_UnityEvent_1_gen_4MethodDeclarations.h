#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t219;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t2726;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
 void UnityEvent_1__ctor_m1915 (UnityEvent_1_t219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m14740 (UnityEvent_1_t219 * __this, UnityAction_1_t2726 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m14741 (UnityEvent_1_t219 * __this, UnityAction_1_t2726 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t582 * UnityEvent_1_FindMethod_Impl_m1916 (UnityEvent_1_t219 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t581 * UnityEvent_1_GetDelegate_m1917 (UnityEvent_1_t219 * __this, Object_t * ___target, MethodInfo_t582 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t581 * UnityEvent_1_GetDelegate_m14742 (Object_t * __this/* static, unused */, UnityAction_1_t2726 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
 void UnityEvent_1_Invoke_m1918 (UnityEvent_1_t219 * __this, bool ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
