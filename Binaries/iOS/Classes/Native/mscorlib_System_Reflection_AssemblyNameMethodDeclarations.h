#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.AssemblyName
struct AssemblyName_t1356;
// System.String
struct String_t;
// System.Version
struct Version_t797;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Object
struct Object_t;
// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.AssemblyName::.ctor()
 void AssemblyName__ctor_m7631 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName__ctor_m7632 (AssemblyName_t1356 * __this, SerializationInfo_t572 * ___si, StreamingContext_t573  ___sc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_Name()
 String_t* AssemblyName_get_Name_m7633 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::get_Flags()
 int32_t AssemblyName_get_Flags_m7634 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::get_FullName()
 String_t* AssemblyName_get_FullName_m7635 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Reflection.AssemblyName::get_Version()
 Version_t797 * AssemblyName_get_Version_m7636 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::set_Version(System.Version)
 void AssemblyName_set_Version_m7637 (AssemblyName_t1356 * __this, Version_t797 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.AssemblyName::ToString()
 String_t* AssemblyName_ToString_m7638 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.AssemblyName::get_IsPublicKeyValid()
 bool AssemblyName_get_IsPublicKeyValid_m7639 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::InternalGetPublicKeyToken()
 ByteU5BU5D_t17* AssemblyName_InternalGetPublicKeyToken_m7640 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Reflection.AssemblyName::ComputePublicKeyToken()
 ByteU5BU5D_t17* AssemblyName_ComputePublicKeyToken_m7641 (AssemblyName_t1356 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKey(System.Byte[])
 void AssemblyName_SetPublicKey_m7642 (AssemblyName_t1356 * __this, ByteU5BU5D_t17* ___publicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::SetPublicKeyToken(System.Byte[])
 void AssemblyName_SetPublicKeyToken_m7643 (AssemblyName_t1356 * __this, ByteU5BU5D_t17* ___publicKeyToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void AssemblyName_GetObjectData_m7644 (AssemblyName_t1356 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.AssemblyName::OnDeserialization(System.Object)
 void AssemblyName_OnDeserialization_m7645 (AssemblyName_t1356 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
