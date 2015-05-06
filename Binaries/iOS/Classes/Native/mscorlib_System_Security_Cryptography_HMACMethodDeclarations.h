#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HMAC
struct HMAC_t1126;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t17;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1220;

// System.Void System.Security.Cryptography.HMAC::.ctor()
 void HMAC__ctor_m8373 (HMAC_t1126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
 int32_t HMAC_get_BlockSizeValue_m8374 (HMAC_t1126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
 void HMAC_set_BlockSizeValue_m8375 (HMAC_t1126 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
 void HMAC_set_HashName_m8376 (HMAC_t1126 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t17* HMAC_get_Key_m8377 (HMAC_t1126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m5315 (HMAC_t1126 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
 BlockProcessor_t1220 * HMAC_get_Block_m8378 (HMAC_t1126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
 ByteU5BU5D_t17* HMAC_KeySetup_m8379 (HMAC_t1126 * __this, ByteU5BU5D_t17* ___key, uint8_t ___padding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
 void HMAC_Dispose_m8380 (HMAC_t1126 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m8381 (HMAC_t1126 * __this, ByteU5BU5D_t17* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t17* HMAC_HashFinal_m8382 (HMAC_t1126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m8383 (HMAC_t1126 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
 HMAC_t1126 * HMAC_Create_m5314 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
 HMAC_t1126 * HMAC_Create_m8384 (Object_t * __this/* static, unused */, String_t* ___algorithmName, MethodInfo* method) IL2CPP_METHOD_ATTR;
