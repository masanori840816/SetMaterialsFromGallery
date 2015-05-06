#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t914;
// System.String
struct String_t;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t910;
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32)
 void AnchorInfo__ctor_m4004 (AnchorInfo_t914 * __this, Expression_t910 * ___expr, int32_t ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.String,System.Boolean)
 void AnchorInfo__ctor_m4005 (AnchorInfo_t914 * __this, Expression_t910 * ___expr, int32_t ___offset, int32_t ___width, String_t* ___str, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.AnchorInfo::.ctor(System.Text.RegularExpressions.Syntax.Expression,System.Int32,System.Int32,System.Text.RegularExpressions.Position)
 void AnchorInfo__ctor_m4006 (AnchorInfo_t914 * __this, Expression_t910 * ___expr, int32_t ___offset, int32_t ___width, uint16_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Offset()
 int32_t AnchorInfo_get_Offset_m4007 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Width()
 int32_t AnchorInfo_get_Width_m4008 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::get_Length()
 int32_t AnchorInfo_get_Length_m4009 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsUnknownWidth()
 bool AnchorInfo_get_IsUnknownWidth_m4010 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsComplete()
 bool AnchorInfo_get_IsComplete_m4011 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::get_Substring()
 String_t* AnchorInfo_get_Substring_m4012 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IgnoreCase()
 bool AnchorInfo_get_IgnoreCase_m4013 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::get_Position()
 uint16_t AnchorInfo_get_Position_m4014 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsSubstring()
 bool AnchorInfo_get_IsSubstring_m4015 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::get_IsPosition()
 bool AnchorInfo_get_IsPosition_m4016 (AnchorInfo_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.AnchorInfo::GetInterval(System.Int32)
 Interval_t901  AnchorInfo_GetInterval_m4017 (AnchorInfo_t914 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
