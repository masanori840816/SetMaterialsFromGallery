﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding
struct UnicodeEncoding_t1624;
// System.Char[]
struct CharU5BU5D_t178;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Text.Decoder
struct Decoder_t1319;
// System.Object
struct Object_t;

// System.Void System.Text.UnicodeEncoding::.ctor()
 void UnicodeEncoding__ctor_m8904 (UnicodeEncoding_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean)
 void UnicodeEncoding__ctor_m8905 (UnicodeEncoding_t1624 * __this, bool ___bigEndian, bool ___byteOrderMark, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
 void UnicodeEncoding__ctor_m8906 (UnicodeEncoding_t1624 * __this, bool ___bigEndian, bool ___byteOrderMark, bool ___throwOnInvalidBytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
 int32_t UnicodeEncoding_GetByteCount_m8907 (UnicodeEncoding_t1624 * __this, CharU5BU5D_t178* ___chars, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.String)
 int32_t UnicodeEncoding_GetByteCount_m8908 (UnicodeEncoding_t1624 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetByteCount(System.Char*,System.Int32)
 int32_t UnicodeEncoding_GetByteCount_m8909 (UnicodeEncoding_t1624 * __this, uint16_t* ___chars, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UnicodeEncoding_GetBytes_m8910 (UnicodeEncoding_t1624 * __this, CharU5BU5D_t178* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
 int32_t UnicodeEncoding_GetBytes_m8911 (UnicodeEncoding_t1624 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UnicodeEncoding_GetBytes_m8912 (UnicodeEncoding_t1624 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetBytesInternal(System.Char*,System.Int32,System.Byte*,System.Int32)
 int32_t UnicodeEncoding_GetBytesInternal_m8913 (UnicodeEncoding_t1624 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
 int32_t UnicodeEncoding_GetCharCount_m8914 (UnicodeEncoding_t1624 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UnicodeEncoding_GetChars_m8915 (UnicodeEncoding_t1624 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t178* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UnicodeEncoding::GetString(System.Byte[],System.Int32,System.Int32)
 String_t* UnicodeEncoding_GetString_m8916 (UnicodeEncoding_t1624 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetCharsInternal(System.Byte*,System.Int32,System.Char*,System.Int32)
 int32_t UnicodeEncoding_GetCharsInternal_m8917 (UnicodeEncoding_t1624 * __this, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxByteCount(System.Int32)
 int32_t UnicodeEncoding_GetMaxByteCount_m8918 (UnicodeEncoding_t1624 * __this, int32_t ___charCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetMaxCharCount(System.Int32)
 int32_t UnicodeEncoding_GetMaxCharCount_m8919 (UnicodeEncoding_t1624 * __this, int32_t ___byteCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UnicodeEncoding::GetDecoder()
 Decoder_t1319 * UnicodeEncoding_GetDecoder_m8920 (UnicodeEncoding_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UnicodeEncoding::GetPreamble()
 ByteU5BU5D_t17* UnicodeEncoding_GetPreamble_m8921 (UnicodeEncoding_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UnicodeEncoding::Equals(System.Object)
 bool UnicodeEncoding_Equals_m8922 (UnicodeEncoding_t1624 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding::GetHashCode()
 int32_t UnicodeEncoding_GetHashCode_m8923 (UnicodeEncoding_t1624 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UnicodeEncoding::CopyChars(System.Byte*,System.Byte*,System.Int32,System.Boolean)
 void UnicodeEncoding_CopyChars_m8924 (Object_t * __this/* static, unused */, uint8_t* ___src, uint8_t* ___dest, int32_t ___count, bool ___bigEndian, MethodInfo* method) IL2CPP_METHOD_ATTR;
