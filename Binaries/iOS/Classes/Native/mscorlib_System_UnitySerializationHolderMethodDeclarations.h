#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1716;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1655;
// System.Reflection.Module
struct Module_t1160;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder__ctor_m9735 (UnitySerializationHolder_t1716 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetTypeData_m9736 (Object_t * __this/* static, unused */, Type_t * ___instance, SerializationInfo_t572 * ___info, StreamingContext_t573  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetDBNullData_m9737 (Object_t * __this/* static, unused */, DBNull_t1655 * ___instance, SerializationInfo_t572 * ___info, StreamingContext_t573  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetModuleData_m9738 (Object_t * __this/* static, unused */, Module_t1160 * ___instance, SerializationInfo_t572 * ___info, StreamingContext_t573  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetObjectData_m9739 (UnitySerializationHolder_t1716 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * UnitySerializationHolder_GetRealObject_m9740 (UnitySerializationHolder_t1716 * __this, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
