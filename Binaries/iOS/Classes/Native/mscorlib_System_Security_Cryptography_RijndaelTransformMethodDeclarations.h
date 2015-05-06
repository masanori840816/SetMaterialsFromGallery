#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t1569;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1137;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.UInt32[]
struct UInt32U5BU5D_t999;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m8507 (RijndaelTransform_t1569 * __this, Rijndael_t1137 * ___algo, bool ___encryption, ByteU5BU5D_t17* ___key, ByteU5BU5D_t17* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m8508 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m8509 (RijndaelTransform_t1569 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m8510 (RijndaelTransform_t1569 * __this, ByteU5BU5D_t17* ___input, ByteU5BU5D_t17* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m8511 (RijndaelTransform_t1569 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m8512 (RijndaelTransform_t1569 * __this, ByteU5BU5D_t17* ___indata, ByteU5BU5D_t17* ___outdata, UInt32U5BU5D_t999* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m8513 (RijndaelTransform_t1569 * __this, ByteU5BU5D_t17* ___indata, ByteU5BU5D_t17* ___outdata, UInt32U5BU5D_t999* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m8514 (RijndaelTransform_t1569 * __this, ByteU5BU5D_t17* ___indata, ByteU5BU5D_t17* ___outdata, UInt32U5BU5D_t999* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m8515 (RijndaelTransform_t1569 * __this, ByteU5BU5D_t17* ___indata, ByteU5BU5D_t17* ___outdata, UInt32U5BU5D_t999* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m8516 (RijndaelTransform_t1569 * __this, ByteU5BU5D_t17* ___indata, ByteU5BU5D_t17* ___outdata, UInt32U5BU5D_t999* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m8517 (RijndaelTransform_t1569 * __this, ByteU5BU5D_t17* ___indata, ByteU5BU5D_t17* ___outdata, UInt32U5BU5D_t999* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
