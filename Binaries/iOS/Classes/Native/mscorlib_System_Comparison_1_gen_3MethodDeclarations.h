#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Object>
struct Comparison_1_t2201;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m10877_gshared (Comparison_1_t2201 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define Comparison_1__ctor_m10877(__this, ___object, ___method, method) (void)Comparison_1__ctor_m10877_gshared((Comparison_1_t2201 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// System.Int32 System.Comparison`1<System.Object>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m10878_gshared (Comparison_1_t2201 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method);
#define Comparison_1_Invoke_m10878(__this, ___x, ___y, method) (int32_t)Comparison_1_Invoke_m10878_gshared((Comparison_1_t2201 *)__this, (Object_t *)___x, (Object_t *)___y, method)
// System.IAsyncResult System.Comparison`1<System.Object>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m10879_gshared (Comparison_1_t2201 * __this, Object_t * ___x, Object_t * ___y, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m10879(__this, ___x, ___y, ___callback, ___object, method) (Object_t *)Comparison_1_BeginInvoke_m10879_gshared((Comparison_1_t2201 *)__this, (Object_t *)___x, (Object_t *)___y, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// System.Int32 System.Comparison`1<System.Object>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m10880_gshared (Comparison_1_t2201 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m10880(__this, ___result, method) (int32_t)Comparison_1_EndInvoke_m10880_gshared((Comparison_1_t2201 *)__this, (Object_t *)___result, method)
