#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1060;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.Protocol.Tls.Context
struct Context_t1047;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
 void ClientSessionInfo__ctor_m4841 (ClientSessionInfo_t1060 * __this, String_t* ___hostname, ByteU5BU5D_t17* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
 void ClientSessionInfo__cctor_m4842 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
 void ClientSessionInfo_Finalize_m4843 (ClientSessionInfo_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
 String_t* ClientSessionInfo_get_HostName_m4844 (ClientSessionInfo_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
 ByteU5BU5D_t17* ClientSessionInfo_get_Id_m4845 (ClientSessionInfo_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
 bool ClientSessionInfo_get_Valid_m4846 (ClientSessionInfo_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_GetContext_m4847 (ClientSessionInfo_t1060 * __this, Context_t1047 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_SetContext_m4848 (ClientSessionInfo_t1060 * __this, Context_t1047 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
 void ClientSessionInfo_KeepAlive_m4849 (ClientSessionInfo_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
 void ClientSessionInfo_Dispose_m4850 (ClientSessionInfo_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
 void ClientSessionInfo_Dispose_m4851 (ClientSessionInfo_t1060 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
 void ClientSessionInfo_CheckDisposed_m4852 (ClientSessionInfo_t1060 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
