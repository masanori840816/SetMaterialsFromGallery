﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDES
struct TripleDES_t1136;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.TripleDES::.ctor()
 void TripleDES__ctor_m8608 (TripleDES_t1136 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDES::get_Key()
 ByteU5BU5D_t17* TripleDES_get_Key_m8609 (TripleDES_t1136 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDES::set_Key(System.Byte[])
 void TripleDES_set_Key_m8610 (TripleDES_t1136 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.TripleDES::IsWeakKey(System.Byte[])
 bool TripleDES_IsWeakKey_m8611 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create()
 TripleDES_t1136 * TripleDES_Create_m5357 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create(System.String)
 TripleDES_t1136 * TripleDES_Create_m8612 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
