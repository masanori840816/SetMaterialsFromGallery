#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoCMethod
struct MonoCMethod_t1397;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t677;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t295;
// System.Exception
struct Exception_t304;
// System.Reflection.Binder
struct Binder_t671;
// System.Globalization.CultureInfo
struct CultureInfo_t674;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
 void MonoCMethod__ctor_m7801 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
 ParameterInfoU5BU5D_t677* MonoCMethod_GetParameters_m7802 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
 Object_t * MonoCMethod_InternalInvoke_m7803 (MonoCMethod_t1397 * __this, Object_t * ___obj, ObjectU5BU5D_t295* ___parameters, Exception_t304 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoCMethod_Invoke_m7804 (MonoCMethod_t1397 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t671 * ___binder, ObjectU5BU5D_t295* ___parameters, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
 Object_t * MonoCMethod_Invoke_m7805 (MonoCMethod_t1397 * __this, int32_t ___invokeAttr, Binder_t671 * ___binder, ObjectU5BU5D_t295* ___parameters, CultureInfo_t674 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
 RuntimeMethodHandle_t1360  MonoCMethod_get_MethodHandle_m7806 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
 int32_t MonoCMethod_get_Attributes_m7807 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
 int32_t MonoCMethod_get_CallingConvention_m7808 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
 Type_t * MonoCMethod_get_ReflectedType_m7809 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
 Type_t * MonoCMethod_get_DeclaringType_m7810 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
 String_t* MonoCMethod_get_Name_m7811 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
 bool MonoCMethod_IsDefined_m7812 (MonoCMethod_t1397 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
 ObjectU5BU5D_t295* MonoCMethod_GetCustomAttributes_m7813 (MonoCMethod_t1397 * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t295* MonoCMethod_GetCustomAttributes_m7814 (MonoCMethod_t1397 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
 String_t* MonoCMethod_ToString_m7815 (MonoCMethod_t1397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MonoCMethod_GetObjectData_m7816 (MonoCMethod_t1397 * __this, SerializationInfo_t572 * ___info, StreamingContext_t573  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
