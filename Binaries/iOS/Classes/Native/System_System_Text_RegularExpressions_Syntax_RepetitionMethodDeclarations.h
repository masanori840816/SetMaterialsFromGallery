#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t919;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t910;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t913;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t914;

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
 void Repetition__ctor_m3948 (Repetition_t919 * __this, int32_t ___min, int32_t ___max, bool ___lazy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
 Expression_t910 * Repetition_get_Expression_m3949 (Repetition_t919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
 void Repetition_set_Expression_m3950 (Repetition_t919 * __this, Expression_t910 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
 int32_t Repetition_get_Minimum_m3951 (Repetition_t919 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Repetition_Compile_m3952 (Repetition_t919 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
 void Repetition_GetWidth_m3953 (Repetition_t919 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
 AnchorInfo_t914 * Repetition_GetAnchorInfo_m3954 (Repetition_t919 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
