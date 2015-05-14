#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t1005;
// Mono.Math.BigInteger
struct BigInteger_t995;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
 void SequentialSearchPrimeGeneratorBase__ctor_m4520 (SequentialSearchPrimeGeneratorBase_t1005 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
 BigInteger_t995 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m4521 (SequentialSearchPrimeGeneratorBase_t1005 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
 BigInteger_t995 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m4522 (SequentialSearchPrimeGeneratorBase_t1005 * __this, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
 BigInteger_t995 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m4523 (SequentialSearchPrimeGeneratorBase_t1005 * __this, int32_t ___bits, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
 bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m4524 (SequentialSearchPrimeGeneratorBase_t1005 * __this, BigInteger_t995 * ___bi, Object_t * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
