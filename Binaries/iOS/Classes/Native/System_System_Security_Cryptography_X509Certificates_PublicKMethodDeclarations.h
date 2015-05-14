#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t817;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t815;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t814;
// System.Security.Cryptography.Oid
struct Oid_t816;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t818;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Security.Cryptography.DSA
struct DSA_t819;
// System.Security.Cryptography.RSA
struct RSA_t820;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
 void PublicKey__ctor_m3434 (PublicKey_t817 * __this, X509Certificate_t818 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
 AsnEncodedData_t815 * PublicKey_get_EncodedKeyValue_m3435 (PublicKey_t817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
 AsnEncodedData_t815 * PublicKey_get_EncodedParameters_m3436 (PublicKey_t817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
 AsymmetricAlgorithm_t814 * PublicKey_get_Key_m3437 (PublicKey_t817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
 Oid_t816 * PublicKey_get_Oid_m3438 (PublicKey_t817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t17* PublicKey_GetUnsignedBigInteger_m3439 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
 DSA_t819 * PublicKey_DecodeDSA_m3440 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___rawPublicKey, ByteU5BU5D_t17* ___rawParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
 RSA_t820 * PublicKey_DecodeRSA_m3441 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___rawPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
