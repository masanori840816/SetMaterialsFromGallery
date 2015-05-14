#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Binder
struct Binder_t671;
// System.Reflection.MethodBase
struct MethodBase_t676;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1379;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t672;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.String[]
struct StringU5BU5D_t9;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t546;
// System.Reflection.PropertyInfo
struct PropertyInfo_t1164;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1380;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t677;
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.Binder::.ctor()
 void Binder__ctor_m7661 (Binder_t671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
 void Binder__cctor_m7662 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::BindToMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Object[]&,System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[],System.Object&)
// System.Object System.Reflection.Binder::ChangeType(System.Object,System.Type,System.Globalization.CultureInfo)
// System.Void System.Reflection.Binder::ReorderArgumentArray(System.Object[]&,System.Object)
// System.Reflection.MethodBase System.Reflection.Binder::SelectMethod(System.Reflection.BindingFlags,System.Reflection.MethodBase[],System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.PropertyInfo System.Reflection.Binder::SelectProperty(System.Reflection.BindingFlags,System.Reflection.PropertyInfo[],System.Type,System.Type[],System.Reflection.ParameterModifier[])
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
 Binder_t671 * Binder_get_DefaultBinder_m7663 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
 bool Binder_ConvertArgs_m7664 (Object_t * __this/* static, unused */, Binder_t671 * ___binder, ObjectU5BU5D_t295* ___args, ParameterInfoU5BU5D_t677* ___pinfo, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
 int32_t Binder_GetDerivedLevel_m7665 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
 MethodBase_t676 * Binder_FindMostDerivedMatch_m7666 (Object_t * __this/* static, unused */, MethodBaseU5BU5D_t1379* ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
