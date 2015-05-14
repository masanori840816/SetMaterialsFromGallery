#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t1028;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
 void DeriveBytes__ctor_m4621 (DeriveBytes_t1028 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
 void DeriveBytes__cctor_m4622 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
 void DeriveBytes_set_HashName_m4623 (DeriveBytes_t1028 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
 void DeriveBytes_set_IterationCount_m4624 (DeriveBytes_t1028 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
 void DeriveBytes_set_Password_m4625 (DeriveBytes_t1028 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
 void DeriveBytes_set_Salt_m4626 (DeriveBytes_t1028 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
 void DeriveBytes_Adjust_m4627 (DeriveBytes_t1028 * __this, ByteU5BU5D_t17* ___a, int32_t ___aOff, ByteU5BU5D_t17* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
 ByteU5BU5D_t17* DeriveBytes_Derive_m4628 (DeriveBytes_t1028 * __this, ByteU5BU5D_t17* ___diversifier, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
 ByteU5BU5D_t17* DeriveBytes_DeriveKey_m4629 (DeriveBytes_t1028 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
 ByteU5BU5D_t17* DeriveBytes_DeriveIV_m4630 (DeriveBytes_t1028 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
 ByteU5BU5D_t17* DeriveBytes_DeriveMAC_m4631 (DeriveBytes_t1028 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
