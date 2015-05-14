#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t908;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t910;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t913;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t914;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
 void Group__ctor_m3925 (Group_t908 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
 void Group_AppendExpression_m3926 (Group_t908 * __this, Expression_t910 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Group_Compile_m3927 (Group_t908 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
 void Group_GetWidth_m3928 (Group_t908 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
 AnchorInfo_t914 * Group_GetAnchorInfo_m3929 (Group_t908 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
