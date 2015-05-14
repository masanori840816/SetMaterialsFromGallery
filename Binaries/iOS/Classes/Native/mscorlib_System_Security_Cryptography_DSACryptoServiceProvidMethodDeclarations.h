#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t965;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1121;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1025;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
 void DSACryptoServiceProvider__ctor_m8361 (DSACryptoServiceProvider_t965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
 void DSACryptoServiceProvider__ctor_m4218 (DSACryptoServiceProvider_t965 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
 void DSACryptoServiceProvider__ctor_m8362 (DSACryptoServiceProvider_t965 * __this, int32_t ___dwKeySize, CspParameters_t1121 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
 void DSACryptoServiceProvider__cctor_m8363 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
 void DSACryptoServiceProvider_Finalize_m8364 (DSACryptoServiceProvider_t965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
 int32_t DSACryptoServiceProvider_get_KeySize_m8365 (DSACryptoServiceProvider_t965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
 bool DSACryptoServiceProvider_get_PublicOnly_m4204 (DSACryptoServiceProvider_t965 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
 DSAParameters_t966  DSACryptoServiceProvider_ExportParameters_m8366 (DSACryptoServiceProvider_t965 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSACryptoServiceProvider_ImportParameters_m8367 (DSACryptoServiceProvider_t965 * __this, DSAParameters_t966  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
 ByteU5BU5D_t17* DSACryptoServiceProvider_CreateSignature_m8368 (DSACryptoServiceProvider_t965 * __this, ByteU5BU5D_t17* ___rgbHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
 bool DSACryptoServiceProvider_VerifySignature_m8369 (DSACryptoServiceProvider_t965 * __this, ByteU5BU5D_t17* ___rgbHash, ByteU5BU5D_t17* ___rgbSignature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
 void DSACryptoServiceProvider_Dispose_m8370 (DSACryptoServiceProvider_t965 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void DSACryptoServiceProvider_OnKeyGenerated_m8371 (DSACryptoServiceProvider_t965 * __this, Object_t * ___sender, EventArgs_t1025 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
