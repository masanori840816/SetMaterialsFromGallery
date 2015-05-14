#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.DirectoryInfo
struct DirectoryInfo_t1322;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
 void DirectoryInfo__ctor_m7153 (DirectoryInfo_t1322 * __this, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
 void DirectoryInfo__ctor_m7154 (DirectoryInfo_t1322 * __this, String_t* ___path, bool ___simpleOriginalPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void DirectoryInfo__ctor_m7155 (DirectoryInfo_t1322 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
 void DirectoryInfo_Initialize_m7156 (DirectoryInfo_t1322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
 bool DirectoryInfo_get_Exists_m7157 (DirectoryInfo_t1322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
 DirectoryInfo_t1322 * DirectoryInfo_get_Parent_m7158 (DirectoryInfo_t1322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
 void DirectoryInfo_Create_m7159 (DirectoryInfo_t1322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
 String_t* DirectoryInfo_ToString_m7160 (DirectoryInfo_t1322 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
