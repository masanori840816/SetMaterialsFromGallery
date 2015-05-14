#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t532;
struct HumanBone_t532_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
 String_t* HumanBone_get_boneName_m2736 (HumanBone_t532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
 void HumanBone_set_boneName_m2737 (HumanBone_t532 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
 String_t* HumanBone_get_humanName_m2738 (HumanBone_t532 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
 void HumanBone_set_humanName_m2739 (HumanBone_t532 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t532_marshal(const HumanBone_t532& unmarshaled, HumanBone_t532_marshaled& marshaled);
void HumanBone_t532_marshal_back(const HumanBone_t532_marshaled& marshaled, HumanBone_t532& unmarshaled);
void HumanBone_t532_marshal_cleanup(HumanBone_t532_marshaled& marshaled);
