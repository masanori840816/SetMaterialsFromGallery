#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t1352;
// System.IO.Stream
struct Stream_t1057;
// System.Text.Encoding
struct Encoding_t970;
// System.Char[]
struct CharU5BU5D_t178;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
 void UnexceptionalStreamWriter__ctor_m7405 (UnexceptionalStreamWriter_t1352 * __this, Stream_t1057 * ___stream, Encoding_t970 * ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
 void UnexceptionalStreamWriter_Flush_m7406 (UnexceptionalStreamWriter_t1352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
 void UnexceptionalStreamWriter_Write_m7407 (UnexceptionalStreamWriter_t1352 * __this, CharU5BU5D_t178* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
 void UnexceptionalStreamWriter_Write_m7408 (UnexceptionalStreamWriter_t1352 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
 void UnexceptionalStreamWriter_Write_m7409 (UnexceptionalStreamWriter_t1352 * __this, CharU5BU5D_t178* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
 void UnexceptionalStreamWriter_Write_m7410 (UnexceptionalStreamWriter_t1352 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
