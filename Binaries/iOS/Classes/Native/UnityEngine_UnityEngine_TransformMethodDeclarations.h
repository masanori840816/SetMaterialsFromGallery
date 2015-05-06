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
 void Transform_INTERNAL_get_position_m2626 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
 Vector3_t87  Transform_get_position_m1446 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localPosition_m2627 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localPosition_m2628 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
 Vector3_t87  Transform_get_localPosition_m1766 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
 void Transform_set_localPosition_m1775 (Transform_t125 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
 Vector3_t87  Transform_get_forward_m1597 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_rotation_m2629 (Transform_t125 * __this, Quaternion_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
 Quaternion_t341  Transform_get_rotation_m1593 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_get_localRotation_m2630 (Transform_t125 * __this, Quaternion_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
 void Transform_INTERNAL_set_localRotation_m2631 (Transform_t125 * __this, Quaternion_t341 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
 Quaternion_t341  Transform_get_localRotation_m1768 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
 void Transform_set_localRotation_m1776 (Transform_t125 * __this, Quaternion_t341  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_get_localScale_m2632 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
 void Transform_INTERNAL_set_localScale_m2633 (Transform_t125 * __this, Vector3_t87 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
 Vector3_t87  Transform_get_localScale_m1770 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
 void Transform_set_localScale_m1777 (Transform_t125 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
 Transform_t125 * Transform_get_parent_m1333 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
 void Transform_set_parent_m1801 (Transform_t125 * __this, Transform_t125 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
 Transform_t125 * Transform_get_parentInternal_m2634 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
 void Transform_set_parentInternal_m2635 (Transform_t125 * __this, Transform_t125 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
 void Transform_SetParent_m1757 (Transform_t125 * __this, Transform_t125 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
 void Transform_SetParent_m2636 (Transform_t125 * __this, Transform_t125 * ___parent, bool ___worldPositionStays, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
 void Transform_INTERNAL_get_worldToLocalMatrix_m2637 (Transform_t125 * __this, Matrix4x4_t367 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
 Matrix4x4_t367  Transform_get_worldToLocalMatrix_m1842 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
 Vector3_t87  Transform_TransformPoint_m1868 (Transform_t125 * __this, Vector3_t87  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t87  Transform_INTERNAL_CALL_TransformPoint_m2638 (Object_t * __this/* static, unused */, Transform_t125 * ___self, Vector3_t87 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
 Vector3_t87  Transform_InverseTransformPoint_m1722 (Transform_t125 * __this, Vector3_t87  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&)
 Vector3_t87  Transform_INTERNAL_CALL_InverseTransformPoint_m2639 (Object_t * __this/* static, unused */, Transform_t125 * ___self, Vector3_t87 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
 int32_t Transform_get_childCount_m1976 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
 void Transform_SetAsFirstSibling_m1758 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
 Object_t * Transform_GetEnumerator_m2640 (Transform_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
 Transform_t125 * Transform_GetChild_m1974 (Transform_t125 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
