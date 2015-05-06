#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.LayerMask
struct LayerMask_t102;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t9;
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"

// System.Int32 UnityEngine.LayerMask::get_value()
 int32_t LayerMask_get_value_m2049 (LayerMask_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LayerMask::set_value(System.Int32)
 void LayerMask_set_value_m2050 (LayerMask_t102 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.LayerMask::LayerToName(System.Int32)
 String_t* LayerMask_LayerToName_m2051 (Object_t * __this/* static, unused */, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
 int32_t LayerMask_NameToLayer_m2052 (Object_t * __this/* static, unused */, String_t* ___layerName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
 int32_t LayerMask_GetMask_m2053 (Object_t * __this/* static, unused */, StringU5BU5D_t9* ___layerNames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
 int32_t LayerMask_op_Implicit_m1454 (Object_t * __this/* static, unused */, LayerMask_t102  ___mask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
 LayerMask_t102  LayerMask_op_Implicit_m1455 (Object_t * __this/* static, unused */, int32_t ___intVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
