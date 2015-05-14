#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector3
struct Vector3_t87;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
 void Vector3__ctor_m1650 (Vector3_t87 * __this, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
 void Vector3__ctor_m1560 (Vector3_t87 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t87  Vector3_Lerp_m1836 (Object_t * __this/* static, unused */, Vector3_t87  ___from, Vector3_t87  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
 float Vector3_get_Item_m1839 (Vector3_t87 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
 void Vector3_set_Item_m1840 (Vector3_t87 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
 int32_t Vector3_GetHashCode_m2388 (Vector3_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
 bool Vector3_Equals_m2389 (Vector3_t87 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
 Vector3_t87  Vector3_Normalize_m2390 (Object_t * __this/* static, unused */, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
 Vector3_t87  Vector3_get_normalized_m1870 (Vector3_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
 String_t* Vector3_ToString_m2391 (Vector3_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
 String_t* Vector3_ToString_m2392 (Vector3_t87 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Dot_m1599 (Object_t * __this/* static, unused */, Vector3_t87  ___lhs, Vector3_t87  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Distance_m1451 (Object_t * __this/* static, unused */, Vector3_t87  ___a, Vector3_t87  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
 float Vector3_Magnitude_m2393 (Object_t * __this/* static, unused */, Vector3_t87  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
 float Vector3_SqrMagnitude_m2394 (Object_t * __this/* static, unused */, Vector3_t87  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
 float Vector3_get_sqrMagnitude_m1874 (Vector3_t87 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t87  Vector3_Min_m1849 (Object_t * __this/* static, unused */, Vector3_t87  ___lhs, Vector3_t87  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t87  Vector3_Max_m1850 (Object_t * __this/* static, unused */, Vector3_t87  ___lhs, Vector3_t87  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
 Vector3_t87  Vector3_get_zero_m1367 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
 Vector3_t87  Vector3_get_forward_m1597 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
 Vector3_t87  Vector3_get_back_m2395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
 Vector3_t87  Vector3_get_up_m1879 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
 Vector3_t87  Vector3_get_down_m1880 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
 Vector3_t87  Vector3_get_left_m1877 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
 Vector3_t87  Vector3_get_right_m1878 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t87  Vector3_op_Addition_m1789 (Object_t * __this/* static, unused */, Vector3_t87  ___a, Vector3_t87  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t87  Vector3_op_Subtraction_m1601 (Object_t * __this/* static, unused */, Vector3_t87  ___a, Vector3_t87  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
 Vector3_t87  Vector3_op_Multiply_m1912 (Object_t * __this/* static, unused */, Vector3_t87  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
 Vector3_t87  Vector3_op_Division_m2396 (Object_t * __this/* static, unused */, Vector3_t87  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Equality_m2397 (Object_t * __this/* static, unused */, Vector3_t87  ___lhs, Vector3_t87  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Inequality_m1771 (Object_t * __this/* static, unused */, Vector3_t87  ___lhs, Vector3_t87  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
