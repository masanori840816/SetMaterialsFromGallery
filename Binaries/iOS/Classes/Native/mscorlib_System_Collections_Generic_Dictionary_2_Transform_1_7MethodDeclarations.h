#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t2464;
// System.Object
struct Object_t;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t124;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m12896 (Transform_1_t2464 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t766  Transform_1_Invoke_m12897 (Transform_1_t2464 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m12898 (Transform_1_t2464 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.ICanvasElement,System.Int32,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t766  Transform_1_EndInvoke_m12899 (Transform_1_t2464 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
