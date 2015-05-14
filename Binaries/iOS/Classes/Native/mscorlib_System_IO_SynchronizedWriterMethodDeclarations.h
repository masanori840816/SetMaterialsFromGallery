#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t1350;
// System.IO.TextWriter
struct TextWriter_t983;
// System.Char[]
struct CharU5BU5D_t178;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
 void SynchronizedWriter__ctor_m7393 (SynchronizedWriter_t1350 * __this, TextWriter_t983 * ___writer, bool ___neverClose, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
 void SynchronizedWriter_Close_m7394 (SynchronizedWriter_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
 void SynchronizedWriter_Flush_m7395 (SynchronizedWriter_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
 void SynchronizedWriter_Write_m7396 (SynchronizedWriter_t1350 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
 void SynchronizedWriter_Write_m7397 (SynchronizedWriter_t1350 * __this, CharU5BU5D_t178* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
 void SynchronizedWriter_Write_m7398 (SynchronizedWriter_t1350 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
 void SynchronizedWriter_Write_m7399 (SynchronizedWriter_t1350 * __this, CharU5BU5D_t178* ___buffer, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
 void SynchronizedWriter_WriteLine_m7400 (SynchronizedWriter_t1350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
 void SynchronizedWriter_WriteLine_m7401 (SynchronizedWriter_t1350 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
