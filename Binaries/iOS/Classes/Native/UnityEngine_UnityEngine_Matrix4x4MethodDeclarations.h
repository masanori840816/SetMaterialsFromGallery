#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Matrix4x4
struct Matrix4x4_t367;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
 float Matrix4x4_get_Item_m2413 (Matrix4x4_t367 * __this, int32_t ___row, int32_t ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
 void Matrix4x4_set_Item_m2414 (Matrix4x4_t367 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
 float Matrix4x4_get_Item_m2415 (Matrix4x4_t367 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
 void Matrix4x4_set_Item_m2416 (Matrix4x4_t367 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
 int32_t Matrix4x4_GetHashCode_m2417 (Matrix4x4_t367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
 bool Matrix4x4_Equals_m2418 (Matrix4x4_t367 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
 Matrix4x4_t367  Matrix4x4_Inverse_m2419 (Object_t * __this/* static, unused */, Matrix4x4_t367  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
 Matrix4x4_t367  Matrix4x4_INTERNAL_CALL_Inverse_m2420 (Object_t * __this/* static, unused */, Matrix4x4_t367 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
 Matrix4x4_t367  Matrix4x4_Transpose_m2421 (Object_t * __this/* static, unused */, Matrix4x4_t367  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
 Matrix4x4_t367  Matrix4x4_INTERNAL_CALL_Transpose_m2422 (Object_t * __this/* static, unused */, Matrix4x4_t367 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
 bool Matrix4x4_Invert_m2423 (Object_t * __this/* static, unused */, Matrix4x4_t367  ___inMatrix, Matrix4x4_t367 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
 bool Matrix4x4_INTERNAL_CALL_Invert_m2424 (Object_t * __this/* static, unused */, Matrix4x4_t367 * ___inMatrix, Matrix4x4_t367 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
 Matrix4x4_t367  Matrix4x4_get_inverse_m2425 (Matrix4x4_t367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
 Matrix4x4_t367  Matrix4x4_get_transpose_m2426 (Matrix4x4_t367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
 bool Matrix4x4_get_isIdentity_m2427 (Matrix4x4_t367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
 Vector4_t160  Matrix4x4_GetColumn_m2428 (Matrix4x4_t367 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
 Vector4_t160  Matrix4x4_GetRow_m2429 (Matrix4x4_t367 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
 void Matrix4x4_SetColumn_m2430 (Matrix4x4_t367 * __this, int32_t ___i, Vector4_t160  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
 void Matrix4x4_SetRow_m2431 (Matrix4x4_t367 * __this, int32_t ___i, Vector4_t160  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
 Vector3_t87  Matrix4x4_MultiplyPoint_m2432 (Matrix4x4_t367 * __this, Vector3_t87  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
 Vector3_t87  Matrix4x4_MultiplyPoint3x4_m1848 (Matrix4x4_t367 * __this, Vector3_t87  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
 Vector3_t87  Matrix4x4_MultiplyVector_m2433 (Matrix4x4_t367 * __this, Vector3_t87  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
 Matrix4x4_t367  Matrix4x4_Scale_m2434 (Object_t * __this/* static, unused */, Vector3_t87  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
 Matrix4x4_t367  Matrix4x4_get_zero_m2435 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
 Matrix4x4_t367  Matrix4x4_get_identity_m2436 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
 void Matrix4x4_SetTRS_m2437 (Matrix4x4_t367 * __this, Vector3_t87  ___pos, Quaternion_t341  ___q, Vector3_t87  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
 Matrix4x4_t367  Matrix4x4_TRS_m2438 (Object_t * __this/* static, unused */, Vector3_t87  ___pos, Quaternion_t341  ___q, Vector3_t87  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
 Matrix4x4_t367  Matrix4x4_INTERNAL_CALL_TRS_m2439 (Object_t * __this/* static, unused */, Vector3_t87 * ___pos, Quaternion_t341 * ___q, Vector3_t87 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
 String_t* Matrix4x4_ToString_m2440 (Matrix4x4_t367 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString(System.String)
 String_t* Matrix4x4_ToString_m2441 (Matrix4x4_t367 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
 Matrix4x4_t367  Matrix4x4_Ortho_m2442 (Object_t * __this/* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
 Matrix4x4_t367  Matrix4x4_Perspective_m2443 (Object_t * __this/* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 Matrix4x4_t367  Matrix4x4_op_Multiply_m2444 (Object_t * __this/* static, unused */, Matrix4x4_t367  ___lhs, Matrix4x4_t367  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
 Vector4_t160  Matrix4x4_op_Multiply_m2445 (Object_t * __this/* static, unused */, Matrix4x4_t367  ___lhs, Vector4_t160  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 bool Matrix4x4_op_Equality_m2446 (Object_t * __this/* static, unused */, Matrix4x4_t367  ___lhs, Matrix4x4_t367  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 bool Matrix4x4_op_Inequality_m2447 (Object_t * __this/* static, unused */, Matrix4x4_t367  ___lhs, Matrix4x4_t367  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
