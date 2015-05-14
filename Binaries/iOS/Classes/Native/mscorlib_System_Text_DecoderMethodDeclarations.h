#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Decoder
struct Decoder_t1319;
// System.Text.DecoderFallback
struct DecoderFallback_t1602;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1601;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Char[]
struct CharU5BU5D_t178;

// System.Void System.Text.Decoder::.ctor()
 void Decoder__ctor_m8700 (Decoder_t1319 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Decoder::set_Fallback(System.Text.DecoderFallback)
 void Decoder_set_Fallback_m8701 (Decoder_t1319 * __this, DecoderFallback_t1602 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallbackBuffer System.Text.Decoder::get_FallbackBuffer()
 DecoderFallbackBuffer_t1601 * Decoder_get_FallbackBuffer_m8702 (Decoder_t1319 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
