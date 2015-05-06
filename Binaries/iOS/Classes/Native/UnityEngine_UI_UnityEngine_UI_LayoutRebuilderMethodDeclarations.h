#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t246;
// UnityEngine.Transform
struct Transform_t125;
// UnityEngine.RectTransform
struct RectTransform_t133;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t247;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t244;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t248;
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.LayoutRebuilder
#include "UnityEngine_UI_UnityEngine_UI_LayoutRebuilder.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor(UnityEngine.RectTransform)
 void LayoutRebuilder__ctor_m1132 (LayoutRebuilder_t246 * __this, RectTransform_t133 * ___controller, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
 void LayoutRebuilder__cctor_m1133 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::UnityEngine.UI.ICanvasElement.Rebuild(UnityEngine.UI.CanvasUpdate)
 void LayoutRebuilder_UnityEngine_UI_ICanvasElement_Rebuild_m1134 (LayoutRebuilder_t246 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
 void LayoutRebuilder_ReapplyDrivenProperties_m1135 (Object_t * __this/* static, unused */, RectTransform_t133 * ___driven, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
 Transform_t125 * LayoutRebuilder_get_transform_m1136 (LayoutRebuilder_t246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
 bool LayoutRebuilder_IsDestroyed_m1137 (LayoutRebuilder_t246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
 void LayoutRebuilder_StripDisabledBehavioursFromList_m1138 (Object_t * __this/* static, unused */, List_1_t247 * ___components, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
 void LayoutRebuilder_PerformLayoutControl_m1139 (LayoutRebuilder_t246 * __this, RectTransform_t133 * ___rect, UnityAction_1_t244 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
 void LayoutRebuilder_PerformLayoutCalculation_m1140 (LayoutRebuilder_t246 * __this, RectTransform_t133 * ___rect, UnityAction_1_t244 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
 void LayoutRebuilder_MarkLayoutForRebuild_m1141 (Object_t * __this/* static, unused */, RectTransform_t133 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform)
 bool LayoutRebuilder_ValidLayoutGroup_m1142 (Object_t * __this/* static, unused */, RectTransform_t133 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform)
 bool LayoutRebuilder_ValidController_m1143 (Object_t * __this/* static, unused */, RectTransform_t133 * ___layoutRoot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
 void LayoutRebuilder_MarkLayoutRootForRebuild_m1144 (Object_t * __this/* static, unused */, RectTransform_t133 * ___controller, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(UnityEngine.UI.LayoutRebuilder)
 bool LayoutRebuilder_Equals_m1145 (LayoutRebuilder_t246 * __this, LayoutRebuilder_t246  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
 int32_t LayoutRebuilder_GetHashCode_m1146 (LayoutRebuilder_t246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
 String_t* LayoutRebuilder_ToString_m1147 (LayoutRebuilder_t246 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__9_m1148 (Object_t * __this/* static, unused */, Component_t248 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__A_m1149 (Object_t * __this/* static, unused */, Component_t248 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__B_m1150 (Object_t * __this/* static, unused */, Component_t248 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__C(UnityEngine.Component)
 void LayoutRebuilder_U3CRebuildU3Em__C_m1151 (Object_t * __this/* static, unused */, Component_t248 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__D(UnityEngine.Component)
 bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__D_m1152 (Object_t * __this/* static, unused */, Component_t248 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
