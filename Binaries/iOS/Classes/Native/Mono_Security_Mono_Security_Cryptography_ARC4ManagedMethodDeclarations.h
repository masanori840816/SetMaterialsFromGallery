#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.ARC4Managed
struct ARC4Managed_t1011;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1013;

// System.Void Mono.Security.Cryptography.ARC4Managed::.ctor()
 void ARC4Managed__ctor_m4541 (ARC4Managed_t1011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Finalize()
 void ARC4Managed_Finalize_m4542 (ARC4Managed_t1011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::Dispose(System.Boolean)
 void ARC4Managed_Dispose_m4543 (ARC4Managed_t1011 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::get_Key()
 ByteU5BU5D_t17* ARC4Managed_get_Key_m4544 (ARC4Managed_t1011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::set_Key(System.Byte[])
 void ARC4Managed_set_Key_m4545 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.ARC4Managed::get_CanReuseTransform()
 bool ARC4Managed_get_CanReuseTransform_m4546 (ARC4Managed_t1011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateEncryptor_m4547 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform Mono.Security.Cryptography.ARC4Managed::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * ARC4Managed_CreateDecryptor_m4548 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___rgbKey, ByteU5BU5D_t17* ___rgvIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateIV()
 void ARC4Managed_GenerateIV_m4549 (ARC4Managed_t1011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::GenerateKey()
 void ARC4Managed_GenerateKey_m4550 (ARC4Managed_t1011 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::KeySetup(System.Byte[])
 void ARC4Managed_KeySetup_m4551 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.ARC4Managed::CheckInput(System.Byte[],System.Int32,System.Int32)
 void ARC4Managed_CheckInput_m4552 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_TransformBlock_m4553 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t17* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.ARC4Managed::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t ARC4Managed_InternalTransformBlock_m4554 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t17* ___outputBuffer, int32_t ___outputOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.ARC4Managed::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t17* ARC4Managed_TransformFinalBlock_m4555 (ARC4Managed_t1011 * __this, ByteU5BU5D_t17* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
