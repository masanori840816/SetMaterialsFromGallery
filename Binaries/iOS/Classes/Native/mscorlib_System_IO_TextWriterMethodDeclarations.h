#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.TextWriter
struct TextWriter_t983;
// System.Char[]
struct CharU5BU5D_t178;
// System.String
struct String_t;

// System.Void System.IO.TextWriter::.ctor()
 void TextWriter__ctor_m7381 (TextWriter_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::.cctor()
 void TextWriter__cctor_m7382 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Close()
 void TextWriter_Close_m7383 (TextWriter_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose(System.Boolean)
 void TextWriter_Dispose_m7384 (TextWriter_t983 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Dispose()
 void TextWriter_Dispose_m7385 (TextWriter_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Flush()
 void TextWriter_Flush_m7386 (TextWriter_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.IO.TextWriter::Synchronized(System.IO.TextWriter,System.Boolean)
 TextWriter_t983 * TextWriter_Synchronized_m7387 (Object_t * __this/* static, unused */, TextWriter_t983 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char)
 void TextWriter_Write_m7388 (TextWriter_t983 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[])
 void TextWriter_Write_m7389 (TextWriter_t983 * __this, CharU5BU5D_t178* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.String)
 void TextWriter_Write_m7390 (TextWriter_t983 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::Write(System.Char[],System.Int32,System.Int32)
 void TextWriter_Write_m7391 (TextWriter_t983 * __this, CharU5BU5D_t178* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine()
 void TextWriter_WriteLine_m7392 (TextWriter_t983 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.TextWriter::WriteLine(System.String)
 void TextWriter_WriteLine_m4430 (TextWriter_t983 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
