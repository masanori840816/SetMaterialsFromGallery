#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t635;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IndexOutOfRangeException::.ctor()
 void IndexOutOfRangeException__ctor_m9427 (IndexOutOfRangeException_t635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
 void IndexOutOfRangeException__ctor_m3019 (IndexOutOfRangeException_t635 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void IndexOutOfRangeException__ctor_m9428 (IndexOutOfRangeException_t635 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
