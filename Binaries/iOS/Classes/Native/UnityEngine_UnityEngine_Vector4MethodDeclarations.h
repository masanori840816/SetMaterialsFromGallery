﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector4
struct Vector4_t160;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Vector4__ctor_m1558 (Vector4_t160 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
 float Vector4_get_Item_m1651 (Vector4_t160 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
 void Vector4_set_Item_m1653 (Vector4_t160 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
 int32_t Vector4_GetHashCode_m2475 (Vector4_t160 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
 bool Vector4_Equals_m2476 (Vector4_t160 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
 String_t* Vector4_ToString_m2477 (Vector4_t160 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
 float Vector4_Dot_m2478 (Object_t * __this/* static, unused */, Vector4_t160  ___a, Vector4_t160  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
 float Vector4_SqrMagnitude_m2479 (Object_t * __this/* static, unused */, Vector4_t160  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
 float Vector4_get_sqrMagnitude_m1625 (Vector4_t160 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
 Vector4_t160  Vector4_get_zero_m1632 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
 Vector4_t160  Vector4_op_Subtraction_m2480 (Object_t * __this/* static, unused */, Vector4_t160  ___a, Vector4_t160  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
 Vector4_t160  Vector4_op_Division_m1645 (Object_t * __this/* static, unused */, Vector4_t160  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
 bool Vector4_op_Equality_m2481 (Object_t * __this/* static, unused */, Vector4_t160  ___lhs, Vector4_t160  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
