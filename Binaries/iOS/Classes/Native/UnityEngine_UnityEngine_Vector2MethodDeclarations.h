#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector2
struct Vector2_t84;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
 void Vector2__ctor_m1373 (Vector2_t84 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
 float Vector2_get_Item_m1652 (Vector2_t84 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
 void Vector2_set_Item_m1667 (Vector2_t84 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t84  Vector2_Scale_m1785 (Object_t * __this/* static, unused */, Vector2_t84  ___a, Vector2_t84  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
 String_t* Vector2_ToString_m2384 (Vector2_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
 int32_t Vector2_GetHashCode_m2385 (Vector2_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
 bool Vector2_Equals_m2386 (Vector2_t84 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
 float Vector2_get_sqrMagnitude_m1368 (Vector2_t84 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
 float Vector2_SqrMagnitude_m2387 (Object_t * __this/* static, unused */, Vector2_t84  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
 Vector2_t84  Vector2_get_zero_m1366 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
 Vector2_t84  Vector2_get_one_m1646 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
 Vector2_t84  Vector2_get_up_m1952 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t84  Vector2_op_Addition_m1649 (Object_t * __this/* static, unused */, Vector2_t84  ___a, Vector2_t84  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
 Vector2_t84  Vector2_op_Subtraction_m1389 (Object_t * __this/* static, unused */, Vector2_t84  ___a, Vector2_t84  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
 Vector2_t84  Vector2_op_Multiply_m1647 (Object_t * __this/* static, unused */, Vector2_t84  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
 Vector2_t84  Vector2_op_Division_m1735 (Object_t * __this/* static, unused */, Vector2_t84  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
 bool Vector2_op_Equality_m2033 (Object_t * __this/* static, unused */, Vector2_t84  ___lhs, Vector2_t84  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
 bool Vector2_op_Inequality_m1775 (Object_t * __this/* static, unused */, Vector2_t84  ___lhs, Vector2_t84  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
 Vector2_t84  Vector2_op_Implicit_m1393 (Object_t * __this/* static, unused */, Vector3_t87  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
 Vector3_t87  Vector2_op_Implicit_m1437 (Object_t * __this/* static, unused */, Vector2_t84  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
