#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DES
struct DES_t1133;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.DES::.ctor()
 void DES__ctor_m8335 (DES_t1133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
 void DES__cctor_m8336 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
 DES_t1133 * DES_Create_m5355 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
 DES_t1133 * DES_Create_m8337 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
 bool DES_IsWeakKey_m8338 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
 bool DES_IsSemiWeakKey_m8339 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
 ByteU5BU5D_t17* DES_get_Key_m8340 (DES_t1133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
 void DES_set_Key_m8341 (DES_t1133 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
