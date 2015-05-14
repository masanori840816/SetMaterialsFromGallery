#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>
struct UnityEvent_4_t3223;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;

// System.Void UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
 void UnityEvent_4__ctor_m17900_gshared (UnityEvent_4_t3223 * __this, MethodInfo* method);
#define UnityEvent_4__ctor_m17900(__this, method) (void)UnityEvent_4__ctor_m17900_gshared((UnityEvent_4_t3223 *)__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
 MethodInfo_t582 * UnityEvent_4_FindMethod_Impl_m17901_gshared (UnityEvent_4_t3223 * __this, String_t* ___name, Object_t * ___targetObj, MethodInfo* method);
#define UnityEvent_4_FindMethod_Impl_m17901(__this, ___name, ___targetObj, method) (MethodInfo_t582 *)UnityEvent_4_FindMethod_Impl_m17901_gshared((UnityEvent_4_t3223 *)__this, (String_t*)___name, (Object_t *)___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`4<System.Object,System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
 BaseInvokableCall_t581 * UnityEvent_4_GetDelegate_m17902_gshared (UnityEvent_4_t3223 * __this, Object_t * ___target, MethodInfo_t582 * ___theFunction, MethodInfo* method);
#define UnityEvent_4_GetDelegate_m17902(__this, ___target, ___theFunction, method) (BaseInvokableCall_t581 *)UnityEvent_4_GetDelegate_m17902_gshared((UnityEvent_4_t3223 *)__this, (Object_t *)___target, (MethodInfo_t582 *)___theFunction, method)
