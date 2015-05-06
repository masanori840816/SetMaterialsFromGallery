#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoEnumInfo
struct MonoEnumInfo_t1672;
// System.Collections.Hashtable
struct Hashtable_t759;
// System.Type
struct Type_t;
// System.MonoEnumInfo
#include "mscorlib_System_MonoEnumInfo.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
 void MonoEnumInfo__ctor_m9378 (MonoEnumInfo_t1672 * __this, MonoEnumInfo_t1672  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
 void MonoEnumInfo__cctor_m9379 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
 void MonoEnumInfo_get_enum_info_m9380 (Object_t * __this/* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1672 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
 Hashtable_t759 * MonoEnumInfo_get_Cache_m9381 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
 void MonoEnumInfo_GetInfo_m9382 (Object_t * __this/* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1672 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
