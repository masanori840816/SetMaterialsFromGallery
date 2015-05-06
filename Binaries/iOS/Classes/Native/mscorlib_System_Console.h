#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t983;
// System.IO.TextReader
struct TextReader_t1254;
// System.Text.Encoding
struct Encoding_t970;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct Console_t982  : public Object_t
{
};
struct Console_t982_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t983 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t983 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1254 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t970 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t970 * ___outputEncoding_4;
};
