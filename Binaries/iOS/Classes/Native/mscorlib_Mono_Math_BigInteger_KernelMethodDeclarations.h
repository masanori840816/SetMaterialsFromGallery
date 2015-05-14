#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/Kernel
struct Kernel_t1216;
// Mono.Math.BigInteger
struct BigInteger_t1210;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1217;
// System.UInt32[]
struct UInt32U5BU5D_t999;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1210 * Kernel_AddSameSign_m6367 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi1, BigInteger_t1210 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1210 * Kernel_Subtract_m6368 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___big, BigInteger_t1210 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_MinusEq_m6369 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___big, BigInteger_t1210 * ___small, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
 void Kernel_PlusEq_m6370 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi1, BigInteger_t1210 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
 int32_t Kernel_Compare_m6371 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi1, BigInteger_t1210 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_SingleByteDivideInPlace_m6372 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_DwordMod_m6373 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
 BigIntegerU5BU5D_t1217* Kernel_DwordDivMod_m6374 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___n, uint32_t ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigIntegerU5BU5D_t1217* Kernel_multiByteDivide_m6375 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi1, BigInteger_t1210 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1210 * Kernel_LeftShift_m6376 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t1210 * Kernel_RightShift_m6377 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
 BigInteger_t1210 * Kernel_MultiplyByDword_m6378 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___n, uint32_t ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
 void Kernel_Multiply_m6379 (Object_t * __this/* static, unused */, UInt32U5BU5D_t999* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t999* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t999* ___d, uint32_t ___dOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
 void Kernel_MultiplyMod2p32pmod_m6380 (Object_t * __this/* static, unused */, UInt32U5BU5D_t999* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t999* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t999* ___d, int32_t ___dOffset, int32_t ___mod, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
 uint32_t Kernel_modInverse_m6381 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi, uint32_t ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1210 * Kernel_modInverse_m6382 (Object_t * __this/* static, unused */, BigInteger_t1210 * ___bi, BigInteger_t1210 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
