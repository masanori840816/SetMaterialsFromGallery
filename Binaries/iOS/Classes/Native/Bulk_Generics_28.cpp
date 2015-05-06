#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo IList_1_t6169_il2cpp_TypeInfo;

// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Delegate>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Delegate>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Delegate>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Delegate>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Delegate>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Delegate>
extern MethodInfo IList_1_get_Item_m32169_MethodInfo;
extern MethodInfo IList_1_set_Item_m32170_MethodInfo;
static PropertyInfo IList_1_t6169____Item_PropertyInfo = 
{
	&IList_1_t6169_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32169_MethodInfo/* get */
	, &IList_1_set_Item_m32170_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6169_PropertyInfos[] =
{
	&IList_1_t6169____Item_PropertyInfo,
	NULL
};
extern Il2CppType Delegate_t337_0_0_0;
extern Il2CppType Delegate_t337_0_0_0;
static ParameterInfo IList_1_t6169_IList_1_IndexOf_m32171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Delegate_t337_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32171_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Delegate>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32171_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6169_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6169_IList_1_IndexOf_m32171_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32171_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Delegate_t337_0_0_0;
static ParameterInfo IList_1_t6169_IList_1_Insert_m32172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Delegate_t337_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32172_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Delegate>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32172_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6169_IList_1_Insert_m32172_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32172_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6169_IList_1_RemoveAt_m32173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32173_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Delegate>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32173_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6169_IList_1_RemoveAt_m32173_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32173_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6169_IList_1_get_Item_m32169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Delegate_t337_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32169_GenericMethod;
// T System.Collections.Generic.IList`1<System.Delegate>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32169_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6169_il2cpp_TypeInfo/* declaring_type */
	, &Delegate_t337_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6169_IList_1_get_Item_m32169_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32169_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Delegate_t337_0_0_0;
static ParameterInfo IList_1_t6169_IList_1_set_Item_m32170_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Delegate_t337_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32170_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Delegate>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32170_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6169_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6169_IList_1_set_Item_m32170_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32170_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6169_MethodInfos[] =
{
	&IList_1_IndexOf_m32171_MethodInfo,
	&IList_1_Insert_m32172_MethodInfo,
	&IList_1_RemoveAt_m32173_MethodInfo,
	&IList_1_get_Item_m32169_MethodInfo,
	&IList_1_set_Item_m32170_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t641_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t6168_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6170_il2cpp_TypeInfo;
static TypeInfo* IList_1_t6169_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6168_il2cpp_TypeInfo,
	&IEnumerable_1_t6170_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6169_0_0_0;
extern Il2CppType IList_1_t6169_1_0_0;
struct IList_1_t6169;
extern Il2CppGenericClass IList_1_t6169_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6169_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6169_MethodInfos/* methods */
	, IList_1_t6169_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6169_il2cpp_TypeInfo/* element_class */
	, IList_1_t6169_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6169_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6169_0_0_0/* byval_arg */
	, &IList_1_t6169_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6169_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4763_il2cpp_TypeInfo;

// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32174_MethodInfo;
static PropertyInfo IEnumerator_1_t4763____Current_PropertyInfo = 
{
	&IEnumerator_1_t4763_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32174_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4763_PropertyInfos[] =
{
	&IEnumerator_1_t4763____Current_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t271_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32174_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32174_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4763_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t271_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32174_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4763_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32174_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t112_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t301_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t4763_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4763_0_0_0;
extern Il2CppType IEnumerator_1_t4763_1_0_0;
struct IEnumerator_1_t4763;
extern Il2CppGenericClass IEnumerator_1_t4763_GenericClass;
TypeInfo IEnumerator_1_t4763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4763_MethodInfos/* methods */
	, IEnumerator_1_t4763_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4763_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4763_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4763_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4763_0_0_0/* byval_arg */
	, &IEnumerator_1_t4763_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4763_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.FlagsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_375.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3343_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.FlagsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_375MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo FlagsAttribute_t271_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t949_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m18605_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4114_MethodInfo;
extern MethodInfo Array_get_Length_m4119_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFlagsAttribute_t271_m24565_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m19774_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19774(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisFlagsAttribute_t271_m24565(__this, p0, method) (FlagsAttribute_t271 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.FlagsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3343____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3343, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3343____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3343, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3343_FieldInfos[] =
{
	&InternalEnumerator_1_t3343____array_0_FieldInfo,
	&InternalEnumerator_1_t3343____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3343____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3343_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3343____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3343_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18605_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3343_PropertyInfos[] =
{
	&InternalEnumerator_1_t3343____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3343____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3343_InternalEnumerator_1__ctor_m18601_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18601_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18601_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3343_InternalEnumerator_1__ctor_m18601_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18601_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18603_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18603_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18603_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18604_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18604_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18604_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t271_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18605_GenericMethod;
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18605_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t271_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18605_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3343_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18601_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_MethodInfo,
	&InternalEnumerator_1_Dispose_m18603_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18604_MethodInfo,
	&InternalEnumerator_1_get_Current_m18605_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1357_MethodInfo;
extern MethodInfo Object_Finalize_m7_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1358_MethodInfo;
extern MethodInfo ValueType_ToString_m1473_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m18604_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18603_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3343_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18602_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18604_MethodInfo,
	&InternalEnumerator_1_Dispose_m18603_MethodInfo,
	&InternalEnumerator_1_get_Current_m18605_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3343_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4763_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3343_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4763_il2cpp_TypeInfo, 7},
};
extern TypeInfo FlagsAttribute_t271_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3343_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18605_MethodInfo/* Method Usage */,
	&FlagsAttribute_t271_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFlagsAttribute_t271_m24565_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3343_0_0_0;
extern Il2CppType InternalEnumerator_1_t3343_1_0_0;
extern TypeInfo ValueType_t296_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t3343_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t3343_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3343_MethodInfos/* methods */
	, InternalEnumerator_1_t3343_PropertyInfos/* properties */
	, InternalEnumerator_1_t3343_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3343_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3343_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3343_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3343_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3343_1_0_0/* this_arg */
	, InternalEnumerator_1_t3343_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3343_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3343_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3343)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6171_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.FlagsAttribute>
extern MethodInfo ICollection_1_get_Count_m32175_MethodInfo;
static PropertyInfo ICollection_1_t6171____Count_PropertyInfo = 
{
	&ICollection_1_t6171_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32175_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32176_MethodInfo;
static PropertyInfo ICollection_1_t6171____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6171_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32176_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6171_PropertyInfos[] =
{
	&ICollection_1_t6171____Count_PropertyInfo,
	&ICollection_1_t6171____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32175_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32175_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32175_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32176_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32176_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32176_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t271_0_0_0;
extern Il2CppType FlagsAttribute_t271_0_0_0;
static ParameterInfo ICollection_1_t6171_ICollection_1_Add_m32177_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t271_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32177_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32177_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6171_ICollection_1_Add_m32177_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32177_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32178_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32178_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32178_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t271_0_0_0;
static ParameterInfo ICollection_1_t6171_ICollection_1_Contains_m32179_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t271_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32179_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32179_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6171_ICollection_1_Contains_m32179_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32179_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttributeU5BU5D_t3617_0_0_0;
extern Il2CppType FlagsAttributeU5BU5D_t3617_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6171_ICollection_1_CopyTo_m32180_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttributeU5BU5D_t3617_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32180_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32180_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6171_ICollection_1_CopyTo_m32180_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32180_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t271_0_0_0;
static ParameterInfo ICollection_1_t6171_ICollection_1_Remove_m32181_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t271_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32181_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32181_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6171_ICollection_1_Remove_m32181_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32181_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6171_MethodInfos[] =
{
	&ICollection_1_get_Count_m32175_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32176_MethodInfo,
	&ICollection_1_Add_m32177_MethodInfo,
	&ICollection_1_Clear_m32178_MethodInfo,
	&ICollection_1_Contains_m32179_MethodInfo,
	&ICollection_1_CopyTo_m32180_MethodInfo,
	&ICollection_1_Remove_m32181_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6173_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6171_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6173_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6171_0_0_0;
extern Il2CppType ICollection_1_t6171_1_0_0;
struct ICollection_1_t6171;
extern Il2CppGenericClass ICollection_1_t6171_GenericClass;
TypeInfo ICollection_1_t6171_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6171_MethodInfos/* methods */
	, ICollection_1_t6171_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6171_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6171_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6171_0_0_0/* byval_arg */
	, &ICollection_1_t6171_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6171_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>
extern Il2CppType IEnumerator_1_t4763_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32182_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32182_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6173_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4763_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32182_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6173_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32182_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6173_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6173_0_0_0;
extern Il2CppType IEnumerable_1_t6173_1_0_0;
struct IEnumerable_1_t6173;
extern Il2CppGenericClass IEnumerable_1_t6173_GenericClass;
TypeInfo IEnumerable_1_t6173_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6173_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6173_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6173_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6173_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6173_0_0_0/* byval_arg */
	, &IEnumerable_1_t6173_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6173_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6172_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.FlagsAttribute>
extern MethodInfo IList_1_get_Item_m32183_MethodInfo;
extern MethodInfo IList_1_set_Item_m32184_MethodInfo;
static PropertyInfo IList_1_t6172____Item_PropertyInfo = 
{
	&IList_1_t6172_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32183_MethodInfo/* get */
	, &IList_1_set_Item_m32184_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6172_PropertyInfos[] =
{
	&IList_1_t6172____Item_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t271_0_0_0;
static ParameterInfo IList_1_t6172_IList_1_IndexOf_m32185_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t271_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32185_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32185_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6172_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6172_IList_1_IndexOf_m32185_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32185_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FlagsAttribute_t271_0_0_0;
static ParameterInfo IList_1_t6172_IList_1_Insert_m32186_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t271_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32186_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32186_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6172_IList_1_Insert_m32186_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32186_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6172_IList_1_RemoveAt_m32187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32187_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32187_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6172_IList_1_RemoveAt_m32187_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32187_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6172_IList_1_get_Item_m32183_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType FlagsAttribute_t271_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32183_GenericMethod;
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32183_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6172_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t271_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6172_IList_1_get_Item_m32183_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32183_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FlagsAttribute_t271_0_0_0;
static ParameterInfo IList_1_t6172_IList_1_set_Item_m32184_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t271_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32184_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32184_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6172_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6172_IList_1_set_Item_m32184_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32184_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6172_MethodInfos[] =
{
	&IList_1_IndexOf_m32185_MethodInfo,
	&IList_1_Insert_m32186_MethodInfo,
	&IList_1_RemoveAt_m32187_MethodInfo,
	&IList_1_get_Item_m32183_MethodInfo,
	&IList_1_set_Item_m32184_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6172_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6171_il2cpp_TypeInfo,
	&IEnumerable_1_t6173_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6172_0_0_0;
extern Il2CppType IList_1_t6172_1_0_0;
struct IList_1_t6172;
extern Il2CppGenericClass IList_1_t6172_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6172_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6172_MethodInfos/* methods */
	, IList_1_t6172_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6172_il2cpp_TypeInfo/* element_class */
	, IList_1_t6172_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6172_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6172_0_0_0/* byval_arg */
	, &IList_1_t6172_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6172_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Converter_2_t3344_il2cpp_TypeInfo;
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Converter_2__ctor_m18606_MethodInfo;
 void Converter_2__ctor_m18606_gshared (Converter_2_t3344 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern MethodInfo Converter_2_Invoke_m18607_MethodInfo;
 Object_t * Converter_2_Invoke_m18607_gshared (Converter_2_t3344 * __this, Object_t * ___input, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m18607((Converter_2_t3344 *)__this->___prev_9,___input, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern MethodInfo Converter_2_BeginInvoke_m18608_MethodInfo;
 Object_t * Converter_2_BeginInvoke_m18608_gshared (Converter_2_t3344 * __this, Object_t * ___input, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo Converter_2_EndInvoke_m18609_MethodInfo;
 Object_t * Converter_2_EndInvoke_m18609_gshared (Converter_2_t3344 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Converter`2<System.Object,System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo Converter_2_t3344_Converter_2__ctor_m18606_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2__ctor_m18606_GenericMethod;
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo Converter_2__ctor_m18606_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Converter_2__ctor_m18606_gshared/* method */
	, &Converter_2_t3344_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, Converter_2_t3344_Converter_2__ctor_m18606_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2__ctor_m18606_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t3344_Converter_2_Invoke_m18607_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_Invoke_m18607_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
MethodInfo Converter_2_Invoke_m18607_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Converter_2_Invoke_m18607_gshared/* method */
	, &Converter_2_t3344_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t3344_Converter_2_Invoke_m18607_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_Invoke_m18607_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t3344_Converter_2_BeginInvoke_m18608_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_BeginInvoke_m18608_GenericMethod;
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
MethodInfo Converter_2_BeginInvoke_m18608_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Converter_2_BeginInvoke_m18608_gshared/* method */
	, &Converter_2_t3344_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Converter_2_t3344_Converter_2_BeginInvoke_m18608_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_BeginInvoke_m18608_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo Converter_2_t3344_Converter_2_EndInvoke_m18609_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_EndInvoke_m18609_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo Converter_2_EndInvoke_m18609_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Converter_2_EndInvoke_m18609_gshared/* method */
	, &Converter_2_t3344_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t3344_Converter_2_EndInvoke_m18609_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_EndInvoke_m18609_GenericMethod/* genericMethod */

};
static MethodInfo* Converter_2_t3344_MethodInfos[] =
{
	&Converter_2__ctor_m18606_MethodInfo,
	&Converter_2_Invoke_m18607_MethodInfo,
	&Converter_2_BeginInvoke_m18608_MethodInfo,
	&Converter_2_EndInvoke_m18609_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m1676_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m1677_MethodInfo;
extern MethodInfo Object_ToString_m1300_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m1678_MethodInfo;
extern MethodInfo Delegate_Clone_m1679_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m1680_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m1681_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m1682_MethodInfo;
static MethodInfo* Converter_2_t3344_VTable[] =
{
	&MulticastDelegate_Equals_m1676_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1677_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&MulticastDelegate_GetObjectData_m1678_MethodInfo,
	&Delegate_Clone_m1679_MethodInfo,
	&MulticastDelegate_GetObjectData_m1678_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1680_MethodInfo,
	&MulticastDelegate_CombineImpl_m1681_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1682_MethodInfo,
	&Converter_2_Invoke_m18607_MethodInfo,
	&Converter_2_BeginInvoke_m18608_MethodInfo,
	&Converter_2_EndInvoke_m18609_MethodInfo,
};
extern TypeInfo ICloneable_t350_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t351_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Converter_2_t3344_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Converter_2_t3344_0_0_0;
extern Il2CppType Converter_2_t3344_1_0_0;
extern TypeInfo MulticastDelegate_t172_il2cpp_TypeInfo;
struct Converter_2_t3344;
extern Il2CppGenericClass Converter_2_t3344_GenericClass;
TypeInfo Converter_2_t3344_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t3344_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Converter_2_t3344_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Converter_2_t3344_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Converter_2_t3344_il2cpp_TypeInfo/* cast_class */
	, &Converter_2_t3344_0_0_0/* byval_arg */
	, &Converter_2_t3344_1_0_0/* this_arg */
	, Converter_2_t3344_InterfacesOffsets/* interface_offsets */
	, &Converter_2_t3344_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Converter_2_t3344)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo;
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3_0.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo ArgumentOutOfRangeException_t950_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t322_il2cpp_TypeInfo;
extern TypeInfo Void_t3_il2cpp_TypeInfo;
extern TypeInfo Int32_t18_il2cpp_TypeInfo;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t321_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3_0MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo ArgumentOutOfRangeException__ctor_m4125_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m18625_MethodInfo;
extern MethodInfo Object__ctor_m1299_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_GetEnumerator_m18620_MethodInfo;
extern MethodInfo Array_IndexOf_TisObject_t_m10291_MethodInfo;
extern MethodInfo Array_CopyTo_m4349_MethodInfo;
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m4138_MethodInfo;
struct Array_t;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
 int32_t Array_IndexOf_TisObject_t_m10291_gshared (Object_t * __this/* static, unused */, ObjectU5BU5D_t295* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m10291(__this/* static, unused */, p0, p1, method) (int32_t)Array_IndexOf_TisObject_t_m10291_gshared((Object_t *)__this/* static, unused */, (ObjectU5BU5D_t295*)p0, (Object_t *)p1, method)


// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern MethodInfo ArrayReadOnlyList_1__ctor_m18610_MethodInfo;
 void ArrayReadOnlyList_1__ctor_m18610_gshared (ArrayReadOnlyList_1_t3345 * __this, ObjectU5BU5D_t295* ___array, MethodInfo* method)
{
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		__this->___array_0 = ___array;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_MethodInfo;
 Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_gshared (ArrayReadOnlyList_1_t3345 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_get_Item_m18612_MethodInfo;
 Object_t * ArrayReadOnlyList_1_get_Item_m18612_gshared (ArrayReadOnlyList_1_t3345 * __this, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t295* L_0 = (__this->___array_0);
		NullCheck(L_0);
		if ((((uint32_t)___index) < ((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t950 * L_1 = (ArgumentOutOfRangeException_t950 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t950_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m4125(L_1, (String_t*) &_stringLiteral222, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m4125_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ObjectU5BU5D_t295* L_2 = (__this->___array_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ___index);
		int32_t L_3 = ___index;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_set_Item_m18613_MethodInfo;
 void ArrayReadOnlyList_1_set_Item_m18613_gshared (ArrayReadOnlyList_1_t3345 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		Exception_t304 * L_0 = (( Exception_t304 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern MethodInfo ArrayReadOnlyList_1_get_Count_m18614_MethodInfo;
 int32_t ArrayReadOnlyList_1_get_Count_m18614_gshared (ArrayReadOnlyList_1_t3345 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t295* L_0 = (__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m18615_MethodInfo;
 bool ArrayReadOnlyList_1_get_IsReadOnly_m18615_gshared (ArrayReadOnlyList_1_t3345 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern MethodInfo ArrayReadOnlyList_1_Add_m18616_MethodInfo;
 void ArrayReadOnlyList_1_Add_m18616_gshared (ArrayReadOnlyList_1_t3345 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t304 * L_0 = (( Exception_t304 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern MethodInfo ArrayReadOnlyList_1_Clear_m18617_MethodInfo;
 void ArrayReadOnlyList_1_Clear_m18617_gshared (ArrayReadOnlyList_1_t3345 * __this, MethodInfo* method)
{
	{
		Exception_t304 * L_0 = (( Exception_t304 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern MethodInfo ArrayReadOnlyList_1_Contains_m18618_MethodInfo;
 bool ArrayReadOnlyList_1_Contains_m18618_gshared (ArrayReadOnlyList_1_t3345 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t295* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t295* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern MethodInfo ArrayReadOnlyList_1_CopyTo_m18619_MethodInfo;
 void ArrayReadOnlyList_1_CopyTo_m18619_gshared (ArrayReadOnlyList_1_t3345 * __this, ObjectU5BU5D_t295* ___array, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t295* L_0 = (__this->___array_0);
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m4349_MethodInfo, L_0, (Array_t *)(Array_t *)___array, ___index);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
 Object_t* ArrayReadOnlyList_1_GetEnumerator_m18620_gshared (ArrayReadOnlyList_1_t3345 * __this, MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t3346 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t3346 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t3346 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t3346 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_3 = __this;
		return V_0;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern MethodInfo ArrayReadOnlyList_1_IndexOf_m18621_MethodInfo;
 int32_t ArrayReadOnlyList_1_IndexOf_m18621_gshared (ArrayReadOnlyList_1_t3345 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t295* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t295* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_Insert_m18622_MethodInfo;
 void ArrayReadOnlyList_1_Insert_m18622_gshared (ArrayReadOnlyList_1_t3345 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t304 * L_0 = (( Exception_t304 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern MethodInfo ArrayReadOnlyList_1_Remove_m18623_MethodInfo;
 bool ArrayReadOnlyList_1_Remove_m18623_gshared (ArrayReadOnlyList_1_t3345 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t304 * L_0 = (( Exception_t304 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_RemoveAt_m18624_MethodInfo;
 void ArrayReadOnlyList_1_RemoveAt_m18624_gshared (ArrayReadOnlyList_1_t3345 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Exception_t304 * L_0 = (( Exception_t304 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
 Exception_t304 * ArrayReadOnlyList_1_ReadOnlyError_m18625_gshared (Object_t * __this/* static, unused */, MethodInfo* method)
{
	{
		NotSupportedException_t321 * L_0 = (NotSupportedException_t321 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t321_il2cpp_TypeInfo));
		NotSupportedException__ctor_m4138(L_0, (String_t*) &_stringLiteral1061, /*hidden argument*/&NotSupportedException__ctor_m4138_MethodInfo);
		return L_0;
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1<System.Object>
extern Il2CppType ObjectU5BU5D_t295_0_0_1;
FieldInfo ArrayReadOnlyList_1_t3345____array_0_FieldInfo = 
{
	"array"/* name */
	, &ObjectU5BU5D_t295_0_0_1/* type */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* parent */
	, offsetof(ArrayReadOnlyList_1_t3345, ___array_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ArrayReadOnlyList_1_t3345_FieldInfos[] =
{
	&ArrayReadOnlyList_1_t3345____array_0_FieldInfo,
	NULL
};
static PropertyInfo ArrayReadOnlyList_1_t3345____Item_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ArrayReadOnlyList_1_get_Item_m18612_MethodInfo/* get */
	, &ArrayReadOnlyList_1_set_Item_m18613_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t3345____Count_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ArrayReadOnlyList_1_get_Count_m18614_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t3345____IsReadOnly_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m18615_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ArrayReadOnlyList_1_t3345_PropertyInfos[] =
{
	&ArrayReadOnlyList_1_t3345____Item_PropertyInfo,
	&ArrayReadOnlyList_1_t3345____Count_PropertyInfo,
	&ArrayReadOnlyList_1_t3345____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1__ctor_m18610_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1__ctor_m18610_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
MethodInfo ArrayReadOnlyList_1__ctor_m18610_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1__ctor_m18610_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1__ctor_m18610_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1__ctor_m18610_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t112_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_GenericMethod;
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t112_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_get_Item_m18612_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Item_m18612_GenericMethod;
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
MethodInfo ArrayReadOnlyList_1_get_Item_m18612_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Item_m18612_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_get_Item_m18612_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Item_m18612_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_set_Item_m18613_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_set_Item_m18613_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_set_Item_m18613_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_set_Item_m18613_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_set_Item_m18613_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_set_Item_m18613_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Count_m18614_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
MethodInfo ArrayReadOnlyList_1_get_Count_m18614_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Count_m18614_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Count_m18614_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_IsReadOnly_m18615_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m18615_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_IsReadOnly_m18615_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m18615_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Add_m18616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Add_m18616_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
MethodInfo ArrayReadOnlyList_1_Add_m18616_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Add_m18616_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Add_m18616_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Add_m18616_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Clear_m18617_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
MethodInfo ArrayReadOnlyList_1_Clear_m18617_MethodInfo = 
{
	"Clear"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Clear_m18617_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Clear_m18617_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Contains_m18618_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Contains_m18618_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
MethodInfo ArrayReadOnlyList_1_Contains_m18618_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Contains_m18618_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Contains_m18618_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Contains_m18618_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_CopyTo_m18619_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_CopyTo_m18619_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
MethodInfo ArrayReadOnlyList_1_CopyTo_m18619_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_CopyTo_m18619_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_CopyTo_m18619_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_CopyTo_m18619_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_1_t322_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ArrayReadOnlyList_1_t1154__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m9850;
extern Il2CppGenericMethod ArrayReadOnlyList_1_GetEnumerator_m18620_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
MethodInfo ArrayReadOnlyList_1_GetEnumerator_m18620_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_GetEnumerator_m18620_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t322_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &ArrayReadOnlyList_1_t1154__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m9850/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_GetEnumerator_m18620_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_IndexOf_m18621_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_IndexOf_m18621_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
MethodInfo ArrayReadOnlyList_1_IndexOf_m18621_MethodInfo = 
{
	"IndexOf"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_IndexOf_m18621_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_IndexOf_m18621_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_IndexOf_m18621_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Insert_m18622_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Insert_m18622_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_Insert_m18622_MethodInfo = 
{
	"Insert"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Insert_m18622_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Insert_m18622_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Insert_m18622_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Remove_m18623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Remove_m18623_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
MethodInfo ArrayReadOnlyList_1_Remove_m18623_MethodInfo = 
{
	"Remove"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Remove_m18623_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_Remove_m18623_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Remove_m18623_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_RemoveAt_m18624_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_RemoveAt_m18624_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
MethodInfo ArrayReadOnlyList_1_RemoveAt_m18624_MethodInfo = 
{
	"RemoveAt"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_RemoveAt_m18624_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ArrayReadOnlyList_1_t3345_ArrayReadOnlyList_1_RemoveAt_m18624_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_RemoveAt_m18624_GenericMethod/* genericMethod */

};
extern Il2CppType Exception_t304_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_ReadOnlyError_m18625_GenericMethod;
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m18625_MethodInfo = 
{
	"ReadOnlyError"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_ReadOnlyError_m18625_gshared/* method */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* declaring_type */
	, &Exception_t304_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_ReadOnlyError_m18625_GenericMethod/* genericMethod */

};
static MethodInfo* ArrayReadOnlyList_1_t3345_MethodInfos[] =
{
	&ArrayReadOnlyList_1__ctor_m18610_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m18612_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m18613_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m18614_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m18615_MethodInfo,
	&ArrayReadOnlyList_1_Add_m18616_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m18617_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m18618_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m18619_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m18620_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m18621_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m18622_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m18623_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m18624_MethodInfo,
	&ArrayReadOnlyList_1_ReadOnlyError_m18625_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1289_MethodInfo;
extern MethodInfo Object_GetHashCode_m1290_MethodInfo;
static MethodInfo* ArrayReadOnlyList_1_t3345_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m18611_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m18621_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m18622_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m18624_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m18612_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m18613_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m18614_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m18615_MethodInfo,
	&ArrayReadOnlyList_1_Add_m18616_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m18617_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m18618_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m18619_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m18623_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m18620_MethodInfo,
};
extern TypeInfo IList_1_t2206_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t2202_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t2203_il2cpp_TypeInfo;
static TypeInfo* ArrayReadOnlyList_1_t3345_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IList_1_t2206_il2cpp_TypeInfo,
	&ICollection_1_t2202_il2cpp_TypeInfo,
	&IEnumerable_1_t2203_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair ArrayReadOnlyList_1_t3345_InterfacesOffsets[] = 
{
	{ &IEnumerable_t641_il2cpp_TypeInfo, 4},
	{ &IList_1_t2206_il2cpp_TypeInfo, 5},
	{ &ICollection_1_t2202_il2cpp_TypeInfo, 10},
	{ &IEnumerable_1_t2203_il2cpp_TypeInfo, 17},
};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo;
static Il2CppRGCTXData ArrayReadOnlyList_1_t3345_RGCTXData[5] = 
{
	&ArrayReadOnlyList_1_GetEnumerator_m18620_MethodInfo/* Method Usage */,
	&ArrayReadOnlyList_1_ReadOnlyError_m18625_MethodInfo/* Method Usage */,
	&Array_IndexOf_TisObject_t_m10291_MethodInfo/* Method Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* Class Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ArrayReadOnlyList_1_t3345_0_0_0;
extern Il2CppType ArrayReadOnlyList_1_t3345_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct ArrayReadOnlyList_1_t3345;
extern Il2CppGenericClass ArrayReadOnlyList_1_t3345_GenericClass;
extern CustomAttributesCache ArrayReadOnlyList_1_t1154__CustomAttributeCache;
extern CustomAttributesCache ArrayReadOnlyList_1_t1154__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m9850;
TypeInfo ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArrayReadOnlyList`1"/* name */
	, ""/* namespaze */
	, ArrayReadOnlyList_1_t3345_MethodInfos/* methods */
	, ArrayReadOnlyList_1_t3345_PropertyInfos/* properties */
	, ArrayReadOnlyList_1_t3345_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* element_class */
	, ArrayReadOnlyList_1_t3345_InterfacesTypeInfos/* implemented_interfaces */
	, ArrayReadOnlyList_1_t3345_VTable/* vtable */
	, &ArrayReadOnlyList_1_t1154__CustomAttributeCache/* custom_attributes_cache */
	, &ArrayReadOnlyList_1_t3345_il2cpp_TypeInfo/* cast_class */
	, &ArrayReadOnlyList_1_t3345_0_0_0/* byval_arg */
	, &ArrayReadOnlyList_1_t3345_1_0_0/* this_arg */
	, ArrayReadOnlyList_1_t3345_InterfacesOffsets/* interface_offsets */
	, &ArrayReadOnlyList_1_t3345_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, ArrayReadOnlyList_1_t3345_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArrayReadOnlyList_1_t3345)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 16/* method_count */
	, 3/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 18/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"


// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
 void U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3346 * __this, MethodInfo* method)
{
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3346 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3346 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_MethodInfo;
 bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3346 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_001e;
		}
		if (V_0 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		ArrayReadOnlyList_1_t3345 * L_1 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_1);
		ObjectU5BU5D_t295* L_2 = (L_1->___array_0);
		int32_t L_3 = (__this->___U3CiU3E__0_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		__this->___$current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
		__this->___$PC_1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)(L_5+1));
	}

IL_005a:
	{
		int32_t L_6 = (__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t3345 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		ObjectU5BU5D_t295* L_8 = (L_7->___array_0);
		NullCheck(L_8);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_MethodInfo;
 void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_gshared (U3CGetEnumeratorU3Ec__Iterator0_t3346 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
extern Il2CppType Int32_t18_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t3346____U3CiU3E__0_0_FieldInfo = 
{
	"<i>__0"/* name */
	, &Int32_t18_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3346, ___U3CiU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t3346____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t18_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3346, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t3346____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3346, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ArrayReadOnlyList_1_t3345_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t3346____U3CU3Ef__this_3_FieldInfo = 
{
	"<>f__this"/* name */
	, &ArrayReadOnlyList_1_t3345_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t3346, ___U3CU3Ef__this_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetEnumeratorU3Ec__Iterator0_t3346_FieldInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t3346____U3CiU3E__0_0_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t3346____$PC_1_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t3346____$current_2_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t3346____U3CU3Ef__this_3_FieldInfo,
	NULL
};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t3346____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<T>.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t3346____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetEnumeratorU3Ec__Iterator0_t3346_PropertyInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t3346____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t3346____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m9836;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_GenericMethod;
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<T>.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m9836/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m9837;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_GenericMethod;
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m9837/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m9839;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m9839/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_GenericMethod/* genericMethod */

};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t3346_MethodInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m18626_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_MethodInfo,
	NULL
};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t3346_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m18628_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m18629_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m18630_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m18627_MethodInfo,
};
static TypeInfo* U3CGetEnumeratorU3Ec__Iterator0_t3346_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t322_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CGetEnumeratorU3Ec__Iterator0_t3346_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t322_il2cpp_TypeInfo, 7},
};
extern TypeInfo Object_t_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CGetEnumeratorU3Ec__Iterator0_t3346_RGCTXData[1] = 
{
	&Object_t_il2cpp_TypeInfo/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t3346_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t3346_1_0_0;
struct U3CGetEnumeratorU3Ec__Iterator0_t3346;
extern Il2CppGenericClass U3CGetEnumeratorU3Ec__Iterator0_t3346_GenericClass;
extern TypeInfo ArrayReadOnlyList_1_t1154_il2cpp_TypeInfo;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m9836;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m9837;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m9839;
TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetEnumerator>c__Iterator0"/* name */
	, ""/* namespaze */
	, U3CGetEnumeratorU3Ec__Iterator0_t3346_MethodInfos/* methods */
	, U3CGetEnumeratorU3Ec__Iterator0_t3346_PropertyInfos/* properties */
	, U3CGetEnumeratorU3Ec__Iterator0_t3346_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ArrayReadOnlyList_1_t1154_il2cpp_TypeInfo/* nested_in */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* element_class */
	, U3CGetEnumeratorU3Ec__Iterator0_t3346_InterfacesTypeInfos/* implemented_interfaces */
	, U3CGetEnumeratorU3Ec__Iterator0_t3346_VTable/* vtable */
	, &U3CGetEnumeratorU3Ec__Iterator0_t1153__CustomAttributeCache/* custom_attributes_cache */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_il2cpp_TypeInfo/* cast_class */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_0_0_0/* byval_arg */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_1_0_0/* this_arg */
	, U3CGetEnumeratorU3Ec__Iterator0_t3346_InterfacesOffsets/* interface_offsets */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3346_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CGetEnumeratorU3Ec__Iterator0_t3346_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetEnumeratorU3Ec__Iterator0_t3346)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4765_il2cpp_TypeInfo;

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
extern MethodInfo IEnumerator_1_get_Current_m32188_MethodInfo;
static PropertyInfo IEnumerator_1_t4765____Current_PropertyInfo = 
{
	&IEnumerator_1_t4765_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32188_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4765_PropertyInfos[] =
{
	&IEnumerator_1_t4765____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodInfo_t582_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32188_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32188_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4765_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t582_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32188_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4765_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32188_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4765_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4765_0_0_0;
extern Il2CppType IEnumerator_1_t4765_1_0_0;
struct IEnumerator_1_t4765;
extern Il2CppGenericClass IEnumerator_1_t4765_GenericClass;
TypeInfo IEnumerator_1_t4765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4765_MethodInfos/* methods */
	, IEnumerator_1_t4765_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4765_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4765_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4765_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4765_0_0_0/* byval_arg */
	, &IEnumerator_1_t4765_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_376.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3347_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_376MethodDeclarations.h"

extern TypeInfo MethodInfo_t582_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18635_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodInfo_t582_m24604_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodInfo_t582_m24604(__this, p0, method) (MethodInfo_t582 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3347____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3347, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3347____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3347, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3347_FieldInfos[] =
{
	&InternalEnumerator_1_t3347____array_0_FieldInfo,
	&InternalEnumerator_1_t3347____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18632_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3347____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3347_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18632_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3347____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3347_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18635_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3347_PropertyInfos[] =
{
	&InternalEnumerator_1_t3347____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3347____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3347_InternalEnumerator_1__ctor_m18631_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18631_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18631_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3347_InternalEnumerator_1__ctor_m18631_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18631_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18632_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18632_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18632_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18633_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18633_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18633_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18634_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18634_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18634_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t582_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18635_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18635_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t582_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18635_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3347_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18631_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18632_MethodInfo,
	&InternalEnumerator_1_Dispose_m18633_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18634_MethodInfo,
	&InternalEnumerator_1_get_Current_m18635_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18634_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18633_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3347_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18632_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18634_MethodInfo,
	&InternalEnumerator_1_Dispose_m18633_MethodInfo,
	&InternalEnumerator_1_get_Current_m18635_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3347_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4765_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3347_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4765_il2cpp_TypeInfo, 7},
};
extern TypeInfo MethodInfo_t582_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3347_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18635_MethodInfo/* Method Usage */,
	&MethodInfo_t582_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMethodInfo_t582_m24604_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3347_0_0_0;
extern Il2CppType InternalEnumerator_1_t3347_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3347_GenericClass;
TypeInfo InternalEnumerator_1_t3347_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3347_MethodInfos/* methods */
	, InternalEnumerator_1_t3347_PropertyInfos/* properties */
	, InternalEnumerator_1_t3347_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3347_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3347_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3347_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3347_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3347_1_0_0/* this_arg */
	, InternalEnumerator_1_t3347_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3347_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3347_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3347)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6174_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
extern MethodInfo ICollection_1_get_Count_m32189_MethodInfo;
static PropertyInfo ICollection_1_t6174____Count_PropertyInfo = 
{
	&ICollection_1_t6174_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32189_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32190_MethodInfo;
static PropertyInfo ICollection_1_t6174____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6174_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32190_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6174_PropertyInfos[] =
{
	&ICollection_1_t6174____Count_PropertyInfo,
	&ICollection_1_t6174____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32189_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m32189_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32189_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32190_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32190_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32190_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo ICollection_1_t6174_ICollection_1_Add_m32191_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32191_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Add(T)
MethodInfo ICollection_1_Add_m32191_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6174_ICollection_1_Add_m32191_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32191_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32192_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Clear()
MethodInfo ICollection_1_Clear_m32192_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32192_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo ICollection_1_t6174_ICollection_1_Contains_m32193_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32193_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m32193_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6174_ICollection_1_Contains_m32193_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32193_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfoU5BU5D_t1163_0_0_0;
extern Il2CppType MethodInfoU5BU5D_t1163_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6174_ICollection_1_CopyTo_m32194_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfoU5BU5D_t1163_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32194_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32194_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6174_ICollection_1_CopyTo_m32194_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32194_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo ICollection_1_t6174_ICollection_1_Remove_m32195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32195_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m32195_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6174_ICollection_1_Remove_m32195_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32195_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6174_MethodInfos[] =
{
	&ICollection_1_get_Count_m32189_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32190_MethodInfo,
	&ICollection_1_Add_m32191_MethodInfo,
	&ICollection_1_Clear_m32192_MethodInfo,
	&ICollection_1_Contains_m32193_MethodInfo,
	&ICollection_1_CopyTo_m32194_MethodInfo,
	&ICollection_1_Remove_m32195_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6176_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6174_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6176_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6174_0_0_0;
extern Il2CppType ICollection_1_t6174_1_0_0;
struct ICollection_1_t6174;
extern Il2CppGenericClass ICollection_1_t6174_GenericClass;
TypeInfo ICollection_1_t6174_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6174_MethodInfos/* methods */
	, ICollection_1_t6174_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6174_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6174_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6174_0_0_0/* byval_arg */
	, &ICollection_1_t6174_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6174_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
extern Il2CppType IEnumerator_1_t4765_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32196_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32196_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6176_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4765_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32196_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6176_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32196_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6176_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6176_0_0_0;
extern Il2CppType IEnumerable_1_t6176_1_0_0;
struct IEnumerable_1_t6176;
extern Il2CppGenericClass IEnumerable_1_t6176_GenericClass;
TypeInfo IEnumerable_1_t6176_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6176_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6176_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6176_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6176_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6176_0_0_0/* byval_arg */
	, &IEnumerable_1_t6176_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6176_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6175_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodInfo>
extern MethodInfo IList_1_get_Item_m32197_MethodInfo;
extern MethodInfo IList_1_set_Item_m32198_MethodInfo;
static PropertyInfo IList_1_t6175____Item_PropertyInfo = 
{
	&IList_1_t6175_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32197_MethodInfo/* get */
	, &IList_1_set_Item_m32198_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6175_PropertyInfos[] =
{
	&IList_1_t6175____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo IList_1_t6175_IList_1_IndexOf_m32199_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32199_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32199_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6175_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6175_IList_1_IndexOf_m32199_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32199_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo IList_1_t6175_IList_1_Insert_m32200_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32200_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32200_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6175_IList_1_Insert_m32200_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32200_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6175_IList_1_RemoveAt_m32201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32201_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32201_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6175_IList_1_RemoveAt_m32201_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32201_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6175_IList_1_get_Item_m32197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MethodInfo_t582_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32197_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32197_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6175_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t582_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6175_IList_1_get_Item_m32197_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32197_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo IList_1_t6175_IList_1_set_Item_m32198_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32198_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32198_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6175_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6175_IList_1_set_Item_m32198_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32198_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6175_MethodInfos[] =
{
	&IList_1_IndexOf_m32199_MethodInfo,
	&IList_1_Insert_m32200_MethodInfo,
	&IList_1_RemoveAt_m32201_MethodInfo,
	&IList_1_get_Item_m32197_MethodInfo,
	&IList_1_set_Item_m32198_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6175_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6174_il2cpp_TypeInfo,
	&IEnumerable_1_t6176_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6175_0_0_0;
extern Il2CppType IList_1_t6175_1_0_0;
struct IList_1_t6175;
extern Il2CppGenericClass IList_1_t6175_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6175_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6175_MethodInfos/* methods */
	, IList_1_t6175_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6175_il2cpp_TypeInfo/* element_class */
	, IList_1_t6175_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6175_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6175_0_0_0/* byval_arg */
	, &IList_1_t6175_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6175_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6177_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo ICollection_1_get_Count_m32202_MethodInfo;
static PropertyInfo ICollection_1_t6177____Count_PropertyInfo = 
{
	&ICollection_1_t6177_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32202_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32203_MethodInfo;
static PropertyInfo ICollection_1_t6177____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6177_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32203_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6177_PropertyInfos[] =
{
	&ICollection_1_t6177____Count_PropertyInfo,
	&ICollection_1_t6177____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32202_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m32202_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32202_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32203_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32203_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32203_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t2052_0_0_0;
extern Il2CppType _MethodInfo_t2052_0_0_0;
static ParameterInfo ICollection_1_t6177_ICollection_1_Add_m32204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t2052_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32204_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Add(T)
MethodInfo ICollection_1_Add_m32204_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6177_ICollection_1_Add_m32204_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32204_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32205_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Clear()
MethodInfo ICollection_1_Clear_m32205_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32205_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t2052_0_0_0;
static ParameterInfo ICollection_1_t6177_ICollection_1_Contains_m32206_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t2052_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32206_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m32206_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6177_ICollection_1_Contains_m32206_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32206_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfoU5BU5D_t3618_0_0_0;
extern Il2CppType _MethodInfoU5BU5D_t3618_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6177_ICollection_1_CopyTo_m32207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfoU5BU5D_t3618_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32207_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32207_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6177_ICollection_1_CopyTo_m32207_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32207_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t2052_0_0_0;
static ParameterInfo ICollection_1_t6177_ICollection_1_Remove_m32208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t2052_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32208_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m32208_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6177_ICollection_1_Remove_m32208_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32208_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6177_MethodInfos[] =
{
	&ICollection_1_get_Count_m32202_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32203_MethodInfo,
	&ICollection_1_Add_m32204_MethodInfo,
	&ICollection_1_Clear_m32205_MethodInfo,
	&ICollection_1_Contains_m32206_MethodInfo,
	&ICollection_1_CopyTo_m32207_MethodInfo,
	&ICollection_1_Remove_m32208_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6179_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6177_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6179_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6177_0_0_0;
extern Il2CppType ICollection_1_t6177_1_0_0;
struct ICollection_1_t6177;
extern Il2CppGenericClass ICollection_1_t6177_GenericClass;
TypeInfo ICollection_1_t6177_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6177_MethodInfos/* methods */
	, ICollection_1_t6177_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6177_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6177_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6177_0_0_0/* byval_arg */
	, &ICollection_1_t6177_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6177_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>
extern Il2CppType IEnumerator_1_t4767_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32209_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32209_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6179_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4767_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32209_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6179_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32209_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6179_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6179_0_0_0;
extern Il2CppType IEnumerable_1_t6179_1_0_0;
struct IEnumerable_1_t6179;
extern Il2CppGenericClass IEnumerable_1_t6179_GenericClass;
TypeInfo IEnumerable_1_t6179_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6179_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6179_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6179_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6179_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6179_0_0_0/* byval_arg */
	, &IEnumerable_1_t6179_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6179_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4767_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo IEnumerator_1_get_Current_m32210_MethodInfo;
static PropertyInfo IEnumerator_1_t4767____Current_PropertyInfo = 
{
	&IEnumerator_1_t4767_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32210_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4767_PropertyInfos[] =
{
	&IEnumerator_1_t4767____Current_PropertyInfo,
	NULL
};
extern Il2CppType _MethodInfo_t2052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32210_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32210_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4767_il2cpp_TypeInfo/* declaring_type */
	, &_MethodInfo_t2052_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32210_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4767_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32210_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4767_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4767_0_0_0;
extern Il2CppType IEnumerator_1_t4767_1_0_0;
struct IEnumerator_1_t4767;
extern Il2CppGenericClass IEnumerator_1_t4767_GenericClass;
TypeInfo IEnumerator_1_t4767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4767_MethodInfos/* methods */
	, IEnumerator_1_t4767_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4767_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4767_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4767_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4767_0_0_0/* byval_arg */
	, &IEnumerator_1_t4767_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4767_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_377.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3348_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_377MethodDeclarations.h"

extern TypeInfo _MethodInfo_t2052_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18640_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_MethodInfo_t2052_m24615_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodInfo_t2052_m24615(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3348____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3348, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3348____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3348, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3348_FieldInfos[] =
{
	&InternalEnumerator_1_t3348____array_0_FieldInfo,
	&InternalEnumerator_1_t3348____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18637_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3348____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3348_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18637_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3348____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3348_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18640_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3348_PropertyInfos[] =
{
	&InternalEnumerator_1_t3348____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3348____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3348_InternalEnumerator_1__ctor_m18636_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18636_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18636_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3348_InternalEnumerator_1__ctor_m18636_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18636_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18637_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18637_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18637_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18638_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18638_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18638_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18639_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18639_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18639_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t2052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18640_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18640_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* declaring_type */
	, &_MethodInfo_t2052_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18640_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3348_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18636_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18637_MethodInfo,
	&InternalEnumerator_1_Dispose_m18638_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18639_MethodInfo,
	&InternalEnumerator_1_get_Current_m18640_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18639_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18638_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3348_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18637_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18639_MethodInfo,
	&InternalEnumerator_1_Dispose_m18638_MethodInfo,
	&InternalEnumerator_1_get_Current_m18640_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3348_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4767_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3348_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4767_il2cpp_TypeInfo, 7},
};
extern TypeInfo _MethodInfo_t2052_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3348_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18640_MethodInfo/* Method Usage */,
	&_MethodInfo_t2052_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_MethodInfo_t2052_m24615_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3348_0_0_0;
extern Il2CppType InternalEnumerator_1_t3348_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3348_GenericClass;
TypeInfo InternalEnumerator_1_t3348_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3348_MethodInfos/* methods */
	, InternalEnumerator_1_t3348_PropertyInfos/* properties */
	, InternalEnumerator_1_t3348_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3348_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3348_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3348_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3348_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3348_1_0_0/* this_arg */
	, InternalEnumerator_1_t3348_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3348_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3348_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3348)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6178_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo IList_1_get_Item_m32211_MethodInfo;
extern MethodInfo IList_1_set_Item_m32212_MethodInfo;
static PropertyInfo IList_1_t6178____Item_PropertyInfo = 
{
	&IList_1_t6178_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32211_MethodInfo/* get */
	, &IList_1_set_Item_m32212_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6178_PropertyInfos[] =
{
	&IList_1_t6178____Item_PropertyInfo,
	NULL
};
extern Il2CppType _MethodInfo_t2052_0_0_0;
static ParameterInfo IList_1_t6178_IList_1_IndexOf_m32213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t2052_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32213_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32213_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6178_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6178_IList_1_IndexOf_m32213_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32213_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _MethodInfo_t2052_0_0_0;
static ParameterInfo IList_1_t6178_IList_1_Insert_m32214_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t2052_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32214_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32214_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6178_IList_1_Insert_m32214_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32214_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6178_IList_1_RemoveAt_m32215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32215_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32215_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6178_IList_1_RemoveAt_m32215_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32215_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6178_IList_1_get_Item_m32211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType _MethodInfo_t2052_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32211_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32211_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6178_il2cpp_TypeInfo/* declaring_type */
	, &_MethodInfo_t2052_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6178_IList_1_get_Item_m32211_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32211_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _MethodInfo_t2052_0_0_0;
static ParameterInfo IList_1_t6178_IList_1_set_Item_m32212_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t2052_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32212_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32212_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6178_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6178_IList_1_set_Item_m32212_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32212_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6178_MethodInfos[] =
{
	&IList_1_IndexOf_m32213_MethodInfo,
	&IList_1_Insert_m32214_MethodInfo,
	&IList_1_RemoveAt_m32215_MethodInfo,
	&IList_1_get_Item_m32211_MethodInfo,
	&IList_1_set_Item_m32212_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6178_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6177_il2cpp_TypeInfo,
	&IEnumerable_1_t6179_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6178_0_0_0;
extern Il2CppType IList_1_t6178_1_0_0;
struct IList_1_t6178;
extern Il2CppGenericClass IList_1_t6178_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6178_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6178_MethodInfos/* methods */
	, IList_1_t6178_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6178_il2cpp_TypeInfo/* element_class */
	, IList_1_t6178_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6178_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6178_0_0_0/* byval_arg */
	, &IList_1_t6178_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6178_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6180_il2cpp_TypeInfo;

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>
extern MethodInfo ICollection_1_get_Count_m32216_MethodInfo;
static PropertyInfo ICollection_1_t6180____Count_PropertyInfo = 
{
	&ICollection_1_t6180_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32216_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32217_MethodInfo;
static PropertyInfo ICollection_1_t6180____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6180_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32217_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6180_PropertyInfos[] =
{
	&ICollection_1_t6180____Count_PropertyInfo,
	&ICollection_1_t6180____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32216_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_Count()
MethodInfo ICollection_1_get_Count_m32216_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32216_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32217_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32217_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32217_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t676_0_0_0;
extern Il2CppType MethodBase_t676_0_0_0;
static ParameterInfo ICollection_1_t6180_ICollection_1_Add_m32218_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t676_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32218_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Add(T)
MethodInfo ICollection_1_Add_m32218_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6180_ICollection_1_Add_m32218_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32218_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32219_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Clear()
MethodInfo ICollection_1_Clear_m32219_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32219_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t676_0_0_0;
static ParameterInfo ICollection_1_t6180_ICollection_1_Contains_m32220_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t676_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32220_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Contains(T)
MethodInfo ICollection_1_Contains_m32220_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6180_ICollection_1_Contains_m32220_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32220_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBaseU5BU5D_t1379_0_0_0;
extern Il2CppType MethodBaseU5BU5D_t1379_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6180_ICollection_1_CopyTo_m32221_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodBaseU5BU5D_t1379_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32221_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32221_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6180_ICollection_1_CopyTo_m32221_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32221_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t676_0_0_0;
static ParameterInfo ICollection_1_t6180_ICollection_1_Remove_m32222_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t676_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32222_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Remove(T)
MethodInfo ICollection_1_Remove_m32222_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6180_ICollection_1_Remove_m32222_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32222_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6180_MethodInfos[] =
{
	&ICollection_1_get_Count_m32216_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32217_MethodInfo,
	&ICollection_1_Add_m32218_MethodInfo,
	&ICollection_1_Clear_m32219_MethodInfo,
	&ICollection_1_Contains_m32220_MethodInfo,
	&ICollection_1_CopyTo_m32221_MethodInfo,
	&ICollection_1_Remove_m32222_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6182_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6180_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6182_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6180_0_0_0;
extern Il2CppType ICollection_1_t6180_1_0_0;
struct ICollection_1_t6180;
extern Il2CppGenericClass ICollection_1_t6180_GenericClass;
TypeInfo ICollection_1_t6180_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6180_MethodInfos/* methods */
	, ICollection_1_t6180_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6180_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6180_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6180_0_0_0/* byval_arg */
	, &ICollection_1_t6180_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6180_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>
extern Il2CppType IEnumerator_1_t4768_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32223_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32223_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6182_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4768_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32223_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6182_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32223_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6182_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6182_0_0_0;
extern Il2CppType IEnumerable_1_t6182_1_0_0;
struct IEnumerable_1_t6182;
extern Il2CppGenericClass IEnumerable_1_t6182_GenericClass;
TypeInfo IEnumerable_1_t6182_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6182_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6182_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6182_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6182_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6182_0_0_0/* byval_arg */
	, &IEnumerable_1_t6182_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6182_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4768_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>
extern MethodInfo IEnumerator_1_get_Current_m32224_MethodInfo;
static PropertyInfo IEnumerator_1_t4768____Current_PropertyInfo = 
{
	&IEnumerator_1_t4768_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32224_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4768_PropertyInfos[] =
{
	&IEnumerator_1_t4768____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodBase_t676_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32224_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32224_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4768_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t676_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32224_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4768_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32224_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4768_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4768_0_0_0;
extern Il2CppType IEnumerator_1_t4768_1_0_0;
struct IEnumerator_1_t4768;
extern Il2CppGenericClass IEnumerator_1_t4768_GenericClass;
TypeInfo IEnumerator_1_t4768_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4768_MethodInfos/* methods */
	, IEnumerator_1_t4768_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4768_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4768_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4768_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4768_0_0_0/* byval_arg */
	, &IEnumerator_1_t4768_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4768_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_378.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3349_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_378MethodDeclarations.h"

extern TypeInfo MethodBase_t676_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18645_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodBase_t676_m24626_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodBase>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodBase_t676_m24626(__this, p0, method) (MethodBase_t676 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3349____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3349, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3349____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3349, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3349_FieldInfos[] =
{
	&InternalEnumerator_1_t3349____array_0_FieldInfo,
	&InternalEnumerator_1_t3349____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18642_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3349____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3349_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18642_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3349____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3349_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18645_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3349_PropertyInfos[] =
{
	&InternalEnumerator_1_t3349____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3349____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3349_InternalEnumerator_1__ctor_m18641_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18641_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18641_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3349_InternalEnumerator_1__ctor_m18641_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18641_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18642_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18642_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18642_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18643_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18643_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18643_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18644_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18644_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18644_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t676_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18645_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18645_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t676_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18645_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3349_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18641_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18642_MethodInfo,
	&InternalEnumerator_1_Dispose_m18643_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18644_MethodInfo,
	&InternalEnumerator_1_get_Current_m18645_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18644_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18643_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3349_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18642_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18644_MethodInfo,
	&InternalEnumerator_1_Dispose_m18643_MethodInfo,
	&InternalEnumerator_1_get_Current_m18645_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3349_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4768_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3349_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4768_il2cpp_TypeInfo, 7},
};
extern TypeInfo MethodBase_t676_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3349_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18645_MethodInfo/* Method Usage */,
	&MethodBase_t676_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMethodBase_t676_m24626_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3349_0_0_0;
extern Il2CppType InternalEnumerator_1_t3349_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3349_GenericClass;
TypeInfo InternalEnumerator_1_t3349_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3349_MethodInfos/* methods */
	, InternalEnumerator_1_t3349_PropertyInfos/* properties */
	, InternalEnumerator_1_t3349_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3349_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3349_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3349_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3349_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3349_1_0_0/* this_arg */
	, InternalEnumerator_1_t3349_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3349_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3349_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3349)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6181_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodBase>
extern MethodInfo IList_1_get_Item_m32225_MethodInfo;
extern MethodInfo IList_1_set_Item_m32226_MethodInfo;
static PropertyInfo IList_1_t6181____Item_PropertyInfo = 
{
	&IList_1_t6181_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32225_MethodInfo/* get */
	, &IList_1_set_Item_m32226_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6181_PropertyInfos[] =
{
	&IList_1_t6181____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodBase_t676_0_0_0;
static ParameterInfo IList_1_t6181_IList_1_IndexOf_m32227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t676_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32227_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodBase>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32227_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6181_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6181_IList_1_IndexOf_m32227_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32227_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodBase_t676_0_0_0;
static ParameterInfo IList_1_t6181_IList_1_Insert_m32228_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodBase_t676_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32228_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32228_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6181_IList_1_Insert_m32228_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32228_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6181_IList_1_RemoveAt_m32229_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32229_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32229_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6181_IList_1_RemoveAt_m32229_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32229_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6181_IList_1_get_Item_m32225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MethodBase_t676_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32225_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodBase>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32225_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6181_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t676_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6181_IList_1_get_Item_m32225_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32225_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodBase_t676_0_0_0;
static ParameterInfo IList_1_t6181_IList_1_set_Item_m32226_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodBase_t676_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32226_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32226_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6181_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6181_IList_1_set_Item_m32226_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32226_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6181_MethodInfos[] =
{
	&IList_1_IndexOf_m32227_MethodInfo,
	&IList_1_Insert_m32228_MethodInfo,
	&IList_1_RemoveAt_m32229_MethodInfo,
	&IList_1_get_Item_m32225_MethodInfo,
	&IList_1_set_Item_m32226_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6181_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6180_il2cpp_TypeInfo,
	&IEnumerable_1_t6182_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6181_0_0_0;
extern Il2CppType IList_1_t6181_1_0_0;
struct IList_1_t6181;
extern Il2CppGenericClass IList_1_t6181_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6181_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6181_MethodInfos/* methods */
	, IList_1_t6181_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6181_il2cpp_TypeInfo/* element_class */
	, IList_1_t6181_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6181_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6181_0_0_0/* byval_arg */
	, &IList_1_t6181_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6181_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6183_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo ICollection_1_get_Count_m32230_MethodInfo;
static PropertyInfo ICollection_1_t6183____Count_PropertyInfo = 
{
	&ICollection_1_t6183_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32230_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32231_MethodInfo;
static PropertyInfo ICollection_1_t6183____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6183_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32231_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6183_PropertyInfos[] =
{
	&ICollection_1_t6183____Count_PropertyInfo,
	&ICollection_1_t6183____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32230_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_Count()
MethodInfo ICollection_1_get_Count_m32230_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32230_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32231_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32231_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32231_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t2047_0_0_0;
extern Il2CppType _MethodBase_t2047_0_0_0;
static ParameterInfo ICollection_1_t6183_ICollection_1_Add_m32232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t2047_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32232_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Add(T)
MethodInfo ICollection_1_Add_m32232_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6183_ICollection_1_Add_m32232_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32232_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32233_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Clear()
MethodInfo ICollection_1_Clear_m32233_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32233_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t2047_0_0_0;
static ParameterInfo ICollection_1_t6183_ICollection_1_Contains_m32234_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t2047_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32234_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Contains(T)
MethodInfo ICollection_1_Contains_m32234_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6183_ICollection_1_Contains_m32234_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32234_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBaseU5BU5D_t3619_0_0_0;
extern Il2CppType _MethodBaseU5BU5D_t3619_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6183_ICollection_1_CopyTo_m32235_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBaseU5BU5D_t3619_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32235_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32235_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6183_ICollection_1_CopyTo_m32235_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32235_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t2047_0_0_0;
static ParameterInfo ICollection_1_t6183_ICollection_1_Remove_m32236_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t2047_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32236_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Remove(T)
MethodInfo ICollection_1_Remove_m32236_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6183_ICollection_1_Remove_m32236_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32236_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6183_MethodInfos[] =
{
	&ICollection_1_get_Count_m32230_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32231_MethodInfo,
	&ICollection_1_Add_m32232_MethodInfo,
	&ICollection_1_Clear_m32233_MethodInfo,
	&ICollection_1_Contains_m32234_MethodInfo,
	&ICollection_1_CopyTo_m32235_MethodInfo,
	&ICollection_1_Remove_m32236_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6185_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6183_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6185_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6183_0_0_0;
extern Il2CppType ICollection_1_t6183_1_0_0;
struct ICollection_1_t6183;
extern Il2CppGenericClass ICollection_1_t6183_GenericClass;
TypeInfo ICollection_1_t6183_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6183_MethodInfos/* methods */
	, ICollection_1_t6183_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6183_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6183_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6183_0_0_0/* byval_arg */
	, &ICollection_1_t6183_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6183_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType IEnumerator_1_t4770_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32237_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32237_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6185_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4770_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32237_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6185_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32237_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6185_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6185_0_0_0;
extern Il2CppType IEnumerable_1_t6185_1_0_0;
struct IEnumerable_1_t6185;
extern Il2CppGenericClass IEnumerable_1_t6185_GenericClass;
TypeInfo IEnumerable_1_t6185_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6185_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6185_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6185_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6185_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6185_0_0_0/* byval_arg */
	, &IEnumerable_1_t6185_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6185_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4770_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo IEnumerator_1_get_Current_m32238_MethodInfo;
static PropertyInfo IEnumerator_1_t4770____Current_PropertyInfo = 
{
	&IEnumerator_1_t4770_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32238_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4770_PropertyInfos[] =
{
	&IEnumerator_1_t4770____Current_PropertyInfo,
	NULL
};
extern Il2CppType _MethodBase_t2047_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32238_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32238_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4770_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBase_t2047_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32238_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4770_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32238_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4770_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4770_0_0_0;
extern Il2CppType IEnumerator_1_t4770_1_0_0;
struct IEnumerator_1_t4770;
extern Il2CppGenericClass IEnumerator_1_t4770_GenericClass;
TypeInfo IEnumerator_1_t4770_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4770_MethodInfos/* methods */
	, IEnumerator_1_t4770_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4770_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4770_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4770_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4770_0_0_0/* byval_arg */
	, &IEnumerator_1_t4770_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4770_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_379.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3350_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_379MethodDeclarations.h"

extern TypeInfo _MethodBase_t2047_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18650_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_MethodBase_t2047_m24637_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBase>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodBase_t2047_m24637(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3350____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3350, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3350____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3350, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3350_FieldInfos[] =
{
	&InternalEnumerator_1_t3350____array_0_FieldInfo,
	&InternalEnumerator_1_t3350____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18647_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3350____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3350_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18647_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3350____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3350_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18650_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3350_PropertyInfos[] =
{
	&InternalEnumerator_1_t3350____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3350____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3350_InternalEnumerator_1__ctor_m18646_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18646_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18646_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3350_InternalEnumerator_1__ctor_m18646_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18646_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18647_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18647_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18647_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18648_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18648_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18648_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18649_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18649_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18649_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t2047_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18650_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18650_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBase_t2047_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18650_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3350_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18646_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18647_MethodInfo,
	&InternalEnumerator_1_Dispose_m18648_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18649_MethodInfo,
	&InternalEnumerator_1_get_Current_m18650_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18649_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18648_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3350_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18647_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18649_MethodInfo,
	&InternalEnumerator_1_Dispose_m18648_MethodInfo,
	&InternalEnumerator_1_get_Current_m18650_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3350_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4770_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3350_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4770_il2cpp_TypeInfo, 7},
};
extern TypeInfo _MethodBase_t2047_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3350_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18650_MethodInfo/* Method Usage */,
	&_MethodBase_t2047_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_MethodBase_t2047_m24637_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3350_0_0_0;
extern Il2CppType InternalEnumerator_1_t3350_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3350_GenericClass;
TypeInfo InternalEnumerator_1_t3350_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3350_MethodInfos/* methods */
	, InternalEnumerator_1_t3350_PropertyInfos/* properties */
	, InternalEnumerator_1_t3350_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3350_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3350_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3350_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3350_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3350_1_0_0/* this_arg */
	, InternalEnumerator_1_t3350_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3350_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3350_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3350)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6184_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo IList_1_get_Item_m32239_MethodInfo;
extern MethodInfo IList_1_set_Item_m32240_MethodInfo;
static PropertyInfo IList_1_t6184____Item_PropertyInfo = 
{
	&IList_1_t6184_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32239_MethodInfo/* get */
	, &IList_1_set_Item_m32240_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6184_PropertyInfos[] =
{
	&IList_1_t6184____Item_PropertyInfo,
	NULL
};
extern Il2CppType _MethodBase_t2047_0_0_0;
static ParameterInfo IList_1_t6184_IList_1_IndexOf_m32241_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t2047_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32241_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32241_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6184_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6184_IList_1_IndexOf_m32241_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32241_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _MethodBase_t2047_0_0_0;
static ParameterInfo IList_1_t6184_IList_1_Insert_m32242_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t2047_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32242_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32242_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6184_IList_1_Insert_m32242_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32242_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6184_IList_1_RemoveAt_m32243_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32243_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32243_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6184_IList_1_RemoveAt_m32243_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32243_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6184_IList_1_get_Item_m32239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType _MethodBase_t2047_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32239_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32239_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6184_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBase_t2047_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6184_IList_1_get_Item_m32239_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32239_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _MethodBase_t2047_0_0_0;
static ParameterInfo IList_1_t6184_IList_1_set_Item_m32240_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t2047_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32240_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32240_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6184_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6184_IList_1_set_Item_m32240_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32240_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6184_MethodInfos[] =
{
	&IList_1_IndexOf_m32241_MethodInfo,
	&IList_1_Insert_m32242_MethodInfo,
	&IList_1_RemoveAt_m32243_MethodInfo,
	&IList_1_get_Item_m32239_MethodInfo,
	&IList_1_set_Item_m32240_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6184_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6183_il2cpp_TypeInfo,
	&IEnumerable_1_t6185_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6184_0_0_0;
extern Il2CppType IList_1_t6184_1_0_0;
struct IList_1_t6184;
extern Il2CppGenericClass IList_1_t6184_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6184_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6184_MethodInfos/* methods */
	, IList_1_t6184_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6184_il2cpp_TypeInfo/* element_class */
	, IList_1_t6184_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6184_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6184_0_0_0/* byval_arg */
	, &IList_1_t6184_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6184_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4772_il2cpp_TypeInfo;

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>
extern MethodInfo IEnumerator_1_get_Current_m32244_MethodInfo;
static PropertyInfo IEnumerator_1_t4772____Current_PropertyInfo = 
{
	&IEnumerator_1_t4772_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32244_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4772_PropertyInfos[] =
{
	&IEnumerator_1_t4772____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorInfo_t701_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32244_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32244_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4772_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t701_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32244_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4772_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32244_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4772_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4772_0_0_0;
extern Il2CppType IEnumerator_1_t4772_1_0_0;
struct IEnumerator_1_t4772;
extern Il2CppGenericClass IEnumerator_1_t4772_GenericClass;
TypeInfo IEnumerator_1_t4772_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4772_MethodInfos/* methods */
	, IEnumerator_1_t4772_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4772_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4772_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4772_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4772_0_0_0/* byval_arg */
	, &IEnumerator_1_t4772_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4772_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_380.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3351_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_380MethodDeclarations.h"

extern TypeInfo ConstructorInfo_t701_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18655_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConstructorInfo_t701_m24648_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorInfo_t701_m24648(__this, p0, method) (ConstructorInfo_t701 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3351____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3351, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3351____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3351, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3351_FieldInfos[] =
{
	&InternalEnumerator_1_t3351____array_0_FieldInfo,
	&InternalEnumerator_1_t3351____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18652_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3351____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3351_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18652_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3351____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3351_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18655_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3351_PropertyInfos[] =
{
	&InternalEnumerator_1_t3351____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3351____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3351_InternalEnumerator_1__ctor_m18651_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18651_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18651_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3351_InternalEnumerator_1__ctor_m18651_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18651_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18652_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18652_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18652_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18653_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18653_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18653_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18654_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18654_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18654_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t701_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18655_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18655_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t701_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18655_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3351_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18651_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18652_MethodInfo,
	&InternalEnumerator_1_Dispose_m18653_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18654_MethodInfo,
	&InternalEnumerator_1_get_Current_m18655_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18654_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18653_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3351_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18652_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18654_MethodInfo,
	&InternalEnumerator_1_Dispose_m18653_MethodInfo,
	&InternalEnumerator_1_get_Current_m18655_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3351_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4772_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3351_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4772_il2cpp_TypeInfo, 7},
};
extern TypeInfo ConstructorInfo_t701_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3351_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18655_MethodInfo/* Method Usage */,
	&ConstructorInfo_t701_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisConstructorInfo_t701_m24648_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3351_0_0_0;
extern Il2CppType InternalEnumerator_1_t3351_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3351_GenericClass;
TypeInfo InternalEnumerator_1_t3351_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3351_MethodInfos/* methods */
	, InternalEnumerator_1_t3351_PropertyInfos/* properties */
	, InternalEnumerator_1_t3351_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3351_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3351_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3351_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3351_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3351_1_0_0/* this_arg */
	, InternalEnumerator_1_t3351_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3351_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3351_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3351)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6186_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>
extern MethodInfo ICollection_1_get_Count_m32245_MethodInfo;
static PropertyInfo ICollection_1_t6186____Count_PropertyInfo = 
{
	&ICollection_1_t6186_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32245_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32246_MethodInfo;
static PropertyInfo ICollection_1_t6186____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6186_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32246_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6186_PropertyInfos[] =
{
	&ICollection_1_t6186____Count_PropertyInfo,
	&ICollection_1_t6186____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32245_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m32245_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32245_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32246_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32246_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32246_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t701_0_0_0;
extern Il2CppType ConstructorInfo_t701_0_0_0;
static ParameterInfo ICollection_1_t6186_ICollection_1_Add_m32247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t701_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32247_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Add(T)
MethodInfo ICollection_1_Add_m32247_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6186_ICollection_1_Add_m32247_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32247_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32248_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Clear()
MethodInfo ICollection_1_Clear_m32248_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32248_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t701_0_0_0;
static ParameterInfo ICollection_1_t6186_ICollection_1_Contains_m32249_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t701_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32249_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m32249_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6186_ICollection_1_Contains_m32249_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32249_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfoU5BU5D_t1165_0_0_0;
extern Il2CppType ConstructorInfoU5BU5D_t1165_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6186_ICollection_1_CopyTo_m32250_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfoU5BU5D_t1165_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32250_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32250_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6186_ICollection_1_CopyTo_m32250_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32250_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t701_0_0_0;
static ParameterInfo ICollection_1_t6186_ICollection_1_Remove_m32251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t701_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32251_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m32251_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6186_ICollection_1_Remove_m32251_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32251_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6186_MethodInfos[] =
{
	&ICollection_1_get_Count_m32245_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32246_MethodInfo,
	&ICollection_1_Add_m32247_MethodInfo,
	&ICollection_1_Clear_m32248_MethodInfo,
	&ICollection_1_Contains_m32249_MethodInfo,
	&ICollection_1_CopyTo_m32250_MethodInfo,
	&ICollection_1_Remove_m32251_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6188_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6186_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6188_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6186_0_0_0;
extern Il2CppType ICollection_1_t6186_1_0_0;
struct ICollection_1_t6186;
extern Il2CppGenericClass ICollection_1_t6186_GenericClass;
TypeInfo ICollection_1_t6186_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6186_MethodInfos/* methods */
	, ICollection_1_t6186_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6186_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6186_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6186_0_0_0/* byval_arg */
	, &ICollection_1_t6186_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6186_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
extern Il2CppType IEnumerator_1_t4772_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32252_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32252_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6188_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4772_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32252_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6188_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32252_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6188_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6188_0_0_0;
extern Il2CppType IEnumerable_1_t6188_1_0_0;
struct IEnumerable_1_t6188;
extern Il2CppGenericClass IEnumerable_1_t6188_GenericClass;
TypeInfo IEnumerable_1_t6188_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6188_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6188_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6188_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6188_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6188_0_0_0/* byval_arg */
	, &IEnumerable_1_t6188_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6188_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6187_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>
extern MethodInfo IList_1_get_Item_m32253_MethodInfo;
extern MethodInfo IList_1_set_Item_m32254_MethodInfo;
static PropertyInfo IList_1_t6187____Item_PropertyInfo = 
{
	&IList_1_t6187_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32253_MethodInfo/* get */
	, &IList_1_set_Item_m32254_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6187_PropertyInfos[] =
{
	&IList_1_t6187____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorInfo_t701_0_0_0;
static ParameterInfo IList_1_t6187_IList_1_IndexOf_m32255_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t701_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32255_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32255_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6187_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6187_IList_1_IndexOf_m32255_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32255_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ConstructorInfo_t701_0_0_0;
static ParameterInfo IList_1_t6187_IList_1_Insert_m32256_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t701_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32256_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32256_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6187_IList_1_Insert_m32256_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32256_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6187_IList_1_RemoveAt_m32257_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32257_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32257_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6187_IList_1_RemoveAt_m32257_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32257_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6187_IList_1_get_Item_m32253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ConstructorInfo_t701_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32253_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32253_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6187_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t701_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6187_IList_1_get_Item_m32253_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32253_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ConstructorInfo_t701_0_0_0;
static ParameterInfo IList_1_t6187_IList_1_set_Item_m32254_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t701_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32254_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32254_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6187_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6187_IList_1_set_Item_m32254_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32254_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6187_MethodInfos[] =
{
	&IList_1_IndexOf_m32255_MethodInfo,
	&IList_1_Insert_m32256_MethodInfo,
	&IList_1_RemoveAt_m32257_MethodInfo,
	&IList_1_get_Item_m32253_MethodInfo,
	&IList_1_set_Item_m32254_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6187_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6186_il2cpp_TypeInfo,
	&IEnumerable_1_t6188_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6187_0_0_0;
extern Il2CppType IList_1_t6187_1_0_0;
struct IList_1_t6187;
extern Il2CppGenericClass IList_1_t6187_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6187_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6187_MethodInfos/* methods */
	, IList_1_t6187_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6187_il2cpp_TypeInfo/* element_class */
	, IList_1_t6187_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6187_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6187_0_0_0/* byval_arg */
	, &IList_1_t6187_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6187_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6189_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo ICollection_1_get_Count_m32258_MethodInfo;
static PropertyInfo ICollection_1_t6189____Count_PropertyInfo = 
{
	&ICollection_1_t6189_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32258_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32259_MethodInfo;
static PropertyInfo ICollection_1_t6189____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6189_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32259_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6189_PropertyInfos[] =
{
	&ICollection_1_t6189____Count_PropertyInfo,
	&ICollection_1_t6189____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32258_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m32258_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32258_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32259_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32259_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32259_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
static ParameterInfo ICollection_1_t6189_ICollection_1_Add_m32260_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2046_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32260_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Add(T)
MethodInfo ICollection_1_Add_m32260_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6189_ICollection_1_Add_m32260_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32260_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32261_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Clear()
MethodInfo ICollection_1_Clear_m32261_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32261_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
static ParameterInfo ICollection_1_t6189_ICollection_1_Contains_m32262_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2046_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32262_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m32262_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6189_ICollection_1_Contains_m32262_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32262_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfoU5BU5D_t3620_0_0_0;
extern Il2CppType _ConstructorInfoU5BU5D_t3620_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6189_ICollection_1_CopyTo_m32263_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfoU5BU5D_t3620_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32263_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32263_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6189_ICollection_1_CopyTo_m32263_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32263_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
static ParameterInfo ICollection_1_t6189_ICollection_1_Remove_m32264_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2046_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32264_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m32264_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6189_ICollection_1_Remove_m32264_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32264_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6189_MethodInfos[] =
{
	&ICollection_1_get_Count_m32258_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32259_MethodInfo,
	&ICollection_1_Add_m32260_MethodInfo,
	&ICollection_1_Clear_m32261_MethodInfo,
	&ICollection_1_Contains_m32262_MethodInfo,
	&ICollection_1_CopyTo_m32263_MethodInfo,
	&ICollection_1_Remove_m32264_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6191_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6189_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6191_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6189_0_0_0;
extern Il2CppType ICollection_1_t6189_1_0_0;
struct ICollection_1_t6189;
extern Il2CppGenericClass ICollection_1_t6189_GenericClass;
TypeInfo ICollection_1_t6189_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6189_MethodInfos/* methods */
	, ICollection_1_t6189_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6189_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6189_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6189_0_0_0/* byval_arg */
	, &ICollection_1_t6189_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6189_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType IEnumerator_1_t4774_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32265_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32265_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6191_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4774_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32265_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6191_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32265_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6191_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6191_0_0_0;
extern Il2CppType IEnumerable_1_t6191_1_0_0;
struct IEnumerable_1_t6191;
extern Il2CppGenericClass IEnumerable_1_t6191_GenericClass;
TypeInfo IEnumerable_1_t6191_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6191_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6191_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6191_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6191_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6191_0_0_0/* byval_arg */
	, &IEnumerable_1_t6191_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6191_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4774_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo IEnumerator_1_get_Current_m32266_MethodInfo;
static PropertyInfo IEnumerator_1_t4774____Current_PropertyInfo = 
{
	&IEnumerator_1_t4774_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32266_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4774_PropertyInfos[] =
{
	&IEnumerator_1_t4774____Current_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32266_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32266_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4774_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t2046_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32266_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4774_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32266_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4774_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4774_0_0_0;
extern Il2CppType IEnumerator_1_t4774_1_0_0;
struct IEnumerator_1_t4774;
extern Il2CppGenericClass IEnumerator_1_t4774_GenericClass;
TypeInfo IEnumerator_1_t4774_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4774_MethodInfos/* methods */
	, IEnumerator_1_t4774_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4774_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4774_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4774_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4774_0_0_0/* byval_arg */
	, &IEnumerator_1_t4774_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4774_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_381.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3352_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_381MethodDeclarations.h"

extern TypeInfo _ConstructorInfo_t2046_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18660_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_ConstructorInfo_t2046_m24659_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ConstructorInfo_t2046_m24659(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3352____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3352, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3352____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3352, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3352_FieldInfos[] =
{
	&InternalEnumerator_1_t3352____array_0_FieldInfo,
	&InternalEnumerator_1_t3352____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18657_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3352____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3352_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18657_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3352____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3352_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18660_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3352_PropertyInfos[] =
{
	&InternalEnumerator_1_t3352____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3352____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3352_InternalEnumerator_1__ctor_m18656_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18656_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18656_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3352_InternalEnumerator_1__ctor_m18656_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18656_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18657_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18657_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18657_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18658_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18658_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18658_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18659_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18659_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18659_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18660_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18660_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t2046_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18660_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3352_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18656_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18657_MethodInfo,
	&InternalEnumerator_1_Dispose_m18658_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18659_MethodInfo,
	&InternalEnumerator_1_get_Current_m18660_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18659_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18658_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3352_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18657_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18659_MethodInfo,
	&InternalEnumerator_1_Dispose_m18658_MethodInfo,
	&InternalEnumerator_1_get_Current_m18660_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3352_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4774_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3352_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4774_il2cpp_TypeInfo, 7},
};
extern TypeInfo _ConstructorInfo_t2046_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3352_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18660_MethodInfo/* Method Usage */,
	&_ConstructorInfo_t2046_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_ConstructorInfo_t2046_m24659_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3352_0_0_0;
extern Il2CppType InternalEnumerator_1_t3352_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3352_GenericClass;
TypeInfo InternalEnumerator_1_t3352_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3352_MethodInfos/* methods */
	, InternalEnumerator_1_t3352_PropertyInfos/* properties */
	, InternalEnumerator_1_t3352_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3352_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3352_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3352_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3352_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3352_1_0_0/* this_arg */
	, InternalEnumerator_1_t3352_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3352_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3352_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3352)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6190_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo IList_1_get_Item_m32267_MethodInfo;
extern MethodInfo IList_1_set_Item_m32268_MethodInfo;
static PropertyInfo IList_1_t6190____Item_PropertyInfo = 
{
	&IList_1_t6190_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32267_MethodInfo/* get */
	, &IList_1_set_Item_m32268_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6190_PropertyInfos[] =
{
	&IList_1_t6190____Item_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
static ParameterInfo IList_1_t6190_IList_1_IndexOf_m32269_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2046_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32269_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32269_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6190_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6190_IList_1_IndexOf_m32269_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32269_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
static ParameterInfo IList_1_t6190_IList_1_Insert_m32270_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2046_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32270_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32270_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6190_IList_1_Insert_m32270_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32270_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6190_IList_1_RemoveAt_m32271_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32271_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32271_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6190_IList_1_RemoveAt_m32271_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32271_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6190_IList_1_get_Item_m32267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32267_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32267_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6190_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t2046_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6190_IList_1_get_Item_m32267_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32267_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _ConstructorInfo_t2046_0_0_0;
static ParameterInfo IList_1_t6190_IList_1_set_Item_m32268_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t2046_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32268_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32268_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6190_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6190_IList_1_set_Item_m32268_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32268_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6190_MethodInfos[] =
{
	&IList_1_IndexOf_m32269_MethodInfo,
	&IList_1_Insert_m32270_MethodInfo,
	&IList_1_RemoveAt_m32271_MethodInfo,
	&IList_1_get_Item_m32267_MethodInfo,
	&IList_1_set_Item_m32268_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6190_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6189_il2cpp_TypeInfo,
	&IEnumerable_1_t6191_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6190_0_0_0;
extern Il2CppType IList_1_t6190_1_0_0;
struct IList_1_t6190;
extern Il2CppGenericClass IList_1_t6190_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6190_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6190_MethodInfos/* methods */
	, IList_1_t6190_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6190_il2cpp_TypeInfo/* element_class */
	, IList_1_t6190_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6190_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6190_0_0_0/* byval_arg */
	, &IList_1_t6190_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6190_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4776_il2cpp_TypeInfo;

// System.MonoType
#include "mscorlib_System_MonoType.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoType>
extern MethodInfo IEnumerator_1_get_Current_m32272_MethodInfo;
static PropertyInfo IEnumerator_1_t4776____Current_PropertyInfo = 
{
	&IEnumerator_1_t4776_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32272_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4776_PropertyInfos[] =
{
	&IEnumerator_1_t4776____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t1694_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32272_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32272_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4776_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t1694_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32272_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4776_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32272_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4776_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4776_0_0_0;
extern Il2CppType IEnumerator_1_t4776_1_0_0;
struct IEnumerator_1_t4776;
extern Il2CppGenericClass IEnumerator_1_t4776_GenericClass;
TypeInfo IEnumerator_1_t4776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4776_MethodInfos/* methods */
	, IEnumerator_1_t4776_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4776_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4776_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4776_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4776_0_0_0/* byval_arg */
	, &IEnumerator_1_t4776_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4776_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_382.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3353_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_382MethodDeclarations.h"

extern TypeInfo MonoType_t1694_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18665_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoType_t1694_m24670_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoType_t1694_m24670(__this, p0, method) (MonoType_t1694 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3353____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3353, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3353____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3353, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3353_FieldInfos[] =
{
	&InternalEnumerator_1_t3353____array_0_FieldInfo,
	&InternalEnumerator_1_t3353____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18662_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3353____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3353_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18662_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3353____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3353_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3353_PropertyInfos[] =
{
	&InternalEnumerator_1_t3353____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3353____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3353_InternalEnumerator_1__ctor_m18661_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18661_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18661_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3353_InternalEnumerator_1__ctor_m18661_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18661_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18662_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18662_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18662_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18663_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18663_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18663_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18664_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18664_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18664_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t1694_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18665_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18665_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t1694_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18665_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3353_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18661_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18662_MethodInfo,
	&InternalEnumerator_1_Dispose_m18663_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18664_MethodInfo,
	&InternalEnumerator_1_get_Current_m18665_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18664_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18663_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3353_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18662_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18664_MethodInfo,
	&InternalEnumerator_1_Dispose_m18663_MethodInfo,
	&InternalEnumerator_1_get_Current_m18665_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3353_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4776_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3353_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4776_il2cpp_TypeInfo, 7},
};
extern TypeInfo MonoType_t1694_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3353_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18665_MethodInfo/* Method Usage */,
	&MonoType_t1694_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoType_t1694_m24670_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3353_0_0_0;
extern Il2CppType InternalEnumerator_1_t3353_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3353_GenericClass;
TypeInfo InternalEnumerator_1_t3353_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3353_MethodInfos/* methods */
	, InternalEnumerator_1_t3353_PropertyInfos/* properties */
	, InternalEnumerator_1_t3353_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3353_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3353_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3353_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3353_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3353_1_0_0/* this_arg */
	, InternalEnumerator_1_t3353_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3353_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3353_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3353)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6192_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoType>
extern MethodInfo ICollection_1_get_Count_m32273_MethodInfo;
static PropertyInfo ICollection_1_t6192____Count_PropertyInfo = 
{
	&ICollection_1_t6192_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32273_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32274_MethodInfo;
static PropertyInfo ICollection_1_t6192____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6192_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32274_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6192_PropertyInfos[] =
{
	&ICollection_1_t6192____Count_PropertyInfo,
	&ICollection_1_t6192____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32273_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
MethodInfo ICollection_1_get_Count_m32273_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32273_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32274_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32274_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32274_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t1694_0_0_0;
extern Il2CppType MonoType_t1694_0_0_0;
static ParameterInfo ICollection_1_t6192_ICollection_1_Add_m32275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t1694_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32275_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
MethodInfo ICollection_1_Add_m32275_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6192_ICollection_1_Add_m32275_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32275_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32276_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
MethodInfo ICollection_1_Clear_m32276_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32276_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t1694_0_0_0;
static ParameterInfo ICollection_1_t6192_ICollection_1_Contains_m32277_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t1694_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32277_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
MethodInfo ICollection_1_Contains_m32277_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6192_ICollection_1_Contains_m32277_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32277_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTypeU5BU5D_t2094_0_0_0;
extern Il2CppType MonoTypeU5BU5D_t2094_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6192_ICollection_1_CopyTo_m32278_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTypeU5BU5D_t2094_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32278_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32278_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6192_ICollection_1_CopyTo_m32278_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32278_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t1694_0_0_0;
static ParameterInfo ICollection_1_t6192_ICollection_1_Remove_m32279_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t1694_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32279_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
MethodInfo ICollection_1_Remove_m32279_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6192_ICollection_1_Remove_m32279_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32279_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6192_MethodInfos[] =
{
	&ICollection_1_get_Count_m32273_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32274_MethodInfo,
	&ICollection_1_Add_m32275_MethodInfo,
	&ICollection_1_Clear_m32276_MethodInfo,
	&ICollection_1_Contains_m32277_MethodInfo,
	&ICollection_1_CopyTo_m32278_MethodInfo,
	&ICollection_1_Remove_m32279_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6194_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6192_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6194_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6192_0_0_0;
extern Il2CppType ICollection_1_t6192_1_0_0;
struct ICollection_1_t6192;
extern Il2CppGenericClass ICollection_1_t6192_GenericClass;
TypeInfo ICollection_1_t6192_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6192_MethodInfos/* methods */
	, ICollection_1_t6192_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6192_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6192_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6192_0_0_0/* byval_arg */
	, &ICollection_1_t6192_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6192_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoType>
extern Il2CppType IEnumerator_1_t4776_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32280_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32280_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6194_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4776_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32280_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6194_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32280_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6194_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6194_0_0_0;
extern Il2CppType IEnumerable_1_t6194_1_0_0;
struct IEnumerable_1_t6194;
extern Il2CppGenericClass IEnumerable_1_t6194_GenericClass;
TypeInfo IEnumerable_1_t6194_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6194_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6194_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6194_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6194_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6194_0_0_0/* byval_arg */
	, &IEnumerable_1_t6194_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6194_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6193_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoType>
extern MethodInfo IList_1_get_Item_m32281_MethodInfo;
extern MethodInfo IList_1_set_Item_m32282_MethodInfo;
static PropertyInfo IList_1_t6193____Item_PropertyInfo = 
{
	&IList_1_t6193_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32281_MethodInfo/* get */
	, &IList_1_set_Item_m32282_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6193_PropertyInfos[] =
{
	&IList_1_t6193____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t1694_0_0_0;
static ParameterInfo IList_1_t6193_IList_1_IndexOf_m32283_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t1694_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32283_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32283_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6193_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6193_IList_1_IndexOf_m32283_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32283_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MonoType_t1694_0_0_0;
static ParameterInfo IList_1_t6193_IList_1_Insert_m32284_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t1694_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32284_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32284_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6193_IList_1_Insert_m32284_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32284_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6193_IList_1_RemoveAt_m32285_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32285_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32285_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6193_IList_1_RemoveAt_m32285_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32285_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6193_IList_1_get_Item_m32281_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MonoType_t1694_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32281_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32281_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6193_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t1694_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6193_IList_1_get_Item_m32281_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32281_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MonoType_t1694_0_0_0;
static ParameterInfo IList_1_t6193_IList_1_set_Item_m32282_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t1694_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32282_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32282_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6193_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6193_IList_1_set_Item_m32282_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32282_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6193_MethodInfos[] =
{
	&IList_1_IndexOf_m32283_MethodInfo,
	&IList_1_Insert_m32284_MethodInfo,
	&IList_1_RemoveAt_m32285_MethodInfo,
	&IList_1_get_Item_m32281_MethodInfo,
	&IList_1_set_Item_m32282_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6193_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6192_il2cpp_TypeInfo,
	&IEnumerable_1_t6194_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6193_0_0_0;
extern Il2CppType IList_1_t6193_1_0_0;
struct IList_1_t6193;
extern Il2CppGenericClass IList_1_t6193_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6193_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6193_MethodInfos/* methods */
	, IList_1_t6193_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6193_il2cpp_TypeInfo/* element_class */
	, IList_1_t6193_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6193_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6193_0_0_0/* byval_arg */
	, &IList_1_t6193_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6193_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4778_il2cpp_TypeInfo;

// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32286_MethodInfo;
static PropertyInfo IEnumerator_1_t4778____Current_PropertyInfo = 
{
	&IEnumerator_1_t4778_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32286_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4778_PropertyInfos[] =
{
	&IEnumerator_1_t4778____Current_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32286_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32286_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4778_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t363_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32286_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4778_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32286_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4778_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4778_0_0_0;
extern Il2CppType IEnumerator_1_t4778_1_0_0;
struct IEnumerator_1_t4778;
extern Il2CppGenericClass IEnumerator_1_t4778_GenericClass;
TypeInfo IEnumerator_1_t4778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4778_MethodInfos/* methods */
	, IEnumerator_1_t4778_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4778_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4778_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4778_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4778_0_0_0/* byval_arg */
	, &IEnumerator_1_t4778_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4778_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_383.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3354_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_383MethodDeclarations.h"

extern TypeInfo ParamArrayAttribute_t363_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18670_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParamArrayAttribute_t363_m24681_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisParamArrayAttribute_t363_m24681(__this, p0, method) (ParamArrayAttribute_t363 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3354____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3354, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3354____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3354, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3354_FieldInfos[] =
{
	&InternalEnumerator_1_t3354____array_0_FieldInfo,
	&InternalEnumerator_1_t3354____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18667_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3354____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3354_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18667_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3354____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3354_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18670_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3354_PropertyInfos[] =
{
	&InternalEnumerator_1_t3354____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3354____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3354_InternalEnumerator_1__ctor_m18666_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18666_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18666_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3354_InternalEnumerator_1__ctor_m18666_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18666_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18667_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18667_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18667_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18668_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18668_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18668_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18669_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18669_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18669_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18670_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18670_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t363_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18670_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3354_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18666_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18667_MethodInfo,
	&InternalEnumerator_1_Dispose_m18668_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18669_MethodInfo,
	&InternalEnumerator_1_get_Current_m18670_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18669_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18668_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3354_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18667_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18669_MethodInfo,
	&InternalEnumerator_1_Dispose_m18668_MethodInfo,
	&InternalEnumerator_1_get_Current_m18670_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3354_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4778_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3354_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4778_il2cpp_TypeInfo, 7},
};
extern TypeInfo ParamArrayAttribute_t363_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3354_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18670_MethodInfo/* Method Usage */,
	&ParamArrayAttribute_t363_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisParamArrayAttribute_t363_m24681_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3354_0_0_0;
extern Il2CppType InternalEnumerator_1_t3354_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3354_GenericClass;
TypeInfo InternalEnumerator_1_t3354_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3354_MethodInfos/* methods */
	, InternalEnumerator_1_t3354_PropertyInfos/* properties */
	, InternalEnumerator_1_t3354_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3354_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3354_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3354_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3354_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3354_1_0_0/* this_arg */
	, InternalEnumerator_1_t3354_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3354_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3354_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3354)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6195_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>
extern MethodInfo ICollection_1_get_Count_m32287_MethodInfo;
static PropertyInfo ICollection_1_t6195____Count_PropertyInfo = 
{
	&ICollection_1_t6195_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32287_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32288_MethodInfo;
static PropertyInfo ICollection_1_t6195____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6195_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32288_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6195_PropertyInfos[] =
{
	&ICollection_1_t6195____Count_PropertyInfo,
	&ICollection_1_t6195____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32287_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32287_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32287_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32288_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32288_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32288_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
static ParameterInfo ICollection_1_t6195_ICollection_1_Add_m32289_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t363_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32289_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32289_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6195_ICollection_1_Add_m32289_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32289_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32290_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32290_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32290_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
static ParameterInfo ICollection_1_t6195_ICollection_1_Contains_m32291_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t363_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32291_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32291_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6195_ICollection_1_Contains_m32291_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32291_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttributeU5BU5D_t3621_0_0_0;
extern Il2CppType ParamArrayAttributeU5BU5D_t3621_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6195_ICollection_1_CopyTo_m32292_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttributeU5BU5D_t3621_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32292_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32292_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6195_ICollection_1_CopyTo_m32292_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32292_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
static ParameterInfo ICollection_1_t6195_ICollection_1_Remove_m32293_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t363_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32293_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32293_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6195_ICollection_1_Remove_m32293_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32293_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6195_MethodInfos[] =
{
	&ICollection_1_get_Count_m32287_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32288_MethodInfo,
	&ICollection_1_Add_m32289_MethodInfo,
	&ICollection_1_Clear_m32290_MethodInfo,
	&ICollection_1_Contains_m32291_MethodInfo,
	&ICollection_1_CopyTo_m32292_MethodInfo,
	&ICollection_1_Remove_m32293_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6197_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6195_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6197_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6195_0_0_0;
extern Il2CppType ICollection_1_t6195_1_0_0;
struct ICollection_1_t6195;
extern Il2CppGenericClass ICollection_1_t6195_GenericClass;
TypeInfo ICollection_1_t6195_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6195_MethodInfos/* methods */
	, ICollection_1_t6195_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6195_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6195_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6195_0_0_0/* byval_arg */
	, &ICollection_1_t6195_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6195_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>
extern Il2CppType IEnumerator_1_t4778_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32294_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32294_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6197_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4778_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32294_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6197_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32294_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6197_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6197_0_0_0;
extern Il2CppType IEnumerable_1_t6197_1_0_0;
struct IEnumerable_1_t6197;
extern Il2CppGenericClass IEnumerable_1_t6197_GenericClass;
TypeInfo IEnumerable_1_t6197_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6197_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6197_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6197_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6197_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6197_0_0_0/* byval_arg */
	, &IEnumerable_1_t6197_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6197_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6196_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ParamArrayAttribute>
extern MethodInfo IList_1_get_Item_m32295_MethodInfo;
extern MethodInfo IList_1_set_Item_m32296_MethodInfo;
static PropertyInfo IList_1_t6196____Item_PropertyInfo = 
{
	&IList_1_t6196_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32295_MethodInfo/* get */
	, &IList_1_set_Item_m32296_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6196_PropertyInfos[] =
{
	&IList_1_t6196____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
static ParameterInfo IList_1_t6196_IList_1_IndexOf_m32297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t363_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32297_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32297_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6196_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6196_IList_1_IndexOf_m32297_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32297_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
static ParameterInfo IList_1_t6196_IList_1_Insert_m32298_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t363_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32298_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32298_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6196_IList_1_Insert_m32298_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32298_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6196_IList_1_RemoveAt_m32299_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32299_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32299_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6196_IList_1_RemoveAt_m32299_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32299_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6196_IList_1_get_Item_m32295_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32295_GenericMethod;
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32295_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6196_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t363_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6196_IList_1_get_Item_m32295_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32295_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ParamArrayAttribute_t363_0_0_0;
static ParameterInfo IList_1_t6196_IList_1_set_Item_m32296_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t363_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32296_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32296_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6196_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6196_IList_1_set_Item_m32296_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32296_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6196_MethodInfos[] =
{
	&IList_1_IndexOf_m32297_MethodInfo,
	&IList_1_Insert_m32298_MethodInfo,
	&IList_1_RemoveAt_m32299_MethodInfo,
	&IList_1_get_Item_m32295_MethodInfo,
	&IList_1_set_Item_m32296_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6196_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6195_il2cpp_TypeInfo,
	&IEnumerable_1_t6197_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6196_0_0_0;
extern Il2CppType IList_1_t6196_1_0_0;
struct IList_1_t6196;
extern Il2CppGenericClass IList_1_t6196_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6196_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6196_MethodInfos/* methods */
	, IList_1_t6196_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6196_il2cpp_TypeInfo/* element_class */
	, IList_1_t6196_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6196_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6196_0_0_0/* byval_arg */
	, &IList_1_t6196_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6196_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4780_il2cpp_TypeInfo;

// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32300_MethodInfo;
static PropertyInfo IEnumerator_1_t4780____Current_PropertyInfo = 
{
	&IEnumerator_1_t4780_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32300_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4780_PropertyInfos[] =
{
	&IEnumerator_1_t4780____Current_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t1167_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32300_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32300_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4780_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t1167_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32300_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4780_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32300_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4780_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4780_0_0_0;
extern Il2CppType IEnumerator_1_t4780_1_0_0;
struct IEnumerator_1_t4780;
extern Il2CppGenericClass IEnumerator_1_t4780_GenericClass;
TypeInfo IEnumerator_1_t4780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4780_MethodInfos/* methods */
	, IEnumerator_1_t4780_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4780_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4780_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4780_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4780_0_0_0/* byval_arg */
	, &IEnumerator_1_t4780_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4780_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_384.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3355_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_384MethodDeclarations.h"

extern TypeInfo OutAttribute_t1167_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18675_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOutAttribute_t1167_m24692_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOutAttribute_t1167_m24692(__this, p0, method) (OutAttribute_t1167 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3355____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3355, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3355____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3355, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3355_FieldInfos[] =
{
	&InternalEnumerator_1_t3355____array_0_FieldInfo,
	&InternalEnumerator_1_t3355____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18672_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3355____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3355_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18672_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3355____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3355_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18675_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3355_PropertyInfos[] =
{
	&InternalEnumerator_1_t3355____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3355____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3355_InternalEnumerator_1__ctor_m18671_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18671_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18671_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3355_InternalEnumerator_1__ctor_m18671_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18671_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18672_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18672_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18672_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18673_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18673_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18673_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18674_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18674_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18674_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1167_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18675_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18675_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t1167_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18675_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3355_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18671_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18672_MethodInfo,
	&InternalEnumerator_1_Dispose_m18673_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18674_MethodInfo,
	&InternalEnumerator_1_get_Current_m18675_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18674_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18673_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3355_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18672_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18674_MethodInfo,
	&InternalEnumerator_1_Dispose_m18673_MethodInfo,
	&InternalEnumerator_1_get_Current_m18675_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3355_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4780_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3355_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4780_il2cpp_TypeInfo, 7},
};
extern TypeInfo OutAttribute_t1167_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3355_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18675_MethodInfo/* Method Usage */,
	&OutAttribute_t1167_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOutAttribute_t1167_m24692_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3355_0_0_0;
extern Il2CppType InternalEnumerator_1_t3355_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3355_GenericClass;
TypeInfo InternalEnumerator_1_t3355_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3355_MethodInfos/* methods */
	, InternalEnumerator_1_t3355_PropertyInfos/* properties */
	, InternalEnumerator_1_t3355_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3355_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3355_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3355_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3355_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3355_1_0_0/* this_arg */
	, InternalEnumerator_1_t3355_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3355_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3355_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3355)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6198_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo ICollection_1_get_Count_m32301_MethodInfo;
static PropertyInfo ICollection_1_t6198____Count_PropertyInfo = 
{
	&ICollection_1_t6198_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32301_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32302_MethodInfo;
static PropertyInfo ICollection_1_t6198____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6198_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32302_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6198_PropertyInfos[] =
{
	&ICollection_1_t6198____Count_PropertyInfo,
	&ICollection_1_t6198____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32301_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32301_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32301_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32302_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32302_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32302_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1167_0_0_0;
extern Il2CppType OutAttribute_t1167_0_0_0;
static ParameterInfo ICollection_1_t6198_ICollection_1_Add_m32303_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1167_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32303_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32303_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6198_ICollection_1_Add_m32303_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32303_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32304_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32304_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32304_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1167_0_0_0;
static ParameterInfo ICollection_1_t6198_ICollection_1_Contains_m32305_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1167_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32305_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32305_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6198_ICollection_1_Contains_m32305_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32305_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttributeU5BU5D_t3622_0_0_0;
extern Il2CppType OutAttributeU5BU5D_t3622_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6198_ICollection_1_CopyTo_m32306_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OutAttributeU5BU5D_t3622_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32306_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32306_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6198_ICollection_1_CopyTo_m32306_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32306_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t1167_0_0_0;
static ParameterInfo ICollection_1_t6198_ICollection_1_Remove_m32307_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1167_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32307_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32307_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6198_ICollection_1_Remove_m32307_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32307_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6198_MethodInfos[] =
{
	&ICollection_1_get_Count_m32301_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32302_MethodInfo,
	&ICollection_1_Add_m32303_MethodInfo,
	&ICollection_1_Clear_m32304_MethodInfo,
	&ICollection_1_Contains_m32305_MethodInfo,
	&ICollection_1_CopyTo_m32306_MethodInfo,
	&ICollection_1_Remove_m32307_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6200_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6198_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6200_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6198_0_0_0;
extern Il2CppType ICollection_1_t6198_1_0_0;
struct ICollection_1_t6198;
extern Il2CppGenericClass ICollection_1_t6198_GenericClass;
TypeInfo ICollection_1_t6198_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6198_MethodInfos/* methods */
	, ICollection_1_t6198_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6198_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6198_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6198_0_0_0/* byval_arg */
	, &ICollection_1_t6198_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6198_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType IEnumerator_1_t4780_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32308_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32308_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6200_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4780_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32308_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6200_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32308_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6200_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6200_0_0_0;
extern Il2CppType IEnumerable_1_t6200_1_0_0;
struct IEnumerable_1_t6200;
extern Il2CppGenericClass IEnumerable_1_t6200_GenericClass;
TypeInfo IEnumerable_1_t6200_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6200_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6200_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6200_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6200_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6200_0_0_0/* byval_arg */
	, &IEnumerable_1_t6200_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6200_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6199_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IList_1_get_Item_m32309_MethodInfo;
extern MethodInfo IList_1_set_Item_m32310_MethodInfo;
static PropertyInfo IList_1_t6199____Item_PropertyInfo = 
{
	&IList_1_t6199_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32309_MethodInfo/* get */
	, &IList_1_set_Item_m32310_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6199_PropertyInfos[] =
{
	&IList_1_t6199____Item_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t1167_0_0_0;
static ParameterInfo IList_1_t6199_IList_1_IndexOf_m32311_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1167_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32311_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32311_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6199_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6199_IList_1_IndexOf_m32311_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32311_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OutAttribute_t1167_0_0_0;
static ParameterInfo IList_1_t6199_IList_1_Insert_m32312_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1167_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32312_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32312_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6199_IList_1_Insert_m32312_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32312_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6199_IList_1_RemoveAt_m32313_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32313_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32313_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6199_IList_1_RemoveAt_m32313_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32313_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6199_IList_1_get_Item_m32309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType OutAttribute_t1167_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32309_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32309_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6199_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t1167_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6199_IList_1_get_Item_m32309_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32309_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OutAttribute_t1167_0_0_0;
static ParameterInfo IList_1_t6199_IList_1_set_Item_m32310_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t1167_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32310_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32310_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6199_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6199_IList_1_set_Item_m32310_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32310_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6199_MethodInfos[] =
{
	&IList_1_IndexOf_m32311_MethodInfo,
	&IList_1_Insert_m32312_MethodInfo,
	&IList_1_RemoveAt_m32313_MethodInfo,
	&IList_1_get_Item_m32309_MethodInfo,
	&IList_1_set_Item_m32310_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6199_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6198_il2cpp_TypeInfo,
	&IEnumerable_1_t6200_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6199_0_0_0;
extern Il2CppType IList_1_t6199_1_0_0;
struct IList_1_t6199;
extern Il2CppGenericClass IList_1_t6199_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6199_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6199_MethodInfos/* methods */
	, IList_1_t6199_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6199_il2cpp_TypeInfo/* element_class */
	, IList_1_t6199_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6199_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6199_0_0_0/* byval_arg */
	, &IList_1_t6199_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6199_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4782_il2cpp_TypeInfo;

// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32314_MethodInfo;
static PropertyInfo IEnumerator_1_t4782____Current_PropertyInfo = 
{
	&IEnumerator_1_t4782_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32314_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4782_PropertyInfos[] =
{
	&IEnumerator_1_t4782____Current_PropertyInfo,
	NULL
};
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32314_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32314_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4782_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t308_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32314_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4782_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32314_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4782_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4782_0_0_0;
extern Il2CppType IEnumerator_1_t4782_1_0_0;
struct IEnumerator_1_t4782;
extern Il2CppGenericClass IEnumerator_1_t4782_GenericClass;
TypeInfo IEnumerator_1_t4782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4782_MethodInfos/* methods */
	, IEnumerator_1_t4782_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4782_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4782_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4782_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4782_0_0_0/* byval_arg */
	, &IEnumerator_1_t4782_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4782_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_385.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3356_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_385MethodDeclarations.h"

extern TypeInfo ObsoleteAttribute_t308_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18680_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisObsoleteAttribute_t308_m24703_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ObsoleteAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ObsoleteAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisObsoleteAttribute_t308_m24703(__this, p0, method) (ObsoleteAttribute_t308 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3356____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3356, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3356____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3356, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3356_FieldInfos[] =
{
	&InternalEnumerator_1_t3356____array_0_FieldInfo,
	&InternalEnumerator_1_t3356____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18677_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3356____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3356_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18677_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3356____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3356_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3356_PropertyInfos[] =
{
	&InternalEnumerator_1_t3356____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3356____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3356_InternalEnumerator_1__ctor_m18676_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18676_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18676_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3356_InternalEnumerator_1__ctor_m18676_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18676_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18677_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18677_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18677_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18678_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18678_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18678_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18679_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18679_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18679_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18680_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18680_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t308_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18680_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3356_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18676_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18677_MethodInfo,
	&InternalEnumerator_1_Dispose_m18678_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18679_MethodInfo,
	&InternalEnumerator_1_get_Current_m18680_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18679_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18678_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3356_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18677_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18679_MethodInfo,
	&InternalEnumerator_1_Dispose_m18678_MethodInfo,
	&InternalEnumerator_1_get_Current_m18680_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3356_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4782_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3356_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4782_il2cpp_TypeInfo, 7},
};
extern TypeInfo ObsoleteAttribute_t308_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3356_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18680_MethodInfo/* Method Usage */,
	&ObsoleteAttribute_t308_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisObsoleteAttribute_t308_m24703_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3356_0_0_0;
extern Il2CppType InternalEnumerator_1_t3356_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3356_GenericClass;
TypeInfo InternalEnumerator_1_t3356_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3356_MethodInfos/* methods */
	, InternalEnumerator_1_t3356_PropertyInfos/* properties */
	, InternalEnumerator_1_t3356_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3356_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3356_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3356_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3356_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3356_1_0_0/* this_arg */
	, InternalEnumerator_1_t3356_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3356_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3356_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3356)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6201_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>
extern MethodInfo ICollection_1_get_Count_m32315_MethodInfo;
static PropertyInfo ICollection_1_t6201____Count_PropertyInfo = 
{
	&ICollection_1_t6201_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32315_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32316_MethodInfo;
static PropertyInfo ICollection_1_t6201____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6201_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32316_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6201_PropertyInfos[] =
{
	&ICollection_1_t6201____Count_PropertyInfo,
	&ICollection_1_t6201____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32315_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32315_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32315_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32316_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32316_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32316_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
static ParameterInfo ICollection_1_t6201_ICollection_1_Add_m32317_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t308_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32317_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32317_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6201_ICollection_1_Add_m32317_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32317_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32318_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32318_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32318_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
static ParameterInfo ICollection_1_t6201_ICollection_1_Contains_m32319_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t308_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32319_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32319_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6201_ICollection_1_Contains_m32319_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32319_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttributeU5BU5D_t3623_0_0_0;
extern Il2CppType ObsoleteAttributeU5BU5D_t3623_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6201_ICollection_1_CopyTo_m32320_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttributeU5BU5D_t3623_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32320_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32320_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6201_ICollection_1_CopyTo_m32320_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32320_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
static ParameterInfo ICollection_1_t6201_ICollection_1_Remove_m32321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t308_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32321_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32321_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6201_ICollection_1_Remove_m32321_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32321_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6201_MethodInfos[] =
{
	&ICollection_1_get_Count_m32315_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32316_MethodInfo,
	&ICollection_1_Add_m32317_MethodInfo,
	&ICollection_1_Clear_m32318_MethodInfo,
	&ICollection_1_Contains_m32319_MethodInfo,
	&ICollection_1_CopyTo_m32320_MethodInfo,
	&ICollection_1_Remove_m32321_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6203_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6201_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6203_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6201_0_0_0;
extern Il2CppType ICollection_1_t6201_1_0_0;
struct ICollection_1_t6201;
extern Il2CppGenericClass ICollection_1_t6201_GenericClass;
TypeInfo ICollection_1_t6201_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6201_MethodInfos/* methods */
	, ICollection_1_t6201_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6201_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6201_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6201_0_0_0/* byval_arg */
	, &ICollection_1_t6201_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6201_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>
extern Il2CppType IEnumerator_1_t4782_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32322_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32322_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6203_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4782_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32322_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6203_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32322_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6203_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6203_0_0_0;
extern Il2CppType IEnumerable_1_t6203_1_0_0;
struct IEnumerable_1_t6203;
extern Il2CppGenericClass IEnumerable_1_t6203_GenericClass;
TypeInfo IEnumerable_1_t6203_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6203_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6203_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6203_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6203_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6203_0_0_0/* byval_arg */
	, &IEnumerable_1_t6203_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6203_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6202_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ObsoleteAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ObsoleteAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ObsoleteAttribute>
extern MethodInfo IList_1_get_Item_m32323_MethodInfo;
extern MethodInfo IList_1_set_Item_m32324_MethodInfo;
static PropertyInfo IList_1_t6202____Item_PropertyInfo = 
{
	&IList_1_t6202_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32323_MethodInfo/* get */
	, &IList_1_set_Item_m32324_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6202_PropertyInfos[] =
{
	&IList_1_t6202____Item_PropertyInfo,
	NULL
};
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
static ParameterInfo IList_1_t6202_IList_1_IndexOf_m32325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t308_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32325_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ObsoleteAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32325_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6202_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6202_IList_1_IndexOf_m32325_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32325_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
static ParameterInfo IList_1_t6202_IList_1_Insert_m32326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t308_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32326_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32326_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6202_IList_1_Insert_m32326_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32326_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6202_IList_1_RemoveAt_m32327_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32327_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32327_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6202_IList_1_RemoveAt_m32327_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32327_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6202_IList_1_get_Item_m32323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32323_GenericMethod;
// T System.Collections.Generic.IList`1<System.ObsoleteAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32323_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6202_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t308_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6202_IList_1_get_Item_m32323_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32323_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ObsoleteAttribute_t308_0_0_0;
static ParameterInfo IList_1_t6202_IList_1_set_Item_m32324_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t308_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32324_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32324_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6202_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6202_IList_1_set_Item_m32324_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32324_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6202_MethodInfos[] =
{
	&IList_1_IndexOf_m32325_MethodInfo,
	&IList_1_Insert_m32326_MethodInfo,
	&IList_1_RemoveAt_m32327_MethodInfo,
	&IList_1_get_Item_m32323_MethodInfo,
	&IList_1_set_Item_m32324_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6202_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6201_il2cpp_TypeInfo,
	&IEnumerable_1_t6203_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6202_0_0_0;
extern Il2CppType IList_1_t6202_1_0_0;
struct IList_1_t6202;
extern Il2CppGenericClass IList_1_t6202_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6202_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6202_MethodInfos/* methods */
	, IList_1_t6202_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6202_il2cpp_TypeInfo/* element_class */
	, IList_1_t6202_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6202_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6202_0_0_0/* byval_arg */
	, &IList_1_t6202_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6202_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4784_il2cpp_TypeInfo;

// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32328_MethodInfo;
static PropertyInfo IEnumerator_1_t4784____Current_PropertyInfo = 
{
	&IEnumerator_1_t4784_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32328_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4784_PropertyInfos[] =
{
	&IEnumerator_1_t4784____Current_PropertyInfo,
	NULL
};
extern Il2CppType DllImportAttribute_t1168_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32328_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32328_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4784_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t1168_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32328_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4784_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32328_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4784_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4784_0_0_0;
extern Il2CppType IEnumerator_1_t4784_1_0_0;
struct IEnumerator_1_t4784;
extern Il2CppGenericClass IEnumerator_1_t4784_GenericClass;
TypeInfo IEnumerator_1_t4784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4784_MethodInfos/* methods */
	, IEnumerator_1_t4784_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4784_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4784_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4784_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4784_0_0_0/* byval_arg */
	, &IEnumerator_1_t4784_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4784_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_386.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3357_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_386MethodDeclarations.h"

extern TypeInfo DllImportAttribute_t1168_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18685_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDllImportAttribute_t1168_m24714_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DllImportAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DllImportAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDllImportAttribute_t1168_m24714(__this, p0, method) (DllImportAttribute_t1168 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3357____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3357, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3357____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3357, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3357_FieldInfos[] =
{
	&InternalEnumerator_1_t3357____array_0_FieldInfo,
	&InternalEnumerator_1_t3357____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18682_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3357____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3357_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18682_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3357____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3357_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18685_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3357_PropertyInfos[] =
{
	&InternalEnumerator_1_t3357____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3357____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3357_InternalEnumerator_1__ctor_m18681_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18681_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18681_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3357_InternalEnumerator_1__ctor_m18681_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18681_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18682_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18682_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18682_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18683_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18683_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18683_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18684_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18684_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18684_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1168_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18685_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18685_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t1168_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18685_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3357_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18681_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18682_MethodInfo,
	&InternalEnumerator_1_Dispose_m18683_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18684_MethodInfo,
	&InternalEnumerator_1_get_Current_m18685_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18684_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18683_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3357_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18682_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18684_MethodInfo,
	&InternalEnumerator_1_Dispose_m18683_MethodInfo,
	&InternalEnumerator_1_get_Current_m18685_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3357_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4784_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3357_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4784_il2cpp_TypeInfo, 7},
};
extern TypeInfo DllImportAttribute_t1168_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3357_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18685_MethodInfo/* Method Usage */,
	&DllImportAttribute_t1168_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDllImportAttribute_t1168_m24714_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3357_0_0_0;
extern Il2CppType InternalEnumerator_1_t3357_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3357_GenericClass;
TypeInfo InternalEnumerator_1_t3357_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3357_MethodInfos/* methods */
	, InternalEnumerator_1_t3357_PropertyInfos/* properties */
	, InternalEnumerator_1_t3357_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3357_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3357_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3357_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3357_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3357_1_0_0/* this_arg */
	, InternalEnumerator_1_t3357_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3357_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3357_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3357)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6204_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo ICollection_1_get_Count_m32329_MethodInfo;
static PropertyInfo ICollection_1_t6204____Count_PropertyInfo = 
{
	&ICollection_1_t6204_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32329_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32330_MethodInfo;
static PropertyInfo ICollection_1_t6204____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6204_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32330_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6204_PropertyInfos[] =
{
	&ICollection_1_t6204____Count_PropertyInfo,
	&ICollection_1_t6204____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32329_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32329_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32329_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32330_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32330_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32330_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1168_0_0_0;
extern Il2CppType DllImportAttribute_t1168_0_0_0;
static ParameterInfo ICollection_1_t6204_ICollection_1_Add_m32331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1168_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32331_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32331_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6204_ICollection_1_Add_m32331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32331_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32332_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32332_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32332_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1168_0_0_0;
static ParameterInfo ICollection_1_t6204_ICollection_1_Contains_m32333_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1168_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32333_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32333_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6204_ICollection_1_Contains_m32333_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32333_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttributeU5BU5D_t3624_0_0_0;
extern Il2CppType DllImportAttributeU5BU5D_t3624_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6204_ICollection_1_CopyTo_m32334_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttributeU5BU5D_t3624_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32334_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32334_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6204_ICollection_1_CopyTo_m32334_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32334_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t1168_0_0_0;
static ParameterInfo ICollection_1_t6204_ICollection_1_Remove_m32335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1168_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32335_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DllImportAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32335_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6204_ICollection_1_Remove_m32335_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32335_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6204_MethodInfos[] =
{
	&ICollection_1_get_Count_m32329_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32330_MethodInfo,
	&ICollection_1_Add_m32331_MethodInfo,
	&ICollection_1_Clear_m32332_MethodInfo,
	&ICollection_1_Contains_m32333_MethodInfo,
	&ICollection_1_CopyTo_m32334_MethodInfo,
	&ICollection_1_Remove_m32335_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6206_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6204_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6206_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6204_0_0_0;
extern Il2CppType ICollection_1_t6204_1_0_0;
struct ICollection_1_t6204;
extern Il2CppGenericClass ICollection_1_t6204_GenericClass;
TypeInfo ICollection_1_t6204_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6204_MethodInfos/* methods */
	, ICollection_1_t6204_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6204_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6204_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6204_0_0_0/* byval_arg */
	, &ICollection_1_t6204_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6204_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType IEnumerator_1_t4784_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32336_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DllImportAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32336_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6206_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4784_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32336_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6206_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32336_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6206_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6206_0_0_0;
extern Il2CppType IEnumerable_1_t6206_1_0_0;
struct IEnumerable_1_t6206;
extern Il2CppGenericClass IEnumerable_1_t6206_GenericClass;
TypeInfo IEnumerable_1_t6206_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6206_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6206_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6206_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6206_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6206_0_0_0/* byval_arg */
	, &IEnumerable_1_t6206_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6206_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6205_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo IList_1_get_Item_m32337_MethodInfo;
extern MethodInfo IList_1_set_Item_m32338_MethodInfo;
static PropertyInfo IList_1_t6205____Item_PropertyInfo = 
{
	&IList_1_t6205_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32337_MethodInfo/* get */
	, &IList_1_set_Item_m32338_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6205_PropertyInfos[] =
{
	&IList_1_t6205____Item_PropertyInfo,
	NULL
};
extern Il2CppType DllImportAttribute_t1168_0_0_0;
static ParameterInfo IList_1_t6205_IList_1_IndexOf_m32339_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1168_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32339_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32339_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6205_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6205_IList_1_IndexOf_m32339_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32339_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DllImportAttribute_t1168_0_0_0;
static ParameterInfo IList_1_t6205_IList_1_Insert_m32340_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1168_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32340_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32340_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6205_IList_1_Insert_m32340_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32340_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6205_IList_1_RemoveAt_m32341_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32341_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32341_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6205_IList_1_RemoveAt_m32341_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32341_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6205_IList_1_get_Item_m32337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DllImportAttribute_t1168_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32337_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32337_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6205_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t1168_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6205_IList_1_get_Item_m32337_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32337_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DllImportAttribute_t1168_0_0_0;
static ParameterInfo IList_1_t6205_IList_1_set_Item_m32338_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DllImportAttribute_t1168_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32338_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DllImportAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32338_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6205_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6205_IList_1_set_Item_m32338_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32338_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6205_MethodInfos[] =
{
	&IList_1_IndexOf_m32339_MethodInfo,
	&IList_1_Insert_m32340_MethodInfo,
	&IList_1_RemoveAt_m32341_MethodInfo,
	&IList_1_get_Item_m32337_MethodInfo,
	&IList_1_set_Item_m32338_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6205_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6204_il2cpp_TypeInfo,
	&IEnumerable_1_t6206_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6205_0_0_0;
extern Il2CppType IList_1_t6205_1_0_0;
struct IList_1_t6205;
extern Il2CppGenericClass IList_1_t6205_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6205_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6205_MethodInfos/* methods */
	, IList_1_t6205_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6205_il2cpp_TypeInfo/* element_class */
	, IList_1_t6205_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6205_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6205_0_0_0/* byval_arg */
	, &IList_1_t6205_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6205_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4786_il2cpp_TypeInfo;

// System.Runtime.InteropServices.MarshalAsAttribute
#include "mscorlib_System_Runtime_InteropServices_MarshalAsAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32342_MethodInfo;
static PropertyInfo IEnumerator_1_t4786____Current_PropertyInfo = 
{
	&IEnumerator_1_t4786_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32342_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4786_PropertyInfos[] =
{
	&IEnumerator_1_t4786____Current_PropertyInfo,
	NULL
};
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32342_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32342_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4786_il2cpp_TypeInfo/* declaring_type */
	, &MarshalAsAttribute_t1169_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32342_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4786_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32342_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4786_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4786_0_0_0;
extern Il2CppType IEnumerator_1_t4786_1_0_0;
struct IEnumerator_1_t4786;
extern Il2CppGenericClass IEnumerator_1_t4786_GenericClass;
TypeInfo IEnumerator_1_t4786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4786_MethodInfos/* methods */
	, IEnumerator_1_t4786_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4786_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4786_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4786_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4786_0_0_0/* byval_arg */
	, &IEnumerator_1_t4786_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4786_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_387.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3358_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_387MethodDeclarations.h"

extern TypeInfo MarshalAsAttribute_t1169_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18690_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMarshalAsAttribute_t1169_m24725_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.MarshalAsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.MarshalAsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMarshalAsAttribute_t1169_m24725(__this, p0, method) (MarshalAsAttribute_t1169 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3358____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3358, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3358____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3358, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3358_FieldInfos[] =
{
	&InternalEnumerator_1_t3358____array_0_FieldInfo,
	&InternalEnumerator_1_t3358____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18687_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3358____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3358_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18687_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3358____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3358_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18690_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3358_PropertyInfos[] =
{
	&InternalEnumerator_1_t3358____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3358____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3358_InternalEnumerator_1__ctor_m18686_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18686_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18686_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3358_InternalEnumerator_1__ctor_m18686_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18686_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18687_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18687_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18687_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18688_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18688_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18688_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18689_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18689_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18689_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18690_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18690_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* declaring_type */
	, &MarshalAsAttribute_t1169_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18690_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3358_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18686_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18687_MethodInfo,
	&InternalEnumerator_1_Dispose_m18688_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18689_MethodInfo,
	&InternalEnumerator_1_get_Current_m18690_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18689_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18688_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3358_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18687_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18689_MethodInfo,
	&InternalEnumerator_1_Dispose_m18688_MethodInfo,
	&InternalEnumerator_1_get_Current_m18690_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3358_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4786_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3358_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4786_il2cpp_TypeInfo, 7},
};
extern TypeInfo MarshalAsAttribute_t1169_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3358_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18690_MethodInfo/* Method Usage */,
	&MarshalAsAttribute_t1169_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMarshalAsAttribute_t1169_m24725_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3358_0_0_0;
extern Il2CppType InternalEnumerator_1_t3358_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3358_GenericClass;
TypeInfo InternalEnumerator_1_t3358_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3358_MethodInfos/* methods */
	, InternalEnumerator_1_t3358_PropertyInfos/* properties */
	, InternalEnumerator_1_t3358_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3358_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3358_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3358_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3358_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3358_1_0_0/* this_arg */
	, InternalEnumerator_1_t3358_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3358_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3358_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3358)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6207_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo ICollection_1_get_Count_m32343_MethodInfo;
static PropertyInfo ICollection_1_t6207____Count_PropertyInfo = 
{
	&ICollection_1_t6207_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32343_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32344_MethodInfo;
static PropertyInfo ICollection_1_t6207____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6207_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32344_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6207_PropertyInfos[] =
{
	&ICollection_1_t6207____Count_PropertyInfo,
	&ICollection_1_t6207____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32343_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32343_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32343_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32344_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32344_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32344_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
static ParameterInfo ICollection_1_t6207_ICollection_1_Add_m32345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1169_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32345_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32345_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6207_ICollection_1_Add_m32345_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32345_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32346_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32346_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32346_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
static ParameterInfo ICollection_1_t6207_ICollection_1_Contains_m32347_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1169_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32347_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32347_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6207_ICollection_1_Contains_m32347_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32347_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttributeU5BU5D_t3625_0_0_0;
extern Il2CppType MarshalAsAttributeU5BU5D_t3625_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6207_ICollection_1_CopyTo_m32348_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttributeU5BU5D_t3625_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32348_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32348_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6207_ICollection_1_CopyTo_m32348_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32348_GenericMethod/* genericMethod */

};
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
static ParameterInfo ICollection_1_t6207_ICollection_1_Remove_m32349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1169_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32349_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.MarshalAsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32349_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6207_ICollection_1_Remove_m32349_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32349_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6207_MethodInfos[] =
{
	&ICollection_1_get_Count_m32343_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32344_MethodInfo,
	&ICollection_1_Add_m32345_MethodInfo,
	&ICollection_1_Clear_m32346_MethodInfo,
	&ICollection_1_Contains_m32347_MethodInfo,
	&ICollection_1_CopyTo_m32348_MethodInfo,
	&ICollection_1_Remove_m32349_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6209_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6207_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6209_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6207_0_0_0;
extern Il2CppType ICollection_1_t6207_1_0_0;
struct ICollection_1_t6207;
extern Il2CppGenericClass ICollection_1_t6207_GenericClass;
TypeInfo ICollection_1_t6207_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6207_MethodInfos/* methods */
	, ICollection_1_t6207_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6207_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6207_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6207_0_0_0/* byval_arg */
	, &ICollection_1_t6207_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6207_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern Il2CppType IEnumerator_1_t4786_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32350_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.MarshalAsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32350_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6209_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4786_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32350_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6209_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32350_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6209_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6209_0_0_0;
extern Il2CppType IEnumerable_1_t6209_1_0_0;
struct IEnumerable_1_t6209;
extern Il2CppGenericClass IEnumerable_1_t6209_GenericClass;
TypeInfo IEnumerable_1_t6209_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6209_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6209_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6209_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6209_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6209_0_0_0/* byval_arg */
	, &IEnumerable_1_t6209_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6209_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6208_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>
extern MethodInfo IList_1_get_Item_m32351_MethodInfo;
extern MethodInfo IList_1_set_Item_m32352_MethodInfo;
static PropertyInfo IList_1_t6208____Item_PropertyInfo = 
{
	&IList_1_t6208_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32351_MethodInfo/* get */
	, &IList_1_set_Item_m32352_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6208_PropertyInfos[] =
{
	&IList_1_t6208____Item_PropertyInfo,
	NULL
};
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
static ParameterInfo IList_1_t6208_IList_1_IndexOf_m32353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1169_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32353_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32353_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6208_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6208_IList_1_IndexOf_m32353_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32353_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
static ParameterInfo IList_1_t6208_IList_1_Insert_m32354_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1169_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32354_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32354_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6208_IList_1_Insert_m32354_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32354_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6208_IList_1_RemoveAt_m32355_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32355_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32355_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6208_IList_1_RemoveAt_m32355_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32355_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6208_IList_1_get_Item_m32351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32351_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32351_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6208_il2cpp_TypeInfo/* declaring_type */
	, &MarshalAsAttribute_t1169_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6208_IList_1_get_Item_m32351_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32351_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MarshalAsAttribute_t1169_0_0_0;
static ParameterInfo IList_1_t6208_IList_1_set_Item_m32352_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MarshalAsAttribute_t1169_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32352_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.MarshalAsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32352_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6208_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6208_IList_1_set_Item_m32352_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32352_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6208_MethodInfos[] =
{
	&IList_1_IndexOf_m32353_MethodInfo,
	&IList_1_Insert_m32354_MethodInfo,
	&IList_1_RemoveAt_m32355_MethodInfo,
	&IList_1_get_Item_m32351_MethodInfo,
	&IList_1_set_Item_m32352_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6208_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6207_il2cpp_TypeInfo,
	&IEnumerable_1_t6209_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6208_0_0_0;
extern Il2CppType IList_1_t6208_1_0_0;
struct IList_1_t6208;
extern Il2CppGenericClass IList_1_t6208_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6208_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6208_MethodInfos/* methods */
	, IList_1_t6208_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6208_il2cpp_TypeInfo/* element_class */
	, IList_1_t6208_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6208_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6208_0_0_0/* byval_arg */
	, &IList_1_t6208_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6208_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4788_il2cpp_TypeInfo;

// System.Runtime.InteropServices.InAttribute
#include "mscorlib_System_Runtime_InteropServices_InAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32356_MethodInfo;
static PropertyInfo IEnumerator_1_t4788____Current_PropertyInfo = 
{
	&IEnumerator_1_t4788_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32356_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4788_PropertyInfos[] =
{
	&IEnumerator_1_t4788____Current_PropertyInfo,
	NULL
};
extern Il2CppType InAttribute_t1170_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32356_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32356_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4788_il2cpp_TypeInfo/* declaring_type */
	, &InAttribute_t1170_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32356_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4788_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32356_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4788_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4788_0_0_0;
extern Il2CppType IEnumerator_1_t4788_1_0_0;
struct IEnumerator_1_t4788;
extern Il2CppGenericClass IEnumerator_1_t4788_GenericClass;
TypeInfo IEnumerator_1_t4788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4788_MethodInfos/* methods */
	, IEnumerator_1_t4788_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4788_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4788_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4788_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4788_0_0_0/* byval_arg */
	, &IEnumerator_1_t4788_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4788_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_388.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3359_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_388MethodDeclarations.h"

extern TypeInfo InAttribute_t1170_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18695_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInAttribute_t1170_m24736_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisInAttribute_t1170_m24736(__this, p0, method) (InAttribute_t1170 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3359____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3359, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3359____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3359, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3359_FieldInfos[] =
{
	&InternalEnumerator_1_t3359____array_0_FieldInfo,
	&InternalEnumerator_1_t3359____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18692_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3359____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3359_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18692_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3359____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3359_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18695_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3359_PropertyInfos[] =
{
	&InternalEnumerator_1_t3359____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3359____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3359_InternalEnumerator_1__ctor_m18691_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18691_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18691_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3359_InternalEnumerator_1__ctor_m18691_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18691_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18692_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18692_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18692_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18693_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18693_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18693_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18694_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18694_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18694_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1170_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18695_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18695_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* declaring_type */
	, &InAttribute_t1170_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18695_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3359_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18691_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18692_MethodInfo,
	&InternalEnumerator_1_Dispose_m18693_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18694_MethodInfo,
	&InternalEnumerator_1_get_Current_m18695_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18694_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18693_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3359_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18692_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18694_MethodInfo,
	&InternalEnumerator_1_Dispose_m18693_MethodInfo,
	&InternalEnumerator_1_get_Current_m18695_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3359_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4788_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3359_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4788_il2cpp_TypeInfo, 7},
};
extern TypeInfo InAttribute_t1170_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3359_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18695_MethodInfo/* Method Usage */,
	&InAttribute_t1170_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisInAttribute_t1170_m24736_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3359_0_0_0;
extern Il2CppType InternalEnumerator_1_t3359_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3359_GenericClass;
TypeInfo InternalEnumerator_1_t3359_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3359_MethodInfos/* methods */
	, InternalEnumerator_1_t3359_PropertyInfos/* properties */
	, InternalEnumerator_1_t3359_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3359_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3359_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3359_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3359_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3359_1_0_0/* this_arg */
	, InternalEnumerator_1_t3359_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3359_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3359_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3359)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6210_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo ICollection_1_get_Count_m32357_MethodInfo;
static PropertyInfo ICollection_1_t6210____Count_PropertyInfo = 
{
	&ICollection_1_t6210_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32357_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32358_MethodInfo;
static PropertyInfo ICollection_1_t6210____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6210_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32358_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6210_PropertyInfos[] =
{
	&ICollection_1_t6210____Count_PropertyInfo,
	&ICollection_1_t6210____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32357_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32357_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32357_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32358_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32358_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32358_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1170_0_0_0;
extern Il2CppType InAttribute_t1170_0_0_0;
static ParameterInfo ICollection_1_t6210_ICollection_1_Add_m32359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1170_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32359_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32359_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6210_ICollection_1_Add_m32359_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32359_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32360_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32360_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32360_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1170_0_0_0;
static ParameterInfo ICollection_1_t6210_ICollection_1_Contains_m32361_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1170_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32361_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32361_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6210_ICollection_1_Contains_m32361_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32361_GenericMethod/* genericMethod */

};
extern Il2CppType InAttributeU5BU5D_t3626_0_0_0;
extern Il2CppType InAttributeU5BU5D_t3626_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6210_ICollection_1_CopyTo_m32362_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InAttributeU5BU5D_t3626_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32362_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32362_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6210_ICollection_1_CopyTo_m32362_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32362_GenericMethod/* genericMethod */

};
extern Il2CppType InAttribute_t1170_0_0_0;
static ParameterInfo ICollection_1_t6210_ICollection_1_Remove_m32363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1170_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32363_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32363_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6210_ICollection_1_Remove_m32363_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32363_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6210_MethodInfos[] =
{
	&ICollection_1_get_Count_m32357_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32358_MethodInfo,
	&ICollection_1_Add_m32359_MethodInfo,
	&ICollection_1_Clear_m32360_MethodInfo,
	&ICollection_1_Contains_m32361_MethodInfo,
	&ICollection_1_CopyTo_m32362_MethodInfo,
	&ICollection_1_Remove_m32363_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6212_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6210_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6212_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6210_0_0_0;
extern Il2CppType ICollection_1_t6210_1_0_0;
struct ICollection_1_t6210;
extern Il2CppGenericClass ICollection_1_t6210_GenericClass;
TypeInfo ICollection_1_t6210_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6210_MethodInfos/* methods */
	, ICollection_1_t6210_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6210_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6210_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6210_0_0_0/* byval_arg */
	, &ICollection_1_t6210_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6210_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>
extern Il2CppType IEnumerator_1_t4788_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32364_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32364_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6212_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4788_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32364_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6212_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32364_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6212_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6212_0_0_0;
extern Il2CppType IEnumerable_1_t6212_1_0_0;
struct IEnumerable_1_t6212;
extern Il2CppGenericClass IEnumerable_1_t6212_GenericClass;
TypeInfo IEnumerable_1_t6212_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6212_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6212_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6212_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6212_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6212_0_0_0/* byval_arg */
	, &IEnumerable_1_t6212_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6212_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6211_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>
extern MethodInfo IList_1_get_Item_m32365_MethodInfo;
extern MethodInfo IList_1_set_Item_m32366_MethodInfo;
static PropertyInfo IList_1_t6211____Item_PropertyInfo = 
{
	&IList_1_t6211_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32365_MethodInfo/* get */
	, &IList_1_set_Item_m32366_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6211_PropertyInfos[] =
{
	&IList_1_t6211____Item_PropertyInfo,
	NULL
};
extern Il2CppType InAttribute_t1170_0_0_0;
static ParameterInfo IList_1_t6211_IList_1_IndexOf_m32367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1170_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32367_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32367_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6211_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6211_IList_1_IndexOf_m32367_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32367_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType InAttribute_t1170_0_0_0;
static ParameterInfo IList_1_t6211_IList_1_Insert_m32368_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1170_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32368_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32368_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6211_IList_1_Insert_m32368_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32368_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6211_IList_1_RemoveAt_m32369_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32369_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32369_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6211_IList_1_RemoveAt_m32369_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32369_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6211_IList_1_get_Item_m32365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType InAttribute_t1170_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32365_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32365_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6211_il2cpp_TypeInfo/* declaring_type */
	, &InAttribute_t1170_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6211_IList_1_get_Item_m32365_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32365_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType InAttribute_t1170_0_0_0;
static ParameterInfo IList_1_t6211_IList_1_set_Item_m32366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InAttribute_t1170_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32366_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32366_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6211_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6211_IList_1_set_Item_m32366_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32366_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6211_MethodInfos[] =
{
	&IList_1_IndexOf_m32367_MethodInfo,
	&IList_1_Insert_m32368_MethodInfo,
	&IList_1_RemoveAt_m32369_MethodInfo,
	&IList_1_get_Item_m32365_MethodInfo,
	&IList_1_set_Item_m32366_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6211_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6210_il2cpp_TypeInfo,
	&IEnumerable_1_t6212_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6211_0_0_0;
extern Il2CppType IList_1_t6211_1_0_0;
struct IList_1_t6211;
extern Il2CppGenericClass IList_1_t6211_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6211_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6211_MethodInfos/* methods */
	, IList_1_t6211_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6211_il2cpp_TypeInfo/* element_class */
	, IList_1_t6211_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6211_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6211_0_0_0/* byval_arg */
	, &IList_1_t6211_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6211_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4790_il2cpp_TypeInfo;

// System.Runtime.InteropServices.GuidAttribute
#include "mscorlib_System_Runtime_InteropServices_GuidAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32370_MethodInfo;
static PropertyInfo IEnumerator_1_t4790____Current_PropertyInfo = 
{
	&IEnumerator_1_t4790_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32370_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4790_PropertyInfos[] =
{
	&IEnumerator_1_t4790____Current_PropertyInfo,
	NULL
};
extern Il2CppType GuidAttribute_t407_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32370_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32370_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4790_il2cpp_TypeInfo/* declaring_type */
	, &GuidAttribute_t407_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32370_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4790_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32370_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4790_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4790_0_0_0;
extern Il2CppType IEnumerator_1_t4790_1_0_0;
struct IEnumerator_1_t4790;
extern Il2CppGenericClass IEnumerator_1_t4790_GenericClass;
TypeInfo IEnumerator_1_t4790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4790_MethodInfos/* methods */
	, IEnumerator_1_t4790_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4790_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4790_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4790_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4790_0_0_0/* byval_arg */
	, &IEnumerator_1_t4790_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4790_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_389.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3360_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_389MethodDeclarations.h"

extern TypeInfo GuidAttribute_t407_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18700_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGuidAttribute_t407_m24747_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GuidAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GuidAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisGuidAttribute_t407_m24747(__this, p0, method) (GuidAttribute_t407 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3360____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3360, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3360____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3360, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3360_FieldInfos[] =
{
	&InternalEnumerator_1_t3360____array_0_FieldInfo,
	&InternalEnumerator_1_t3360____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3360____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3360_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3360____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3360_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3360_PropertyInfos[] =
{
	&InternalEnumerator_1_t3360____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3360____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3360_InternalEnumerator_1__ctor_m18696_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18696_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18696_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3360_InternalEnumerator_1__ctor_m18696_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18696_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18698_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18698_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18698_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18699_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18699_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18699_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t407_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18700_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GuidAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18700_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* declaring_type */
	, &GuidAttribute_t407_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18700_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3360_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18696_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_MethodInfo,
	&InternalEnumerator_1_Dispose_m18698_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18699_MethodInfo,
	&InternalEnumerator_1_get_Current_m18700_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18699_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18698_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3360_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18697_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18699_MethodInfo,
	&InternalEnumerator_1_Dispose_m18698_MethodInfo,
	&InternalEnumerator_1_get_Current_m18700_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3360_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4790_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3360_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4790_il2cpp_TypeInfo, 7},
};
extern TypeInfo GuidAttribute_t407_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3360_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18700_MethodInfo/* Method Usage */,
	&GuidAttribute_t407_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisGuidAttribute_t407_m24747_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3360_0_0_0;
extern Il2CppType InternalEnumerator_1_t3360_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3360_GenericClass;
TypeInfo InternalEnumerator_1_t3360_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3360_MethodInfos/* methods */
	, InternalEnumerator_1_t3360_PropertyInfos/* properties */
	, InternalEnumerator_1_t3360_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3360_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3360_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3360_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3360_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3360_1_0_0/* this_arg */
	, InternalEnumerator_1_t3360_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3360_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3360_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3360)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6213_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo ICollection_1_get_Count_m32371_MethodInfo;
static PropertyInfo ICollection_1_t6213____Count_PropertyInfo = 
{
	&ICollection_1_t6213_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32371_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32372_MethodInfo;
static PropertyInfo ICollection_1_t6213____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6213_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32372_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6213_PropertyInfos[] =
{
	&ICollection_1_t6213____Count_PropertyInfo,
	&ICollection_1_t6213____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32371_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32371_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32371_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32372_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32372_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32372_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t407_0_0_0;
extern Il2CppType GuidAttribute_t407_0_0_0;
static ParameterInfo ICollection_1_t6213_ICollection_1_Add_m32373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t407_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32373_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32373_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6213_ICollection_1_Add_m32373_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32373_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32374_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32374_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32374_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t407_0_0_0;
static ParameterInfo ICollection_1_t6213_ICollection_1_Contains_m32375_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t407_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32375_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32375_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6213_ICollection_1_Contains_m32375_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32375_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttributeU5BU5D_t3627_0_0_0;
extern Il2CppType GuidAttributeU5BU5D_t3627_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6213_ICollection_1_CopyTo_m32376_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttributeU5BU5D_t3627_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32376_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32376_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6213_ICollection_1_CopyTo_m32376_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32376_GenericMethod/* genericMethod */

};
extern Il2CppType GuidAttribute_t407_0_0_0;
static ParameterInfo ICollection_1_t6213_ICollection_1_Remove_m32377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t407_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32377_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GuidAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32377_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6213_ICollection_1_Remove_m32377_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32377_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6213_MethodInfos[] =
{
	&ICollection_1_get_Count_m32371_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32372_MethodInfo,
	&ICollection_1_Add_m32373_MethodInfo,
	&ICollection_1_Clear_m32374_MethodInfo,
	&ICollection_1_Contains_m32375_MethodInfo,
	&ICollection_1_CopyTo_m32376_MethodInfo,
	&ICollection_1_Remove_m32377_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6215_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6213_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6215_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6213_0_0_0;
extern Il2CppType ICollection_1_t6213_1_0_0;
struct ICollection_1_t6213;
extern Il2CppGenericClass ICollection_1_t6213_GenericClass;
TypeInfo ICollection_1_t6213_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6213_MethodInfos/* methods */
	, ICollection_1_t6213_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6213_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6213_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6213_0_0_0/* byval_arg */
	, &ICollection_1_t6213_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6213_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>
extern Il2CppType IEnumerator_1_t4790_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32378_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GuidAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32378_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6215_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4790_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32378_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6215_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32378_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6215_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6215_0_0_0;
extern Il2CppType IEnumerable_1_t6215_1_0_0;
struct IEnumerable_1_t6215;
extern Il2CppGenericClass IEnumerable_1_t6215_GenericClass;
TypeInfo IEnumerable_1_t6215_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6215_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6215_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6215_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6215_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6215_0_0_0/* byval_arg */
	, &IEnumerable_1_t6215_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6215_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6214_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>
extern MethodInfo IList_1_get_Item_m32379_MethodInfo;
extern MethodInfo IList_1_set_Item_m32380_MethodInfo;
static PropertyInfo IList_1_t6214____Item_PropertyInfo = 
{
	&IList_1_t6214_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32379_MethodInfo/* get */
	, &IList_1_set_Item_m32380_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6214_PropertyInfos[] =
{
	&IList_1_t6214____Item_PropertyInfo,
	NULL
};
extern Il2CppType GuidAttribute_t407_0_0_0;
static ParameterInfo IList_1_t6214_IList_1_IndexOf_m32381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t407_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32381_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32381_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6214_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6214_IList_1_IndexOf_m32381_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32381_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType GuidAttribute_t407_0_0_0;
static ParameterInfo IList_1_t6214_IList_1_Insert_m32382_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t407_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32382_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32382_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6214_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6214_IList_1_Insert_m32382_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32382_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6214_IList_1_RemoveAt_m32383_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32383_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32383_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6214_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6214_IList_1_RemoveAt_m32383_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32383_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6214_IList_1_get_Item_m32379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType GuidAttribute_t407_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32379_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32379_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6214_il2cpp_TypeInfo/* declaring_type */
	, &GuidAttribute_t407_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6214_IList_1_get_Item_m32379_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32379_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType GuidAttribute_t407_0_0_0;
static ParameterInfo IList_1_t6214_IList_1_set_Item_m32380_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GuidAttribute_t407_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32380_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GuidAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32380_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6214_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6214_IList_1_set_Item_m32380_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32380_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6214_MethodInfos[] =
{
	&IList_1_IndexOf_m32381_MethodInfo,
	&IList_1_Insert_m32382_MethodInfo,
	&IList_1_RemoveAt_m32383_MethodInfo,
	&IList_1_get_Item_m32379_MethodInfo,
	&IList_1_set_Item_m32380_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6214_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6213_il2cpp_TypeInfo,
	&IEnumerable_1_t6215_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6214_0_0_0;
extern Il2CppType IList_1_t6214_1_0_0;
struct IList_1_t6214;
extern Il2CppGenericClass IList_1_t6214_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6214_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6214_MethodInfos/* methods */
	, IList_1_t6214_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6214_il2cpp_TypeInfo/* element_class */
	, IList_1_t6214_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6214_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6214_0_0_0/* byval_arg */
	, &IList_1_t6214_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6214_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4792_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComImportAttribute
#include "mscorlib_System_Runtime_InteropServices_ComImportAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32384_MethodInfo;
static PropertyInfo IEnumerator_1_t4792____Current_PropertyInfo = 
{
	&IEnumerator_1_t4792_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32384_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4792_PropertyInfos[] =
{
	&IEnumerator_1_t4792____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComImportAttribute_t1171_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32384_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32384_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4792_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t1171_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32384_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4792_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32384_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4792_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4792_0_0_0;
extern Il2CppType IEnumerator_1_t4792_1_0_0;
struct IEnumerator_1_t4792;
extern Il2CppGenericClass IEnumerator_1_t4792_GenericClass;
TypeInfo IEnumerator_1_t4792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4792_MethodInfos/* methods */
	, IEnumerator_1_t4792_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4792_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4792_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4792_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4792_0_0_0/* byval_arg */
	, &IEnumerator_1_t4792_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4792_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_390.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3361_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_390MethodDeclarations.h"

extern TypeInfo ComImportAttribute_t1171_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18705_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComImportAttribute_t1171_m24758_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComImportAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComImportAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComImportAttribute_t1171_m24758(__this, p0, method) (ComImportAttribute_t1171 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3361____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3361, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3361____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3361, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3361_FieldInfos[] =
{
	&InternalEnumerator_1_t3361____array_0_FieldInfo,
	&InternalEnumerator_1_t3361____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18702_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3361____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3361_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3361____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3361_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18705_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3361_PropertyInfos[] =
{
	&InternalEnumerator_1_t3361____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3361____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3361_InternalEnumerator_1__ctor_m18701_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18701_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18701_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3361_InternalEnumerator_1__ctor_m18701_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18701_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18702_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18702_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18702_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18703_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18703_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18703_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18704_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18704_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18704_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1171_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18705_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComImportAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18705_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t1171_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18705_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3361_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18701_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18702_MethodInfo,
	&InternalEnumerator_1_Dispose_m18703_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18704_MethodInfo,
	&InternalEnumerator_1_get_Current_m18705_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18704_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18703_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3361_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18702_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18704_MethodInfo,
	&InternalEnumerator_1_Dispose_m18703_MethodInfo,
	&InternalEnumerator_1_get_Current_m18705_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3361_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4792_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3361_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4792_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComImportAttribute_t1171_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3361_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18705_MethodInfo/* Method Usage */,
	&ComImportAttribute_t1171_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComImportAttribute_t1171_m24758_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3361_0_0_0;
extern Il2CppType InternalEnumerator_1_t3361_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3361_GenericClass;
TypeInfo InternalEnumerator_1_t3361_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3361_MethodInfos/* methods */
	, InternalEnumerator_1_t3361_PropertyInfos/* properties */
	, InternalEnumerator_1_t3361_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3361_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3361_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3361_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3361_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3361_1_0_0/* this_arg */
	, InternalEnumerator_1_t3361_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3361_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3361_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3361)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6216_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo ICollection_1_get_Count_m32385_MethodInfo;
static PropertyInfo ICollection_1_t6216____Count_PropertyInfo = 
{
	&ICollection_1_t6216_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32385_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32386_MethodInfo;
static PropertyInfo ICollection_1_t6216____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6216_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32386_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6216_PropertyInfos[] =
{
	&ICollection_1_t6216____Count_PropertyInfo,
	&ICollection_1_t6216____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32385_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32385_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32385_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32386_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32386_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32386_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1171_0_0_0;
extern Il2CppType ComImportAttribute_t1171_0_0_0;
static ParameterInfo ICollection_1_t6216_ICollection_1_Add_m32387_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1171_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32387_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32387_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6216_ICollection_1_Add_m32387_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32387_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32388_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32388_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32388_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1171_0_0_0;
static ParameterInfo ICollection_1_t6216_ICollection_1_Contains_m32389_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1171_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32389_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32389_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6216_ICollection_1_Contains_m32389_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32389_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttributeU5BU5D_t3628_0_0_0;
extern Il2CppType ComImportAttributeU5BU5D_t3628_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6216_ICollection_1_CopyTo_m32390_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttributeU5BU5D_t3628_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32390_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32390_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6216_ICollection_1_CopyTo_m32390_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32390_GenericMethod/* genericMethod */

};
extern Il2CppType ComImportAttribute_t1171_0_0_0;
static ParameterInfo ICollection_1_t6216_ICollection_1_Remove_m32391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1171_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32391_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComImportAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32391_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6216_ICollection_1_Remove_m32391_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32391_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6216_MethodInfos[] =
{
	&ICollection_1_get_Count_m32385_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32386_MethodInfo,
	&ICollection_1_Add_m32387_MethodInfo,
	&ICollection_1_Clear_m32388_MethodInfo,
	&ICollection_1_Contains_m32389_MethodInfo,
	&ICollection_1_CopyTo_m32390_MethodInfo,
	&ICollection_1_Remove_m32391_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6218_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6216_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6218_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6216_0_0_0;
extern Il2CppType ICollection_1_t6216_1_0_0;
struct ICollection_1_t6216;
extern Il2CppGenericClass ICollection_1_t6216_GenericClass;
TypeInfo ICollection_1_t6216_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6216_MethodInfos/* methods */
	, ICollection_1_t6216_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6216_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6216_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6216_0_0_0/* byval_arg */
	, &ICollection_1_t6216_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6216_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>
extern Il2CppType IEnumerator_1_t4792_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32392_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComImportAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32392_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6218_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4792_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32392_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6218_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32392_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6218_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6218_0_0_0;
extern Il2CppType IEnumerable_1_t6218_1_0_0;
struct IEnumerable_1_t6218;
extern Il2CppGenericClass IEnumerable_1_t6218_GenericClass;
TypeInfo IEnumerable_1_t6218_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6218_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6218_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6218_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6218_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6218_0_0_0/* byval_arg */
	, &IEnumerable_1_t6218_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6218_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6217_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>
extern MethodInfo IList_1_get_Item_m32393_MethodInfo;
extern MethodInfo IList_1_set_Item_m32394_MethodInfo;
static PropertyInfo IList_1_t6217____Item_PropertyInfo = 
{
	&IList_1_t6217_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32393_MethodInfo/* get */
	, &IList_1_set_Item_m32394_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6217_PropertyInfos[] =
{
	&IList_1_t6217____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComImportAttribute_t1171_0_0_0;
static ParameterInfo IList_1_t6217_IList_1_IndexOf_m32395_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1171_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32395_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32395_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6217_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6217_IList_1_IndexOf_m32395_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32395_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ComImportAttribute_t1171_0_0_0;
static ParameterInfo IList_1_t6217_IList_1_Insert_m32396_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1171_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32396_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32396_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6217_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6217_IList_1_Insert_m32396_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32396_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6217_IList_1_RemoveAt_m32397_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32397_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32397_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6217_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6217_IList_1_RemoveAt_m32397_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32397_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6217_IList_1_get_Item_m32393_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ComImportAttribute_t1171_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32393_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32393_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6217_il2cpp_TypeInfo/* declaring_type */
	, &ComImportAttribute_t1171_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6217_IList_1_get_Item_m32393_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32393_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ComImportAttribute_t1171_0_0_0;
static ParameterInfo IList_1_t6217_IList_1_set_Item_m32394_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComImportAttribute_t1171_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32394_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComImportAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32394_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6217_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6217_IList_1_set_Item_m32394_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32394_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6217_MethodInfos[] =
{
	&IList_1_IndexOf_m32395_MethodInfo,
	&IList_1_Insert_m32396_MethodInfo,
	&IList_1_RemoveAt_m32397_MethodInfo,
	&IList_1_get_Item_m32393_MethodInfo,
	&IList_1_set_Item_m32394_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6217_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6216_il2cpp_TypeInfo,
	&IEnumerable_1_t6218_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6217_0_0_0;
extern Il2CppType IList_1_t6217_1_0_0;
struct IList_1_t6217;
extern Il2CppGenericClass IList_1_t6217_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6217_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6217_MethodInfos/* methods */
	, IList_1_t6217_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6217_il2cpp_TypeInfo/* element_class */
	, IList_1_t6217_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6217_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6217_0_0_0/* byval_arg */
	, &IList_1_t6217_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6217_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4794_il2cpp_TypeInfo;

// System.Runtime.InteropServices.OptionalAttribute
#include "mscorlib_System_Runtime_InteropServices_OptionalAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32398_MethodInfo;
static PropertyInfo IEnumerator_1_t4794____Current_PropertyInfo = 
{
	&IEnumerator_1_t4794_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32398_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4794_PropertyInfos[] =
{
	&IEnumerator_1_t4794____Current_PropertyInfo,
	NULL
};
extern Il2CppType OptionalAttribute_t1172_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32398_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32398_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4794_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t1172_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32398_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4794_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32398_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4794_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4794_0_0_0;
extern Il2CppType IEnumerator_1_t4794_1_0_0;
struct IEnumerator_1_t4794;
extern Il2CppGenericClass IEnumerator_1_t4794_GenericClass;
TypeInfo IEnumerator_1_t4794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4794_MethodInfos/* methods */
	, IEnumerator_1_t4794_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4794_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4794_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4794_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4794_0_0_0/* byval_arg */
	, &IEnumerator_1_t4794_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4794_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_391.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3362_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_391MethodDeclarations.h"

extern TypeInfo OptionalAttribute_t1172_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18710_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOptionalAttribute_t1172_m24769_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OptionalAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OptionalAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOptionalAttribute_t1172_m24769(__this, p0, method) (OptionalAttribute_t1172 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3362____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3362, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3362____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3362, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3362_FieldInfos[] =
{
	&InternalEnumerator_1_t3362____array_0_FieldInfo,
	&InternalEnumerator_1_t3362____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18707_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3362____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3362_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18707_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3362____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3362_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18710_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3362_PropertyInfos[] =
{
	&InternalEnumerator_1_t3362____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3362____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3362_InternalEnumerator_1__ctor_m18706_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18706_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18706_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3362_InternalEnumerator_1__ctor_m18706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18706_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18707_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18707_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18707_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18708_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18708_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18708_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18709_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18709_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18709_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1172_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18710_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OptionalAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18710_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t1172_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18710_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3362_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18706_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18707_MethodInfo,
	&InternalEnumerator_1_Dispose_m18708_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18709_MethodInfo,
	&InternalEnumerator_1_get_Current_m18710_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18709_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18708_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3362_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18707_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18709_MethodInfo,
	&InternalEnumerator_1_Dispose_m18708_MethodInfo,
	&InternalEnumerator_1_get_Current_m18710_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3362_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4794_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3362_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4794_il2cpp_TypeInfo, 7},
};
extern TypeInfo OptionalAttribute_t1172_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3362_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18710_MethodInfo/* Method Usage */,
	&OptionalAttribute_t1172_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOptionalAttribute_t1172_m24769_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3362_0_0_0;
extern Il2CppType InternalEnumerator_1_t3362_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3362_GenericClass;
TypeInfo InternalEnumerator_1_t3362_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3362_MethodInfos/* methods */
	, InternalEnumerator_1_t3362_PropertyInfos/* properties */
	, InternalEnumerator_1_t3362_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3362_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3362_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3362_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3362_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3362_1_0_0/* this_arg */
	, InternalEnumerator_1_t3362_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3362_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3362_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3362)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6219_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo ICollection_1_get_Count_m32399_MethodInfo;
static PropertyInfo ICollection_1_t6219____Count_PropertyInfo = 
{
	&ICollection_1_t6219_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32399_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32400_MethodInfo;
static PropertyInfo ICollection_1_t6219____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6219_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32400_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6219_PropertyInfos[] =
{
	&ICollection_1_t6219____Count_PropertyInfo,
	&ICollection_1_t6219____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32399_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32399_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32399_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32400_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32400_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32400_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1172_0_0_0;
extern Il2CppType OptionalAttribute_t1172_0_0_0;
static ParameterInfo ICollection_1_t6219_ICollection_1_Add_m32401_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1172_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32401_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32401_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6219_ICollection_1_Add_m32401_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32401_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32402_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32402_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32402_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1172_0_0_0;
static ParameterInfo ICollection_1_t6219_ICollection_1_Contains_m32403_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1172_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32403_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32403_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6219_ICollection_1_Contains_m32403_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32403_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttributeU5BU5D_t3629_0_0_0;
extern Il2CppType OptionalAttributeU5BU5D_t3629_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6219_ICollection_1_CopyTo_m32404_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttributeU5BU5D_t3629_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32404_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32404_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6219_ICollection_1_CopyTo_m32404_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32404_GenericMethod/* genericMethod */

};
extern Il2CppType OptionalAttribute_t1172_0_0_0;
static ParameterInfo ICollection_1_t6219_ICollection_1_Remove_m32405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1172_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32405_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OptionalAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32405_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6219_ICollection_1_Remove_m32405_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32405_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6219_MethodInfos[] =
{
	&ICollection_1_get_Count_m32399_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32400_MethodInfo,
	&ICollection_1_Add_m32401_MethodInfo,
	&ICollection_1_Clear_m32402_MethodInfo,
	&ICollection_1_Contains_m32403_MethodInfo,
	&ICollection_1_CopyTo_m32404_MethodInfo,
	&ICollection_1_Remove_m32405_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6221_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6219_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6221_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6219_0_0_0;
extern Il2CppType ICollection_1_t6219_1_0_0;
struct ICollection_1_t6219;
extern Il2CppGenericClass ICollection_1_t6219_GenericClass;
TypeInfo ICollection_1_t6219_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6219_MethodInfos/* methods */
	, ICollection_1_t6219_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6219_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6219_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6219_0_0_0/* byval_arg */
	, &ICollection_1_t6219_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6219_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>
extern Il2CppType IEnumerator_1_t4794_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32406_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OptionalAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32406_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6221_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4794_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32406_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6221_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32406_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6221_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6221_0_0_0;
extern Il2CppType IEnumerable_1_t6221_1_0_0;
struct IEnumerable_1_t6221;
extern Il2CppGenericClass IEnumerable_1_t6221_GenericClass;
TypeInfo IEnumerable_1_t6221_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6221_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6221_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6221_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6221_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6221_0_0_0/* byval_arg */
	, &IEnumerable_1_t6221_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6221_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6220_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>
extern MethodInfo IList_1_get_Item_m32407_MethodInfo;
extern MethodInfo IList_1_set_Item_m32408_MethodInfo;
static PropertyInfo IList_1_t6220____Item_PropertyInfo = 
{
	&IList_1_t6220_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32407_MethodInfo/* get */
	, &IList_1_set_Item_m32408_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6220_PropertyInfos[] =
{
	&IList_1_t6220____Item_PropertyInfo,
	NULL
};
extern Il2CppType OptionalAttribute_t1172_0_0_0;
static ParameterInfo IList_1_t6220_IList_1_IndexOf_m32409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1172_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32409_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32409_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6220_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6220_IList_1_IndexOf_m32409_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32409_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OptionalAttribute_t1172_0_0_0;
static ParameterInfo IList_1_t6220_IList_1_Insert_m32410_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1172_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32410_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32410_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6220_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6220_IList_1_Insert_m32410_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32410_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6220_IList_1_RemoveAt_m32411_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32411_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32411_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6220_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6220_IList_1_RemoveAt_m32411_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32411_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6220_IList_1_get_Item_m32407_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType OptionalAttribute_t1172_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32407_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32407_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6220_il2cpp_TypeInfo/* declaring_type */
	, &OptionalAttribute_t1172_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6220_IList_1_get_Item_m32407_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32407_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OptionalAttribute_t1172_0_0_0;
static ParameterInfo IList_1_t6220_IList_1_set_Item_m32408_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OptionalAttribute_t1172_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32408_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OptionalAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32408_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6220_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6220_IList_1_set_Item_m32408_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32408_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6220_MethodInfos[] =
{
	&IList_1_IndexOf_m32409_MethodInfo,
	&IList_1_Insert_m32410_MethodInfo,
	&IList_1_RemoveAt_m32411_MethodInfo,
	&IList_1_get_Item_m32407_MethodInfo,
	&IList_1_set_Item_m32408_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6220_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6219_il2cpp_TypeInfo,
	&IEnumerable_1_t6221_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6220_0_0_0;
extern Il2CppType IList_1_t6220_1_0_0;
struct IList_1_t6220;
extern Il2CppGenericClass IList_1_t6220_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6220_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6220_MethodInfos/* methods */
	, IList_1_t6220_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6220_il2cpp_TypeInfo/* element_class */
	, IList_1_t6220_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6220_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6220_0_0_0/* byval_arg */
	, &IList_1_t6220_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6220_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4796_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32412_MethodInfo;
static PropertyInfo IEnumerator_1_t4796____Current_PropertyInfo = 
{
	&IEnumerator_1_t4796_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32412_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4796_PropertyInfos[] =
{
	&IEnumerator_1_t4796____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32412_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32412_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4796_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t280_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32412_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4796_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32412_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4796_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4796_0_0_0;
extern Il2CppType IEnumerator_1_t4796_1_0_0;
struct IEnumerator_1_t4796;
extern Il2CppGenericClass IEnumerator_1_t4796_GenericClass;
TypeInfo IEnumerator_1_t4796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4796_MethodInfos/* methods */
	, IEnumerator_1_t4796_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4796_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4796_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4796_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4796_0_0_0/* byval_arg */
	, &IEnumerator_1_t4796_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4796_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_392.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3363_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_392MethodDeclarations.h"

extern TypeInfo CompilerGeneratedAttribute_t280_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18715_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t280_m24780_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilerGeneratedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilerGeneratedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t280_m24780(__this, p0, method) (CompilerGeneratedAttribute_t280 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3363____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3363, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3363____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3363, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3363_FieldInfos[] =
{
	&InternalEnumerator_1_t3363____array_0_FieldInfo,
	&InternalEnumerator_1_t3363____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3363____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3363_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3363____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3363_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18715_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3363_PropertyInfos[] =
{
	&InternalEnumerator_1_t3363____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3363____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3363_InternalEnumerator_1__ctor_m18711_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18711_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18711_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3363_InternalEnumerator_1__ctor_m18711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18711_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18713_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18713_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18713_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18714_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18714_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18714_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18715_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18715_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t280_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18715_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3363_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18711_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_MethodInfo,
	&InternalEnumerator_1_Dispose_m18713_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18714_MethodInfo,
	&InternalEnumerator_1_get_Current_m18715_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18714_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18713_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3363_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18712_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18714_MethodInfo,
	&InternalEnumerator_1_Dispose_m18713_MethodInfo,
	&InternalEnumerator_1_get_Current_m18715_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3363_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4796_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3363_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4796_il2cpp_TypeInfo, 7},
};
extern TypeInfo CompilerGeneratedAttribute_t280_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3363_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18715_MethodInfo/* Method Usage */,
	&CompilerGeneratedAttribute_t280_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCompilerGeneratedAttribute_t280_m24780_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3363_0_0_0;
extern Il2CppType InternalEnumerator_1_t3363_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3363_GenericClass;
TypeInfo InternalEnumerator_1_t3363_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3363_MethodInfos/* methods */
	, InternalEnumerator_1_t3363_PropertyInfos/* properties */
	, InternalEnumerator_1_t3363_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3363_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3363_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3363_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3363_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3363_1_0_0/* this_arg */
	, InternalEnumerator_1_t3363_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3363_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3363_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3363)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6222_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo ICollection_1_get_Count_m32413_MethodInfo;
static PropertyInfo ICollection_1_t6222____Count_PropertyInfo = 
{
	&ICollection_1_t6222_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32413_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32414_MethodInfo;
static PropertyInfo ICollection_1_t6222____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6222_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32414_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6222_PropertyInfos[] =
{
	&ICollection_1_t6222____Count_PropertyInfo,
	&ICollection_1_t6222____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32413_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32413_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32413_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32414_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32414_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32414_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
static ParameterInfo ICollection_1_t6222_ICollection_1_Add_m32415_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t280_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32415_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32415_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6222_ICollection_1_Add_m32415_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32415_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32416_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32416_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32416_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
static ParameterInfo ICollection_1_t6222_ICollection_1_Contains_m32417_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t280_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32417_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32417_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6222_ICollection_1_Contains_m32417_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32417_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttributeU5BU5D_t3630_0_0_0;
extern Il2CppType CompilerGeneratedAttributeU5BU5D_t3630_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6222_ICollection_1_CopyTo_m32418_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttributeU5BU5D_t3630_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32418_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32418_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6222_ICollection_1_CopyTo_m32418_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32418_GenericMethod/* genericMethod */

};
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
static ParameterInfo ICollection_1_t6222_ICollection_1_Remove_m32419_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t280_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32419_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32419_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6222_ICollection_1_Remove_m32419_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32419_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6222_MethodInfos[] =
{
	&ICollection_1_get_Count_m32413_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32414_MethodInfo,
	&ICollection_1_Add_m32415_MethodInfo,
	&ICollection_1_Clear_m32416_MethodInfo,
	&ICollection_1_Contains_m32417_MethodInfo,
	&ICollection_1_CopyTo_m32418_MethodInfo,
	&ICollection_1_Remove_m32419_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6224_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6222_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6224_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6222_0_0_0;
extern Il2CppType ICollection_1_t6222_1_0_0;
struct ICollection_1_t6222;
extern Il2CppGenericClass ICollection_1_t6222_GenericClass;
TypeInfo ICollection_1_t6222_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6222_MethodInfos/* methods */
	, ICollection_1_t6222_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6222_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6222_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6222_0_0_0/* byval_arg */
	, &ICollection_1_t6222_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6222_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern Il2CppType IEnumerator_1_t4796_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32420_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32420_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6224_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4796_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32420_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6224_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32420_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6224_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6224_0_0_0;
extern Il2CppType IEnumerable_1_t6224_1_0_0;
struct IEnumerable_1_t6224;
extern Il2CppGenericClass IEnumerable_1_t6224_GenericClass;
TypeInfo IEnumerable_1_t6224_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6224_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6224_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6224_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6224_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6224_0_0_0/* byval_arg */
	, &IEnumerable_1_t6224_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6224_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6223_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>
extern MethodInfo IList_1_get_Item_m32421_MethodInfo;
extern MethodInfo IList_1_set_Item_m32422_MethodInfo;
static PropertyInfo IList_1_t6223____Item_PropertyInfo = 
{
	&IList_1_t6223_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32421_MethodInfo/* get */
	, &IList_1_set_Item_m32422_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6223_PropertyInfos[] =
{
	&IList_1_t6223____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
static ParameterInfo IList_1_t6223_IList_1_IndexOf_m32423_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t280_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32423_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32423_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6223_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6223_IList_1_IndexOf_m32423_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32423_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
static ParameterInfo IList_1_t6223_IList_1_Insert_m32424_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t280_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32424_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32424_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6223_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6223_IList_1_Insert_m32424_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32424_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6223_IList_1_RemoveAt_m32425_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32425_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32425_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6223_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6223_IList_1_RemoveAt_m32425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32425_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6223_IList_1_get_Item_m32421_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32421_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32421_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6223_il2cpp_TypeInfo/* declaring_type */
	, &CompilerGeneratedAttribute_t280_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6223_IList_1_get_Item_m32421_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32421_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CompilerGeneratedAttribute_t280_0_0_0;
static ParameterInfo IList_1_t6223_IList_1_set_Item_m32422_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilerGeneratedAttribute_t280_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32422_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilerGeneratedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32422_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6223_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6223_IList_1_set_Item_m32422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32422_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6223_MethodInfos[] =
{
	&IList_1_IndexOf_m32423_MethodInfo,
	&IList_1_Insert_m32424_MethodInfo,
	&IList_1_RemoveAt_m32425_MethodInfo,
	&IList_1_get_Item_m32421_MethodInfo,
	&IList_1_set_Item_m32422_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6223_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6222_il2cpp_TypeInfo,
	&IEnumerable_1_t6224_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6223_0_0_0;
extern Il2CppType IList_1_t6223_1_0_0;
struct IList_1_t6223;
extern Il2CppGenericClass IList_1_t6223_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6223_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6223_MethodInfos/* methods */
	, IList_1_t6223_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6223_il2cpp_TypeInfo/* element_class */
	, IList_1_t6223_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6223_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6223_0_0_0/* byval_arg */
	, &IList_1_t6223_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6223_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4798_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32426_MethodInfo;
static PropertyInfo IEnumerator_1_t4798____Current_PropertyInfo = 
{
	&IEnumerator_1_t4798_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32426_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4798_PropertyInfos[] =
{
	&IEnumerator_1_t4798____Current_PropertyInfo,
	NULL
};
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32426_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32426_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4798_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t726_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32426_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4798_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32426_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4798_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4798_0_0_0;
extern Il2CppType IEnumerator_1_t4798_1_0_0;
struct IEnumerator_1_t4798;
extern Il2CppGenericClass IEnumerator_1_t4798_GenericClass;
TypeInfo IEnumerator_1_t4798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4798_MethodInfos/* methods */
	, IEnumerator_1_t4798_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4798_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4798_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4798_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4798_0_0_0/* byval_arg */
	, &IEnumerator_1_t4798_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4798_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_393.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3364_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_393MethodDeclarations.h"

extern TypeInfo InternalsVisibleToAttribute_t726_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18720_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t726_m24791_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.InternalsVisibleToAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.InternalsVisibleToAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t726_m24791(__this, p0, method) (InternalsVisibleToAttribute_t726 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3364____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3364, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3364____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3364, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3364_FieldInfos[] =
{
	&InternalEnumerator_1_t3364____array_0_FieldInfo,
	&InternalEnumerator_1_t3364____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3364____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3364_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3364____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3364_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18720_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3364_PropertyInfos[] =
{
	&InternalEnumerator_1_t3364____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3364____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3364_InternalEnumerator_1__ctor_m18716_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18716_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18716_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3364_InternalEnumerator_1__ctor_m18716_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m18716_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18718_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18718_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m18718_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18719_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18719_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m18719_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18720_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18720_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t726_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m18720_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3364_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18716_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_MethodInfo,
	&InternalEnumerator_1_Dispose_m18718_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18719_MethodInfo,
	&InternalEnumerator_1_get_Current_m18720_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18719_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18718_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3364_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18717_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18719_MethodInfo,
	&InternalEnumerator_1_Dispose_m18718_MethodInfo,
	&InternalEnumerator_1_get_Current_m18720_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3364_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4798_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3364_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4798_il2cpp_TypeInfo, 7},
};
extern TypeInfo InternalsVisibleToAttribute_t726_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3364_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18720_MethodInfo/* Method Usage */,
	&InternalsVisibleToAttribute_t726_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisInternalsVisibleToAttribute_t726_m24791_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3364_0_0_0;
extern Il2CppType InternalEnumerator_1_t3364_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3364_GenericClass;
TypeInfo InternalEnumerator_1_t3364_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3364_MethodInfos/* methods */
	, InternalEnumerator_1_t3364_PropertyInfos/* properties */
	, InternalEnumerator_1_t3364_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3364_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3364_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3364_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3364_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3364_1_0_0/* this_arg */
	, InternalEnumerator_1_t3364_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3364_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3364_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3364)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 8/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t6225_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo ICollection_1_get_Count_m32427_MethodInfo;
static PropertyInfo ICollection_1_t6225____Count_PropertyInfo = 
{
	&ICollection_1_t6225_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32427_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32428_MethodInfo;
static PropertyInfo ICollection_1_t6225____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6225_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32428_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6225_PropertyInfos[] =
{
	&ICollection_1_t6225____Count_PropertyInfo,
	&ICollection_1_t6225____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32427_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32427_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m32427_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32428_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32428_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m32428_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
static ParameterInfo ICollection_1_t6225_ICollection_1_Add_m32429_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t726_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32429_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32429_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6225_ICollection_1_Add_m32429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m32429_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32430_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32430_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m32430_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
static ParameterInfo ICollection_1_t6225_ICollection_1_Contains_m32431_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t726_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32431_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32431_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6225_ICollection_1_Contains_m32431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m32431_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttributeU5BU5D_t3631_0_0_0;
extern Il2CppType InternalsVisibleToAttributeU5BU5D_t3631_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6225_ICollection_1_CopyTo_m32432_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttributeU5BU5D_t3631_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32432_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32432_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6225_ICollection_1_CopyTo_m32432_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m32432_GenericMethod/* genericMethod */

};
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
static ParameterInfo ICollection_1_t6225_ICollection_1_Remove_m32433_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t726_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32433_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32433_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6225_ICollection_1_Remove_m32433_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m32433_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6225_MethodInfos[] =
{
	&ICollection_1_get_Count_m32427_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32428_MethodInfo,
	&ICollection_1_Add_m32429_MethodInfo,
	&ICollection_1_Clear_m32430_MethodInfo,
	&ICollection_1_Contains_m32431_MethodInfo,
	&ICollection_1_CopyTo_m32432_MethodInfo,
	&ICollection_1_Remove_m32433_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6227_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6225_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6227_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6225_0_0_0;
extern Il2CppType ICollection_1_t6225_1_0_0;
struct ICollection_1_t6225;
extern Il2CppGenericClass ICollection_1_t6225_GenericClass;
TypeInfo ICollection_1_t6225_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6225_MethodInfos/* methods */
	, ICollection_1_t6225_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6225_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6225_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6225_0_0_0/* byval_arg */
	, &ICollection_1_t6225_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6225_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern Il2CppType IEnumerator_1_t4798_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32434_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32434_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6227_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4798_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m32434_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6227_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32434_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6227_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6227_0_0_0;
extern Il2CppType IEnumerable_1_t6227_1_0_0;
struct IEnumerable_1_t6227;
extern Il2CppGenericClass IEnumerable_1_t6227_GenericClass;
TypeInfo IEnumerable_1_t6227_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6227_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6227_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6227_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6227_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6227_0_0_0/* byval_arg */
	, &IEnumerable_1_t6227_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6227_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t6226_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>
extern MethodInfo IList_1_get_Item_m32435_MethodInfo;
extern MethodInfo IList_1_set_Item_m32436_MethodInfo;
static PropertyInfo IList_1_t6226____Item_PropertyInfo = 
{
	&IList_1_t6226_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32435_MethodInfo/* get */
	, &IList_1_set_Item_m32436_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6226_PropertyInfos[] =
{
	&IList_1_t6226____Item_PropertyInfo,
	NULL
};
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
static ParameterInfo IList_1_t6226_IList_1_IndexOf_m32437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t726_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32437_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32437_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6226_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6226_IList_1_IndexOf_m32437_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m32437_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
static ParameterInfo IList_1_t6226_IList_1_Insert_m32438_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t726_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32438_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32438_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6226_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6226_IList_1_Insert_m32438_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m32438_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6226_IList_1_RemoveAt_m32439_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32439_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32439_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6226_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6226_IList_1_RemoveAt_m32439_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m32439_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6226_IList_1_get_Item_m32435_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32435_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32435_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6226_il2cpp_TypeInfo/* declaring_type */
	, &InternalsVisibleToAttribute_t726_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6226_IList_1_get_Item_m32435_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m32435_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType InternalsVisibleToAttribute_t726_0_0_0;
static ParameterInfo IList_1_t6226_IList_1_set_Item_m32436_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InternalsVisibleToAttribute_t726_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32436_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.InternalsVisibleToAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32436_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6226_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6226_IList_1_set_Item_m32436_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m32436_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6226_MethodInfos[] =
{
	&IList_1_IndexOf_m32437_MethodInfo,
	&IList_1_Insert_m32438_MethodInfo,
	&IList_1_RemoveAt_m32439_MethodInfo,
	&IList_1_get_Item_m32435_MethodInfo,
	&IList_1_set_Item_m32436_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6226_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6225_il2cpp_TypeInfo,
	&IEnumerable_1_t6227_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6226_0_0_0;
extern Il2CppType IList_1_t6226_1_0_0;
struct IList_1_t6226;
extern Il2CppGenericClass IList_1_t6226_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6226_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6226_MethodInfos/* methods */
	, IList_1_t6226_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6226_il2cpp_TypeInfo/* element_class */
	, IList_1_t6226_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6226_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6226_0_0_0/* byval_arg */
	, &IList_1_t6226_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6226_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4800_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32440_MethodInfo;
static PropertyInfo IEnumerator_1_t4800____Current_PropertyInfo = 
{
	&IEnumerator_1_t4800_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32440_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4800_PropertyInfos[] =
{
	&IEnumerator_1_t4800____Current_PropertyInfo,
	NULL
};
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32440_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32440_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4800_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t4_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m32440_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4800_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32440_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4800_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4800_0_0_0;
extern Il2CppType IEnumerator_1_t4800_1_0_0;
struct IEnumerator_1_t4800;
extern Il2CppGenericClass IEnumerator_1_t4800_GenericClass;
TypeInfo IEnumerator_1_t4800_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4800_MethodInfos/* methods */
	, IEnumerator_1_t4800_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4800_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4800_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4800_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4800_0_0_0/* byval_arg */
	, &IEnumerator_1_t4800_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4800_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
