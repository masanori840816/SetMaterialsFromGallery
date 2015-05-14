#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ObjRef
struct ObjRef_t1490;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t1501;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t1503;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t1502;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
 void ObjRef__ctor_m8132 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef__ctor_m8133 (ObjRef_t1490 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
 void ObjRef__cctor_m8134 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
 bool ObjRef_get_IsReferenceToWellKnow_m8135 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
 Object_t * ObjRef_get_ChannelInfo_m8136 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
 Object_t * ObjRef_get_EnvoyInfo_m8137 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
 void ObjRef_set_EnvoyInfo_m8138 (ObjRef_t1490 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
 Object_t * ObjRef_get_TypeInfo_m8139 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
 void ObjRef_set_TypeInfo_m8140 (ObjRef_t1490 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
 String_t* ObjRef_get_URI_m8141 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
 void ObjRef_set_URI_m8142 (ObjRef_t1490 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ObjRef_GetObjectData_m8143 (ObjRef_t1490 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * ObjRef_GetRealObject_m8144 (ObjRef_t1490 * __this, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
 void ObjRef_UpdateChannelInfo_m8145 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
 Type_t * ObjRef_get_ServerType_m8146 (ObjRef_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
