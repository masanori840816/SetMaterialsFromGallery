﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>
struct InvokableCall_1_t2659;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2658;
// System.Object[]
struct ObjectU5BU5D_t295;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(System.Object,System.Reflection.MethodInfo)
 void InvokableCall_1__ctor_m14235 (InvokableCall_1_t2659 * __this, Object_t * ___target, MethodInfo_t582 * ___theFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
 void InvokableCall_1__ctor_m14236 (InvokableCall_1_t2659 * __this, UnityAction_1_t2658 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Invoke(System.Object[])
 void InvokableCall_1_Invoke_m14237 (InvokableCall_1_t2659 * __this, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Vector2>::Find(System.Object,System.Reflection.MethodInfo)
 bool InvokableCall_1_Find_m14238 (InvokableCall_1_t2659 * __this, Object_t * ___targetObj, MethodInfo_t582 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
