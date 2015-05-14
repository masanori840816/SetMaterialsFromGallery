#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberFilter
struct MemberFilter_t1158;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t666;
// System.IAsyncResult
struct IAsyncResult_t38;
// System.AsyncCallback
struct AsyncCallback_t39;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
 void MemberFilter__ctor_m9771 (MemberFilter_t1158 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
 bool MemberFilter_Invoke_m9772 (MemberFilter_t1158 * __this, MemberInfo_t666 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
 Object_t * MemberFilter_BeginInvoke_m9773 (MemberFilter_t1158 * __this, MemberInfo_t666 * ___m, Object_t * ___filterCriteria, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
 bool MemberFilter_EndInvoke_m9774 (MemberFilter_t1158 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
