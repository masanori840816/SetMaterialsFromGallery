#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionCache
struct ClientSessionCache_t1061;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1060;
// Mono.Security.Protocol.Tls.Context
struct Context_t1047;

// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::.cctor()
 void ClientSessionCache__cctor_m4853 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionCache::Add(System.String,System.Byte[])
 void ClientSessionCache_Add_m4854 (Object_t * __this/* static, unused */, String_t* ___host, ByteU5BU5D_t17* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionCache::FromHost(System.String)
 ByteU5BU5D_t17* ClientSessionCache_FromHost_m4855 (Object_t * __this/* static, unused */, String_t* ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ClientSessionInfo Mono.Security.Protocol.Tls.ClientSessionCache::FromContext(Mono.Security.Protocol.Tls.Context,System.Boolean)
 ClientSessionInfo_t1060 * ClientSessionCache_FromContext_m4856 (Object_t * __this/* static, unused */, Context_t1047 * ___context, bool ___checkValidity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextInCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextInCache_m4857 (Object_t * __this/* static, unused */, Context_t1047 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionCache::SetContextFromCache(Mono.Security.Protocol.Tls.Context)
 bool ClientSessionCache_SetContextFromCache_m4858 (Object_t * __this/* static, unused */, Context_t1047 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
