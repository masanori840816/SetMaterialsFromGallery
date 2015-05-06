#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.Encoding/ForwardingDecoder
struct ForwardingDecoder_t1614;
// System.Text.Encoding
struct Encoding_t970;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.Char[]
struct CharU5BU5D_t178;

// System.Void System.Text.Encoding/ForwardingDecoder::.ctor(System.Text.Encoding)
 void ForwardingDecoder__ctor_m8758 (ForwardingDecoder_t1614 * __this, Encoding_t970 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding/ForwardingDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
 int32_t ForwardingDecoder_GetChars_m8759 (ForwardingDecoder_t1614 * __this, ByteU5BU5D_t17* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t178* ___chars, int32_t ___charIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
