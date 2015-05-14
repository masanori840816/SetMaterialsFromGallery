#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t3222;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
 void UnityEvent_3__ctor_m17897_gshared (UnityEvent_3_t3222 * __this, MethodInfo* method);
#define UnityEvent_3__ctor_m17897(__this, method) (void)UnityEvent_3__ctor_m17897_gshared((UnityEvent_3_t3222 *)__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t582 * UnityEvent_3_FindMethod_Impl_m17898_gshared (UnityEvent_3_t3222 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m17898(__this, ___name, ___targetObj, method) (MethodInfo_t582 *)UnityEvent_3_FindMethod_Impl_m17898_gshared((UnityEvent_3_t3222 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t581 * UnityEvent_3_GetDelegate_m17899_gshared (UnityEvent_3_t3222 * __this, Object_t * ___target, MethodInfo_t582 * ___theFunction, MethodInfo* method);
#define UnityEvent_3_GetDelegate_m17899(__this, ___target, ___theFunction, method) (BaseInvokableCall_t581 *)UnityEvent_3_GetDelegate_m17899_gshared((UnityEvent_3_t3222 *)__this, (Object_t *)___target, (MethodInfo_t582 *)___theFunction, method)
