#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Console
struct Console_t982;
// System.IO.TextWriter
struct TextWriter_t983;
// System.Text.Encoding
struct Encoding_t970;
// System.IO.Stream
struct Stream_t1057;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.IO.FileAccess
#include "mscorlib_System_IO_FileAccess.h"

// System.Void System.Console::.cctor()
 void Console__cctor_m9039 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Console::SetEncodings(System.Text.Encoding,System.Text.Encoding)
 void Console_SetEncodings_m9040 (Object_t * __this/* static, unused */, Encoding_t970 * ___inputEncoding, Encoding_t970 * ___outputEncoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Console::get_Error()
 TextWriter_t983 * Console_get_Error_m4429 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::Open(System.IntPtr,System.IO.FileAccess,System.Int32)
 Stream_t1057 * Console_Open_m9041 (Object_t * __this/* static, unused */, IntPtr_t173 ___handle, int32_t ___access, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardError(System.Int32)
 Stream_t1057 * Console_OpenStandardError_m9042 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardInput(System.Int32)
 Stream_t1057 * Console_OpenStandardInput_m9043 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Console::OpenStandardOutput(System.Int32)
 Stream_t1057 * Console_OpenStandardOutput_m9044 (Object_t * __this/* static, unused */, int32_t ___bufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
