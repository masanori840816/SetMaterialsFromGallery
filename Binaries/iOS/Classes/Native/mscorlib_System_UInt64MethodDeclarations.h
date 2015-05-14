#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UInt64
struct UInt64_t1119;
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

// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool UInt64_System_IConvertible_ToBoolean_m5542 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t UInt64_System_IConvertible_ToByte_m5543 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t UInt64_System_IConvertible_ToChar_m5544 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t458  UInt64_System_IConvertible_ToDateTime_m5545 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t1145  UInt64_System_IConvertible_ToDecimal_m5546 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
 double UInt64_System_IConvertible_ToDouble_m5547 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t UInt64_System_IConvertible_ToInt16_m5548 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t UInt64_System_IConvertible_ToInt32_m5549 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t UInt64_System_IConvertible_ToInt64_m5550 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t UInt64_System_IConvertible_ToSByte_m5551 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
 float UInt64_System_IConvertible_ToSingle_m5552 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * UInt64_System_IConvertible_ToType_m5553 (uint64_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t UInt64_System_IConvertible_ToUInt16_m5554 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t UInt64_System_IConvertible_ToUInt32_m5555 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t UInt64_System_IConvertible_ToUInt64_m5556 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.Object)
 int32_t UInt64_CompareTo_m5557 (uint64_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.Object)
 bool UInt64_Equals_m5558 (uint64_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
 int32_t UInt64_GetHashCode_m5559 (uint64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
 int32_t UInt64_CompareTo_m5560 (uint64_t* __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.UInt64)
 bool UInt64_Equals_m5561 (uint64_t* __this, uint64_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
 uint64_t UInt64_Parse_m5562 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
 bool UInt64_Parse_m5563 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, uint64_t* ___result, Exception_t304 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 uint64_t UInt64_Parse_m5564 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
 bool UInt64_TryParse_m5565 (Object_t * __this/* static, unused */, String_t* ___s, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString()
 String_t* UInt64_ToString_m5566 (uint64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.IFormatProvider)
 String_t* UInt64_ToString_m5263 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String)
 String_t* UInt64_ToString_m5567 (uint64_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
 String_t* UInt64_ToString_m5568 (uint64_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
