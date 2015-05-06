#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1220;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1013;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void Mono.Security.Cryptography.BlockProcessor::.ctor(System.Security.Cryptography.ICryptoTransform,System.Int32)
 void BlockProcessor__ctor_m6438 (BlockProcessor_t1220 * __this, Object_t * ___transform, int32_t ___blockSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Finalize()
 void BlockProcessor_Finalize_m6439 (BlockProcessor_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Initialize()
 void BlockProcessor_Initialize_m6440 (BlockProcessor_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[])
 void BlockProcessor_Core_m6441 (BlockProcessor_t1220 * __this, ByteU5BU5D_t17* ___rgb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.BlockProcessor::Core(System.Byte[],System.Int32,System.Int32)
 void BlockProcessor_Core_m6442 (BlockProcessor_t1220 * __this, ByteU5BU5D_t17* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.BlockProcessor::Final()
 ByteU5BU5D_t17* BlockProcessor_Final_m6443 (BlockProcessor_t1220 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
