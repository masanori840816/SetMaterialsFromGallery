#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Event
struct Event_t182;
struct Event_t182_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
 void Event__ctor_m1716 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
 void Event_Init_m2369 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
 void Event_Finalize_m2370 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
 void Event_Cleanup_m2371 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
 int32_t Event_get_rawType_m1740 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
 int32_t Event_get_type_m2372 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
 Vector2_t84  Event_get_mousePosition_m2373 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
 void Event_Internal_GetMousePosition_m2374 (Event_t182 * __this, Vector2_t84 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
 int32_t Event_get_modifiers_m1736 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
 uint16_t Event_get_character_m1738 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
 String_t* Event_get_commandName_m2375 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
 int32_t Event_get_keyCode_m1737 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
 Event_t182 * Event_get_current_m2376 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
 void Event_Internal_SetNativeEvent_m2377 (Object_t * __this/* static, unused */, IntPtr_t173 ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
 void Event_Internal_MakeMasterEventCurrent_m2378 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
 bool Event_PopEvent_m1741 (Object_t * __this/* static, unused */, Event_t182 * ___outEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
 bool Event_get_isKey_m2379 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
 bool Event_get_isMouse_m2380 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
 int32_t Event_GetHashCode_m2381 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
 bool Event_Equals_m2382 (Event_t182 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
 String_t* Event_ToString_m2383 (Event_t182 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Event_t182_marshal(const Event_t182& unmarshaled, Event_t182_marshaled& marshaled);
void Event_t182_marshal_back(const Event_t182_marshaled& marshaled, Event_t182& unmarshaled);
void Event_t182_marshal_cleanup(Event_t182_marshaled& marshaled);
