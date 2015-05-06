#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Plane
struct Plane_t361;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Plane__ctor_m1723 (Plane_t361 * __this, Vector3_t87  ___inNormal, Vector3_t87  ___inPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
 Vector3_t87  Plane_get_normal_m2480 (Plane_t361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
 float Plane_get_distance_m2481 (Plane_t361 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
 bool Plane_Raycast_m1724 (Plane_t361 * __this, Ray_t311  ___ray, float* ___enter, MethodInfo* method) IL2CPP_METHOD_ATTR;
