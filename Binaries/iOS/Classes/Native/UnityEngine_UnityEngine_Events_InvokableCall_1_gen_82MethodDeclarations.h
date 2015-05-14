#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t3188;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3189;
// System.Object[]
struct ObjectU5BU5D_t295;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m17586 (InvokableCall_1_t3188 * __this, Object_t * ___target, MethodInfo_t582 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m17587 (InvokableCall_1_t3188 * __this, UnityAction_1_t3189 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m17588 (InvokableCall_1_t3188 * __this, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m17589 (InvokableCall_1_t3188 * __this, Object_t * ___targetObj, MethodInfo_t582 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
