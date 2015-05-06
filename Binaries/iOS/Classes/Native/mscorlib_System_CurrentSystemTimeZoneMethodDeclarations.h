#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1710;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1156;
// System.String[]
struct StringU5BU5D_t9;
// System.Globalization.DaylightTime
struct DaylightTime_t1313;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
 void CurrentSystemTimeZone__ctor_m9712 (CurrentSystemTimeZone_t1710 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
 void CurrentSystemTimeZone__ctor_m9713 (CurrentSystemTimeZone_t1710 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m9714 (CurrentSystemTimeZone_t1710 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
 bool CurrentSystemTimeZone_GetTimeZoneData_m9715 (Object_t * __this/* static, unused */, int32_t ___year, Int64U5BU5D_t1156** ___data, StringU5BU5D_t9** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
 DaylightTime_t1313 * CurrentSystemTimeZone_GetDaylightChanges_m9716 (CurrentSystemTimeZone_t1710 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
 TimeSpan_t846  CurrentSystemTimeZone_GetUtcOffset_m9717 (CurrentSystemTimeZone_t1710 * __this, DateTime_t458  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
 void CurrentSystemTimeZone_OnDeserialization_m9718 (CurrentSystemTimeZone_t1710 * __this, DaylightTime_t1313 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
 DaylightTime_t1313 * CurrentSystemTimeZone_GetDaylightTimeFromData_m9719 (CurrentSystemTimeZone_t1710 * __this, Int64U5BU5D_t1156* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
