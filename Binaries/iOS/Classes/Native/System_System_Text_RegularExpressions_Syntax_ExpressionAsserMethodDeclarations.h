#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t911;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t910;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t913;

// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
 void ExpressionAssertion__ctor_m3966 (ExpressionAssertion_t911 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
 void ExpressionAssertion_set_Reverse_m3967 (ExpressionAssertion_t911 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
 void ExpressionAssertion_set_Negate_m3968 (ExpressionAssertion_t911 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
 Expression_t910 * ExpressionAssertion_get_TestExpression_m3969 (ExpressionAssertion_t911 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
 void ExpressionAssertion_set_TestExpression_m3970 (ExpressionAssertion_t911 * __this, Expression_t910 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void ExpressionAssertion_Compile_m3971 (ExpressionAssertion_t911 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
 bool ExpressionAssertion_IsComplex_m3972 (ExpressionAssertion_t911 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
