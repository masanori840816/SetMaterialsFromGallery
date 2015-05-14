#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TypeLoadException
struct TypeLoadException_t1666;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TypeLoadException::.ctor()
 void TypeLoadException__ctor_m9727 (TypeLoadException_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String)
 void TypeLoadException__ctor_m9728 (TypeLoadException_t1666 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TypeLoadException__ctor_m9729 (TypeLoadException_t1666 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TypeLoadException::get_Message()
 String_t* TypeLoadException_get_Message_m9730 (TypeLoadException_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TypeLoadException_GetObjectData_m9731 (TypeLoadException_t1666 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
