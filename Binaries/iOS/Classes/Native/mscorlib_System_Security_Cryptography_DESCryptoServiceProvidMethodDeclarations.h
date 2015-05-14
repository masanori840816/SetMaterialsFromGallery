#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t1553;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1013;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m8351 (DESCryptoServiceProvider_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m8352 (DESCryptoServiceProvider_t1553 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m8353 (DESCryptoServiceProvider_t1553 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m8354 (DESCryptoServiceProvider_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m8355 (DESCryptoServiceProvider_t1553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
