#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.HMAC
struct HMAC_t1040;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;

// System.Void Mono.Security.Cryptography.HMAC::.ctor(System.String,System.Byte[])
 void HMAC__ctor_m4743 (HMAC_t1040 * __this, String_t* ___hashName, ByteU5BU5D_t17* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::get_Key()
 ByteU5BU5D_t17* HMAC_get_Key_m4744 (HMAC_t1040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::set_Key(System.Byte[])
 void HMAC_set_Key_m4745 (HMAC_t1040 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::Initialize()
 void HMAC_Initialize_m4746 (HMAC_t1040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.HMAC::HashFinal()
 ByteU5BU5D_t17* HMAC_HashFinal_m4747 (HMAC_t1040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
 void HMAC_HashCore_m4748 (HMAC_t1040 * __this, ByteU5BU5D_t17* ___array, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.HMAC::initializePad()
 void HMAC_initializePad_m4749 (HMAC_t1040 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
