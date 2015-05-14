#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t3448;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void StaticGetter_1__ctor_m19125_gshared (StaticGetter_1_t3448 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define StaticGetter_1__ctor_m19125(__this, ___object, ___method, method) (void)StaticGetter_1__ctor_m19125_gshared((StaticGetter_1_t3448 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
 Object_t * StaticGetter_1_Invoke_m19126_gshared (StaticGetter_1_t3448 * __this, MethodInfo* method);
#define StaticGetter_1_Invoke_m19126(__this, method) (Object_t *)StaticGetter_1_Invoke_m19126_gshared((StaticGetter_1_t3448 *)__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * StaticGetter_1_BeginInvoke_m19127_gshared (StaticGetter_1_t3448 * __this, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m19127(__this, ___callback, ___object, method) (Object_t *)StaticGetter_1_BeginInvoke_m19127_gshared((StaticGetter_1_t3448 *)__this, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * StaticGetter_1_EndInvoke_m19128_gshared (StaticGetter_1_t3448 * __this, Object_t * ___result, MethodInfo* method);
#define StaticGetter_1_EndInvoke_m19128(__this, ___result, method) (Object_t *)StaticGetter_1_EndInvoke_m19128_gshared((StaticGetter_1_t3448 *)__this, (Object_t *)___result, method)
