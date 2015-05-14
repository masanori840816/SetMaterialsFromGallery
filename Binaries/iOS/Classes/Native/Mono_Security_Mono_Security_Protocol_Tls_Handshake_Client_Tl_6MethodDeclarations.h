#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t1101;
// Mono.Security.Protocol.Tls.Context
struct Context_t1047;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerFinished__ctor_m5217 (TlsServerFinished_t1101 * __this, Context_t1047 * ___context, ByteU5BU5D_t17* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
 void TlsServerFinished__cctor_m5218 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
 void TlsServerFinished_Update_m5219 (TlsServerFinished_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
 void TlsServerFinished_ProcessAsSsl3_m5220 (TlsServerFinished_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
 void TlsServerFinished_ProcessAsTls1_m5221 (TlsServerFinished_t1101 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
