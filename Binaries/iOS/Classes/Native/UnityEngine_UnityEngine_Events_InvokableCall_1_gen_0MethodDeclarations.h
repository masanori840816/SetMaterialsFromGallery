#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Object>
struct InvokableCall_1_t2156;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t2157;
// System.Object[]
struct ObjectU5BU5D_t295;

// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m10472_gshared (InvokableCall_1_t2156 * __this, Object_t * ___target, MethodInfo_t582 * ___theFunction, MethodInfo* method);
#define InvokableCall_1__ctor_m10472(__this, ___target, ___theFunction, method) (void)InvokableCall_1__ctor_m10472_gshared((InvokableCall_1_t2156 *)__this, (Object_t *)___target, (MethodInfo_t582 *)___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m10473_gshared (InvokableCall_1_t2156 * __this, UnityAction_1_t2157 * ___callback, MethodInfo* method);
#define InvokableCall_1__ctor_m10473(__this, ___callback, method) (void)InvokableCall_1__ctor_m10473_gshared((InvokableCall_1_t2156 *)__this, (UnityAction_1_t2157 *)___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Object>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m10474_gshared (InvokableCall_1_t2156 * __this, ObjectU5BU5D_t295* ___args, MethodInfo* method);
#define InvokableCall_1_Invoke_m10474(__this, ___args, method) (void)InvokableCall_1_Invoke_m10474_gshared((InvokableCall_1_t2156 *)__this, (ObjectU5BU5D_t295*)___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Object>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m10475_gshared (InvokableCall_1_t2156 * __this, Object_t * ___targetObj, MethodInfo_t582 * ___method, MethodInfo* method);
#define InvokableCall_1_Find_m10475(__this, ___targetObj, ___method, method) (bool)InvokableCall_1_Find_m10475_gshared((InvokableCall_1_t2156 *)__this, (Object_t *)___targetObj, (MethodInfo_t582 *)___method, method)
