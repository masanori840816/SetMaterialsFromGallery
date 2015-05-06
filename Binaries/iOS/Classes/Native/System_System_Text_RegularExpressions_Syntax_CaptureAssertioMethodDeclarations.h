#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t921;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t916;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t911;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t920;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t913;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
 void CaptureAssertion__ctor_m3956 (CaptureAssertion_t921 * __this, Literal_t920 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
 void CaptureAssertion_set_CapturingGroup_m3957 (CaptureAssertion_t921 * __this, CapturingGroup_t916 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void CaptureAssertion_Compile_m3958 (CaptureAssertion_t921 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
 bool CaptureAssertion_IsComplex_m3959 (CaptureAssertion_t921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
 ExpressionAssertion_t911 * CaptureAssertion_get_Alternate_m3960 (CaptureAssertion_t921 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
