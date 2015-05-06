#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t2338;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2157;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;

// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
 void UnityEvent_1__ctor_m11867_gshared (UnityEvent_1_t2338 * __this, MethodInfo* method);
#define UnityEvent_1__ctor_m11867(__this, method) (void)UnityEvent_1__ctor_m11867_gshared((UnityEvent_1_t2338 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_AddListener_m11869_gshared (UnityEvent_1_t2338 * __this, UnityAction_1_t2157 * ___call, MethodInfo* method);
#define UnityEvent_1_AddListener_m11869(__this, ___call, method) (void)UnityEvent_1_AddListener_m11869_gshared((UnityEvent_1_t2338 *)__this, (UnityAction_1_t2157 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
 void UnityEvent_1_RemoveListener_m11871_gshared (UnityEvent_1_t2338 * __this, UnityAction_1_t2157 * ___call, MethodInfo* method);
#define UnityEvent_1_RemoveListener_m11871(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m11871_gshared((UnityEvent_1_t2338 *)__this, (UnityAction_1_t2157 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t582 * UnityEvent_1_FindMethod_Impl_m11872_gshared (UnityEvent_1_t2338 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m11872(__this, ___name, ___targetObj, method) (MethodInfo_t582 *)UnityEvent_1_FindMethod_Impl_m11872_gshared((UnityEvent_1_t2338 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t581 * UnityEvent_1_GetDelegate_m11873_gshared (UnityEvent_1_t2338 * __this, Object_t * ___target, MethodInfo_t582 * ___theFunction, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11873(__this, ___target, ___theFunction, method) (BaseInvokableCall_t581 *)UnityEvent_1_GetDelegate_m11873_gshared((UnityEvent_1_t2338 *)__this, (Object_t *)___target, (MethodInfo_t582 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Object>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
 BaseInvokableCall_t581 * UnityEvent_1_GetDelegate_m11874_gshared (Object_t * __this/* static, unused */, UnityAction_1_t2157 * ___action, MethodInfo* method);
#define UnityEvent_1_GetDelegate_m11874(__this/* static, unused */, ___action, method) (BaseInvokableCall_t581 *)UnityEvent_1_GetDelegate_m11874_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t2157 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
 void UnityEvent_1_Invoke_m11875_gshared (UnityEvent_1_t2338 * __this, Object_t * ___arg0, MethodInfo* method);
#define UnityEvent_1_Invoke_m11875(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m11875_gshared((UnityEvent_1_t2338 *)__this, (Object_t *)___arg0, method)
