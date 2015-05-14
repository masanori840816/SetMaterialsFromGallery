#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberInfoSerializationHolder
struct MemberInfoSerializationHolder_t1385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t546;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.MemberInfoSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MemberInfoSerializationHolder__ctor_m7689 (MemberInfoSerializationHolder_t1385 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes)
 void MemberInfoSerializationHolder_Serialize_m7690 (Object_t * __this/* static, unused */, SerializationInfo_t572 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::Serialize(System.Runtime.Serialization.SerializationInfo,System.String,System.Type,System.String,System.Reflection.MemberTypes,System.Type[])
 void MemberInfoSerializationHolder_Serialize_m7691 (Object_t * __this/* static, unused */, SerializationInfo_t572 * ___info, String_t* ___name, Type_t * ___klass, String_t* ___signature, int32_t ___type, TypeU5BU5D_t546* ___genericArguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfoSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MemberInfoSerializationHolder_GetObjectData_m7692 (MemberInfoSerializationHolder_t1385 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MemberInfoSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * MemberInfoSerializationHolder_GetRealObject_m7693 (MemberInfoSerializationHolder_t1385 * __this, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
