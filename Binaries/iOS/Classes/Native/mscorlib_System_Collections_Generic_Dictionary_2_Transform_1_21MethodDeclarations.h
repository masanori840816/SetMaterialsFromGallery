#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>
struct Transform_1_t2919;
// System.Object
struct Object_t;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t463;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m15870 (Transform_1_t2919 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::Invoke(TKey,TValue)
 LayoutCache_t463 * Transform_1_Invoke_m15871 (Transform_1_t2919 * __this, int32_t ___key, LayoutCache_t463 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m15872 (Transform_1_t2919 * __this, int32_t ___key, LayoutCache_t463 * ___value, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache,UnityEngine.GUILayoutUtility/LayoutCache>::EndInvoke(System.IAsyncResult)
 LayoutCache_t463 * Transform_1_EndInvoke_m15873 (Transform_1_t2919 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
