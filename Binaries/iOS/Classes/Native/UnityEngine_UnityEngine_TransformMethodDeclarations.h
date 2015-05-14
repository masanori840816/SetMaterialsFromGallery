#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Transform
struct Transform_t125;
// System.Collections.IEnumerator
struct IEnumerator_t112;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_position_m2631 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
 Vector3_t87  Transform_get_position_m1449 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localPosition_m2632 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localPosition_m2633 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
 Vector3_t87  Transform_get_localPosition_m1770 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
 void Transform_set_localPosition_m1779 (Transform_t125 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
 Vector3_t87  Transform_get_forward_m1600 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_rotation_m2634 (Transform_t125 * __this, Quaternion_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
 Quaternion_t341  Transform_get_rotation_m1596 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_localRotation_m2635 (Transform_t125 * __this, Quaternion_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_localRotation_m2636 (Transform_t125 * __this, Quaternion_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
 Quaternion_t341  Transform_get_localRotation_m1772 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
 void Transform_set_localRotation_m1780 (Transform_t125 * __this, Quaternion_t341  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localScale_m2637 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localScale_m2638 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
 Vector3_t87  Transform_get_localScale_m1774 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
 void Transform_set_localScale_m1781 (Transform_t125 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
 Transform_t125 * Transform_get_parent_m1336 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
 void Transform_set_parent_m1805 (Transform_t125 * __this, Transform_t125 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
 Transform_t125 * Transform_get_parentInternal_m2639 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
 void Transform_set_parentInternal_m2640 (Transform_t125 * __this, Transform_t125 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
 void Transform_SetParent_m1761 (Transform_t125 * __this, Transform_t125 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
 void Transform_SetParent_m2641 (Transform_t125 * __this, Transform_t125 * ___parent, bool ___worldPositionStays, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_worldToLocalMatrix_m2642 (Transform_t125 * __this, Matrix4x4_t367 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
 Matrix4x4_t367  Transform_get_worldToLocalMatrix_m1846 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
 Vector3_t87  Transform_TransformPoint_m1872 (Transform_t125 * __this, Vector3_t87  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t87  Transform_INTERNAL_CALL_TransformPoint_m2643 (Object_t * __this/* static, unused */, Transform_t125 * ___self, Vector3_t87 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
 Vector3_t87  Transform_InverseTransformPoint_m1725 (Transform_t125 * __this, Vector3_t87  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t87  Transform_INTERNAL_CALL_InverseTransformPoint_m2644 (Object_t * __this/* static, unused */, Transform_t125 * ___self, Vector3_t87 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
 int32_t Transform_get_childCount_m1980 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
 void Transform_SetAsFirstSibling_m1762 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
 Object_t * Transform_GetEnumerator_m2645 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
 Transform_t125 * Transform_GetChild_m1978 (Transform_t125 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
