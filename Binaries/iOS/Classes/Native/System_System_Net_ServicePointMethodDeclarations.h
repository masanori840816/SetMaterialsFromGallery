#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePoint
struct ServicePoint_t783;
// System.Uri
struct Uri_t786;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.ServicePoint::.ctor(System.Uri,System.Int32,System.Int32)
 void ServicePoint__ctor_m3376 (ServicePoint_t783 * __this, Uri_t786 * ___uri, int32_t ___connectionLimit, int32_t ___maxIdleTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.ServicePoint::get_Address()
 Uri_t786 * ServicePoint_get_Address_m3377 (ServicePoint_t783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePoint::get_CurrentConnections()
 int32_t ServicePoint_get_CurrentConnections_m3378 (ServicePoint_t783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.ServicePoint::get_IdleSince()
 DateTime_t458  ServicePoint_get_IdleSince_m3379 (ServicePoint_t783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_IdleSince(System.DateTime)
 void ServicePoint_set_IdleSince_m3380 (ServicePoint_t783 * __this, DateTime_t458  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_Expect100Continue(System.Boolean)
 void ServicePoint_set_Expect100Continue_m3381 (ServicePoint_t783 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseNagleAlgorithm(System.Boolean)
 void ServicePoint_set_UseNagleAlgorithm_m3382 (ServicePoint_t783 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_SendContinue(System.Boolean)
 void ServicePoint_set_SendContinue_m3383 (ServicePoint_t783 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UsesProxy(System.Boolean)
 void ServicePoint_set_UsesProxy_m3384 (ServicePoint_t783 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePoint::set_UseConnect(System.Boolean)
 void ServicePoint_set_UseConnect_m3385 (ServicePoint_t783 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePoint::get_AvailableForRecycling()
 bool ServicePoint_get_AvailableForRecycling_m3386 (ServicePoint_t783 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
