#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>
struct Transform_1_t2601;
// System.Object
struct Object_t;
// UnityEngine.UI.Graphic
struct Graphic_t139;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m13945 (Transform_1_t2601 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::Invoke(TKey,TValue)
 KeyValuePair_2_t2595  Transform_1_Invoke_m13946 (Transform_1_t2601 * __this, Graphic_t139 * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m13947 (Transform_1_t2601 * __this, Graphic_t139 * ___key, int32_t ___value, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.UI.Graphic,System.Int32,System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.Graphic,System.Int32>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t2595  Transform_1_EndInvoke_m13948 (Transform_1_t2601 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
