#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t1313;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
 void DaylightTime__ctor_m7060 (DaylightTime_t1313 * __this, DateTime_t458  ___start, DateTime_t458  ___end, TimeSpan_t846  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
 DateTime_t458  DaylightTime_get_Start_m7061 (DaylightTime_t1313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
 DateTime_t458  DaylightTime_get_End_m7062 (DaylightTime_t1313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
 TimeSpan_t846  DaylightTime_get_Delta_m7063 (DaylightTime_t1313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
