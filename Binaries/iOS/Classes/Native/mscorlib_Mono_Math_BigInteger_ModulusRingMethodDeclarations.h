#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1215;
// Mono.Math.BigInteger
struct BigInteger_t1210;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m6361 (ModulusRing_t1215 * __this, BigInteger_t1210 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m6362 (ModulusRing_t1215 * __this, BigInteger_t1210 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1210 * ModulusRing_Multiply_m6363 (ModulusRing_t1215 * __this, BigInteger_t1210 * ___a, BigInteger_t1210 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1210 * ModulusRing_Difference_m6364 (ModulusRing_t1215 * __this, BigInteger_t1210 * ___a, BigInteger_t1210 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t1210 * ModulusRing_Pow_m6365 (ModulusRing_t1215 * __this, BigInteger_t1210 * ___a, BigInteger_t1210 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t1210 * ModulusRing_Pow_m6366 (ModulusRing_t1215 * __this, uint32_t ___b, BigInteger_t1210 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
