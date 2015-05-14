#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t103;
// UnityEngine.Collider
struct Collider_t316;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
 Vector3_t87  RaycastHit_get_point_m1462 (RaycastHit_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
 Vector3_t87  RaycastHit_get_normal_m1463 (RaycastHit_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
 float RaycastHit_get_distance_m1465 (RaycastHit_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
 Collider_t316 * RaycastHit_get_collider_m1464 (RaycastHit_t103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
