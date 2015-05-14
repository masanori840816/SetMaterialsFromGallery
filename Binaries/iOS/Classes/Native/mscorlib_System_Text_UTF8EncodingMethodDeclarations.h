#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding
struct UTF8Encoding_t1622;
// System.Char[]
struct CharU5BU5D_t178;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1601;
// System.Text.Decoder
struct Decoder_t1319;

// System.Void System.Text.UTF8Encoding::.ctor()
 void UTF8Encoding__ctor_m8874 (UTF8Encoding_t1622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
 void UTF8Encoding__ctor_m8875 (UTF8Encoding_t1622 * __this, bool ___encoderShouldEmitUTF8Identifier, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
 void UTF8Encoding__ctor_m8876 (UTF8Encoding_t1622 * __this, bool ___encoderShouldEmitUTF8Identifier, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetByteCount_m8877 (Object_t * __this/* static, unused */, CharU5BU5D_t178* ___chars, int32_t ___index, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetByteCount_m8878 (Object_t * __this/* static, unused */, uint16_t* ___chars, int32_t ___count, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UTF8Encoding_GetByteCount_m8879 (UTF8Encoding_t1622 * __this, CharU5BU5D_t178* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
 int32_t UTF8Encoding_GetByteCount_m8880 (UTF8Encoding_t1622 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetBytes_m8881 (Object_t * __this/* static, unused */, CharU5BU5D_t178* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
 int32_t UTF8Encoding_InternalGetBytes_m8882 (Object_t * __this/* static, unused */, uint16_t* ___chars, int32_t ___count, uint8_t* ___bytes, int32_t ___bcount, uint16_t* ___leftOver, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF8Encoding_GetBytes_m8883 (UTF8Encoding_t1622 * __this, CharU5BU5D_t178* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UTF8Encoding_GetBytes_m8884 (UTF8Encoding_t1622 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UTF8Encoding_GetBytes_m8885 (UTF8Encoding_t1622 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetCharCount_m8886 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___bytes, int32_t ___index, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1601 ** ___fallbackBuffer, ByteU5BU5D_t17** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetCharCount_m8887 (Object_t * __this/* static, unused */, uint8_t* ___bytes, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1601 ** ___fallbackBuffer, ByteU5BU5D_t17** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
 int32_t UTF8Encoding_Fallback_m8888 (Object_t * __this/* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1601 ** ___buffer, ByteU5BU5D_t17** ___bufferArg, uint8_t* ___bytes, int64_t ___index, uint32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
 void UTF8Encoding_Fallback_m8889 (Object_t * __this/* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1601 ** ___buffer, ByteU5BU5D_t17** ___bufferArg, uint8_t* ___bytes, int64_t ___byteIndex, uint32_t ___size, uint16_t* ___chars, int32_t* ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UTF8Encoding_GetCharCount_m8890 (UTF8Encoding_t1622 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetChars_m8891 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t178* ___chars, int32_t ___charIndex, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1601 ** ___fallbackBuffer, ByteU5BU5D_t17** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
 int32_t UTF8Encoding_InternalGetChars_m8892 (Object_t * __this/* static, unused */, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1601 ** ___fallbackBuffer, ByteU5BU5D_t17** ___bufferArg, bool ___flush, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF8Encoding_GetChars_m8893 (UTF8Encoding_t1622 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t178* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
 int32_t UTF8Encoding_GetMaxByteCount_m8894 (UTF8Encoding_t1622 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
 int32_t UTF8Encoding_GetMaxCharCount_m8895 (UTF8Encoding_t1622 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
 Decoder_t1319 * UTF8Encoding_GetDecoder_m8896 (UTF8Encoding_t1622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
 ByteU5BU5D_t17* UTF8Encoding_GetPreamble_m8897 (UTF8Encoding_t1622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
 bool UTF8Encoding_Equals_m8898 (UTF8Encoding_t1622 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
 int32_t UTF8Encoding_GetHashCode_m8899 (UTF8Encoding_t1622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
 int32_t UTF8Encoding_GetByteCount_m8900 (UTF8Encoding_t1622 * __this, String_t* ___chars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UTF8Encoding_GetString_m8901 (UTF8Encoding_t1622 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
