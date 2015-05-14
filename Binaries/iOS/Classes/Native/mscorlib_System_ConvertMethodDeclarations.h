#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Convert
struct Convert_t633;
// System.Byte[]
struct ByteU5BU5D_t17;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Convert::.cctor()
 void Convert__cctor_m9046 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::InternalFromBase64String(System.String,System.Boolean)
 ByteU5BU5D_t17* Convert_InternalFromBase64String_m9047 (Object_t * __this/* static, unused */, String_t* ___str, bool ___allowWhitespaceOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
 ByteU5BU5D_t17* Convert_FromBase64String_m5333 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
 String_t* Convert_ToBase64String_m5306 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___inArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[],System.Int32,System.Int32)
 String_t* Convert_ToBase64String_m9048 (Object_t * __this/* static, unused */, ByteU5BU5D_t17* ___inArray, int32_t ___offset, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Byte)
 bool Convert_ToBoolean_m9049 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Decimal)
 bool Convert_ToBoolean_m9050 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Double)
 bool Convert_ToBoolean_m9051 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Single)
 bool Convert_ToBoolean_m9052 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int32)
 bool Convert_ToBoolean_m9053 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int64)
 bool Convert_ToBoolean_m9054 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.SByte)
 bool Convert_ToBoolean_m9055 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Int16)
 bool Convert_ToBoolean_m9056 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.String,System.IFormatProvider)
 bool Convert_ToBoolean_m9057 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
 bool Convert_ToBoolean_m9058 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
 bool Convert_ToBoolean_m9059 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
 bool Convert_ToBoolean_m9060 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object)
 bool Convert_ToBoolean_m9061 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.Object,System.IFormatProvider)
 bool Convert_ToBoolean_m9062 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Boolean)
 uint8_t Convert_ToByte_m9063 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Char)
 uint8_t Convert_ToByte_m9064 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Decimal)
 uint8_t Convert_ToByte_m9065 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Double)
 uint8_t Convert_ToByte_m9066 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Single)
 uint8_t Convert_ToByte_m9067 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int32)
 uint8_t Convert_ToByte_m9068 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int64)
 uint8_t Convert_ToByte_m9069 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.SByte)
 uint8_t Convert_ToByte_m9070 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Int16)
 uint8_t Convert_ToByte_m9071 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String)
 uint8_t Convert_ToByte_m9072 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.String,System.IFormatProvider)
 uint8_t Convert_ToByte_m9073 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
 uint8_t Convert_ToByte_m9074 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
 uint8_t Convert_ToByte_m9075 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
 uint8_t Convert_ToByte_m9076 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.Object,System.IFormatProvider)
 uint8_t Convert_ToByte_m9077 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Byte)
 uint16_t Convert_ToChar_m5335 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int32)
 uint16_t Convert_ToChar_m9078 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int64)
 uint16_t Convert_ToChar_m9079 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Single)
 uint16_t Convert_ToChar_m9080 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.SByte)
 uint16_t Convert_ToChar_m9081 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Int16)
 uint16_t Convert_ToChar_m9082 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.String,System.IFormatProvider)
 uint16_t Convert_ToChar_m9083 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
 uint16_t Convert_ToChar_m9084 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
 uint16_t Convert_ToChar_m9085 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
 uint16_t Convert_ToChar_m9086 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.Object,System.IFormatProvider)
 uint16_t Convert_ToChar_m9087 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
 DateTime_t458  Convert_ToDateTime_m9088 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int16)
 DateTime_t458  Convert_ToDateTime_m9089 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int32)
 DateTime_t458  Convert_ToDateTime_m9090 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Int64)
 DateTime_t458  Convert_ToDateTime_m9091 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Single)
 DateTime_t458  Convert_ToDateTime_m9092 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.Object,System.IFormatProvider)
 DateTime_t458  Convert_ToDateTime_m9093 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.SByte)
 DateTime_t458  Convert_ToDateTime_m9094 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt16)
 DateTime_t458  Convert_ToDateTime_m9095 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt32)
 DateTime_t458  Convert_ToDateTime_m9096 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt64)
 DateTime_t458  Convert_ToDateTime_m9097 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Boolean)
 Decimal_t1145  Convert_ToDecimal_m9098 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Byte)
 Decimal_t1145  Convert_ToDecimal_m9099 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Double)
 Decimal_t1145  Convert_ToDecimal_m9100 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Single)
 Decimal_t1145  Convert_ToDecimal_m9101 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int32)
 Decimal_t1145  Convert_ToDecimal_m9102 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int64)
 Decimal_t1145  Convert_ToDecimal_m9103 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.SByte)
 Decimal_t1145  Convert_ToDecimal_m9104 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Int16)
 Decimal_t1145  Convert_ToDecimal_m9105 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.String,System.IFormatProvider)
 Decimal_t1145  Convert_ToDecimal_m9106 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
 Decimal_t1145  Convert_ToDecimal_m9107 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
 Decimal_t1145  Convert_ToDecimal_m9108 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
 Decimal_t1145  Convert_ToDecimal_m9109 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
 Decimal_t1145  Convert_ToDecimal_m9110 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Boolean)
 double Convert_ToDouble_m9111 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Byte)
 double Convert_ToDouble_m9112 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Decimal)
 double Convert_ToDouble_m9113 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Double)
 double Convert_ToDouble_m9114 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Single)
 double Convert_ToDouble_m9115 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int32)
 double Convert_ToDouble_m9116 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int64)
 double Convert_ToDouble_m9117 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.SByte)
 double Convert_ToDouble_m9118 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Int16)
 double Convert_ToDouble_m9119 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.String,System.IFormatProvider)
 double Convert_ToDouble_m9120 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
 double Convert_ToDouble_m9121 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
 double Convert_ToDouble_m9122 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
 double Convert_ToDouble_m9123 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
 double Convert_ToDouble_m9124 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Boolean)
 int16_t Convert_ToInt16_m9125 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Byte)
 int16_t Convert_ToInt16_m9126 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Char)
 int16_t Convert_ToInt16_m9127 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Decimal)
 int16_t Convert_ToInt16_m9128 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Double)
 int16_t Convert_ToInt16_m9129 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Single)
 int16_t Convert_ToInt16_m9130 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int32)
 int16_t Convert_ToInt16_m9131 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int64)
 int16_t Convert_ToInt16_m9132 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.SByte)
 int16_t Convert_ToInt16_m9133 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Int16)
 int16_t Convert_ToInt16_m9134 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.String,System.IFormatProvider)
 int16_t Convert_ToInt16_m5264 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
 int16_t Convert_ToInt16_m9135 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
 int16_t Convert_ToInt16_m9136 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
 int16_t Convert_ToInt16_m9137 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object)
 int16_t Convert_ToInt16_m9138 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
 int16_t Convert_ToInt16_m9139 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Boolean)
 int32_t Convert_ToInt32_m9140 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Byte)
 int32_t Convert_ToInt32_m9141 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Char)
 int32_t Convert_ToInt32_m9142 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Decimal)
 int32_t Convert_ToInt32_m9143 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Double)
 int32_t Convert_ToInt32_m9144 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Single)
 int32_t Convert_ToInt32_m9145 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int64)
 int32_t Convert_ToInt32_m9146 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.SByte)
 int32_t Convert_ToInt32_m9147 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Int16)
 int32_t Convert_ToInt32_m9148 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.String,System.IFormatProvider)
 int32_t Convert_ToInt32_m9149 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
 int32_t Convert_ToInt32_m9150 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
 int32_t Convert_ToInt32_m9151 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
 int32_t Convert_ToInt32_m9152 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object)
 int32_t Convert_ToInt32_m9153 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Object,System.IFormatProvider)
 int32_t Convert_ToInt32_m5347 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Boolean)
 int64_t Convert_ToInt64_m9154 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Byte)
 int64_t Convert_ToInt64_m9155 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Char)
 int64_t Convert_ToInt64_m9156 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Decimal)
 int64_t Convert_ToInt64_m9157 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Double)
 int64_t Convert_ToInt64_m9158 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Single)
 int64_t Convert_ToInt64_m9159 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int32)
 int64_t Convert_ToInt64_m9160 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int64)
 int64_t Convert_ToInt64_m9161 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.SByte)
 int64_t Convert_ToInt64_m9162 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Int16)
 int64_t Convert_ToInt64_m9163 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String)
 int64_t Convert_ToInt64_m9164 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.String,System.IFormatProvider)
 int64_t Convert_ToInt64_m9165 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
 int64_t Convert_ToInt64_m9166 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
 int64_t Convert_ToInt64_m9167 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
 int64_t Convert_ToInt64_m9168 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object)
 int64_t Convert_ToInt64_m9169 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.Object,System.IFormatProvider)
 int64_t Convert_ToInt64_m9170 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Boolean)
 int8_t Convert_ToSByte_m9171 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Byte)
 int8_t Convert_ToSByte_m9172 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Char)
 int8_t Convert_ToSByte_m9173 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Decimal)
 int8_t Convert_ToSByte_m9174 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Double)
 int8_t Convert_ToSByte_m9175 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Single)
 int8_t Convert_ToSByte_m9176 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int32)
 int8_t Convert_ToSByte_m9177 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int64)
 int8_t Convert_ToSByte_m9178 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Int16)
 int8_t Convert_ToSByte_m9179 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.String,System.IFormatProvider)
 int8_t Convert_ToSByte_m9180 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
 int8_t Convert_ToSByte_m9181 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
 int8_t Convert_ToSByte_m9182 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
 int8_t Convert_ToSByte_m9183 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
 int8_t Convert_ToSByte_m9184 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Boolean)
 float Convert_ToSingle_m9185 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Byte)
 float Convert_ToSingle_m9186 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Decimal)
 float Convert_ToSingle_m9187 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Double)
 float Convert_ToSingle_m9188 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Single)
 float Convert_ToSingle_m9189 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int32)
 float Convert_ToSingle_m9190 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int64)
 float Convert_ToSingle_m9191 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.SByte)
 float Convert_ToSingle_m9192 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Int16)
 float Convert_ToSingle_m9193 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
 float Convert_ToSingle_m9194 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
 float Convert_ToSingle_m9195 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
 float Convert_ToSingle_m9196 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
 float Convert_ToSingle_m9197 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
 float Convert_ToSingle_m9198 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object)
 String_t* Convert_ToString_m9199 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToString(System.Object,System.IFormatProvider)
 String_t* Convert_ToString_m9200 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Boolean)
 uint16_t Convert_ToUInt16_m9201 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Byte)
 uint16_t Convert_ToUInt16_m9202 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Char)
 uint16_t Convert_ToUInt16_m9203 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Decimal)
 uint16_t Convert_ToUInt16_m9204 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Double)
 uint16_t Convert_ToUInt16_m9205 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Single)
 uint16_t Convert_ToUInt16_m9206 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int32)
 uint16_t Convert_ToUInt16_m9207 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int64)
 uint16_t Convert_ToUInt16_m9208 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.SByte)
 uint16_t Convert_ToUInt16_m9209 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Int16)
 uint16_t Convert_ToUInt16_m9210 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.String,System.IFormatProvider)
 uint16_t Convert_ToUInt16_m9211 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
 uint16_t Convert_ToUInt16_m9212 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
 uint16_t Convert_ToUInt16_m9213 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.Object,System.IFormatProvider)
 uint16_t Convert_ToUInt16_m9214 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Boolean)
 uint32_t Convert_ToUInt32_m3017 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Byte)
 uint32_t Convert_ToUInt32_m9215 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Char)
 uint32_t Convert_ToUInt32_m9216 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Decimal)
 uint32_t Convert_ToUInt32_m9217 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Double)
 uint32_t Convert_ToUInt32_m9218 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Single)
 uint32_t Convert_ToUInt32_m9219 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int32)
 uint32_t Convert_ToUInt32_m9220 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int64)
 uint32_t Convert_ToUInt32_m9221 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.SByte)
 uint32_t Convert_ToUInt32_m9222 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Int16)
 uint32_t Convert_ToUInt32_m9223 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.String,System.IFormatProvider)
 uint32_t Convert_ToUInt32_m9224 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
 uint32_t Convert_ToUInt32_m9225 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
 uint32_t Convert_ToUInt32_m9226 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object)
 uint32_t Convert_ToUInt32_m3016 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
 uint32_t Convert_ToUInt32_m9227 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Boolean)
 uint64_t Convert_ToUInt64_m9228 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Byte)
 uint64_t Convert_ToUInt64_m9229 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Char)
 uint64_t Convert_ToUInt64_m9230 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Decimal)
 uint64_t Convert_ToUInt64_m9231 (Object_t * __this/* static, unused */, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Double)
 uint64_t Convert_ToUInt64_m9232 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Single)
 uint64_t Convert_ToUInt64_m9233 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int32)
 uint64_t Convert_ToUInt64_m9234 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int64)
 uint64_t Convert_ToUInt64_m9235 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.SByte)
 uint64_t Convert_ToUInt64_m9236 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Int16)
 uint64_t Convert_ToUInt64_m9237 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.String,System.IFormatProvider)
 uint64_t Convert_ToUInt64_m9238 (Object_t * __this/* static, unused */, String_t* ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
 uint64_t Convert_ToUInt64_m9239 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
 uint64_t Convert_ToUInt64_m9240 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object)
 uint64_t Convert_ToUInt64_m9241 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.Object,System.IFormatProvider)
 uint64_t Convert_ToUInt64_m9242 (Object_t * __this/* static, unused */, Object_t * ___value, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ChangeType(System.Object,System.Type)
 Object_t * Convert_ChangeType_m9243 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___conversionType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
 Object_t * Convert_ToType_m9244 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___conversionType, Object_t * ___provider, bool ___try_target_to_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
