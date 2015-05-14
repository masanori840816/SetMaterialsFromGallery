#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.EncoderReplacementFallbackBuffer
struct EncoderReplacementFallbackBuffer_t1613;
// System.Text.EncoderReplacementFallback
struct EncoderReplacementFallback_t1612;

// System.Void System.Text.EncoderReplacementFallbackBuffer::.ctor(System.Text.EncoderReplacementFallback)
 void EncoderReplacementFallbackBuffer__ctor_m8757 (EncoderReplacementFallbackBuffer_t1613 * __this, EncoderReplacementFallback_t1612 * ___fallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.EncoderReplacementFallbackBuffer::get_Remaining()
 int32_t EncoderReplacementFallbackBuffer_get_Remaining_m8758 (EncoderReplacementFallbackBuffer_t1613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Int32)
 bool EncoderReplacementFallbackBuffer_Fallback_m8759 (EncoderReplacementFallbackBuffer_t1613 * __this, uint16_t ___charUnknown, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
 bool EncoderReplacementFallbackBuffer_Fallback_m8760 (EncoderReplacementFallbackBuffer_t1613 * __this, uint16_t ___charUnknownHigh, uint16_t ___charUnknownLow, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.EncoderReplacementFallbackBuffer::Fallback(System.Int32)
 bool EncoderReplacementFallbackBuffer_Fallback_m8761 (EncoderReplacementFallbackBuffer_t1613 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.EncoderReplacementFallbackBuffer::GetNextChar()
 uint16_t EncoderReplacementFallbackBuffer_GetNextChar_m8762 (EncoderReplacementFallbackBuffer_t1613 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
