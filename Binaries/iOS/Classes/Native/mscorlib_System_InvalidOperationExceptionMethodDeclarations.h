#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.InvalidOperationException
struct InvalidOperationException_t949;
// System.String
struct String_t;
// System.Exception
struct Exception_t304;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.InvalidOperationException::.ctor()
 void InvalidOperationException__ctor_m4129 (InvalidOperationException_t949 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
 void InvalidOperationException__ctor_m4119 (InvalidOperationException_t949 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
 void InvalidOperationException__ctor_m9432 (InvalidOperationException_t949 * __this, String_t* ___message, Exception_t304 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void InvalidOperationException__ctor_m9433 (InvalidOperationException_t949 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
