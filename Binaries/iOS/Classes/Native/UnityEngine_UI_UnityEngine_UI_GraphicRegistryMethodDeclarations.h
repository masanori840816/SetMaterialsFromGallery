#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t146;
// UnityEngine.Canvas
struct Canvas_t135;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t148;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
 void GraphicRegistry__ctor_m469 (GraphicRegistry_t146 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
 void GraphicRegistry__cctor_m470 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
 GraphicRegistry_t146 * GraphicRegistry_get_instance_m471 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_RegisterGraphicForCanvas_m472 (Object_t * __this/* static, unused */, Canvas_t135 * ___c, Graphic_t139 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_UnregisterGraphicForCanvas_m473 (Object_t * __this/* static, unused */, Canvas_t135 * ___c, Graphic_t139 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
 Object_t* GraphicRegistry_GetGraphicsForCanvas_m474 (Object_t * __this/* static, unused */, Canvas_t135 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
