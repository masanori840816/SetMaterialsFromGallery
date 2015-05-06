#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.DecoderReplacementFallbackBuffer
struct DecoderReplacementFallbackBuffer_t1607;
// System.Text.DecoderReplacementFallback
struct DecoderReplacementFallback_t1606;
// System.Byte[]
struct ByteU5BU5D_t17;

// System.Void System.Text.DecoderReplacementFallbackBuffer::.ctor(System.Text.DecoderReplacementFallback)
 void DecoderReplacementFallbackBuffer__ctor_m8722 (DecoderReplacementFallbackBuffer_t1607 * __this, DecoderReplacementFallback_t1606 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.DecoderReplacementFallbackBuffer::get_Remaining()
 int32_t DecoderReplacementFallbackBuffer_get_Remaining_m8723 (DecoderReplacementFallbackBuffer_t1607 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.DecoderReplacementFallbackBuffer::Fallback(System.Byte[],System.Int32)
 bool DecoderReplacementFallbackBuffer_Fallback_m8724 (DecoderReplacementFallbackBuffer_t1607 * __this, ByteU5BU5D_t17* ___bytesUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.DecoderReplacementFallbackBuffer::GetNextChar()
 uint16_t DecoderReplacementFallbackBuffer_GetNextChar_m8725 (DecoderReplacementFallbackBuffer_t1607 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.DecoderReplacementFallbackBuffer::Reset()
 void DecoderReplacementFallbackBuffer_Reset_m8726 (DecoderReplacementFallbackBuffer_t1607 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
