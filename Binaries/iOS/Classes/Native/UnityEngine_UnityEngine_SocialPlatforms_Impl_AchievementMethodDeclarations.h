#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t553;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
 void Achievement__ctor_m2831 (Achievement_t553 * __this, String_t* ___id, double ___percentCompleted, bool ___completed, bool ___hidden, DateTime_t458  ___lastReportedDate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
 void Achievement__ctor_m2832 (Achievement_t553 * __this, String_t* ___id, double ___percent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
 void Achievement__ctor_m2833 (Achievement_t553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
 String_t* Achievement_ToString_m2834 (Achievement_t553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
 String_t* Achievement_get_id_m2835 (Achievement_t553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
 void Achievement_set_id_m2836 (Achievement_t553 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
 double Achievement_get_percentCompleted_m2837 (Achievement_t553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
 void Achievement_set_percentCompleted_m2838 (Achievement_t553 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
 bool Achievement_get_completed_m2839 (Achievement_t553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
 bool Achievement_get_hidden_m2840 (Achievement_t553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
 DateTime_t458  Achievement_get_lastReportedDate_m2841 (Achievement_t553 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
