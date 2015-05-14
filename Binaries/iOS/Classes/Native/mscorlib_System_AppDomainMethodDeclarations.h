#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AppDomain
struct AppDomain_t1639;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t960;
// System.Security.Policy.Evidence
struct Evidence_t1374;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1449;

// System.String System.AppDomain::getFriendlyName()
 String_t* AppDomain_getFriendlyName_m8988 (AppDomain_t1639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
 AppDomain_t1639 * AppDomain_getCurDomain_m8989 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
 AppDomain_t1639 * AppDomain_get_CurrentDomain_m8990 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t960 * AppDomain_LoadAssembly_m8991 (AppDomain_t1639 * __this, String_t* ___assemblyRef, Evidence_t1374 * ___securityEvidence, bool ___refOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
 Assembly_t960 * AppDomain_Load_m8992 (AppDomain_t1639 * __this, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
 Assembly_t960 * AppDomain_Load_m8993 (AppDomain_t1639 * __this, String_t* ___assemblyString, Evidence_t1374 * ___assemblySecurity, bool ___refonly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
 Context_t1449 * AppDomain_InternalGetContext_m8994 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
 Context_t1449 * AppDomain_InternalGetDefaultContext_m8995 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
 String_t* AppDomain_InternalGetProcessGuid_m8996 (Object_t * __this/* static, unused */, String_t* ___newguid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
 String_t* AppDomain_GetProcessGuid_m8997 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
 String_t* AppDomain_ToString_m8998 (AppDomain_t1639 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
