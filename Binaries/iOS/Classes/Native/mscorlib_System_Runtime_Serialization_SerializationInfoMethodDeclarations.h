#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Type
struct Type_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1545;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t1546;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
 void SerializationInfo__ctor_m8296 (SerializationInfo_t572 * __this, Type_t * ___type, Object_t * ___converter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
 void SerializationInfo_AddValue_m4137 (SerializationInfo_t572 * __this, String_t* ___name, Object_t * ___value, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
 Object_t * SerializationInfo_GetValue_m4140 (SerializationInfo_t572 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
 void SerializationInfo_SetType_m8297 (SerializationInfo_t572 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
 SerializationInfoEnumerator_t1546 * SerializationInfo_GetEnumerator_m8298 (SerializationInfo_t572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
 void SerializationInfo_AddValue_m8299 (SerializationInfo_t572 * __this, String_t* ___name, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
 void SerializationInfo_AddValue_m4139 (SerializationInfo_t572 * __this, String_t* ___name, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
 void SerializationInfo_AddValue_m4138 (SerializationInfo_t572 * __this, String_t* ___name, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
 void SerializationInfo_AddValue_m8300 (SerializationInfo_t572 * __this, String_t* ___name, DateTime_t458  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
 void SerializationInfo_AddValue_m8301 (SerializationInfo_t572 * __this, String_t* ___name, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
 void SerializationInfo_AddValue_m4153 (SerializationInfo_t572 * __this, String_t* ___name, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
 void SerializationInfo_AddValue_m8302 (SerializationInfo_t572 * __this, String_t* ___name, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
 void SerializationInfo_AddValue_m4152 (SerializationInfo_t572 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
 bool SerializationInfo_GetBoolean_m4142 (SerializationInfo_t572 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
 int16_t SerializationInfo_GetInt16_m8303 (SerializationInfo_t572 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
 int32_t SerializationInfo_GetInt32_m4151 (SerializationInfo_t572 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
 int64_t SerializationInfo_GetInt64_m4150 (SerializationInfo_t572 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
 String_t* SerializationInfo_GetString_m4149 (SerializationInfo_t572 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
