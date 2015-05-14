#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct TripleDESCryptoServiceProvider_t1585;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1013;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::.ctor()
 void TripleDESCryptoServiceProvider__ctor_m8613 (TripleDESCryptoServiceProvider_t1585 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateIV()
 void TripleDESCryptoServiceProvider_GenerateIV_m8614 (TripleDESCryptoServiceProvider_t1585 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESCryptoServiceProvider::GenerateKey()
 void TripleDESCryptoServiceProvider_GenerateKey_m8615 (TripleDESCryptoServiceProvider_t1585 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateDecryptor_m8616 (TripleDESCryptoServiceProvider_t1585 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.TripleDESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * TripleDESCryptoServiceProvider_CreateEncryptor_m8617 (TripleDESCryptoServiceProvider_t1585 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
