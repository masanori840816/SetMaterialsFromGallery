#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t528;
struct TrackedReference_t528_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
 bool TrackedReference_Equals_m2909 (TrackedReference_t528 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
 int32_t TrackedReference_GetHashCode_m2910 (TrackedReference_t528 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m2911 (Object_t * __this/* static, unused */, TrackedReference_t528 * ___x, TrackedReference_t528 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t528_marshal(const TrackedReference_t528& unmarshaled, TrackedReference_t528_marshaled& marshaled);
void TrackedReference_t528_marshal_back(const TrackedReference_t528_marshaled& marshaled, TrackedReference_t528& unmarshaled);
void TrackedReference_t528_marshal_cleanup(TrackedReference_t528_marshaled& marshaled);
