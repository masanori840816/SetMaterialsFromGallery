#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Bounds
struct Bounds_t201;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds__ctor_m1842 (Bounds_t201 * __this, Vector3_t87  ___center, Vector3_t87  ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
 int32_t Bounds_GetHashCode_m2448 (Bounds_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
 bool Bounds_Equals_m2449 (Bounds_t201 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
 Vector3_t87  Bounds_get_center_m1843 (Bounds_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
 void Bounds_set_center_m1845 (Bounds_t201 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
 Vector3_t87  Bounds_get_size_m1831 (Bounds_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
 void Bounds_set_size_m1844 (Bounds_t201 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
 Vector3_t87  Bounds_get_extents_m2450 (Bounds_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
 void Bounds_set_extents_m2451 (Bounds_t201 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
 Vector3_t87  Bounds_get_min_m1832 (Bounds_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_min(UnityEngine.Vector3)
 void Bounds_set_min_m2452 (Bounds_t201 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
 Vector3_t87  Bounds_get_max_m1852 (Bounds_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_max(UnityEngine.Vector3)
 void Bounds_set_max_m2453 (Bounds_t201 * __this, Vector3_t87  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
 void Bounds_SetMinMax_m2454 (Bounds_t201 * __this, Vector3_t87  ___min, Vector3_t87  ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
 void Bounds_Encapsulate_m1851 (Bounds_t201 * __this, Vector3_t87  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
 void Bounds_Encapsulate_m2455 (Bounds_t201 * __this, Bounds_t201  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(System.Single)
 void Bounds_Expand_m2456 (Bounds_t201 * __this, float ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Expand(UnityEngine.Vector3)
 void Bounds_Expand_m2457 (Bounds_t201 * __this, Vector3_t87  ___amount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Intersects(UnityEngine.Bounds)
 bool Bounds_Intersects_m2458 (Bounds_t201 * __this, Bounds_t201  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_Contains(UnityEngine.Bounds,UnityEngine.Vector3)
 bool Bounds_Internal_Contains_m2459 (Object_t * __this/* static, unused */, Bounds_t201  ___m, Vector3_t87  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_Contains(UnityEngine.Bounds&,UnityEngine.Vector3&)
 bool Bounds_INTERNAL_CALL_Internal_Contains_m2460 (Object_t * __this/* static, unused */, Bounds_t201 * ___m, Vector3_t87 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Contains(UnityEngine.Vector3)
 bool Bounds_Contains_m2461 (Bounds_t201 * __this, Vector3_t87  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::Internal_SqrDistance(UnityEngine.Bounds,UnityEngine.Vector3)
 float Bounds_Internal_SqrDistance_m2462 (Object_t * __this/* static, unused */, Bounds_t201  ___m, Vector3_t87  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::INTERNAL_CALL_Internal_SqrDistance(UnityEngine.Bounds&,UnityEngine.Vector3&)
 float Bounds_INTERNAL_CALL_Internal_SqrDistance_m2463 (Object_t * __this/* static, unused */, Bounds_t201 * ___m, Vector3_t87 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Bounds::SqrDistance(UnityEngine.Vector3)
 float Bounds_SqrDistance_m2464 (Bounds_t201 * __this, Vector3_t87  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_Internal_IntersectRay_m2465 (Object_t * __this/* static, unused */, Ray_t311 * ___ray, Bounds_t201 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::INTERNAL_CALL_Internal_IntersectRay(UnityEngine.Ray&,UnityEngine.Bounds&,System.Single&)
 bool Bounds_INTERNAL_CALL_Internal_IntersectRay_m2466 (Object_t * __this/* static, unused */, Ray_t311 * ___ray, Bounds_t201 * ___bounds, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray)
 bool Bounds_IntersectRay_m2467 (Bounds_t201 * __this, Ray_t311  ___ray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::IntersectRay(UnityEngine.Ray,System.Single&)
 bool Bounds_IntersectRay_m2468 (Bounds_t201 * __this, Ray_t311  ___ray, float* ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t87  Bounds_Internal_GetClosestPoint_m2469 (Object_t * __this/* static, unused */, Bounds_t201 * ___bounds, Vector3_t87 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::INTERNAL_CALL_Internal_GetClosestPoint(UnityEngine.Bounds&,UnityEngine.Vector3&)
 Vector3_t87  Bounds_INTERNAL_CALL_Internal_GetClosestPoint_m2470 (Object_t * __this/* static, unused */, Bounds_t201 * ___bounds, Vector3_t87 * ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::ClosestPoint(UnityEngine.Vector3)
 Vector3_t87  Bounds_ClosestPoint_m2471 (Bounds_t201 * __this, Vector3_t87  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
 String_t* Bounds_ToString_m2472 (Bounds_t201 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString(System.String)
 String_t* Bounds_ToString_m2473 (Bounds_t201 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Equality_m2474 (Object_t * __this/* static, unused */, Bounds_t201  ___lhs, Bounds_t201  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
 bool Bounds_op_Inequality_m1837 (Object_t * __this/* static, unused */, Bounds_t201  ___lhs, Bounds_t201  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
