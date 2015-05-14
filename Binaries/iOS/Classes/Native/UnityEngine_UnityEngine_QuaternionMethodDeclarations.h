#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t341;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Dot_m2404 (Object_t * __this/* static, unused */, Quaternion_t341  ___a, Quaternion_t341  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
 Quaternion_t341  Quaternion_Inverse_m1871 (Object_t * __this/* static, unused */, Quaternion_t341  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
 Quaternion_t341  Quaternion_INTERNAL_CALL_Inverse_m2405 (Object_t * __this/* static, unused */, Quaternion_t341 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
 String_t* Quaternion_ToString_m2406 (Quaternion_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
 int32_t Quaternion_GetHashCode_m2407 (Quaternion_t341 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
 bool Quaternion_Equals_m2408 (Quaternion_t341 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
 Vector3_t87  Quaternion_op_Multiply_m1598 (Object_t * __this/* static, unused */, Quaternion_t341  ___rotation, Vector3_t87  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
 bool Quaternion_op_Inequality_m1773 (Object_t * __this/* static, unused */, Quaternion_t341  ___lhs, Quaternion_t341  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
