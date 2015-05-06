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
extern TypeInfo IList_1_t6406_il2cpp_TypeInfo;

// System.Reflection.AssemblyDefaultAliasAttribute
#include "mscorlib_System_Reflection_AssemblyDefaultAliasAttribute.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>
extern MethodInfo IList_1_get_Item_m33275_MethodInfo;
extern MethodInfo IList_1_set_Item_m33276_MethodInfo;
static PropertyInfo IList_1_t6406____Item_PropertyInfo = 
{
	&IList_1_t6406_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33275_MethodInfo/* get */
	, &IList_1_set_Item_m33276_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6406_PropertyInfos[] =
{
	&IList_1_t6406____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDefaultAliasAttribute_t753_0_0_0;
extern Il2CppType AssemblyDefaultAliasAttribute_t753_0_0_0;
static ParameterInfo IList_1_t6406_IList_1_IndexOf_m33277_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t753_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33277_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33277_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6406_IList_1_IndexOf_m33277_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33277_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyDefaultAliasAttribute_t753_0_0_0;
static ParameterInfo IList_1_t6406_IList_1_Insert_m33278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t753_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33278_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33278_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6406_IList_1_Insert_m33278_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33278_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6406_IList_1_RemoveAt_m33279_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33279_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33279_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6406_IList_1_RemoveAt_m33279_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33279_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6406_IList_1_get_Item_m33275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyDefaultAliasAttribute_t753_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33275_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33275_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDefaultAliasAttribute_t753_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6406_IList_1_get_Item_m33275_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33275_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyDefaultAliasAttribute_t753_0_0_0;
static ParameterInfo IList_1_t6406_IList_1_set_Item_m33276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDefaultAliasAttribute_t753_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33276_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDefaultAliasAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33276_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6406_IList_1_set_Item_m33276_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33276_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6406_MethodInfos[] =
{
	&IList_1_IndexOf_m33277_MethodInfo,
	&IList_1_Insert_m33278_MethodInfo,
	&IList_1_RemoveAt_m33279_MethodInfo,
	&IList_1_get_Item_m33275_MethodInfo,
	&IList_1_set_Item_m33276_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t641_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t6405_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6407_il2cpp_TypeInfo;
static TypeInfo* IList_1_t6406_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6405_il2cpp_TypeInfo,
	&IEnumerable_1_t6407_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6406_0_0_0;
extern Il2CppType IList_1_t6406_1_0_0;
struct IList_1_t6406;
extern Il2CppGenericClass IList_1_t6406_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6406_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6406_MethodInfos/* methods */
	, IList_1_t6406_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6406_il2cpp_TypeInfo/* element_class */
	, IList_1_t6406_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6406_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6406_0_0_0/* byval_arg */
	, &IList_1_t6406_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6406_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4917_il2cpp_TypeInfo;

// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33280_MethodInfo;
static PropertyInfo IEnumerator_1_t4917____Current_PropertyInfo = 
{
	&IEnumerator_1_t4917_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33280_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4917_PropertyInfos[] =
{
	&IEnumerator_1_t4917____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33280_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33280_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4917_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDelaySignAttribute_t752_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33280_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4917_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33280_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t112_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t301_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t4917_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4917_0_0_0;
extern Il2CppType IEnumerator_1_t4917_1_0_0;
struct IEnumerator_1_t4917;
extern Il2CppGenericClass IEnumerator_1_t4917_GenericClass;
TypeInfo IEnumerator_1_t4917_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4917_MethodInfos/* methods */
	, IEnumerator_1_t4917_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4917_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4917_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4917_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4917_0_0_0/* byval_arg */
	, &IEnumerator_1_t4917_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4917_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_454.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3427_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_454MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo AssemblyDelaySignAttribute_t752_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t949_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m19025_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4114_MethodInfo;
extern MethodInfo Array_get_Length_m4119_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyDelaySignAttribute_t752_m25462_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m19774_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19774(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDelaySignAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDelaySignAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyDelaySignAttribute_t752_m25462(__this, p0, method) (AssemblyDelaySignAttribute_t752 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3427____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3427, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3427____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3427, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3427_FieldInfos[] =
{
	&InternalEnumerator_1_t3427____array_0_FieldInfo,
	&InternalEnumerator_1_t3427____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3427____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3427_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3427____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3427_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3427_PropertyInfos[] =
{
	&InternalEnumerator_1_t3427____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3427____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3427_InternalEnumerator_1__ctor_m19021_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19021_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19021_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3427_InternalEnumerator_1__ctor_m19021_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19021_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19023_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19023_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19023_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19024_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19024_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19024_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19025_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDelaySignAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19025_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDelaySignAttribute_t752_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19025_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3427_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19021_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_MethodInfo,
	&InternalEnumerator_1_Dispose_m19023_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19024_MethodInfo,
	&InternalEnumerator_1_get_Current_m19025_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1357_MethodInfo;
extern MethodInfo Object_Finalize_m7_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1358_MethodInfo;
extern MethodInfo ValueType_ToString_m1473_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m19024_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19023_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3427_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19022_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19024_MethodInfo,
	&InternalEnumerator_1_Dispose_m19023_MethodInfo,
	&InternalEnumerator_1_get_Current_m19025_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3427_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4917_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3427_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4917_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyDelaySignAttribute_t752_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3427_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19025_MethodInfo/* Method Usage */,
	&AssemblyDelaySignAttribute_t752_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyDelaySignAttribute_t752_m25462_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3427_0_0_0;
extern Il2CppType InternalEnumerator_1_t3427_1_0_0;
extern TypeInfo ValueType_t296_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t3427_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t3427_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3427_MethodInfos/* methods */
	, InternalEnumerator_1_t3427_PropertyInfos/* properties */
	, InternalEnumerator_1_t3427_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3427_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3427_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3427_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3427_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3427_1_0_0/* this_arg */
	, InternalEnumerator_1_t3427_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3427_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3427_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3427)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6408_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>
extern MethodInfo ICollection_1_get_Count_m33281_MethodInfo;
static PropertyInfo ICollection_1_t6408____Count_PropertyInfo = 
{
	&ICollection_1_t6408_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33281_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33282_MethodInfo;
static PropertyInfo ICollection_1_t6408____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6408_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6408_PropertyInfos[] =
{
	&ICollection_1_t6408____Count_PropertyInfo,
	&ICollection_1_t6408____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33281_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33281_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33281_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33282_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33282_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33282_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
static ParameterInfo ICollection_1_t6408_ICollection_1_Add_m33283_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t752_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33283_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33283_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6408_ICollection_1_Add_m33283_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33283_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33284_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33284_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33284_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
static ParameterInfo ICollection_1_t6408_ICollection_1_Contains_m33285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t752_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33285_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33285_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6408_ICollection_1_Contains_m33285_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33285_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttributeU5BU5D_t3676_0_0_0;
extern Il2CppType AssemblyDelaySignAttributeU5BU5D_t3676_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6408_ICollection_1_CopyTo_m33286_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttributeU5BU5D_t3676_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33286_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33286_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6408_ICollection_1_CopyTo_m33286_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33286_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
static ParameterInfo ICollection_1_t6408_ICollection_1_Remove_m33287_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t752_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33287_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDelaySignAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33287_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6408_ICollection_1_Remove_m33287_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33287_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6408_MethodInfos[] =
{
	&ICollection_1_get_Count_m33281_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33282_MethodInfo,
	&ICollection_1_Add_m33283_MethodInfo,
	&ICollection_1_Clear_m33284_MethodInfo,
	&ICollection_1_Contains_m33285_MethodInfo,
	&ICollection_1_CopyTo_m33286_MethodInfo,
	&ICollection_1_Remove_m33287_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6410_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6408_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6410_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6408_0_0_0;
extern Il2CppType ICollection_1_t6408_1_0_0;
struct ICollection_1_t6408;
extern Il2CppGenericClass ICollection_1_t6408_GenericClass;
TypeInfo ICollection_1_t6408_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6408_MethodInfos/* methods */
	, ICollection_1_t6408_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6408_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6408_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6408_0_0_0/* byval_arg */
	, &ICollection_1_t6408_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6408_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDelaySignAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDelaySignAttribute>
extern Il2CppType IEnumerator_1_t4917_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33288_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDelaySignAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33288_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6410_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4917_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33288_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6410_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33288_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6410_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6410_0_0_0;
extern Il2CppType IEnumerable_1_t6410_1_0_0;
struct IEnumerable_1_t6410;
extern Il2CppGenericClass IEnumerable_1_t6410_GenericClass;
TypeInfo IEnumerable_1_t6410_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6410_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6410_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6410_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6410_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6410_0_0_0/* byval_arg */
	, &IEnumerable_1_t6410_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6410_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6409_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>
extern MethodInfo IList_1_get_Item_m33289_MethodInfo;
extern MethodInfo IList_1_set_Item_m33290_MethodInfo;
static PropertyInfo IList_1_t6409____Item_PropertyInfo = 
{
	&IList_1_t6409_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33289_MethodInfo/* get */
	, &IList_1_set_Item_m33290_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6409_PropertyInfos[] =
{
	&IList_1_t6409____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
static ParameterInfo IList_1_t6409_IList_1_IndexOf_m33291_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t752_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33291_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33291_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6409_IList_1_IndexOf_m33291_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33291_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
static ParameterInfo IList_1_t6409_IList_1_Insert_m33292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t752_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33292_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33292_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6409_IList_1_Insert_m33292_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33292_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6409_IList_1_RemoveAt_m33293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33293_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33293_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6409_IList_1_RemoveAt_m33293_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33293_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6409_IList_1_get_Item_m33289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33289_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33289_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDelaySignAttribute_t752_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6409_IList_1_get_Item_m33289_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33289_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyDelaySignAttribute_t752_0_0_0;
static ParameterInfo IList_1_t6409_IList_1_set_Item_m33290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDelaySignAttribute_t752_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33290_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDelaySignAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33290_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6409_IList_1_set_Item_m33290_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33290_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6409_MethodInfos[] =
{
	&IList_1_IndexOf_m33291_MethodInfo,
	&IList_1_Insert_m33292_MethodInfo,
	&IList_1_RemoveAt_m33293_MethodInfo,
	&IList_1_get_Item_m33289_MethodInfo,
	&IList_1_set_Item_m33290_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6409_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6408_il2cpp_TypeInfo,
	&IEnumerable_1_t6410_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6409_0_0_0;
extern Il2CppType IList_1_t6409_1_0_0;
struct IList_1_t6409;
extern Il2CppGenericClass IList_1_t6409_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6409_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6409_MethodInfos/* methods */
	, IList_1_t6409_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6409_il2cpp_TypeInfo/* element_class */
	, IList_1_t6409_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6409_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6409_0_0_0/* byval_arg */
	, &IList_1_t6409_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6409_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4919_il2cpp_TypeInfo;

// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33294_MethodInfo;
static PropertyInfo IEnumerator_1_t4919____Current_PropertyInfo = 
{
	&IEnumerator_1_t4919_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33294_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4919_PropertyInfos[] =
{
	&IEnumerator_1_t4919____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33294_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33294_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4919_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDescriptionAttribute_t401_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33294_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4919_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33294_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4919_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4919_0_0_0;
extern Il2CppType IEnumerator_1_t4919_1_0_0;
struct IEnumerator_1_t4919;
extern Il2CppGenericClass IEnumerator_1_t4919_GenericClass;
TypeInfo IEnumerator_1_t4919_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4919_MethodInfos/* methods */
	, IEnumerator_1_t4919_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4919_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4919_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4919_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4919_0_0_0/* byval_arg */
	, &IEnumerator_1_t4919_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4919_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_455.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3428_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_455MethodDeclarations.h"

extern TypeInfo AssemblyDescriptionAttribute_t401_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19030_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyDescriptionAttribute_t401_m25473_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDescriptionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyDescriptionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyDescriptionAttribute_t401_m25473(__this, p0, method) (AssemblyDescriptionAttribute_t401 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3428____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3428, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3428____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3428, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3428_FieldInfos[] =
{
	&InternalEnumerator_1_t3428____array_0_FieldInfo,
	&InternalEnumerator_1_t3428____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3428____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3428_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3428____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3428_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19030_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3428_PropertyInfos[] =
{
	&InternalEnumerator_1_t3428____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3428____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3428_InternalEnumerator_1__ctor_m19026_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19026_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19026_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3428_InternalEnumerator_1__ctor_m19026_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19026_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19028_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19028_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19028_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19029_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19029_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19029_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19030_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyDescriptionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19030_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDescriptionAttribute_t401_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19030_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3428_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19026_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_MethodInfo,
	&InternalEnumerator_1_Dispose_m19028_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19029_MethodInfo,
	&InternalEnumerator_1_get_Current_m19030_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19029_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19028_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3428_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19027_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19029_MethodInfo,
	&InternalEnumerator_1_Dispose_m19028_MethodInfo,
	&InternalEnumerator_1_get_Current_m19030_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3428_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4919_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3428_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4919_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyDescriptionAttribute_t401_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3428_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19030_MethodInfo/* Method Usage */,
	&AssemblyDescriptionAttribute_t401_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyDescriptionAttribute_t401_m25473_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3428_0_0_0;
extern Il2CppType InternalEnumerator_1_t3428_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3428_GenericClass;
TypeInfo InternalEnumerator_1_t3428_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3428_MethodInfos/* methods */
	, InternalEnumerator_1_t3428_PropertyInfos/* properties */
	, InternalEnumerator_1_t3428_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3428_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3428_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3428_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3428_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3428_1_0_0/* this_arg */
	, InternalEnumerator_1_t3428_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3428_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3428_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3428)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6411_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>
extern MethodInfo ICollection_1_get_Count_m33295_MethodInfo;
static PropertyInfo ICollection_1_t6411____Count_PropertyInfo = 
{
	&ICollection_1_t6411_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33295_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33296_MethodInfo;
static PropertyInfo ICollection_1_t6411____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6411_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33296_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6411_PropertyInfos[] =
{
	&ICollection_1_t6411____Count_PropertyInfo,
	&ICollection_1_t6411____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33295_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33295_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33295_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33296_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33296_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33296_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
static ParameterInfo ICollection_1_t6411_ICollection_1_Add_m33297_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t401_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33297_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33297_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6411_ICollection_1_Add_m33297_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33297_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33298_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33298_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33298_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
static ParameterInfo ICollection_1_t6411_ICollection_1_Contains_m33299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t401_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33299_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33299_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6411_ICollection_1_Contains_m33299_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33299_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttributeU5BU5D_t3677_0_0_0;
extern Il2CppType AssemblyDescriptionAttributeU5BU5D_t3677_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6411_ICollection_1_CopyTo_m33300_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttributeU5BU5D_t3677_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33300_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33300_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6411_ICollection_1_CopyTo_m33300_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33300_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
static ParameterInfo ICollection_1_t6411_ICollection_1_Remove_m33301_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t401_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33301_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyDescriptionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33301_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6411_ICollection_1_Remove_m33301_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33301_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6411_MethodInfos[] =
{
	&ICollection_1_get_Count_m33295_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33296_MethodInfo,
	&ICollection_1_Add_m33297_MethodInfo,
	&ICollection_1_Clear_m33298_MethodInfo,
	&ICollection_1_Contains_m33299_MethodInfo,
	&ICollection_1_CopyTo_m33300_MethodInfo,
	&ICollection_1_Remove_m33301_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6413_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6411_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6413_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6411_0_0_0;
extern Il2CppType ICollection_1_t6411_1_0_0;
struct ICollection_1_t6411;
extern Il2CppGenericClass ICollection_1_t6411_GenericClass;
TypeInfo ICollection_1_t6411_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6411_MethodInfos/* methods */
	, ICollection_1_t6411_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6411_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6411_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6411_0_0_0/* byval_arg */
	, &ICollection_1_t6411_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6411_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDescriptionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDescriptionAttribute>
extern Il2CppType IEnumerator_1_t4919_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33302_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyDescriptionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33302_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6413_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4919_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33302_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6413_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33302_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6413_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6413_0_0_0;
extern Il2CppType IEnumerable_1_t6413_1_0_0;
struct IEnumerable_1_t6413;
extern Il2CppGenericClass IEnumerable_1_t6413_GenericClass;
TypeInfo IEnumerable_1_t6413_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6413_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6413_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6413_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6413_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6413_0_0_0/* byval_arg */
	, &IEnumerable_1_t6413_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6413_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6412_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>
extern MethodInfo IList_1_get_Item_m33303_MethodInfo;
extern MethodInfo IList_1_set_Item_m33304_MethodInfo;
static PropertyInfo IList_1_t6412____Item_PropertyInfo = 
{
	&IList_1_t6412_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33303_MethodInfo/* get */
	, &IList_1_set_Item_m33304_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6412_PropertyInfos[] =
{
	&IList_1_t6412____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
static ParameterInfo IList_1_t6412_IList_1_IndexOf_m33305_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t401_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33305_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33305_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6412_IList_1_IndexOf_m33305_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33305_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
static ParameterInfo IList_1_t6412_IList_1_Insert_m33306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t401_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33306_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33306_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6412_IList_1_Insert_m33306_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33306_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6412_IList_1_RemoveAt_m33307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33307_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33307_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6412_IList_1_RemoveAt_m33307_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33307_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6412_IList_1_get_Item_m33303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33303_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33303_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyDescriptionAttribute_t401_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6412_IList_1_get_Item_m33303_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33303_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyDescriptionAttribute_t401_0_0_0;
static ParameterInfo IList_1_t6412_IList_1_set_Item_m33304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyDescriptionAttribute_t401_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33304_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyDescriptionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33304_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6412_IList_1_set_Item_m33304_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33304_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6412_MethodInfos[] =
{
	&IList_1_IndexOf_m33305_MethodInfo,
	&IList_1_Insert_m33306_MethodInfo,
	&IList_1_RemoveAt_m33307_MethodInfo,
	&IList_1_get_Item_m33303_MethodInfo,
	&IList_1_set_Item_m33304_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6412_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6411_il2cpp_TypeInfo,
	&IEnumerable_1_t6413_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6412_0_0_0;
extern Il2CppType IList_1_t6412_1_0_0;
struct IList_1_t6412;
extern Il2CppGenericClass IList_1_t6412_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6412_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6412_MethodInfos/* methods */
	, IList_1_t6412_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6412_il2cpp_TypeInfo/* element_class */
	, IList_1_t6412_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6412_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6412_0_0_0/* byval_arg */
	, &IList_1_t6412_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6412_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4921_il2cpp_TypeInfo;

// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33308_MethodInfo;
static PropertyInfo IEnumerator_1_t4921____Current_PropertyInfo = 
{
	&IEnumerator_1_t4921_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33308_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4921_PropertyInfos[] =
{
	&IEnumerator_1_t4921____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33308_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33308_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4921_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyFileVersionAttribute_t406_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33308_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4921_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33308_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4921_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4921_0_0_0;
extern Il2CppType IEnumerator_1_t4921_1_0_0;
struct IEnumerator_1_t4921;
extern Il2CppGenericClass IEnumerator_1_t4921_GenericClass;
TypeInfo IEnumerator_1_t4921_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4921_MethodInfos/* methods */
	, IEnumerator_1_t4921_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4921_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4921_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4921_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4921_0_0_0/* byval_arg */
	, &IEnumerator_1_t4921_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4921_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_456.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3429_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_456MethodDeclarations.h"

extern TypeInfo AssemblyFileVersionAttribute_t406_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19035_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyFileVersionAttribute_t406_m25484_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyFileVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyFileVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyFileVersionAttribute_t406_m25484(__this, p0, method) (AssemblyFileVersionAttribute_t406 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3429____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3429, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3429____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3429, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3429_FieldInfos[] =
{
	&InternalEnumerator_1_t3429____array_0_FieldInfo,
	&InternalEnumerator_1_t3429____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19032_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3429____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3429_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19032_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3429____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3429_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19035_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3429_PropertyInfos[] =
{
	&InternalEnumerator_1_t3429____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3429____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3429_InternalEnumerator_1__ctor_m19031_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19031_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19031_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3429_InternalEnumerator_1__ctor_m19031_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19031_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19032_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19032_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19032_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19033_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19033_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19033_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19034_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19034_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19034_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19035_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyFileVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19035_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyFileVersionAttribute_t406_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19035_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3429_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19031_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19032_MethodInfo,
	&InternalEnumerator_1_Dispose_m19033_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19034_MethodInfo,
	&InternalEnumerator_1_get_Current_m19035_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19034_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19033_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3429_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19032_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19034_MethodInfo,
	&InternalEnumerator_1_Dispose_m19033_MethodInfo,
	&InternalEnumerator_1_get_Current_m19035_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3429_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4921_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3429_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4921_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyFileVersionAttribute_t406_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3429_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19035_MethodInfo/* Method Usage */,
	&AssemblyFileVersionAttribute_t406_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyFileVersionAttribute_t406_m25484_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3429_0_0_0;
extern Il2CppType InternalEnumerator_1_t3429_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3429_GenericClass;
TypeInfo InternalEnumerator_1_t3429_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3429_MethodInfos/* methods */
	, InternalEnumerator_1_t3429_PropertyInfos/* properties */
	, InternalEnumerator_1_t3429_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3429_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3429_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3429_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3429_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3429_1_0_0/* this_arg */
	, InternalEnumerator_1_t3429_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3429_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3429_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3429)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6414_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m33309_MethodInfo;
static PropertyInfo ICollection_1_t6414____Count_PropertyInfo = 
{
	&ICollection_1_t6414_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33309_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33310_MethodInfo;
static PropertyInfo ICollection_1_t6414____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6414_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33310_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6414_PropertyInfos[] =
{
	&ICollection_1_t6414____Count_PropertyInfo,
	&ICollection_1_t6414____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33309_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33309_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33309_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33310_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33310_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33310_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
static ParameterInfo ICollection_1_t6414_ICollection_1_Add_m33311_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t406_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33311_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33311_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6414_ICollection_1_Add_m33311_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33311_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33312_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33312_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33312_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
static ParameterInfo ICollection_1_t6414_ICollection_1_Contains_m33313_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t406_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33313_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33313_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6414_ICollection_1_Contains_m33313_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33313_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttributeU5BU5D_t3678_0_0_0;
extern Il2CppType AssemblyFileVersionAttributeU5BU5D_t3678_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6414_ICollection_1_CopyTo_m33314_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttributeU5BU5D_t3678_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33314_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33314_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6414_ICollection_1_CopyTo_m33314_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33314_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
static ParameterInfo ICollection_1_t6414_ICollection_1_Remove_m33315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t406_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33315_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyFileVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33315_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6414_ICollection_1_Remove_m33315_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33315_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6414_MethodInfos[] =
{
	&ICollection_1_get_Count_m33309_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33310_MethodInfo,
	&ICollection_1_Add_m33311_MethodInfo,
	&ICollection_1_Clear_m33312_MethodInfo,
	&ICollection_1_Contains_m33313_MethodInfo,
	&ICollection_1_CopyTo_m33314_MethodInfo,
	&ICollection_1_Remove_m33315_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6416_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6414_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6416_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6414_0_0_0;
extern Il2CppType ICollection_1_t6414_1_0_0;
struct ICollection_1_t6414;
extern Il2CppGenericClass ICollection_1_t6414_GenericClass;
TypeInfo ICollection_1_t6414_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6414_MethodInfos/* methods */
	, ICollection_1_t6414_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6414_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6414_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6414_0_0_0/* byval_arg */
	, &ICollection_1_t6414_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6414_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyFileVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyFileVersionAttribute>
extern Il2CppType IEnumerator_1_t4921_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33316_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyFileVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33316_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6416_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4921_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33316_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6416_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33316_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6416_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6416_0_0_0;
extern Il2CppType IEnumerable_1_t6416_1_0_0;
struct IEnumerable_1_t6416;
extern Il2CppGenericClass IEnumerable_1_t6416_GenericClass;
TypeInfo IEnumerable_1_t6416_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6416_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6416_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6416_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6416_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6416_0_0_0/* byval_arg */
	, &IEnumerable_1_t6416_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6416_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6415_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>
extern MethodInfo IList_1_get_Item_m33317_MethodInfo;
extern MethodInfo IList_1_set_Item_m33318_MethodInfo;
static PropertyInfo IList_1_t6415____Item_PropertyInfo = 
{
	&IList_1_t6415_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33317_MethodInfo/* get */
	, &IList_1_set_Item_m33318_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6415_PropertyInfos[] =
{
	&IList_1_t6415____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
static ParameterInfo IList_1_t6415_IList_1_IndexOf_m33319_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t406_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33319_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33319_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6415_IList_1_IndexOf_m33319_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33319_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
static ParameterInfo IList_1_t6415_IList_1_Insert_m33320_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t406_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33320_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33320_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6415_IList_1_Insert_m33320_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33320_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6415_IList_1_RemoveAt_m33321_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33321_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33321_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6415_IList_1_RemoveAt_m33321_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33321_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6415_IList_1_get_Item_m33317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33317_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33317_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyFileVersionAttribute_t406_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6415_IList_1_get_Item_m33317_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33317_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyFileVersionAttribute_t406_0_0_0;
static ParameterInfo IList_1_t6415_IList_1_set_Item_m33318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyFileVersionAttribute_t406_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33318_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyFileVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33318_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6415_IList_1_set_Item_m33318_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33318_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6415_MethodInfos[] =
{
	&IList_1_IndexOf_m33319_MethodInfo,
	&IList_1_Insert_m33320_MethodInfo,
	&IList_1_RemoveAt_m33321_MethodInfo,
	&IList_1_get_Item_m33317_MethodInfo,
	&IList_1_set_Item_m33318_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6415_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6414_il2cpp_TypeInfo,
	&IEnumerable_1_t6416_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6415_0_0_0;
extern Il2CppType IList_1_t6415_1_0_0;
struct IList_1_t6415;
extern Il2CppGenericClass IList_1_t6415_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6415_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6415_MethodInfos/* methods */
	, IList_1_t6415_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6415_il2cpp_TypeInfo/* element_class */
	, IList_1_t6415_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6415_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6415_0_0_0/* byval_arg */
	, &IList_1_t6415_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6415_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4923_il2cpp_TypeInfo;

// System.Reflection.AssemblyInformationalVersionAttribute
#include "mscorlib_System_Reflection_AssemblyInformationalVersionAttri.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33322_MethodInfo;
static PropertyInfo IEnumerator_1_t4923____Current_PropertyInfo = 
{
	&IEnumerator_1_t4923_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33322_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4923_PropertyInfos[] =
{
	&IEnumerator_1_t4923____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33322_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33322_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4923_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyInformationalVersionAttribute_t746_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33322_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4923_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33322_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4923_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4923_0_0_0;
extern Il2CppType IEnumerator_1_t4923_1_0_0;
struct IEnumerator_1_t4923;
extern Il2CppGenericClass IEnumerator_1_t4923_GenericClass;
TypeInfo IEnumerator_1_t4923_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4923_MethodInfos/* methods */
	, IEnumerator_1_t4923_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4923_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4923_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4923_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4923_0_0_0/* byval_arg */
	, &IEnumerator_1_t4923_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4923_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_457.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3430_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_457MethodDeclarations.h"

extern TypeInfo AssemblyInformationalVersionAttribute_t746_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19040_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyInformationalVersionAttribute_t746_m25495_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyInformationalVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyInformationalVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyInformationalVersionAttribute_t746_m25495(__this, p0, method) (AssemblyInformationalVersionAttribute_t746 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3430____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3430, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3430____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3430, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3430_FieldInfos[] =
{
	&InternalEnumerator_1_t3430____array_0_FieldInfo,
	&InternalEnumerator_1_t3430____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19037_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3430____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3430_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19037_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3430____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3430_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19040_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3430_PropertyInfos[] =
{
	&InternalEnumerator_1_t3430____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3430____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3430_InternalEnumerator_1__ctor_m19036_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19036_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19036_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3430_InternalEnumerator_1__ctor_m19036_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19036_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19037_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19037_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19037_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19038_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19038_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19038_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19039_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19039_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19039_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19040_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19040_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyInformationalVersionAttribute_t746_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19040_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3430_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19036_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19037_MethodInfo,
	&InternalEnumerator_1_Dispose_m19038_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19039_MethodInfo,
	&InternalEnumerator_1_get_Current_m19040_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19039_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19038_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3430_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19037_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19039_MethodInfo,
	&InternalEnumerator_1_Dispose_m19038_MethodInfo,
	&InternalEnumerator_1_get_Current_m19040_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3430_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4923_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3430_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4923_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyInformationalVersionAttribute_t746_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3430_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19040_MethodInfo/* Method Usage */,
	&AssemblyInformationalVersionAttribute_t746_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyInformationalVersionAttribute_t746_m25495_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3430_0_0_0;
extern Il2CppType InternalEnumerator_1_t3430_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3430_GenericClass;
TypeInfo InternalEnumerator_1_t3430_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3430_MethodInfos/* methods */
	, InternalEnumerator_1_t3430_PropertyInfos/* properties */
	, InternalEnumerator_1_t3430_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3430_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3430_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3430_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3430_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3430_1_0_0/* this_arg */
	, InternalEnumerator_1_t3430_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3430_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3430_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3430)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6417_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m33323_MethodInfo;
static PropertyInfo ICollection_1_t6417____Count_PropertyInfo = 
{
	&ICollection_1_t6417_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33323_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33324_MethodInfo;
static PropertyInfo ICollection_1_t6417____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6417_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33324_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6417_PropertyInfos[] =
{
	&ICollection_1_t6417____Count_PropertyInfo,
	&ICollection_1_t6417____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33323_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33323_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33323_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33324_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33324_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33324_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
static ParameterInfo ICollection_1_t6417_ICollection_1_Add_m33325_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t746_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33325_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33325_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6417_ICollection_1_Add_m33325_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33325_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33326_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33326_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33326_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
static ParameterInfo ICollection_1_t6417_ICollection_1_Contains_m33327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t746_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33327_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33327_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6417_ICollection_1_Contains_m33327_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33327_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttributeU5BU5D_t3679_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttributeU5BU5D_t3679_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6417_ICollection_1_CopyTo_m33328_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttributeU5BU5D_t3679_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33328_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33328_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6417_ICollection_1_CopyTo_m33328_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33328_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
static ParameterInfo ICollection_1_t6417_ICollection_1_Remove_m33329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t746_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33329_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyInformationalVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33329_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6417_ICollection_1_Remove_m33329_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33329_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6417_MethodInfos[] =
{
	&ICollection_1_get_Count_m33323_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33324_MethodInfo,
	&ICollection_1_Add_m33325_MethodInfo,
	&ICollection_1_Clear_m33326_MethodInfo,
	&ICollection_1_Contains_m33327_MethodInfo,
	&ICollection_1_CopyTo_m33328_MethodInfo,
	&ICollection_1_Remove_m33329_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6419_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6417_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6419_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6417_0_0_0;
extern Il2CppType ICollection_1_t6417_1_0_0;
struct ICollection_1_t6417;
extern Il2CppGenericClass ICollection_1_t6417_GenericClass;
TypeInfo ICollection_1_t6417_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6417_MethodInfos/* methods */
	, ICollection_1_t6417_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6417_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6417_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6417_0_0_0/* byval_arg */
	, &ICollection_1_t6417_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6417_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyInformationalVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern Il2CppType IEnumerator_1_t4923_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33330_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyInformationalVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33330_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6419_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4923_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33330_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6419_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33330_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6419_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6419_0_0_0;
extern Il2CppType IEnumerable_1_t6419_1_0_0;
struct IEnumerable_1_t6419;
extern Il2CppGenericClass IEnumerable_1_t6419_GenericClass;
TypeInfo IEnumerable_1_t6419_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6419_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6419_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6419_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6419_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6419_0_0_0/* byval_arg */
	, &IEnumerable_1_t6419_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6419_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6418_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>
extern MethodInfo IList_1_get_Item_m33331_MethodInfo;
extern MethodInfo IList_1_set_Item_m33332_MethodInfo;
static PropertyInfo IList_1_t6418____Item_PropertyInfo = 
{
	&IList_1_t6418_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33331_MethodInfo/* get */
	, &IList_1_set_Item_m33332_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6418_PropertyInfos[] =
{
	&IList_1_t6418____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
static ParameterInfo IList_1_t6418_IList_1_IndexOf_m33333_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t746_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33333_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33333_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6418_IList_1_IndexOf_m33333_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33333_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
static ParameterInfo IList_1_t6418_IList_1_Insert_m33334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t746_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33334_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33334_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6418_IList_1_Insert_m33334_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33334_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6418_IList_1_RemoveAt_m33335_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33335_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33335_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6418_IList_1_RemoveAt_m33335_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33335_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6418_IList_1_get_Item_m33331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33331_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33331_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyInformationalVersionAttribute_t746_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6418_IList_1_get_Item_m33331_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33331_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyInformationalVersionAttribute_t746_0_0_0;
static ParameterInfo IList_1_t6418_IList_1_set_Item_m33332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyInformationalVersionAttribute_t746_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33332_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyInformationalVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33332_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6418_IList_1_set_Item_m33332_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33332_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6418_MethodInfos[] =
{
	&IList_1_IndexOf_m33333_MethodInfo,
	&IList_1_Insert_m33334_MethodInfo,
	&IList_1_RemoveAt_m33335_MethodInfo,
	&IList_1_get_Item_m33331_MethodInfo,
	&IList_1_set_Item_m33332_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6418_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6417_il2cpp_TypeInfo,
	&IEnumerable_1_t6419_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6418_0_0_0;
extern Il2CppType IList_1_t6418_1_0_0;
struct IList_1_t6418;
extern Il2CppGenericClass IList_1_t6418_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6418_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6418_MethodInfos/* methods */
	, IList_1_t6418_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6418_il2cpp_TypeInfo/* element_class */
	, IList_1_t6418_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6418_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6418_0_0_0/* byval_arg */
	, &IList_1_t6418_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6418_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4925_il2cpp_TypeInfo;

// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33336_MethodInfo;
static PropertyInfo IEnumerator_1_t4925____Current_PropertyInfo = 
{
	&IEnumerator_1_t4925_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33336_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4925_PropertyInfos[] =
{
	&IEnumerator_1_t4925____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33336_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33336_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4925_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyFileAttribute_t751_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33336_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4925_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33336_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4925_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4925_0_0_0;
extern Il2CppType IEnumerator_1_t4925_1_0_0;
struct IEnumerator_1_t4925;
extern Il2CppGenericClass IEnumerator_1_t4925_GenericClass;
TypeInfo IEnumerator_1_t4925_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4925_MethodInfos/* methods */
	, IEnumerator_1_t4925_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4925_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4925_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4925_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4925_0_0_0/* byval_arg */
	, &IEnumerator_1_t4925_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4925_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_458.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3431_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_458MethodDeclarations.h"

extern TypeInfo AssemblyKeyFileAttribute_t751_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19045_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyKeyFileAttribute_t751_m25506_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyKeyFileAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyKeyFileAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyKeyFileAttribute_t751_m25506(__this, p0, method) (AssemblyKeyFileAttribute_t751 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3431____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3431, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3431____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3431, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3431_FieldInfos[] =
{
	&InternalEnumerator_1_t3431____array_0_FieldInfo,
	&InternalEnumerator_1_t3431____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19042_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3431____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3431_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19042_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3431____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3431_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19045_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3431_PropertyInfos[] =
{
	&InternalEnumerator_1_t3431____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3431____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3431_InternalEnumerator_1__ctor_m19041_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19041_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19041_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3431_InternalEnumerator_1__ctor_m19041_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19041_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19042_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19042_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19042_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19043_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19043_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19043_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19044_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19044_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19044_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19045_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyKeyFileAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19045_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyFileAttribute_t751_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19045_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3431_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19041_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19042_MethodInfo,
	&InternalEnumerator_1_Dispose_m19043_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19044_MethodInfo,
	&InternalEnumerator_1_get_Current_m19045_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19044_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19043_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3431_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19042_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19044_MethodInfo,
	&InternalEnumerator_1_Dispose_m19043_MethodInfo,
	&InternalEnumerator_1_get_Current_m19045_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3431_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4925_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3431_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4925_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyKeyFileAttribute_t751_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3431_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19045_MethodInfo/* Method Usage */,
	&AssemblyKeyFileAttribute_t751_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyKeyFileAttribute_t751_m25506_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3431_0_0_0;
extern Il2CppType InternalEnumerator_1_t3431_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3431_GenericClass;
TypeInfo InternalEnumerator_1_t3431_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3431_MethodInfos/* methods */
	, InternalEnumerator_1_t3431_PropertyInfos/* properties */
	, InternalEnumerator_1_t3431_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3431_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3431_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3431_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3431_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3431_1_0_0/* this_arg */
	, InternalEnumerator_1_t3431_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3431_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3431_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3431)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6420_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>
extern MethodInfo ICollection_1_get_Count_m33337_MethodInfo;
static PropertyInfo ICollection_1_t6420____Count_PropertyInfo = 
{
	&ICollection_1_t6420_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33337_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33338_MethodInfo;
static PropertyInfo ICollection_1_t6420____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6420_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33338_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6420_PropertyInfos[] =
{
	&ICollection_1_t6420____Count_PropertyInfo,
	&ICollection_1_t6420____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33337_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33337_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33337_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33338_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33338_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33338_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
static ParameterInfo ICollection_1_t6420_ICollection_1_Add_m33339_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t751_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33339_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33339_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6420_ICollection_1_Add_m33339_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33339_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33340_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33340_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33340_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
static ParameterInfo ICollection_1_t6420_ICollection_1_Contains_m33341_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t751_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33341_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33341_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6420_ICollection_1_Contains_m33341_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33341_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttributeU5BU5D_t3680_0_0_0;
extern Il2CppType AssemblyKeyFileAttributeU5BU5D_t3680_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6420_ICollection_1_CopyTo_m33342_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttributeU5BU5D_t3680_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33342_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33342_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6420_ICollection_1_CopyTo_m33342_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33342_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
static ParameterInfo ICollection_1_t6420_ICollection_1_Remove_m33343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t751_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33343_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyKeyFileAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33343_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6420_ICollection_1_Remove_m33343_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33343_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6420_MethodInfos[] =
{
	&ICollection_1_get_Count_m33337_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33338_MethodInfo,
	&ICollection_1_Add_m33339_MethodInfo,
	&ICollection_1_Clear_m33340_MethodInfo,
	&ICollection_1_Contains_m33341_MethodInfo,
	&ICollection_1_CopyTo_m33342_MethodInfo,
	&ICollection_1_Remove_m33343_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6422_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6420_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6422_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6420_0_0_0;
extern Il2CppType ICollection_1_t6420_1_0_0;
struct ICollection_1_t6420;
extern Il2CppGenericClass ICollection_1_t6420_GenericClass;
TypeInfo ICollection_1_t6420_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6420_MethodInfos/* methods */
	, ICollection_1_t6420_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6420_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6420_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6420_0_0_0/* byval_arg */
	, &ICollection_1_t6420_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6420_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyFileAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyFileAttribute>
extern Il2CppType IEnumerator_1_t4925_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33344_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyKeyFileAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33344_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6422_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4925_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33344_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6422_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33344_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6422_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6422_0_0_0;
extern Il2CppType IEnumerable_1_t6422_1_0_0;
struct IEnumerable_1_t6422;
extern Il2CppGenericClass IEnumerable_1_t6422_GenericClass;
TypeInfo IEnumerable_1_t6422_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6422_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6422_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6422_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6422_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6422_0_0_0/* byval_arg */
	, &IEnumerable_1_t6422_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6422_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6421_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>
extern MethodInfo IList_1_get_Item_m33345_MethodInfo;
extern MethodInfo IList_1_set_Item_m33346_MethodInfo;
static PropertyInfo IList_1_t6421____Item_PropertyInfo = 
{
	&IList_1_t6421_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33345_MethodInfo/* get */
	, &IList_1_set_Item_m33346_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6421_PropertyInfos[] =
{
	&IList_1_t6421____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
static ParameterInfo IList_1_t6421_IList_1_IndexOf_m33347_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t751_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33347_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33347_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6421_IList_1_IndexOf_m33347_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33347_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
static ParameterInfo IList_1_t6421_IList_1_Insert_m33348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t751_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33348_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33348_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6421_IList_1_Insert_m33348_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33348_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6421_IList_1_RemoveAt_m33349_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33349_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33349_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6421_IList_1_RemoveAt_m33349_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33349_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6421_IList_1_get_Item_m33345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33345_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33345_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyKeyFileAttribute_t751_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6421_IList_1_get_Item_m33345_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33345_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyKeyFileAttribute_t751_0_0_0;
static ParameterInfo IList_1_t6421_IList_1_set_Item_m33346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyKeyFileAttribute_t751_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33346_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyKeyFileAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33346_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6421_IList_1_set_Item_m33346_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33346_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6421_MethodInfos[] =
{
	&IList_1_IndexOf_m33347_MethodInfo,
	&IList_1_Insert_m33348_MethodInfo,
	&IList_1_RemoveAt_m33349_MethodInfo,
	&IList_1_get_Item_m33345_MethodInfo,
	&IList_1_set_Item_m33346_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6421_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6420_il2cpp_TypeInfo,
	&IEnumerable_1_t6422_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6421_0_0_0;
extern Il2CppType IList_1_t6421_1_0_0;
struct IList_1_t6421;
extern Il2CppGenericClass IList_1_t6421_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6421_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6421_MethodInfos/* methods */
	, IList_1_t6421_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6421_il2cpp_TypeInfo/* element_class */
	, IList_1_t6421_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6421_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6421_0_0_0/* byval_arg */
	, &IList_1_t6421_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6421_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4927_il2cpp_TypeInfo;

// System.Reflection.AssemblyNameFlags
#include "mscorlib_System_Reflection_AssemblyNameFlags.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyNameFlags>
extern MethodInfo IEnumerator_1_get_Current_m33350_MethodInfo;
static PropertyInfo IEnumerator_1_t4927____Current_PropertyInfo = 
{
	&IEnumerator_1_t4927_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33350_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4927_PropertyInfos[] =
{
	&IEnumerator_1_t4927____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
extern void* RuntimeInvoker_AssemblyNameFlags_t1377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33350_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33350_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4927_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyNameFlags_t1377_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyNameFlags_t1377/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33350_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4927_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33350_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4927_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4927_0_0_0;
extern Il2CppType IEnumerator_1_t4927_1_0_0;
struct IEnumerator_1_t4927;
extern Il2CppGenericClass IEnumerator_1_t4927_GenericClass;
TypeInfo IEnumerator_1_t4927_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4927_MethodInfos/* methods */
	, IEnumerator_1_t4927_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4927_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4927_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4927_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4927_0_0_0/* byval_arg */
	, &IEnumerator_1_t4927_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4927_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_459.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3432_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_459MethodDeclarations.h"

extern TypeInfo AssemblyNameFlags_t1377_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19050_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyNameFlags_t1377_m25517_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyNameFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyNameFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAssemblyNameFlags_t1377_m25517 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19046_MethodInfo;
 void InternalEnumerator_1__ctor_m19046 (InternalEnumerator_1_t3432 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047 (InternalEnumerator_1_t3432 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19050(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19050_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AssemblyNameFlags_t1377_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19048_MethodInfo;
 void InternalEnumerator_1_Dispose_m19048 (InternalEnumerator_1_t3432 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19049_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19049 (InternalEnumerator_1_t3432 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19050 (InternalEnumerator_1_t3432 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisAssemblyNameFlags_t1377_m25517(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAssemblyNameFlags_t1377_m25517_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3432____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3432, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3432____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3432, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3432_FieldInfos[] =
{
	&InternalEnumerator_1_t3432____array_0_FieldInfo,
	&InternalEnumerator_1_t3432____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3432____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3432_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3432____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3432_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19050_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3432_PropertyInfos[] =
{
	&InternalEnumerator_1_t3432____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3432____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3432_InternalEnumerator_1__ctor_m19046_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19046_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19046_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19046/* method */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3432_InternalEnumerator_1__ctor_m19046_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19046_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047/* method */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19048_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19048_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19048/* method */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19048_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19049_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19049_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19049/* method */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19049_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
extern void* RuntimeInvoker_AssemblyNameFlags_t1377 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19050_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyNameFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19050_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19050/* method */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyNameFlags_t1377_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyNameFlags_t1377/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19050_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3432_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19046_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047_MethodInfo,
	&InternalEnumerator_1_Dispose_m19048_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19049_MethodInfo,
	&InternalEnumerator_1_get_Current_m19050_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3432_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19047_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19049_MethodInfo,
	&InternalEnumerator_1_Dispose_m19048_MethodInfo,
	&InternalEnumerator_1_get_Current_m19050_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3432_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4927_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3432_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4927_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3432_0_0_0;
extern Il2CppType InternalEnumerator_1_t3432_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3432_GenericClass;
TypeInfo InternalEnumerator_1_t3432_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3432_MethodInfos/* methods */
	, InternalEnumerator_1_t3432_PropertyInfos/* properties */
	, InternalEnumerator_1_t3432_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3432_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3432_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3432_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3432_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3432_1_0_0/* this_arg */
	, InternalEnumerator_1_t3432_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3432_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3432)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6423_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>
extern MethodInfo ICollection_1_get_Count_m33351_MethodInfo;
static PropertyInfo ICollection_1_t6423____Count_PropertyInfo = 
{
	&ICollection_1_t6423_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33352_MethodInfo;
static PropertyInfo ICollection_1_t6423____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6423_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33352_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6423_PropertyInfos[] =
{
	&ICollection_1_t6423____Count_PropertyInfo,
	&ICollection_1_t6423____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33351_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m33351_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33351_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33352_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33352_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33352_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
static ParameterInfo ICollection_1_t6423_ICollection_1_Add_m33353_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1377_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33353_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Add(T)
MethodInfo ICollection_1_Add_m33353_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6423_ICollection_1_Add_m33353_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33353_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33354_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Clear()
MethodInfo ICollection_1_Clear_m33354_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33354_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
static ParameterInfo ICollection_1_t6423_ICollection_1_Contains_m33355_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1377_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33355_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m33355_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6423_ICollection_1_Contains_m33355_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33355_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlagsU5BU5D_t3681_0_0_0;
extern Il2CppType AssemblyNameFlagsU5BU5D_t3681_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6423_ICollection_1_CopyTo_m33356_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlagsU5BU5D_t3681_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33356_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33356_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6423_ICollection_1_CopyTo_m33356_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33356_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
static ParameterInfo ICollection_1_t6423_ICollection_1_Remove_m33357_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1377_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33357_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyNameFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m33357_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6423_ICollection_1_Remove_m33357_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33357_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6423_MethodInfos[] =
{
	&ICollection_1_get_Count_m33351_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33352_MethodInfo,
	&ICollection_1_Add_m33353_MethodInfo,
	&ICollection_1_Clear_m33354_MethodInfo,
	&ICollection_1_Contains_m33355_MethodInfo,
	&ICollection_1_CopyTo_m33356_MethodInfo,
	&ICollection_1_Remove_m33357_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6425_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6423_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6425_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6423_0_0_0;
extern Il2CppType ICollection_1_t6423_1_0_0;
struct ICollection_1_t6423;
extern Il2CppGenericClass ICollection_1_t6423_GenericClass;
TypeInfo ICollection_1_t6423_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6423_MethodInfos/* methods */
	, ICollection_1_t6423_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6423_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6423_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6423_0_0_0/* byval_arg */
	, &ICollection_1_t6423_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6423_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyNameFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyNameFlags>
extern Il2CppType IEnumerator_1_t4927_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33358_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyNameFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33358_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6425_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4927_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33358_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6425_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33358_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6425_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6425_0_0_0;
extern Il2CppType IEnumerable_1_t6425_1_0_0;
struct IEnumerable_1_t6425;
extern Il2CppGenericClass IEnumerable_1_t6425_GenericClass;
TypeInfo IEnumerable_1_t6425_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6425_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6425_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6425_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6425_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6425_0_0_0/* byval_arg */
	, &IEnumerable_1_t6425_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6425_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6424_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>
extern MethodInfo IList_1_get_Item_m33359_MethodInfo;
extern MethodInfo IList_1_set_Item_m33360_MethodInfo;
static PropertyInfo IList_1_t6424____Item_PropertyInfo = 
{
	&IList_1_t6424_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33359_MethodInfo/* get */
	, &IList_1_set_Item_m33360_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6424_PropertyInfos[] =
{
	&IList_1_t6424____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
static ParameterInfo IList_1_t6424_IList_1_IndexOf_m33361_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1377_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33361_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33361_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6424_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6424_IList_1_IndexOf_m33361_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33361_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
static ParameterInfo IList_1_t6424_IList_1_Insert_m33362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1377_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33362_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33362_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6424_IList_1_Insert_m33362_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33362_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6424_IList_1_RemoveAt_m33363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33363_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33363_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6424_IList_1_RemoveAt_m33363_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33363_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6424_IList_1_get_Item_m33359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
extern void* RuntimeInvoker_AssemblyNameFlags_t1377_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33359_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33359_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6424_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyNameFlags_t1377_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyNameFlags_t1377_Int32_t18/* invoker_method */
	, IList_1_t6424_IList_1_get_Item_m33359_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33359_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyNameFlags_t1377_0_0_0;
static ParameterInfo IList_1_t6424_IList_1_set_Item_m33360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyNameFlags_t1377_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33360_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyNameFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33360_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6424_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6424_IList_1_set_Item_m33360_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33360_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6424_MethodInfos[] =
{
	&IList_1_IndexOf_m33361_MethodInfo,
	&IList_1_Insert_m33362_MethodInfo,
	&IList_1_RemoveAt_m33363_MethodInfo,
	&IList_1_get_Item_m33359_MethodInfo,
	&IList_1_set_Item_m33360_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6424_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6423_il2cpp_TypeInfo,
	&IEnumerable_1_t6425_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6424_0_0_0;
extern Il2CppType IList_1_t6424_1_0_0;
struct IList_1_t6424;
extern Il2CppGenericClass IList_1_t6424_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6424_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6424_MethodInfos/* methods */
	, IList_1_t6424_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6424_il2cpp_TypeInfo/* element_class */
	, IList_1_t6424_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6424_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6424_0_0_0/* byval_arg */
	, &IList_1_t6424_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6424_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4929_il2cpp_TypeInfo;

// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyProductAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33364_MethodInfo;
static PropertyInfo IEnumerator_1_t4929____Current_PropertyInfo = 
{
	&IEnumerator_1_t4929_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33364_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4929_PropertyInfos[] =
{
	&IEnumerator_1_t4929____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33364_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33364_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4929_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyProductAttribute_t404_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33364_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4929_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33364_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4929_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4929_0_0_0;
extern Il2CppType IEnumerator_1_t4929_1_0_0;
struct IEnumerator_1_t4929;
extern Il2CppGenericClass IEnumerator_1_t4929_GenericClass;
TypeInfo IEnumerator_1_t4929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4929_MethodInfos/* methods */
	, IEnumerator_1_t4929_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4929_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4929_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4929_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4929_0_0_0/* byval_arg */
	, &IEnumerator_1_t4929_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4929_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_460.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3433_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_460MethodDeclarations.h"

extern TypeInfo AssemblyProductAttribute_t404_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19055_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyProductAttribute_t404_m25528_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyProductAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyProductAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyProductAttribute_t404_m25528(__this, p0, method) (AssemblyProductAttribute_t404 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3433____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3433, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3433____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3433, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3433_FieldInfos[] =
{
	&InternalEnumerator_1_t3433____array_0_FieldInfo,
	&InternalEnumerator_1_t3433____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19052_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3433____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3433_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3433____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3433_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19055_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3433_PropertyInfos[] =
{
	&InternalEnumerator_1_t3433____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3433____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3433_InternalEnumerator_1__ctor_m19051_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19051_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19051_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3433_InternalEnumerator_1__ctor_m19051_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19051_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19052_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19052_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19052_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19053_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19053_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19053_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19054_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19054_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19054_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19055_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyProductAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19055_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyProductAttribute_t404_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19055_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3433_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19051_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19052_MethodInfo,
	&InternalEnumerator_1_Dispose_m19053_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19054_MethodInfo,
	&InternalEnumerator_1_get_Current_m19055_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19054_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19053_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3433_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19052_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19054_MethodInfo,
	&InternalEnumerator_1_Dispose_m19053_MethodInfo,
	&InternalEnumerator_1_get_Current_m19055_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3433_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4929_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3433_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4929_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyProductAttribute_t404_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3433_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19055_MethodInfo/* Method Usage */,
	&AssemblyProductAttribute_t404_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyProductAttribute_t404_m25528_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3433_0_0_0;
extern Il2CppType InternalEnumerator_1_t3433_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3433_GenericClass;
TypeInfo InternalEnumerator_1_t3433_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3433_MethodInfos/* methods */
	, InternalEnumerator_1_t3433_PropertyInfos/* properties */
	, InternalEnumerator_1_t3433_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3433_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3433_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3433_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3433_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3433_1_0_0/* this_arg */
	, InternalEnumerator_1_t3433_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3433_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3433_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3433)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6426_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>
extern MethodInfo ICollection_1_get_Count_m33365_MethodInfo;
static PropertyInfo ICollection_1_t6426____Count_PropertyInfo = 
{
	&ICollection_1_t6426_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33365_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33366_MethodInfo;
static PropertyInfo ICollection_1_t6426____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6426_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6426_PropertyInfos[] =
{
	&ICollection_1_t6426____Count_PropertyInfo,
	&ICollection_1_t6426____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33365_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33365_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33365_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33366_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33366_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33366_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
static ParameterInfo ICollection_1_t6426_ICollection_1_Add_m33367_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t404_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33367_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33367_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6426_ICollection_1_Add_m33367_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33367_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33368_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33368_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33368_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
static ParameterInfo ICollection_1_t6426_ICollection_1_Contains_m33369_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t404_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33369_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33369_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6426_ICollection_1_Contains_m33369_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33369_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttributeU5BU5D_t3682_0_0_0;
extern Il2CppType AssemblyProductAttributeU5BU5D_t3682_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6426_ICollection_1_CopyTo_m33370_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttributeU5BU5D_t3682_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33370_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33370_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6426_ICollection_1_CopyTo_m33370_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33370_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
static ParameterInfo ICollection_1_t6426_ICollection_1_Remove_m33371_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t404_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33371_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyProductAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33371_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6426_ICollection_1_Remove_m33371_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33371_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6426_MethodInfos[] =
{
	&ICollection_1_get_Count_m33365_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33366_MethodInfo,
	&ICollection_1_Add_m33367_MethodInfo,
	&ICollection_1_Clear_m33368_MethodInfo,
	&ICollection_1_Contains_m33369_MethodInfo,
	&ICollection_1_CopyTo_m33370_MethodInfo,
	&ICollection_1_Remove_m33371_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6428_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6426_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6426_0_0_0;
extern Il2CppType ICollection_1_t6426_1_0_0;
struct ICollection_1_t6426;
extern Il2CppGenericClass ICollection_1_t6426_GenericClass;
TypeInfo ICollection_1_t6426_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6426_MethodInfos/* methods */
	, ICollection_1_t6426_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6426_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6426_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6426_0_0_0/* byval_arg */
	, &ICollection_1_t6426_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6426_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyProductAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyProductAttribute>
extern Il2CppType IEnumerator_1_t4929_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33372_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyProductAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33372_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6428_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4929_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33372_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6428_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33372_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6428_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6428_0_0_0;
extern Il2CppType IEnumerable_1_t6428_1_0_0;
struct IEnumerable_1_t6428;
extern Il2CppGenericClass IEnumerable_1_t6428_GenericClass;
TypeInfo IEnumerable_1_t6428_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6428_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6428_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6428_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6428_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6428_0_0_0/* byval_arg */
	, &IEnumerable_1_t6428_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6428_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6427_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>
extern MethodInfo IList_1_get_Item_m33373_MethodInfo;
extern MethodInfo IList_1_set_Item_m33374_MethodInfo;
static PropertyInfo IList_1_t6427____Item_PropertyInfo = 
{
	&IList_1_t6427_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33373_MethodInfo/* get */
	, &IList_1_set_Item_m33374_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6427_PropertyInfos[] =
{
	&IList_1_t6427____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
static ParameterInfo IList_1_t6427_IList_1_IndexOf_m33375_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t404_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33375_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33375_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6427_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6427_IList_1_IndexOf_m33375_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33375_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
static ParameterInfo IList_1_t6427_IList_1_Insert_m33376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t404_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33376_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33376_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6427_IList_1_Insert_m33376_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33376_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6427_IList_1_RemoveAt_m33377_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33377_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33377_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6427_IList_1_RemoveAt_m33377_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33377_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6427_IList_1_get_Item_m33373_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33373_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33373_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6427_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyProductAttribute_t404_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6427_IList_1_get_Item_m33373_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33373_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyProductAttribute_t404_0_0_0;
static ParameterInfo IList_1_t6427_IList_1_set_Item_m33374_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyProductAttribute_t404_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33374_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyProductAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33374_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6427_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6427_IList_1_set_Item_m33374_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33374_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6427_MethodInfos[] =
{
	&IList_1_IndexOf_m33375_MethodInfo,
	&IList_1_Insert_m33376_MethodInfo,
	&IList_1_RemoveAt_m33377_MethodInfo,
	&IList_1_get_Item_m33373_MethodInfo,
	&IList_1_set_Item_m33374_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6427_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6426_il2cpp_TypeInfo,
	&IEnumerable_1_t6428_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6427_0_0_0;
extern Il2CppType IList_1_t6427_1_0_0;
struct IList_1_t6427;
extern Il2CppGenericClass IList_1_t6427_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6427_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6427_MethodInfos/* methods */
	, IList_1_t6427_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6427_il2cpp_TypeInfo/* element_class */
	, IList_1_t6427_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6427_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6427_0_0_0/* byval_arg */
	, &IList_1_t6427_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6427_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4931_il2cpp_TypeInfo;

// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTitleAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33378_MethodInfo;
static PropertyInfo IEnumerator_1_t4931____Current_PropertyInfo = 
{
	&IEnumerator_1_t4931_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4931_PropertyInfos[] =
{
	&IEnumerator_1_t4931____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33378_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33378_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4931_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTitleAttribute_t400_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33378_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4931_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33378_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4931_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4931_0_0_0;
extern Il2CppType IEnumerator_1_t4931_1_0_0;
struct IEnumerator_1_t4931;
extern Il2CppGenericClass IEnumerator_1_t4931_GenericClass;
TypeInfo IEnumerator_1_t4931_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4931_MethodInfos/* methods */
	, IEnumerator_1_t4931_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4931_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4931_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4931_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4931_0_0_0/* byval_arg */
	, &IEnumerator_1_t4931_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4931_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_461.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3434_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_461MethodDeclarations.h"

extern TypeInfo AssemblyTitleAttribute_t400_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19060_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyTitleAttribute_t400_m25539_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTitleAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTitleAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyTitleAttribute_t400_m25539(__this, p0, method) (AssemblyTitleAttribute_t400 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3434____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3434, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3434____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3434, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3434_FieldInfos[] =
{
	&InternalEnumerator_1_t3434____array_0_FieldInfo,
	&InternalEnumerator_1_t3434____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3434____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3434_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3434____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3434_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19060_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3434_PropertyInfos[] =
{
	&InternalEnumerator_1_t3434____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3434____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3434_InternalEnumerator_1__ctor_m19056_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19056_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19056_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3434_InternalEnumerator_1__ctor_m19056_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19056_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19058_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19058_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19058_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19059_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19059_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19059_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19060_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTitleAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19060_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTitleAttribute_t400_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19060_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3434_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19056_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_MethodInfo,
	&InternalEnumerator_1_Dispose_m19058_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19059_MethodInfo,
	&InternalEnumerator_1_get_Current_m19060_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19059_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19058_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3434_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19057_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19059_MethodInfo,
	&InternalEnumerator_1_Dispose_m19058_MethodInfo,
	&InternalEnumerator_1_get_Current_m19060_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3434_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4931_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3434_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4931_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyTitleAttribute_t400_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3434_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19060_MethodInfo/* Method Usage */,
	&AssemblyTitleAttribute_t400_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyTitleAttribute_t400_m25539_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3434_0_0_0;
extern Il2CppType InternalEnumerator_1_t3434_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3434_GenericClass;
TypeInfo InternalEnumerator_1_t3434_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3434_MethodInfos/* methods */
	, InternalEnumerator_1_t3434_PropertyInfos/* properties */
	, InternalEnumerator_1_t3434_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3434_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3434_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3434_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3434_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3434_1_0_0/* this_arg */
	, InternalEnumerator_1_t3434_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3434_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3434_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3434)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6429_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>
extern MethodInfo ICollection_1_get_Count_m33379_MethodInfo;
static PropertyInfo ICollection_1_t6429____Count_PropertyInfo = 
{
	&ICollection_1_t6429_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33379_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33380_MethodInfo;
static PropertyInfo ICollection_1_t6429____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6429_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33380_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6429_PropertyInfos[] =
{
	&ICollection_1_t6429____Count_PropertyInfo,
	&ICollection_1_t6429____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33379_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33379_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33379_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33380_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33380_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33380_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
static ParameterInfo ICollection_1_t6429_ICollection_1_Add_m33381_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t400_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33381_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33381_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6429_ICollection_1_Add_m33381_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33381_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33382_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33382_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33382_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
static ParameterInfo ICollection_1_t6429_ICollection_1_Contains_m33383_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t400_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33383_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33383_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6429_ICollection_1_Contains_m33383_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33383_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttributeU5BU5D_t3683_0_0_0;
extern Il2CppType AssemblyTitleAttributeU5BU5D_t3683_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6429_ICollection_1_CopyTo_m33384_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttributeU5BU5D_t3683_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33384_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33384_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6429_ICollection_1_CopyTo_m33384_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33384_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
static ParameterInfo ICollection_1_t6429_ICollection_1_Remove_m33385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t400_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33385_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTitleAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33385_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6429_ICollection_1_Remove_m33385_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33385_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6429_MethodInfos[] =
{
	&ICollection_1_get_Count_m33379_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33380_MethodInfo,
	&ICollection_1_Add_m33381_MethodInfo,
	&ICollection_1_Clear_m33382_MethodInfo,
	&ICollection_1_Contains_m33383_MethodInfo,
	&ICollection_1_CopyTo_m33384_MethodInfo,
	&ICollection_1_Remove_m33385_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6431_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6429_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6431_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6429_0_0_0;
extern Il2CppType ICollection_1_t6429_1_0_0;
struct ICollection_1_t6429;
extern Il2CppGenericClass ICollection_1_t6429_GenericClass;
TypeInfo ICollection_1_t6429_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6429_MethodInfos/* methods */
	, ICollection_1_t6429_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6429_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6429_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6429_0_0_0/* byval_arg */
	, &ICollection_1_t6429_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6429_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTitleAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTitleAttribute>
extern Il2CppType IEnumerator_1_t4931_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33386_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTitleAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33386_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6431_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4931_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33386_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6431_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33386_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6431_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6431_0_0_0;
extern Il2CppType IEnumerable_1_t6431_1_0_0;
struct IEnumerable_1_t6431;
extern Il2CppGenericClass IEnumerable_1_t6431_GenericClass;
TypeInfo IEnumerable_1_t6431_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6431_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6431_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6431_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6431_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6431_0_0_0/* byval_arg */
	, &IEnumerable_1_t6431_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6431_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6430_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>
extern MethodInfo IList_1_get_Item_m33387_MethodInfo;
extern MethodInfo IList_1_set_Item_m33388_MethodInfo;
static PropertyInfo IList_1_t6430____Item_PropertyInfo = 
{
	&IList_1_t6430_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33387_MethodInfo/* get */
	, &IList_1_set_Item_m33388_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6430_PropertyInfos[] =
{
	&IList_1_t6430____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
static ParameterInfo IList_1_t6430_IList_1_IndexOf_m33389_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t400_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33389_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33389_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6430_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6430_IList_1_IndexOf_m33389_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33389_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
static ParameterInfo IList_1_t6430_IList_1_Insert_m33390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t400_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33390_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33390_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6430_IList_1_Insert_m33390_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33390_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6430_IList_1_RemoveAt_m33391_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33391_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33391_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6430_IList_1_RemoveAt_m33391_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33391_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6430_IList_1_get_Item_m33387_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33387_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33387_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6430_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTitleAttribute_t400_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6430_IList_1_get_Item_m33387_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33387_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyTitleAttribute_t400_0_0_0;
static ParameterInfo IList_1_t6430_IList_1_set_Item_m33388_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTitleAttribute_t400_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33388_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTitleAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33388_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6430_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6430_IList_1_set_Item_m33388_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33388_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6430_MethodInfos[] =
{
	&IList_1_IndexOf_m33389_MethodInfo,
	&IList_1_Insert_m33390_MethodInfo,
	&IList_1_RemoveAt_m33391_MethodInfo,
	&IList_1_get_Item_m33387_MethodInfo,
	&IList_1_set_Item_m33388_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6430_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6429_il2cpp_TypeInfo,
	&IEnumerable_1_t6431_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6430_0_0_0;
extern Il2CppType IList_1_t6430_1_0_0;
struct IList_1_t6430;
extern Il2CppGenericClass IList_1_t6430_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6430_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6430_MethodInfos/* methods */
	, IList_1_t6430_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6430_il2cpp_TypeInfo/* element_class */
	, IList_1_t6430_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6430_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6430_0_0_0/* byval_arg */
	, &IList_1_t6430_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6430_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4933_il2cpp_TypeInfo;

// System.Reflection.AssemblyTrademarkAttribute
#include "mscorlib_System_Reflection_AssemblyTrademarkAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33392_MethodInfo;
static PropertyInfo IEnumerator_1_t4933____Current_PropertyInfo = 
{
	&IEnumerator_1_t4933_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33392_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4933_PropertyInfos[] =
{
	&IEnumerator_1_t4933____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33392_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33392_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4933_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTrademarkAttribute_t409_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33392_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4933_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33392_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4933_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4933_0_0_0;
extern Il2CppType IEnumerator_1_t4933_1_0_0;
struct IEnumerator_1_t4933;
extern Il2CppGenericClass IEnumerator_1_t4933_GenericClass;
TypeInfo IEnumerator_1_t4933_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4933_MethodInfos/* methods */
	, IEnumerator_1_t4933_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4933_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4933_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4933_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4933_0_0_0/* byval_arg */
	, &IEnumerator_1_t4933_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4933_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_462.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3435_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_462MethodDeclarations.h"

extern TypeInfo AssemblyTrademarkAttribute_t409_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19065_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyTrademarkAttribute_t409_m25550_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTrademarkAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.AssemblyTrademarkAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisAssemblyTrademarkAttribute_t409_m25550(__this, p0, method) (AssemblyTrademarkAttribute_t409 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3435____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3435, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3435____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3435, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3435_FieldInfos[] =
{
	&InternalEnumerator_1_t3435____array_0_FieldInfo,
	&InternalEnumerator_1_t3435____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19062_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3435____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3435_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19062_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3435____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3435_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3435_PropertyInfos[] =
{
	&InternalEnumerator_1_t3435____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3435____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3435_InternalEnumerator_1__ctor_m19061_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19061_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19061_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3435_InternalEnumerator_1__ctor_m19061_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19061_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19062_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19062_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19062_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19063_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19063_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19063_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19064_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19064_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19064_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19065_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.AssemblyTrademarkAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19065_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTrademarkAttribute_t409_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19065_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3435_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19061_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19062_MethodInfo,
	&InternalEnumerator_1_Dispose_m19063_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19064_MethodInfo,
	&InternalEnumerator_1_get_Current_m19065_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19064_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19063_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3435_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19062_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19064_MethodInfo,
	&InternalEnumerator_1_Dispose_m19063_MethodInfo,
	&InternalEnumerator_1_get_Current_m19065_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3435_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4933_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3435_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4933_il2cpp_TypeInfo, 7},
};
extern TypeInfo AssemblyTrademarkAttribute_t409_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3435_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19065_MethodInfo/* Method Usage */,
	&AssemblyTrademarkAttribute_t409_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssemblyTrademarkAttribute_t409_m25550_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3435_0_0_0;
extern Il2CppType InternalEnumerator_1_t3435_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3435_GenericClass;
TypeInfo InternalEnumerator_1_t3435_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3435_MethodInfos/* methods */
	, InternalEnumerator_1_t3435_PropertyInfos/* properties */
	, InternalEnumerator_1_t3435_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3435_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3435_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3435_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3435_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3435_1_0_0/* this_arg */
	, InternalEnumerator_1_t3435_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3435_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3435_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3435)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6432_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>
extern MethodInfo ICollection_1_get_Count_m33393_MethodInfo;
static PropertyInfo ICollection_1_t6432____Count_PropertyInfo = 
{
	&ICollection_1_t6432_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33394_MethodInfo;
static PropertyInfo ICollection_1_t6432____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6432_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33394_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6432_PropertyInfos[] =
{
	&ICollection_1_t6432____Count_PropertyInfo,
	&ICollection_1_t6432____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33393_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33393_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33393_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33394_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33394_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33394_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
static ParameterInfo ICollection_1_t6432_ICollection_1_Add_m33395_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t409_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33395_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33395_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6432_ICollection_1_Add_m33395_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33395_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33396_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33396_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33396_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
static ParameterInfo ICollection_1_t6432_ICollection_1_Contains_m33397_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t409_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33397_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33397_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6432_ICollection_1_Contains_m33397_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33397_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttributeU5BU5D_t3684_0_0_0;
extern Il2CppType AssemblyTrademarkAttributeU5BU5D_t3684_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6432_ICollection_1_CopyTo_m33398_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttributeU5BU5D_t3684_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33398_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33398_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6432_ICollection_1_CopyTo_m33398_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33398_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
static ParameterInfo ICollection_1_t6432_ICollection_1_Remove_m33399_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t409_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33399_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.AssemblyTrademarkAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33399_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6432_ICollection_1_Remove_m33399_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33399_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6432_MethodInfos[] =
{
	&ICollection_1_get_Count_m33393_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33394_MethodInfo,
	&ICollection_1_Add_m33395_MethodInfo,
	&ICollection_1_Clear_m33396_MethodInfo,
	&ICollection_1_Contains_m33397_MethodInfo,
	&ICollection_1_CopyTo_m33398_MethodInfo,
	&ICollection_1_Remove_m33399_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6434_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6432_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6434_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6432_0_0_0;
extern Il2CppType ICollection_1_t6432_1_0_0;
struct ICollection_1_t6432;
extern Il2CppGenericClass ICollection_1_t6432_GenericClass;
TypeInfo ICollection_1_t6432_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6432_MethodInfos/* methods */
	, ICollection_1_t6432_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6432_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6432_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6432_0_0_0/* byval_arg */
	, &ICollection_1_t6432_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6432_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTrademarkAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTrademarkAttribute>
extern Il2CppType IEnumerator_1_t4933_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33400_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.AssemblyTrademarkAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33400_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6434_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4933_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33400_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6434_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33400_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6434_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6434_0_0_0;
extern Il2CppType IEnumerable_1_t6434_1_0_0;
struct IEnumerable_1_t6434;
extern Il2CppGenericClass IEnumerable_1_t6434_GenericClass;
TypeInfo IEnumerable_1_t6434_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6434_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6434_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6434_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6434_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6434_0_0_0/* byval_arg */
	, &IEnumerable_1_t6434_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6434_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6433_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>
extern MethodInfo IList_1_get_Item_m33401_MethodInfo;
extern MethodInfo IList_1_set_Item_m33402_MethodInfo;
static PropertyInfo IList_1_t6433____Item_PropertyInfo = 
{
	&IList_1_t6433_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33401_MethodInfo/* get */
	, &IList_1_set_Item_m33402_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6433_PropertyInfos[] =
{
	&IList_1_t6433____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
static ParameterInfo IList_1_t6433_IList_1_IndexOf_m33403_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t409_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33403_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33403_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6433_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6433_IList_1_IndexOf_m33403_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33403_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
static ParameterInfo IList_1_t6433_IList_1_Insert_m33404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t409_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33404_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33404_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6433_IList_1_Insert_m33404_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33404_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6433_IList_1_RemoveAt_m33405_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33405_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33405_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6433_IList_1_RemoveAt_m33405_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33405_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6433_IList_1_get_Item_m33401_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33401_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33401_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6433_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyTrademarkAttribute_t409_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6433_IList_1_get_Item_m33401_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33401_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType AssemblyTrademarkAttribute_t409_0_0_0;
static ParameterInfo IList_1_t6433_IList_1_set_Item_m33402_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssemblyTrademarkAttribute_t409_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33402_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.AssemblyTrademarkAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33402_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6433_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6433_IList_1_set_Item_m33402_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33402_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6433_MethodInfos[] =
{
	&IList_1_IndexOf_m33403_MethodInfo,
	&IList_1_Insert_m33404_MethodInfo,
	&IList_1_RemoveAt_m33405_MethodInfo,
	&IList_1_get_Item_m33401_MethodInfo,
	&IList_1_set_Item_m33402_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6433_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6432_il2cpp_TypeInfo,
	&IEnumerable_1_t6434_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6433_0_0_0;
extern Il2CppType IList_1_t6433_1_0_0;
struct IList_1_t6433;
extern Il2CppGenericClass IList_1_t6433_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6433_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6433_MethodInfos/* methods */
	, IList_1_t6433_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6433_il2cpp_TypeInfo/* element_class */
	, IList_1_t6433_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6433_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6433_0_0_0/* byval_arg */
	, &IList_1_t6433_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6433_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4935_il2cpp_TypeInfo;

// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>
extern MethodInfo IEnumerator_1_get_Current_m33406_MethodInfo;
static PropertyInfo IEnumerator_1_t4935____Current_PropertyInfo = 
{
	&IEnumerator_1_t4935_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33406_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4935_PropertyInfos[] =
{
	&IEnumerator_1_t4935____Current_PropertyInfo,
	NULL
};
extern Il2CppType PropertyInfo_t1164_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33406_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33406_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4935_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t1164_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33406_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4935_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33406_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4935_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4935_0_0_0;
extern Il2CppType IEnumerator_1_t4935_1_0_0;
struct IEnumerator_1_t4935;
extern Il2CppGenericClass IEnumerator_1_t4935_GenericClass;
TypeInfo IEnumerator_1_t4935_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4935_MethodInfos/* methods */
	, IEnumerator_1_t4935_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4935_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4935_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4935_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4935_0_0_0/* byval_arg */
	, &IEnumerator_1_t4935_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4935_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_463.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3436_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_463MethodDeclarations.h"

extern TypeInfo PropertyInfo_t1164_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19070_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPropertyInfo_t1164_m25561_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisPropertyInfo_t1164_m25561(__this, p0, method) (PropertyInfo_t1164 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3436____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3436, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3436____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3436, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3436_FieldInfos[] =
{
	&InternalEnumerator_1_t3436____array_0_FieldInfo,
	&InternalEnumerator_1_t3436____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19067_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3436____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3436_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3436____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3436_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19070_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3436_PropertyInfos[] =
{
	&InternalEnumerator_1_t3436____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3436____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3436_InternalEnumerator_1__ctor_m19066_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19066_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19066_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3436_InternalEnumerator_1__ctor_m19066_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19066_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19067_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19067_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19067_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19068_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19068_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19068_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19069_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19069_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19069_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t1164_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19070_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19070_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t1164_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19070_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3436_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19066_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19067_MethodInfo,
	&InternalEnumerator_1_Dispose_m19068_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19069_MethodInfo,
	&InternalEnumerator_1_get_Current_m19070_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19069_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19068_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3436_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19067_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19069_MethodInfo,
	&InternalEnumerator_1_Dispose_m19068_MethodInfo,
	&InternalEnumerator_1_get_Current_m19070_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3436_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4935_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3436_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4935_il2cpp_TypeInfo, 7},
};
extern TypeInfo PropertyInfo_t1164_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3436_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19070_MethodInfo/* Method Usage */,
	&PropertyInfo_t1164_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisPropertyInfo_t1164_m25561_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3436_0_0_0;
extern Il2CppType InternalEnumerator_1_t3436_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3436_GenericClass;
TypeInfo InternalEnumerator_1_t3436_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3436_MethodInfos/* methods */
	, InternalEnumerator_1_t3436_PropertyInfos/* properties */
	, InternalEnumerator_1_t3436_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3436_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3436_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3436_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3436_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3436_1_0_0/* this_arg */
	, InternalEnumerator_1_t3436_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3436_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3436_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3436)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6435_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>
extern MethodInfo ICollection_1_get_Count_m33407_MethodInfo;
static PropertyInfo ICollection_1_t6435____Count_PropertyInfo = 
{
	&ICollection_1_t6435_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33407_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33408_MethodInfo;
static PropertyInfo ICollection_1_t6435____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6435_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33408_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6435_PropertyInfos[] =
{
	&ICollection_1_t6435____Count_PropertyInfo,
	&ICollection_1_t6435____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33407_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m33407_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33407_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33408_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33408_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33408_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t1164_0_0_0;
extern Il2CppType PropertyInfo_t1164_0_0_0;
static ParameterInfo ICollection_1_t6435_ICollection_1_Add_m33409_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t1164_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33409_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Add(T)
MethodInfo ICollection_1_Add_m33409_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6435_ICollection_1_Add_m33409_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33409_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33410_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Clear()
MethodInfo ICollection_1_Clear_m33410_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33410_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t1164_0_0_0;
static ParameterInfo ICollection_1_t6435_ICollection_1_Contains_m33411_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t1164_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33411_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m33411_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6435_ICollection_1_Contains_m33411_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33411_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfoU5BU5D_t1380_0_0_0;
extern Il2CppType PropertyInfoU5BU5D_t1380_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6435_ICollection_1_CopyTo_m33412_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfoU5BU5D_t1380_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33412_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33412_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6435_ICollection_1_CopyTo_m33412_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33412_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyInfo_t1164_0_0_0;
static ParameterInfo ICollection_1_t6435_ICollection_1_Remove_m33413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t1164_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33413_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m33413_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6435_ICollection_1_Remove_m33413_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33413_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6435_MethodInfos[] =
{
	&ICollection_1_get_Count_m33407_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33408_MethodInfo,
	&ICollection_1_Add_m33409_MethodInfo,
	&ICollection_1_Clear_m33410_MethodInfo,
	&ICollection_1_Contains_m33411_MethodInfo,
	&ICollection_1_CopyTo_m33412_MethodInfo,
	&ICollection_1_Remove_m33413_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6437_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6435_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6437_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6435_0_0_0;
extern Il2CppType ICollection_1_t6435_1_0_0;
struct ICollection_1_t6435;
extern Il2CppGenericClass ICollection_1_t6435_GenericClass;
TypeInfo ICollection_1_t6435_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6435_MethodInfos/* methods */
	, ICollection_1_t6435_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6435_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6435_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6435_0_0_0/* byval_arg */
	, &ICollection_1_t6435_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6435_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
extern Il2CppType IEnumerator_1_t4935_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33414_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33414_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6437_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4935_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33414_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6437_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33414_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6437_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6437_0_0_0;
extern Il2CppType IEnumerable_1_t6437_1_0_0;
struct IEnumerable_1_t6437;
extern Il2CppGenericClass IEnumerable_1_t6437_GenericClass;
TypeInfo IEnumerable_1_t6437_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6437_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6437_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6437_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6437_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6437_0_0_0/* byval_arg */
	, &IEnumerable_1_t6437_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6437_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6436_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
extern MethodInfo IList_1_get_Item_m33415_MethodInfo;
extern MethodInfo IList_1_set_Item_m33416_MethodInfo;
static PropertyInfo IList_1_t6436____Item_PropertyInfo = 
{
	&IList_1_t6436_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33415_MethodInfo/* get */
	, &IList_1_set_Item_m33416_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6436_PropertyInfos[] =
{
	&IList_1_t6436____Item_PropertyInfo,
	NULL
};
extern Il2CppType PropertyInfo_t1164_0_0_0;
static ParameterInfo IList_1_t6436_IList_1_IndexOf_m33417_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t1164_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33417_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33417_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6436_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6436_IList_1_IndexOf_m33417_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33417_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PropertyInfo_t1164_0_0_0;
static ParameterInfo IList_1_t6436_IList_1_Insert_m33418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t1164_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33418_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33418_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6436_IList_1_Insert_m33418_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33418_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6436_IList_1_RemoveAt_m33419_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33419_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33419_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6436_IList_1_RemoveAt_m33419_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33419_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6436_IList_1_get_Item_m33415_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType PropertyInfo_t1164_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33415_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33415_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6436_il2cpp_TypeInfo/* declaring_type */
	, &PropertyInfo_t1164_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6436_IList_1_get_Item_m33415_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33415_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PropertyInfo_t1164_0_0_0;
static ParameterInfo IList_1_t6436_IList_1_set_Item_m33416_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PropertyInfo_t1164_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33416_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33416_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6436_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6436_IList_1_set_Item_m33416_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33416_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6436_MethodInfos[] =
{
	&IList_1_IndexOf_m33417_MethodInfo,
	&IList_1_Insert_m33418_MethodInfo,
	&IList_1_RemoveAt_m33419_MethodInfo,
	&IList_1_get_Item_m33415_MethodInfo,
	&IList_1_set_Item_m33416_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6436_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6435_il2cpp_TypeInfo,
	&IEnumerable_1_t6437_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6436_0_0_0;
extern Il2CppType IList_1_t6436_1_0_0;
struct IList_1_t6436;
extern Il2CppGenericClass IList_1_t6436_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6436_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6436_MethodInfos/* methods */
	, IList_1_t6436_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6436_il2cpp_TypeInfo/* element_class */
	, IList_1_t6436_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6436_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6436_0_0_0/* byval_arg */
	, &IList_1_t6436_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6436_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t6438_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>
extern MethodInfo ICollection_1_get_Count_m33420_MethodInfo;
static PropertyInfo ICollection_1_t6438____Count_PropertyInfo = 
{
	&ICollection_1_t6438_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33420_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33421_MethodInfo;
static PropertyInfo ICollection_1_t6438____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6438_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33421_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6438_PropertyInfos[] =
{
	&ICollection_1_t6438____Count_PropertyInfo,
	&ICollection_1_t6438____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33420_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m33420_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33420_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33421_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33421_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33421_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2073_0_0_0;
extern Il2CppType _PropertyInfo_t2073_0_0_0;
static ParameterInfo ICollection_1_t6438_ICollection_1_Add_m33422_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2073_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33422_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Add(T)
MethodInfo ICollection_1_Add_m33422_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6438_ICollection_1_Add_m33422_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33422_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33423_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Clear()
MethodInfo ICollection_1_Clear_m33423_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33423_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2073_0_0_0;
static ParameterInfo ICollection_1_t6438_ICollection_1_Contains_m33424_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2073_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33424_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m33424_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6438_ICollection_1_Contains_m33424_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33424_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfoU5BU5D_t3685_0_0_0;
extern Il2CppType _PropertyInfoU5BU5D_t3685_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6438_ICollection_1_CopyTo_m33425_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfoU5BU5D_t3685_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33425_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33425_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6438_ICollection_1_CopyTo_m33425_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33425_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2073_0_0_0;
static ParameterInfo ICollection_1_t6438_ICollection_1_Remove_m33426_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2073_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33426_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._PropertyInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m33426_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6438_ICollection_1_Remove_m33426_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33426_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6438_MethodInfos[] =
{
	&ICollection_1_get_Count_m33420_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33421_MethodInfo,
	&ICollection_1_Add_m33422_MethodInfo,
	&ICollection_1_Clear_m33423_MethodInfo,
	&ICollection_1_Contains_m33424_MethodInfo,
	&ICollection_1_CopyTo_m33425_MethodInfo,
	&ICollection_1_Remove_m33426_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6440_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6438_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6440_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6438_0_0_0;
extern Il2CppType ICollection_1_t6438_1_0_0;
struct ICollection_1_t6438;
extern Il2CppGenericClass ICollection_1_t6438_GenericClass;
TypeInfo ICollection_1_t6438_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6438_MethodInfos/* methods */
	, ICollection_1_t6438_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6438_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6438_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6438_0_0_0/* byval_arg */
	, &ICollection_1_t6438_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6438_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._PropertyInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._PropertyInfo>
extern Il2CppType IEnumerator_1_t4937_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33427_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._PropertyInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33427_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6440_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4937_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33427_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6440_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33427_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6440_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6440_0_0_0;
extern Il2CppType IEnumerable_1_t6440_1_0_0;
struct IEnumerable_1_t6440;
extern Il2CppGenericClass IEnumerable_1_t6440_GenericClass;
TypeInfo IEnumerable_1_t6440_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6440_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6440_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6440_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6440_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6440_0_0_0/* byval_arg */
	, &IEnumerable_1_t6440_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6440_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4937_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
extern MethodInfo IEnumerator_1_get_Current_m33428_MethodInfo;
static PropertyInfo IEnumerator_1_t4937____Current_PropertyInfo = 
{
	&IEnumerator_1_t4937_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33428_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4937_PropertyInfos[] =
{
	&IEnumerator_1_t4937____Current_PropertyInfo,
	NULL
};
extern Il2CppType _PropertyInfo_t2073_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33428_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33428_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4937_il2cpp_TypeInfo/* declaring_type */
	, &_PropertyInfo_t2073_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33428_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4937_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33428_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4937_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4937_0_0_0;
extern Il2CppType IEnumerator_1_t4937_1_0_0;
struct IEnumerator_1_t4937;
extern Il2CppGenericClass IEnumerator_1_t4937_GenericClass;
TypeInfo IEnumerator_1_t4937_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4937_MethodInfos/* methods */
	, IEnumerator_1_t4937_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4937_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4937_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4937_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4937_0_0_0/* byval_arg */
	, &IEnumerator_1_t4937_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4937_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_464.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3437_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_464MethodDeclarations.h"

extern TypeInfo _PropertyInfo_t2073_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19075_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_PropertyInfo_t2073_m25572_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._PropertyInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_PropertyInfo_t2073_m25572(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3437____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3437, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3437____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3437, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3437_FieldInfos[] =
{
	&InternalEnumerator_1_t3437____array_0_FieldInfo,
	&InternalEnumerator_1_t3437____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19072_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3437____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3437_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19072_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3437____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3437_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19075_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3437_PropertyInfos[] =
{
	&InternalEnumerator_1_t3437____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3437____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3437_InternalEnumerator_1__ctor_m19071_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19071_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19071_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3437_InternalEnumerator_1__ctor_m19071_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19071_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19072_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19072_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19072_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19073_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19073_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19073_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19074_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19074_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19074_GenericMethod/* genericMethod */

};
extern Il2CppType _PropertyInfo_t2073_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19075_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._PropertyInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19075_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* declaring_type */
	, &_PropertyInfo_t2073_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19075_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3437_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19071_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19072_MethodInfo,
	&InternalEnumerator_1_Dispose_m19073_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19074_MethodInfo,
	&InternalEnumerator_1_get_Current_m19075_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19074_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19073_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3437_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19072_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19074_MethodInfo,
	&InternalEnumerator_1_Dispose_m19073_MethodInfo,
	&InternalEnumerator_1_get_Current_m19075_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3437_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4937_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3437_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4937_il2cpp_TypeInfo, 7},
};
extern TypeInfo _PropertyInfo_t2073_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3437_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19075_MethodInfo/* Method Usage */,
	&_PropertyInfo_t2073_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_PropertyInfo_t2073_m25572_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3437_0_0_0;
extern Il2CppType InternalEnumerator_1_t3437_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3437_GenericClass;
TypeInfo InternalEnumerator_1_t3437_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3437_MethodInfos/* methods */
	, InternalEnumerator_1_t3437_PropertyInfos/* properties */
	, InternalEnumerator_1_t3437_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3437_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3437_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3437_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3437_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3437_1_0_0/* this_arg */
	, InternalEnumerator_1_t3437_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3437_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3437_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3437)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t6439_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>
extern MethodInfo IList_1_get_Item_m33429_MethodInfo;
extern MethodInfo IList_1_set_Item_m33430_MethodInfo;
static PropertyInfo IList_1_t6439____Item_PropertyInfo = 
{
	&IList_1_t6439_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33429_MethodInfo/* get */
	, &IList_1_set_Item_m33430_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6439_PropertyInfos[] =
{
	&IList_1_t6439____Item_PropertyInfo,
	NULL
};
extern Il2CppType _PropertyInfo_t2073_0_0_0;
static ParameterInfo IList_1_t6439_IList_1_IndexOf_m33431_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2073_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33431_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33431_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6439_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6439_IList_1_IndexOf_m33431_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33431_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _PropertyInfo_t2073_0_0_0;
static ParameterInfo IList_1_t6439_IList_1_Insert_m33432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2073_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33432_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33432_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6439_IList_1_Insert_m33432_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33432_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6439_IList_1_RemoveAt_m33433_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33433_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33433_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6439_IList_1_RemoveAt_m33433_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33433_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6439_IList_1_get_Item_m33429_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType _PropertyInfo_t2073_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33429_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33429_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6439_il2cpp_TypeInfo/* declaring_type */
	, &_PropertyInfo_t2073_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6439_IList_1_get_Item_m33429_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33429_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType _PropertyInfo_t2073_0_0_0;
static ParameterInfo IList_1_t6439_IList_1_set_Item_m33430_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_PropertyInfo_t2073_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33430_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._PropertyInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33430_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6439_IList_1_set_Item_m33430_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33430_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6439_MethodInfos[] =
{
	&IList_1_IndexOf_m33431_MethodInfo,
	&IList_1_Insert_m33432_MethodInfo,
	&IList_1_RemoveAt_m33433_MethodInfo,
	&IList_1_get_Item_m33429_MethodInfo,
	&IList_1_set_Item_m33430_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6439_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6438_il2cpp_TypeInfo,
	&IEnumerable_1_t6440_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6439_0_0_0;
extern Il2CppType IList_1_t6439_1_0_0;
struct IList_1_t6439;
extern Il2CppGenericClass IList_1_t6439_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6439_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6439_MethodInfos/* methods */
	, IList_1_t6439_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6439_il2cpp_TypeInfo/* element_class */
	, IList_1_t6439_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6439_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6439_0_0_0/* byval_arg */
	, &IList_1_t6439_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6439_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4939_il2cpp_TypeInfo;

// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.BindingFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.BindingFlags>
extern MethodInfo IEnumerator_1_get_Current_m33434_MethodInfo;
static PropertyInfo IEnumerator_1_t4939____Current_PropertyInfo = 
{
	&IEnumerator_1_t4939_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33434_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4939_PropertyInfos[] =
{
	&IEnumerator_1_t4939____Current_PropertyInfo,
	NULL
};
extern Il2CppType BindingFlags_t670_0_0_0;
extern void* RuntimeInvoker_BindingFlags_t670 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33434_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.BindingFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33434_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4939_il2cpp_TypeInfo/* declaring_type */
	, &BindingFlags_t670_0_0_0/* return_type */
	, RuntimeInvoker_BindingFlags_t670/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33434_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4939_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33434_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4939_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4939_0_0_0;
extern Il2CppType IEnumerator_1_t4939_1_0_0;
struct IEnumerator_1_t4939;
extern Il2CppGenericClass IEnumerator_1_t4939_GenericClass;
TypeInfo IEnumerator_1_t4939_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4939_MethodInfos/* methods */
	, IEnumerator_1_t4939_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4939_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4939_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4939_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4939_0_0_0/* byval_arg */
	, &IEnumerator_1_t4939_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4939_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_465.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3438_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_465MethodDeclarations.h"

extern TypeInfo BindingFlags_t670_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19080_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBindingFlags_t670_m25583_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.BindingFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.BindingFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisBindingFlags_t670_m25583 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19076_MethodInfo;
 void InternalEnumerator_1__ctor_m19076 (InternalEnumerator_1_t3438 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077 (InternalEnumerator_1_t3438 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19080(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19080_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&BindingFlags_t670_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19078_MethodInfo;
 void InternalEnumerator_1_Dispose_m19078 (InternalEnumerator_1_t3438 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19079_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19079 (InternalEnumerator_1_t3438 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19080 (InternalEnumerator_1_t3438 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisBindingFlags_t670_m25583(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisBindingFlags_t670_m25583_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3438____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3438, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3438____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3438, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3438_FieldInfos[] =
{
	&InternalEnumerator_1_t3438____array_0_FieldInfo,
	&InternalEnumerator_1_t3438____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3438____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3438_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3438____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3438_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3438_PropertyInfos[] =
{
	&InternalEnumerator_1_t3438____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3438____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3438_InternalEnumerator_1__ctor_m19076_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19076_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19076_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19076/* method */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3438_InternalEnumerator_1__ctor_m19076_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19076_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077/* method */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19078_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19078_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19078/* method */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19078_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19079_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19079_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19079/* method */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19079_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t670_0_0_0;
extern void* RuntimeInvoker_BindingFlags_t670 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19080_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.BindingFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19080_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19080/* method */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* declaring_type */
	, &BindingFlags_t670_0_0_0/* return_type */
	, RuntimeInvoker_BindingFlags_t670/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19080_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3438_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19076_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077_MethodInfo,
	&InternalEnumerator_1_Dispose_m19078_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19079_MethodInfo,
	&InternalEnumerator_1_get_Current_m19080_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3438_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19077_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19079_MethodInfo,
	&InternalEnumerator_1_Dispose_m19078_MethodInfo,
	&InternalEnumerator_1_get_Current_m19080_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3438_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4939_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3438_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4939_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3438_0_0_0;
extern Il2CppType InternalEnumerator_1_t3438_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3438_GenericClass;
TypeInfo InternalEnumerator_1_t3438_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3438_MethodInfos/* methods */
	, InternalEnumerator_1_t3438_PropertyInfos/* properties */
	, InternalEnumerator_1_t3438_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3438_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3438_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3438_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3438_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3438_1_0_0/* this_arg */
	, InternalEnumerator_1_t3438_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3438_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3438)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6441_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>
extern MethodInfo ICollection_1_get_Count_m33435_MethodInfo;
static PropertyInfo ICollection_1_t6441____Count_PropertyInfo = 
{
	&ICollection_1_t6441_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33435_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33436_MethodInfo;
static PropertyInfo ICollection_1_t6441____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6441_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33436_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6441_PropertyInfos[] =
{
	&ICollection_1_t6441____Count_PropertyInfo,
	&ICollection_1_t6441____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33435_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m33435_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33435_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33436_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33436_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33436_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t670_0_0_0;
extern Il2CppType BindingFlags_t670_0_0_0;
static ParameterInfo ICollection_1_t6441_ICollection_1_Add_m33437_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t670_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33437_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Add(T)
MethodInfo ICollection_1_Add_m33437_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6441_ICollection_1_Add_m33437_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33437_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33438_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Clear()
MethodInfo ICollection_1_Clear_m33438_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33438_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t670_0_0_0;
static ParameterInfo ICollection_1_t6441_ICollection_1_Contains_m33439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t670_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33439_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m33439_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6441_ICollection_1_Contains_m33439_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33439_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlagsU5BU5D_t3686_0_0_0;
extern Il2CppType BindingFlagsU5BU5D_t3686_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6441_ICollection_1_CopyTo_m33440_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlagsU5BU5D_t3686_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33440_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33440_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6441_ICollection_1_CopyTo_m33440_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33440_GenericMethod/* genericMethod */

};
extern Il2CppType BindingFlags_t670_0_0_0;
static ParameterInfo ICollection_1_t6441_ICollection_1_Remove_m33441_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t670_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33441_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.BindingFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m33441_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6441_ICollection_1_Remove_m33441_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33441_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6441_MethodInfos[] =
{
	&ICollection_1_get_Count_m33435_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33436_MethodInfo,
	&ICollection_1_Add_m33437_MethodInfo,
	&ICollection_1_Clear_m33438_MethodInfo,
	&ICollection_1_Contains_m33439_MethodInfo,
	&ICollection_1_CopyTo_m33440_MethodInfo,
	&ICollection_1_Remove_m33441_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6443_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6441_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6443_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6441_0_0_0;
extern Il2CppType ICollection_1_t6441_1_0_0;
struct ICollection_1_t6441;
extern Il2CppGenericClass ICollection_1_t6441_GenericClass;
TypeInfo ICollection_1_t6441_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6441_MethodInfos/* methods */
	, ICollection_1_t6441_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6441_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6441_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6441_0_0_0/* byval_arg */
	, &ICollection_1_t6441_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6441_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.BindingFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.BindingFlags>
extern Il2CppType IEnumerator_1_t4939_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33442_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.BindingFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33442_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6443_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4939_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33442_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6443_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33442_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6443_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6443_0_0_0;
extern Il2CppType IEnumerable_1_t6443_1_0_0;
struct IEnumerable_1_t6443;
extern Il2CppGenericClass IEnumerable_1_t6443_GenericClass;
TypeInfo IEnumerable_1_t6443_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6443_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6443_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6443_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6443_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6443_0_0_0/* byval_arg */
	, &IEnumerable_1_t6443_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6443_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6442_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.BindingFlags>
extern MethodInfo IList_1_get_Item_m33443_MethodInfo;
extern MethodInfo IList_1_set_Item_m33444_MethodInfo;
static PropertyInfo IList_1_t6442____Item_PropertyInfo = 
{
	&IList_1_t6442_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33443_MethodInfo/* get */
	, &IList_1_set_Item_m33444_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6442_PropertyInfos[] =
{
	&IList_1_t6442____Item_PropertyInfo,
	NULL
};
extern Il2CppType BindingFlags_t670_0_0_0;
static ParameterInfo IList_1_t6442_IList_1_IndexOf_m33445_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t670_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33445_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33445_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6442_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6442_IList_1_IndexOf_m33445_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33445_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType BindingFlags_t670_0_0_0;
static ParameterInfo IList_1_t6442_IList_1_Insert_m33446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t670_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33446_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33446_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6442_IList_1_Insert_m33446_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33446_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6442_IList_1_RemoveAt_m33447_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33447_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33447_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6442_IList_1_RemoveAt_m33447_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33447_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6442_IList_1_get_Item_m33443_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType BindingFlags_t670_0_0_0;
extern void* RuntimeInvoker_BindingFlags_t670_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33443_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33443_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6442_il2cpp_TypeInfo/* declaring_type */
	, &BindingFlags_t670_0_0_0/* return_type */
	, RuntimeInvoker_BindingFlags_t670_Int32_t18/* invoker_method */
	, IList_1_t6442_IList_1_get_Item_m33443_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33443_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType BindingFlags_t670_0_0_0;
static ParameterInfo IList_1_t6442_IList_1_set_Item_m33444_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BindingFlags_t670_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33444_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.BindingFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33444_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6442_IList_1_set_Item_m33444_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33444_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6442_MethodInfos[] =
{
	&IList_1_IndexOf_m33445_MethodInfo,
	&IList_1_Insert_m33446_MethodInfo,
	&IList_1_RemoveAt_m33447_MethodInfo,
	&IList_1_get_Item_m33443_MethodInfo,
	&IList_1_set_Item_m33444_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6442_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6441_il2cpp_TypeInfo,
	&IEnumerable_1_t6443_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6442_0_0_0;
extern Il2CppType IList_1_t6442_1_0_0;
struct IList_1_t6442;
extern Il2CppGenericClass IList_1_t6442_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6442_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6442_MethodInfos/* methods */
	, IList_1_t6442_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6442_il2cpp_TypeInfo/* element_class */
	, IList_1_t6442_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6442_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6442_0_0_0/* byval_arg */
	, &IList_1_t6442_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6442_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4941_il2cpp_TypeInfo;

// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.CallingConventions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.CallingConventions>
extern MethodInfo IEnumerator_1_get_Current_m33448_MethodInfo;
static PropertyInfo IEnumerator_1_t4941____Current_PropertyInfo = 
{
	&IEnumerator_1_t4941_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33448_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4941_PropertyInfos[] =
{
	&IEnumerator_1_t4941____Current_PropertyInfo,
	NULL
};
extern Il2CppType CallingConventions_t1381_0_0_0;
extern void* RuntimeInvoker_CallingConventions_t1381 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33448_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.CallingConventions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33448_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4941_il2cpp_TypeInfo/* declaring_type */
	, &CallingConventions_t1381_0_0_0/* return_type */
	, RuntimeInvoker_CallingConventions_t1381/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33448_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4941_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33448_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4941_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4941_0_0_0;
extern Il2CppType IEnumerator_1_t4941_1_0_0;
struct IEnumerator_1_t4941;
extern Il2CppGenericClass IEnumerator_1_t4941_GenericClass;
TypeInfo IEnumerator_1_t4941_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4941_MethodInfos/* methods */
	, IEnumerator_1_t4941_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4941_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4941_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4941_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4941_0_0_0/* byval_arg */
	, &IEnumerator_1_t4941_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4941_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_466.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3439_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_466MethodDeclarations.h"

extern TypeInfo CallingConventions_t1381_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19085_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCallingConventions_t1381_m25594_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.CallingConventions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.CallingConventions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCallingConventions_t1381_m25594 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19081_MethodInfo;
 void InternalEnumerator_1__ctor_m19081 (InternalEnumerator_1_t3439 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082 (InternalEnumerator_1_t3439 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19085(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19085_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CallingConventions_t1381_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19083_MethodInfo;
 void InternalEnumerator_1_Dispose_m19083 (InternalEnumerator_1_t3439 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19084_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19084 (InternalEnumerator_1_t3439 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19085 (InternalEnumerator_1_t3439 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisCallingConventions_t1381_m25594(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCallingConventions_t1381_m25594_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3439____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3439, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3439____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3439, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3439_FieldInfos[] =
{
	&InternalEnumerator_1_t3439____array_0_FieldInfo,
	&InternalEnumerator_1_t3439____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3439____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3439_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3439____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3439_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19085_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3439_PropertyInfos[] =
{
	&InternalEnumerator_1_t3439____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3439____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3439_InternalEnumerator_1__ctor_m19081_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19081_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19081_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19081/* method */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3439_InternalEnumerator_1__ctor_m19081_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19081_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082/* method */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19083_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19083_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19083/* method */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19083_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19084_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19084_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19084/* method */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19084_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1381_0_0_0;
extern void* RuntimeInvoker_CallingConventions_t1381 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19085_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.CallingConventions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19085_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19085/* method */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* declaring_type */
	, &CallingConventions_t1381_0_0_0/* return_type */
	, RuntimeInvoker_CallingConventions_t1381/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19085_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3439_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19081_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082_MethodInfo,
	&InternalEnumerator_1_Dispose_m19083_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19084_MethodInfo,
	&InternalEnumerator_1_get_Current_m19085_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3439_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19082_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19084_MethodInfo,
	&InternalEnumerator_1_Dispose_m19083_MethodInfo,
	&InternalEnumerator_1_get_Current_m19085_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3439_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4941_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3439_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4941_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3439_0_0_0;
extern Il2CppType InternalEnumerator_1_t3439_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3439_GenericClass;
TypeInfo InternalEnumerator_1_t3439_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3439_MethodInfos/* methods */
	, InternalEnumerator_1_t3439_PropertyInfos/* properties */
	, InternalEnumerator_1_t3439_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3439_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3439_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3439_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3439_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3439_1_0_0/* this_arg */
	, InternalEnumerator_1_t3439_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3439_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3439)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6444_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>
extern MethodInfo ICollection_1_get_Count_m33449_MethodInfo;
static PropertyInfo ICollection_1_t6444____Count_PropertyInfo = 
{
	&ICollection_1_t6444_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33449_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33450_MethodInfo;
static PropertyInfo ICollection_1_t6444____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6444_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33450_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6444_PropertyInfos[] =
{
	&ICollection_1_t6444____Count_PropertyInfo,
	&ICollection_1_t6444____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33449_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_Count()
MethodInfo ICollection_1_get_Count_m33449_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33449_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33450_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33450_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33450_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1381_0_0_0;
extern Il2CppType CallingConventions_t1381_0_0_0;
static ParameterInfo ICollection_1_t6444_ICollection_1_Add_m33451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1381_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33451_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Add(T)
MethodInfo ICollection_1_Add_m33451_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6444_ICollection_1_Add_m33451_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33451_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33452_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Clear()
MethodInfo ICollection_1_Clear_m33452_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33452_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1381_0_0_0;
static ParameterInfo ICollection_1_t6444_ICollection_1_Contains_m33453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1381_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33453_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Contains(T)
MethodInfo ICollection_1_Contains_m33453_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6444_ICollection_1_Contains_m33453_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33453_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventionsU5BU5D_t3687_0_0_0;
extern Il2CppType CallingConventionsU5BU5D_t3687_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6444_ICollection_1_CopyTo_m33454_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventionsU5BU5D_t3687_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33454_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33454_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6444_ICollection_1_CopyTo_m33454_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33454_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventions_t1381_0_0_0;
static ParameterInfo ICollection_1_t6444_ICollection_1_Remove_m33455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1381_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33455_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.CallingConventions>::Remove(T)
MethodInfo ICollection_1_Remove_m33455_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6444_ICollection_1_Remove_m33455_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33455_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6444_MethodInfos[] =
{
	&ICollection_1_get_Count_m33449_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33450_MethodInfo,
	&ICollection_1_Add_m33451_MethodInfo,
	&ICollection_1_Clear_m33452_MethodInfo,
	&ICollection_1_Contains_m33453_MethodInfo,
	&ICollection_1_CopyTo_m33454_MethodInfo,
	&ICollection_1_Remove_m33455_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6446_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6444_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6446_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6444_0_0_0;
extern Il2CppType ICollection_1_t6444_1_0_0;
struct ICollection_1_t6444;
extern Il2CppGenericClass ICollection_1_t6444_GenericClass;
TypeInfo ICollection_1_t6444_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6444_MethodInfos/* methods */
	, ICollection_1_t6444_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6444_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6444_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6444_0_0_0/* byval_arg */
	, &ICollection_1_t6444_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6444_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CallingConventions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.CallingConventions>
extern Il2CppType IEnumerator_1_t4941_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33456_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.CallingConventions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33456_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6446_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4941_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33456_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6446_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33456_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6446_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6446_0_0_0;
extern Il2CppType IEnumerable_1_t6446_1_0_0;
struct IEnumerable_1_t6446;
extern Il2CppGenericClass IEnumerable_1_t6446_GenericClass;
TypeInfo IEnumerable_1_t6446_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6446_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6446_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6446_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6446_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6446_0_0_0/* byval_arg */
	, &IEnumerable_1_t6446_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6446_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6445_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.CallingConventions>
extern MethodInfo IList_1_get_Item_m33457_MethodInfo;
extern MethodInfo IList_1_set_Item_m33458_MethodInfo;
static PropertyInfo IList_1_t6445____Item_PropertyInfo = 
{
	&IList_1_t6445_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33457_MethodInfo/* get */
	, &IList_1_set_Item_m33458_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6445_PropertyInfos[] =
{
	&IList_1_t6445____Item_PropertyInfo,
	NULL
};
extern Il2CppType CallingConventions_t1381_0_0_0;
static ParameterInfo IList_1_t6445_IList_1_IndexOf_m33459_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1381_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33459_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33459_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6445_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6445_IList_1_IndexOf_m33459_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33459_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CallingConventions_t1381_0_0_0;
static ParameterInfo IList_1_t6445_IList_1_Insert_m33460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1381_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33460_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33460_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6445_IList_1_Insert_m33460_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33460_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6445_IList_1_RemoveAt_m33461_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33461_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33461_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6445_IList_1_RemoveAt_m33461_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33461_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6445_IList_1_get_Item_m33457_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType CallingConventions_t1381_0_0_0;
extern void* RuntimeInvoker_CallingConventions_t1381_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33457_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33457_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6445_il2cpp_TypeInfo/* declaring_type */
	, &CallingConventions_t1381_0_0_0/* return_type */
	, RuntimeInvoker_CallingConventions_t1381_Int32_t18/* invoker_method */
	, IList_1_t6445_IList_1_get_Item_m33457_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33457_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CallingConventions_t1381_0_0_0;
static ParameterInfo IList_1_t6445_IList_1_set_Item_m33458_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CallingConventions_t1381_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33458_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.CallingConventions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33458_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6445_IList_1_set_Item_m33458_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33458_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6445_MethodInfos[] =
{
	&IList_1_IndexOf_m33459_MethodInfo,
	&IList_1_Insert_m33460_MethodInfo,
	&IList_1_RemoveAt_m33461_MethodInfo,
	&IList_1_get_Item_m33457_MethodInfo,
	&IList_1_set_Item_m33458_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6445_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6444_il2cpp_TypeInfo,
	&IEnumerable_1_t6446_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6445_0_0_0;
extern Il2CppType IList_1_t6445_1_0_0;
struct IList_1_t6445;
extern Il2CppGenericClass IList_1_t6445_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6445_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6445_MethodInfos/* methods */
	, IList_1_t6445_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6445_il2cpp_TypeInfo/* element_class */
	, IList_1_t6445_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6445_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6445_0_0_0/* byval_arg */
	, &IList_1_t6445_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6445_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4943_il2cpp_TypeInfo;

// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.EventAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.EventAttributes>
extern MethodInfo IEnumerator_1_get_Current_m33462_MethodInfo;
static PropertyInfo IEnumerator_1_t4943____Current_PropertyInfo = 
{
	&IEnumerator_1_t4943_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33462_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4943_PropertyInfos[] =
{
	&IEnumerator_1_t4943____Current_PropertyInfo,
	NULL
};
extern Il2CppType EventAttributes_t1382_0_0_0;
extern void* RuntimeInvoker_EventAttributes_t1382 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33462_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.EventAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33462_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4943_il2cpp_TypeInfo/* declaring_type */
	, &EventAttributes_t1382_0_0_0/* return_type */
	, RuntimeInvoker_EventAttributes_t1382/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33462_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4943_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33462_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4943_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4943_0_0_0;
extern Il2CppType IEnumerator_1_t4943_1_0_0;
struct IEnumerator_1_t4943;
extern Il2CppGenericClass IEnumerator_1_t4943_GenericClass;
TypeInfo IEnumerator_1_t4943_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4943_MethodInfos/* methods */
	, IEnumerator_1_t4943_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4943_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4943_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4943_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4943_0_0_0/* byval_arg */
	, &IEnumerator_1_t4943_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4943_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_467.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3440_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_467MethodDeclarations.h"

extern TypeInfo EventAttributes_t1382_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19090_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEventAttributes_t1382_m25605_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.EventAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.EventAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEventAttributes_t1382_m25605 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19086_MethodInfo;
 void InternalEnumerator_1__ctor_m19086 (InternalEnumerator_1_t3440 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087 (InternalEnumerator_1_t3440 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19090(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19090_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EventAttributes_t1382_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19088_MethodInfo;
 void InternalEnumerator_1_Dispose_m19088 (InternalEnumerator_1_t3440 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19089_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19089 (InternalEnumerator_1_t3440 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19090 (InternalEnumerator_1_t3440 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisEventAttributes_t1382_m25605(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEventAttributes_t1382_m25605_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3440____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3440, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3440____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3440, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3440_FieldInfos[] =
{
	&InternalEnumerator_1_t3440____array_0_FieldInfo,
	&InternalEnumerator_1_t3440____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3440____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3440_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3440____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3440_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19090_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3440_PropertyInfos[] =
{
	&InternalEnumerator_1_t3440____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3440____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3440_InternalEnumerator_1__ctor_m19086_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19086_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19086_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19086/* method */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3440_InternalEnumerator_1__ctor_m19086_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19086_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087/* method */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19088_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19088_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19088/* method */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19088_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19089_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19089_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19089/* method */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19089_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1382_0_0_0;
extern void* RuntimeInvoker_EventAttributes_t1382 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19090_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.EventAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19090_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19090/* method */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* declaring_type */
	, &EventAttributes_t1382_0_0_0/* return_type */
	, RuntimeInvoker_EventAttributes_t1382/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19090_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3440_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19086_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087_MethodInfo,
	&InternalEnumerator_1_Dispose_m19088_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19089_MethodInfo,
	&InternalEnumerator_1_get_Current_m19090_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3440_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19087_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19089_MethodInfo,
	&InternalEnumerator_1_Dispose_m19088_MethodInfo,
	&InternalEnumerator_1_get_Current_m19090_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3440_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4943_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3440_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4943_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3440_0_0_0;
extern Il2CppType InternalEnumerator_1_t3440_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3440_GenericClass;
TypeInfo InternalEnumerator_1_t3440_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3440_MethodInfos/* methods */
	, InternalEnumerator_1_t3440_PropertyInfos/* properties */
	, InternalEnumerator_1_t3440_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3440_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3440_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3440_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3440_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3440_1_0_0/* this_arg */
	, InternalEnumerator_1_t3440_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3440_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3440)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6447_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>
extern MethodInfo ICollection_1_get_Count_m33463_MethodInfo;
static PropertyInfo ICollection_1_t6447____Count_PropertyInfo = 
{
	&ICollection_1_t6447_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33463_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33464_MethodInfo;
static PropertyInfo ICollection_1_t6447____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6447_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33464_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6447_PropertyInfos[] =
{
	&ICollection_1_t6447____Count_PropertyInfo,
	&ICollection_1_t6447____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33463_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m33463_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33463_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33464_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33464_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33464_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1382_0_0_0;
extern Il2CppType EventAttributes_t1382_0_0_0;
static ParameterInfo ICollection_1_t6447_ICollection_1_Add_m33465_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1382_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33465_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Add(T)
MethodInfo ICollection_1_Add_m33465_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6447_ICollection_1_Add_m33465_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33465_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33466_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Clear()
MethodInfo ICollection_1_Clear_m33466_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33466_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1382_0_0_0;
static ParameterInfo ICollection_1_t6447_ICollection_1_Contains_m33467_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1382_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33467_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m33467_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6447_ICollection_1_Contains_m33467_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33467_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributesU5BU5D_t3688_0_0_0;
extern Il2CppType EventAttributesU5BU5D_t3688_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6447_ICollection_1_CopyTo_m33468_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributesU5BU5D_t3688_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33468_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33468_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6447_ICollection_1_CopyTo_m33468_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33468_GenericMethod/* genericMethod */

};
extern Il2CppType EventAttributes_t1382_0_0_0;
static ParameterInfo ICollection_1_t6447_ICollection_1_Remove_m33469_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1382_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33469_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.EventAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m33469_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6447_ICollection_1_Remove_m33469_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33469_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6447_MethodInfos[] =
{
	&ICollection_1_get_Count_m33463_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33464_MethodInfo,
	&ICollection_1_Add_m33465_MethodInfo,
	&ICollection_1_Clear_m33466_MethodInfo,
	&ICollection_1_Contains_m33467_MethodInfo,
	&ICollection_1_CopyTo_m33468_MethodInfo,
	&ICollection_1_Remove_m33469_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6449_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6447_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6449_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6447_0_0_0;
extern Il2CppType ICollection_1_t6447_1_0_0;
struct ICollection_1_t6447;
extern Il2CppGenericClass ICollection_1_t6447_GenericClass;
TypeInfo ICollection_1_t6447_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6447_MethodInfos/* methods */
	, ICollection_1_t6447_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6447_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6447_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6447_0_0_0/* byval_arg */
	, &ICollection_1_t6447_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6447_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.EventAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.EventAttributes>
extern Il2CppType IEnumerator_1_t4943_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33470_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.EventAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33470_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6449_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4943_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33470_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6449_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33470_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6449_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6449_0_0_0;
extern Il2CppType IEnumerable_1_t6449_1_0_0;
struct IEnumerable_1_t6449;
extern Il2CppGenericClass IEnumerable_1_t6449_GenericClass;
TypeInfo IEnumerable_1_t6449_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6449_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6449_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6449_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6449_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6449_0_0_0/* byval_arg */
	, &IEnumerable_1_t6449_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6449_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6448_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.EventAttributes>
extern MethodInfo IList_1_get_Item_m33471_MethodInfo;
extern MethodInfo IList_1_set_Item_m33472_MethodInfo;
static PropertyInfo IList_1_t6448____Item_PropertyInfo = 
{
	&IList_1_t6448_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33471_MethodInfo/* get */
	, &IList_1_set_Item_m33472_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6448_PropertyInfos[] =
{
	&IList_1_t6448____Item_PropertyInfo,
	NULL
};
extern Il2CppType EventAttributes_t1382_0_0_0;
static ParameterInfo IList_1_t6448_IList_1_IndexOf_m33473_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1382_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33473_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33473_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6448_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6448_IList_1_IndexOf_m33473_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33473_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType EventAttributes_t1382_0_0_0;
static ParameterInfo IList_1_t6448_IList_1_Insert_m33474_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1382_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33474_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33474_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6448_IList_1_Insert_m33474_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33474_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6448_IList_1_RemoveAt_m33475_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33475_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33475_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6448_IList_1_RemoveAt_m33475_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33475_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6448_IList_1_get_Item_m33471_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType EventAttributes_t1382_0_0_0;
extern void* RuntimeInvoker_EventAttributes_t1382_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33471_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33471_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6448_il2cpp_TypeInfo/* declaring_type */
	, &EventAttributes_t1382_0_0_0/* return_type */
	, RuntimeInvoker_EventAttributes_t1382_Int32_t18/* invoker_method */
	, IList_1_t6448_IList_1_get_Item_m33471_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33471_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType EventAttributes_t1382_0_0_0;
static ParameterInfo IList_1_t6448_IList_1_set_Item_m33472_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EventAttributes_t1382_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33472_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.EventAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33472_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6448_IList_1_set_Item_m33472_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33472_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6448_MethodInfos[] =
{
	&IList_1_IndexOf_m33473_MethodInfo,
	&IList_1_Insert_m33474_MethodInfo,
	&IList_1_RemoveAt_m33475_MethodInfo,
	&IList_1_get_Item_m33471_MethodInfo,
	&IList_1_set_Item_m33472_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6448_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6447_il2cpp_TypeInfo,
	&IEnumerable_1_t6449_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6448_0_0_0;
extern Il2CppType IList_1_t6448_1_0_0;
struct IList_1_t6448;
extern Il2CppGenericClass IList_1_t6448_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6448_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6448_MethodInfos/* methods */
	, IList_1_t6448_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6448_il2cpp_TypeInfo/* element_class */
	, IList_1_t6448_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6448_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6448_0_0_0/* byval_arg */
	, &IList_1_t6448_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6448_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4945_il2cpp_TypeInfo;

// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.FieldAttributes>
extern MethodInfo IEnumerator_1_get_Current_m33476_MethodInfo;
static PropertyInfo IEnumerator_1_t4945____Current_PropertyInfo = 
{
	&IEnumerator_1_t4945_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33476_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4945_PropertyInfos[] =
{
	&IEnumerator_1_t4945____Current_PropertyInfo,
	NULL
};
extern Il2CppType FieldAttributes_t1384_0_0_0;
extern void* RuntimeInvoker_FieldAttributes_t1384 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33476_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33476_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4945_il2cpp_TypeInfo/* declaring_type */
	, &FieldAttributes_t1384_0_0_0/* return_type */
	, RuntimeInvoker_FieldAttributes_t1384/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33476_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4945_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33476_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4945_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4945_0_0_0;
extern Il2CppType IEnumerator_1_t4945_1_0_0;
struct IEnumerator_1_t4945;
extern Il2CppGenericClass IEnumerator_1_t4945_GenericClass;
TypeInfo IEnumerator_1_t4945_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4945_MethodInfos/* methods */
	, IEnumerator_1_t4945_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4945_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4945_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4945_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4945_0_0_0/* byval_arg */
	, &IEnumerator_1_t4945_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4945_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_468.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3441_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_468MethodDeclarations.h"

extern TypeInfo FieldAttributes_t1384_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19095_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldAttributes_t1384_m25616_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.FieldAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.FieldAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFieldAttributes_t1384_m25616 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19091_MethodInfo;
 void InternalEnumerator_1__ctor_m19091 (InternalEnumerator_1_t3441 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092 (InternalEnumerator_1_t3441 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19095(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19095_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FieldAttributes_t1384_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19093_MethodInfo;
 void InternalEnumerator_1_Dispose_m19093 (InternalEnumerator_1_t3441 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19094_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19094 (InternalEnumerator_1_t3441 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19095 (InternalEnumerator_1_t3441 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisFieldAttributes_t1384_m25616(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFieldAttributes_t1384_m25616_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3441____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3441, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3441____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3441, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3441_FieldInfos[] =
{
	&InternalEnumerator_1_t3441____array_0_FieldInfo,
	&InternalEnumerator_1_t3441____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3441____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3441_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3441____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3441_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19095_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3441_PropertyInfos[] =
{
	&InternalEnumerator_1_t3441____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3441____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3441_InternalEnumerator_1__ctor_m19091_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19091_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19091_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19091/* method */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3441_InternalEnumerator_1__ctor_m19091_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19091_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092/* method */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19093_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19093_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19093/* method */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19093_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19094_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19094_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19094/* method */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19094_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1384_0_0_0;
extern void* RuntimeInvoker_FieldAttributes_t1384 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19095_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.FieldAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19095_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19095/* method */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* declaring_type */
	, &FieldAttributes_t1384_0_0_0/* return_type */
	, RuntimeInvoker_FieldAttributes_t1384/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19095_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3441_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19091_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092_MethodInfo,
	&InternalEnumerator_1_Dispose_m19093_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19094_MethodInfo,
	&InternalEnumerator_1_get_Current_m19095_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3441_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19092_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19094_MethodInfo,
	&InternalEnumerator_1_Dispose_m19093_MethodInfo,
	&InternalEnumerator_1_get_Current_m19095_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3441_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4945_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3441_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4945_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3441_0_0_0;
extern Il2CppType InternalEnumerator_1_t3441_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3441_GenericClass;
TypeInfo InternalEnumerator_1_t3441_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3441_MethodInfos/* methods */
	, InternalEnumerator_1_t3441_PropertyInfos/* properties */
	, InternalEnumerator_1_t3441_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3441_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3441_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3441_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3441_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3441_1_0_0/* this_arg */
	, InternalEnumerator_1_t3441_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3441_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3441)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6450_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>
extern MethodInfo ICollection_1_get_Count_m33477_MethodInfo;
static PropertyInfo ICollection_1_t6450____Count_PropertyInfo = 
{
	&ICollection_1_t6450_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33477_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33478_MethodInfo;
static PropertyInfo ICollection_1_t6450____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6450_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33478_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6450_PropertyInfos[] =
{
	&ICollection_1_t6450____Count_PropertyInfo,
	&ICollection_1_t6450____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33477_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m33477_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33477_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33478_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33478_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33478_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1384_0_0_0;
extern Il2CppType FieldAttributes_t1384_0_0_0;
static ParameterInfo ICollection_1_t6450_ICollection_1_Add_m33479_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1384_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33479_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Add(T)
MethodInfo ICollection_1_Add_m33479_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6450_ICollection_1_Add_m33479_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33479_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33480_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Clear()
MethodInfo ICollection_1_Clear_m33480_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33480_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1384_0_0_0;
static ParameterInfo ICollection_1_t6450_ICollection_1_Contains_m33481_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1384_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33481_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m33481_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6450_ICollection_1_Contains_m33481_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33481_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributesU5BU5D_t3689_0_0_0;
extern Il2CppType FieldAttributesU5BU5D_t3689_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6450_ICollection_1_CopyTo_m33482_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributesU5BU5D_t3689_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33482_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33482_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6450_ICollection_1_CopyTo_m33482_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33482_GenericMethod/* genericMethod */

};
extern Il2CppType FieldAttributes_t1384_0_0_0;
static ParameterInfo ICollection_1_t6450_ICollection_1_Remove_m33483_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1384_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33483_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.FieldAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m33483_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6450_ICollection_1_Remove_m33483_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33483_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6450_MethodInfos[] =
{
	&ICollection_1_get_Count_m33477_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33478_MethodInfo,
	&ICollection_1_Add_m33479_MethodInfo,
	&ICollection_1_Clear_m33480_MethodInfo,
	&ICollection_1_Contains_m33481_MethodInfo,
	&ICollection_1_CopyTo_m33482_MethodInfo,
	&ICollection_1_Remove_m33483_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6452_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6450_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6452_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6450_0_0_0;
extern Il2CppType ICollection_1_t6450_1_0_0;
struct ICollection_1_t6450;
extern Il2CppGenericClass ICollection_1_t6450_GenericClass;
TypeInfo ICollection_1_t6450_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6450_MethodInfos/* methods */
	, ICollection_1_t6450_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6450_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6450_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6450_0_0_0/* byval_arg */
	, &ICollection_1_t6450_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6450_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.FieldAttributes>
extern Il2CppType IEnumerator_1_t4945_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33484_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.FieldAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33484_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6452_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4945_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33484_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6452_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33484_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6452_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6452_0_0_0;
extern Il2CppType IEnumerable_1_t6452_1_0_0;
struct IEnumerable_1_t6452;
extern Il2CppGenericClass IEnumerable_1_t6452_GenericClass;
TypeInfo IEnumerable_1_t6452_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6452_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6452_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6452_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6452_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6452_0_0_0/* byval_arg */
	, &IEnumerable_1_t6452_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6452_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6451_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>
extern MethodInfo IList_1_get_Item_m33485_MethodInfo;
extern MethodInfo IList_1_set_Item_m33486_MethodInfo;
static PropertyInfo IList_1_t6451____Item_PropertyInfo = 
{
	&IList_1_t6451_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33485_MethodInfo/* get */
	, &IList_1_set_Item_m33486_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6451_PropertyInfos[] =
{
	&IList_1_t6451____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldAttributes_t1384_0_0_0;
static ParameterInfo IList_1_t6451_IList_1_IndexOf_m33487_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1384_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33487_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33487_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6451_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6451_IList_1_IndexOf_m33487_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33487_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FieldAttributes_t1384_0_0_0;
static ParameterInfo IList_1_t6451_IList_1_Insert_m33488_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1384_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33488_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33488_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6451_IList_1_Insert_m33488_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33488_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6451_IList_1_RemoveAt_m33489_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33489_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33489_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6451_IList_1_RemoveAt_m33489_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33489_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6451_IList_1_get_Item_m33485_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType FieldAttributes_t1384_0_0_0;
extern void* RuntimeInvoker_FieldAttributes_t1384_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33485_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33485_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6451_il2cpp_TypeInfo/* declaring_type */
	, &FieldAttributes_t1384_0_0_0/* return_type */
	, RuntimeInvoker_FieldAttributes_t1384_Int32_t18/* invoker_method */
	, IList_1_t6451_IList_1_get_Item_m33485_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33485_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FieldAttributes_t1384_0_0_0;
static ParameterInfo IList_1_t6451_IList_1_set_Item_m33486_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t1384_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33486_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33486_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6451_IList_1_set_Item_m33486_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33486_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6451_MethodInfos[] =
{
	&IList_1_IndexOf_m33487_MethodInfo,
	&IList_1_Insert_m33488_MethodInfo,
	&IList_1_RemoveAt_m33489_MethodInfo,
	&IList_1_get_Item_m33485_MethodInfo,
	&IList_1_set_Item_m33486_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6451_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6450_il2cpp_TypeInfo,
	&IEnumerable_1_t6452_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6451_0_0_0;
extern Il2CppType IList_1_t6451_1_0_0;
struct IList_1_t6451;
extern Il2CppGenericClass IList_1_t6451_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6451_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6451_MethodInfos/* methods */
	, IList_1_t6451_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6451_il2cpp_TypeInfo/* element_class */
	, IList_1_t6451_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6451_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6451_0_0_0/* byval_arg */
	, &IList_1_t6451_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6451_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4947_il2cpp_TypeInfo;

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>
extern MethodInfo IEnumerator_1_get_Current_m33490_MethodInfo;
static PropertyInfo IEnumerator_1_t4947____Current_PropertyInfo = 
{
	&IEnumerator_1_t4947_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33490_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4947_PropertyInfos[] =
{
	&IEnumerator_1_t4947____Current_PropertyInfo,
	NULL
};
extern Il2CppType MemberTypes_t1386_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t1386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33490_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33490_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4947_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t1386_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t1386/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33490_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4947_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33490_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4947_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4947_0_0_0;
extern Il2CppType IEnumerator_1_t4947_1_0_0;
struct IEnumerator_1_t4947;
extern Il2CppGenericClass IEnumerator_1_t4947_GenericClass;
TypeInfo IEnumerator_1_t4947_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4947_MethodInfos/* methods */
	, IEnumerator_1_t4947_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4947_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4947_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4947_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4947_0_0_0/* byval_arg */
	, &IEnumerator_1_t4947_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4947_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_469.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3442_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_469MethodDeclarations.h"

extern TypeInfo MemberTypes_t1386_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19100_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMemberTypes_t1386_m25627_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberTypes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberTypes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMemberTypes_t1386_m25627 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19096_MethodInfo;
 void InternalEnumerator_1__ctor_m19096 (InternalEnumerator_1_t3442 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097 (InternalEnumerator_1_t3442 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19100(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19100_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MemberTypes_t1386_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19098_MethodInfo;
 void InternalEnumerator_1_Dispose_m19098 (InternalEnumerator_1_t3442 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19099_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19099 (InternalEnumerator_1_t3442 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19100 (InternalEnumerator_1_t3442 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisMemberTypes_t1386_m25627(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMemberTypes_t1386_m25627_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3442____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3442, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3442____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3442, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3442_FieldInfos[] =
{
	&InternalEnumerator_1_t3442____array_0_FieldInfo,
	&InternalEnumerator_1_t3442____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3442____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3442_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3442____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3442_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3442_PropertyInfos[] =
{
	&InternalEnumerator_1_t3442____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3442____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3442_InternalEnumerator_1__ctor_m19096_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19096_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19096_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19096/* method */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3442_InternalEnumerator_1__ctor_m19096_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19096_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097/* method */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19098_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19098_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19098/* method */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19098_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19099_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19099_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19099/* method */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19099_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1386_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t1386 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19100_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19100_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19100/* method */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t1386_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t1386/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19100_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3442_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19096_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097_MethodInfo,
	&InternalEnumerator_1_Dispose_m19098_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19099_MethodInfo,
	&InternalEnumerator_1_get_Current_m19100_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3442_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19097_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19099_MethodInfo,
	&InternalEnumerator_1_Dispose_m19098_MethodInfo,
	&InternalEnumerator_1_get_Current_m19100_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3442_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4947_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3442_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4947_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3442_0_0_0;
extern Il2CppType InternalEnumerator_1_t3442_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3442_GenericClass;
TypeInfo InternalEnumerator_1_t3442_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3442_MethodInfos/* methods */
	, InternalEnumerator_1_t3442_PropertyInfos/* properties */
	, InternalEnumerator_1_t3442_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3442_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3442_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3442_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3442_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3442_1_0_0/* this_arg */
	, InternalEnumerator_1_t3442_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3442_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3442)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6453_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>
extern MethodInfo ICollection_1_get_Count_m33491_MethodInfo;
static PropertyInfo ICollection_1_t6453____Count_PropertyInfo = 
{
	&ICollection_1_t6453_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33491_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33492_MethodInfo;
static PropertyInfo ICollection_1_t6453____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6453_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33492_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6453_PropertyInfos[] =
{
	&ICollection_1_t6453____Count_PropertyInfo,
	&ICollection_1_t6453____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33491_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_Count()
MethodInfo ICollection_1_get_Count_m33491_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33491_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33492_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33492_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33492_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1386_0_0_0;
extern Il2CppType MemberTypes_t1386_0_0_0;
static ParameterInfo ICollection_1_t6453_ICollection_1_Add_m33493_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1386_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33493_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Add(T)
MethodInfo ICollection_1_Add_m33493_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6453_ICollection_1_Add_m33493_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33493_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33494_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Clear()
MethodInfo ICollection_1_Clear_m33494_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33494_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1386_0_0_0;
static ParameterInfo ICollection_1_t6453_ICollection_1_Contains_m33495_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1386_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33495_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Contains(T)
MethodInfo ICollection_1_Contains_m33495_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6453_ICollection_1_Contains_m33495_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33495_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypesU5BU5D_t3690_0_0_0;
extern Il2CppType MemberTypesU5BU5D_t3690_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6453_ICollection_1_CopyTo_m33496_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypesU5BU5D_t3690_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33496_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33496_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6453_ICollection_1_CopyTo_m33496_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33496_GenericMethod/* genericMethod */

};
extern Il2CppType MemberTypes_t1386_0_0_0;
static ParameterInfo ICollection_1_t6453_ICollection_1_Remove_m33497_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1386_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33497_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Remove(T)
MethodInfo ICollection_1_Remove_m33497_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6453_ICollection_1_Remove_m33497_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33497_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6453_MethodInfos[] =
{
	&ICollection_1_get_Count_m33491_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33492_MethodInfo,
	&ICollection_1_Add_m33493_MethodInfo,
	&ICollection_1_Clear_m33494_MethodInfo,
	&ICollection_1_Contains_m33495_MethodInfo,
	&ICollection_1_CopyTo_m33496_MethodInfo,
	&ICollection_1_Remove_m33497_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6455_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6453_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6455_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6453_0_0_0;
extern Il2CppType ICollection_1_t6453_1_0_0;
struct ICollection_1_t6453;
extern Il2CppGenericClass ICollection_1_t6453_GenericClass;
TypeInfo ICollection_1_t6453_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6453_MethodInfos/* methods */
	, ICollection_1_t6453_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6453_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6453_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6453_0_0_0/* byval_arg */
	, &ICollection_1_t6453_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6453_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>
extern Il2CppType IEnumerator_1_t4947_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33498_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33498_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6455_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4947_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33498_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6455_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33498_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6455_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6455_0_0_0;
extern Il2CppType IEnumerable_1_t6455_1_0_0;
struct IEnumerable_1_t6455;
extern Il2CppGenericClass IEnumerable_1_t6455_GenericClass;
TypeInfo IEnumerable_1_t6455_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6455_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6455_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6455_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6455_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6455_0_0_0/* byval_arg */
	, &IEnumerable_1_t6455_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6455_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6454_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MemberTypes>
extern MethodInfo IList_1_get_Item_m33499_MethodInfo;
extern MethodInfo IList_1_set_Item_m33500_MethodInfo;
static PropertyInfo IList_1_t6454____Item_PropertyInfo = 
{
	&IList_1_t6454_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33499_MethodInfo/* get */
	, &IList_1_set_Item_m33500_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6454_PropertyInfos[] =
{
	&IList_1_t6454____Item_PropertyInfo,
	NULL
};
extern Il2CppType MemberTypes_t1386_0_0_0;
static ParameterInfo IList_1_t6454_IList_1_IndexOf_m33501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1386_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33501_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33501_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6454_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6454_IList_1_IndexOf_m33501_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33501_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MemberTypes_t1386_0_0_0;
static ParameterInfo IList_1_t6454_IList_1_Insert_m33502_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1386_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33502_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33502_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6454_IList_1_Insert_m33502_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33502_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6454_IList_1_RemoveAt_m33503_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33503_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33503_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6454_IList_1_RemoveAt_m33503_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33503_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6454_IList_1_get_Item_m33499_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MemberTypes_t1386_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t1386_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33499_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33499_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6454_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t1386_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t1386_Int32_t18/* invoker_method */
	, IList_1_t6454_IList_1_get_Item_m33499_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33499_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MemberTypes_t1386_0_0_0;
static ParameterInfo IList_1_t6454_IList_1_set_Item_m33500_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t1386_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33500_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33500_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6454_IList_1_set_Item_m33500_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33500_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6454_MethodInfos[] =
{
	&IList_1_IndexOf_m33501_MethodInfo,
	&IList_1_Insert_m33502_MethodInfo,
	&IList_1_RemoveAt_m33503_MethodInfo,
	&IList_1_get_Item_m33499_MethodInfo,
	&IList_1_set_Item_m33500_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6454_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6453_il2cpp_TypeInfo,
	&IEnumerable_1_t6455_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6454_0_0_0;
extern Il2CppType IList_1_t6454_1_0_0;
struct IList_1_t6454;
extern Il2CppGenericClass IList_1_t6454_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6454_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6454_MethodInfos/* methods */
	, IList_1_t6454_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6454_il2cpp_TypeInfo/* element_class */
	, IList_1_t6454_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6454_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6454_0_0_0/* byval_arg */
	, &IList_1_t6454_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6454_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4949_il2cpp_TypeInfo;

// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>
extern MethodInfo IEnumerator_1_get_Current_m33504_MethodInfo;
static PropertyInfo IEnumerator_1_t4949____Current_PropertyInfo = 
{
	&IEnumerator_1_t4949_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33504_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4949_PropertyInfos[] =
{
	&IEnumerator_1_t4949____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodAttributes_t1387_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t1387 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33504_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33504_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4949_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t1387_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t1387/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33504_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4949_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33504_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4949_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4949_0_0_0;
extern Il2CppType IEnumerator_1_t4949_1_0_0;
struct IEnumerator_1_t4949;
extern Il2CppGenericClass IEnumerator_1_t4949_GenericClass;
TypeInfo IEnumerator_1_t4949_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4949_MethodInfos/* methods */
	, IEnumerator_1_t4949_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4949_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4949_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4949_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4949_0_0_0/* byval_arg */
	, &IEnumerator_1_t4949_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4949_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_470.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3443_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_470MethodDeclarations.h"

extern TypeInfo MethodAttributes_t1387_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19105_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodAttributes_t1387_m25638_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodAttributes_t1387_m25638 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19101_MethodInfo;
 void InternalEnumerator_1__ctor_m19101 (InternalEnumerator_1_t3443 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102 (InternalEnumerator_1_t3443 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19105(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19105_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodAttributes_t1387_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19103_MethodInfo;
 void InternalEnumerator_1_Dispose_m19103 (InternalEnumerator_1_t3443 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19104_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19104 (InternalEnumerator_1_t3443 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19105 (InternalEnumerator_1_t3443 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodAttributes_t1387_m25638(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodAttributes_t1387_m25638_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3443____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3443, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3443____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3443, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3443_FieldInfos[] =
{
	&InternalEnumerator_1_t3443____array_0_FieldInfo,
	&InternalEnumerator_1_t3443____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3443____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3443_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3443____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3443_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19105_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3443_PropertyInfos[] =
{
	&InternalEnumerator_1_t3443____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3443____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3443_InternalEnumerator_1__ctor_m19101_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19101_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19101_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19101/* method */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3443_InternalEnumerator_1__ctor_m19101_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19101_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102/* method */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19103_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19103_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19103/* method */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19103_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19104_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19104_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19104/* method */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19104_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1387_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t1387 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19105_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19105_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19105/* method */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t1387_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t1387/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19105_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3443_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19101_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102_MethodInfo,
	&InternalEnumerator_1_Dispose_m19103_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19104_MethodInfo,
	&InternalEnumerator_1_get_Current_m19105_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3443_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19102_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19104_MethodInfo,
	&InternalEnumerator_1_Dispose_m19103_MethodInfo,
	&InternalEnumerator_1_get_Current_m19105_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3443_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4949_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3443_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4949_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3443_0_0_0;
extern Il2CppType InternalEnumerator_1_t3443_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3443_GenericClass;
TypeInfo InternalEnumerator_1_t3443_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3443_MethodInfos/* methods */
	, InternalEnumerator_1_t3443_PropertyInfos/* properties */
	, InternalEnumerator_1_t3443_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3443_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3443_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3443_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3443_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3443_1_0_0/* this_arg */
	, InternalEnumerator_1_t3443_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3443_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3443)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6456_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>
extern MethodInfo ICollection_1_get_Count_m33505_MethodInfo;
static PropertyInfo ICollection_1_t6456____Count_PropertyInfo = 
{
	&ICollection_1_t6456_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33505_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33506_MethodInfo;
static PropertyInfo ICollection_1_t6456____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6456_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33506_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6456_PropertyInfos[] =
{
	&ICollection_1_t6456____Count_PropertyInfo,
	&ICollection_1_t6456____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33505_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m33505_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33505_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33506_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33506_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33506_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1387_0_0_0;
extern Il2CppType MethodAttributes_t1387_0_0_0;
static ParameterInfo ICollection_1_t6456_ICollection_1_Add_m33507_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1387_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33507_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Add(T)
MethodInfo ICollection_1_Add_m33507_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6456_ICollection_1_Add_m33507_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33507_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33508_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Clear()
MethodInfo ICollection_1_Clear_m33508_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33508_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1387_0_0_0;
static ParameterInfo ICollection_1_t6456_ICollection_1_Contains_m33509_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1387_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33509_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m33509_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6456_ICollection_1_Contains_m33509_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33509_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributesU5BU5D_t3691_0_0_0;
extern Il2CppType MethodAttributesU5BU5D_t3691_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6456_ICollection_1_CopyTo_m33510_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributesU5BU5D_t3691_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33510_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33510_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6456_ICollection_1_CopyTo_m33510_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33510_GenericMethod/* genericMethod */

};
extern Il2CppType MethodAttributes_t1387_0_0_0;
static ParameterInfo ICollection_1_t6456_ICollection_1_Remove_m33511_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1387_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33511_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m33511_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6456_ICollection_1_Remove_m33511_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33511_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6456_MethodInfos[] =
{
	&ICollection_1_get_Count_m33505_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33506_MethodInfo,
	&ICollection_1_Add_m33507_MethodInfo,
	&ICollection_1_Clear_m33508_MethodInfo,
	&ICollection_1_Contains_m33509_MethodInfo,
	&ICollection_1_CopyTo_m33510_MethodInfo,
	&ICollection_1_Remove_m33511_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6458_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6456_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6458_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6456_0_0_0;
extern Il2CppType ICollection_1_t6456_1_0_0;
struct ICollection_1_t6456;
extern Il2CppGenericClass ICollection_1_t6456_GenericClass;
TypeInfo ICollection_1_t6456_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6456_MethodInfos/* methods */
	, ICollection_1_t6456_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6456_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6456_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6456_0_0_0/* byval_arg */
	, &ICollection_1_t6456_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6456_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>
extern Il2CppType IEnumerator_1_t4949_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33512_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33512_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6458_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4949_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33512_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6458_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33512_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6458_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6458_0_0_0;
extern Il2CppType IEnumerable_1_t6458_1_0_0;
struct IEnumerable_1_t6458;
extern Il2CppGenericClass IEnumerable_1_t6458_GenericClass;
TypeInfo IEnumerable_1_t6458_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6458_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6458_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6458_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6458_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6458_0_0_0/* byval_arg */
	, &IEnumerable_1_t6458_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6458_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6457_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>
extern MethodInfo IList_1_get_Item_m33513_MethodInfo;
extern MethodInfo IList_1_set_Item_m33514_MethodInfo;
static PropertyInfo IList_1_t6457____Item_PropertyInfo = 
{
	&IList_1_t6457_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33513_MethodInfo/* get */
	, &IList_1_set_Item_m33514_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6457_PropertyInfos[] =
{
	&IList_1_t6457____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodAttributes_t1387_0_0_0;
static ParameterInfo IList_1_t6457_IList_1_IndexOf_m33515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1387_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33515_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33515_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6457_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6457_IList_1_IndexOf_m33515_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33515_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodAttributes_t1387_0_0_0;
static ParameterInfo IList_1_t6457_IList_1_Insert_m33516_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1387_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33516_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33516_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6457_IList_1_Insert_m33516_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33516_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6457_IList_1_RemoveAt_m33517_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33517_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33517_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6457_IList_1_RemoveAt_m33517_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33517_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6457_IList_1_get_Item_m33513_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MethodAttributes_t1387_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t1387_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33513_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33513_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6457_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t1387_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t1387_Int32_t18/* invoker_method */
	, IList_1_t6457_IList_1_get_Item_m33513_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33513_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodAttributes_t1387_0_0_0;
static ParameterInfo IList_1_t6457_IList_1_set_Item_m33514_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t1387_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33514_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33514_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6457_IList_1_set_Item_m33514_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33514_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6457_MethodInfos[] =
{
	&IList_1_IndexOf_m33515_MethodInfo,
	&IList_1_Insert_m33516_MethodInfo,
	&IList_1_RemoveAt_m33517_MethodInfo,
	&IList_1_get_Item_m33513_MethodInfo,
	&IList_1_set_Item_m33514_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6457_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6456_il2cpp_TypeInfo,
	&IEnumerable_1_t6458_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6457_0_0_0;
extern Il2CppType IList_1_t6457_1_0_0;
struct IList_1_t6457;
extern Il2CppGenericClass IList_1_t6457_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6457_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6457_MethodInfos/* methods */
	, IList_1_t6457_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6457_il2cpp_TypeInfo/* element_class */
	, IList_1_t6457_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6457_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6457_0_0_0/* byval_arg */
	, &IList_1_t6457_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6457_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4951_il2cpp_TypeInfo;

// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>
extern MethodInfo IEnumerator_1_get_Current_m33518_MethodInfo;
static PropertyInfo IEnumerator_1_t4951____Current_PropertyInfo = 
{
	&IEnumerator_1_t4951_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33518_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4951_PropertyInfos[] =
{
	&IEnumerator_1_t4951____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t1388 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33518_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33518_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4951_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t1388_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t1388/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33518_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4951_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33518_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4951_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4951_0_0_0;
extern Il2CppType IEnumerator_1_t4951_1_0_0;
struct IEnumerator_1_t4951;
extern Il2CppGenericClass IEnumerator_1_t4951_GenericClass;
TypeInfo IEnumerator_1_t4951_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4951_MethodInfos/* methods */
	, IEnumerator_1_t4951_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4951_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4951_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4951_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4951_0_0_0/* byval_arg */
	, &IEnumerator_1_t4951_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4951_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_471.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3444_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_471MethodDeclarations.h"

extern TypeInfo MethodImplAttributes_t1388_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19110_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodImplAttributes_t1388_m25649_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodImplAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodImplAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodImplAttributes_t1388_m25649 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19106_MethodInfo;
 void InternalEnumerator_1__ctor_m19106 (InternalEnumerator_1_t3444 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107 (InternalEnumerator_1_t3444 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19110(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19110_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodImplAttributes_t1388_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19108_MethodInfo;
 void InternalEnumerator_1_Dispose_m19108 (InternalEnumerator_1_t3444 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19109_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19109 (InternalEnumerator_1_t3444 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19110 (InternalEnumerator_1_t3444 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodImplAttributes_t1388_m25649(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodImplAttributes_t1388_m25649_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3444____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3444, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3444____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3444, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3444_FieldInfos[] =
{
	&InternalEnumerator_1_t3444____array_0_FieldInfo,
	&InternalEnumerator_1_t3444____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3444____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3444_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3444____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3444_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19110_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3444_PropertyInfos[] =
{
	&InternalEnumerator_1_t3444____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3444____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3444_InternalEnumerator_1__ctor_m19106_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19106_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19106_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19106/* method */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3444_InternalEnumerator_1__ctor_m19106_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19106_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107/* method */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19108_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19108_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19108/* method */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19108_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19109_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19109_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19109/* method */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19109_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t1388 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19110_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19110_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19110/* method */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t1388_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t1388/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19110_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3444_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19106_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107_MethodInfo,
	&InternalEnumerator_1_Dispose_m19108_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19109_MethodInfo,
	&InternalEnumerator_1_get_Current_m19110_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3444_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19107_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19109_MethodInfo,
	&InternalEnumerator_1_Dispose_m19108_MethodInfo,
	&InternalEnumerator_1_get_Current_m19110_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3444_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4951_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3444_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4951_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3444_0_0_0;
extern Il2CppType InternalEnumerator_1_t3444_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3444_GenericClass;
TypeInfo InternalEnumerator_1_t3444_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3444_MethodInfos/* methods */
	, InternalEnumerator_1_t3444_PropertyInfos/* properties */
	, InternalEnumerator_1_t3444_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3444_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3444_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3444_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3444_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3444_1_0_0/* this_arg */
	, InternalEnumerator_1_t3444_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3444_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3444)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6459_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>
extern MethodInfo ICollection_1_get_Count_m33519_MethodInfo;
static PropertyInfo ICollection_1_t6459____Count_PropertyInfo = 
{
	&ICollection_1_t6459_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33519_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33520_MethodInfo;
static PropertyInfo ICollection_1_t6459____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6459_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33520_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6459_PropertyInfos[] =
{
	&ICollection_1_t6459____Count_PropertyInfo,
	&ICollection_1_t6459____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33519_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m33519_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33519_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33520_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33520_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33520_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
static ParameterInfo ICollection_1_t6459_ICollection_1_Add_m33521_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1388_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33521_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Add(T)
MethodInfo ICollection_1_Add_m33521_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6459_ICollection_1_Add_m33521_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33521_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33522_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Clear()
MethodInfo ICollection_1_Clear_m33522_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33522_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
static ParameterInfo ICollection_1_t6459_ICollection_1_Contains_m33523_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1388_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33523_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m33523_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6459_ICollection_1_Contains_m33523_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33523_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributesU5BU5D_t3692_0_0_0;
extern Il2CppType MethodImplAttributesU5BU5D_t3692_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6459_ICollection_1_CopyTo_m33524_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributesU5BU5D_t3692_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33524_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33524_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6459_ICollection_1_CopyTo_m33524_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33524_GenericMethod/* genericMethod */

};
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
static ParameterInfo ICollection_1_t6459_ICollection_1_Remove_m33525_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1388_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33525_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m33525_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6459_ICollection_1_Remove_m33525_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33525_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6459_MethodInfos[] =
{
	&ICollection_1_get_Count_m33519_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33520_MethodInfo,
	&ICollection_1_Add_m33521_MethodInfo,
	&ICollection_1_Clear_m33522_MethodInfo,
	&ICollection_1_Contains_m33523_MethodInfo,
	&ICollection_1_CopyTo_m33524_MethodInfo,
	&ICollection_1_Remove_m33525_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6461_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6459_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6461_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6459_0_0_0;
extern Il2CppType ICollection_1_t6459_1_0_0;
struct ICollection_1_t6459;
extern Il2CppGenericClass ICollection_1_t6459_GenericClass;
TypeInfo ICollection_1_t6459_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6459_MethodInfos/* methods */
	, ICollection_1_t6459_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6459_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6459_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6459_0_0_0/* byval_arg */
	, &ICollection_1_t6459_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6459_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>
extern Il2CppType IEnumerator_1_t4951_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33526_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33526_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6461_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4951_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33526_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6461_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33526_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6461_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6461_0_0_0;
extern Il2CppType IEnumerable_1_t6461_1_0_0;
struct IEnumerable_1_t6461;
extern Il2CppGenericClass IEnumerable_1_t6461_GenericClass;
TypeInfo IEnumerable_1_t6461_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6461_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6461_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6461_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6461_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6461_0_0_0/* byval_arg */
	, &IEnumerable_1_t6461_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6461_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6460_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>
extern MethodInfo IList_1_get_Item_m33527_MethodInfo;
extern MethodInfo IList_1_set_Item_m33528_MethodInfo;
static PropertyInfo IList_1_t6460____Item_PropertyInfo = 
{
	&IList_1_t6460_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33527_MethodInfo/* get */
	, &IList_1_set_Item_m33528_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6460_PropertyInfos[] =
{
	&IList_1_t6460____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
static ParameterInfo IList_1_t6460_IList_1_IndexOf_m33529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1388_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33529_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33529_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6460_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6460_IList_1_IndexOf_m33529_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33529_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
static ParameterInfo IList_1_t6460_IList_1_Insert_m33530_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1388_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33530_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33530_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6460_IList_1_Insert_m33530_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33530_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6460_IList_1_RemoveAt_m33531_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33531_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33531_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6460_IList_1_RemoveAt_m33531_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33531_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6460_IList_1_get_Item_m33527_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t1388_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33527_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33527_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6460_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t1388_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t1388_Int32_t18/* invoker_method */
	, IList_1_t6460_IList_1_get_Item_m33527_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33527_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodImplAttributes_t1388_0_0_0;
static ParameterInfo IList_1_t6460_IList_1_set_Item_m33528_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t1388_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33528_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33528_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6460_IList_1_set_Item_m33528_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33528_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6460_MethodInfos[] =
{
	&IList_1_IndexOf_m33529_MethodInfo,
	&IList_1_Insert_m33530_MethodInfo,
	&IList_1_RemoveAt_m33531_MethodInfo,
	&IList_1_get_Item_m33527_MethodInfo,
	&IList_1_set_Item_m33528_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6460_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6459_il2cpp_TypeInfo,
	&IEnumerable_1_t6461_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6460_0_0_0;
extern Il2CppType IList_1_t6460_1_0_0;
struct IList_1_t6460;
extern Il2CppGenericClass IList_1_t6460_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6460_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6460_MethodInfos/* methods */
	, IList_1_t6460_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6460_il2cpp_TypeInfo/* element_class */
	, IList_1_t6460_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6460_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6460_0_0_0/* byval_arg */
	, &IList_1_t6460_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6460_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4953_il2cpp_TypeInfo;

// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>
extern MethodInfo IEnumerator_1_get_Current_m33532_MethodInfo;
static PropertyInfo IEnumerator_1_t4953____Current_PropertyInfo = 
{
	&IEnumerator_1_t4953_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33532_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4953_PropertyInfos[] =
{
	&IEnumerator_1_t4953____Current_PropertyInfo,
	NULL
};
extern Il2CppType PInfo_t1401_0_0_0;
extern void* RuntimeInvoker_PInfo_t1401 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33532_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33532_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4953_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t1401_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t1401/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33532_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4953_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33532_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4953_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4953_0_0_0;
extern Il2CppType IEnumerator_1_t4953_1_0_0;
struct IEnumerator_1_t4953;
extern Il2CppGenericClass IEnumerator_1_t4953_GenericClass;
TypeInfo IEnumerator_1_t4953_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4953_MethodInfos/* methods */
	, IEnumerator_1_t4953_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4953_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4953_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4953_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4953_0_0_0/* byval_arg */
	, &IEnumerator_1_t4953_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4953_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.PInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_472.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3445_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_472MethodDeclarations.h"

extern TypeInfo PInfo_t1401_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19115_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPInfo_t1401_m25660_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PInfo>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPInfo_t1401_m25660 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19111_MethodInfo;
 void InternalEnumerator_1__ctor_m19111 (InternalEnumerator_1_t3445 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112 (InternalEnumerator_1_t3445 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19115(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19115_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PInfo_t1401_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19113_MethodInfo;
 void InternalEnumerator_1_Dispose_m19113 (InternalEnumerator_1_t3445 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PInfo>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19114_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19114 (InternalEnumerator_1_t3445 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.PInfo>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19115 (InternalEnumerator_1_t3445 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisPInfo_t1401_m25660(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPInfo_t1401_m25660_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3445____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3445, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3445____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3445, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3445_FieldInfos[] =
{
	&InternalEnumerator_1_t3445____array_0_FieldInfo,
	&InternalEnumerator_1_t3445____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3445____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3445_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3445____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3445_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3445_PropertyInfos[] =
{
	&InternalEnumerator_1_t3445____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3445____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3445_InternalEnumerator_1__ctor_m19111_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19111_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19111_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19111/* method */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3445_InternalEnumerator_1__ctor_m19111_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19111_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112/* method */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19113_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19113_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19113/* method */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19113_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19114_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19114_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19114/* method */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19114_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t1401_0_0_0;
extern void* RuntimeInvoker_PInfo_t1401 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19115_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.PInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19115_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19115/* method */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t1401_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t1401/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19115_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3445_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19111_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112_MethodInfo,
	&InternalEnumerator_1_Dispose_m19113_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19114_MethodInfo,
	&InternalEnumerator_1_get_Current_m19115_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3445_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19112_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19114_MethodInfo,
	&InternalEnumerator_1_Dispose_m19113_MethodInfo,
	&InternalEnumerator_1_get_Current_m19115_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3445_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4953_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3445_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4953_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3445_0_0_0;
extern Il2CppType InternalEnumerator_1_t3445_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3445_GenericClass;
TypeInfo InternalEnumerator_1_t3445_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3445_MethodInfos/* methods */
	, InternalEnumerator_1_t3445_PropertyInfos/* properties */
	, InternalEnumerator_1_t3445_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3445_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3445_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3445_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3445_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3445_1_0_0/* this_arg */
	, InternalEnumerator_1_t3445_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3445_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3445)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6462_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PInfo>
extern MethodInfo ICollection_1_get_Count_m33533_MethodInfo;
static PropertyInfo ICollection_1_t6462____Count_PropertyInfo = 
{
	&ICollection_1_t6462_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33533_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33534_MethodInfo;
static PropertyInfo ICollection_1_t6462____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6462_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33534_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6462_PropertyInfos[] =
{
	&ICollection_1_t6462____Count_PropertyInfo,
	&ICollection_1_t6462____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33533_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m33533_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33533_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33534_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33534_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33534_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t1401_0_0_0;
extern Il2CppType PInfo_t1401_0_0_0;
static ParameterInfo ICollection_1_t6462_ICollection_1_Add_m33535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t1401_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33535_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Add(T)
MethodInfo ICollection_1_Add_m33535_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6462_ICollection_1_Add_m33535_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33535_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33536_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Clear()
MethodInfo ICollection_1_Clear_m33536_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33536_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t1401_0_0_0;
static ParameterInfo ICollection_1_t6462_ICollection_1_Contains_m33537_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t1401_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33537_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m33537_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6462_ICollection_1_Contains_m33537_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33537_GenericMethod/* genericMethod */

};
extern Il2CppType PInfoU5BU5D_t3693_0_0_0;
extern Il2CppType PInfoU5BU5D_t3693_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6462_ICollection_1_CopyTo_m33538_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PInfoU5BU5D_t3693_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33538_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33538_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6462_ICollection_1_CopyTo_m33538_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33538_GenericMethod/* genericMethod */

};
extern Il2CppType PInfo_t1401_0_0_0;
static ParameterInfo ICollection_1_t6462_ICollection_1_Remove_m33539_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t1401_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33539_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m33539_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6462_ICollection_1_Remove_m33539_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33539_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6462_MethodInfos[] =
{
	&ICollection_1_get_Count_m33533_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33534_MethodInfo,
	&ICollection_1_Add_m33535_MethodInfo,
	&ICollection_1_Clear_m33536_MethodInfo,
	&ICollection_1_Contains_m33537_MethodInfo,
	&ICollection_1_CopyTo_m33538_MethodInfo,
	&ICollection_1_Remove_m33539_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6464_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6462_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6464_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6462_0_0_0;
extern Il2CppType ICollection_1_t6462_1_0_0;
struct ICollection_1_t6462;
extern Il2CppGenericClass ICollection_1_t6462_GenericClass;
TypeInfo ICollection_1_t6462_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6462_MethodInfos/* methods */
	, ICollection_1_t6462_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6462_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6462_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6462_0_0_0/* byval_arg */
	, &ICollection_1_t6462_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6462_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>
extern Il2CppType IEnumerator_1_t4953_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33540_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33540_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6464_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4953_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33540_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6464_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33540_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6464_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6464_0_0_0;
extern Il2CppType IEnumerable_1_t6464_1_0_0;
struct IEnumerable_1_t6464;
extern Il2CppGenericClass IEnumerable_1_t6464_GenericClass;
TypeInfo IEnumerable_1_t6464_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6464_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6464_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6464_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6464_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6464_0_0_0/* byval_arg */
	, &IEnumerable_1_t6464_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6464_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6463_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PInfo>
extern MethodInfo IList_1_get_Item_m33541_MethodInfo;
extern MethodInfo IList_1_set_Item_m33542_MethodInfo;
static PropertyInfo IList_1_t6463____Item_PropertyInfo = 
{
	&IList_1_t6463_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33541_MethodInfo/* get */
	, &IList_1_set_Item_m33542_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6463_PropertyInfos[] =
{
	&IList_1_t6463____Item_PropertyInfo,
	NULL
};
extern Il2CppType PInfo_t1401_0_0_0;
static ParameterInfo IList_1_t6463_IList_1_IndexOf_m33543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t1401_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33543_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33543_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6463_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6463_IList_1_IndexOf_m33543_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33543_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PInfo_t1401_0_0_0;
static ParameterInfo IList_1_t6463_IList_1_Insert_m33544_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PInfo_t1401_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33544_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33544_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6463_IList_1_Insert_m33544_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33544_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6463_IList_1_RemoveAt_m33545_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33545_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33545_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6463_IList_1_RemoveAt_m33545_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33545_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6463_IList_1_get_Item_m33541_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType PInfo_t1401_0_0_0;
extern void* RuntimeInvoker_PInfo_t1401_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33541_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.PInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33541_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6463_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t1401_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t1401_Int32_t18/* invoker_method */
	, IList_1_t6463_IList_1_get_Item_m33541_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33541_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PInfo_t1401_0_0_0;
static ParameterInfo IList_1_t6463_IList_1_set_Item_m33542_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PInfo_t1401_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33542_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33542_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6463_IList_1_set_Item_m33542_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33542_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6463_MethodInfos[] =
{
	&IList_1_IndexOf_m33543_MethodInfo,
	&IList_1_Insert_m33544_MethodInfo,
	&IList_1_RemoveAt_m33545_MethodInfo,
	&IList_1_get_Item_m33541_MethodInfo,
	&IList_1_set_Item_m33542_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6463_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6462_il2cpp_TypeInfo,
	&IEnumerable_1_t6464_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6463_0_0_0;
extern Il2CppType IList_1_t6463_1_0_0;
struct IList_1_t6463;
extern Il2CppGenericClass IList_1_t6463_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6463_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6463_MethodInfos/* methods */
	, IList_1_t6463_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6463_il2cpp_TypeInfo/* element_class */
	, IList_1_t6463_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6463_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6463_0_0_0/* byval_arg */
	, &IList_1_t6463_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6463_GenericClass/* generic_class */
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
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Getter_2_t3446_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
#include "mscorlib_System_Reflection_MonoProperty_Getter_2_genMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Getter_2__ctor_m19116_MethodInfo;
 void Getter_2__ctor_m19116_gshared (Getter_2_t3446 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
extern MethodInfo Getter_2_Invoke_m19117_MethodInfo;
 Object_t * Getter_2_Invoke_m19117_gshared (Getter_2_t3446 * __this, Object_t * ____this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Getter_2_Invoke_m19117((Getter_2_t3446 *)__this->___prev_9,____this, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ____this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(____this,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern MethodInfo Getter_2_BeginInvoke_m19118_MethodInfo;
 Object_t * Getter_2_BeginInvoke_m19118_gshared (Getter_2_t3446 * __this, Object_t * ____this, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ____this;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo Getter_2_EndInvoke_m19119_MethodInfo;
 Object_t * Getter_2_EndInvoke_m19119_gshared (Getter_2_t3446 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo Getter_2_t3446_Getter_2__ctor_m19116_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2__ctor_m19116_GenericMethod;
// System.Void System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo Getter_2__ctor_m19116_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Getter_2__ctor_m19116_gshared/* method */
	, &Getter_2_t3446_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, Getter_2_t3446_Getter_2__ctor_m19116_ParameterInfos/* parameters */
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
	, &Getter_2__ctor_m19116_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Getter_2_t3446_Getter_2_Invoke_m19117_ParameterInfos[] = 
{
	{"_this", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2_Invoke_m19117_GenericMethod;
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::Invoke(T)
MethodInfo Getter_2_Invoke_m19117_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Getter_2_Invoke_m19117_gshared/* method */
	, &Getter_2_t3446_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Getter_2_t3446_Getter_2_Invoke_m19117_ParameterInfos/* parameters */
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
	, &Getter_2_Invoke_m19117_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Getter_2_t3446_Getter_2_BeginInvoke_m19118_ParameterInfos[] = 
{
	{"_this", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2_BeginInvoke_m19118_GenericMethod;
// System.IAsyncResult System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Getter_2_BeginInvoke_m19118_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Getter_2_BeginInvoke_m19118_gshared/* method */
	, &Getter_2_t3446_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Getter_2_t3446_Getter_2_BeginInvoke_m19118_ParameterInfos/* parameters */
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
	, &Getter_2_BeginInvoke_m19118_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo Getter_2_t3446_Getter_2_EndInvoke_m19119_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Getter_2_EndInvoke_m19119_GenericMethod;
// R System.Reflection.MonoProperty/Getter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo Getter_2_EndInvoke_m19119_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Getter_2_EndInvoke_m19119_gshared/* method */
	, &Getter_2_t3446_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Getter_2_t3446_Getter_2_EndInvoke_m19119_ParameterInfos/* parameters */
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
	, &Getter_2_EndInvoke_m19119_GenericMethod/* genericMethod */

};
static MethodInfo* Getter_2_t3446_MethodInfos[] =
{
	&Getter_2__ctor_m19116_MethodInfo,
	&Getter_2_Invoke_m19117_MethodInfo,
	&Getter_2_BeginInvoke_m19118_MethodInfo,
	&Getter_2_EndInvoke_m19119_MethodInfo,
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
static MethodInfo* Getter_2_t3446_VTable[] =
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
	&Getter_2_Invoke_m19117_MethodInfo,
	&Getter_2_BeginInvoke_m19118_MethodInfo,
	&Getter_2_EndInvoke_m19119_MethodInfo,
};
extern TypeInfo ICloneable_t350_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t351_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Getter_2_t3446_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Getter_2_t3446_0_0_0;
extern Il2CppType Getter_2_t3446_1_0_0;
extern TypeInfo MulticastDelegate_t172_il2cpp_TypeInfo;
struct Getter_2_t3446;
extern Il2CppGenericClass Getter_2_t3446_GenericClass;
extern TypeInfo MonoProperty_t1400_il2cpp_TypeInfo;
TypeInfo Getter_2_t3446_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Getter`2"/* name */
	, ""/* namespaze */
	, Getter_2_t3446_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &MonoProperty_t1400_il2cpp_TypeInfo/* nested_in */
	, &Getter_2_t3446_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Getter_2_t3446_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Getter_2_t3446_il2cpp_TypeInfo/* cast_class */
	, &Getter_2_t3446_0_0_0/* byval_arg */
	, &Getter_2_t3446_1_0_0/* this_arg */
	, Getter_2_t3446_InterfacesOffsets/* interface_offsets */
	, &Getter_2_t3446_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Getter_2_t3446)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
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
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo StaticGetter_1_t3447_il2cpp_TypeInfo;
// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
#include "mscorlib_System_Reflection_MonoProperty_StaticGetter_1_genMethodDeclarations.h"



// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo StaticGetter_1__ctor_m19120_MethodInfo;
 void StaticGetter_1__ctor_m19120_gshared (StaticGetter_1_t3447 * __this, Object_t * ___object, IntPtr_t173 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern MethodInfo StaticGetter_1_Invoke_m19121_MethodInfo;
 Object_t * StaticGetter_1_Invoke_m19121_gshared (StaticGetter_1_t3447 * __this, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		StaticGetter_1_Invoke_m19121((StaticGetter_1_t3447 *)__this->___prev_9, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
}
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern MethodInfo StaticGetter_1_BeginInvoke_m19122_MethodInfo;
 Object_t * StaticGetter_1_BeginInvoke_m19122_gshared (StaticGetter_1_t3447 * __this, AsyncCallback_t39 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo StaticGetter_1_EndInvoke_m19123_MethodInfo;
 Object_t * StaticGetter_1_EndInvoke_m19123_gshared (StaticGetter_1_t3447 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Reflection.MonoProperty/StaticGetter`1<System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo StaticGetter_1_t3447_StaticGetter_1__ctor_m19120_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1__ctor_m19120_GenericMethod;
// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo StaticGetter_1__ctor_m19120_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&StaticGetter_1__ctor_m19120_gshared/* method */
	, &StaticGetter_1_t3447_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, StaticGetter_1_t3447_StaticGetter_1__ctor_m19120_ParameterInfos/* parameters */
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
	, &StaticGetter_1__ctor_m19120_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1_Invoke_m19121_GenericMethod;
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
MethodInfo StaticGetter_1_Invoke_m19121_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&StaticGetter_1_Invoke_m19121_gshared/* method */
	, &StaticGetter_1_t3447_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &StaticGetter_1_Invoke_m19121_GenericMethod/* genericMethod */

};
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo StaticGetter_1_t3447_StaticGetter_1_BeginInvoke_m19122_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1_BeginInvoke_m19122_GenericMethod;
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
MethodInfo StaticGetter_1_BeginInvoke_m19122_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&StaticGetter_1_BeginInvoke_m19122_gshared/* method */
	, &StaticGetter_1_t3447_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, StaticGetter_1_t3447_StaticGetter_1_BeginInvoke_m19122_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &StaticGetter_1_BeginInvoke_m19122_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo StaticGetter_1_t3447_StaticGetter_1_EndInvoke_m19123_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod StaticGetter_1_EndInvoke_m19123_GenericMethod;
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo StaticGetter_1_EndInvoke_m19123_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&StaticGetter_1_EndInvoke_m19123_gshared/* method */
	, &StaticGetter_1_t3447_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, StaticGetter_1_t3447_StaticGetter_1_EndInvoke_m19123_ParameterInfos/* parameters */
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
	, &StaticGetter_1_EndInvoke_m19123_GenericMethod/* genericMethod */

};
static MethodInfo* StaticGetter_1_t3447_MethodInfos[] =
{
	&StaticGetter_1__ctor_m19120_MethodInfo,
	&StaticGetter_1_Invoke_m19121_MethodInfo,
	&StaticGetter_1_BeginInvoke_m19122_MethodInfo,
	&StaticGetter_1_EndInvoke_m19123_MethodInfo,
	NULL
};
static MethodInfo* StaticGetter_1_t3447_VTable[] =
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
	&StaticGetter_1_Invoke_m19121_MethodInfo,
	&StaticGetter_1_BeginInvoke_m19122_MethodInfo,
	&StaticGetter_1_EndInvoke_m19123_MethodInfo,
};
static Il2CppInterfaceOffsetPair StaticGetter_1_t3447_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType StaticGetter_1_t3447_0_0_0;
extern Il2CppType StaticGetter_1_t3447_1_0_0;
struct StaticGetter_1_t3447;
extern Il2CppGenericClass StaticGetter_1_t3447_GenericClass;
TypeInfo StaticGetter_1_t3447_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "StaticGetter`1"/* name */
	, ""/* namespaze */
	, StaticGetter_1_t3447_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &MonoProperty_t1400_il2cpp_TypeInfo/* nested_in */
	, &StaticGetter_1_t3447_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, StaticGetter_1_t3447_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &StaticGetter_1_t3447_il2cpp_TypeInfo/* cast_class */
	, &StaticGetter_1_t3447_0_0_0/* byval_arg */
	, &StaticGetter_1_t3447_1_0_0/* this_arg */
	, StaticGetter_1_t3447_InterfacesOffsets/* interface_offsets */
	, &StaticGetter_1_t3447_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (StaticGetter_1_t3447)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 259/* flags */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4955_il2cpp_TypeInfo;

// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>
extern MethodInfo IEnumerator_1_get_Current_m33546_MethodInfo;
static PropertyInfo IEnumerator_1_t4955____Current_PropertyInfo = 
{
	&IEnumerator_1_t4955_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33546_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4955_PropertyInfos[] =
{
	&IEnumerator_1_t4955____Current_PropertyInfo,
	NULL
};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t1405 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33546_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33546_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4955_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t1405_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t1405/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33546_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4955_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33546_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4955_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4955_0_0_0;
extern Il2CppType IEnumerator_1_t4955_1_0_0;
struct IEnumerator_1_t4955;
extern Il2CppGenericClass IEnumerator_1_t4955_GenericClass;
TypeInfo IEnumerator_1_t4955_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4955_MethodInfos/* methods */
	, IEnumerator_1_t4955_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4955_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4955_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4955_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4955_0_0_0/* byval_arg */
	, &IEnumerator_1_t4955_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4955_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_473.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3448_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_473MethodDeclarations.h"

extern TypeInfo ParameterAttributes_t1405_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19128_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25673_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25673 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19124_MethodInfo;
 void InternalEnumerator_1__ctor_m19124 (InternalEnumerator_1_t3448 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125 (InternalEnumerator_1_t3448 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19128(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19128_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ParameterAttributes_t1405_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19126_MethodInfo;
 void InternalEnumerator_1_Dispose_m19126 (InternalEnumerator_1_t3448 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19127_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19127 (InternalEnumerator_1_t3448 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m4119(L_1, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19128 (InternalEnumerator_1_t3448 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t949 * L_3 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_3, (String_t*) &_stringLiteral1058, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4119(L_5, /*hidden argument*/&Array_get_Length_m4119_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25673(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25673_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3448____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3448, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3448____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3448, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3448_FieldInfos[] =
{
	&InternalEnumerator_1_t3448____array_0_FieldInfo,
	&InternalEnumerator_1_t3448____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3448____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3448_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3448____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3448_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3448_PropertyInfos[] =
{
	&InternalEnumerator_1_t3448____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3448____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3448_InternalEnumerator_1__ctor_m19124_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19124_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19124_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19124/* method */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3448_InternalEnumerator_1__ctor_m19124_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19124_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125/* method */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19126_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19126_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19126/* method */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19126_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19127_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19127_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19127/* method */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19127_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t1405 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19128_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19128_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19128/* method */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t1405_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t1405/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19128_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3448_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19124_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125_MethodInfo,
	&InternalEnumerator_1_Dispose_m19126_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19127_MethodInfo,
	&InternalEnumerator_1_get_Current_m19128_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3448_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19125_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19127_MethodInfo,
	&InternalEnumerator_1_Dispose_m19126_MethodInfo,
	&InternalEnumerator_1_get_Current_m19128_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3448_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4955_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3448_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4955_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3448_0_0_0;
extern Il2CppType InternalEnumerator_1_t3448_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3448_GenericClass;
TypeInfo InternalEnumerator_1_t3448_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3448_MethodInfos/* methods */
	, InternalEnumerator_1_t3448_PropertyInfos/* properties */
	, InternalEnumerator_1_t3448_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3448_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3448_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3448_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3448_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3448_1_0_0/* this_arg */
	, InternalEnumerator_1_t3448_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3448_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3448)+ sizeof (Il2CppObject)/* instance_size */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
