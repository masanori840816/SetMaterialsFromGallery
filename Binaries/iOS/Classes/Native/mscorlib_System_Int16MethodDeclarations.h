#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int16
struct Int16_t349;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t304;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.Int16::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Int16_System_IConvertible_ToBoolean_m5622 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int16::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Int16_System_IConvertible_ToByte_m5623 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int16::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Int16_System_IConvertible_ToChar_m5624 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int16::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t458  Int16_System_IConvertible_ToDateTime_m5625 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int16::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t1145  Int16_System_IConvertible_ToDecimal_m5626 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int16::System.IConvertible.ToDouble(System.IFormatProvider)
 double Int16_System_IConvertible_ToDouble_m5627 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Int16_System_IConvertible_ToInt16_m5628 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Int16_System_IConvertible_ToInt32_m5629 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int16::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Int16_System_IConvertible_ToInt64_m5630 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int16::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Int16_System_IConvertible_ToSByte_m5631 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int16::System.IConvertible.ToSingle(System.IFormatProvider)
 float Int16_System_IConvertible_ToSingle_m5632 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Int16_System_IConvertible_ToType_m5633 (int16_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int16::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Int16_System_IConvertible_ToUInt16_m5634 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int16::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Int16_System_IConvertible_ToUInt32_m5635 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int16::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Int16_System_IConvertible_ToUInt64_m5636 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Object)
 int32_t Int16_CompareTo_m5637 (int16_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Object)
 bool Int16_Equals_m5638 (int16_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::GetHashCode()
 int32_t Int16_GetHashCode_m5639 (int16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int16::CompareTo(System.Int16)
 int32_t Int16_CompareTo_m5640 (int16_t* __this, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Equals(System.Int16)
 bool Int16_Equals_m5641 (int16_t* __this, int16_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::Parse(System.String,System.Boolean,System.Int16&,System.Exception&)
 bool Int16_Parse_m5642 (Object_t * __this/* static, unused */, String_t* ___s, bool ___tryParse, int16_t* ___result, Exception_t304 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.IFormatProvider)
 int16_t Int16_Parse_m5643 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 int16_t Int16_Parse_m5644 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int16::TryParse(System.String,System.Int16&)
 bool Int16_TryParse_m5645 (Object_t * __this/* static, unused */, String_t* ___s, int16_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString()
 String_t* Int16_ToString_m5646 (int16_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.IFormatProvider)
 String_t* Int16_ToString_m5647 (int16_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String)
 String_t* Int16_ToString_m5648 (int16_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int16::ToString(System.String,System.IFormatProvider)
 String_t* Int16_ToString_m5649 (int16_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
