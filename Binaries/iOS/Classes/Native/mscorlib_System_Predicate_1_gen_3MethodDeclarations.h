#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t2200;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m10827_gshared (Predicate_1_t2200 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define Predicate_1__ctor_m10827(__this, ___object, ___method, method) (void)Predicate_1__ctor_m10827_gshared((Predicate_1_t2200 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
 bool Predicate_1_Invoke_m10828_gshared (Predicate_1_t2200 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m10828(__this, ___obj, method) (bool)Predicate_1_Invoke_m10828_gshared((Predicate_1_t2200 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m10829_gshared (Predicate_1_t2200 * __this, Object_t * ___obj, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m10829(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m10829_gshared((Predicate_1_t2200 *)__this, (Object_t *)___obj, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m10830_gshared (Predicate_1_t2200 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m10830(__this, ___result, method) (bool)Predicate_1_EndInvoke_m10830_gshared((Predicate_1_t2200 *)__this, (Object_t *)___result, method)
