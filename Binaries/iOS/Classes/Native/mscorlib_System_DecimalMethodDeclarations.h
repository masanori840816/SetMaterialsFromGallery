#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t1145;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1144;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
 void Decimal__ctor_m5850 (Decimal_t1145 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
 void Decimal__ctor_m5851 (Decimal_t1145 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
 void Decimal__ctor_m5852 (Decimal_t1145 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
 void Decimal__ctor_m5853 (Decimal_t1145 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
 void Decimal__ctor_m5854 (Decimal_t1145 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
 void Decimal__ctor_m5855 (Decimal_t1145 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
 void Decimal__ctor_m5856 (Decimal_t1145 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
 void Decimal__cctor_m5857 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Decimal_System_IConvertible_ToType_m5858 (Decimal_t1145 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Decimal_System_IConvertible_ToBoolean_m5859 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Decimal_System_IConvertible_ToByte_m5860 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToChar_m5861 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t458  Decimal_System_IConvertible_ToDateTime_m5862 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t1145  Decimal_System_IConvertible_ToDecimal_m5863 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
 double Decimal_System_IConvertible_ToDouble_m5864 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Decimal_System_IConvertible_ToInt16_m5865 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Decimal_System_IConvertible_ToInt32_m5866 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Decimal_System_IConvertible_ToInt64_m5867 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Decimal_System_IConvertible_ToSByte_m5868 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
 float Decimal_System_IConvertible_ToSingle_m5869 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToUInt16_m5870 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Decimal_System_IConvertible_ToUInt32_m5871 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Decimal_System_IConvertible_ToUInt64_m5872 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
 Int32U5BU5D_t877* Decimal_GetBits_m5873 (Object_t * __this/* static, unused */, Decimal_t1145  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
 Decimal_t1145  Decimal_Add_m5874 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
 Decimal_t1145  Decimal_Subtract_m5875 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
 int32_t Decimal_GetHashCode_m5876 (Decimal_t1145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
 uint64_t Decimal_u64_m5877 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
 int64_t Decimal_s64_m5878 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
 bool Decimal_Equals_m5879 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
 bool Decimal_Equals_m5880 (Decimal_t1145 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
 bool Decimal_IsZero_m5881 (Decimal_t1145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
 Decimal_t1145  Decimal_Floor_m5882 (Object_t * __this/* static, unused */, Decimal_t1145  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
 Decimal_t1145  Decimal_Multiply_m5883 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
 Decimal_t1145  Decimal_Divide_m5884 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
 int32_t Decimal_Compare_m5885 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
 int32_t Decimal_CompareTo_m5886 (Decimal_t1145 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
 int32_t Decimal_CompareTo_m5887 (Decimal_t1145 * __this, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
 bool Decimal_Equals_m5888 (Decimal_t1145 * __this, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
 Decimal_t1145  Decimal_Parse_m5889 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
 void Decimal_ThrowAtPos_m5890 (Object_t * __this/* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
 void Decimal_ThrowInvalidExp_m5891 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
 String_t* Decimal_stripStyles_m5892 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1144 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 Decimal_t1145  Decimal_Parse_m5893 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
 bool Decimal_PerformParse_m5894 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t1145 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
 String_t* Decimal_ToString_m5895 (Decimal_t1145 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
 String_t* Decimal_ToString_m5896 (Decimal_t1145 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
 String_t* Decimal_ToString_m5897 (Decimal_t1145 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
 int32_t Decimal_decimal2UInt64_m5898 (Object_t * __this/* static, unused */, Decimal_t1145 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
 int32_t Decimal_decimal2Int64_m5899 (Object_t * __this/* static, unused */, Decimal_t1145 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalIncr_m5900 (Object_t * __this/* static, unused */, Decimal_t1145 * ___d1, Decimal_t1145 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
 int32_t Decimal_string2decimal_m5901 (Object_t * __this/* static, unused */, Decimal_t1145 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
 int32_t Decimal_decimalSetExponent_m5902 (Object_t * __this/* static, unused */, Decimal_t1145 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
 double Decimal_decimal2double_m5903 (Object_t * __this/* static, unused */, Decimal_t1145 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
 void Decimal_decimalFloorAndTrunc_m5904 (Object_t * __this/* static, unused */, Decimal_t1145 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalMult_m5905 (Object_t * __this/* static, unused */, Decimal_t1145 * ___pd1, Decimal_t1145 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalDiv_m5906 (Object_t * __this/* static, unused */, Decimal_t1145 * ___pc, Decimal_t1145 * ___pa, Decimal_t1145 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalCompare_m5907 (Object_t * __this/* static, unused */, Decimal_t1145 * ___d1, Decimal_t1145 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
 Decimal_t1145  Decimal_op_Increment_m5908 (Object_t * __this/* static, unused */, Decimal_t1145  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
 Decimal_t1145  Decimal_op_Subtraction_m5909 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
 Decimal_t1145  Decimal_op_Multiply_m5910 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
 Decimal_t1145  Decimal_op_Division_m5911 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
 uint8_t Decimal_op_Explicit_m5912 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
 int8_t Decimal_op_Explicit_m5913 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
 int16_t Decimal_op_Explicit_m5914 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
 uint16_t Decimal_op_Explicit_m5915 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
 int32_t Decimal_op_Explicit_m5916 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
 uint32_t Decimal_op_Explicit_m5917 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
 int64_t Decimal_op_Explicit_m5918 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
 uint64_t Decimal_op_Explicit_m5919 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
 Decimal_t1145  Decimal_op_Implicit_m5920 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
 Decimal_t1145  Decimal_op_Implicit_m5921 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
 Decimal_t1145  Decimal_op_Implicit_m5922 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
 Decimal_t1145  Decimal_op_Implicit_m5923 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
 Decimal_t1145  Decimal_op_Implicit_m5924 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
 Decimal_t1145  Decimal_op_Implicit_m5925 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
 Decimal_t1145  Decimal_op_Implicit_m5926 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
 Decimal_t1145  Decimal_op_Implicit_m5927 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
 Decimal_t1145  Decimal_op_Explicit_m5928 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
 Decimal_t1145  Decimal_op_Explicit_m5929 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
 float Decimal_op_Explicit_m5930 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
 double Decimal_op_Explicit_m5931 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
 bool Decimal_op_Inequality_m5932 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
 bool Decimal_op_Equality_m5933 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
 bool Decimal_op_GreaterThan_m5934 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
 bool Decimal_op_LessThan_m5935 (Object_t * __this/* static, unused */, Decimal_t1145  ___d1, Decimal_t1145  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
