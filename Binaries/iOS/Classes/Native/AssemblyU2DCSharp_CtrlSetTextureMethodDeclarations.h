#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// CtrlSetTexture
struct CtrlSetTexture_t7;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t12;

// System.Void CtrlSetTexture::.ctor()
 void CtrlSetTexture__ctor_m24 (CtrlSetTexture_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CtrlSetTexture::Start()
 void CtrlSetTexture_Start_m25 (CtrlSetTexture_t7 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CtrlSetTexture::SetNewTexture(System.String,System.Int32,System.Int32)
 void CtrlSetTexture_SetNewTexture_m26 (CtrlSetTexture_t7 * __this, String_t* ___strPath, int32_t ___intWidth, int32_t ___intHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D CtrlSetTexture::ReadTexture(System.String,System.Int32,System.Int32)
 Texture2D_t12 * CtrlSetTexture_ReadTexture_m27 (CtrlSetTexture_t7 * __this, String_t* ___strPath, int32_t ___intWidth, int32_t ___intHeight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CtrlSetTexture::OnCallbackIos(System.String)
 void CtrlSetTexture_OnCallbackIos_m28 (CtrlSetTexture_t7 * __this, String_t* ___strGotData, MethodInfo* method) IL2CPP_METHOD_ATTR;
