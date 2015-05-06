#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1144;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1118;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
 void NumberFormatInfo__ctor_m7073 (NumberFormatInfo_t1144 * __this, int32_t ___lcid, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
 void NumberFormatInfo__ctor_m7074 (NumberFormatInfo_t1144 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
 void NumberFormatInfo__ctor_m7075 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
 void NumberFormatInfo__cctor_m7076 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
 int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m7077 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
 String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m7078 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
 String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m7079 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
 Int32U5BU5D_t877* NumberFormatInfo_get_RawCurrencyGroupSizes_m7080 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
 int32_t NumberFormatInfo_get_CurrencyNegativePattern_m7081 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
 int32_t NumberFormatInfo_get_CurrencyPositivePattern_m7082 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
 String_t* NumberFormatInfo_get_CurrencySymbol_m7083 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
 NumberFormatInfo_t1144 * NumberFormatInfo_get_CurrentInfo_m7084 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
 NumberFormatInfo_t1144 * NumberFormatInfo_get_InvariantInfo_m7085 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
 String_t* NumberFormatInfo_get_NaNSymbol_m7086 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
 String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m7087 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
 String_t* NumberFormatInfo_get_NegativeSign_m7088 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
 int32_t NumberFormatInfo_get_NumberDecimalDigits_m7089 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
 String_t* NumberFormatInfo_get_NumberDecimalSeparator_m7090 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
 String_t* NumberFormatInfo_get_NumberGroupSeparator_m7091 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
 Int32U5BU5D_t877* NumberFormatInfo_get_RawNumberGroupSizes_m7092 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
 int32_t NumberFormatInfo_get_NumberNegativePattern_m7093 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
 void NumberFormatInfo_set_NumberNegativePattern_m7094 (NumberFormatInfo_t1144 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
 int32_t NumberFormatInfo_get_PercentDecimalDigits_m7095 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
 String_t* NumberFormatInfo_get_PercentDecimalSeparator_m7096 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
 String_t* NumberFormatInfo_get_PercentGroupSeparator_m7097 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
 Int32U5BU5D_t877* NumberFormatInfo_get_RawPercentGroupSizes_m7098 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
 int32_t NumberFormatInfo_get_PercentNegativePattern_m7099 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
 int32_t NumberFormatInfo_get_PercentPositivePattern_m7100 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
 String_t* NumberFormatInfo_get_PercentSymbol_m7101 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
 String_t* NumberFormatInfo_get_PerMilleSymbol_m7102 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
 String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m7103 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
 String_t* NumberFormatInfo_get_PositiveSign_m7104 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
 Object_t * NumberFormatInfo_GetFormat_m7105 (NumberFormatInfo_t1144 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
 Object_t * NumberFormatInfo_Clone_m7106 (NumberFormatInfo_t1144 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
 NumberFormatInfo_t1144 * NumberFormatInfo_GetInstance_m7107 (Object_t * __this/* static, unused */, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
