#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t1649;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ArrayTypeMismatchException::.ctor()
 void ArrayTypeMismatchException__ctor_m9019 (ArrayTypeMismatchException_t1649 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.String)
 void ArrayTypeMismatchException__ctor_m9020 (ArrayTypeMismatchException_t1649 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArrayTypeMismatchException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ArrayTypeMismatchException__ctor_m9021 (ArrayTypeMismatchException_t1649 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
