#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t996;
// Mono.Math.BigInteger
struct BigInteger_t995;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m4449 (ModulusRing_t996 * __this, BigInteger_t995 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m4450 (ModulusRing_t996 * __this, BigInteger_t995 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t995 * ModulusRing_Multiply_m4451 (ModulusRing_t996 * __this, BigInteger_t995 * ___a, BigInteger_t995 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t995 * ModulusRing_Difference_m4452 (ModulusRing_t996 * __this, BigInteger_t995 * ___a, BigInteger_t995 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t995 * ModulusRing_Pow_m4453 (ModulusRing_t996 * __this, BigInteger_t995 * ___a, BigInteger_t995 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t995 * ModulusRing_Pow_m4454 (ModulusRing_t996 * __this, uint32_t ___b, BigInteger_t995 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
