#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.PathTooLongException
struct PathTooLongException_t1340;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.PathTooLongException::.ctor()
 void PathTooLongException__ctor_m7283 (PathTooLongException_t1340 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.String)
 void PathTooLongException__ctor_m7284 (PathTooLongException_t1340 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.PathTooLongException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void PathTooLongException__ctor_m7285 (PathTooLongException_t1340 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
