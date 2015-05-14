#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationException
struct SerializationException_t952;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationException::.ctor()
 void SerializationException__ctor_m8294 (SerializationException_t952 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
 void SerializationException__ctor_m4141 (SerializationException_t952 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SerializationException__ctor_m8295 (SerializationException_t952 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
