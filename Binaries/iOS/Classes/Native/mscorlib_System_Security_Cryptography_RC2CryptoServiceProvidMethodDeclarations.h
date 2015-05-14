#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t1562;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1013;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
 void RC2CryptoServiceProvider__ctor_m8438 (RC2CryptoServiceProvider_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
 int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m8439 (RC2CryptoServiceProvider_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateDecryptor_m8440 (RC2CryptoServiceProvider_t1562 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateEncryptor_m8441 (RC2CryptoServiceProvider_t1562 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
 void RC2CryptoServiceProvider_GenerateIV_m8442 (RC2CryptoServiceProvider_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
 void RC2CryptoServiceProvider_GenerateKey_m8443 (RC2CryptoServiceProvider_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
