#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UTF8Encoding/UTF8Decoder
struct UTF8Decoder_t1621;
// System.Text.DecoderFallback
struct DecoderFallback_t1602;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Char[]
struct CharU5BU5D_t178;

// System.Void System.Text.UTF8Encoding/UTF8Decoder::.ctor(System.Text.DecoderFallback)
 void UTF8Decoder__ctor_m8872 (UTF8Decoder_t1621 * __this, DecoderFallback_t1602 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding/UTF8Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t UTF8Decoder_GetChars_m8873 (UTF8Decoder_t1621 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t178* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
