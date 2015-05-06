#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t529;
struct AnimatorTransitionInfo_t529_marshaled;
// System.String
struct String_t;

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
 bool AnimatorTransitionInfo_IsName_m2719 (AnimatorTransitionInfo_t529 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
 bool AnimatorTransitionInfo_IsUserName_m2720 (AnimatorTransitionInfo_t529 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
 int32_t AnimatorTransitionInfo_get_fullPathHash_m2721 (AnimatorTransitionInfo_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
 int32_t AnimatorTransitionInfo_get_nameHash_m2722 (AnimatorTransitionInfo_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
 int32_t AnimatorTransitionInfo_get_userNameHash_m2723 (AnimatorTransitionInfo_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
 float AnimatorTransitionInfo_get_normalizedTime_m2724 (AnimatorTransitionInfo_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
 bool AnimatorTransitionInfo_get_anyState_m2725 (AnimatorTransitionInfo_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
 bool AnimatorTransitionInfo_get_entry_m2726 (AnimatorTransitionInfo_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
 bool AnimatorTransitionInfo_get_exit_m2727 (AnimatorTransitionInfo_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimatorTransitionInfo_t529_marshal(const AnimatorTransitionInfo_t529& unmarshaled, AnimatorTransitionInfo_t529_marshaled& marshaled);
void AnimatorTransitionInfo_t529_marshal_back(const AnimatorTransitionInfo_t529_marshaled& marshaled, AnimatorTransitionInfo_t529& unmarshaled);
void AnimatorTransitionInfo_t529_marshal_cleanup(AnimatorTransitionInfo_t529_marshaled& marshaled);
