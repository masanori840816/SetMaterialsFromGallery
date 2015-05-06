#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t95;
struct Touch_t95_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m1383 (Touch_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t84  Touch_get_position_m1385 (Touch_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m1384 (Touch_t95 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t95_marshal(const Touch_t95& unmarshaled, Touch_t95_marshaled& marshaled);
void Touch_t95_marshal_back(const Touch_t95_marshaled& marshaled, Touch_t95& unmarshaled);
void Touch_t95_marshal_cleanup(Touch_t95_marshaled& marshaled);
