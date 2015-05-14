#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArgumentException
struct ArgumentException_t377;
// System.String
struct String_t;
// System.Exception
struct Exception_t304;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArgumentException::.ctor()
 void ArgumentException__ctor_m9005 (ArgumentException_t377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
 void ArgumentException__ctor_m1922 (ArgumentException_t377 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
 void ArgumentException__ctor_m4311 (ArgumentException_t377 * __this, String_t* ___message, Exception_t304 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
 void ArgumentException__ctor_m4128 (ArgumentException_t377 * __this, String_t* ___message, String_t* ___paramName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
 void ArgumentException__ctor_m9006 (ArgumentException_t377 * __this, String_t* ___message, String_t* ___paramName, Exception_t304 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException__ctor_m9007 (ArgumentException_t377 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_ParamName()
 String_t* ArgumentException_get_ParamName_m9008 (ArgumentException_t377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ArgumentException::get_Message()
 String_t* ArgumentException_get_Message_m9009 (ArgumentException_t377 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArgumentException_GetObjectData_m9010 (ArgumentException_t377 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
