#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t434;
struct GcAchievementData_t434_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t553;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
 Achievement_t553 * GcAchievementData_ToAchievement_m2814 (GcAchievementData_t434 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t434_marshal(const GcAchievementData_t434& unmarshaled, GcAchievementData_t434_marshaled& marshaled);
void GcAchievementData_t434_marshal_back(const GcAchievementData_t434_marshaled& marshaled, GcAchievementData_t434& unmarshaled);
void GcAchievementData_t434_marshal_cleanup(GcAchievementData_t434_marshaled& marshaled);
