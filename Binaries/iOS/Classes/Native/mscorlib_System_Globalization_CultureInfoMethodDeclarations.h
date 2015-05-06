#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_t1205;
// System.Globalization.CompareInfo
struct CompareInfo_t1138;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1144;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1309;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

// System.Void System.Globalization.CultureInfo::.ctor(System.Int32)
 void CultureInfo__ctor_m6985 (CultureInfo_t674 * __this, int32_t ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean)
 void CultureInfo__ctor_m6986 (CultureInfo_t674 * __this, int32_t ___culture, bool ___useUserOverride, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.Int32,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m6987 (CultureInfo_t674 * __this, int32_t ___culture, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor(System.String,System.Boolean,System.Boolean)
 void CultureInfo__ctor_m6988 (CultureInfo_t674 * __this, String_t* ___name, bool ___useUserOverride, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.ctor()
 void CultureInfo__ctor_m6989 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::.cctor()
 void CultureInfo__cctor_m6990 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
 CultureInfo_t674 * CultureInfo_get_InvariantCulture_m4159 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
 CultureInfo_t674 * CultureInfo_get_CurrentCulture_m5362 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
 CultureInfo_t674 * CultureInfo_get_CurrentUICulture_m5366 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentCulture()
 CultureInfo_t674 * CultureInfo_ConstructCurrentCulture_m6991 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::ConstructCurrentUICulture()
 CultureInfo_t674 * CultureInfo_ConstructCurrentUICulture_m6992 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::get_LCID()
 int32_t CultureInfo_get_LCID_m6993 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_Name()
 String_t* CultureInfo_get_Name_m6994 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_Parent()
 CultureInfo_t674 * CultureInfo_get_Parent_m6995 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::get_TextInfo()
 TextInfo_t1205 * CultureInfo_get_TextInfo_m6996 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::get_IcuName()
 String_t* CultureInfo_get_IcuName_m6997 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::Equals(System.Object)
 bool CultureInfo_Equals_m6998 (CultureInfo_t674 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CultureInfo::GetHashCode()
 int32_t CultureInfo_GetHashCode_m6999 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.CultureInfo::ToString()
 String_t* CultureInfo_ToString_m7000 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo()
 CompareInfo_t1138 * CultureInfo_get_CompareInfo_m5363 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsNeutralCulture()
 bool CultureInfo_get_IsNeutralCulture_m7001 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::CheckNeutral()
 void CultureInfo_CheckNeutral_m7002 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat()
 NumberFormatInfo_t1144 * CultureInfo_get_NumberFormat_m7003 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.CultureInfo::get_DateTimeFormat()
 DateTimeFormatInfo_t1309 * CultureInfo_get_DateTimeFormat_m7004 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::get_IsReadOnly()
 bool CultureInfo_get_IsReadOnly_m7005 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.CultureInfo::GetFormat(System.Type)
 Object_t * CultureInfo_GetFormat_m7006 (CultureInfo_t674 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::Construct()
 void CultureInfo_Construct_m7007 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromName(System.String)
 bool CultureInfo_ConstructInternalLocaleFromName_m7008 (CultureInfo_t674 * __this, String_t* ___locale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromLcid(System.Int32)
 bool CultureInfo_ConstructInternalLocaleFromLcid_m7009 (CultureInfo_t674 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::ConstructInternalLocaleFromCurrentLocale(System.Globalization.CultureInfo)
 bool CultureInfo_ConstructInternalLocaleFromCurrentLocale_m7010 (Object_t * __this/* static, unused */, CultureInfo_t674 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_lcid(System.Int32)
 bool CultureInfo_construct_internal_locale_from_lcid_m7011 (CultureInfo_t674 * __this, int32_t ___lcid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_name(System.String)
 bool CultureInfo_construct_internal_locale_from_name_m7012 (CultureInfo_t674 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.CultureInfo::construct_internal_locale_from_current_locale(System.Globalization.CultureInfo)
 bool CultureInfo_construct_internal_locale_from_current_locale_m7013 (Object_t * __this/* static, unused */, CultureInfo_t674 * ___ci, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_datetime_format()
 void CultureInfo_construct_datetime_format_m7014 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::construct_number_format()
 void CultureInfo_construct_number_format_m7015 (CultureInfo_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CultureInfo::ConstructInvariant(System.Boolean)
 void CultureInfo_ConstructInvariant_m7016 (CultureInfo_t674 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.TextInfo System.Globalization.CultureInfo::CreateTextInfo(System.Boolean)
 TextInfo_t1205 * CultureInfo_CreateTextInfo_m7017 (CultureInfo_t674 * __this, bool ___readOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::CreateCulture(System.String,System.Boolean)
 CultureInfo_t674 * CultureInfo_CreateCulture_m7018 (Object_t * __this/* static, unused */, String_t* ___name, bool ___reference, MethodInfo* method) IL2CPP_METHOD_ATTR;
