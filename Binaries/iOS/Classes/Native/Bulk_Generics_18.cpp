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
extern TypeInfo IList_1_t5720_il2cpp_TypeInfo;

// UnityEngine.SerializeField
#include "UnityEngine_UnityEngine_SerializeField.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SerializeField>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SerializeField>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SerializeField>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SerializeField>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SerializeField>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SerializeField>
extern MethodInfo IList_1_get_Item_m29958_MethodInfo;
extern MethodInfo IList_1_set_Item_m29959_MethodInfo;
static PropertyInfo IList_1_t5720____Item_PropertyInfo = 
{
	&IList_1_t5720_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m29958_MethodInfo/* get */
	, &IList_1_set_Item_m29959_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5720_PropertyInfos[] =
{
	&IList_1_t5720____Item_PropertyInfo,
	NULL
};
extern Il2CppType SerializeField_t279_0_0_0;
extern Il2CppType SerializeField_t279_0_0_0;
static ParameterInfo IList_1_t5720_IList_1_IndexOf_m29960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SerializeField_t279_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m29960_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SerializeField>::IndexOf(T)
MethodInfo IList_1_IndexOf_m29960_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5720_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5720_IList_1_IndexOf_m29960_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m29960_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SerializeField_t279_0_0_0;
static ParameterInfo IList_1_t5720_IList_1_Insert_m29961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SerializeField_t279_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m29961_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SerializeField>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m29961_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5720_IList_1_Insert_m29961_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m29961_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5720_IList_1_RemoveAt_m29962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m29962_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SerializeField>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m29962_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5720_IList_1_RemoveAt_m29962_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m29962_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5720_IList_1_get_Item_m29958_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType SerializeField_t279_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m29958_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.SerializeField>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m29958_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5720_il2cpp_TypeInfo/* declaring_type */
	, &SerializeField_t279_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5720_IList_1_get_Item_m29958_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m29958_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SerializeField_t279_0_0_0;
static ParameterInfo IList_1_t5720_IList_1_set_Item_m29959_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SerializeField_t279_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m29959_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SerializeField>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m29959_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5720_IList_1_set_Item_m29959_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m29959_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5720_MethodInfos[] =
{
	&IList_1_IndexOf_m29960_MethodInfo,
	&IList_1_Insert_m29961_MethodInfo,
	&IList_1_RemoveAt_m29962_MethodInfo,
	&IList_1_get_Item_m29958_MethodInfo,
	&IList_1_set_Item_m29959_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t641_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t5719_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t5721_il2cpp_TypeInfo;
static TypeInfo* IList_1_t5720_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5719_il2cpp_TypeInfo,
	&IEnumerable_1_t5721_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5720_0_0_0;
extern Il2CppType IList_1_t5720_1_0_0;
struct IList_1_t5720;
extern Il2CppGenericClass IList_1_t5720_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5720_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5720_MethodInfos/* methods */
	, IList_1_t5720_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5720_il2cpp_TypeInfo/* element_class */
	, IList_1_t5720_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5720_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5720_0_0_0/* byval_arg */
	, &IList_1_t5720_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5720_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4459_il2cpp_TypeInfo;

// UnityEngine.Shader
#include "UnityEngine_UnityEngine_Shader.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Shader>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Shader>
extern MethodInfo IEnumerator_1_get_Current_m29963_MethodInfo;
static PropertyInfo IEnumerator_1_t4459____Current_PropertyInfo = 
{
	&IEnumerator_1_t4459_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m29963_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4459_PropertyInfos[] =
{
	&IEnumerator_1_t4459____Current_PropertyInfo,
	NULL
};
extern Il2CppType Shader_t491_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m29963_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Shader>::get_Current()
MethodInfo IEnumerator_1_get_Current_m29963_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4459_il2cpp_TypeInfo/* declaring_type */
	, &Shader_t491_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m29963_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4459_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m29963_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t112_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t301_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t4459_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4459_0_0_0;
extern Il2CppType IEnumerator_1_t4459_1_0_0;
struct IEnumerator_1_t4459;
extern Il2CppGenericClass IEnumerator_1_t4459_GenericClass;
TypeInfo IEnumerator_1_t4459_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4459_MethodInfos/* methods */
	, IEnumerator_1_t4459_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4459_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4459_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4459_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4459_0_0_0/* byval_arg */
	, &IEnumerator_1_t4459_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4459_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.Shader>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_222.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2985_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Shader>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_222MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo Shader_t491_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t949_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m16354_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4119_MethodInfo;
extern MethodInfo Array_get_Length_m4124_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisShader_t491_m22741_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m19779_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19779(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Shader>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Shader>(System.Int32)
#define Array_InternalArray__get_Item_TisShader_t491_m22741(__this, p0, method) (Shader_t491 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Shader>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Shader>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Shader>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Shader>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Shader>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Shader>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2985____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2985, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t2985____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2985, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2985_FieldInfos[] =
{
	&InternalEnumerator_1_t2985____array_0_FieldInfo,
	&InternalEnumerator_1_t2985____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16351_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2985____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2985_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2985____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2985_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2985_PropertyInfos[] =
{
	&InternalEnumerator_1_t2985____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2985____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2985_InternalEnumerator_1__ctor_m16350_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16350_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Shader>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16350_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t2985_InternalEnumerator_1__ctor_m16350_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16350_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16351_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Shader>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16351_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16351_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16352_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Shader>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16352_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16352_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16353_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Shader>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16353_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16353_GenericMethod/* genericMethod */

};
extern Il2CppType Shader_t491_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16354_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Shader>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16354_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* declaring_type */
	, &Shader_t491_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16354_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2985_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16350_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16351_MethodInfo,
	&InternalEnumerator_1_Dispose_m16352_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16353_MethodInfo,
	&InternalEnumerator_1_get_Current_m16354_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1360_MethodInfo;
extern MethodInfo Object_Finalize_m7_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1361_MethodInfo;
extern MethodInfo ValueType_ToString_m1476_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m16353_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16352_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2985_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16351_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16353_MethodInfo,
	&InternalEnumerator_1_Dispose_m16352_MethodInfo,
	&InternalEnumerator_1_get_Current_m16354_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2985_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4459_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2985_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4459_il2cpp_TypeInfo, 7},
};
extern TypeInfo Shader_t491_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2985_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16354_MethodInfo/* Method Usage */,
	&Shader_t491_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisShader_t491_m22741_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2985_0_0_0;
extern Il2CppType InternalEnumerator_1_t2985_1_0_0;
extern TypeInfo ValueType_t296_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t2985_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t2985_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2985_MethodInfos/* methods */
	, InternalEnumerator_1_t2985_PropertyInfos/* properties */
	, InternalEnumerator_1_t2985_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2985_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2985_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2985_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2985_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2985_1_0_0/* this_arg */
	, InternalEnumerator_1_t2985_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2985_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2985_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2985)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5722_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Shader>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Shader>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Shader>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Shader>
extern MethodInfo ICollection_1_get_Count_m29964_MethodInfo;
static PropertyInfo ICollection_1_t5722____Count_PropertyInfo = 
{
	&ICollection_1_t5722_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m29964_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m29965_MethodInfo;
static PropertyInfo ICollection_1_t5722____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5722_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m29965_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5722_PropertyInfos[] =
{
	&ICollection_1_t5722____Count_PropertyInfo,
	&ICollection_1_t5722____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m29964_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Shader>::get_Count()
MethodInfo ICollection_1_get_Count_m29964_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m29964_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m29965_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Shader>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m29965_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m29965_GenericMethod/* genericMethod */

};
extern Il2CppType Shader_t491_0_0_0;
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo ICollection_1_t5722_ICollection_1_Add_m29966_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m29966_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Add(T)
MethodInfo ICollection_1_Add_m29966_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5722_ICollection_1_Add_m29966_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m29966_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m29967_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Clear()
MethodInfo ICollection_1_Clear_m29967_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m29967_GenericMethod/* genericMethod */

};
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo ICollection_1_t5722_ICollection_1_Contains_m29968_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m29968_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Contains(T)
MethodInfo ICollection_1_Contains_m29968_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5722_ICollection_1_Contains_m29968_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m29968_GenericMethod/* genericMethod */

};
extern Il2CppType ShaderU5BU5D_t3802_0_0_0;
extern Il2CppType ShaderU5BU5D_t3802_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5722_ICollection_1_CopyTo_m29969_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ShaderU5BU5D_t3802_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m29969_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Shader>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m29969_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5722_ICollection_1_CopyTo_m29969_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m29969_GenericMethod/* genericMethod */

};
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo ICollection_1_t5722_ICollection_1_Remove_m29970_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m29970_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Shader>::Remove(T)
MethodInfo ICollection_1_Remove_m29970_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5722_ICollection_1_Remove_m29970_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m29970_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5722_MethodInfos[] =
{
	&ICollection_1_get_Count_m29964_MethodInfo,
	&ICollection_1_get_IsReadOnly_m29965_MethodInfo,
	&ICollection_1_Add_m29966_MethodInfo,
	&ICollection_1_Clear_m29967_MethodInfo,
	&ICollection_1_Contains_m29968_MethodInfo,
	&ICollection_1_CopyTo_m29969_MethodInfo,
	&ICollection_1_Remove_m29970_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5724_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5722_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5724_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5722_0_0_0;
extern Il2CppType ICollection_1_t5722_1_0_0;
struct ICollection_1_t5722;
extern Il2CppGenericClass ICollection_1_t5722_GenericClass;
TypeInfo ICollection_1_t5722_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5722_MethodInfos/* methods */
	, ICollection_1_t5722_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5722_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5722_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5722_0_0_0/* byval_arg */
	, &ICollection_1_t5722_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5722_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Shader>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Shader>
extern Il2CppType IEnumerator_1_t4459_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m29971_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Shader>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m29971_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5724_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4459_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m29971_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5724_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m29971_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5724_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5724_0_0_0;
extern Il2CppType IEnumerable_1_t5724_1_0_0;
struct IEnumerable_1_t5724;
extern Il2CppGenericClass IEnumerable_1_t5724_GenericClass;
TypeInfo IEnumerable_1_t5724_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5724_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5724_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5724_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5724_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5724_0_0_0/* byval_arg */
	, &IEnumerable_1_t5724_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5724_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5723_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Shader>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Shader>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Shader>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Shader>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Shader>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Shader>
extern MethodInfo IList_1_get_Item_m29972_MethodInfo;
extern MethodInfo IList_1_set_Item_m29973_MethodInfo;
static PropertyInfo IList_1_t5723____Item_PropertyInfo = 
{
	&IList_1_t5723_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m29972_MethodInfo/* get */
	, &IList_1_set_Item_m29973_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5723_PropertyInfos[] =
{
	&IList_1_t5723____Item_PropertyInfo,
	NULL
};
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo IList_1_t5723_IList_1_IndexOf_m29974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m29974_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Shader>::IndexOf(T)
MethodInfo IList_1_IndexOf_m29974_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5723_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5723_IList_1_IndexOf_m29974_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m29974_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo IList_1_t5723_IList_1_Insert_m29975_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m29975_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Shader>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m29975_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5723_IList_1_Insert_m29975_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m29975_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5723_IList_1_RemoveAt_m29976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m29976_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Shader>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m29976_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5723_IList_1_RemoveAt_m29976_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m29976_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5723_IList_1_get_Item_m29972_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Shader_t491_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m29972_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Shader>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m29972_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5723_il2cpp_TypeInfo/* declaring_type */
	, &Shader_t491_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5723_IList_1_get_Item_m29972_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m29972_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo IList_1_t5723_IList_1_set_Item_m29973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m29973_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Shader>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m29973_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5723_IList_1_set_Item_m29973_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m29973_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5723_MethodInfos[] =
{
	&IList_1_IndexOf_m29974_MethodInfo,
	&IList_1_Insert_m29975_MethodInfo,
	&IList_1_RemoveAt_m29976_MethodInfo,
	&IList_1_get_Item_m29972_MethodInfo,
	&IList_1_set_Item_m29973_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5723_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5722_il2cpp_TypeInfo,
	&IEnumerable_1_t5724_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5723_0_0_0;
extern Il2CppType IList_1_t5723_1_0_0;
struct IList_1_t5723;
extern Il2CppGenericClass IList_1_t5723_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5723_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5723_MethodInfos/* methods */
	, IList_1_t5723_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5723_il2cpp_TypeInfo/* element_class */
	, IList_1_t5723_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5723_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5723_0_0_0/* byval_arg */
	, &IList_1_t5723_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5723_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_57.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2986_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_57MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_59.h"
extern TypeInfo ObjectU5BU5D_t295_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t2987_il2cpp_TypeInfo;
extern TypeInfo Void_t3_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_59MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16357_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16359_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t2986____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t2986_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2986, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2986_FieldInfos[] =
{
	&CachedInvokableCall_1_t2986____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2986_CachedInvokableCall_1__ctor_m16355_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16355_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16355_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t2986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2986_CachedInvokableCall_1__ctor_m16355_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16355_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2986_CachedInvokableCall_1_Invoke_m16356_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16356_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Shader>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16356_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t2986_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2986_CachedInvokableCall_1_Invoke_m16356_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16356_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2986_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16355_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16356_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1292_MethodInfo;
extern MethodInfo Object_GetHashCode_m1293_MethodInfo;
extern MethodInfo Object_ToString_m1303_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m16356_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16360_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2986_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16356_MethodInfo,
	&InvokableCall_1_Find_m16360_MethodInfo,
};
extern Il2CppType UnityAction_1_t2988_0_0_0;
extern TypeInfo UnityAction_1_t2988_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisShader_t491_m22751_MethodInfo;
extern TypeInfo Shader_t491_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16362_MethodInfo;
extern TypeInfo Shader_t491_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2986_RGCTXData[8] = 
{
	&UnityAction_1_t2988_0_0_0/* Type Usage */,
	&UnityAction_1_t2988_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisShader_t491_m22751_MethodInfo/* Method Usage */,
	&Shader_t491_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16362_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16357_MethodInfo/* Method Usage */,
	&Shader_t491_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16359_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2986_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2986_1_0_0;
struct CachedInvokableCall_1_t2986;
extern Il2CppGenericClass CachedInvokableCall_1_t2986_GenericClass;
TypeInfo CachedInvokableCall_1_t2986_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2986_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2986_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2986_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2986_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2986_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2986_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2986_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2986_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2986_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2986)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Shader>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_64.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo UnityAction_1_t2988_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t377_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.Shader>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_64MethodDeclarations.h"
extern MethodInfo BaseInvokableCall__ctor_m2925_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1531_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m3112_MethodInfo;
extern MethodInfo Delegate_Combine_m1574_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m2924_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1922_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m2926_MethodInfo;
extern MethodInfo Delegate_get_Target_m3108_MethodInfo;
extern MethodInfo Delegate_get_Method_m3106_MethodInfo;
struct BaseInvokableCall_t581;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
 void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared (Object_t * __this/* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Shader>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Shader>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisShader_t491_m22751(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>
extern Il2CppType UnityAction_1_t2988_0_0_1;
FieldInfo InvokableCall_1_t2987____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2988_0_0_1/* type */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2987, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2987_FieldInfos[] =
{
	&InvokableCall_1_t2987____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2987_InvokableCall_1__ctor_m16357_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16357_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16357_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2987_InvokableCall_1__ctor_m16357_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16357_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2988_0_0_0;
static ParameterInfo InvokableCall_1_t2987_InvokableCall_1__ctor_m16358_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2988_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16358_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16358_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2987_InvokableCall_1__ctor_m16358_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16358_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t2987_InvokableCall_1_Invoke_m16359_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16359_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16359_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2987_InvokableCall_1_Invoke_m16359_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16359_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2987_InvokableCall_1_Find_m16360_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16360_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Shader>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16360_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2987_InvokableCall_1_Find_m16360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16360_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2987_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16357_MethodInfo,
	&InvokableCall_1__ctor_m16358_MethodInfo,
	&InvokableCall_1_Invoke_m16359_MethodInfo,
	&InvokableCall_1_Find_m16360_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2987_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16359_MethodInfo,
	&InvokableCall_1_Find_m16360_MethodInfo,
};
extern TypeInfo UnityAction_1_t2988_il2cpp_TypeInfo;
extern TypeInfo Shader_t491_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2987_RGCTXData[5] = 
{
	&UnityAction_1_t2988_0_0_0/* Type Usage */,
	&UnityAction_1_t2988_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisShader_t491_m22751_MethodInfo/* Method Usage */,
	&Shader_t491_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16362_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2987_0_0_0;
extern Il2CppType InvokableCall_1_t2987_1_0_0;
extern TypeInfo BaseInvokableCall_t581_il2cpp_TypeInfo;
struct InvokableCall_1_t2987;
extern Il2CppGenericClass InvokableCall_1_t2987_GenericClass;
TypeInfo InvokableCall_1_t2987_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2987_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2987_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2987_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2987_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2987_0_0_0/* byval_arg */
	, &InvokableCall_1_t2987_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2987_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2987_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2987)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Shader>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t2988_UnityAction_1__ctor_m16361_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16361_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16361_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t2988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t2988_UnityAction_1__ctor_m16361_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16361_GenericMethod/* genericMethod */

};
extern Il2CppType Shader_t491_0_0_0;
static ParameterInfo UnityAction_1_t2988_UnityAction_1_Invoke_m16362_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16362_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16362_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t2988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t2988_UnityAction_1_Invoke_m16362_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16362_GenericMethod/* genericMethod */

};
extern Il2CppType Shader_t491_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2988_UnityAction_1_BeginInvoke_m16363_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Shader_t491_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16363_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16363_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t2988_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2988_UnityAction_1_BeginInvoke_m16363_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16363_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t2988_UnityAction_1_EndInvoke_m16364_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16364_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Shader>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16364_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t2988_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t2988_UnityAction_1_EndInvoke_m16364_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16364_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2988_MethodInfos[] =
{
	&UnityAction_1__ctor_m16361_MethodInfo,
	&UnityAction_1_Invoke_m16362_MethodInfo,
	&UnityAction_1_BeginInvoke_m16363_MethodInfo,
	&UnityAction_1_EndInvoke_m16364_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m1679_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m1680_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m1681_MethodInfo;
extern MethodInfo Delegate_Clone_m1682_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m1683_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m1684_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m1685_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m16363_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16364_MethodInfo;
static MethodInfo* UnityAction_1_t2988_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16362_MethodInfo,
	&UnityAction_1_BeginInvoke_m16363_MethodInfo,
	&UnityAction_1_EndInvoke_m16364_MethodInfo,
};
extern TypeInfo ICloneable_t350_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t351_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t2988_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2988_1_0_0;
extern TypeInfo MulticastDelegate_t172_il2cpp_TypeInfo;
struct UnityAction_1_t2988;
extern Il2CppGenericClass UnityAction_1_t2988_GenericClass;
TypeInfo UnityAction_1_t2988_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2988_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2988_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2988_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2988_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2988_0_0_0/* byval_arg */
	, &UnityAction_1_t2988_1_0_0/* this_arg */
	, UnityAction_1_t2988_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2988_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2988)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4461_il2cpp_TypeInfo;

// UnityEngine.Material
#include "UnityEngine_UnityEngine_Material.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Material>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Material>
extern MethodInfo IEnumerator_1_get_Current_m29977_MethodInfo;
static PropertyInfo IEnumerator_1_t4461____Current_PropertyInfo = 
{
	&IEnumerator_1_t4461_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m29977_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4461_PropertyInfos[] =
{
	&IEnumerator_1_t4461____Current_PropertyInfo,
	NULL
};
extern Il2CppType Material_t11_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m29977_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Material>::get_Current()
MethodInfo IEnumerator_1_get_Current_m29977_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4461_il2cpp_TypeInfo/* declaring_type */
	, &Material_t11_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m29977_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4461_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m29977_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4461_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4461_0_0_0;
extern Il2CppType IEnumerator_1_t4461_1_0_0;
struct IEnumerator_1_t4461;
extern Il2CppGenericClass IEnumerator_1_t4461_GenericClass;
TypeInfo IEnumerator_1_t4461_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4461_MethodInfos/* methods */
	, IEnumerator_1_t4461_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4461_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4461_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4461_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4461_0_0_0/* byval_arg */
	, &IEnumerator_1_t4461_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4461_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.Material>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2989_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Material>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_223MethodDeclarations.h"

extern TypeInfo Material_t11_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16369_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMaterial_t11_m22753_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Material>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Material>(System.Int32)
#define Array_InternalArray__get_Item_TisMaterial_t11_m22753(__this, p0, method) (Material_t11 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Material>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Material>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Material>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Material>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2989____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2989, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t2989____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2989, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2989_FieldInfos[] =
{
	&InternalEnumerator_1_t2989____array_0_FieldInfo,
	&InternalEnumerator_1_t2989____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16366_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2989____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2989_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2989____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2989_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2989_PropertyInfos[] =
{
	&InternalEnumerator_1_t2989____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2989____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2989_InternalEnumerator_1__ctor_m16365_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16365_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16365_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t2989_InternalEnumerator_1__ctor_m16365_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16365_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16366_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Material>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16366_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16366_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16367_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Material>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16367_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16367_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16368_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Material>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16368_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16368_GenericMethod/* genericMethod */

};
extern Il2CppType Material_t11_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16369_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Material>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16369_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* declaring_type */
	, &Material_t11_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16369_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2989_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16365_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16366_MethodInfo,
	&InternalEnumerator_1_Dispose_m16367_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16368_MethodInfo,
	&InternalEnumerator_1_get_Current_m16369_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16368_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16367_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2989_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16366_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16368_MethodInfo,
	&InternalEnumerator_1_Dispose_m16367_MethodInfo,
	&InternalEnumerator_1_get_Current_m16369_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2989_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4461_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2989_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4461_il2cpp_TypeInfo, 7},
};
extern TypeInfo Material_t11_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2989_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16369_MethodInfo/* Method Usage */,
	&Material_t11_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMaterial_t11_m22753_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2989_0_0_0;
extern Il2CppType InternalEnumerator_1_t2989_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2989_GenericClass;
TypeInfo InternalEnumerator_1_t2989_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2989_MethodInfos/* methods */
	, InternalEnumerator_1_t2989_PropertyInfos/* properties */
	, InternalEnumerator_1_t2989_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2989_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2989_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2989_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2989_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2989_1_0_0/* this_arg */
	, InternalEnumerator_1_t2989_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2989_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2989_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2989)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5725_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Material>
