#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Single
struct Single_t16;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Boolean System.Single::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Single_System_IConvertible_ToBoolean_m5792 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Single::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Single_System_IConvertible_ToByte_m5793 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Single::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Single_System_IConvertible_ToChar_m5794 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Single::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t458  Single_System_IConvertible_ToDateTime_m5795 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Single::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t1145  Single_System_IConvertible_ToDecimal_m5796 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Single::System.IConvertible.ToDouble(System.IFormatProvider)
 double Single_System_IConvertible_ToDouble_m5797 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Single::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Single_System_IConvertible_ToInt16_m5798 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Single_System_IConvertible_ToInt32_m5799 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Single::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Single_System_IConvertible_ToInt64_m5800 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Single::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Single_System_IConvertible_ToSByte_m5801 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::System.IConvertible.ToSingle(System.IFormatProvider)
 float Single_System_IConvertible_ToSingle_m5802 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Single::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Single_System_IConvertible_ToType_m5803 (float* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Single::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Single_System_IConvertible_ToUInt16_m5804 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Single::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Single_System_IConvertible_ToUInt32_m5805 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Single::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Single_System_IConvertible_ToUInt64_m5806 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::CompareTo(System.Object)
 int32_t Single_CompareTo_m5807 (float* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Object)
 bool Single_Equals_m5808 (float* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::CompareTo(System.Single)
 int32_t Single_CompareTo_m1274 (float* __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Single)
 bool Single_Equals_m3020 (float* __this, float ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::GetHashCode()
 int32_t Single_GetHashCode_m2989 (float* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsInfinity(System.Single)
 bool Single_IsInfinity_m5809 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNaN(System.Single)
 bool Single_IsNaN_m5810 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNegativeInfinity(System.Single)
 bool Single_IsNegativeInfinity_m5811 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsPositiveInfinity(System.Single)
 bool Single_IsPositiveInfinity_m5812 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
 float Single_Parse_m5813 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
 String_t* Single_ToString_m5814 (float* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.IFormatProvider)
 String_t* Single_ToString_m5815 (float* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
 String_t* Single_ToString_m3021 (float* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
 String_t* Single_ToString_m5816 (float* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Single::GetTypeCode()
 int32_t Single_GetTypeCode_m5817 (float* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
