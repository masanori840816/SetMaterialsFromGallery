#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t1568;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1013;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m8502 (RijndaelManaged_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m8503 (RijndaelManaged_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m8504 (RijndaelManaged_t1568 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m8505 (RijndaelManaged_t1568 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m8506 (RijndaelManaged_t1568 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
