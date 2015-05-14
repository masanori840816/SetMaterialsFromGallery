#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t591;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;
// UnityEngine.Events.PersistentCall
struct PersistentCall_t590;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Type[]
struct TypeU5BU5D_t546;
// UnityEngine.Events.PersistentListenerMode
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"

// System.Void UnityEngine.Events.UnityEventBase::.ctor()
 void UnityEventBase__ctor_m2946 (UnityEventBase_t591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m1295 (UnityEventBase_t591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
 void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m1296 (UnityEventBase_t591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
 MethodInfo_t582 * UnityEventBase_FindMethod_m2947 (UnityEventBase_t591 * __this, PersistentCall_t590 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
 MethodInfo_t582 * UnityEventBase_FindMethod_m2948 (UnityEventBase_t591 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
 void UnityEventBase_DirtyPersistentCalls_m2949 (UnityEventBase_t591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
 void UnityEventBase_RebuildPersistentCallsIfNeeded_m2950 (UnityEventBase_t591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
 void UnityEventBase_AddCall_m2951 (UnityEventBase_t591 * __this, BaseInvokableCall_t581 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void UnityEventBase_RemoveListener_m2952 (UnityEventBase_t591 * __this, Object_t * ___targetObj, MethodInfo_t582 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
 void UnityEventBase_Invoke_m2953 (UnityEventBase_t591 * __this, ObjectU5BU5D_t295* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Events.UnityEventBase::ToString()
 String_t* UnityEventBase_ToString_m1294 (UnityEventBase_t591 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
 MethodInfo_t582 * UnityEventBase_GetValidMethodInfo_m2954 (Object_t * __this/* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t546* ___argumentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
