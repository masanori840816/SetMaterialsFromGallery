#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Object>
struct Func_2_t3233;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m17943_gshared (Func_2_t3233 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define Func_2__ctor_m17943(__this, ___object, ___method, method) (void)Func_2__ctor_m17943_gshared((Func_2_t3233 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
 Object_t * Func_2_Invoke_m17944_gshared (Func_2_t3233 * __this, Object_t * ___arg1, MethodInfo* method);
#define Func_2_Invoke_m17944(__this, ___arg1, method) (Object_t *)Func_2_Invoke_m17944_gshared((Func_2_t3233 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m17945_gshared (Func_2_t3233 * __this, Object_t * ___arg1, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define Func_2_BeginInvoke_m17945(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m17945_gshared((Func_2_t3233 *)__this, (Object_t *)___arg1, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Func_2_EndInvoke_m17946_gshared (Func_2_t3233 * __this, Object_t * ___result, MethodInfo* method);
#define Func_2_EndInvoke_m17946(__this, ___result, method) (Object_t *)Func_2_EndInvoke_m17946_gshared((Func_2_t3233 *)__this, (Object_t *)___result, method)
