#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1663;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Delegate
struct Delegate_t337;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder__ctor_m9356 (DelegateSerializationHolder_t1663 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder_GetDelegateData_m9357 (Object_t * __this/* static, unused */, Delegate_t337 * ___instance, SerializationInfo_t572 * ___info, StreamingContext_t573  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DelegateSerializationHolder_GetObjectData_m9358 (DelegateSerializationHolder_t1663 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * DelegateSerializationHolder_GetRealObject_m9359 (DelegateSerializationHolder_t1663 * __this, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
