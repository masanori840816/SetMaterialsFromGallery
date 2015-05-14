#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t924;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t916;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t913;

// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
 void Reference__ctor_m3989 (Reference_t924 * __this, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
 CapturingGroup_t916 * Reference_get_CapturingGroup_m3990 (Reference_t924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
 void Reference_set_CapturingGroup_m3991 (Reference_t924 * __this, CapturingGroup_t916 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
 bool Reference_get_IgnoreCase_m3992 (Reference_t924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Reference_Compile_m3993 (Reference_t924 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
 void Reference_GetWidth_m3994 (Reference_t924 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
 bool Reference_IsComplex_m3995 (Reference_t924 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
