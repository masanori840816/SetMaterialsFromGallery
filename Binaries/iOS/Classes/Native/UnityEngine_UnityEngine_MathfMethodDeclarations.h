﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mathf
struct Mathf_t297;

// System.Void UnityEngine.Mathf::.cctor()
 void Mathf__cctor_m2487 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sin(System.Single)
 float Mathf_Sin_m1656 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Cos(System.Single)
 float Mathf_Cos_m1655 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sqrt(System.Single)
 float Mathf_Sqrt_m1948 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Abs(System.Single)
 float Mathf_Abs_m1374 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
 float Mathf_Min_m1936 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
 int32_t Mathf_Min_m1746 (Object_t * __this/* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
 float Mathf_Max_m1876 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
 int32_t Mathf_Max_m1744 (Object_t * __this/* static, unused */, int32_t ___a, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Pow(System.Single,System.Single)
 float Mathf_Pow_m1835 (Object_t * __this/* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
 float Mathf_Log_m1935 (Object_t * __this/* static, unused */, float ___f, float ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Floor(System.Single)
 float Mathf_Floor_m1786 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Round(System.Single)
 float Mathf_Round_m1817 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
 int32_t Mathf_CeilToInt_m1947 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
 int32_t Mathf_FloorToInt_m1909 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
 int32_t Mathf_RoundToInt_m1634 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Sign(System.Single)
 float Mathf_Sign_m1841 (Object_t * __this/* static, unused */, float ___f, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
 float Mathf_Clamp_m1631 (Object_t * __this/* static, unused */, float ___value, float ___min, float ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
 int32_t Mathf_Clamp_m1516 (Object_t * __this/* static, unused */, int32_t ___value, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
 float Mathf_Clamp01_m1620 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
 float Mathf_Lerp_m1654 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
 bool Mathf_Approximately_m1416 (Object_t * __this/* static, unused */, float ___a, float ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
 float Mathf_SmoothDamp_m1834 (Object_t * __this/* static, unused */, float ___current, float ___target, float* ___currentVelocity, float ___smoothTime, float ___maxSpeed, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
 float Mathf_Repeat_m1669 (Object_t * __this/* static, unused */, float ___t, float ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
 float Mathf_InverseLerp_m1668 (Object_t * __this/* static, unused */, float ___from, float ___to, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
