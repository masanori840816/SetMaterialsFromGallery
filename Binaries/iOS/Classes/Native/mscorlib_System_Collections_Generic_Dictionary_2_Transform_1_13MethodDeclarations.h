#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
struct Transform_1_t2478;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t127;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t329;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m13272 (Transform_1_t2478 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t766  Transform_1_Invoke_m13273 (Transform_1_t2478 * __this, Font_t127 * ___key, List_1_t329 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m13274 (Transform_1_t2478 * __this, Font_t127 * ___key, List_1_t329 * ___value, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t766  Transform_1_EndInvoke_m13275 (Transform_1_t2478 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
