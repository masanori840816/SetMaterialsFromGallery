#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t962;
// System.Security.Cryptography.CspParameters
struct CspParameters_t1121;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1025;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
 void RSACryptoServiceProvider__ctor_m8485 (RSACryptoServiceProvider_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider__ctor_m5297 (RSACryptoServiceProvider_t962 * __this, CspParameters_t1121 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor(System.Int32)
 void RSACryptoServiceProvider__ctor_m4219 (RSACryptoServiceProvider_t962 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.cctor()
 void RSACryptoServiceProvider__cctor_m8486 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Common(System.Int32,System.Security.Cryptography.CspParameters)
 void RSACryptoServiceProvider_Common_m8487 (RSACryptoServiceProvider_t962 * __this, int32_t ___dwKeySize, CspParameters_t1121 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Finalize()
 void RSACryptoServiceProvider_Finalize_m8488 (RSACryptoServiceProvider_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RSACryptoServiceProvider::get_KeySize()
 int32_t RSACryptoServiceProvider_get_KeySize_m8489 (RSACryptoServiceProvider_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::get_PublicOnly()
 bool RSACryptoServiceProvider_get_PublicOnly_m4198 (RSACryptoServiceProvider_t962 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::DecryptValue(System.Byte[])
 ByteU5BU5D_t17* RSACryptoServiceProvider_DecryptValue_m8490 (RSACryptoServiceProvider_t962 * __this, ByteU5BU5D_t17* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::EncryptValue(System.Byte[])
 ByteU5BU5D_t17* RSACryptoServiceProvider_EncryptValue_m8491 (RSACryptoServiceProvider_t962 * __this, ByteU5BU5D_t17* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSACryptoServiceProvider::ExportParameters(System.Boolean)
 RSAParameters_t964  RSACryptoServiceProvider_ExportParameters_m8492 (RSACryptoServiceProvider_t962 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.RSAParameters)
 void RSACryptoServiceProvider_ImportParameters_m8493 (RSACryptoServiceProvider_t962 * __this, RSAParameters_t964  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::Dispose(System.Boolean)
 void RSACryptoServiceProvider_Dispose_m8494 (RSACryptoServiceProvider_t962 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void RSACryptoServiceProvider_OnKeyGenerated_m8495 (RSACryptoServiceProvider_t962 * __this, Object_t * ___sender, EventArgs_t1025 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
