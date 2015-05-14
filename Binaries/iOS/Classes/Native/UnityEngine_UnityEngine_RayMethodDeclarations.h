#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Ray
struct Ray_t311;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Ray__ctor_m2482 (Ray_t311 * __this, Vector3_t87  ___origin, Vector3_t87  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
 Vector3_t87  Ray_get_origin_m1441 (Ray_t311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
 Vector3_t87  Ray_get_direction_m1442 (Ray_t311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
 Vector3_t87  Ray_GetPoint_m1728 (Ray_t311 * __this, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
 String_t* Ray_ToString_m2483 (Ray_t311 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
