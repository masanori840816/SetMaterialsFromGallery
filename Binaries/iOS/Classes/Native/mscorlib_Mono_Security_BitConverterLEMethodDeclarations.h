#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.BitConverterLE
struct BitConverterLE_t1244;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
 ByteU5BU5D_t17* BitConverterLE_GetUIntBytes_m6653 (Object_t * __this/* static, unused */, uint8_t* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
 ByteU5BU5D_t17* BitConverterLE_GetBytes_m6654 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UShortFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_UShortFromBytes_m6655 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t17* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_UIntFromBytes_m6656 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t17* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::ULongFromBytes(System.Byte*,System.Byte[],System.Int32)
 void BitConverterLE_ULongFromBytes_m6657 (Object_t * __this/* static, unused */, uint8_t* ___dst, ByteU5BU5D_t17* ___src, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.BitConverterLE::ToInt16(System.Byte[],System.Int32)
 int16_t BitConverterLE_ToInt16_m6658 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
 int32_t BitConverterLE_ToInt32_m6659 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Mono.Security.BitConverterLE::ToSingle(System.Byte[],System.Int32)
 float BitConverterLE_ToSingle_m6660 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Mono.Security.BitConverterLE::ToDouble(System.Byte[],System.Int32)
 double BitConverterLE_ToDouble_m6661 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
