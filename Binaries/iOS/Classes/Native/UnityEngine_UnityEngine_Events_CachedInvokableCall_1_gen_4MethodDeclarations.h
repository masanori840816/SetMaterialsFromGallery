#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Object>
struct CachedInvokableCall_1_t2155;
// UnityEngine.Object
struct Object_t185;
struct Object_t185_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t295;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
 void CachedInvokableCall_1__ctor_m10469_gshared (CachedInvokableCall_1_t2155 * __this, Object_t185 * ___target, MethodInfo_t582 * ___theFunction, Object_t * ___argument, MethodInfo* method);
#define CachedInvokableCall_1__ctor_m10469(__this, ___target, ___theFunction, ___argument, method) (void)CachedInvokableCall_1__ctor_m10469_gshared((CachedInvokableCall_1_t2155 *)__this, (Object_t185 *)___target, (MethodInfo_t582 *)___theFunction, (Object_t *)___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Object>::Invoke(System.Object[])
 void CachedInvokableCall_1_Invoke_m10471_gshared (CachedInvokableCall_1_t2155 * __this, ObjectU5BU5D_t295* ___args, MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m10471(__this, ___args, method) (void)CachedInvokableCall_1_Invoke_m10471_gshared((CachedInvokableCall_1_t2155 *)__this, (ObjectU5BU5D_t295*)___args, method)
