#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t178;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t1147;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// System.String[]
struct StringU5BU5D_t9;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Text.StringBuilder
struct StringBuilder_t274;
// System.Text.Encoding
struct Encoding_t970;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
 void String__ctor_m5707 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
 void String__ctor_m5708 (String_t* __this, CharU5BU5D_t178* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
 void String__ctor_m4416 (String_t* __this, CharU5BU5D_t178* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
 void String__ctor_m1753 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
 void String__cctor_m5709 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool String_System_IConvertible_ToBoolean_m5710 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t String_System_IConvertible_ToByte_m5711 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t String_System_IConvertible_ToChar_m5712 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t458  String_System_IConvertible_ToDateTime_m5713 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t1145  String_System_IConvertible_ToDecimal_m5714 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
 double String_System_IConvertible_ToDouble_m5715 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t String_System_IConvertible_ToInt16_m5716 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t String_System_IConvertible_ToInt32_m5717 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t String_System_IConvertible_ToInt64_m5718 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t String_System_IConvertible_ToSByte_m5719 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
 float String_System_IConvertible_ToSingle_m5720 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * String_System_IConvertible_ToType_m5721 (String_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t String_System_IConvertible_ToUInt16_m5722 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t String_System_IConvertible_ToUInt32_m5723 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t String_System_IConvertible_ToUInt64_m5724 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
 Object_t* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m5725 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
 Object_t * String_System_Collections_IEnumerable_GetEnumerator_m5726 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
 bool String_Equals_m5727 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
 bool String_Equals_m5728 (String_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
 bool String_Equals_m4335 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
 uint16_t String_get_Chars_m1722 (String_t* __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
 void String_CopyTo_m5729 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t178* ___destination, int32_t ___destinationIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
 CharU5BU5D_t178* String_ToCharArray_m4159 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
 CharU5BU5D_t178* String_ToCharArray_m5730 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
 StringU5BU5D_t9* String_Split_m3082 (String_t* __this, CharU5BU5D_t178* ___separator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
 StringU5BU5D_t9* String_Split_m5731 (String_t* __this, CharU5BU5D_t178* ___separator, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
 StringU5BU5D_t9* String_Split_m5732 (String_t* __this, CharU5BU5D_t178* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
 StringU5BU5D_t9* String_Split_m5733 (String_t* __this, StringU5BU5D_t9* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
 StringU5BU5D_t9* String_Split_m4225 (String_t* __this, StringU5BU5D_t9* ___separator, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
 String_t* String_Substring_m1752 (String_t* __this, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
 String_t* String_Substring_m1723 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
 String_t* String_SubstringUnchecked_m5734 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
 String_t* String_Trim_m3079 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
 String_t* String_Trim_m5735 (String_t* __this, CharU5BU5D_t178* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
 String_t* String_TrimStart_m4436 (String_t* __this, CharU5BU5D_t178* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
 String_t* String_TrimEnd_m4223 (String_t* __this, CharU5BU5D_t178* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
 int32_t String_FindNotWhiteSpace_m5736 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
 int32_t String_FindNotInTable_m5737 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t178* ___table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
 int32_t String_Compare_m5738 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
 int32_t String_Compare_m5739 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
 int32_t String_Compare_m4187 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
 int32_t String_Compare_m5435 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
 int32_t String_CompareTo_m5740 (String_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
 int32_t String_CompareTo_m5741 (String_t* __this, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinal_m5742 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinalUnchecked_m5743 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m5744 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
 bool String_EndsWith_m3084 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
 int32_t String_IndexOfAny_m5745 (String_t* __this, CharU5BU5D_t178* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
 int32_t String_IndexOfAny_m1743 (String_t* __this, CharU5BU5D_t178* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
 int32_t String_IndexOfAny_m5322 (String_t* __this, CharU5BU5D_t178* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
 int32_t String_IndexOfAnyUnchecked_m5746 (String_t* __this, CharU5BU5D_t178* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
 int32_t String_IndexOf_m4281 (String_t* __this, String_t* ___value, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
 int32_t String_IndexOf_m5747 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t String_IndexOfOrdinal_m5748 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
 int32_t String_IndexOfOrdinalUnchecked_m5749 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
 int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m5750 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
 int32_t String_IndexOf_m1796 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
 int32_t String_IndexOf_m4437 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
 int32_t String_IndexOf_m4438 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
 int32_t String_IndexOfUnchecked_m5751 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
 int32_t String_IndexOf_m3083 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
 int32_t String_IndexOf_m3085 (String_t* __this, String_t* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
 int32_t String_IndexOf_m5752 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
 int32_t String_LastIndexOfAny_m5753 (String_t* __this, CharU5BU5D_t178* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
 int32_t String_LastIndexOfAny_m1745 (String_t* __this, CharU5BU5D_t178* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
 int32_t String_LastIndexOfAnyUnchecked_m5754 (String_t* __this, CharU5BU5D_t178* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
 int32_t String_LastIndexOf_m4166 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
 int32_t String_LastIndexOf_m5755 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
 int32_t String_LastIndexOf_m4439 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
 int32_t String_LastIndexOfUnchecked_m5756 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
 int32_t String_LastIndexOf_m3088 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
 int32_t String_LastIndexOf_m5757 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
 bool String_Contains_m1790 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
 bool String_IsNullOrEmpty_m1754 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
 String_t* String_PadRight_m5758 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
 bool String_StartsWith_m3076 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
 String_t* String_Replace_m3087 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
 String_t* String_Replace_m3086 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
 String_t* String_ReplaceUnchecked_m5759 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
 String_t* String_ReplaceFallback_m5760 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
 String_t* String_Remove_m1748 (String_t* __this, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
 String_t* String_ToLower_m4412 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
 String_t* String_ToLower_m4434 (String_t* __this, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
 String_t* String_ToLowerInvariant_m5761 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
 String_t* String_ToString_m3075 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
 String_t* String_ToString_m5762 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
 String_t* String_Format_m1511 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
 String_t* String_Format_m5763 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
 String_t* String_Format_m5764 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
 String_t* String_Format_m1921 (Object_t * __this/* static, unused */, String_t* ___format, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
 String_t* String_Format_m5372 (Object_t * __this/* static, unused */, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
 StringBuilder_t274 * String_FormatHelper_m5765 (Object_t * __this/* static, unused */, StringBuilder_t274 * ___result, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
 String_t* String_Concat_m1282 (Object_t * __this/* static, unused */, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
 String_t* String_Concat_m1265 (Object_t * __this/* static, unused */, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
 String_t* String_Concat_m1747 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
 String_t* String_Concat_m1665 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
 String_t* String_Concat_m3080 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
 String_t* String_Concat_m1358 (Object_t * __this/* static, unused */, ObjectU5BU5D_t295* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
 String_t* String_Concat_m4163 (Object_t * __this/* static, unused */, StringU5BU5D_t9* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
 String_t* String_ConcatInternal_m5766 (Object_t * __this/* static, unused */, StringU5BU5D_t9* ___values, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
 String_t* String_Insert_m1750 (String_t* __this, int32_t ___startIndex, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
 String_t* String_Join_m5767 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t9* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
 String_t* String_Join_m5768 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t9* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
 String_t* String_JoinUnchecked_m5769 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t9* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
 int32_t String_get_Length_m1695 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
 void String_ParseFormatSpecifier_m5770 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
 int32_t String_ParseDecimal_m5771 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
 void String_InternalSetChar_m5772 (String_t* __this, int32_t ___idx, uint16_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
 void String_InternalSetLength_m5773 (String_t* __this, int32_t ___newLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
 int32_t String_GetHashCode_m2991 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
 int32_t String_GetCaseInsensitiveHashCode_m5774 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
 String_t* String_CreateString_m5775 (String_t* __this, int8_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
 String_t* String_CreateString_m5776 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
 String_t* String_CreateString_m5777 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t970 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
 String_t* String_CreateString_m5778 (String_t* __this, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
 String_t* String_CreateString_m5779 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
 String_t* String_CreateString_m5780 (String_t* __this, CharU5BU5D_t178* ___val, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
 String_t* String_CreateString_m4417 (String_t* __this, CharU5BU5D_t178* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
 String_t* String_CreateString_m1802 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy4_m5781 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy2_m5782 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy1_m5783 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy_m5784 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
 void String_CharCopy_m5785 (Object_t * __this/* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
 void String_CharCopyReverse_m5786 (Object_t * __this/* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
 void String_CharCopy_m5787 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
 void String_CharCopy_m5788 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t178* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
 void String_CharCopyReverse_m5789 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
 StringU5BU5D_t9* String_InternalSplit_m5790 (String_t* __this, CharU5BU5D_t178* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
 String_t* String_InternalAllocateStr_m5791 (Object_t * __this/* static, unused */, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
 bool String_op_Equality_m1693 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
 bool String_op_Inequality_m1721 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
