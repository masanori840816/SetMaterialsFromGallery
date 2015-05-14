#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t594;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t581;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t582;
// System.Object[]
struct ObjectU5BU5D_t295;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
 void InvokableCallList__ctor_m2940 (InvokableCallList_t594 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m2941 (InvokableCallList_t594 * __this, BaseInvokableCall_t581 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddListener_m2942 (InvokableCallList_t594 * __this, BaseInvokableCall_t581 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void InvokableCallList_RemoveListener_m2943 (InvokableCallList_t594 * __this, Object_t * ___targetObj, MethodInfo_t582 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
 void InvokableCallList_ClearPersistent_m2944 (InvokableCallList_t594 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
 void InvokableCallList_Invoke_m2945 (InvokableCallList_t594 * __this, ObjectU5BU5D_t295* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
