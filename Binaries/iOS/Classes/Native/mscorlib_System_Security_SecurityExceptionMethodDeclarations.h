#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.SecurityException
struct SecurityException_t1596;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t1595;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
 void SecurityException__ctor_m8666 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
 void SecurityException__ctor_m8667 (SecurityException_t1596 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException__ctor_m8668 (SecurityException_t1596 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
 Object_t * SecurityException_get_Demanded_m8669 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
 Object_t * SecurityException_get_FirstPermissionThatFailed_m8670 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
 String_t* SecurityException_get_PermissionState_m8671 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
 Type_t * SecurityException_get_PermissionType_m8672 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
 String_t* SecurityException_get_GrantedSet_m8673 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
 String_t* SecurityException_get_RefusedSet_m8674 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SecurityException_GetObjectData_m8675 (SecurityException_t1596 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
 String_t* SecurityException_ToString_m8676 (SecurityException_t1596 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
