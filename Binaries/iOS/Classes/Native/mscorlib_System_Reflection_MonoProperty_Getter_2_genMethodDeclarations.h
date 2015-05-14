#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
struct Getter_2_t3447;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Getter_2__ctor_m19121_gshared (Getter_2_t3447 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method);
#define Getter_2__ctor_m19121(__this, ___object, ___method, method) (void)Getter_2__ctor_m19121_gshared((Getter_2_t3447 *)__this, (Object_t *)___object, (IntPtr_t173)___method, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
 Object_t * Getter_2_Invoke_m19122_gshared (Getter_2_t3447 * __this, Object_t * ____this, MethodInfo* method);
#define Getter_2_Invoke_m19122(__this, ____this, method) (Object_t *)Getter_2_Invoke_m19122_gshared((Getter_2_t3447 *)__this, (Object_t *)____this, method)
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Getter_2_BeginInvoke_m19123_gshared (Getter_2_t3447 * __this, Object_t * ____this, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method);
#define Getter_2_BeginInvoke_m19123(__this, ____this, ___callback, ___object, method) (Object_t *)Getter_2_BeginInvoke_m19123_gshared((Getter_2_t3447 *)__this, (Object_t *)____this, (AsyncCallback_t39 *)___callback, (Object_t *)___object, method)
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Getter_2_EndInvoke_m19124_gshared (Getter_2_t3447 * __this, Object_t * ___result, MethodInfo* method);
#define Getter_2_EndInvoke_m19124(__this, ___result, method) (Object_t *)Getter_2_EndInvoke_m19124_gshared((Getter_2_t3447 *)__this, (Object_t *)___result, method)
