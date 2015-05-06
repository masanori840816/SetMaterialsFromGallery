#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t863;
// System.Text.RegularExpressions.Match
struct Match_t864;
// System.Text.RegularExpressions.Regex
struct Regex_t865;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
 void BaseMachine__ctor_m3651 (BaseMachine_t863 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
 Match_t864 * BaseMachine_Scan_m3652 (BaseMachine_t863 * __this, Regex_t865 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
