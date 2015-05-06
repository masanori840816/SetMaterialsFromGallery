#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.StrongName
struct StrongName_t1247;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;

// System.Void Mono.Security.StrongName::.cctor()
 void StrongName__cctor_m6673 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
 ByteU5BU5D_t17* StrongName_get_PublicKey_m6674 (StrongName_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
 ByteU5BU5D_t17* StrongName_get_PublicKeyToken_m6675 (StrongName_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
 String_t* StrongName_get_TokenAlgorithm_m6676 (StrongName_t1247 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
