#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t526;
struct AnimationCurve_t526_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t527;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
 void AnimationCurve__ctor_m2705 (AnimationCurve_t526 * __this, KeyframeU5BU5D_t527* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
 void AnimationCurve__ctor_m2706 (AnimationCurve_t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
 void AnimationCurve_Cleanup_m2707 (AnimationCurve_t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
 void AnimationCurve_Finalize_m2708 (AnimationCurve_t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
 void AnimationCurve_Init_m2709 (AnimationCurve_t526 * __this, KeyframeU5BU5D_t527* ___keys, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t526_marshal(const AnimationCurve_t526& unmarshaled, AnimationCurve_t526_marshaled& marshaled);
void AnimationCurve_t526_marshal_back(const AnimationCurve_t526_marshaled& marshaled, AnimationCurve_t526& unmarshaled);
void AnimationCurve_t526_marshal_cleanup(AnimationCurve_t526_marshaled& marshaled);
