#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t436;
struct GcScoreData_t436_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t554;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
 Score_t554 * GcScoreData_ToScore_m2815 (GcScoreData_t436 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t436_marshal(const GcScoreData_t436& unmarshaled, GcScoreData_t436_marshaled& marshaled);
void GcScoreData_t436_marshal_back(const GcScoreData_t436_marshaled& marshaled, GcScoreData_t436& unmarshaled);
void GcScoreData_t436_marshal_cleanup(GcScoreData_t436_marshaled& marshaled);
