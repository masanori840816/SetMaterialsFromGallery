#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.WeakReference
struct WeakReference_t1500;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.WeakReference::.ctor()
 void WeakReference__ctor_m9758 (WeakReference_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object)
 void WeakReference__ctor_m9759 (WeakReference_t1500 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
 void WeakReference__ctor_m9760 (WeakReference_t1500 * __this, Object_t * ___target, bool ___trackResurrection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WeakReference__ctor_m9761 (WeakReference_t1500 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
 void WeakReference_AllocateHandle_m9762 (WeakReference_t1500 * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.WeakReference::get_Target()
 Object_t * WeakReference_get_Target_m9763 (WeakReference_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_TrackResurrection()
 bool WeakReference_get_TrackResurrection_m9764 (WeakReference_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::Finalize()
 void WeakReference_Finalize_m9765 (WeakReference_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WeakReference_GetObjectData_m9766 (WeakReference_t1500 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
