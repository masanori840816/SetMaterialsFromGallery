#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.PersistentCall
struct PersistentCall_t590;
// UnityEngine.Object
struct Object_t185;
struct Object_t185_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t580;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t591;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.PersistentCall::.ctor()
 void PersistentCall__ctor_m2925 (PersistentCall_t590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
 Object_t185 * PersistentCall_get_target_m2926 (PersistentCall_t590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.PersistentCall::get_methodName()
 String_t* PersistentCall_get_methodName_m2927 (PersistentCall_t590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
 int32_t PersistentCall_get_mode_m2928 (PersistentCall_t590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
 ArgumentCache_t580 * PersistentCall_get_arguments_m2929 (PersistentCall_t590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
 bool PersistentCall_IsValid_m2930 (PersistentCall_t590 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
 BaseInvokableCall_t581 * PersistentCall_GetRuntimeCall_m2931 (PersistentCall_t590 * __this, UnityEventBase_t591 * ___theEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
 BaseInvokableCall_t581 * PersistentCall_GetObjectCall_m2932 (Object_t * __this/* static, unused */, Object_t185 * ___target, MethodInfo_t582 * ___method, ArgumentCache_t580 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
