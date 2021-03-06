﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Char
struct Char_t170;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Char::.cctor()
 void Char__cctor_m5678 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Char::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Char_System_IConvertible_ToType_m5679 (uint16_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Char_System_IConvertible_ToBoolean_m5680 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Char::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Char_System_IConvertible_ToByte_m5681 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Char_System_IConvertible_ToChar_m5682 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Char::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t458  Char_System_IConvertible_ToDateTime_m5683 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Char::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t1145  Char_System_IConvertible_ToDecimal_m5684 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Char::System.IConvertible.ToDouble(System.IFormatProvider)
 double Char_System_IConvertible_ToDouble_m5685 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Char::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Char_System_IConvertible_ToInt16_m5686 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Char_System_IConvertible_ToInt32_m5687 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Char::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Char_System_IConvertible_ToInt64_m5688 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Char::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Char_System_IConvertible_ToSByte_m5689 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Char::System.IConvertible.ToSingle(System.IFormatProvider)
 float Char_System_IConvertible_ToSingle_m5690 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Char::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Char_System_IConvertible_ToUInt16_m5691 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Char::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Char_System_IConvertible_ToUInt32_m5692 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Char::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Char_System_IConvertible_ToUInt64_m5693 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::GetDataTablePointers(System.Byte*&,System.Byte*&,System.Double*&,System.UInt16*&,System.UInt16*&,System.UInt16*&,System.UInt16*&)
 void Char_GetDataTablePointers_m5694 (Object_t * __this/* static, unused */, uint8_t** ___category_data, uint8_t** ___numeric_data, double** ___numeric_data_values, uint16_t** ___to_lower_data_low, uint16_t** ___to_lower_data_high, uint16_t** ___to_upper_data_low, uint16_t** ___to_upper_data_high, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Object)
 int32_t Char_CompareTo_m5695 (uint16_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Object)
 bool Char_Equals_m5696 (uint16_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Char)
 int32_t Char_CompareTo_m5697 (uint16_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Char)
 bool Char_Equals_m5698 (uint16_t* __this, uint16_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::GetHashCode()
 int32_t Char_GetHashCode_m5699 (uint16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.Char)
 int32_t Char_GetUnicodeCategory_m4379 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
 bool Char_IsDigit_m4377 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetter(System.Char)
 bool Char_IsLetter_m1791 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetterOrDigit(System.Char)
 bool Char_IsLetterOrDigit_m4376 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLower(System.Char)
 bool Char_IsLower_m1792 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsSurrogate(System.Char)
 bool Char_IsSurrogate_m5700 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsUpper(System.Char)
 bool Char_IsUpper_m1794 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
 bool Char_IsWhiteSpace_m4378 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
 bool Char_IsWhiteSpace_m4222 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::CheckParameter(System.String,System.Int32)
 void Char_CheckParameter_m5701 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::Parse(System.String)
 uint16_t Char_Parse_m5702 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char)
 uint16_t Char_ToLower_m1795 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLowerInvariant(System.Char)
 uint16_t Char_ToLowerInvariant_m5703 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
 uint16_t Char_ToLower_m5704 (Object_t * __this/* static, unused */, uint16_t ___c, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpper(System.Char)
 uint16_t Char_ToUpper_m1793 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpperInvariant(System.Char)
 uint16_t Char_ToUpperInvariant_m4224 (Object_t * __this/* static, unused */, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
 String_t* Char_ToString_m1749 (uint16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString(System.IFormatProvider)
 String_t* Char_ToString_m5705 (uint16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Char::GetTypeCode()
 int32_t Char_GetTypeCode_m5706 (uint16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
