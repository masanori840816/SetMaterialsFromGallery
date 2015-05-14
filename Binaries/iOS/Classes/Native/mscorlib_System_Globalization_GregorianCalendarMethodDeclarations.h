#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t1314;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.Globalization.GregorianCalendarTypes
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
 void GregorianCalendar__ctor_m7069 (GregorianCalendar_t1314 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
 void GregorianCalendar__ctor_m7070 (GregorianCalendar_t1314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
 Int32U5BU5D_t877* GregorianCalendar_get_Eras_m7071 (GregorianCalendar_t1314 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
 void GregorianCalendar_set_CalendarType_m7072 (GregorianCalendar_t1314 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
 int32_t GregorianCalendar_GetDayOfMonth_m7073 (GregorianCalendar_t1314 * __this, DateTime_t458  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
 int32_t GregorianCalendar_GetDayOfWeek_m7074 (GregorianCalendar_t1314 * __this, DateTime_t458  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
 int32_t GregorianCalendar_GetEra_m7075 (GregorianCalendar_t1314 * __this, DateTime_t458  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
 int32_t GregorianCalendar_GetMonth_m7076 (GregorianCalendar_t1314 * __this, DateTime_t458  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
 int32_t GregorianCalendar_GetYear_m7077 (GregorianCalendar_t1314 * __this, DateTime_t458  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