extern MethodInfo ICollection_1_get_Count_m29978_MethodInfo;
static PropertyInfo ICollection_1_t5725____Count_PropertyInfo = 
{
	&ICollection_1_t5725_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m29978_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m29979_MethodInfo;
static PropertyInfo ICollection_1_t5725____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5725_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m29979_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5725_PropertyInfos[] =
{
	&ICollection_1_t5725____Count_PropertyInfo,
	&ICollection_1_t5725____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m29978_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_Count()
MethodInfo ICollection_1_get_Count_m29978_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m29978_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m29979_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m29979_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m29979_GenericMethod/* genericMethod */

};
extern Il2CppType Material_t11_0_0_0;
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo ICollection_1_t5725_ICollection_1_Add_m29980_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m29980_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Add(T)
MethodInfo ICollection_1_Add_m29980_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5725_ICollection_1_Add_m29980_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m29980_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m29981_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::Clear()
MethodInfo ICollection_1_Clear_m29981_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m29981_GenericMethod/* genericMethod */

};
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo ICollection_1_t5725_ICollection_1_Contains_m29982_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m29982_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Contains(T)
MethodInfo ICollection_1_Contains_m29982_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5725_ICollection_1_Contains_m29982_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m29982_GenericMethod/* genericMethod */

};
extern Il2CppType MaterialU5BU5D_t3803_0_0_0;
extern Il2CppType MaterialU5BU5D_t3803_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5725_ICollection_1_CopyTo_m29983_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MaterialU5BU5D_t3803_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m29983_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Material>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m29983_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5725_ICollection_1_CopyTo_m29983_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m29983_GenericMethod/* genericMethod */

};
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo ICollection_1_t5725_ICollection_1_Remove_m29984_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m29984_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Material>::Remove(T)
MethodInfo ICollection_1_Remove_m29984_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5725_ICollection_1_Remove_m29984_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m29984_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5725_MethodInfos[] =
{
	&ICollection_1_get_Count_m29978_MethodInfo,
	&ICollection_1_get_IsReadOnly_m29979_MethodInfo,
	&ICollection_1_Add_m29980_MethodInfo,
	&ICollection_1_Clear_m29981_MethodInfo,
	&ICollection_1_Contains_m29982_MethodInfo,
	&ICollection_1_CopyTo_m29983_MethodInfo,
	&ICollection_1_Remove_m29984_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5727_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5725_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5727_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5725_0_0_0;
extern Il2CppType ICollection_1_t5725_1_0_0;
struct ICollection_1_t5725;
extern Il2CppGenericClass ICollection_1_t5725_GenericClass;
TypeInfo ICollection_1_t5725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5725_MethodInfos/* methods */
	, ICollection_1_t5725_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5725_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5725_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5725_0_0_0/* byval_arg */
	, &ICollection_1_t5725_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5725_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Material>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
extern Il2CppType IEnumerator_1_t4461_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m29985_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Material>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m29985_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5727_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4461_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m29985_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5727_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m29985_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5727_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5727_0_0_0;
extern Il2CppType IEnumerable_1_t5727_1_0_0;
struct IEnumerable_1_t5727;
extern Il2CppGenericClass IEnumerable_1_t5727_GenericClass;
TypeInfo IEnumerable_1_t5727_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5727_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5727_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5727_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5727_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5727_0_0_0/* byval_arg */
	, &IEnumerable_1_t5727_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5727_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5726_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Material>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Material>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Material>
extern MethodInfo IList_1_get_Item_m29986_MethodInfo;
extern MethodInfo IList_1_set_Item_m29987_MethodInfo;
static PropertyInfo IList_1_t5726____Item_PropertyInfo = 
{
	&IList_1_t5726_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m29986_MethodInfo/* get */
	, &IList_1_set_Item_m29987_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5726_PropertyInfos[] =
{
	&IList_1_t5726____Item_PropertyInfo,
	NULL
};
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo IList_1_t5726_IList_1_IndexOf_m29988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m29988_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Material>::IndexOf(T)
MethodInfo IList_1_IndexOf_m29988_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5726_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5726_IList_1_IndexOf_m29988_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m29988_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo IList_1_t5726_IList_1_Insert_m29989_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m29989_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m29989_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5726_IList_1_Insert_m29989_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m29989_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5726_IList_1_RemoveAt_m29990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m29990_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m29990_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5726_IList_1_RemoveAt_m29990_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m29990_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5726_IList_1_get_Item_m29986_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Material_t11_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m29986_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Material>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m29986_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5726_il2cpp_TypeInfo/* declaring_type */
	, &Material_t11_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5726_IList_1_get_Item_m29986_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m29986_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo IList_1_t5726_IList_1_set_Item_m29987_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m29987_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Material>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m29987_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5726_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5726_IList_1_set_Item_m29987_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m29987_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5726_MethodInfos[] =
{
	&IList_1_IndexOf_m29988_MethodInfo,
	&IList_1_Insert_m29989_MethodInfo,
	&IList_1_RemoveAt_m29990_MethodInfo,
	&IList_1_get_Item_m29986_MethodInfo,
	&IList_1_set_Item_m29987_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5726_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5725_il2cpp_TypeInfo,
	&IEnumerable_1_t5727_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5726_0_0_0;
extern Il2CppType IList_1_t5726_1_0_0;
struct IList_1_t5726;
extern Il2CppGenericClass IList_1_t5726_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5726_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5726_MethodInfos/* methods */
	, IList_1_t5726_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5726_il2cpp_TypeInfo/* element_class */
	, IList_1_t5726_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5726_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5726_0_0_0/* byval_arg */
	, &IList_1_t5726_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5726_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_58.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2990_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_58MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Material>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_60.h"
extern TypeInfo InvokableCall_1_t2991_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Material>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_60MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16372_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16374_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t2990____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t2990_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2990, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2990_FieldInfos[] =
{
	&CachedInvokableCall_1_t2990____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2990_CachedInvokableCall_1__ctor_m16370_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16370_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16370_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t2990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2990_CachedInvokableCall_1__ctor_m16370_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16370_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2990_CachedInvokableCall_1_Invoke_m16371_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16371_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Material>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16371_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t2990_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2990_CachedInvokableCall_1_Invoke_m16371_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16371_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2990_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16370_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16371_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16371_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16375_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2990_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16371_MethodInfo,
	&InvokableCall_1_Find_m16375_MethodInfo,
};
extern Il2CppType UnityAction_1_t2992_0_0_0;
extern TypeInfo UnityAction_1_t2992_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMaterial_t11_m22763_MethodInfo;
extern TypeInfo Material_t11_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16377_MethodInfo;
extern TypeInfo Material_t11_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2990_RGCTXData[8] = 
{
	&UnityAction_1_t2992_0_0_0/* Type Usage */,
	&UnityAction_1_t2992_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMaterial_t11_m22763_MethodInfo/* Method Usage */,
	&Material_t11_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16377_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16372_MethodInfo/* Method Usage */,
	&Material_t11_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16374_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2990_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2990_1_0_0;
struct CachedInvokableCall_1_t2990;
extern Il2CppGenericClass CachedInvokableCall_1_t2990_GenericClass;
TypeInfo CachedInvokableCall_1_t2990_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2990_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2990_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2990_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2990_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2990_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2990_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2990_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2990_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2990_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2990)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Material>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_65.h"
extern TypeInfo UnityAction_1_t2992_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Material>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_65MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Material>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Material>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMaterial_t11_m22763(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Material>
extern Il2CppType UnityAction_1_t2992_0_0_1;
FieldInfo InvokableCall_1_t2991____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2992_0_0_1/* type */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2991, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2991_FieldInfos[] =
{
	&InvokableCall_1_t2991____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2991_InvokableCall_1__ctor_m16372_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16372_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16372_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2991_InvokableCall_1__ctor_m16372_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16372_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2992_0_0_0;
static ParameterInfo InvokableCall_1_t2991_InvokableCall_1__ctor_m16373_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2992_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16373_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16373_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2991_InvokableCall_1__ctor_m16373_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16373_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t2991_InvokableCall_1_Invoke_m16374_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16374_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16374_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2991_InvokableCall_1_Invoke_m16374_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16374_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2991_InvokableCall_1_Find_m16375_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16375_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Material>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16375_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2991_InvokableCall_1_Find_m16375_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16375_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2991_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16372_MethodInfo,
	&InvokableCall_1__ctor_m16373_MethodInfo,
	&InvokableCall_1_Invoke_m16374_MethodInfo,
	&InvokableCall_1_Find_m16375_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2991_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16374_MethodInfo,
	&InvokableCall_1_Find_m16375_MethodInfo,
};
extern TypeInfo UnityAction_1_t2992_il2cpp_TypeInfo;
extern TypeInfo Material_t11_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2991_RGCTXData[5] = 
{
	&UnityAction_1_t2992_0_0_0/* Type Usage */,
	&UnityAction_1_t2992_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMaterial_t11_m22763_MethodInfo/* Method Usage */,
	&Material_t11_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16377_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2991_0_0_0;
extern Il2CppType InvokableCall_1_t2991_1_0_0;
struct InvokableCall_1_t2991;
extern Il2CppGenericClass InvokableCall_1_t2991_GenericClass;
TypeInfo InvokableCall_1_t2991_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2991_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2991_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2991_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2991_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2991_0_0_0/* byval_arg */
	, &InvokableCall_1_t2991_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2991_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2991_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2991)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Material>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Material>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Material>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Material>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Material>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t2992_UnityAction_1__ctor_m16376_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16376_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Material>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16376_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t2992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t2992_UnityAction_1__ctor_m16376_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16376_GenericMethod/* genericMethod */

};
extern Il2CppType Material_t11_0_0_0;
static ParameterInfo UnityAction_1_t2992_UnityAction_1_Invoke_m16377_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16377_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Material>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16377_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t2992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t2992_UnityAction_1_Invoke_m16377_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16377_GenericMethod/* genericMethod */

};
extern Il2CppType Material_t11_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2992_UnityAction_1_BeginInvoke_m16378_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Material_t11_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16378_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Material>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16378_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t2992_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2992_UnityAction_1_BeginInvoke_m16378_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16378_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t2992_UnityAction_1_EndInvoke_m16379_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16379_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Material>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16379_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t2992_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t2992_UnityAction_1_EndInvoke_m16379_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16379_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2992_MethodInfos[] =
{
	&UnityAction_1__ctor_m16376_MethodInfo,
	&UnityAction_1_Invoke_m16377_MethodInfo,
	&UnityAction_1_BeginInvoke_m16378_MethodInfo,
	&UnityAction_1_EndInvoke_m16379_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16378_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16379_MethodInfo;
static MethodInfo* UnityAction_1_t2992_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16377_MethodInfo,
	&UnityAction_1_BeginInvoke_m16378_MethodInfo,
	&UnityAction_1_EndInvoke_m16379_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t2992_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2992_1_0_0;
struct UnityAction_1_t2992;
extern Il2CppGenericClass UnityAction_1_t2992_GenericClass;
TypeInfo UnityAction_1_t2992_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2992_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2992_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2992_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2992_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2992_0_0_0/* byval_arg */
	, &UnityAction_1_t2992_1_0_0/* this_arg */
	, UnityAction_1_t2992_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2992_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2992)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4462_il2cpp_TypeInfo;

// UnityEngine.Sprite
#include "UnityEngine_UnityEngine_Sprite.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Sprite>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Sprite>
extern MethodInfo IEnumerator_1_get_Current_m29991_MethodInfo;
static PropertyInfo IEnumerator_1_t4462____Current_PropertyInfo = 
{
	&IEnumerator_1_t4462_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m29991_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4462_PropertyInfos[] =
{
	&IEnumerator_1_t4462____Current_PropertyInfo,
	NULL
};
extern Il2CppType Sprite_t156_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m29991_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Sprite>::get_Current()
MethodInfo IEnumerator_1_get_Current_m29991_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4462_il2cpp_TypeInfo/* declaring_type */
	, &Sprite_t156_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m29991_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4462_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m29991_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4462_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4462_0_0_0;
extern Il2CppType IEnumerator_1_t4462_1_0_0;
struct IEnumerator_1_t4462;
extern Il2CppGenericClass IEnumerator_1_t4462_GenericClass;
TypeInfo IEnumerator_1_t4462_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4462_MethodInfos/* methods */
	, IEnumerator_1_t4462_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4462_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4462_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4462_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4462_0_0_0/* byval_arg */
	, &IEnumerator_1_t4462_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4462_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.Sprite>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2993_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Sprite>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_224MethodDeclarations.h"

extern TypeInfo Sprite_t156_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16384_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSprite_t156_m22765_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Sprite>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Sprite>(System.Int32)
#define Array_InternalArray__get_Item_TisSprite_t156_m22765(__this, p0, method) (Sprite_t156 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Sprite>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Sprite>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Sprite>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Sprite>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Sprite>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Sprite>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2993____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2993, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t2993____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2993, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2993_FieldInfos[] =
{
	&InternalEnumerator_1_t2993____array_0_FieldInfo,
	&InternalEnumerator_1_t2993____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16381_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2993____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2993_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2993____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2993_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16384_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2993_PropertyInfos[] =
{
	&InternalEnumerator_1_t2993____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2993____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2993_InternalEnumerator_1__ctor_m16380_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16380_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Sprite>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16380_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t2993_InternalEnumerator_1__ctor_m16380_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16380_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16381_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Sprite>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16381_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16381_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16382_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Sprite>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16382_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16382_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16383_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Sprite>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16383_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16383_GenericMethod/* genericMethod */

};
extern Il2CppType Sprite_t156_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16384_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Sprite>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16384_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* declaring_type */
	, &Sprite_t156_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16384_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2993_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16380_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16381_MethodInfo,
	&InternalEnumerator_1_Dispose_m16382_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16383_MethodInfo,
	&InternalEnumerator_1_get_Current_m16384_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16383_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16382_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2993_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16381_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16383_MethodInfo,
	&InternalEnumerator_1_Dispose_m16382_MethodInfo,
	&InternalEnumerator_1_get_Current_m16384_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2993_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4462_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2993_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4462_il2cpp_TypeInfo, 7},
};
extern TypeInfo Sprite_t156_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2993_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16384_MethodInfo/* Method Usage */,
	&Sprite_t156_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSprite_t156_m22765_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2993_0_0_0;
extern Il2CppType InternalEnumerator_1_t2993_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2993_GenericClass;
TypeInfo InternalEnumerator_1_t2993_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2993_MethodInfos/* methods */
	, InternalEnumerator_1_t2993_PropertyInfos/* properties */
	, InternalEnumerator_1_t2993_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2993_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2993_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2993_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2993_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2993_1_0_0/* this_arg */
	, InternalEnumerator_1_t2993_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2993_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2993_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2993)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5728_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Sprite>
extern MethodInfo ICollection_1_get_Count_m29992_MethodInfo;
static PropertyInfo ICollection_1_t5728____Count_PropertyInfo = 
{
	&ICollection_1_t5728_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m29992_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m29993_MethodInfo;
static PropertyInfo ICollection_1_t5728____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5728_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m29993_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5728_PropertyInfos[] =
{
	&ICollection_1_t5728____Count_PropertyInfo,
	&ICollection_1_t5728____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m29992_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::get_Count()
MethodInfo ICollection_1_get_Count_m29992_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m29992_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m29993_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m29993_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m29993_GenericMethod/* genericMethod */

};
extern Il2CppType Sprite_t156_0_0_0;
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo ICollection_1_t5728_ICollection_1_Add_m29994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m29994_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Add(T)
MethodInfo ICollection_1_Add_m29994_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5728_ICollection_1_Add_m29994_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m29994_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m29995_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Clear()
MethodInfo ICollection_1_Clear_m29995_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m29995_GenericMethod/* genericMethod */

};
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo ICollection_1_t5728_ICollection_1_Contains_m29996_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m29996_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Contains(T)
MethodInfo ICollection_1_Contains_m29996_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5728_ICollection_1_Contains_m29996_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m29996_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteU5BU5D_t3804_0_0_0;
extern Il2CppType SpriteU5BU5D_t3804_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5728_ICollection_1_CopyTo_m29997_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpriteU5BU5D_t3804_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m29997_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m29997_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5728_ICollection_1_CopyTo_m29997_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m29997_GenericMethod/* genericMethod */

};
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo ICollection_1_t5728_ICollection_1_Remove_m29998_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m29998_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Sprite>::Remove(T)
MethodInfo ICollection_1_Remove_m29998_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5728_ICollection_1_Remove_m29998_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m29998_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5728_MethodInfos[] =
{
	&ICollection_1_get_Count_m29992_MethodInfo,
	&ICollection_1_get_IsReadOnly_m29993_MethodInfo,
	&ICollection_1_Add_m29994_MethodInfo,
	&ICollection_1_Clear_m29995_MethodInfo,
	&ICollection_1_Contains_m29996_MethodInfo,
	&ICollection_1_CopyTo_m29997_MethodInfo,
	&ICollection_1_Remove_m29998_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5730_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5728_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5730_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5728_0_0_0;
extern Il2CppType ICollection_1_t5728_1_0_0;
struct ICollection_1_t5728;
extern Il2CppGenericClass ICollection_1_t5728_GenericClass;
TypeInfo ICollection_1_t5728_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5728_MethodInfos/* methods */
	, ICollection_1_t5728_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5728_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5728_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5728_0_0_0/* byval_arg */
	, &ICollection_1_t5728_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5728_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Sprite>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Sprite>
extern Il2CppType IEnumerator_1_t4462_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m29999_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Sprite>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m29999_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5730_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4462_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m29999_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5730_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m29999_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5730_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5730_0_0_0;
extern Il2CppType IEnumerable_1_t5730_1_0_0;
struct IEnumerable_1_t5730;
extern Il2CppGenericClass IEnumerable_1_t5730_GenericClass;
TypeInfo IEnumerable_1_t5730_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5730_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5730_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5730_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5730_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5730_0_0_0/* byval_arg */
	, &IEnumerable_1_t5730_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5730_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5729_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Sprite>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Sprite>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Sprite>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Sprite>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Sprite>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Sprite>
extern MethodInfo IList_1_get_Item_m30000_MethodInfo;
extern MethodInfo IList_1_set_Item_m30001_MethodInfo;
static PropertyInfo IList_1_t5729____Item_PropertyInfo = 
{
	&IList_1_t5729_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30000_MethodInfo/* get */
	, &IList_1_set_Item_m30001_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5729_PropertyInfos[] =
{
	&IList_1_t5729____Item_PropertyInfo,
	NULL
};
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo IList_1_t5729_IList_1_IndexOf_m30002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30002_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Sprite>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30002_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5729_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5729_IList_1_IndexOf_m30002_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30002_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo IList_1_t5729_IList_1_Insert_m30003_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30003_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Sprite>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30003_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5729_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5729_IList_1_Insert_m30003_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30003_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5729_IList_1_RemoveAt_m30004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30004_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Sprite>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30004_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5729_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5729_IList_1_RemoveAt_m30004_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30004_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5729_IList_1_get_Item_m30000_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Sprite_t156_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30000_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Sprite>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30000_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5729_il2cpp_TypeInfo/* declaring_type */
	, &Sprite_t156_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5729_IList_1_get_Item_m30000_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30000_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo IList_1_t5729_IList_1_set_Item_m30001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30001_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Sprite>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30001_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5729_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5729_IList_1_set_Item_m30001_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30001_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5729_MethodInfos[] =
{
	&IList_1_IndexOf_m30002_MethodInfo,
	&IList_1_Insert_m30003_MethodInfo,
	&IList_1_RemoveAt_m30004_MethodInfo,
	&IList_1_get_Item_m30000_MethodInfo,
	&IList_1_set_Item_m30001_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5729_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5728_il2cpp_TypeInfo,
	&IEnumerable_1_t5730_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5729_0_0_0;
extern Il2CppType IList_1_t5729_1_0_0;
struct IList_1_t5729;
extern Il2CppGenericClass IList_1_t5729_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5729_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5729_MethodInfos/* methods */
	, IList_1_t5729_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5729_il2cpp_TypeInfo/* element_class */
	, IList_1_t5729_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5729_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5729_0_0_0/* byval_arg */
	, &IList_1_t5729_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5729_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_59.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2994_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_59MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_61.h"
extern TypeInfo InvokableCall_1_t2995_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_61MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16387_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16389_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t2994____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t2994_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2994, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2994_FieldInfos[] =
{
	&CachedInvokableCall_1_t2994____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2994_CachedInvokableCall_1__ctor_m16385_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16385_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16385_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t2994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2994_CachedInvokableCall_1__ctor_m16385_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16385_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2994_CachedInvokableCall_1_Invoke_m16386_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16386_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Sprite>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16386_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t2994_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2994_CachedInvokableCall_1_Invoke_m16386_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16386_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2994_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16385_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16386_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16386_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16390_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2994_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16386_MethodInfo,
	&InvokableCall_1_Find_m16390_MethodInfo,
};
extern Il2CppType UnityAction_1_t2996_0_0_0;
extern TypeInfo UnityAction_1_t2996_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSprite_t156_m22775_MethodInfo;
extern TypeInfo Sprite_t156_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16392_MethodInfo;
extern TypeInfo Sprite_t156_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2994_RGCTXData[8] = 
{
	&UnityAction_1_t2996_0_0_0/* Type Usage */,
	&UnityAction_1_t2996_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSprite_t156_m22775_MethodInfo/* Method Usage */,
	&Sprite_t156_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16392_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16387_MethodInfo/* Method Usage */,
	&Sprite_t156_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16389_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2994_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2994_1_0_0;
struct CachedInvokableCall_1_t2994;
extern Il2CppGenericClass CachedInvokableCall_1_t2994_GenericClass;
TypeInfo CachedInvokableCall_1_t2994_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2994_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2994_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2994_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2994_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2994_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2994_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2994_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2994_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2994_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2994)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_66.h"
extern TypeInfo UnityAction_1_t2996_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_66MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Sprite>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Sprite>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSprite_t156_m22775(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>
extern Il2CppType UnityAction_1_t2996_0_0_1;
FieldInfo InvokableCall_1_t2995____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t2996_0_0_1/* type */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2995, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2995_FieldInfos[] =
{
	&InvokableCall_1_t2995____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2995_InvokableCall_1__ctor_m16387_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16387_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16387_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2995_InvokableCall_1__ctor_m16387_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16387_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t2996_0_0_0;
static ParameterInfo InvokableCall_1_t2995_InvokableCall_1__ctor_m16388_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t2996_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16388_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16388_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2995_InvokableCall_1__ctor_m16388_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16388_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t2995_InvokableCall_1_Invoke_m16389_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16389_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16389_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2995_InvokableCall_1_Invoke_m16389_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16389_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2995_InvokableCall_1_Find_m16390_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16390_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Sprite>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16390_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2995_InvokableCall_1_Find_m16390_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16390_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2995_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16387_MethodInfo,
	&InvokableCall_1__ctor_m16388_MethodInfo,
	&InvokableCall_1_Invoke_m16389_MethodInfo,
	&InvokableCall_1_Find_m16390_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2995_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16389_MethodInfo,
	&InvokableCall_1_Find_m16390_MethodInfo,
};
extern TypeInfo UnityAction_1_t2996_il2cpp_TypeInfo;
extern TypeInfo Sprite_t156_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2995_RGCTXData[5] = 
{
	&UnityAction_1_t2996_0_0_0/* Type Usage */,
	&UnityAction_1_t2996_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSprite_t156_m22775_MethodInfo/* Method Usage */,
	&Sprite_t156_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16392_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2995_0_0_0;
extern Il2CppType InvokableCall_1_t2995_1_0_0;
struct InvokableCall_1_t2995;
extern Il2CppGenericClass InvokableCall_1_t2995_GenericClass;
TypeInfo InvokableCall_1_t2995_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2995_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2995_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2995_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2995_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2995_0_0_0/* byval_arg */
	, &InvokableCall_1_t2995_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2995_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2995_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2995)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t2996_UnityAction_1__ctor_m16391_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16391_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16391_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t2996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t2996_UnityAction_1__ctor_m16391_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16391_GenericMethod/* genericMethod */

};
extern Il2CppType Sprite_t156_0_0_0;
static ParameterInfo UnityAction_1_t2996_UnityAction_1_Invoke_m16392_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16392_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16392_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t2996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t2996_UnityAction_1_Invoke_m16392_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16392_GenericMethod/* genericMethod */

};
extern Il2CppType Sprite_t156_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t2996_UnityAction_1_BeginInvoke_m16393_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Sprite_t156_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16393_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16393_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t2996_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t2996_UnityAction_1_BeginInvoke_m16393_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16393_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t2996_UnityAction_1_EndInvoke_m16394_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16394_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Sprite>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16394_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t2996_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t2996_UnityAction_1_EndInvoke_m16394_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16394_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t2996_MethodInfos[] =
{
	&UnityAction_1__ctor_m16391_MethodInfo,
	&UnityAction_1_Invoke_m16392_MethodInfo,
	&UnityAction_1_BeginInvoke_m16393_MethodInfo,
	&UnityAction_1_EndInvoke_m16394_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16393_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16394_MethodInfo;
static MethodInfo* UnityAction_1_t2996_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16392_MethodInfo,
	&UnityAction_1_BeginInvoke_m16393_MethodInfo,
	&UnityAction_1_EndInvoke_m16394_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t2996_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t2996_1_0_0;
struct UnityAction_1_t2996;
extern Il2CppGenericClass UnityAction_1_t2996_GenericClass;
TypeInfo UnityAction_1_t2996_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t2996_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t2996_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t2996_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t2996_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t2996_0_0_0/* byval_arg */
	, &UnityAction_1_t2996_1_0_0/* this_arg */
	, UnityAction_1_t2996_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t2996_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t2996)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4464_il2cpp_TypeInfo;

// UnityEngine.SpriteRenderer
#include "UnityEngine_UnityEngine_SpriteRenderer.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SpriteRenderer>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SpriteRenderer>
extern MethodInfo IEnumerator_1_get_Current_m30005_MethodInfo;
static PropertyInfo IEnumerator_1_t4464____Current_PropertyInfo = 
{
	&IEnumerator_1_t4464_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30005_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4464_PropertyInfos[] =
{
	&IEnumerator_1_t4464____Current_PropertyInfo,
	NULL
};
extern Il2CppType SpriteRenderer_t310_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30005_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.SpriteRenderer>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30005_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4464_il2cpp_TypeInfo/* declaring_type */
	, &SpriteRenderer_t310_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m30005_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4464_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30005_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4464_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4464_0_0_0;
extern Il2CppType IEnumerator_1_t4464_1_0_0;
struct IEnumerator_1_t4464;
extern Il2CppGenericClass IEnumerator_1_t4464_GenericClass;
TypeInfo IEnumerator_1_t4464_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4464_MethodInfos/* methods */
	, IEnumerator_1_t4464_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4464_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4464_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4464_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4464_0_0_0/* byval_arg */
	, &IEnumerator_1_t4464_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4464_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t2997_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_225MethodDeclarations.h"

extern TypeInfo SpriteRenderer_t310_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16399_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpriteRenderer_t310_m22777_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SpriteRenderer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SpriteRenderer>(System.Int32)
#define Array_InternalArray__get_Item_TisSpriteRenderer_t310_m22777(__this, p0, method) (SpriteRenderer_t310 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t2997____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2997, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t2997____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t2997, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t2997_FieldInfos[] =
{
	&InternalEnumerator_1_t2997____array_0_FieldInfo,
	&InternalEnumerator_1_t2997____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_MethodInfo;
static PropertyInfo InternalEnumerator_1_t2997____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t2997____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t2997_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16399_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t2997_PropertyInfos[] =
{
	&InternalEnumerator_1_t2997____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t2997____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t2997_InternalEnumerator_1__ctor_m16395_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16395_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16395_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t2997_InternalEnumerator_1__ctor_m16395_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16395_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16397_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16397_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16397_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16398_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16398_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16398_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteRenderer_t310_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16399_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.SpriteRenderer>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16399_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* declaring_type */
	, &SpriteRenderer_t310_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16399_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t2997_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16395_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_MethodInfo,
	&InternalEnumerator_1_Dispose_m16397_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16398_MethodInfo,
	&InternalEnumerator_1_get_Current_m16399_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16398_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16397_MethodInfo;
static MethodInfo* InternalEnumerator_1_t2997_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16396_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16398_MethodInfo,
	&InternalEnumerator_1_Dispose_m16397_MethodInfo,
	&InternalEnumerator_1_get_Current_m16399_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t2997_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4464_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t2997_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4464_il2cpp_TypeInfo, 7},
};
extern TypeInfo SpriteRenderer_t310_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t2997_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16399_MethodInfo/* Method Usage */,
	&SpriteRenderer_t310_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSpriteRenderer_t310_m22777_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t2997_0_0_0;
extern Il2CppType InternalEnumerator_1_t2997_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t2997_GenericClass;
TypeInfo InternalEnumerator_1_t2997_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t2997_MethodInfos/* methods */
	, InternalEnumerator_1_t2997_PropertyInfos/* properties */
	, InternalEnumerator_1_t2997_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t2997_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t2997_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t2997_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t2997_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t2997_1_0_0/* this_arg */
	, InternalEnumerator_1_t2997_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t2997_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t2997_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t2997)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5731_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>
extern MethodInfo ICollection_1_get_Count_m30006_MethodInfo;
static PropertyInfo ICollection_1_t5731____Count_PropertyInfo = 
{
	&ICollection_1_t5731_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30006_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30007_MethodInfo;
static PropertyInfo ICollection_1_t5731____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5731_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30007_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5731_PropertyInfos[] =
{
	&ICollection_1_t5731____Count_PropertyInfo,
	&ICollection_1_t5731____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30006_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::get_Count()
MethodInfo ICollection_1_get_Count_m30006_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30006_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30007_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30007_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30007_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteRenderer_t310_0_0_0;
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo ICollection_1_t5731_ICollection_1_Add_m30008_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30008_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Add(T)
MethodInfo ICollection_1_Add_m30008_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5731_ICollection_1_Add_m30008_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30008_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30009_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Clear()
MethodInfo ICollection_1_Clear_m30009_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30009_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo ICollection_1_t5731_ICollection_1_Contains_m30010_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30010_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Contains(T)
MethodInfo ICollection_1_Contains_m30010_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5731_ICollection_1_Contains_m30010_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30010_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteRendererU5BU5D_t3805_0_0_0;
extern Il2CppType SpriteRendererU5BU5D_t3805_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5731_ICollection_1_CopyTo_m30011_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpriteRendererU5BU5D_t3805_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30011_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30011_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5731_ICollection_1_CopyTo_m30011_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30011_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo ICollection_1_t5731_ICollection_1_Remove_m30012_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30012_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SpriteRenderer>::Remove(T)
MethodInfo ICollection_1_Remove_m30012_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5731_ICollection_1_Remove_m30012_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30012_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5731_MethodInfos[] =
{
	&ICollection_1_get_Count_m30006_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30007_MethodInfo,
	&ICollection_1_Add_m30008_MethodInfo,
	&ICollection_1_Clear_m30009_MethodInfo,
	&ICollection_1_Contains_m30010_MethodInfo,
	&ICollection_1_CopyTo_m30011_MethodInfo,
	&ICollection_1_Remove_m30012_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5733_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5731_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5733_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5731_0_0_0;
extern Il2CppType ICollection_1_t5731_1_0_0;
struct ICollection_1_t5731;
extern Il2CppGenericClass ICollection_1_t5731_GenericClass;
TypeInfo ICollection_1_t5731_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5731_MethodInfos/* methods */
	, ICollection_1_t5731_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5731_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5731_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5731_0_0_0/* byval_arg */
	, &ICollection_1_t5731_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5731_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SpriteRenderer>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.SpriteRenderer>
extern Il2CppType IEnumerator_1_t4464_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30013_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SpriteRenderer>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30013_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5733_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4464_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30013_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5733_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30013_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5733_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5733_0_0_0;
extern Il2CppType IEnumerable_1_t5733_1_0_0;
struct IEnumerable_1_t5733;
extern Il2CppGenericClass IEnumerable_1_t5733_GenericClass;
TypeInfo IEnumerable_1_t5733_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5733_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5733_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5733_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5733_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5733_0_0_0/* byval_arg */
	, &IEnumerable_1_t5733_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5733_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5732_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>
extern MethodInfo IList_1_get_Item_m30014_MethodInfo;
extern MethodInfo IList_1_set_Item_m30015_MethodInfo;
static PropertyInfo IList_1_t5732____Item_PropertyInfo = 
{
	&IList_1_t5732_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30014_MethodInfo/* get */
	, &IList_1_set_Item_m30015_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5732_PropertyInfos[] =
{
	&IList_1_t5732____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo IList_1_t5732_IList_1_IndexOf_m30016_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30016_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30016_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5732_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5732_IList_1_IndexOf_m30016_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30016_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo IList_1_t5732_IList_1_Insert_m30017_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30017_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30017_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5732_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5732_IList_1_Insert_m30017_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30017_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5732_IList_1_RemoveAt_m30018_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30018_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30018_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5732_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5732_IList_1_RemoveAt_m30018_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30018_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5732_IList_1_get_Item_m30014_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType SpriteRenderer_t310_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30014_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30014_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5732_il2cpp_TypeInfo/* declaring_type */
	, &SpriteRenderer_t310_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5732_IList_1_get_Item_m30014_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30014_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo IList_1_t5732_IList_1_set_Item_m30015_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30015_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SpriteRenderer>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30015_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5732_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5732_IList_1_set_Item_m30015_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30015_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5732_MethodInfos[] =
{
	&IList_1_IndexOf_m30016_MethodInfo,
	&IList_1_Insert_m30017_MethodInfo,
	&IList_1_RemoveAt_m30018_MethodInfo,
	&IList_1_get_Item_m30014_MethodInfo,
	&IList_1_set_Item_m30015_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5732_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5731_il2cpp_TypeInfo,
	&IEnumerable_1_t5733_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5732_0_0_0;
extern Il2CppType IList_1_t5732_1_0_0;
struct IList_1_t5732;
extern Il2CppGenericClass IList_1_t5732_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5732_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5732_MethodInfos/* methods */
	, IList_1_t5732_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5732_il2cpp_TypeInfo/* element_class */
	, IList_1_t5732_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5732_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5732_0_0_0/* byval_arg */
	, &IList_1_t5732_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5732_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_60.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t2998_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_60MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_62.h"
extern TypeInfo InvokableCall_1_t2999_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_62MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16402_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16404_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t2998____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t2998_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t2998, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t2998_FieldInfos[] =
{
	&CachedInvokableCall_1_t2998____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2998_CachedInvokableCall_1__ctor_m16400_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16400_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16400_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t2998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2998_CachedInvokableCall_1__ctor_m16400_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16400_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t2998_CachedInvokableCall_1_Invoke_m16401_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16401_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.SpriteRenderer>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16401_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t2998_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t2998_CachedInvokableCall_1_Invoke_m16401_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16401_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t2998_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16400_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16401_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16401_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16405_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t2998_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16401_MethodInfo,
	&InvokableCall_1_Find_m16405_MethodInfo,
};
extern Il2CppType UnityAction_1_t3000_0_0_0;
extern TypeInfo UnityAction_1_t3000_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSpriteRenderer_t310_m22787_MethodInfo;
extern TypeInfo SpriteRenderer_t310_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16407_MethodInfo;
extern TypeInfo SpriteRenderer_t310_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t2998_RGCTXData[8] = 
{
	&UnityAction_1_t3000_0_0_0/* Type Usage */,
	&UnityAction_1_t3000_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSpriteRenderer_t310_m22787_MethodInfo/* Method Usage */,
	&SpriteRenderer_t310_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16407_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16402_MethodInfo/* Method Usage */,
	&SpriteRenderer_t310_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16404_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t2998_0_0_0;
extern Il2CppType CachedInvokableCall_1_t2998_1_0_0;
struct CachedInvokableCall_1_t2998;
extern Il2CppGenericClass CachedInvokableCall_1_t2998_GenericClass;
TypeInfo CachedInvokableCall_1_t2998_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t2998_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t2998_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t2998_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t2998_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t2998_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t2998_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t2998_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t2998_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t2998_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t2998)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_67.h"
extern TypeInfo UnityAction_1_t3000_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_67MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.SpriteRenderer>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.SpriteRenderer>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSpriteRenderer_t310_m22787(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>
extern Il2CppType UnityAction_1_t3000_0_0_1;
FieldInfo InvokableCall_1_t2999____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3000_0_0_1/* type */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t2999, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t2999_FieldInfos[] =
{
	&InvokableCall_1_t2999____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2999_InvokableCall_1__ctor_m16402_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16402_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16402_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2999_InvokableCall_1__ctor_m16402_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16402_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3000_0_0_0;
static ParameterInfo InvokableCall_1_t2999_InvokableCall_1__ctor_m16403_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3000_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16403_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16403_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2999_InvokableCall_1__ctor_m16403_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16403_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t2999_InvokableCall_1_Invoke_m16404_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16404_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16404_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t2999_InvokableCall_1_Invoke_m16404_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16404_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t2999_InvokableCall_1_Find_m16405_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16405_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.SpriteRenderer>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16405_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t2999_InvokableCall_1_Find_m16405_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16405_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t2999_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16402_MethodInfo,
	&InvokableCall_1__ctor_m16403_MethodInfo,
	&InvokableCall_1_Invoke_m16404_MethodInfo,
	&InvokableCall_1_Find_m16405_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t2999_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16404_MethodInfo,
	&InvokableCall_1_Find_m16405_MethodInfo,
};
extern TypeInfo UnityAction_1_t3000_il2cpp_TypeInfo;
extern TypeInfo SpriteRenderer_t310_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t2999_RGCTXData[5] = 
{
	&UnityAction_1_t3000_0_0_0/* Type Usage */,
	&UnityAction_1_t3000_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSpriteRenderer_t310_m22787_MethodInfo/* Method Usage */,
	&SpriteRenderer_t310_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16407_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t2999_0_0_0;
extern Il2CppType InvokableCall_1_t2999_1_0_0;
struct InvokableCall_1_t2999;
extern Il2CppGenericClass InvokableCall_1_t2999_GenericClass;
TypeInfo InvokableCall_1_t2999_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t2999_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t2999_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t2999_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t2999_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t2999_0_0_0/* byval_arg */
	, &InvokableCall_1_t2999_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t2999_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t2999_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t2999)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t3000_UnityAction_1__ctor_m16406_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16406_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16406_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t3000_UnityAction_1__ctor_m16406_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16406_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteRenderer_t310_0_0_0;
static ParameterInfo UnityAction_1_t3000_UnityAction_1_Invoke_m16407_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16407_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16407_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3000_UnityAction_1_Invoke_m16407_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16407_GenericMethod/* genericMethod */

};
extern Il2CppType SpriteRenderer_t310_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3000_UnityAction_1_BeginInvoke_m16408_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SpriteRenderer_t310_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16408_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16408_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3000_UnityAction_1_BeginInvoke_m16408_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16408_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t3000_UnityAction_1_EndInvoke_m16409_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16409_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.SpriteRenderer>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16409_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t3000_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3000_UnityAction_1_EndInvoke_m16409_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16409_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3000_MethodInfos[] =
{
	&UnityAction_1__ctor_m16406_MethodInfo,
	&UnityAction_1_Invoke_m16407_MethodInfo,
	&UnityAction_1_BeginInvoke_m16408_MethodInfo,
	&UnityAction_1_EndInvoke_m16409_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16408_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16409_MethodInfo;
static MethodInfo* UnityAction_1_t3000_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16407_MethodInfo,
	&UnityAction_1_BeginInvoke_m16408_MethodInfo,
	&UnityAction_1_EndInvoke_m16409_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3000_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3000_1_0_0;
struct UnityAction_1_t3000;
extern Il2CppGenericClass UnityAction_1_t3000_GenericClass;
TypeInfo UnityAction_1_t3000_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3000_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3000_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3000_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3000_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3000_0_0_0/* byval_arg */
	, &UnityAction_1_t3000_1_0_0/* this_arg */
	, UnityAction_1_t3000_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3000_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3000)/* instance_size */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_61.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3001_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_61MethodDeclarations.h"

// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_63.h"
extern TypeInfo Behaviour_t386_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3002_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_63MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16412_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16414_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3001____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3001_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3001, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3001_FieldInfos[] =
{
	&CachedInvokableCall_1_t3001____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Behaviour_t386_0_0_0;
extern Il2CppType Behaviour_t386_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3001_CachedInvokableCall_1__ctor_m16410_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Behaviour_t386_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16410_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16410_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3001_CachedInvokableCall_1__ctor_m16410_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16410_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3001_CachedInvokableCall_1_Invoke_m16411_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16411_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Behaviour>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16411_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3001_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3001_CachedInvokableCall_1_Invoke_m16411_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16411_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3001_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16410_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16411_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16411_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16415_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3001_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16411_MethodInfo,
	&InvokableCall_1_Find_m16415_MethodInfo,
};
extern Il2CppType UnityAction_1_t3003_0_0_0;
extern TypeInfo UnityAction_1_t3003_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisBehaviour_t386_m22788_MethodInfo;
extern TypeInfo Behaviour_t386_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16417_MethodInfo;
extern TypeInfo Behaviour_t386_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3001_RGCTXData[8] = 
{
	&UnityAction_1_t3003_0_0_0/* Type Usage */,
	&UnityAction_1_t3003_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBehaviour_t386_m22788_MethodInfo/* Method Usage */,
	&Behaviour_t386_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16417_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16412_MethodInfo/* Method Usage */,
	&Behaviour_t386_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16414_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3001_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3001_1_0_0;
struct CachedInvokableCall_1_t3001;
extern Il2CppGenericClass CachedInvokableCall_1_t3001_GenericClass;
TypeInfo CachedInvokableCall_1_t3001_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3001_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3001_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3001_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3001_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3001_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3001_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3001_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3001_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3001_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3001)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_68.h"
extern TypeInfo UnityAction_1_t3003_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_68MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Behaviour>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Behaviour>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisBehaviour_t386_m22788(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>
extern Il2CppType UnityAction_1_t3003_0_0_1;
FieldInfo InvokableCall_1_t3002____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3003_0_0_1/* type */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3002, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3002_FieldInfos[] =
{
	&InvokableCall_1_t3002____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3002_InvokableCall_1__ctor_m16412_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16412_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16412_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3002_InvokableCall_1__ctor_m16412_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16412_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3003_0_0_0;
static ParameterInfo InvokableCall_1_t3002_InvokableCall_1__ctor_m16413_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3003_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16413_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16413_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3002_InvokableCall_1__ctor_m16413_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16413_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3002_InvokableCall_1_Invoke_m16414_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16414_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16414_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3002_InvokableCall_1_Invoke_m16414_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16414_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3002_InvokableCall_1_Find_m16415_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16415_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Behaviour>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16415_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3002_InvokableCall_1_Find_m16415_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16415_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3002_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16412_MethodInfo,
	&InvokableCall_1__ctor_m16413_MethodInfo,
	&InvokableCall_1_Invoke_m16414_MethodInfo,
	&InvokableCall_1_Find_m16415_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3002_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16414_MethodInfo,
	&InvokableCall_1_Find_m16415_MethodInfo,
};
extern TypeInfo UnityAction_1_t3003_il2cpp_TypeInfo;
extern TypeInfo Behaviour_t386_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3002_RGCTXData[5] = 
{
	&UnityAction_1_t3003_0_0_0/* Type Usage */,
	&UnityAction_1_t3003_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisBehaviour_t386_m22788_MethodInfo/* Method Usage */,
	&Behaviour_t386_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16417_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3002_0_0_0;
extern Il2CppType InvokableCall_1_t3002_1_0_0;
struct InvokableCall_1_t3002;
extern Il2CppGenericClass InvokableCall_1_t3002_GenericClass;
TypeInfo InvokableCall_1_t3002_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3002_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3002_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3002_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3002_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3002_0_0_0/* byval_arg */
	, &InvokableCall_1_t3002_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3002_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3002_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3002)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t3003_UnityAction_1__ctor_m16416_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16416_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16416_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t3003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t3003_UnityAction_1__ctor_m16416_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16416_GenericMethod/* genericMethod */

};
extern Il2CppType Behaviour_t386_0_0_0;
static ParameterInfo UnityAction_1_t3003_UnityAction_1_Invoke_m16417_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Behaviour_t386_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16417_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16417_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t3003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3003_UnityAction_1_Invoke_m16417_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16417_GenericMethod/* genericMethod */

};
extern Il2CppType Behaviour_t386_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3003_UnityAction_1_BeginInvoke_m16418_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Behaviour_t386_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16418_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16418_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t3003_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3003_UnityAction_1_BeginInvoke_m16418_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16418_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t3003_UnityAction_1_EndInvoke_m16419_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16419_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Behaviour>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16419_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t3003_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3003_UnityAction_1_EndInvoke_m16419_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16419_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3003_MethodInfos[] =
{
	&UnityAction_1__ctor_m16416_MethodInfo,
	&UnityAction_1_Invoke_m16417_MethodInfo,
	&UnityAction_1_BeginInvoke_m16418_MethodInfo,
	&UnityAction_1_EndInvoke_m16419_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16418_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16419_MethodInfo;
static MethodInfo* UnityAction_1_t3003_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16417_MethodInfo,
	&UnityAction_1_BeginInvoke_m16418_MethodInfo,
	&UnityAction_1_EndInvoke_m16419_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3003_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3003_1_0_0;
struct UnityAction_1_t3003;
extern Il2CppGenericClass UnityAction_1_t3003_GenericClass;
TypeInfo UnityAction_1_t3003_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3003_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3003_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3003_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3003_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3003_0_0_0/* byval_arg */
	, &UnityAction_1_t3003_1_0_0/* this_arg */
	, UnityAction_1_t3003_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3003_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3003)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4466_il2cpp_TypeInfo;

// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>
extern MethodInfo IEnumerator_1_get_Current_m30019_MethodInfo;
static PropertyInfo IEnumerator_1_t4466____Current_PropertyInfo = 
{
	&IEnumerator_1_t4466_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30019_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4466_PropertyInfos[] =
{
	&IEnumerator_1_t4466____Current_PropertyInfo,
	NULL
};
extern Il2CppType Camera_t88_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30019_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Camera>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30019_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4466_il2cpp_TypeInfo/* declaring_type */
	, &Camera_t88_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m30019_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4466_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30019_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4466_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4466_0_0_0;
extern Il2CppType IEnumerator_1_t4466_1_0_0;
struct IEnumerator_1_t4466;
extern Il2CppGenericClass IEnumerator_1_t4466_GenericClass;
TypeInfo IEnumerator_1_t4466_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4466_MethodInfos/* methods */
	, IEnumerator_1_t4466_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4466_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4466_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4466_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4466_0_0_0/* byval_arg */
	, &IEnumerator_1_t4466_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4466_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.Camera>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_226.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3004_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Camera>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_226MethodDeclarations.h"

extern TypeInfo Camera_t88_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16424_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCamera_t88_m22790_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Camera>(System.Int32)
#define Array_InternalArray__get_Item_TisCamera_t88_m22790(__this, p0, method) (Camera_t88 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Camera>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Camera>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Camera>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3004____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3004, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3004____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3004, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3004_FieldInfos[] =
{
	&InternalEnumerator_1_t3004____array_0_FieldInfo,
	&InternalEnumerator_1_t3004____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16421_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3004____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3004_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16421_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3004____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3004_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16424_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3004_PropertyInfos[] =
{
	&InternalEnumerator_1_t3004____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3004____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3004_InternalEnumerator_1__ctor_m16420_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16420_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16420_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3004_InternalEnumerator_1__ctor_m16420_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16420_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16421_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Camera>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16421_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16421_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16422_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Camera>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16422_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16422_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16423_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Camera>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16423_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16423_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t88_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16424_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Camera>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16424_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* declaring_type */
	, &Camera_t88_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16424_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3004_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16420_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16421_MethodInfo,
	&InternalEnumerator_1_Dispose_m16422_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16423_MethodInfo,
	&InternalEnumerator_1_get_Current_m16424_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16423_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16422_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3004_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16421_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16423_MethodInfo,
	&InternalEnumerator_1_Dispose_m16422_MethodInfo,
	&InternalEnumerator_1_get_Current_m16424_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3004_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4466_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3004_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4466_il2cpp_TypeInfo, 7},
};
extern TypeInfo Camera_t88_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3004_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16424_MethodInfo/* Method Usage */,
	&Camera_t88_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCamera_t88_m22790_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3004_0_0_0;
extern Il2CppType InternalEnumerator_1_t3004_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3004_GenericClass;
TypeInfo InternalEnumerator_1_t3004_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3004_MethodInfos/* methods */
	, InternalEnumerator_1_t3004_PropertyInfos/* properties */
	, InternalEnumerator_1_t3004_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3004_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3004_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3004_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3004_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3004_1_0_0/* this_arg */
	, InternalEnumerator_1_t3004_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3004_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3004_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3004)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5734_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Camera>
extern MethodInfo ICollection_1_get_Count_m30020_MethodInfo;
static PropertyInfo ICollection_1_t5734____Count_PropertyInfo = 
{
	&ICollection_1_t5734_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30020_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30021_MethodInfo;
static PropertyInfo ICollection_1_t5734____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5734_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30021_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5734_PropertyInfos[] =
{
	&ICollection_1_t5734____Count_PropertyInfo,
	&ICollection_1_t5734____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30020_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_Count()
MethodInfo ICollection_1_get_Count_m30020_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30020_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30021_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30021_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30021_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t88_0_0_0;
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo ICollection_1_t5734_ICollection_1_Add_m30022_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30022_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Add(T)
MethodInfo ICollection_1_Add_m30022_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5734_ICollection_1_Add_m30022_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30022_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30023_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Clear()
MethodInfo ICollection_1_Clear_m30023_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30023_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo ICollection_1_t5734_ICollection_1_Contains_m30024_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30024_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Contains(T)
MethodInfo ICollection_1_Contains_m30024_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5734_ICollection_1_Contains_m30024_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30024_GenericMethod/* genericMethod */

};
extern Il2CppType CameraU5BU5D_t499_0_0_0;
extern Il2CppType CameraU5BU5D_t499_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5734_ICollection_1_CopyTo_m30025_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CameraU5BU5D_t499_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30025_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Camera>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30025_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5734_ICollection_1_CopyTo_m30025_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30025_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo ICollection_1_t5734_ICollection_1_Remove_m30026_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30026_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Camera>::Remove(T)
MethodInfo ICollection_1_Remove_m30026_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5734_ICollection_1_Remove_m30026_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30026_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5734_MethodInfos[] =
{
	&ICollection_1_get_Count_m30020_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30021_MethodInfo,
	&ICollection_1_Add_m30022_MethodInfo,
	&ICollection_1_Clear_m30023_MethodInfo,
	&ICollection_1_Contains_m30024_MethodInfo,
	&ICollection_1_CopyTo_m30025_MethodInfo,
	&ICollection_1_Remove_m30026_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5736_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5734_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5736_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5734_0_0_0;
extern Il2CppType ICollection_1_t5734_1_0_0;
struct ICollection_1_t5734;
extern Il2CppGenericClass ICollection_1_t5734_GenericClass;
TypeInfo ICollection_1_t5734_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5734_MethodInfos/* methods */
	, ICollection_1_t5734_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5734_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5734_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5734_0_0_0/* byval_arg */
	, &ICollection_1_t5734_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5734_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>
extern Il2CppType IEnumerator_1_t4466_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30027_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Camera>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30027_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5736_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4466_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30027_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5736_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30027_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5736_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5736_0_0_0;
extern Il2CppType IEnumerable_1_t5736_1_0_0;
struct IEnumerable_1_t5736;
extern Il2CppGenericClass IEnumerable_1_t5736_GenericClass;
TypeInfo IEnumerable_1_t5736_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5736_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5736_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5736_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5736_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5736_0_0_0/* byval_arg */
	, &IEnumerable_1_t5736_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5736_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5735_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Camera>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Camera>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Camera>
extern MethodInfo IList_1_get_Item_m30028_MethodInfo;
extern MethodInfo IList_1_set_Item_m30029_MethodInfo;
static PropertyInfo IList_1_t5735____Item_PropertyInfo = 
{
	&IList_1_t5735_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30028_MethodInfo/* get */
	, &IList_1_set_Item_m30029_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5735_PropertyInfos[] =
{
	&IList_1_t5735____Item_PropertyInfo,
	NULL
};
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo IList_1_t5735_IList_1_IndexOf_m30030_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30030_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Camera>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30030_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5735_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5735_IList_1_IndexOf_m30030_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30030_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo IList_1_t5735_IList_1_Insert_m30031_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30031_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30031_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5735_IList_1_Insert_m30031_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30031_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5735_IList_1_RemoveAt_m30032_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30032_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30032_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5735_IList_1_RemoveAt_m30032_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30032_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5735_IList_1_get_Item_m30028_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Camera_t88_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30028_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Camera>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30028_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5735_il2cpp_TypeInfo/* declaring_type */
	, &Camera_t88_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5735_IList_1_get_Item_m30028_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30028_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo IList_1_t5735_IList_1_set_Item_m30029_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30029_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Camera>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30029_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5735_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5735_IList_1_set_Item_m30029_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30029_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5735_MethodInfos[] =
{
	&IList_1_IndexOf_m30030_MethodInfo,
	&IList_1_Insert_m30031_MethodInfo,
	&IList_1_RemoveAt_m30032_MethodInfo,
	&IList_1_get_Item_m30028_MethodInfo,
	&IList_1_set_Item_m30029_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5735_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5734_il2cpp_TypeInfo,
	&IEnumerable_1_t5736_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5735_0_0_0;
extern Il2CppType IList_1_t5735_1_0_0;
struct IList_1_t5735;
extern Il2CppGenericClass IList_1_t5735_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5735_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5735_MethodInfos/* methods */
	, IList_1_t5735_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5735_il2cpp_TypeInfo/* element_class */
	, IList_1_t5735_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5735_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5735_0_0_0/* byval_arg */
	, &IList_1_t5735_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5735_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_62.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3005_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_62MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_64.h"
extern TypeInfo InvokableCall_1_t3006_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_64MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16427_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16429_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3005____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3005_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3005, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3005_FieldInfos[] =
{
	&CachedInvokableCall_1_t3005____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3005_CachedInvokableCall_1__ctor_m16425_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16425_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16425_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3005_CachedInvokableCall_1__ctor_m16425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16425_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3005_CachedInvokableCall_1_Invoke_m16426_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16426_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Camera>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16426_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3005_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3005_CachedInvokableCall_1_Invoke_m16426_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16426_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3005_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16425_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16426_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16426_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16430_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3005_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16426_MethodInfo,
	&InvokableCall_1_Find_m16430_MethodInfo,
};
extern Il2CppType UnityAction_1_t3007_0_0_0;
extern TypeInfo UnityAction_1_t3007_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisCamera_t88_m22800_MethodInfo;
extern TypeInfo Camera_t88_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16432_MethodInfo;
extern TypeInfo Camera_t88_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3005_RGCTXData[8] = 
{
	&UnityAction_1_t3007_0_0_0/* Type Usage */,
	&UnityAction_1_t3007_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisCamera_t88_m22800_MethodInfo/* Method Usage */,
	&Camera_t88_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16432_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16427_MethodInfo/* Method Usage */,
	&Camera_t88_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16429_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3005_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3005_1_0_0;
struct CachedInvokableCall_1_t3005;
extern Il2CppGenericClass CachedInvokableCall_1_t3005_GenericClass;
TypeInfo CachedInvokableCall_1_t3005_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3005_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3005_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3005_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3005_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3005_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3005_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3005_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3005_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3005_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3005)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_69.h"
extern TypeInfo UnityAction_1_t3007_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Camera>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_69MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Camera>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Camera>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisCamera_t88_m22800(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>
extern Il2CppType UnityAction_1_t3007_0_0_1;
FieldInfo InvokableCall_1_t3006____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3007_0_0_1/* type */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3006, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3006_FieldInfos[] =
{
	&InvokableCall_1_t3006____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3006_InvokableCall_1__ctor_m16427_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16427_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16427_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3006_InvokableCall_1__ctor_m16427_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16427_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3007_0_0_0;
static ParameterInfo InvokableCall_1_t3006_InvokableCall_1__ctor_m16428_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3007_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16428_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16428_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3006_InvokableCall_1__ctor_m16428_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16428_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3006_InvokableCall_1_Invoke_m16429_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16429_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16429_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3006_InvokableCall_1_Invoke_m16429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16429_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3006_InvokableCall_1_Find_m16430_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16430_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Camera>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16430_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3006_InvokableCall_1_Find_m16430_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16430_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3006_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16427_MethodInfo,
	&InvokableCall_1__ctor_m16428_MethodInfo,
	&InvokableCall_1_Invoke_m16429_MethodInfo,
	&InvokableCall_1_Find_m16430_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3006_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16429_MethodInfo,
	&InvokableCall_1_Find_m16430_MethodInfo,
};
extern TypeInfo UnityAction_1_t3007_il2cpp_TypeInfo;
extern TypeInfo Camera_t88_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3006_RGCTXData[5] = 
{
	&UnityAction_1_t3007_0_0_0/* Type Usage */,
	&UnityAction_1_t3007_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisCamera_t88_m22800_MethodInfo/* Method Usage */,
	&Camera_t88_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16432_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3006_0_0_0;
extern Il2CppType InvokableCall_1_t3006_1_0_0;
struct InvokableCall_1_t3006;
extern Il2CppGenericClass InvokableCall_1_t3006_GenericClass;
TypeInfo InvokableCall_1_t3006_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3006_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3006_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3006_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3006_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3006_0_0_0/* byval_arg */
	, &InvokableCall_1_t3006_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3006_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3006_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3006)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Camera>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t3007_UnityAction_1__ctor_m16431_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16431_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16431_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t3007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t3007_UnityAction_1__ctor_m16431_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16431_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t88_0_0_0;
static ParameterInfo UnityAction_1_t3007_UnityAction_1_Invoke_m16432_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16432_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16432_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t3007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3007_UnityAction_1_Invoke_m16432_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16432_GenericMethod/* genericMethod */

};
extern Il2CppType Camera_t88_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3007_UnityAction_1_BeginInvoke_m16433_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Camera_t88_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16433_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16433_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t3007_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3007_UnityAction_1_BeginInvoke_m16433_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16433_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t3007_UnityAction_1_EndInvoke_m16434_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16434_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Camera>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16434_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t3007_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3007_UnityAction_1_EndInvoke_m16434_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16434_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3007_MethodInfos[] =
{
	&UnityAction_1__ctor_m16431_MethodInfo,
	&UnityAction_1_Invoke_m16432_MethodInfo,
	&UnityAction_1_BeginInvoke_m16433_MethodInfo,
	&UnityAction_1_EndInvoke_m16434_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16433_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16434_MethodInfo;
static MethodInfo* UnityAction_1_t3007_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16432_MethodInfo,
	&UnityAction_1_BeginInvoke_m16433_MethodInfo,
	&UnityAction_1_EndInvoke_m16434_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3007_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3007_1_0_0;
struct UnityAction_1_t3007;
extern Il2CppGenericClass UnityAction_1_t3007_GenericClass;
TypeInfo UnityAction_1_t3007_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3007_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3007_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3007_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3007_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3007_0_0_0/* byval_arg */
	, &UnityAction_1_t3007_1_0_0/* this_arg */
	, UnityAction_1_t3007_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3007_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3007)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4468_il2cpp_TypeInfo;

// UnityEngine.Display
#include "UnityEngine_UnityEngine_Display.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Display>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Display>
extern MethodInfo IEnumerator_1_get_Current_m30033_MethodInfo;
static PropertyInfo IEnumerator_1_t4468____Current_PropertyInfo = 
{
	&IEnumerator_1_t4468_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30033_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4468_PropertyInfos[] =
{
	&IEnumerator_1_t4468____Current_PropertyInfo,
	NULL
};
extern Il2CppType Display_t503_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30033_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Display>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30033_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4468_il2cpp_TypeInfo/* declaring_type */
	, &Display_t503_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m30033_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4468_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30033_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4468_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4468_0_0_0;
extern Il2CppType IEnumerator_1_t4468_1_0_0;
struct IEnumerator_1_t4468;
extern Il2CppGenericClass IEnumerator_1_t4468_GenericClass;
TypeInfo IEnumerator_1_t4468_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4468_MethodInfos/* methods */
	, IEnumerator_1_t4468_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4468_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4468_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4468_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4468_0_0_0/* byval_arg */
	, &IEnumerator_1_t4468_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4468_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.Display>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_227.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3008_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Display>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_227MethodDeclarations.h"

extern TypeInfo Display_t503_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16439_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDisplay_t503_m22802_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Display>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Display>(System.Int32)
#define Array_InternalArray__get_Item_TisDisplay_t503_m22802(__this, p0, method) (Display_t503 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Display>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Display>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Display>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Display>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3008____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3008, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3008____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3008, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3008_FieldInfos[] =
{
	&InternalEnumerator_1_t3008____array_0_FieldInfo,
	&InternalEnumerator_1_t3008____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16436_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3008____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3008_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16436_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3008____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3008_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16439_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3008_PropertyInfos[] =
{
	&InternalEnumerator_1_t3008____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3008____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3008_InternalEnumerator_1__ctor_m16435_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16435_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16435_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3008_InternalEnumerator_1__ctor_m16435_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16435_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16436_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Display>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16436_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16436_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16437_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Display>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16437_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16437_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16438_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Display>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16438_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16438_GenericMethod/* genericMethod */

};
extern Il2CppType Display_t503_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16439_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Display>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16439_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* declaring_type */
	, &Display_t503_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16439_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3008_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16435_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16436_MethodInfo,
	&InternalEnumerator_1_Dispose_m16437_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16438_MethodInfo,
	&InternalEnumerator_1_get_Current_m16439_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16438_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16437_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3008_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16436_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16438_MethodInfo,
	&InternalEnumerator_1_Dispose_m16437_MethodInfo,
	&InternalEnumerator_1_get_Current_m16439_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3008_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4468_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3008_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4468_il2cpp_TypeInfo, 7},
};
extern TypeInfo Display_t503_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3008_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16439_MethodInfo/* Method Usage */,
	&Display_t503_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDisplay_t503_m22802_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3008_0_0_0;
extern Il2CppType InternalEnumerator_1_t3008_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3008_GenericClass;
TypeInfo InternalEnumerator_1_t3008_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3008_MethodInfos/* methods */
	, InternalEnumerator_1_t3008_PropertyInfos/* properties */
	, InternalEnumerator_1_t3008_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3008_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3008_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3008_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3008_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3008_1_0_0/* this_arg */
	, InternalEnumerator_1_t3008_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3008_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3008_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3008)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5737_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Display>
extern MethodInfo ICollection_1_get_Count_m30034_MethodInfo;
static PropertyInfo ICollection_1_t5737____Count_PropertyInfo = 
{
	&ICollection_1_t5737_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30034_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30035_MethodInfo;
static PropertyInfo ICollection_1_t5737____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5737_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30035_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5737_PropertyInfos[] =
{
	&ICollection_1_t5737____Count_PropertyInfo,
	&ICollection_1_t5737____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30034_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_Count()
MethodInfo ICollection_1_get_Count_m30034_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30034_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30035_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30035_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30035_GenericMethod/* genericMethod */

};
extern Il2CppType Display_t503_0_0_0;
extern Il2CppType Display_t503_0_0_0;
static ParameterInfo ICollection_1_t5737_ICollection_1_Add_m30036_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Display_t503_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30036_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Add(T)
MethodInfo ICollection_1_Add_m30036_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5737_ICollection_1_Add_m30036_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30036_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30037_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::Clear()
MethodInfo ICollection_1_Clear_m30037_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30037_GenericMethod/* genericMethod */

};
extern Il2CppType Display_t503_0_0_0;
static ParameterInfo ICollection_1_t5737_ICollection_1_Contains_m30038_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Display_t503_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30038_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Contains(T)
MethodInfo ICollection_1_Contains_m30038_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5737_ICollection_1_Contains_m30038_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30038_GenericMethod/* genericMethod */

};
extern Il2CppType DisplayU5BU5D_t502_0_0_0;
extern Il2CppType DisplayU5BU5D_t502_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5737_ICollection_1_CopyTo_m30039_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DisplayU5BU5D_t502_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30039_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Display>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30039_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5737_ICollection_1_CopyTo_m30039_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30039_GenericMethod/* genericMethod */

};
extern Il2CppType Display_t503_0_0_0;
static ParameterInfo ICollection_1_t5737_ICollection_1_Remove_m30040_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Display_t503_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30040_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Display>::Remove(T)
MethodInfo ICollection_1_Remove_m30040_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5737_ICollection_1_Remove_m30040_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30040_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5737_MethodInfos[] =
{
	&ICollection_1_get_Count_m30034_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30035_MethodInfo,
	&ICollection_1_Add_m30036_MethodInfo,
	&ICollection_1_Clear_m30037_MethodInfo,
	&ICollection_1_Contains_m30038_MethodInfo,
	&ICollection_1_CopyTo_m30039_MethodInfo,
	&ICollection_1_Remove_m30040_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5739_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5737_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5739_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5737_0_0_0;
extern Il2CppType ICollection_1_t5737_1_0_0;
struct ICollection_1_t5737;
extern Il2CppGenericClass ICollection_1_t5737_GenericClass;
TypeInfo ICollection_1_t5737_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5737_MethodInfos/* methods */
	, ICollection_1_t5737_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5737_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5737_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5737_0_0_0/* byval_arg */
	, &ICollection_1_t5737_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5737_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Display>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Display>
extern Il2CppType IEnumerator_1_t4468_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30041_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Display>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30041_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5739_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4468_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30041_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5739_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30041_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5739_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5739_0_0_0;
extern Il2CppType IEnumerable_1_t5739_1_0_0;
struct IEnumerable_1_t5739;
extern Il2CppGenericClass IEnumerable_1_t5739_GenericClass;
TypeInfo IEnumerable_1_t5739_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5739_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5739_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5739_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5739_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5739_0_0_0/* byval_arg */
	, &IEnumerable_1_t5739_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5739_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5738_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Display>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Display>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Display>
extern MethodInfo IList_1_get_Item_m30042_MethodInfo;
extern MethodInfo IList_1_set_Item_m30043_MethodInfo;
static PropertyInfo IList_1_t5738____Item_PropertyInfo = 
{
	&IList_1_t5738_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30042_MethodInfo/* get */
	, &IList_1_set_Item_m30043_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5738_PropertyInfos[] =
{
	&IList_1_t5738____Item_PropertyInfo,
	NULL
};
extern Il2CppType Display_t503_0_0_0;
static ParameterInfo IList_1_t5738_IList_1_IndexOf_m30044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Display_t503_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30044_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Display>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30044_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5738_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5738_IList_1_IndexOf_m30044_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30044_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Display_t503_0_0_0;
static ParameterInfo IList_1_t5738_IList_1_Insert_m30045_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Display_t503_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30045_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30045_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5738_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5738_IList_1_Insert_m30045_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30045_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5738_IList_1_RemoveAt_m30046_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30046_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30046_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5738_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5738_IList_1_RemoveAt_m30046_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30046_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5738_IList_1_get_Item_m30042_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Display_t503_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30042_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Display>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30042_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5738_il2cpp_TypeInfo/* declaring_type */
	, &Display_t503_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5738_IList_1_get_Item_m30042_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30042_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Display_t503_0_0_0;
static ParameterInfo IList_1_t5738_IList_1_set_Item_m30043_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Display_t503_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30043_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Display>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30043_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5738_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5738_IList_1_set_Item_m30043_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30043_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5738_MethodInfos[] =
{
	&IList_1_IndexOf_m30044_MethodInfo,
	&IList_1_Insert_m30045_MethodInfo,
	&IList_1_RemoveAt_m30046_MethodInfo,
	&IList_1_get_Item_m30042_MethodInfo,
	&IList_1_set_Item_m30043_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5738_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5737_il2cpp_TypeInfo,
	&IEnumerable_1_t5739_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5738_0_0_0;
extern Il2CppType IList_1_t5738_1_0_0;
struct IList_1_t5738;
extern Il2CppGenericClass IList_1_t5738_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5738_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5738_MethodInfos/* methods */
	, IList_1_t5738_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5738_il2cpp_TypeInfo/* element_class */
	, IList_1_t5738_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5738_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5738_0_0_0/* byval_arg */
	, &IList_1_t5738_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5738_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4470_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IntPtr>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IntPtr>
extern MethodInfo IEnumerator_1_get_Current_m30047_MethodInfo;
static PropertyInfo IEnumerator_1_t4470____Current_PropertyInfo = 
{
	&IEnumerator_1_t4470_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30047_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4470_PropertyInfos[] =
{
	&IEnumerator_1_t4470____Current_PropertyInfo,
	NULL
};
extern Il2CppType IntPtr_t173_0_0_0;
extern void* RuntimeInvoker_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30047_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IntPtr>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30047_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4470_il2cpp_TypeInfo/* declaring_type */
	, &IntPtr_t173_0_0_0/* return_type */
	, RuntimeInvoker_IntPtr_t173/* invoker_method */
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
	, &IEnumerator_1_get_Current_m30047_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4470_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30047_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4470_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4470_0_0_0;
extern Il2CppType IEnumerator_1_t4470_1_0_0;
struct IEnumerator_1_t4470;
extern Il2CppGenericClass IEnumerator_1_t4470_GenericClass;
TypeInfo IEnumerator_1_t4470_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4470_MethodInfos/* methods */
	, IEnumerator_1_t4470_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4470_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4470_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4470_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4470_0_0_0/* byval_arg */
	, &IEnumerator_1_t4470_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4470_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_228.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3009_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_228MethodDeclarations.h"

extern TypeInfo IntPtr_t173_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16444_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIntPtr_t173_m22813_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IntPtr>(System.Int32)
 IntPtr_t173 Array_InternalArray__get_Item_TisIntPtr_t173_m22813 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m16440_MethodInfo;
 void InternalEnumerator_1__ctor_m16440 (InternalEnumerator_1_t3009 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441 (InternalEnumerator_1_t3009 * __this, MethodInfo* method){
	{
		IntPtr_t173 L_0 = InternalEnumerator_1_get_Current_m16444(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m16444_MethodInfo);
		IntPtr_t173 L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&IntPtr_t173_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m16442_MethodInfo;
 void InternalEnumerator_1_Dispose_m16442 (InternalEnumerator_1_t3009 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m16443_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m16443 (InternalEnumerator_1_t3009 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m4124(L_1, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
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
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
 IntPtr_t173 InternalEnumerator_1_get_Current_m16444 (InternalEnumerator_1_t3009 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4119(L_1, (String_t*) &_stringLiteral1056, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
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
		InvalidOperationException__ctor_m4119(L_3, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4124(L_5, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		IntPtr_t173 L_8 = Array_InternalArray__get_Item_TisIntPtr_t173_m22813(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisIntPtr_t173_m22813_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.IntPtr>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3009____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3009, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3009____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3009, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3009_FieldInfos[] =
{
	&InternalEnumerator_1_t3009____array_0_FieldInfo,
	&InternalEnumerator_1_t3009____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3009____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3009_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3009____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3009_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16444_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3009_PropertyInfos[] =
{
	&InternalEnumerator_1_t3009____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3009____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3009_InternalEnumerator_1__ctor_m16440_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16440_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16440_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m16440/* method */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3009_InternalEnumerator_1__ctor_m16440_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16440_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IntPtr>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441/* method */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16442_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IntPtr>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16442_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m16442/* method */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16442_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16443_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IntPtr>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16443_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m16443/* method */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16443_GenericMethod/* genericMethod */

};
extern Il2CppType IntPtr_t173_0_0_0;
extern void* RuntimeInvoker_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16444_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IntPtr>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16444_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m16444/* method */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* declaring_type */
	, &IntPtr_t173_0_0_0/* return_type */
	, RuntimeInvoker_IntPtr_t173/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m16444_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3009_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16440_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441_MethodInfo,
	&InternalEnumerator_1_Dispose_m16442_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16443_MethodInfo,
	&InternalEnumerator_1_get_Current_m16444_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3009_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16441_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16443_MethodInfo,
	&InternalEnumerator_1_Dispose_m16442_MethodInfo,
	&InternalEnumerator_1_get_Current_m16444_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3009_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4470_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3009_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4470_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3009_0_0_0;
extern Il2CppType InternalEnumerator_1_t3009_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3009_GenericClass;
TypeInfo InternalEnumerator_1_t3009_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3009_MethodInfos/* methods */
	, InternalEnumerator_1_t3009_PropertyInfos/* properties */
	, InternalEnumerator_1_t3009_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3009_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3009_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3009_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3009_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3009_1_0_0/* this_arg */
	, InternalEnumerator_1_t3009_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3009_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3009)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5740_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IntPtr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IntPtr>
extern MethodInfo ICollection_1_get_Count_m30048_MethodInfo;
static PropertyInfo ICollection_1_t5740____Count_PropertyInfo = 
{
	&ICollection_1_t5740_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30048_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30049_MethodInfo;
static PropertyInfo ICollection_1_t5740____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5740_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30049_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5740_PropertyInfos[] =
{
	&ICollection_1_t5740____Count_PropertyInfo,
	&ICollection_1_t5740____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30048_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IntPtr>::get_Count()
MethodInfo ICollection_1_get_Count_m30048_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30048_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30049_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30049_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30049_GenericMethod/* genericMethod */

};
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo ICollection_1_t5740_ICollection_1_Add_m30050_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30050_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Add(T)
MethodInfo ICollection_1_Add_m30050_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_IntPtr_t173/* invoker_method */
	, ICollection_1_t5740_ICollection_1_Add_m30050_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30050_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30051_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::Clear()
MethodInfo ICollection_1_Clear_m30051_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30051_GenericMethod/* genericMethod */

};
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo ICollection_1_t5740_ICollection_1_Contains_m30052_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30052_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Contains(T)
MethodInfo ICollection_1_Contains_m30052_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_IntPtr_t173/* invoker_method */
	, ICollection_1_t5740_ICollection_1_Contains_m30052_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30052_GenericMethod/* genericMethod */

};
extern Il2CppType IntPtrU5BU5D_t504_0_0_0;
extern Il2CppType IntPtrU5BU5D_t504_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5740_ICollection_1_CopyTo_m30053_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IntPtrU5BU5D_t504_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30053_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IntPtr>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30053_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5740_ICollection_1_CopyTo_m30053_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30053_GenericMethod/* genericMethod */

};
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo ICollection_1_t5740_ICollection_1_Remove_m30054_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30054_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IntPtr>::Remove(T)
MethodInfo ICollection_1_Remove_m30054_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_IntPtr_t173/* invoker_method */
	, ICollection_1_t5740_ICollection_1_Remove_m30054_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30054_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5740_MethodInfos[] =
{
	&ICollection_1_get_Count_m30048_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30049_MethodInfo,
	&ICollection_1_Add_m30050_MethodInfo,
	&ICollection_1_Clear_m30051_MethodInfo,
	&ICollection_1_Contains_m30052_MethodInfo,
	&ICollection_1_CopyTo_m30053_MethodInfo,
	&ICollection_1_Remove_m30054_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5742_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5740_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5742_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5740_0_0_0;
extern Il2CppType ICollection_1_t5740_1_0_0;
struct ICollection_1_t5740;
extern Il2CppGenericClass ICollection_1_t5740_GenericClass;
TypeInfo ICollection_1_t5740_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5740_MethodInfos/* methods */
	, ICollection_1_t5740_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5740_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5740_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5740_0_0_0/* byval_arg */
	, &ICollection_1_t5740_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5740_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IntPtr>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IntPtr>
extern Il2CppType IEnumerator_1_t4470_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30055_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IntPtr>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30055_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5742_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4470_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30055_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5742_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30055_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5742_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5742_0_0_0;
extern Il2CppType IEnumerable_1_t5742_1_0_0;
struct IEnumerable_1_t5742;
extern Il2CppGenericClass IEnumerable_1_t5742_GenericClass;
TypeInfo IEnumerable_1_t5742_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5742_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5742_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5742_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5742_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5742_0_0_0/* byval_arg */
	, &IEnumerable_1_t5742_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5742_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5741_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IntPtr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IntPtr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IntPtr>
extern MethodInfo IList_1_get_Item_m30056_MethodInfo;
extern MethodInfo IList_1_set_Item_m30057_MethodInfo;
static PropertyInfo IList_1_t5741____Item_PropertyInfo = 
{
	&IList_1_t5741_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30056_MethodInfo/* get */
	, &IList_1_set_Item_m30057_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5741_PropertyInfos[] =
{
	&IList_1_t5741____Item_PropertyInfo,
	NULL
};
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo IList_1_t5741_IList_1_IndexOf_m30058_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30058_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IntPtr>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30058_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5741_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_IntPtr_t173/* invoker_method */
	, IList_1_t5741_IList_1_IndexOf_m30058_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30058_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo IList_1_t5741_IList_1_Insert_m30059_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30059_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30059_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5741_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_IntPtr_t173/* invoker_method */
	, IList_1_t5741_IList_1_Insert_m30059_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30059_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5741_IList_1_RemoveAt_m30060_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30060_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30060_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5741_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5741_IList_1_RemoveAt_m30060_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30060_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5741_IList_1_get_Item_m30056_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IntPtr_t173_0_0_0;
extern void* RuntimeInvoker_IntPtr_t173_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30056_GenericMethod;
// T System.Collections.Generic.IList`1<System.IntPtr>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30056_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5741_il2cpp_TypeInfo/* declaring_type */
	, &IntPtr_t173_0_0_0/* return_type */
	, RuntimeInvoker_IntPtr_t173_Int32_t18/* invoker_method */
	, IList_1_t5741_IList_1_get_Item_m30056_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30056_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo IList_1_t5741_IList_1_set_Item_m30057_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30057_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IntPtr>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30057_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5741_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_IntPtr_t173/* invoker_method */
	, IList_1_t5741_IList_1_set_Item_m30057_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30057_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5741_MethodInfos[] =
{
	&IList_1_IndexOf_m30058_MethodInfo,
	&IList_1_Insert_m30059_MethodInfo,
	&IList_1_RemoveAt_m30060_MethodInfo,
	&IList_1_get_Item_m30056_MethodInfo,
	&IList_1_set_Item_m30057_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5741_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5740_il2cpp_TypeInfo,
	&IEnumerable_1_t5742_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5741_0_0_0;
extern Il2CppType IList_1_t5741_1_0_0;
struct IList_1_t5741;
extern Il2CppGenericClass IList_1_t5741_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5741_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5741_MethodInfos/* methods */
	, IList_1_t5741_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5741_il2cpp_TypeInfo/* element_class */
	, IList_1_t5741_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5741_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5741_0_0_0/* byval_arg */
	, &IList_1_t5741_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5741_GenericClass/* generic_class */
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
extern TypeInfo ICollection_1_t5743_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>
extern MethodInfo ICollection_1_get_Count_m30061_MethodInfo;
static PropertyInfo ICollection_1_t5743____Count_PropertyInfo = 
{
	&ICollection_1_t5743_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30061_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30062_MethodInfo;
static PropertyInfo ICollection_1_t5743____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5743_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30062_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5743_PropertyInfos[] =
{
	&ICollection_1_t5743____Count_PropertyInfo,
	&ICollection_1_t5743____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30061_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_Count()
MethodInfo ICollection_1_get_Count_m30061_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30061_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30062_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30062_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30062_GenericMethod/* genericMethod */

};
extern Il2CppType ISerializable_t351_0_0_0;
extern Il2CppType ISerializable_t351_0_0_0;
static ParameterInfo ICollection_1_t5743_ICollection_1_Add_m30063_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ISerializable_t351_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30063_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Add(T)
MethodInfo ICollection_1_Add_m30063_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5743_ICollection_1_Add_m30063_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30063_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30064_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Clear()
MethodInfo ICollection_1_Clear_m30064_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30064_GenericMethod/* genericMethod */

};
extern Il2CppType ISerializable_t351_0_0_0;
static ParameterInfo ICollection_1_t5743_ICollection_1_Contains_m30065_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ISerializable_t351_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30065_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Contains(T)
MethodInfo ICollection_1_Contains_m30065_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5743_ICollection_1_Contains_m30065_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30065_GenericMethod/* genericMethod */

};
extern Il2CppType ISerializableU5BU5D_t3592_0_0_0;
extern Il2CppType ISerializableU5BU5D_t3592_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5743_ICollection_1_CopyTo_m30066_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ISerializableU5BU5D_t3592_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30066_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30066_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5743_ICollection_1_CopyTo_m30066_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30066_GenericMethod/* genericMethod */

};
extern Il2CppType ISerializable_t351_0_0_0;
static ParameterInfo ICollection_1_t5743_ICollection_1_Remove_m30067_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ISerializable_t351_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30067_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ISerializable>::Remove(T)
MethodInfo ICollection_1_Remove_m30067_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5743_ICollection_1_Remove_m30067_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30067_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5743_MethodInfos[] =
{
	&ICollection_1_get_Count_m30061_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30062_MethodInfo,
	&ICollection_1_Add_m30063_MethodInfo,
	&ICollection_1_Clear_m30064_MethodInfo,
	&ICollection_1_Contains_m30065_MethodInfo,
	&ICollection_1_CopyTo_m30066_MethodInfo,
	&ICollection_1_Remove_m30067_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5745_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5743_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5745_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5743_0_0_0;
extern Il2CppType ICollection_1_t5743_1_0_0;
struct ICollection_1_t5743;
extern Il2CppGenericClass ICollection_1_t5743_GenericClass;
TypeInfo ICollection_1_t5743_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5743_MethodInfos/* methods */
	, ICollection_1_t5743_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5743_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5743_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5743_0_0_0/* byval_arg */
	, &ICollection_1_t5743_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5743_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ISerializable>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ISerializable>
extern Il2CppType IEnumerator_1_t4472_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30068_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ISerializable>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30068_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5745_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4472_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30068_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5745_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30068_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5745_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5745_0_0_0;
extern Il2CppType IEnumerable_1_t5745_1_0_0;
struct IEnumerable_1_t5745;
extern Il2CppGenericClass IEnumerable_1_t5745_GenericClass;
TypeInfo IEnumerable_1_t5745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5745_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5745_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5745_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5745_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5745_0_0_0/* byval_arg */
	, &IEnumerable_1_t5745_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5745_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4472_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ISerializable>
extern MethodInfo IEnumerator_1_get_Current_m30069_MethodInfo;
static PropertyInfo IEnumerator_1_t4472____Current_PropertyInfo = 
{
	&IEnumerator_1_t4472_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30069_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4472_PropertyInfos[] =
{
	&IEnumerator_1_t4472____Current_PropertyInfo,
	NULL
};
extern Il2CppType ISerializable_t351_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30069_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30069_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4472_il2cpp_TypeInfo/* declaring_type */
	, &ISerializable_t351_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m30069_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4472_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30069_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4472_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4472_0_0_0;
extern Il2CppType IEnumerator_1_t4472_1_0_0;
struct IEnumerator_1_t4472;
extern Il2CppGenericClass IEnumerator_1_t4472_GenericClass;
TypeInfo IEnumerator_1_t4472_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4472_MethodInfos/* methods */
	, IEnumerator_1_t4472_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4472_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4472_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4472_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4472_0_0_0/* byval_arg */
	, &IEnumerator_1_t4472_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4472_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_229.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3010_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_229MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m16449_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisISerializable_t351_m22824_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ISerializable>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ISerializable>(System.Int32)
#define Array_InternalArray__get_Item_TisISerializable_t351_m22824(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3010____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3010, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3010____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3010, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3010_FieldInfos[] =
{
	&InternalEnumerator_1_t3010____array_0_FieldInfo,
	&InternalEnumerator_1_t3010____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16446_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3010____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3010_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16446_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3010____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3010_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16449_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3010_PropertyInfos[] =
{
	&InternalEnumerator_1_t3010____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3010____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3010_InternalEnumerator_1__ctor_m16445_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16445_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16445_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3010_InternalEnumerator_1__ctor_m16445_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16445_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16446_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16446_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16446_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16447_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16447_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16447_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16448_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16448_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16448_GenericMethod/* genericMethod */

};
extern Il2CppType ISerializable_t351_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16449_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ISerializable>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16449_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* declaring_type */
	, &ISerializable_t351_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16449_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3010_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16445_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16446_MethodInfo,
	&InternalEnumerator_1_Dispose_m16447_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16448_MethodInfo,
	&InternalEnumerator_1_get_Current_m16449_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16448_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16447_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3010_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16446_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16448_MethodInfo,
	&InternalEnumerator_1_Dispose_m16447_MethodInfo,
	&InternalEnumerator_1_get_Current_m16449_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3010_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4472_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3010_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4472_il2cpp_TypeInfo, 7},
};
extern TypeInfo ISerializable_t351_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3010_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16449_MethodInfo/* Method Usage */,
	&ISerializable_t351_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisISerializable_t351_m22824_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3010_0_0_0;
extern Il2CppType InternalEnumerator_1_t3010_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3010_GenericClass;
TypeInfo InternalEnumerator_1_t3010_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3010_MethodInfos/* methods */
	, InternalEnumerator_1_t3010_PropertyInfos/* properties */
	, InternalEnumerator_1_t3010_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3010_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3010_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3010_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3010_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3010_1_0_0/* this_arg */
	, InternalEnumerator_1_t3010_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3010_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3010_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3010)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t5744_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>
extern MethodInfo IList_1_get_Item_m30070_MethodInfo;
extern MethodInfo IList_1_set_Item_m30071_MethodInfo;
static PropertyInfo IList_1_t5744____Item_PropertyInfo = 
{
	&IList_1_t5744_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30070_MethodInfo/* get */
	, &IList_1_set_Item_m30071_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5744_PropertyInfos[] =
{
	&IList_1_t5744____Item_PropertyInfo,
	NULL
};
extern Il2CppType ISerializable_t351_0_0_0;
static ParameterInfo IList_1_t5744_IList_1_IndexOf_m30072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ISerializable_t351_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30072_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30072_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5744_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5744_IList_1_IndexOf_m30072_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30072_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ISerializable_t351_0_0_0;
static ParameterInfo IList_1_t5744_IList_1_Insert_m30073_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ISerializable_t351_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30073_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30073_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5744_IList_1_Insert_m30073_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30073_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5744_IList_1_RemoveAt_m30074_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30074_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30074_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5744_IList_1_RemoveAt_m30074_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30074_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5744_IList_1_get_Item_m30070_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ISerializable_t351_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30070_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30070_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5744_il2cpp_TypeInfo/* declaring_type */
	, &ISerializable_t351_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5744_IList_1_get_Item_m30070_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30070_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ISerializable_t351_0_0_0;
static ParameterInfo IList_1_t5744_IList_1_set_Item_m30071_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ISerializable_t351_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30071_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ISerializable>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30071_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5744_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5744_IList_1_set_Item_m30071_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30071_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5744_MethodInfos[] =
{
	&IList_1_IndexOf_m30072_MethodInfo,
	&IList_1_Insert_m30073_MethodInfo,
	&IList_1_RemoveAt_m30074_MethodInfo,
	&IList_1_get_Item_m30070_MethodInfo,
	&IList_1_set_Item_m30071_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5744_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5743_il2cpp_TypeInfo,
	&IEnumerable_1_t5745_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5744_0_0_0;
extern Il2CppType IList_1_t5744_1_0_0;
struct IList_1_t5744;
extern Il2CppGenericClass IList_1_t5744_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5744_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5744_MethodInfos/* methods */
	, IList_1_t5744_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5744_il2cpp_TypeInfo/* element_class */
	, IList_1_t5744_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5744_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5744_0_0_0/* byval_arg */
	, &IList_1_t5744_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5744_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.MonoBehaviour>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_63.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3011_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.MonoBehaviour>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_63MethodDeclarations.h"

// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_65.h"
extern TypeInfo MonoBehaviour_t2_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3012_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_65MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16452_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16454_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.MonoBehaviour>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.MonoBehaviour>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.MonoBehaviour>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3011____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3011_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3011, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3011_FieldInfos[] =
{
	&CachedInvokableCall_1_t3011____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType MonoBehaviour_t2_0_0_0;
extern Il2CppType MonoBehaviour_t2_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3011_CachedInvokableCall_1__ctor_m16450_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &MonoBehaviour_t2_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16450_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.MonoBehaviour>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16450_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3011_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3011_CachedInvokableCall_1__ctor_m16450_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16450_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3011_CachedInvokableCall_1_Invoke_m16451_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16451_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.MonoBehaviour>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16451_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3011_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3011_CachedInvokableCall_1_Invoke_m16451_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16451_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3011_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16450_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16451_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16451_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16455_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3011_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16451_MethodInfo,
	&InvokableCall_1_Find_m16455_MethodInfo,
};
extern Il2CppType UnityAction_1_t3013_0_0_0;
extern TypeInfo UnityAction_1_t3013_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisMonoBehaviour_t2_m22834_MethodInfo;
extern TypeInfo MonoBehaviour_t2_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16457_MethodInfo;
extern TypeInfo MonoBehaviour_t2_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3011_RGCTXData[8] = 
{
	&UnityAction_1_t3013_0_0_0/* Type Usage */,
	&UnityAction_1_t3013_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMonoBehaviour_t2_m22834_MethodInfo/* Method Usage */,
	&MonoBehaviour_t2_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16457_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16452_MethodInfo/* Method Usage */,
	&MonoBehaviour_t2_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16454_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3011_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3011_1_0_0;
struct CachedInvokableCall_1_t3011;
extern Il2CppGenericClass CachedInvokableCall_1_t3011_GenericClass;
TypeInfo CachedInvokableCall_1_t3011_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3011_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3011_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3011_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3011_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3011_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3011_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3011_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3011_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3011_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3011)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_70.h"
extern TypeInfo UnityAction_1_t3013_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_70MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.MonoBehaviour>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.MonoBehaviour>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisMonoBehaviour_t2_m22834(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>
extern Il2CppType UnityAction_1_t3013_0_0_1;
FieldInfo InvokableCall_1_t3012____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3013_0_0_1/* type */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3012, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3012_FieldInfos[] =
{
	&InvokableCall_1_t3012____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3012_InvokableCall_1__ctor_m16452_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16452_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16452_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3012_InvokableCall_1__ctor_m16452_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16452_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3013_0_0_0;
static ParameterInfo InvokableCall_1_t3012_InvokableCall_1__ctor_m16453_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3013_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16453_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16453_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3012_InvokableCall_1__ctor_m16453_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16453_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3012_InvokableCall_1_Invoke_m16454_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16454_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16454_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3012_InvokableCall_1_Invoke_m16454_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16454_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3012_InvokableCall_1_Find_m16455_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16455_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.MonoBehaviour>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16455_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3012_InvokableCall_1_Find_m16455_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16455_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3012_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16452_MethodInfo,
	&InvokableCall_1__ctor_m16453_MethodInfo,
	&InvokableCall_1_Invoke_m16454_MethodInfo,
	&InvokableCall_1_Find_m16455_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3012_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16454_MethodInfo,
	&InvokableCall_1_Find_m16455_MethodInfo,
};
extern TypeInfo UnityAction_1_t3013_il2cpp_TypeInfo;
extern TypeInfo MonoBehaviour_t2_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3012_RGCTXData[5] = 
{
	&UnityAction_1_t3013_0_0_0/* Type Usage */,
	&UnityAction_1_t3013_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisMonoBehaviour_t2_m22834_MethodInfo/* Method Usage */,
	&MonoBehaviour_t2_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16457_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3012_0_0_0;
extern Il2CppType InvokableCall_1_t3012_1_0_0;
struct InvokableCall_1_t3012;
extern Il2CppGenericClass InvokableCall_1_t3012_GenericClass;
TypeInfo InvokableCall_1_t3012_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3012_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3012_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3012_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3012_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3012_0_0_0/* byval_arg */
	, &InvokableCall_1_t3012_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3012_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3012_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3012)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t3013_UnityAction_1__ctor_m16456_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16456_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16456_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t3013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t3013_UnityAction_1__ctor_m16456_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16456_GenericMethod/* genericMethod */

};
extern Il2CppType MonoBehaviour_t2_0_0_0;
static ParameterInfo UnityAction_1_t3013_UnityAction_1_Invoke_m16457_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MonoBehaviour_t2_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16457_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16457_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t3013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3013_UnityAction_1_Invoke_m16457_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16457_GenericMethod/* genericMethod */

};
extern Il2CppType MonoBehaviour_t2_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3013_UnityAction_1_BeginInvoke_m16458_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &MonoBehaviour_t2_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16458_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16458_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t3013_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3013_UnityAction_1_BeginInvoke_m16458_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16458_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t3013_UnityAction_1_EndInvoke_m16459_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16459_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.MonoBehaviour>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16459_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t3013_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3013_UnityAction_1_EndInvoke_m16459_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16459_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3013_MethodInfos[] =
{
	&UnityAction_1__ctor_m16456_MethodInfo,
	&UnityAction_1_Invoke_m16457_MethodInfo,
	&UnityAction_1_BeginInvoke_m16458_MethodInfo,
	&UnityAction_1_EndInvoke_m16459_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16458_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16459_MethodInfo;
static MethodInfo* UnityAction_1_t3013_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16457_MethodInfo,
	&UnityAction_1_BeginInvoke_m16458_MethodInfo,
	&UnityAction_1_EndInvoke_m16459_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3013_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3013_1_0_0;
struct UnityAction_1_t3013;
extern Il2CppGenericClass UnityAction_1_t3013_GenericClass;
TypeInfo UnityAction_1_t3013_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3013_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3013_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3013_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3013_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3013_0_0_0/* byval_arg */
	, &UnityAction_1_t3013_1_0_0/* this_arg */
	, UnityAction_1_t3013_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3013_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3013)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4474_il2cpp_TypeInfo;

// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.TouchPhase>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.TouchPhase>
extern MethodInfo IEnumerator_1_get_Current_m30075_MethodInfo;
static PropertyInfo IEnumerator_1_t4474____Current_PropertyInfo = 
{
	&IEnumerator_1_t4474_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30075_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4474_PropertyInfos[] =
{
	&IEnumerator_1_t4474____Current_PropertyInfo,
	NULL
};
extern Il2CppType TouchPhase_t506_0_0_0;
extern void* RuntimeInvoker_TouchPhase_t506 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30075_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.TouchPhase>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30075_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4474_il2cpp_TypeInfo/* declaring_type */
	, &TouchPhase_t506_0_0_0/* return_type */
	, RuntimeInvoker_TouchPhase_t506/* invoker_method */
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
	, &IEnumerator_1_get_Current_m30075_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4474_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30075_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4474_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4474_0_0_0;
extern Il2CppType IEnumerator_1_t4474_1_0_0;
struct IEnumerator_1_t4474;
extern Il2CppGenericClass IEnumerator_1_t4474_GenericClass;
TypeInfo IEnumerator_1_t4474_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4474_MethodInfos/* methods */
	, IEnumerator_1_t4474_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4474_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4474_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4474_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4474_0_0_0/* byval_arg */
	, &IEnumerator_1_t4474_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4474_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_230.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3014_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_230MethodDeclarations.h"

extern TypeInfo TouchPhase_t506_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16464_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTouchPhase_t506_m22836_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.TouchPhase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.TouchPhase>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTouchPhase_t506_m22836 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m16460_MethodInfo;
 void InternalEnumerator_1__ctor_m16460 (InternalEnumerator_1_t3014 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461 (InternalEnumerator_1_t3014 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m16464(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m16464_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TouchPhase_t506_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m16462_MethodInfo;
 void InternalEnumerator_1_Dispose_m16462 (InternalEnumerator_1_t3014 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m16463_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m16463 (InternalEnumerator_1_t3014 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m4124(L_1, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
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
// T System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m16464 (InternalEnumerator_1_t3014 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4119(L_1, (String_t*) &_stringLiteral1056, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
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
		InvalidOperationException__ctor_m4119(L_3, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4124(L_5, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisTouchPhase_t506_m22836(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTouchPhase_t506_m22836_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3014____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3014, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3014____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3014, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3014_FieldInfos[] =
{
	&InternalEnumerator_1_t3014____array_0_FieldInfo,
	&InternalEnumerator_1_t3014____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3014____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3014_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3014____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3014_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16464_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3014_PropertyInfos[] =
{
	&InternalEnumerator_1_t3014____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3014____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3014_InternalEnumerator_1__ctor_m16460_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16460_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16460_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m16460/* method */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3014_InternalEnumerator_1__ctor_m16460_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16460_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461/* method */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16462_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16462_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m16462/* method */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16462_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16463_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16463_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m16463/* method */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16463_GenericMethod/* genericMethod */

};
extern Il2CppType TouchPhase_t506_0_0_0;
extern void* RuntimeInvoker_TouchPhase_t506 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16464_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.TouchPhase>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16464_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m16464/* method */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* declaring_type */
	, &TouchPhase_t506_0_0_0/* return_type */
	, RuntimeInvoker_TouchPhase_t506/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m16464_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3014_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16460_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461_MethodInfo,
	&InternalEnumerator_1_Dispose_m16462_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16463_MethodInfo,
	&InternalEnumerator_1_get_Current_m16464_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3014_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16461_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16463_MethodInfo,
	&InternalEnumerator_1_Dispose_m16462_MethodInfo,
	&InternalEnumerator_1_get_Current_m16464_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3014_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4474_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3014_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4474_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3014_0_0_0;
extern Il2CppType InternalEnumerator_1_t3014_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3014_GenericClass;
TypeInfo InternalEnumerator_1_t3014_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3014_MethodInfos/* methods */
	, InternalEnumerator_1_t3014_PropertyInfos/* properties */
	, InternalEnumerator_1_t3014_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3014_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3014_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3014_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3014_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3014_1_0_0/* this_arg */
	, InternalEnumerator_1_t3014_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3014_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3014)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5746_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>
extern MethodInfo ICollection_1_get_Count_m30076_MethodInfo;
static PropertyInfo ICollection_1_t5746____Count_PropertyInfo = 
{
	&ICollection_1_t5746_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30076_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30077_MethodInfo;
static PropertyInfo ICollection_1_t5746____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5746_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30077_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5746_PropertyInfos[] =
{
	&ICollection_1_t5746____Count_PropertyInfo,
	&ICollection_1_t5746____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30076_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::get_Count()
MethodInfo ICollection_1_get_Count_m30076_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30076_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30077_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30077_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30077_GenericMethod/* genericMethod */

};
extern Il2CppType TouchPhase_t506_0_0_0;
extern Il2CppType TouchPhase_t506_0_0_0;
static ParameterInfo ICollection_1_t5746_ICollection_1_Add_m30078_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TouchPhase_t506_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30078_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Add(T)
MethodInfo ICollection_1_Add_m30078_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t5746_ICollection_1_Add_m30078_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30078_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30079_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Clear()
MethodInfo ICollection_1_Clear_m30079_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30079_GenericMethod/* genericMethod */

};
extern Il2CppType TouchPhase_t506_0_0_0;
static ParameterInfo ICollection_1_t5746_ICollection_1_Contains_m30080_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TouchPhase_t506_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30080_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Contains(T)
MethodInfo ICollection_1_Contains_m30080_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t5746_ICollection_1_Contains_m30080_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30080_GenericMethod/* genericMethod */

};
extern Il2CppType TouchPhaseU5BU5D_t3806_0_0_0;
extern Il2CppType TouchPhaseU5BU5D_t3806_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5746_ICollection_1_CopyTo_m30081_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TouchPhaseU5BU5D_t3806_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30081_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30081_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5746_ICollection_1_CopyTo_m30081_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30081_GenericMethod/* genericMethod */

};
extern Il2CppType TouchPhase_t506_0_0_0;
static ParameterInfo ICollection_1_t5746_ICollection_1_Remove_m30082_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TouchPhase_t506_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30082_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.TouchPhase>::Remove(T)
MethodInfo ICollection_1_Remove_m30082_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t5746_ICollection_1_Remove_m30082_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30082_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5746_MethodInfos[] =
{
	&ICollection_1_get_Count_m30076_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30077_MethodInfo,
	&ICollection_1_Add_m30078_MethodInfo,
	&ICollection_1_Clear_m30079_MethodInfo,
	&ICollection_1_Contains_m30080_MethodInfo,
	&ICollection_1_CopyTo_m30081_MethodInfo,
	&ICollection_1_Remove_m30082_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5748_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5746_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5748_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5746_0_0_0;
extern Il2CppType ICollection_1_t5746_1_0_0;
struct ICollection_1_t5746;
extern Il2CppGenericClass ICollection_1_t5746_GenericClass;
TypeInfo ICollection_1_t5746_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5746_MethodInfos/* methods */
	, ICollection_1_t5746_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5746_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5746_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5746_0_0_0/* byval_arg */
	, &ICollection_1_t5746_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5746_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.TouchPhase>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.TouchPhase>
extern Il2CppType IEnumerator_1_t4474_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30083_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.TouchPhase>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30083_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5748_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4474_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30083_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5748_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30083_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5748_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5748_0_0_0;
extern Il2CppType IEnumerable_1_t5748_1_0_0;
struct IEnumerable_1_t5748;
extern Il2CppGenericClass IEnumerable_1_t5748_GenericClass;
TypeInfo IEnumerable_1_t5748_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5748_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5748_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5748_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5748_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5748_0_0_0/* byval_arg */
	, &IEnumerable_1_t5748_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5748_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5747_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.TouchPhase>
extern MethodInfo IList_1_get_Item_m30084_MethodInfo;
extern MethodInfo IList_1_set_Item_m30085_MethodInfo;
static PropertyInfo IList_1_t5747____Item_PropertyInfo = 
{
	&IList_1_t5747_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30084_MethodInfo/* get */
	, &IList_1_set_Item_m30085_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5747_PropertyInfos[] =
{
	&IList_1_t5747____Item_PropertyInfo,
	NULL
};
extern Il2CppType TouchPhase_t506_0_0_0;
static ParameterInfo IList_1_t5747_IList_1_IndexOf_m30086_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TouchPhase_t506_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30086_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30086_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5747_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5747_IList_1_IndexOf_m30086_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30086_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TouchPhase_t506_0_0_0;
static ParameterInfo IList_1_t5747_IList_1_Insert_m30087_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TouchPhase_t506_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30087_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30087_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5747_IList_1_Insert_m30087_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30087_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5747_IList_1_RemoveAt_m30088_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30088_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30088_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5747_IList_1_RemoveAt_m30088_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30088_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5747_IList_1_get_Item_m30084_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TouchPhase_t506_0_0_0;
extern void* RuntimeInvoker_TouchPhase_t506_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30084_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30084_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5747_il2cpp_TypeInfo/* declaring_type */
	, &TouchPhase_t506_0_0_0/* return_type */
	, RuntimeInvoker_TouchPhase_t506_Int32_t18/* invoker_method */
	, IList_1_t5747_IList_1_get_Item_m30084_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30084_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TouchPhase_t506_0_0_0;
static ParameterInfo IList_1_t5747_IList_1_set_Item_m30085_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TouchPhase_t506_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30085_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.TouchPhase>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30085_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5747_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5747_IList_1_set_Item_m30085_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30085_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5747_MethodInfos[] =
{
	&IList_1_IndexOf_m30086_MethodInfo,
	&IList_1_Insert_m30087_MethodInfo,
	&IList_1_RemoveAt_m30088_MethodInfo,
	&IList_1_get_Item_m30084_MethodInfo,
	&IList_1_set_Item_m30085_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5747_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5746_il2cpp_TypeInfo,
	&IEnumerable_1_t5748_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5747_0_0_0;
extern Il2CppType IList_1_t5747_1_0_0;
struct IList_1_t5747;
extern Il2CppGenericClass IList_1_t5747_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5747_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5747_MethodInfos/* methods */
	, IList_1_t5747_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5747_il2cpp_TypeInfo/* element_class */
	, IList_1_t5747_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5747_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5747_0_0_0/* byval_arg */
	, &IList_1_t5747_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5747_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4476_il2cpp_TypeInfo;

// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.IMECompositionMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.IMECompositionMode>
extern MethodInfo IEnumerator_1_get_Current_m30089_MethodInfo;
static PropertyInfo IEnumerator_1_t4476____Current_PropertyInfo = 
{
	&IEnumerator_1_t4476_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30089_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4476_PropertyInfos[] =
{
	&IEnumerator_1_t4476____Current_PropertyInfo,
	NULL
};
extern Il2CppType IMECompositionMode_t507_0_0_0;
extern void* RuntimeInvoker_IMECompositionMode_t507 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30089_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.IMECompositionMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30089_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4476_il2cpp_TypeInfo/* declaring_type */
	, &IMECompositionMode_t507_0_0_0/* return_type */
	, RuntimeInvoker_IMECompositionMode_t507/* invoker_method */
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
	, &IEnumerator_1_get_Current_m30089_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4476_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30089_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4476_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4476_0_0_0;
extern Il2CppType IEnumerator_1_t4476_1_0_0;
struct IEnumerator_1_t4476;
extern Il2CppGenericClass IEnumerator_1_t4476_GenericClass;
TypeInfo IEnumerator_1_t4476_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4476_MethodInfos/* methods */
	, IEnumerator_1_t4476_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4476_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4476_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4476_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4476_0_0_0/* byval_arg */
	, &IEnumerator_1_t4476_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4476_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_231.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3015_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_231MethodDeclarations.h"

extern TypeInfo IMECompositionMode_t507_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16469_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIMECompositionMode_t507_m22847_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.IMECompositionMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.IMECompositionMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisIMECompositionMode_t507_m22847 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m16465_MethodInfo;
 void InternalEnumerator_1__ctor_m16465 (InternalEnumerator_1_t3015 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466 (InternalEnumerator_1_t3015 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m16469(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m16469_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&IMECompositionMode_t507_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m16467_MethodInfo;
 void InternalEnumerator_1_Dispose_m16467 (InternalEnumerator_1_t3015 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m16468_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m16468 (InternalEnumerator_1_t3015 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m4124(L_1, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
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
// T System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m16469 (InternalEnumerator_1_t3015 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4119(L_1, (String_t*) &_stringLiteral1056, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
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
		InvalidOperationException__ctor_m4119(L_3, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4124(L_5, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisIMECompositionMode_t507_m22847(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisIMECompositionMode_t507_m22847_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3015____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3015, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3015____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3015, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3015_FieldInfos[] =
{
	&InternalEnumerator_1_t3015____array_0_FieldInfo,
	&InternalEnumerator_1_t3015____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3015____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3015_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3015____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3015_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16469_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3015_PropertyInfos[] =
{
	&InternalEnumerator_1_t3015____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3015____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3015_InternalEnumerator_1__ctor_m16465_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16465_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16465_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m16465/* method */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3015_InternalEnumerator_1__ctor_m16465_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16465_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466/* method */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16467_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16467_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m16467/* method */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16467_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16468_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16468_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m16468/* method */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16468_GenericMethod/* genericMethod */

};
extern Il2CppType IMECompositionMode_t507_0_0_0;
extern void* RuntimeInvoker_IMECompositionMode_t507 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16469_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.IMECompositionMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16469_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m16469/* method */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* declaring_type */
	, &IMECompositionMode_t507_0_0_0/* return_type */
	, RuntimeInvoker_IMECompositionMode_t507/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m16469_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3015_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16465_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466_MethodInfo,
	&InternalEnumerator_1_Dispose_m16467_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16468_MethodInfo,
	&InternalEnumerator_1_get_Current_m16469_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3015_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16466_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16468_MethodInfo,
	&InternalEnumerator_1_Dispose_m16467_MethodInfo,
	&InternalEnumerator_1_get_Current_m16469_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3015_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4476_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3015_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4476_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3015_0_0_0;
extern Il2CppType InternalEnumerator_1_t3015_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3015_GenericClass;
TypeInfo InternalEnumerator_1_t3015_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3015_MethodInfos/* methods */
	, InternalEnumerator_1_t3015_PropertyInfos/* properties */
	, InternalEnumerator_1_t3015_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3015_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3015_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3015_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3015_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3015_1_0_0/* this_arg */
	, InternalEnumerator_1_t3015_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3015_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3015)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5749_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>
extern MethodInfo ICollection_1_get_Count_m30090_MethodInfo;
static PropertyInfo ICollection_1_t5749____Count_PropertyInfo = 
{
	&ICollection_1_t5749_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30090_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30091_MethodInfo;
static PropertyInfo ICollection_1_t5749____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5749_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30091_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5749_PropertyInfos[] =
{
	&ICollection_1_t5749____Count_PropertyInfo,
	&ICollection_1_t5749____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30090_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::get_Count()
MethodInfo ICollection_1_get_Count_m30090_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30090_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30091_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30091_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30091_GenericMethod/* genericMethod */

};
extern Il2CppType IMECompositionMode_t507_0_0_0;
extern Il2CppType IMECompositionMode_t507_0_0_0;
static ParameterInfo ICollection_1_t5749_ICollection_1_Add_m30092_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IMECompositionMode_t507_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30092_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Add(T)
MethodInfo ICollection_1_Add_m30092_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t5749_ICollection_1_Add_m30092_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30092_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30093_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Clear()
MethodInfo ICollection_1_Clear_m30093_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30093_GenericMethod/* genericMethod */

};
extern Il2CppType IMECompositionMode_t507_0_0_0;
static ParameterInfo ICollection_1_t5749_ICollection_1_Contains_m30094_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IMECompositionMode_t507_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30094_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Contains(T)
MethodInfo ICollection_1_Contains_m30094_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t5749_ICollection_1_Contains_m30094_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30094_GenericMethod/* genericMethod */

};
extern Il2CppType IMECompositionModeU5BU5D_t3807_0_0_0;
extern Il2CppType IMECompositionModeU5BU5D_t3807_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5749_ICollection_1_CopyTo_m30095_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IMECompositionModeU5BU5D_t3807_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30095_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30095_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5749_ICollection_1_CopyTo_m30095_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30095_GenericMethod/* genericMethod */

};
extern Il2CppType IMECompositionMode_t507_0_0_0;
static ParameterInfo ICollection_1_t5749_ICollection_1_Remove_m30096_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IMECompositionMode_t507_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30096_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.IMECompositionMode>::Remove(T)
MethodInfo ICollection_1_Remove_m30096_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t5749_ICollection_1_Remove_m30096_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30096_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5749_MethodInfos[] =
{
	&ICollection_1_get_Count_m30090_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30091_MethodInfo,
	&ICollection_1_Add_m30092_MethodInfo,
	&ICollection_1_Clear_m30093_MethodInfo,
	&ICollection_1_Contains_m30094_MethodInfo,
	&ICollection_1_CopyTo_m30095_MethodInfo,
	&ICollection_1_Remove_m30096_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5751_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5749_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5751_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5749_0_0_0;
extern Il2CppType ICollection_1_t5749_1_0_0;
struct ICollection_1_t5749;
extern Il2CppGenericClass ICollection_1_t5749_GenericClass;
TypeInfo ICollection_1_t5749_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5749_MethodInfos/* methods */
	, ICollection_1_t5749_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5749_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5749_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5749_0_0_0/* byval_arg */
	, &ICollection_1_t5749_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5749_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.IMECompositionMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.IMECompositionMode>
extern Il2CppType IEnumerator_1_t4476_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30097_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.IMECompositionMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30097_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5751_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4476_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30097_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5751_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30097_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5751_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5751_0_0_0;
extern Il2CppType IEnumerable_1_t5751_1_0_0;
struct IEnumerable_1_t5751;
extern Il2CppGenericClass IEnumerable_1_t5751_GenericClass;
TypeInfo IEnumerable_1_t5751_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5751_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5751_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5751_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5751_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5751_0_0_0/* byval_arg */
	, &IEnumerable_1_t5751_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5751_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5750_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>
extern MethodInfo IList_1_get_Item_m30098_MethodInfo;
extern MethodInfo IList_1_set_Item_m30099_MethodInfo;
static PropertyInfo IList_1_t5750____Item_PropertyInfo = 
{
	&IList_1_t5750_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30098_MethodInfo/* get */
	, &IList_1_set_Item_m30099_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5750_PropertyInfos[] =
{
	&IList_1_t5750____Item_PropertyInfo,
	NULL
};
extern Il2CppType IMECompositionMode_t507_0_0_0;
static ParameterInfo IList_1_t5750_IList_1_IndexOf_m30100_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IMECompositionMode_t507_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30100_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30100_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5750_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5750_IList_1_IndexOf_m30100_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30100_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IMECompositionMode_t507_0_0_0;
static ParameterInfo IList_1_t5750_IList_1_Insert_m30101_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IMECompositionMode_t507_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30101_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30101_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5750_IList_1_Insert_m30101_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30101_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5750_IList_1_RemoveAt_m30102_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30102_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30102_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5750_IList_1_RemoveAt_m30102_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30102_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5750_IList_1_get_Item_m30098_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IMECompositionMode_t507_0_0_0;
extern void* RuntimeInvoker_IMECompositionMode_t507_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30098_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30098_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5750_il2cpp_TypeInfo/* declaring_type */
	, &IMECompositionMode_t507_0_0_0/* return_type */
	, RuntimeInvoker_IMECompositionMode_t507_Int32_t18/* invoker_method */
	, IList_1_t5750_IList_1_get_Item_m30098_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30098_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IMECompositionMode_t507_0_0_0;
static ParameterInfo IList_1_t5750_IList_1_set_Item_m30099_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IMECompositionMode_t507_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30099_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.IMECompositionMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30099_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5750_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5750_IList_1_set_Item_m30099_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30099_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5750_MethodInfos[] =
{
	&IList_1_IndexOf_m30100_MethodInfo,
	&IList_1_Insert_m30101_MethodInfo,
	&IList_1_RemoveAt_m30102_MethodInfo,
	&IList_1_get_Item_m30098_MethodInfo,
	&IList_1_set_Item_m30099_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5750_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5749_il2cpp_TypeInfo,
	&IEnumerable_1_t5751_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5750_0_0_0;
extern Il2CppType IList_1_t5750_1_0_0;
struct IList_1_t5750;
extern Il2CppGenericClass IList_1_t5750_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5750_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5750_MethodInfos/* methods */
	, IList_1_t5750_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5750_il2cpp_TypeInfo/* element_class */
	, IList_1_t5750_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5750_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5750_0_0_0/* byval_arg */
	, &IList_1_t5750_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5750_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4478_il2cpp_TypeInfo;

// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.HideFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.HideFlags>
extern MethodInfo IEnumerator_1_get_Current_m30103_MethodInfo;
static PropertyInfo IEnumerator_1_t4478____Current_PropertyInfo = 
{
	&IEnumerator_1_t4478_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30103_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4478_PropertyInfos[] =
{
	&IEnumerator_1_t4478____Current_PropertyInfo,
	NULL
};
extern Il2CppType HideFlags_t508_0_0_0;
extern void* RuntimeInvoker_HideFlags_t508 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30103_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.HideFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30103_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4478_il2cpp_TypeInfo/* declaring_type */
	, &HideFlags_t508_0_0_0/* return_type */
	, RuntimeInvoker_HideFlags_t508/* invoker_method */
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
	, &IEnumerator_1_get_Current_m30103_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4478_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30103_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4478_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4478_0_0_0;
extern Il2CppType IEnumerator_1_t4478_1_0_0;
struct IEnumerator_1_t4478;
extern Il2CppGenericClass IEnumerator_1_t4478_GenericClass;
TypeInfo IEnumerator_1_t4478_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4478_MethodInfos/* methods */
	, IEnumerator_1_t4478_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4478_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4478_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4478_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4478_0_0_0/* byval_arg */
	, &IEnumerator_1_t4478_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4478_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.HideFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_232.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3016_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.HideFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_232MethodDeclarations.h"

extern TypeInfo HideFlags_t508_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16474_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHideFlags_t508_m22858_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.HideFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.HideFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHideFlags_t508_m22858 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m16470_MethodInfo;
 void InternalEnumerator_1__ctor_m16470 (InternalEnumerator_1_t3016 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471 (InternalEnumerator_1_t3016 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m16474(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m16474_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HideFlags_t508_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m16472_MethodInfo;
 void InternalEnumerator_1_Dispose_m16472 (InternalEnumerator_1_t3016 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m16473_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m16473 (InternalEnumerator_1_t3016 * __this, MethodInfo* method){
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
		int32_t L_2 = Array_get_Length_m4124(L_1, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
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
// T System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m16474 (InternalEnumerator_1_t3016 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4119(L_1, (String_t*) &_stringLiteral1056, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
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
		InvalidOperationException__ctor_m4119(L_3, (String_t*) &_stringLiteral1057, /*hidden argument*/&InvalidOperationException__ctor_m4119_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m4124(L_5, /*hidden argument*/&Array_get_Length_m4124_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisHideFlags_t508_m22858(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHideFlags_t508_m22858_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.HideFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3016____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3016, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3016____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3016, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3016_FieldInfos[] =
{
	&InternalEnumerator_1_t3016____array_0_FieldInfo,
	&InternalEnumerator_1_t3016____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3016____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3016_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3016____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3016_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16474_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3016_PropertyInfos[] =
{
	&InternalEnumerator_1_t3016____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3016____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3016_InternalEnumerator_1__ctor_m16470_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16470_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16470_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m16470/* method */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3016_InternalEnumerator_1__ctor_m16470_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16470_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471/* method */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16472_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16472_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m16472/* method */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16472_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16473_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16473_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m16473/* method */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16473_GenericMethod/* genericMethod */

};
extern Il2CppType HideFlags_t508_0_0_0;
extern void* RuntimeInvoker_HideFlags_t508 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16474_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.HideFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16474_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m16474/* method */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* declaring_type */
	, &HideFlags_t508_0_0_0/* return_type */
	, RuntimeInvoker_HideFlags_t508/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m16474_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3016_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16470_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471_MethodInfo,
	&InternalEnumerator_1_Dispose_m16472_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16473_MethodInfo,
	&InternalEnumerator_1_get_Current_m16474_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3016_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16471_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16473_MethodInfo,
	&InternalEnumerator_1_Dispose_m16472_MethodInfo,
	&InternalEnumerator_1_get_Current_m16474_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3016_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4478_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3016_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4478_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3016_0_0_0;
extern Il2CppType InternalEnumerator_1_t3016_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3016_GenericClass;
TypeInfo InternalEnumerator_1_t3016_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3016_MethodInfos/* methods */
	, InternalEnumerator_1_t3016_PropertyInfos/* properties */
	, InternalEnumerator_1_t3016_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3016_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3016_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3016_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3016_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3016_1_0_0/* this_arg */
	, InternalEnumerator_1_t3016_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3016_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3016)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5752_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>
extern MethodInfo ICollection_1_get_Count_m30104_MethodInfo;
static PropertyInfo ICollection_1_t5752____Count_PropertyInfo = 
{
	&ICollection_1_t5752_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30104_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30105_MethodInfo;
static PropertyInfo ICollection_1_t5752____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5752_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30105_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5752_PropertyInfos[] =
{
	&ICollection_1_t5752____Count_PropertyInfo,
	&ICollection_1_t5752____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30104_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m30104_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30104_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30105_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30105_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30105_GenericMethod/* genericMethod */

};
extern Il2CppType HideFlags_t508_0_0_0;
extern Il2CppType HideFlags_t508_0_0_0;
static ParameterInfo ICollection_1_t5752_ICollection_1_Add_m30106_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HideFlags_t508_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30106_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Add(T)
MethodInfo ICollection_1_Add_m30106_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t5752_ICollection_1_Add_m30106_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30106_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30107_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Clear()
MethodInfo ICollection_1_Clear_m30107_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30107_GenericMethod/* genericMethod */

};
extern Il2CppType HideFlags_t508_0_0_0;
static ParameterInfo ICollection_1_t5752_ICollection_1_Contains_m30108_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HideFlags_t508_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30108_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m30108_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t5752_ICollection_1_Contains_m30108_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30108_GenericMethod/* genericMethod */

};
extern Il2CppType HideFlagsU5BU5D_t3808_0_0_0;
extern Il2CppType HideFlagsU5BU5D_t3808_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5752_ICollection_1_CopyTo_m30109_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HideFlagsU5BU5D_t3808_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30109_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30109_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5752_ICollection_1_CopyTo_m30109_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30109_GenericMethod/* genericMethod */

};
extern Il2CppType HideFlags_t508_0_0_0;
static ParameterInfo ICollection_1_t5752_ICollection_1_Remove_m30110_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HideFlags_t508_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30110_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.HideFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m30110_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t5752_ICollection_1_Remove_m30110_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30110_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5752_MethodInfos[] =
{
	&ICollection_1_get_Count_m30104_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30105_MethodInfo,
	&ICollection_1_Add_m30106_MethodInfo,
	&ICollection_1_Clear_m30107_MethodInfo,
	&ICollection_1_Contains_m30108_MethodInfo,
	&ICollection_1_CopyTo_m30109_MethodInfo,
	&ICollection_1_Remove_m30110_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5754_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5752_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5754_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5752_0_0_0;
extern Il2CppType ICollection_1_t5752_1_0_0;
struct ICollection_1_t5752;
extern Il2CppGenericClass ICollection_1_t5752_GenericClass;
TypeInfo ICollection_1_t5752_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5752_MethodInfos/* methods */
	, ICollection_1_t5752_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5752_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5752_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5752_0_0_0/* byval_arg */
	, &ICollection_1_t5752_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5752_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.HideFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.HideFlags>
extern Il2CppType IEnumerator_1_t4478_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30111_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.HideFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30111_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5754_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4478_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30111_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5754_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30111_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5754_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5754_0_0_0;
extern Il2CppType IEnumerable_1_t5754_1_0_0;
struct IEnumerable_1_t5754;
extern Il2CppGenericClass IEnumerable_1_t5754_GenericClass;
TypeInfo IEnumerable_1_t5754_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5754_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5754_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5754_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5754_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5754_0_0_0/* byval_arg */
	, &IEnumerable_1_t5754_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5754_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5753_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.HideFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.HideFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.HideFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.HideFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.HideFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.HideFlags>
extern MethodInfo IList_1_get_Item_m30112_MethodInfo;
extern MethodInfo IList_1_set_Item_m30113_MethodInfo;
static PropertyInfo IList_1_t5753____Item_PropertyInfo = 
{
	&IList_1_t5753_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30112_MethodInfo/* get */
	, &IList_1_set_Item_m30113_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5753_PropertyInfos[] =
{
	&IList_1_t5753____Item_PropertyInfo,
	NULL
};
extern Il2CppType HideFlags_t508_0_0_0;
static ParameterInfo IList_1_t5753_IList_1_IndexOf_m30114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HideFlags_t508_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30114_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.HideFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30114_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5753_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5753_IList_1_IndexOf_m30114_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30114_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType HideFlags_t508_0_0_0;
static ParameterInfo IList_1_t5753_IList_1_Insert_m30115_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HideFlags_t508_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30115_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.HideFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30115_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5753_IList_1_Insert_m30115_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30115_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5753_IList_1_RemoveAt_m30116_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30116_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.HideFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30116_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5753_IList_1_RemoveAt_m30116_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30116_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5753_IList_1_get_Item_m30112_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType HideFlags_t508_0_0_0;
extern void* RuntimeInvoker_HideFlags_t508_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30112_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.HideFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30112_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5753_il2cpp_TypeInfo/* declaring_type */
	, &HideFlags_t508_0_0_0/* return_type */
	, RuntimeInvoker_HideFlags_t508_Int32_t18/* invoker_method */
	, IList_1_t5753_IList_1_get_Item_m30112_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30112_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType HideFlags_t508_0_0_0;
static ParameterInfo IList_1_t5753_IList_1_set_Item_m30113_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HideFlags_t508_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30113_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.HideFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30113_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5753_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t5753_IList_1_set_Item_m30113_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30113_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5753_MethodInfos[] =
{
	&IList_1_IndexOf_m30114_MethodInfo,
	&IList_1_Insert_m30115_MethodInfo,
	&IList_1_RemoveAt_m30116_MethodInfo,
	&IList_1_get_Item_m30112_MethodInfo,
	&IList_1_set_Item_m30113_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5753_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5752_il2cpp_TypeInfo,
	&IEnumerable_1_t5754_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5753_0_0_0;
extern Il2CppType IList_1_t5753_1_0_0;
struct IList_1_t5753;
extern Il2CppGenericClass IList_1_t5753_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5753_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5753_MethodInfos/* methods */
	, IList_1_t5753_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5753_il2cpp_TypeInfo/* element_class */
	, IList_1_t5753_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5753_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5753_0_0_0/* byval_arg */
	, &IList_1_t5753_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5753_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_64.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3017_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_64MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_66.h"
extern TypeInfo Object_t185_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3018_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Object>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_66MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16477_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16479_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3017____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3017_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3017, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3017_FieldInfos[] =
{
	&CachedInvokableCall_1_t3017____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Object_t185_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3017_CachedInvokableCall_1__ctor_m16475_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16475_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16475_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3017_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3017_CachedInvokableCall_1__ctor_m16475_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16475_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3017_CachedInvokableCall_1_Invoke_m16476_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16476_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Object>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16476_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3017_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3017_CachedInvokableCall_1_Invoke_m16476_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16476_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3017_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16475_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16476_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16476_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16480_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3017_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16476_MethodInfo,
	&InvokableCall_1_Find_m16480_MethodInfo,
};
extern Il2CppType UnityAction_1_t3019_0_0_0;
extern TypeInfo UnityAction_1_t3019_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisObject_t185_m22868_MethodInfo;
extern TypeInfo Object_t185_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16482_MethodInfo;
extern TypeInfo Object_t185_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3017_RGCTXData[8] = 
{
	&UnityAction_1_t3019_0_0_0/* Type Usage */,
	&UnityAction_1_t3019_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisObject_t185_m22868_MethodInfo/* Method Usage */,
	&Object_t185_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16482_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16477_MethodInfo/* Method Usage */,
	&Object_t185_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16479_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3017_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3017_1_0_0;
struct CachedInvokableCall_1_t3017;
extern Il2CppGenericClass CachedInvokableCall_1_t3017_GenericClass;
TypeInfo CachedInvokableCall_1_t3017_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3017_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3017_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3017_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3017_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3017_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3017_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3017_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3017_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3017_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3017)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_71.h"
extern TypeInfo UnityAction_1_t3019_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_71MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Object>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t185_m22868(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Object>
extern Il2CppType UnityAction_1_t3019_0_0_1;
FieldInfo InvokableCall_1_t3018____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3019_0_0_1/* type */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3018, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3018_FieldInfos[] =
{
	&InvokableCall_1_t3018____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3018_InvokableCall_1__ctor_m16477_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16477_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16477_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3018_InvokableCall_1__ctor_m16477_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16477_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3019_0_0_0;
static ParameterInfo InvokableCall_1_t3018_InvokableCall_1__ctor_m16478_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3019_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16478_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16478_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3018_InvokableCall_1__ctor_m16478_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16478_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3018_InvokableCall_1_Invoke_m16479_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16479_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16479_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3018_InvokableCall_1_Invoke_m16479_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16479_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3018_InvokableCall_1_Find_m16480_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16480_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Object>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16480_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3018_InvokableCall_1_Find_m16480_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16480_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3018_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16477_MethodInfo,
	&InvokableCall_1__ctor_m16478_MethodInfo,
	&InvokableCall_1_Invoke_m16479_MethodInfo,
	&InvokableCall_1_Find_m16480_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3018_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16479_MethodInfo,
	&InvokableCall_1_Find_m16480_MethodInfo,
};
extern TypeInfo UnityAction_1_t3019_il2cpp_TypeInfo;
extern TypeInfo Object_t185_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3018_RGCTXData[5] = 
{
	&UnityAction_1_t3019_0_0_0/* Type Usage */,
	&UnityAction_1_t3019_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisObject_t185_m22868_MethodInfo/* Method Usage */,
	&Object_t185_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16482_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3018_0_0_0;
extern Il2CppType InvokableCall_1_t3018_1_0_0;
struct InvokableCall_1_t3018;
extern Il2CppGenericClass InvokableCall_1_t3018_GenericClass;
TypeInfo InvokableCall_1_t3018_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3018_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3018_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3018_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3018_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3018_0_0_0/* byval_arg */
	, &InvokableCall_1_t3018_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3018_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3018_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3018)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Object>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Object>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Object>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t3019_UnityAction_1__ctor_m16481_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16481_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16481_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t3019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t3019_UnityAction_1__ctor_m16481_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16481_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t185_0_0_0;
static ParameterInfo UnityAction_1_t3019_UnityAction_1_Invoke_m16482_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16482_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Object>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16482_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t3019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3019_UnityAction_1_Invoke_m16482_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16482_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3019_UnityAction_1_BeginInvoke_m16483_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16483_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Object>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16483_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t3019_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3019_UnityAction_1_BeginInvoke_m16483_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16483_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t3019_UnityAction_1_EndInvoke_m16484_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16484_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Object>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16484_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t3019_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3019_UnityAction_1_EndInvoke_m16484_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16484_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3019_MethodInfos[] =
{
	&UnityAction_1__ctor_m16481_MethodInfo,
	&UnityAction_1_Invoke_m16482_MethodInfo,
	&UnityAction_1_BeginInvoke_m16483_MethodInfo,
	&UnityAction_1_EndInvoke_m16484_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16483_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16484_MethodInfo;
static MethodInfo* UnityAction_1_t3019_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16482_MethodInfo,
	&UnityAction_1_BeginInvoke_m16483_MethodInfo,
	&UnityAction_1_EndInvoke_m16484_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3019_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3019_1_0_0;
struct UnityAction_1_t3019;
extern Il2CppGenericClass UnityAction_1_t3019_GenericClass;
TypeInfo UnityAction_1_t3019_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3019_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3019_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3019_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3019_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3019_0_0_0/* byval_arg */
	, &UnityAction_1_t3019_1_0_0/* this_arg */
	, UnityAction_1_t3019_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3019_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3019)/* instance_size */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_65.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3020_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_65MethodDeclarations.h"

// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_67.h"
extern TypeInfo Component_t248_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3021_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_67MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16487_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16489_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3020____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3020_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3020, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3020_FieldInfos[] =
{
	&CachedInvokableCall_1_t3020____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Component_t248_0_0_0;
extern Il2CppType Component_t248_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3020_CachedInvokableCall_1__ctor_m16485_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Component_t248_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16485_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16485_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3020_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3020_CachedInvokableCall_1__ctor_m16485_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16485_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3020_CachedInvokableCall_1_Invoke_m16486_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16486_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Component>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16486_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3020_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3020_CachedInvokableCall_1_Invoke_m16486_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16486_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3020_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16485_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16486_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16486_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16490_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3020_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16486_MethodInfo,
	&InvokableCall_1_Find_m16490_MethodInfo,
};
extern Il2CppType UnityAction_1_t244_0_0_0;
extern TypeInfo UnityAction_1_t244_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisComponent_t248_m22869_MethodInfo;
extern TypeInfo Component_t248_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m1989_MethodInfo;
extern TypeInfo Component_t248_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3020_RGCTXData[8] = 
{
	&UnityAction_1_t244_0_0_0/* Type Usage */,
	&UnityAction_1_t244_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisComponent_t248_m22869_MethodInfo/* Method Usage */,
	&Component_t248_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m1989_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16487_MethodInfo/* Method Usage */,
	&Component_t248_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16489_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3020_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3020_1_0_0;
struct CachedInvokableCall_1_t3020;
extern Il2CppGenericClass CachedInvokableCall_1_t3020_GenericClass;
TypeInfo CachedInvokableCall_1_t3020_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3020_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3020_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3020_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3020_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3020_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3020_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3020_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3020_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3020_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3020)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3.h"
extern TypeInfo UnityAction_1_t244_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_3MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Component>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Component>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisComponent_t248_m22869(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Component>
extern Il2CppType UnityAction_1_t244_0_0_1;
FieldInfo InvokableCall_1_t3021____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t244_0_0_1/* type */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3021, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3021_FieldInfos[] =
{
	&InvokableCall_1_t3021____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3021_InvokableCall_1__ctor_m16487_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16487_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16487_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3021_InvokableCall_1__ctor_m16487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16487_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t244_0_0_0;
static ParameterInfo InvokableCall_1_t3021_InvokableCall_1__ctor_m16488_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t244_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16488_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16488_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3021_InvokableCall_1__ctor_m16488_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16488_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3021_InvokableCall_1_Invoke_m16489_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16489_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16489_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3021_InvokableCall_1_Invoke_m16489_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16489_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3021_InvokableCall_1_Find_m16490_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16490_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Component>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16490_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3021_InvokableCall_1_Find_m16490_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16490_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3021_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16487_MethodInfo,
	&InvokableCall_1__ctor_m16488_MethodInfo,
	&InvokableCall_1_Invoke_m16489_MethodInfo,
	&InvokableCall_1_Find_m16490_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3021_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16489_MethodInfo,
	&InvokableCall_1_Find_m16490_MethodInfo,
};
extern TypeInfo UnityAction_1_t244_il2cpp_TypeInfo;
extern TypeInfo Component_t248_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3021_RGCTXData[5] = 
{
	&UnityAction_1_t244_0_0_0/* Type Usage */,
	&UnityAction_1_t244_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisComponent_t248_m22869_MethodInfo/* Method Usage */,
	&Component_t248_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m1989_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3021_0_0_0;
extern Il2CppType InvokableCall_1_t3021_1_0_0;
struct InvokableCall_1_t3021;
extern Il2CppGenericClass InvokableCall_1_t3021_GenericClass;
TypeInfo InvokableCall_1_t3021_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3021_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3021_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3021_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3021_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3021_0_0_0/* byval_arg */
	, &InvokableCall_1_t3021_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3021_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3021_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3021)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4480_il2cpp_TypeInfo;

// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>
extern MethodInfo IEnumerator_1_get_Current_m30117_MethodInfo;
static PropertyInfo IEnumerator_1_t4480____Current_PropertyInfo = 
{
	&IEnumerator_1_t4480_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30117_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4480_PropertyInfos[] =
{
	&IEnumerator_1_t4480____Current_PropertyInfo,
	NULL
};
extern Il2CppType GameObject_t6_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30117_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.GameObject>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30117_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4480_il2cpp_TypeInfo/* declaring_type */
	, &GameObject_t6_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m30117_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4480_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30117_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4480_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4480_0_0_0;
extern Il2CppType IEnumerator_1_t4480_1_0_0;
struct IEnumerator_1_t4480;
extern Il2CppGenericClass IEnumerator_1_t4480_GenericClass;
TypeInfo IEnumerator_1_t4480_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4480_MethodInfos/* methods */
	, IEnumerator_1_t4480_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4480_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4480_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4480_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4480_0_0_0/* byval_arg */
	, &IEnumerator_1_t4480_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4480_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.GameObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_233.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3022_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.GameObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_233MethodDeclarations.h"

extern TypeInfo GameObject_t6_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16495_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGameObject_t6_m22871_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.GameObject>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.GameObject>(System.Int32)
#define Array_InternalArray__get_Item_TisGameObject_t6_m22871(__this, p0, method) (GameObject_t6 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.GameObject>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.GameObject>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GameObject>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.GameObject>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.GameObject>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.GameObject>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3022____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3022, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3022____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3022, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3022_FieldInfos[] =
{
	&InternalEnumerator_1_t3022____array_0_FieldInfo,
	&InternalEnumerator_1_t3022____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16492_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3022____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3022_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16492_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3022____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3022_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16495_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3022_PropertyInfos[] =
{
	&InternalEnumerator_1_t3022____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3022____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3022_InternalEnumerator_1__ctor_m16491_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16491_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GameObject>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16491_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3022_InternalEnumerator_1__ctor_m16491_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16491_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16492_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.GameObject>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16492_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16492_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16493_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.GameObject>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16493_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16493_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16494_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.GameObject>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16494_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16494_GenericMethod/* genericMethod */

};
extern Il2CppType GameObject_t6_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16495_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.GameObject>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16495_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* declaring_type */
	, &GameObject_t6_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16495_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3022_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16491_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16492_MethodInfo,
	&InternalEnumerator_1_Dispose_m16493_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16494_MethodInfo,
	&InternalEnumerator_1_get_Current_m16495_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16494_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16493_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3022_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16492_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16494_MethodInfo,
	&InternalEnumerator_1_Dispose_m16493_MethodInfo,
	&InternalEnumerator_1_get_Current_m16495_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3022_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4480_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3022_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4480_il2cpp_TypeInfo, 7},
};
extern TypeInfo GameObject_t6_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3022_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16495_MethodInfo/* Method Usage */,
	&GameObject_t6_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisGameObject_t6_m22871_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3022_0_0_0;
extern Il2CppType InternalEnumerator_1_t3022_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3022_GenericClass;
TypeInfo InternalEnumerator_1_t3022_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3022_MethodInfos/* methods */
	, InternalEnumerator_1_t3022_PropertyInfos/* properties */
	, InternalEnumerator_1_t3022_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3022_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3022_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3022_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3022_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3022_1_0_0/* this_arg */
	, InternalEnumerator_1_t3022_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3022_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3022_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3022)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5755_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.GameObject>
extern MethodInfo ICollection_1_get_Count_m30118_MethodInfo;
static PropertyInfo ICollection_1_t5755____Count_PropertyInfo = 
{
	&ICollection_1_t5755_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30118_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30119_MethodInfo;
static PropertyInfo ICollection_1_t5755____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5755_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30119_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5755_PropertyInfos[] =
{
	&ICollection_1_t5755____Count_PropertyInfo,
	&ICollection_1_t5755____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30118_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::get_Count()
MethodInfo ICollection_1_get_Count_m30118_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30118_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30119_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30119_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30119_GenericMethod/* genericMethod */

};
extern Il2CppType GameObject_t6_0_0_0;
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo ICollection_1_t5755_ICollection_1_Add_m30120_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30120_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Add(T)
MethodInfo ICollection_1_Add_m30120_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5755_ICollection_1_Add_m30120_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30120_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30121_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Clear()
MethodInfo ICollection_1_Clear_m30121_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30121_GenericMethod/* genericMethod */

};
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo ICollection_1_t5755_ICollection_1_Contains_m30122_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30122_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Contains(T)
MethodInfo ICollection_1_Contains_m30122_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5755_ICollection_1_Contains_m30122_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30122_GenericMethod/* genericMethod */

};
extern Il2CppType GameObjectU5BU5D_t3809_0_0_0;
extern Il2CppType GameObjectU5BU5D_t3809_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5755_ICollection_1_CopyTo_m30123_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GameObjectU5BU5D_t3809_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30123_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30123_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5755_ICollection_1_CopyTo_m30123_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30123_GenericMethod/* genericMethod */

};
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo ICollection_1_t5755_ICollection_1_Remove_m30124_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30124_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.GameObject>::Remove(T)
MethodInfo ICollection_1_Remove_m30124_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5755_ICollection_1_Remove_m30124_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30124_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5755_MethodInfos[] =
{
	&ICollection_1_get_Count_m30118_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30119_MethodInfo,
	&ICollection_1_Add_m30120_MethodInfo,
	&ICollection_1_Clear_m30121_MethodInfo,
	&ICollection_1_Contains_m30122_MethodInfo,
	&ICollection_1_CopyTo_m30123_MethodInfo,
	&ICollection_1_Remove_m30124_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5757_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5755_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5757_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5755_0_0_0;
extern Il2CppType ICollection_1_t5755_1_0_0;
struct ICollection_1_t5755;
extern Il2CppGenericClass ICollection_1_t5755_GenericClass;
TypeInfo ICollection_1_t5755_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5755_MethodInfos/* methods */
	, ICollection_1_t5755_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5755_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5755_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5755_0_0_0/* byval_arg */
	, &ICollection_1_t5755_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5755_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
extern Il2CppType IEnumerator_1_t4480_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30125_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30125_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5757_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4480_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30125_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5757_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30125_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5757_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5757_0_0_0;
extern Il2CppType IEnumerable_1_t5757_1_0_0;
struct IEnumerable_1_t5757;
extern Il2CppGenericClass IEnumerable_1_t5757_GenericClass;
TypeInfo IEnumerable_1_t5757_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5757_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5757_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5757_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5757_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5757_0_0_0/* byval_arg */
	, &IEnumerable_1_t5757_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5757_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5756_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GameObject>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.GameObject>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.GameObject>
extern MethodInfo IList_1_get_Item_m30126_MethodInfo;
extern MethodInfo IList_1_set_Item_m30127_MethodInfo;
static PropertyInfo IList_1_t5756____Item_PropertyInfo = 
{
	&IList_1_t5756_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30126_MethodInfo/* get */
	, &IList_1_set_Item_m30127_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5756_PropertyInfos[] =
{
	&IList_1_t5756____Item_PropertyInfo,
	NULL
};
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo IList_1_t5756_IList_1_IndexOf_m30128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30128_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.GameObject>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30128_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5756_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5756_IList_1_IndexOf_m30128_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30128_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo IList_1_t5756_IList_1_Insert_m30129_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30129_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30129_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5756_IList_1_Insert_m30129_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30129_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5756_IList_1_RemoveAt_m30130_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30130_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30130_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5756_IList_1_RemoveAt_m30130_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30130_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5756_IList_1_get_Item_m30126_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType GameObject_t6_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30126_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.GameObject>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30126_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5756_il2cpp_TypeInfo/* declaring_type */
	, &GameObject_t6_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5756_IList_1_get_Item_m30126_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30126_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo IList_1_t5756_IList_1_set_Item_m30127_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30127_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.GameObject>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30127_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5756_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5756_IList_1_set_Item_m30127_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30127_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5756_MethodInfos[] =
{
	&IList_1_IndexOf_m30128_MethodInfo,
	&IList_1_Insert_m30129_MethodInfo,
	&IList_1_RemoveAt_m30130_MethodInfo,
	&IList_1_get_Item_m30126_MethodInfo,
	&IList_1_set_Item_m30127_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5756_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5755_il2cpp_TypeInfo,
	&IEnumerable_1_t5757_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5756_0_0_0;
extern Il2CppType IList_1_t5756_1_0_0;
struct IList_1_t5756;
extern Il2CppGenericClass IList_1_t5756_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5756_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5756_MethodInfos/* methods */
	, IList_1_t5756_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5756_il2cpp_TypeInfo/* element_class */
	, IList_1_t5756_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5756_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5756_0_0_0/* byval_arg */
	, &IList_1_t5756_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5756_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_66.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3023_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_66MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_68.h"
extern TypeInfo InvokableCall_1_t3024_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_68MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16498_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16500_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3023____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3023_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3023, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3023_FieldInfos[] =
{
	&CachedInvokableCall_1_t3023____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3023_CachedInvokableCall_1__ctor_m16496_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16496_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16496_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3023_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3023_CachedInvokableCall_1__ctor_m16496_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16496_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3023_CachedInvokableCall_1_Invoke_m16497_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16497_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.GameObject>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16497_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3023_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3023_CachedInvokableCall_1_Invoke_m16497_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16497_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3023_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16496_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16497_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16497_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16501_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3023_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16497_MethodInfo,
	&InvokableCall_1_Find_m16501_MethodInfo,
};
extern Il2CppType UnityAction_1_t3025_0_0_0;
extern TypeInfo UnityAction_1_t3025_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisGameObject_t6_m22881_MethodInfo;
extern TypeInfo GameObject_t6_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16503_MethodInfo;
extern TypeInfo GameObject_t6_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3023_RGCTXData[8] = 
{
	&UnityAction_1_t3025_0_0_0/* Type Usage */,
	&UnityAction_1_t3025_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisGameObject_t6_m22881_MethodInfo/* Method Usage */,
	&GameObject_t6_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16503_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16498_MethodInfo/* Method Usage */,
	&GameObject_t6_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16500_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3023_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3023_1_0_0;
struct CachedInvokableCall_1_t3023;
extern Il2CppGenericClass CachedInvokableCall_1_t3023_GenericClass;
TypeInfo CachedInvokableCall_1_t3023_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3023_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3023_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3023_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3023_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3023_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3023_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3023_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3023_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3023_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3023)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_72.h"
extern TypeInfo UnityAction_1_t3025_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_72MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.GameObject>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.GameObject>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisGameObject_t6_m22881(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>
extern Il2CppType UnityAction_1_t3025_0_0_1;
FieldInfo InvokableCall_1_t3024____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3025_0_0_1/* type */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3024, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3024_FieldInfos[] =
{
	&InvokableCall_1_t3024____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3024_InvokableCall_1__ctor_m16498_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16498_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16498_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3024_InvokableCall_1__ctor_m16498_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16498_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3025_0_0_0;
static ParameterInfo InvokableCall_1_t3024_InvokableCall_1__ctor_m16499_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3025_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16499_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16499_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3024_InvokableCall_1__ctor_m16499_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16499_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3024_InvokableCall_1_Invoke_m16500_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16500_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16500_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3024_InvokableCall_1_Invoke_m16500_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16500_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3024_InvokableCall_1_Find_m16501_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16501_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.GameObject>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16501_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3024_InvokableCall_1_Find_m16501_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16501_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3024_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16498_MethodInfo,
	&InvokableCall_1__ctor_m16499_MethodInfo,
	&InvokableCall_1_Invoke_m16500_MethodInfo,
	&InvokableCall_1_Find_m16501_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3024_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16500_MethodInfo,
	&InvokableCall_1_Find_m16501_MethodInfo,
};
extern TypeInfo UnityAction_1_t3025_il2cpp_TypeInfo;
extern TypeInfo GameObject_t6_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3024_RGCTXData[5] = 
{
	&UnityAction_1_t3025_0_0_0/* Type Usage */,
	&UnityAction_1_t3025_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisGameObject_t6_m22881_MethodInfo/* Method Usage */,
	&GameObject_t6_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16503_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3024_0_0_0;
extern Il2CppType InvokableCall_1_t3024_1_0_0;
struct InvokableCall_1_t3024;
extern Il2CppGenericClass InvokableCall_1_t3024_GenericClass;
TypeInfo InvokableCall_1_t3024_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3024_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3024_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3024_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3024_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3024_0_0_0/* byval_arg */
	, &InvokableCall_1_t3024_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3024_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3024_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3024)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t3025_UnityAction_1__ctor_m16502_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16502_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16502_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t3025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t3025_UnityAction_1__ctor_m16502_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16502_GenericMethod/* genericMethod */

};
extern Il2CppType GameObject_t6_0_0_0;
static ParameterInfo UnityAction_1_t3025_UnityAction_1_Invoke_m16503_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16503_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16503_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t3025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3025_UnityAction_1_Invoke_m16503_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16503_GenericMethod/* genericMethod */

};
extern Il2CppType GameObject_t6_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3025_UnityAction_1_BeginInvoke_m16504_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &GameObject_t6_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16504_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16504_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t3025_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3025_UnityAction_1_BeginInvoke_m16504_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16504_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t3025_UnityAction_1_EndInvoke_m16505_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16505_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.GameObject>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16505_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t3025_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3025_UnityAction_1_EndInvoke_m16505_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16505_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3025_MethodInfos[] =
{
	&UnityAction_1__ctor_m16502_MethodInfo,
	&UnityAction_1_Invoke_m16503_MethodInfo,
	&UnityAction_1_BeginInvoke_m16504_MethodInfo,
	&UnityAction_1_EndInvoke_m16505_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16504_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16505_MethodInfo;
static MethodInfo* UnityAction_1_t3025_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16503_MethodInfo,
	&UnityAction_1_BeginInvoke_m16504_MethodInfo,
	&UnityAction_1_EndInvoke_m16505_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3025_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3025_1_0_0;
struct UnityAction_1_t3025;
extern Il2CppGenericClass UnityAction_1_t3025_GenericClass;
TypeInfo UnityAction_1_t3025_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3025_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3025_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3025_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3025_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3025_0_0_0/* byval_arg */
	, &UnityAction_1_t3025_1_0_0/* this_arg */
	, UnityAction_1_t3025_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3025_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3025)/* instance_size */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_67.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3026_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_67MethodDeclarations.h"

// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_69.h"
extern TypeInfo Transform_t125_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t3027_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_69MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16508_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16510_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3026____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3026_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3026, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3026_FieldInfos[] =
{
	&CachedInvokableCall_1_t3026____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Transform_t125_0_0_0;
extern Il2CppType Transform_t125_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3026_CachedInvokableCall_1__ctor_m16506_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Transform_t125_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16506_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16506_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3026_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3026_CachedInvokableCall_1__ctor_m16506_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16506_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3026_CachedInvokableCall_1_Invoke_m16507_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16507_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Transform>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16507_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3026_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3026_CachedInvokableCall_1_Invoke_m16507_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16507_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3026_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16506_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16507_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16507_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16511_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3026_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16507_MethodInfo,
	&InvokableCall_1_Find_m16511_MethodInfo,
};
extern Il2CppType UnityAction_1_t3028_0_0_0;
extern TypeInfo UnityAction_1_t3028_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTransform_t125_m22882_MethodInfo;
extern TypeInfo Transform_t125_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16513_MethodInfo;
extern TypeInfo Transform_t125_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3026_RGCTXData[8] = 
{
	&UnityAction_1_t3028_0_0_0/* Type Usage */,
	&UnityAction_1_t3028_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTransform_t125_m22882_MethodInfo/* Method Usage */,
	&Transform_t125_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16513_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16508_MethodInfo/* Method Usage */,
	&Transform_t125_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16510_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3026_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3026_1_0_0;
struct CachedInvokableCall_1_t3026;
extern Il2CppGenericClass CachedInvokableCall_1_t3026_GenericClass;
TypeInfo CachedInvokableCall_1_t3026_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3026_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3026_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3026_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3026_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3026_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3026_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3026_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3026_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3026_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3026)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Transform>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_73.h"
extern TypeInfo UnityAction_1_t3028_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Transform>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_73MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Transform>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Transform>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTransform_t125_m22882(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>
extern Il2CppType UnityAction_1_t3028_0_0_1;
FieldInfo InvokableCall_1_t3027____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3028_0_0_1/* type */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3027, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3027_FieldInfos[] =
{
	&InvokableCall_1_t3027____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3027_InvokableCall_1__ctor_m16508_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16508_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16508_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3027_InvokableCall_1__ctor_m16508_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16508_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3028_0_0_0;
static ParameterInfo InvokableCall_1_t3027_InvokableCall_1__ctor_m16509_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3028_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16509_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16509_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3027_InvokableCall_1__ctor_m16509_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16509_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3027_InvokableCall_1_Invoke_m16510_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16510_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16510_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3027_InvokableCall_1_Invoke_m16510_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16510_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3027_InvokableCall_1_Find_m16511_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16511_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Transform>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16511_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3027_InvokableCall_1_Find_m16511_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16511_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3027_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16508_MethodInfo,
	&InvokableCall_1__ctor_m16509_MethodInfo,
	&InvokableCall_1_Invoke_m16510_MethodInfo,
	&InvokableCall_1_Find_m16511_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3027_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16510_MethodInfo,
	&InvokableCall_1_Find_m16511_MethodInfo,
};
extern TypeInfo UnityAction_1_t3028_il2cpp_TypeInfo;
extern TypeInfo Transform_t125_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3027_RGCTXData[5] = 
{
	&UnityAction_1_t3028_0_0_0/* Type Usage */,
	&UnityAction_1_t3028_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTransform_t125_m22882_MethodInfo/* Method Usage */,
	&Transform_t125_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16513_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3027_0_0_0;
extern Il2CppType InvokableCall_1_t3027_1_0_0;
struct InvokableCall_1_t3027;
extern Il2CppGenericClass InvokableCall_1_t3027_GenericClass;
TypeInfo InvokableCall_1_t3027_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3027_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3027_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3027_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3027_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3027_0_0_0/* byval_arg */
	, &InvokableCall_1_t3027_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3027_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3027_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3027)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.Transform>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t173_0_0_0;
static ParameterInfo UnityAction_1_t3028_UnityAction_1__ctor_m16512_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_IntPtr_t173 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m16512_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m16512_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m10476_gshared/* method */
	, &UnityAction_1_t3028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_IntPtr_t173/* invoker_method */
	, UnityAction_1_t3028_UnityAction_1__ctor_m16512_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m16512_GenericMethod/* genericMethod */

};
extern Il2CppType Transform_t125_0_0_0;
static ParameterInfo UnityAction_1_t3028_UnityAction_1_Invoke_m16513_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Transform_t125_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m16513_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m16513_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m10477_gshared/* method */
	, &UnityAction_1_t3028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3028_UnityAction_1_Invoke_m16513_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m16513_GenericMethod/* genericMethod */

};
extern Il2CppType Transform_t125_0_0_0;
extern Il2CppType AsyncCallback_t39_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t3028_UnityAction_1_BeginInvoke_m16514_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &Transform_t125_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t39_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t38_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m16514_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m16514_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m10478_gshared/* method */
	, &UnityAction_1_t3028_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t38_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t3028_UnityAction_1_BeginInvoke_m16514_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m16514_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t38_0_0_0;
static ParameterInfo UnityAction_1_t3028_UnityAction_1_EndInvoke_m16515_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t38_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m16515_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m16515_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m10479_gshared/* method */
	, &UnityAction_1_t3028_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, UnityAction_1_t3028_UnityAction_1_EndInvoke_m16515_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m16515_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t3028_MethodInfos[] =
{
	&UnityAction_1__ctor_m16512_MethodInfo,
	&UnityAction_1_Invoke_m16513_MethodInfo,
	&UnityAction_1_BeginInvoke_m16514_MethodInfo,
	&UnityAction_1_EndInvoke_m16515_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m16514_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m16515_MethodInfo;
static MethodInfo* UnityAction_1_t3028_VTable[] =
{
	&MulticastDelegate_Equals_m1679_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&MulticastDelegate_GetHashCode_m1680_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&Delegate_Clone_m1682_MethodInfo,
	&MulticastDelegate_GetObjectData_m1681_MethodInfo,
	&MulticastDelegate_GetInvocationList_m1683_MethodInfo,
	&MulticastDelegate_CombineImpl_m1684_MethodInfo,
	&MulticastDelegate_RemoveImpl_m1685_MethodInfo,
	&UnityAction_1_Invoke_m16513_MethodInfo,
	&UnityAction_1_BeginInvoke_m16514_MethodInfo,
	&UnityAction_1_EndInvoke_m16515_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t3028_InterfacesOffsets[] = 
{
	{ &ICloneable_t350_il2cpp_TypeInfo, 4},
	{ &ISerializable_t351_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t3028_1_0_0;
struct UnityAction_1_t3028;
extern Il2CppGenericClass UnityAction_1_t3028_GenericClass;
TypeInfo UnityAction_1_t3028_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t3028_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t172_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t3028_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t3028_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t3028_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t3028_0_0_0/* byval_arg */
	, &UnityAction_1_t3028_1_0_0/* this_arg */
	, UnityAction_1_t3028_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t3028_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t3028)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4482_il2cpp_TypeInfo;

// UnityEngine.Collider
#include "UnityEngine_UnityEngine_Collider.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>
extern MethodInfo IEnumerator_1_get_Current_m30131_MethodInfo;
static PropertyInfo IEnumerator_1_t4482____Current_PropertyInfo = 
{
	&IEnumerator_1_t4482_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m30131_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4482_PropertyInfos[] =
{
	&IEnumerator_1_t4482____Current_PropertyInfo,
	NULL
};
extern Il2CppType Collider_t316_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m30131_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Collider>::get_Current()
MethodInfo IEnumerator_1_get_Current_m30131_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4482_il2cpp_TypeInfo/* declaring_type */
	, &Collider_t316_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m30131_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4482_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m30131_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4482_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4482_0_0_0;
extern Il2CppType IEnumerator_1_t4482_1_0_0;
struct IEnumerator_1_t4482;
extern Il2CppGenericClass IEnumerator_1_t4482_GenericClass;
TypeInfo IEnumerator_1_t4482_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4482_MethodInfos/* methods */
	, IEnumerator_1_t4482_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4482_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4482_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4482_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4482_0_0_0/* byval_arg */
	, &IEnumerator_1_t4482_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4482_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.Collider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_234.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3029_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Collider>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_234MethodDeclarations.h"

extern TypeInfo Collider_t316_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m16520_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCollider_t316_m22884_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Collider>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Collider>(System.Int32)
#define Array_InternalArray__get_Item_TisCollider_t316_m22884(__this, p0, method) (Collider_t316 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Collider>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Collider>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.Collider>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Collider>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3029____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3029, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3029____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3029, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3029_FieldInfos[] =
{
	&InternalEnumerator_1_t3029____array_0_FieldInfo,
	&InternalEnumerator_1_t3029____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16517_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3029____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3029_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16517_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3029____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3029_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m16520_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3029_PropertyInfos[] =
{
	&InternalEnumerator_1_t3029____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3029____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3029_InternalEnumerator_1__ctor_m16516_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m16516_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m16516_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3029_InternalEnumerator_1__ctor_m16516_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m16516_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16517_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Collider>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16517_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16517_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m16518_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Collider>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m16518_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m16518_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m16519_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Collider>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m16519_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m16519_GenericMethod/* genericMethod */

};
extern Il2CppType Collider_t316_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m16520_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Collider>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m16520_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* declaring_type */
	, &Collider_t316_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m16520_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3029_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m16516_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16517_MethodInfo,
	&InternalEnumerator_1_Dispose_m16518_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16519_MethodInfo,
	&InternalEnumerator_1_get_Current_m16520_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m16519_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m16518_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3029_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16517_MethodInfo,
	&InternalEnumerator_1_MoveNext_m16519_MethodInfo,
	&InternalEnumerator_1_Dispose_m16518_MethodInfo,
	&InternalEnumerator_1_get_Current_m16520_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3029_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4482_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3029_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4482_il2cpp_TypeInfo, 7},
};
extern TypeInfo Collider_t316_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3029_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m16520_MethodInfo/* Method Usage */,
	&Collider_t316_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCollider_t316_m22884_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3029_0_0_0;
extern Il2CppType InternalEnumerator_1_t3029_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3029_GenericClass;
TypeInfo InternalEnumerator_1_t3029_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3029_MethodInfos/* methods */
	, InternalEnumerator_1_t3029_PropertyInfos/* properties */
	, InternalEnumerator_1_t3029_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3029_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3029_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3029_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3029_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3029_1_0_0/* this_arg */
	, InternalEnumerator_1_t3029_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3029_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3029_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3029)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t5758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Collider>
extern MethodInfo ICollection_1_get_Count_m30132_MethodInfo;
static PropertyInfo ICollection_1_t5758____Count_PropertyInfo = 
{
	&ICollection_1_t5758_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m30132_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m30133_MethodInfo;
static PropertyInfo ICollection_1_t5758____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t5758_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m30133_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t5758_PropertyInfos[] =
{
	&ICollection_1_t5758____Count_PropertyInfo,
	&ICollection_1_t5758____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m30132_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_Count()
MethodInfo ICollection_1_get_Count_m30132_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m30132_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m30133_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m30133_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m30133_GenericMethod/* genericMethod */

};
extern Il2CppType Collider_t316_0_0_0;
extern Il2CppType Collider_t316_0_0_0;
static ParameterInfo ICollection_1_t5758_ICollection_1_Add_m30134_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Collider_t316_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m30134_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Add(T)
MethodInfo ICollection_1_Add_m30134_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t5758_ICollection_1_Add_m30134_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m30134_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m30135_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Clear()
MethodInfo ICollection_1_Clear_m30135_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m30135_GenericMethod/* genericMethod */

};
extern Il2CppType Collider_t316_0_0_0;
static ParameterInfo ICollection_1_t5758_ICollection_1_Contains_m30136_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Collider_t316_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m30136_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Contains(T)
MethodInfo ICollection_1_Contains_m30136_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5758_ICollection_1_Contains_m30136_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m30136_GenericMethod/* genericMethod */

};
extern Il2CppType ColliderU5BU5D_t3810_0_0_0;
extern Il2CppType ColliderU5BU5D_t3810_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t5758_ICollection_1_CopyTo_m30137_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ColliderU5BU5D_t3810_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m30137_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Collider>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m30137_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t5758_ICollection_1_CopyTo_m30137_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m30137_GenericMethod/* genericMethod */

};
extern Il2CppType Collider_t316_0_0_0;
static ParameterInfo ICollection_1_t5758_ICollection_1_Remove_m30138_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Collider_t316_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m30138_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Collider>::Remove(T)
MethodInfo ICollection_1_Remove_m30138_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t5758_ICollection_1_Remove_m30138_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m30138_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t5758_MethodInfos[] =
{
	&ICollection_1_get_Count_m30132_MethodInfo,
	&ICollection_1_get_IsReadOnly_m30133_MethodInfo,
	&ICollection_1_Add_m30134_MethodInfo,
	&ICollection_1_Clear_m30135_MethodInfo,
	&ICollection_1_Contains_m30136_MethodInfo,
	&ICollection_1_CopyTo_m30137_MethodInfo,
	&ICollection_1_Remove_m30138_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t5760_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t5758_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t5760_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t5758_0_0_0;
extern Il2CppType ICollection_1_t5758_1_0_0;
struct ICollection_1_t5758;
extern Il2CppGenericClass ICollection_1_t5758_GenericClass;
TypeInfo ICollection_1_t5758_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t5758_MethodInfos/* methods */
	, ICollection_1_t5758_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t5758_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t5758_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t5758_0_0_0/* byval_arg */
	, &ICollection_1_t5758_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t5758_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>
extern Il2CppType IEnumerator_1_t4482_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m30139_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m30139_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t5760_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4482_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m30139_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t5760_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m30139_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t5760_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t5760_0_0_0;
extern Il2CppType IEnumerable_1_t5760_1_0_0;
struct IEnumerable_1_t5760;
extern Il2CppGenericClass IEnumerable_1_t5760_GenericClass;
TypeInfo IEnumerable_1_t5760_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t5760_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t5760_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t5760_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t5760_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t5760_0_0_0/* byval_arg */
	, &IEnumerable_1_t5760_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t5760_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t5759_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Collider>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Collider>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Collider>
extern MethodInfo IList_1_get_Item_m30140_MethodInfo;
extern MethodInfo IList_1_set_Item_m30141_MethodInfo;
static PropertyInfo IList_1_t5759____Item_PropertyInfo = 
{
	&IList_1_t5759_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m30140_MethodInfo/* get */
	, &IList_1_set_Item_m30141_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t5759_PropertyInfos[] =
{
	&IList_1_t5759____Item_PropertyInfo,
	NULL
};
extern Il2CppType Collider_t316_0_0_0;
static ParameterInfo IList_1_t5759_IList_1_IndexOf_m30142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Collider_t316_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m30142_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Collider>::IndexOf(T)
MethodInfo IList_1_IndexOf_m30142_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t5759_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5759_IList_1_IndexOf_m30142_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m30142_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Collider_t316_0_0_0;
static ParameterInfo IList_1_t5759_IList_1_Insert_m30143_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Collider_t316_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m30143_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m30143_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t5759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5759_IList_1_Insert_m30143_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m30143_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5759_IList_1_RemoveAt_m30144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m30144_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m30144_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t5759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t5759_IList_1_RemoveAt_m30144_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m30144_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t5759_IList_1_get_Item_m30140_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Collider_t316_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m30140_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Collider>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m30140_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t5759_il2cpp_TypeInfo/* declaring_type */
	, &Collider_t316_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t5759_IList_1_get_Item_m30140_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m30140_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Collider_t316_0_0_0;
static ParameterInfo IList_1_t5759_IList_1_set_Item_m30141_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Collider_t316_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m30141_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Collider>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m30141_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t5759_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t5759_IList_1_set_Item_m30141_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m30141_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t5759_MethodInfos[] =
{
	&IList_1_IndexOf_m30142_MethodInfo,
	&IList_1_Insert_m30143_MethodInfo,
	&IList_1_RemoveAt_m30144_MethodInfo,
	&IList_1_get_Item_m30140_MethodInfo,
	&IList_1_set_Item_m30141_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t5759_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t5758_il2cpp_TypeInfo,
	&IEnumerable_1_t5760_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t5759_0_0_0;
extern Il2CppType IList_1_t5759_1_0_0;
struct IList_1_t5759;
extern Il2CppGenericClass IList_1_t5759_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t5759_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t5759_MethodInfos/* methods */
	, IList_1_t5759_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t5759_il2cpp_TypeInfo/* element_class */
	, IList_1_t5759_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t5759_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t5759_0_0_0/* byval_arg */
	, &IList_1_t5759_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t5759_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_68.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t3030_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_68MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_70.h"
extern TypeInfo InvokableCall_1_t3031_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_70MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m16523_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m16525_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>
extern Il2CppType ObjectU5BU5D_t295_0_0_33;
FieldInfo CachedInvokableCall_1_t3030____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t295_0_0_33/* type */
	, &CachedInvokableCall_1_t3030_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t3030, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t3030_FieldInfos[] =
{
	&CachedInvokableCall_1_t3030____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t185_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
extern Il2CppType Collider_t316_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3030_CachedInvokableCall_1__ctor_m16521_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t185_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &Collider_t316_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m16521_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m16521_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m10469_gshared/* method */
	, &CachedInvokableCall_1_t3030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3030_CachedInvokableCall_1__ctor_m16521_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m16521_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo CachedInvokableCall_1_t3030_CachedInvokableCall_1_Invoke_m16522_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m16522_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.Collider>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m16522_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m10471_gshared/* method */
	, &CachedInvokableCall_1_t3030_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, CachedInvokableCall_1_t3030_CachedInvokableCall_1_Invoke_m16522_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m16522_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t3030_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m16521_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16522_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m16522_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m16526_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t3030_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&CachedInvokableCall_1_Invoke_m16522_MethodInfo,
	&InvokableCall_1_Find_m16526_MethodInfo,
};
extern Il2CppType UnityAction_1_t3032_0_0_0;
extern TypeInfo UnityAction_1_t3032_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisCollider_t316_m22894_MethodInfo;
extern TypeInfo Collider_t316_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m16528_MethodInfo;
extern TypeInfo Collider_t316_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t3030_RGCTXData[8] = 
{
	&UnityAction_1_t3032_0_0_0/* Type Usage */,
	&UnityAction_1_t3032_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisCollider_t316_m22894_MethodInfo/* Method Usage */,
	&Collider_t316_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16528_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m16523_MethodInfo/* Method Usage */,
	&Collider_t316_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m16525_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t3030_0_0_0;
extern Il2CppType CachedInvokableCall_1_t3030_1_0_0;
struct CachedInvokableCall_1_t3030;
extern Il2CppGenericClass CachedInvokableCall_1_t3030_GenericClass;
TypeInfo CachedInvokableCall_1_t3030_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t3030_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t3030_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t3030_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t3030_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t3030_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t3030_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t3030_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t3030_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t3030_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t3030)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_74.h"
extern TypeInfo UnityAction_1_t3032_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<UnityEngine.Collider>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_74MethodDeclarations.h"
struct BaseInvokableCall_t581;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Collider>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.Collider>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisCollider_t316_m22894(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m19844_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>
extern Il2CppType UnityAction_1_t3032_0_0_1;
FieldInfo InvokableCall_1_t3031____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t3032_0_0_1/* type */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t3031, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t3031_FieldInfos[] =
{
	&InvokableCall_1_t3031____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3031_InvokableCall_1__ctor_m16523_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16523_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m16523_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10472_gshared/* method */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3031_InvokableCall_1__ctor_m16523_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m16523_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t3032_0_0_0;
static ParameterInfo InvokableCall_1_t3031_InvokableCall_1__ctor_m16524_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t3032_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m16524_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m16524_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m10473_gshared/* method */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3031_InvokableCall_1__ctor_m16524_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m16524_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t295_0_0_0;
static ParameterInfo InvokableCall_1_t3031_InvokableCall_1_Invoke_m16525_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t295_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m16525_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m16525_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m10474_gshared/* method */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InvokableCall_1_t3031_InvokableCall_1_Invoke_m16525_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m16525_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t582_0_0_0;
static ParameterInfo InvokableCall_1_t3031_InvokableCall_1_Find_m16526_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t582_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m16526_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Collider>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m16526_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m10475_gshared/* method */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t3031_InvokableCall_1_Find_m16526_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m16526_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t3031_MethodInfos[] =
{
	&InvokableCall_1__ctor_m16523_MethodInfo,
	&InvokableCall_1__ctor_m16524_MethodInfo,
	&InvokableCall_1_Invoke_m16525_MethodInfo,
	&InvokableCall_1_Find_m16526_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t3031_VTable[] =
{
	&Object_Equals_m1292_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1293_MethodInfo,
	&Object_ToString_m1303_MethodInfo,
	&InvokableCall_1_Invoke_m16525_MethodInfo,
	&InvokableCall_1_Find_m16526_MethodInfo,
};
extern TypeInfo UnityAction_1_t3032_il2cpp_TypeInfo;
extern TypeInfo Collider_t316_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t3031_RGCTXData[5] = 
{
	&UnityAction_1_t3032_0_0_0/* Type Usage */,
	&UnityAction_1_t3032_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisCollider_t316_m22894_MethodInfo/* Method Usage */,
	&Collider_t316_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m16528_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t3031_0_0_0;
extern Il2CppType InvokableCall_1_t3031_1_0_0;
struct InvokableCall_1_t3031;
extern Il2CppGenericClass InvokableCall_1_t3031_GenericClass;
TypeInfo InvokableCall_1_t3031_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t3031_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t3031_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t581_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t3031_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t3031_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t3031_0_0_0/* byval_arg */
	, &InvokableCall_1_t3031_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t3031_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t3031_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t3031)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
