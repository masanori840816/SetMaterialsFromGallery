#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.RaycasterManager
struct RaycasterManager_t82;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t83;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t81;

// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
 void RaycasterManager__cctor_m126 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
 void RaycasterManager_AddRaycaster_m127 (Object_t * __this/* static, unused */, BaseRaycaster_t83 * ___baseRaycaster, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
 List_1_t81 * RaycasterManager_GetRaycasters_m128 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
 void RaycasterManager_RemoveRaycasters_m129 (Object_t * __this/* static, unused */, BaseRaycaster_t83 * ___baseRaycaster, MethodInfo* method) IL2CPP_METHOD_ATTR;
