#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t31;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t2337;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t23;

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_5MethodDeclarations.h"
#define UnityEvent_1__ctor_m1288(__this, method) (void)UnityEvent_1__ctor_m11867_gshared((UnityEvent_1_t2338 *)__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m11868(__this, ___call, method) (void)UnityEvent_1_AddListener_m11869_gshared((UnityEvent_1_t2338 *)__this, (UnityAction_1_t2157 *)___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m11870(__this, ___call, method) (void)UnityEvent_1_RemoveListener_m11871_gshared((UnityEvent_1_t2338 *)__this, (UnityAction_1_t2157 *)___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m1294(__this, ___name, ___targetObj, method) (MethodInfo_t582 *)UnityEvent_1_FindMethod_Impl_m11872_gshared((UnityEvent_1_t2338 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m1295(__this, ___target, ___theFunction, method) (BaseInvokableCall_t581 *)UnityEvent_1_GetDelegate_m11873_gshared((UnityEvent_1_t2338 *)__this, (Object_t *)___target, (MethodInfo_t582 *)___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m1296(__this/* static, unused */, ___action, method) (BaseInvokableCall_t581 *)UnityEvent_1_GetDelegate_m11874_gshared((Object_t *)__this/* static, unused */, (UnityAction_1_t2157 *)___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityEvent_1_Invoke_m1303(__this, ___arg0, method) (void)UnityEvent_1_Invoke_m11875_gshared((UnityEvent_1_t2338 *)__this, (Object_t *)___arg0, method)
