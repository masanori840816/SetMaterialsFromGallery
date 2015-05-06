#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1065;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1048;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
 void SecurityParameters__ctor_m4980 (SecurityParameters_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
 CipherSuite_t1048 * SecurityParameters_get_Cipher_m4981 (SecurityParameters_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
 void SecurityParameters_set_Cipher_m4982 (SecurityParameters_t1065 * __this, CipherSuite_t1048 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
 ByteU5BU5D_t17* SecurityParameters_get_ClientWriteMAC_m4983 (SecurityParameters_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
 void SecurityParameters_set_ClientWriteMAC_m4984 (SecurityParameters_t1065 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
 ByteU5BU5D_t17* SecurityParameters_get_ServerWriteMAC_m4985 (SecurityParameters_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
 void SecurityParameters_set_ServerWriteMAC_m4986 (SecurityParameters_t1065 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
 void SecurityParameters_Clear_m4987 (SecurityParameters_t1065 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
