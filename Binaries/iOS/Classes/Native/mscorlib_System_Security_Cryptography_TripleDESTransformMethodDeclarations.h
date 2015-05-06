#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t1586;
// System.Security.Cryptography.TripleDES
struct TripleDES_t1136;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
 void TripleDESTransform__ctor_m8613 (TripleDESTransform_t1586 * __this, TripleDES_t1136 * ___algo, bool ___encryption, ByteU5BU5D_t17* ___key, ByteU5BU5D_t17* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
 void TripleDESTransform_ECB_m8614 (TripleDESTransform_t1586 * __this, ByteU5BU5D_t17* ___input, ByteU5BU5D_t17* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
 ByteU5BU5D_t17* TripleDESTransform_GetStrongKey_m8615 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
