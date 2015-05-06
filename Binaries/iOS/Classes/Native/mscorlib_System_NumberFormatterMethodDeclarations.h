#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter
struct NumberFormatter_t1698;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.Threading.Thread
struct Thread_t1459;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1144;
// System.IFormatProvider
struct IFormatProvider_t1118;
// System.Text.StringBuilder
struct StringBuilder_t274;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
 void NumberFormatter__ctor_m9533 (NumberFormatter_t1698 * __this, Thread_t1459 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
 void NumberFormatter__cctor_m9534 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
 void NumberFormatter_GetFormatterTables_m9535 (Object_t * __this/* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
 int64_t NumberFormatter_GetTenPowerOf_m9536 (Object_t * __this/* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
 void NumberFormatter_InitDecHexDigits_m9537 (NumberFormatter_t1698 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
 void NumberFormatter_InitDecHexDigits_m9538 (NumberFormatter_t1698 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
 void NumberFormatter_InitDecHexDigits_m9539 (NumberFormatter_t1698 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
 uint32_t NumberFormatter_FastToDecHex_m9540 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
 uint32_t NumberFormatter_ToDecHex_m9541 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
 int32_t NumberFormatter_FastDecHexLen_m9542 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
 int32_t NumberFormatter_DecHexLen_m9543 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
 int32_t NumberFormatter_DecHexLen_m9544 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
 int32_t NumberFormatter_ScaleOrder_m9545 (Object_t * __this/* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
 int32_t NumberFormatter_InitialFloatingPrecision_m9546 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
 int32_t NumberFormatter_ParsePrecision_m9547 (Object_t * __this/* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
 void NumberFormatter_Init_m9548 (NumberFormatter_t1698 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
 void NumberFormatter_InitHex_m9549 (NumberFormatter_t1698 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
 void NumberFormatter_Init_m9550 (NumberFormatter_t1698 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
 void NumberFormatter_Init_m9551 (NumberFormatter_t1698 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
 void NumberFormatter_Init_m9552 (NumberFormatter_t1698 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
 void NumberFormatter_Init_m9553 (NumberFormatter_t1698 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
 void NumberFormatter_Init_m9554 (NumberFormatter_t1698 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
 void NumberFormatter_Init_m9555 (NumberFormatter_t1698 * __this, String_t* ___format, Decimal_t1145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
 void NumberFormatter_ResetCharBuf_m9556 (NumberFormatter_t1698 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
 void NumberFormatter_Resize_m9557 (NumberFormatter_t1698 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
 void NumberFormatter_Append_m9558 (NumberFormatter_t1698 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
 void NumberFormatter_Append_m9559 (NumberFormatter_t1698 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
 void NumberFormatter_Append_m9560 (NumberFormatter_t1698 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
 NumberFormatInfo_t1144 * NumberFormatter_GetNumberFormatInstance_m9561 (NumberFormatter_t1698 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_set_CurrentCulture_m9562 (NumberFormatter_t1698 * __this, CultureInfo_t674 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
 int32_t NumberFormatter_get_IntegerDigits_m9563 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
 int32_t NumberFormatter_get_DecimalDigits_m9564 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
 bool NumberFormatter_get_IsFloatingSource_m9565 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
 bool NumberFormatter_get_IsZero_m9566 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
 bool NumberFormatter_get_IsZeroInteger_m9567 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
 void NumberFormatter_RoundPos_m9568 (NumberFormatter_t1698 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
 bool NumberFormatter_RoundDecimal_m9569 (NumberFormatter_t1698 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
 bool NumberFormatter_RoundBits_m9570 (NumberFormatter_t1698 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
 void NumberFormatter_RemoveTrailingZeros_m9571 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
 void NumberFormatter_AddOneToDecHex_m9572 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
 uint32_t NumberFormatter_AddOneToDecHex_m9573 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
 int32_t NumberFormatter_CountTrailingZeros_m9574 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
 int32_t NumberFormatter_CountTrailingZeros_m9575 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
 NumberFormatter_t1698 * NumberFormatter_GetInstance_m9576 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
 void NumberFormatter_Release_m9577 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_SetThreadCurrentCulture_m9578 (Object_t * __this/* static, unused */, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9579 (Object_t * __this/* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9580 (Object_t * __this/* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9581 (Object_t * __this/* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9582 (Object_t * __this/* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9583 (Object_t * __this/* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9584 (Object_t * __this/* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9585 (Object_t * __this/* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9586 (Object_t * __this/* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9587 (Object_t * __this/* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9588 (Object_t * __this/* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9589 (Object_t * __this/* static, unused */, String_t* ___format, Decimal_t1145  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9590 (Object_t * __this/* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9591 (Object_t * __this/* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9592 (Object_t * __this/* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9593 (Object_t * __this/* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9594 (Object_t * __this/* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m9595 (Object_t * __this/* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_FastIntegerToString_m9596 (NumberFormatter_t1698 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
 String_t* NumberFormatter_IntegerToString_m9597 (NumberFormatter_t1698 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_NumberToString_m9598 (NumberFormatter_t1698 * __this, String_t* ___format, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCurrency_m9599 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatDecimal_m9600 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
 String_t* NumberFormatter_FormatHexadecimal_m9601 (NumberFormatter_t1698 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatFixedPoint_m9602 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m9603 (NumberFormatter_t1698 * __this, double ___origval, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m9604 (NumberFormatter_t1698 * __this, float ___origval, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatGeneral_m9605 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatNumber_m9606 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatPercent_m9607 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatExponential_m9608 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
 String_t* NumberFormatter_FormatExponential_m9609 (NumberFormatter_t1698 * __this, int32_t ___precision, NumberFormatInfo_t1144 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCustom_m9610 (NumberFormatter_t1698 * __this, String_t* ___format, NumberFormatInfo_t1144 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
 void NumberFormatter_ZeroTrimEnd_m9611 (Object_t * __this/* static, unused */, StringBuilder_t274 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
 bool NumberFormatter_IsZeroOnly_m9612 (Object_t * __this/* static, unused */, StringBuilder_t274 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
 void NumberFormatter_AppendNonNegativeNumber_m9613 (Object_t * __this/* static, unused */, StringBuilder_t274 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendIntegerString_m9614 (NumberFormatter_t1698 * __this, int32_t ___minLength, StringBuilder_t274 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
 void NumberFormatter_AppendIntegerString_m9615 (NumberFormatter_t1698 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDecimalString_m9616 (NumberFormatter_t1698 * __this, int32_t ___precision, StringBuilder_t274 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
 void NumberFormatter_AppendDecimalString_m9617 (NumberFormatter_t1698 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
 void NumberFormatter_AppendIntegerStringWithGroupSeparator_m9618 (NumberFormatter_t1698 * __this, Int32U5BU5D_t877* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
 void NumberFormatter_AppendExponent_m9619 (NumberFormatter_t1698 * __this, NumberFormatInfo_t1144 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
 void NumberFormatter_AppendOneDigit_m9620 (NumberFormatter_t1698 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
 void NumberFormatter_FastAppendDigits_m9621 (NumberFormatter_t1698 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
 void NumberFormatter_AppendDigits_m9622 (NumberFormatter_t1698 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDigits_m9623 (NumberFormatter_t1698 * __this, int32_t ___start, int32_t ___end, StringBuilder_t274 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
 void NumberFormatter_Multiply10_m9624 (NumberFormatter_t1698 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
 void NumberFormatter_Divide10_m9625 (NumberFormatter_t1698 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
 NumberFormatter_t1698 * NumberFormatter_GetClone_m9626 (NumberFormatter_t1698 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
