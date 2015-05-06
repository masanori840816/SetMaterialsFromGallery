#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_394.h"
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
extern TypeInfo InternalEnumerator_1_t3365_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_394MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo RuntimeCompatibilityAttribute_t4_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t949_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m18725_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4114_MethodInfo;
extern MethodInfo Array_get_Length_m4119_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t4_m24802_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m19774_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19774(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t4_m24802(__this, p0, method) (RuntimeCompatibilityAttribute_t4 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3365____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3365, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3365____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3365, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3365_FieldInfos[] =
{
	&InternalEnumerator_1_t3365____array_0_FieldInfo,
	&InternalEnumerator_1_t3365____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3365____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3365_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3365____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3365_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18725_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3365_PropertyInfos[] =
{
	&InternalEnumerator_1_t3365____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3365____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3365_InternalEnumerator_1__ctor_m18721_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18721_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18721_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3365_InternalEnumerator_1__ctor_m18721_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18721_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18723_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18723_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18723_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18724_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18724_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18724_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18725_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18725_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t4_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18725_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3365_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18721_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_MethodInfo,
	&InternalEnumerator_1_Dispose_m18723_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18724_MethodInfo,
	&InternalEnumerator_1_get_Current_m18725_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1357_MethodInfo;
extern MethodInfo Object_Finalize_m7_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1358_MethodInfo;
extern MethodInfo ValueType_ToString_m1473_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m18724_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18723_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3365_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18722_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18724_MethodInfo,
	&InternalEnumerator_1_Dispose_m18723_MethodInfo,
	&InternalEnumerator_1_get_Current_m18725_MethodInfo,
};
extern TypeInfo IEnumerator_t112_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t301_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4800_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t3365_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4800_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3365_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4800_il2cpp_TypeInfo, 7},
};
extern TypeInfo RuntimeCompatibilityAttribute_t4_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3365_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18725_MethodInfo/* Method Usage */,
	&RuntimeCompatibilityAttribute_t4_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisRuntimeCompatibilityAttribute_t4_m24802_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3365_0_0_0;
extern Il2CppType InternalEnumerator_1_t3365_1_0_0;
extern TypeInfo ValueType_t296_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t3365_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t3365_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3365_MethodInfos/* methods */
	, InternalEnumerator_1_t3365_PropertyInfos/* properties */
	, InternalEnumerator_1_t3365_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3365_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3365_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3365_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3365_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3365_1_0_0/* this_arg */
	, InternalEnumerator_1_t3365_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3365_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3365_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3365)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6228_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo ICollection_1_get_Count_m32441_MethodInfo;
static PropertyInfo ICollection_1_t6228____Count_PropertyInfo = 
{
	&ICollection_1_t6228_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32441_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32442_MethodInfo;
static PropertyInfo ICollection_1_t6228____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6228_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32442_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6228_PropertyInfos[] =
{
	&ICollection_1_t6228____Count_PropertyInfo,
	&ICollection_1_t6228____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32441_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32441_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32441_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32442_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32442_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32442_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
static ParameterInfo ICollection_1_t6228_ICollection_1_Add_m32443_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t4_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32443_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32443_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6228_ICollection_1_Add_m32443_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32443_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32444_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32444_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32444_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
static ParameterInfo ICollection_1_t6228_ICollection_1_Contains_m32445_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t4_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32445_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32445_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6228_ICollection_1_Contains_m32445_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32445_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttributeU5BU5D_t3632_0_0_0;
extern Il2CppType RuntimeCompatibilityAttributeU5BU5D_t3632_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6228_ICollection_1_CopyTo_m32446_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttributeU5BU5D_t3632_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32446_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32446_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6228_ICollection_1_CopyTo_m32446_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32446_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
static ParameterInfo ICollection_1_t6228_ICollection_1_Remove_m32447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t4_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32447_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32447_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6228_ICollection_1_Remove_m32447_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32447_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6228_MethodInfos[] =
{
	&ICollection_1_get_Count_m32441_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32442_MethodInfo,
	&ICollection_1_Add_m32443_MethodInfo,
	&ICollection_1_Clear_m32444_MethodInfo,
	&ICollection_1_Contains_m32445_MethodInfo,
	&ICollection_1_CopyTo_m32446_MethodInfo,
	&ICollection_1_Remove_m32447_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t641_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6230_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6228_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6230_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6228_0_0_0;
extern Il2CppType ICollection_1_t6228_1_0_0;
struct ICollection_1_t6228;
extern Il2CppGenericClass ICollection_1_t6228_GenericClass;
TypeInfo ICollection_1_t6228_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6228_MethodInfos/* methods */
	, ICollection_1_t6228_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6228_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6228_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6228_0_0_0/* byval_arg */
	, &ICollection_1_t6228_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6228_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern Il2CppType IEnumerator_1_t4800_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32448_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32448_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6230_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4800_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32448_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6230_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32448_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6230_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6230_0_0_0;
extern Il2CppType IEnumerable_1_t6230_1_0_0;
struct IEnumerable_1_t6230;
extern Il2CppGenericClass IEnumerable_1_t6230_GenericClass;
TypeInfo IEnumerable_1_t6230_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6230_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6230_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6230_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6230_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6230_0_0_0/* byval_arg */
	, &IEnumerable_1_t6230_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6230_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6229_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>
extern MethodInfo IList_1_get_Item_m32449_MethodInfo;
extern MethodInfo IList_1_set_Item_m32450_MethodInfo;
static PropertyInfo IList_1_t6229____Item_PropertyInfo = 
{
	&IList_1_t6229_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32449_MethodInfo/* get */
	, &IList_1_set_Item_m32450_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6229_PropertyInfos[] =
{
	&IList_1_t6229____Item_PropertyInfo,
	NULL
};
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
static ParameterInfo IList_1_t6229_IList_1_IndexOf_m32451_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t4_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32451_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32451_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6229_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6229_IList_1_IndexOf_m32451_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32451_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
static ParameterInfo IList_1_t6229_IList_1_Insert_m32452_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t4_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32452_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32452_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6229_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6229_IList_1_Insert_m32452_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32452_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6229_IList_1_RemoveAt_m32453_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32453_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32453_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6229_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6229_IList_1_RemoveAt_m32453_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32453_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6229_IList_1_get_Item_m32449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32449_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32449_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6229_il2cpp_TypeInfo/* declaring_type */
	, &RuntimeCompatibilityAttribute_t4_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6229_IList_1_get_Item_m32449_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32449_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType RuntimeCompatibilityAttribute_t4_0_0_0;
static ParameterInfo IList_1_t6229_IList_1_set_Item_m32450_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RuntimeCompatibilityAttribute_t4_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32450_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.RuntimeCompatibilityAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32450_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6229_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6229_IList_1_set_Item_m32450_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32450_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6229_MethodInfos[] =
{
	&IList_1_IndexOf_m32451_MethodInfo,
	&IList_1_Insert_m32452_MethodInfo,
	&IList_1_RemoveAt_m32453_MethodInfo,
	&IList_1_get_Item_m32449_MethodInfo,
	&IList_1_set_Item_m32450_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6229_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6228_il2cpp_TypeInfo,
	&IEnumerable_1_t6230_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6229_0_0_0;
extern Il2CppType IList_1_t6229_1_0_0;
struct IList_1_t6229;
extern Il2CppGenericClass IList_1_t6229_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6229_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6229_MethodInfos/* methods */
	, IList_1_t6229_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6229_il2cpp_TypeInfo/* element_class */
	, IList_1_t6229_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6229_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6229_0_0_0/* byval_arg */
	, &IList_1_t6229_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6229_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4802_il2cpp_TypeInfo;

// System.Diagnostics.DebuggerHiddenAttribute
#include "mscorlib_System_Diagnostics_DebuggerHiddenAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32454_MethodInfo;
static PropertyInfo IEnumerator_1_t4802____Current_PropertyInfo = 
{
	&IEnumerator_1_t4802_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32454_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4802_PropertyInfos[] =
{
	&IEnumerator_1_t4802____Current_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32454_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32454_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4802_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t319_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32454_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4802_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32454_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4802_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4802_0_0_0;
extern Il2CppType IEnumerator_1_t4802_1_0_0;
struct IEnumerator_1_t4802;
extern Il2CppGenericClass IEnumerator_1_t4802_GenericClass;
TypeInfo IEnumerator_1_t4802_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4802_MethodInfos/* methods */
	, IEnumerator_1_t4802_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4802_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4802_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4802_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4802_0_0_0/* byval_arg */
	, &IEnumerator_1_t4802_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4802_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_395.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3366_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_395MethodDeclarations.h"

extern TypeInfo DebuggerHiddenAttribute_t319_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18730_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t319_m24813_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerHiddenAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.DebuggerHiddenAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t319_m24813(__this, p0, method) (DebuggerHiddenAttribute_t319 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3366____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3366, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3366____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3366, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3366_FieldInfos[] =
{
	&InternalEnumerator_1_t3366____array_0_FieldInfo,
	&InternalEnumerator_1_t3366____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3366____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3366_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3366____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3366_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18730_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3366_PropertyInfos[] =
{
	&InternalEnumerator_1_t3366____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3366____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3366_InternalEnumerator_1__ctor_m18726_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18726_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18726_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3366_InternalEnumerator_1__ctor_m18726_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18726_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18728_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18728_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18728_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18729_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18729_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18729_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18730_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18730_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t319_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18730_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3366_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18726_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_MethodInfo,
	&InternalEnumerator_1_Dispose_m18728_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18729_MethodInfo,
	&InternalEnumerator_1_get_Current_m18730_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18729_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18728_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3366_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18727_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18729_MethodInfo,
	&InternalEnumerator_1_Dispose_m18728_MethodInfo,
	&InternalEnumerator_1_get_Current_m18730_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3366_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4802_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3366_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4802_il2cpp_TypeInfo, 7},
};
extern TypeInfo DebuggerHiddenAttribute_t319_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3366_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18730_MethodInfo/* Method Usage */,
	&DebuggerHiddenAttribute_t319_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDebuggerHiddenAttribute_t319_m24813_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3366_0_0_0;
extern Il2CppType InternalEnumerator_1_t3366_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3366_GenericClass;
TypeInfo InternalEnumerator_1_t3366_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3366_MethodInfos/* methods */
	, InternalEnumerator_1_t3366_PropertyInfos/* properties */
	, InternalEnumerator_1_t3366_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3366_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3366_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3366_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3366_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3366_1_0_0/* this_arg */
	, InternalEnumerator_1_t3366_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3366_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3366_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3366)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6231_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo ICollection_1_get_Count_m32455_MethodInfo;
static PropertyInfo ICollection_1_t6231____Count_PropertyInfo = 
{
	&ICollection_1_t6231_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32455_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32456_MethodInfo;
static PropertyInfo ICollection_1_t6231____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6231_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32456_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6231_PropertyInfos[] =
{
	&ICollection_1_t6231____Count_PropertyInfo,
	&ICollection_1_t6231____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32455_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32455_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32455_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32456_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32456_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32456_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
static ParameterInfo ICollection_1_t6231_ICollection_1_Add_m32457_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t319_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32457_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32457_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6231_ICollection_1_Add_m32457_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32457_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32458_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32458_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32458_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
static ParameterInfo ICollection_1_t6231_ICollection_1_Contains_m32459_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t319_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32459_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32459_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6231_ICollection_1_Contains_m32459_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32459_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttributeU5BU5D_t3633_0_0_0;
extern Il2CppType DebuggerHiddenAttributeU5BU5D_t3633_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6231_ICollection_1_CopyTo_m32460_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttributeU5BU5D_t3633_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32460_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32460_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6231_ICollection_1_CopyTo_m32460_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32460_GenericMethod/* genericMethod */

};
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
static ParameterInfo ICollection_1_t6231_ICollection_1_Remove_m32461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t319_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32461_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.DebuggerHiddenAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32461_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6231_ICollection_1_Remove_m32461_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32461_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6231_MethodInfos[] =
{
	&ICollection_1_get_Count_m32455_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32456_MethodInfo,
	&ICollection_1_Add_m32457_MethodInfo,
	&ICollection_1_Clear_m32458_MethodInfo,
	&ICollection_1_Contains_m32459_MethodInfo,
	&ICollection_1_CopyTo_m32460_MethodInfo,
	&ICollection_1_Remove_m32461_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6233_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6231_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6233_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6231_0_0_0;
extern Il2CppType ICollection_1_t6231_1_0_0;
struct ICollection_1_t6231;
extern Il2CppGenericClass ICollection_1_t6231_GenericClass;
TypeInfo ICollection_1_t6231_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6231_MethodInfos/* methods */
	, ICollection_1_t6231_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6231_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6231_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6231_0_0_0/* byval_arg */
	, &ICollection_1_t6231_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6231_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>
extern Il2CppType IEnumerator_1_t4802_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32462_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.DebuggerHiddenAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32462_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6233_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4802_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32462_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6233_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32462_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6233_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6233_0_0_0;
extern Il2CppType IEnumerable_1_t6233_1_0_0;
struct IEnumerable_1_t6233;
extern Il2CppGenericClass IEnumerable_1_t6233_GenericClass;
TypeInfo IEnumerable_1_t6233_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6233_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6233_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6233_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6233_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6233_0_0_0/* byval_arg */
	, &IEnumerable_1_t6233_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6233_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6232_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>
extern MethodInfo IList_1_get_Item_m32463_MethodInfo;
extern MethodInfo IList_1_set_Item_m32464_MethodInfo;
static PropertyInfo IList_1_t6232____Item_PropertyInfo = 
{
	&IList_1_t6232_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32463_MethodInfo/* get */
	, &IList_1_set_Item_m32464_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6232_PropertyInfos[] =
{
	&IList_1_t6232____Item_PropertyInfo,
	NULL
};
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
static ParameterInfo IList_1_t6232_IList_1_IndexOf_m32465_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t319_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32465_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32465_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6232_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6232_IList_1_IndexOf_m32465_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32465_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
static ParameterInfo IList_1_t6232_IList_1_Insert_m32466_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t319_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32466_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32466_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6232_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6232_IList_1_Insert_m32466_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32466_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6232_IList_1_RemoveAt_m32467_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32467_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32467_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6232_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6232_IList_1_RemoveAt_m32467_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32467_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6232_IList_1_get_Item_m32463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32463_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32463_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6232_il2cpp_TypeInfo/* declaring_type */
	, &DebuggerHiddenAttribute_t319_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6232_IList_1_get_Item_m32463_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32463_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DebuggerHiddenAttribute_t319_0_0_0;
static ParameterInfo IList_1_t6232_IList_1_set_Item_m32464_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DebuggerHiddenAttribute_t319_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32464_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.DebuggerHiddenAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32464_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6232_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6232_IList_1_set_Item_m32464_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32464_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6232_MethodInfos[] =
{
	&IList_1_IndexOf_m32465_MethodInfo,
	&IList_1_Insert_m32466_MethodInfo,
	&IList_1_RemoveAt_m32467_MethodInfo,
	&IList_1_get_Item_m32463_MethodInfo,
	&IList_1_set_Item_m32464_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6232_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6231_il2cpp_TypeInfo,
	&IEnumerable_1_t6233_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6232_0_0_0;
extern Il2CppType IList_1_t6232_1_0_0;
struct IList_1_t6232;
extern Il2CppGenericClass IList_1_t6232_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6232_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6232_MethodInfos/* methods */
	, IList_1_t6232_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6232_il2cpp_TypeInfo/* element_class */
	, IList_1_t6232_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6232_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6232_0_0_0/* byval_arg */
	, &IList_1_t6232_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6232_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4804_il2cpp_TypeInfo;

// System.Reflection.DefaultMemberAttribute
#include "mscorlib_System_Reflection_DefaultMemberAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32468_MethodInfo;
static PropertyInfo IEnumerator_1_t4804____Current_PropertyInfo = 
{
	&IEnumerator_1_t4804_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32468_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4804_PropertyInfos[] =
{
	&IEnumerator_1_t4804____Current_PropertyInfo,
	NULL
};
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32468_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32468_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4804_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t396_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32468_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4804_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32468_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4804_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4804_0_0_0;
extern Il2CppType IEnumerator_1_t4804_1_0_0;
struct IEnumerator_1_t4804;
extern Il2CppGenericClass IEnumerator_1_t4804_GenericClass;
TypeInfo IEnumerator_1_t4804_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4804_MethodInfos/* methods */
	, IEnumerator_1_t4804_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4804_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4804_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4804_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4804_0_0_0/* byval_arg */
	, &IEnumerator_1_t4804_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4804_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_396.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3367_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_396MethodDeclarations.h"

extern TypeInfo DefaultMemberAttribute_t396_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18735_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultMemberAttribute_t396_m24824_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.DefaultMemberAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.DefaultMemberAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDefaultMemberAttribute_t396_m24824(__this, p0, method) (DefaultMemberAttribute_t396 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3367____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3367, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3367____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3367, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3367_FieldInfos[] =
{
	&InternalEnumerator_1_t3367____array_0_FieldInfo,
	&InternalEnumerator_1_t3367____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18732_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3367____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3367_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18732_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3367____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3367_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18735_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3367_PropertyInfos[] =
{
	&InternalEnumerator_1_t3367____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3367____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3367_InternalEnumerator_1__ctor_m18731_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18731_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18731_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3367_InternalEnumerator_1__ctor_m18731_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18731_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18732_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18732_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18732_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18733_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18733_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18733_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18734_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18734_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18734_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18735_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.DefaultMemberAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18735_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t396_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18735_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3367_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18731_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18732_MethodInfo,
	&InternalEnumerator_1_Dispose_m18733_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18734_MethodInfo,
	&InternalEnumerator_1_get_Current_m18735_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18734_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18733_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3367_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18732_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18734_MethodInfo,
	&InternalEnumerator_1_Dispose_m18733_MethodInfo,
	&InternalEnumerator_1_get_Current_m18735_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3367_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4804_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3367_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4804_il2cpp_TypeInfo, 7},
};
extern TypeInfo DefaultMemberAttribute_t396_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3367_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18735_MethodInfo/* Method Usage */,
	&DefaultMemberAttribute_t396_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDefaultMemberAttribute_t396_m24824_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3367_0_0_0;
extern Il2CppType InternalEnumerator_1_t3367_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3367_GenericClass;
TypeInfo InternalEnumerator_1_t3367_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3367_MethodInfos/* methods */
	, InternalEnumerator_1_t3367_PropertyInfos/* properties */
	, InternalEnumerator_1_t3367_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3367_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3367_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3367_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3367_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3367_1_0_0/* this_arg */
	, InternalEnumerator_1_t3367_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3367_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3367_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3367)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6234_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo ICollection_1_get_Count_m32469_MethodInfo;
static PropertyInfo ICollection_1_t6234____Count_PropertyInfo = 
{
	&ICollection_1_t6234_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32469_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32470_MethodInfo;
static PropertyInfo ICollection_1_t6234____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6234_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32470_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6234_PropertyInfos[] =
{
	&ICollection_1_t6234____Count_PropertyInfo,
	&ICollection_1_t6234____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32469_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32469_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32469_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32470_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32470_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32470_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
static ParameterInfo ICollection_1_t6234_ICollection_1_Add_m32471_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t396_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32471_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32471_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6234_ICollection_1_Add_m32471_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32471_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32472_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32472_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32472_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
static ParameterInfo ICollection_1_t6234_ICollection_1_Contains_m32473_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t396_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32473_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32473_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6234_ICollection_1_Contains_m32473_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32473_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttributeU5BU5D_t3634_0_0_0;
extern Il2CppType DefaultMemberAttributeU5BU5D_t3634_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6234_ICollection_1_CopyTo_m32474_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttributeU5BU5D_t3634_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32474_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32474_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6234_ICollection_1_CopyTo_m32474_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32474_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
static ParameterInfo ICollection_1_t6234_ICollection_1_Remove_m32475_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t396_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32475_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.DefaultMemberAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32475_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6234_ICollection_1_Remove_m32475_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32475_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6234_MethodInfos[] =
{
	&ICollection_1_get_Count_m32469_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32470_MethodInfo,
	&ICollection_1_Add_m32471_MethodInfo,
	&ICollection_1_Clear_m32472_MethodInfo,
	&ICollection_1_Contains_m32473_MethodInfo,
	&ICollection_1_CopyTo_m32474_MethodInfo,
	&ICollection_1_Remove_m32475_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6236_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6234_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6236_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6234_0_0_0;
extern Il2CppType ICollection_1_t6234_1_0_0;
struct ICollection_1_t6234;
extern Il2CppGenericClass ICollection_1_t6234_GenericClass;
TypeInfo ICollection_1_t6234_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6234_MethodInfos/* methods */
	, ICollection_1_t6234_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6234_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6234_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6234_0_0_0/* byval_arg */
	, &ICollection_1_t6234_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6234_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>
extern Il2CppType IEnumerator_1_t4804_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32476_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.DefaultMemberAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32476_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6236_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4804_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32476_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6236_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32476_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6236_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6236_0_0_0;
extern Il2CppType IEnumerable_1_t6236_1_0_0;
struct IEnumerable_1_t6236;
extern Il2CppGenericClass IEnumerable_1_t6236_GenericClass;
TypeInfo IEnumerable_1_t6236_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6236_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6236_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6236_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6236_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6236_0_0_0/* byval_arg */
	, &IEnumerable_1_t6236_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6236_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6235_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>
extern MethodInfo IList_1_get_Item_m32477_MethodInfo;
extern MethodInfo IList_1_set_Item_m32478_MethodInfo;
static PropertyInfo IList_1_t6235____Item_PropertyInfo = 
{
	&IList_1_t6235_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32477_MethodInfo/* get */
	, &IList_1_set_Item_m32478_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6235_PropertyInfos[] =
{
	&IList_1_t6235____Item_PropertyInfo,
	NULL
};
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
static ParameterInfo IList_1_t6235_IList_1_IndexOf_m32479_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t396_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32479_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32479_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6235_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6235_IList_1_IndexOf_m32479_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32479_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
static ParameterInfo IList_1_t6235_IList_1_Insert_m32480_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t396_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32480_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32480_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6235_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6235_IList_1_Insert_m32480_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32480_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6235_IList_1_RemoveAt_m32481_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32481_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32481_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6235_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6235_IList_1_RemoveAt_m32481_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32481_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6235_IList_1_get_Item_m32477_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32477_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32477_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6235_il2cpp_TypeInfo/* declaring_type */
	, &DefaultMemberAttribute_t396_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6235_IList_1_get_Item_m32477_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32477_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DefaultMemberAttribute_t396_0_0_0;
static ParameterInfo IList_1_t6235_IList_1_set_Item_m32478_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DefaultMemberAttribute_t396_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32478_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.DefaultMemberAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32478_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6235_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6235_IList_1_set_Item_m32478_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32478_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6235_MethodInfos[] =
{
	&IList_1_IndexOf_m32479_MethodInfo,
	&IList_1_Insert_m32480_MethodInfo,
	&IList_1_RemoveAt_m32481_MethodInfo,
	&IList_1_get_Item_m32477_MethodInfo,
	&IList_1_set_Item_m32478_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6235_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6234_il2cpp_TypeInfo,
	&IEnumerable_1_t6236_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6235_0_0_0;
extern Il2CppType IList_1_t6235_1_0_0;
struct IList_1_t6235;
extern Il2CppGenericClass IList_1_t6235_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6235_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6235_MethodInfos/* methods */
	, IList_1_t6235_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6235_il2cpp_TypeInfo/* element_class */
	, IList_1_t6235_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6235_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6235_0_0_0/* byval_arg */
	, &IList_1_t6235_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6235_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4806_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.DecimalConstantAttribute
#include "mscorlib_System_Runtime_CompilerServices_DecimalConstantAttr.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32482_MethodInfo;
static PropertyInfo IEnumerator_1_t4806____Current_PropertyInfo = 
{
	&IEnumerator_1_t4806_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32482_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4806_PropertyInfos[] =
{
	&IEnumerator_1_t4806____Current_PropertyInfo,
	NULL
};
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32482_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32482_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4806_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t1173_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32482_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4806_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32482_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4806_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4806_0_0_0;
extern Il2CppType IEnumerator_1_t4806_1_0_0;
struct IEnumerator_1_t4806;
extern Il2CppGenericClass IEnumerator_1_t4806_GenericClass;
TypeInfo IEnumerator_1_t4806_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4806_MethodInfos/* methods */
	, IEnumerator_1_t4806_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4806_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4806_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4806_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4806_0_0_0/* byval_arg */
	, &IEnumerator_1_t4806_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4806_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_397.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3368_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_397MethodDeclarations.h"

extern TypeInfo DecimalConstantAttribute_t1173_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18740_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDecimalConstantAttribute_t1173_m24835_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DecimalConstantAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DecimalConstantAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDecimalConstantAttribute_t1173_m24835(__this, p0, method) (DecimalConstantAttribute_t1173 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3368____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3368, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3368____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3368, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3368_FieldInfos[] =
{
	&InternalEnumerator_1_t3368____array_0_FieldInfo,
	&InternalEnumerator_1_t3368____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18737_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3368____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3368_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18737_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3368____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3368_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18740_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3368_PropertyInfos[] =
{
	&InternalEnumerator_1_t3368____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3368____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3368_InternalEnumerator_1__ctor_m18736_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18736_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18736_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3368_InternalEnumerator_1__ctor_m18736_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18736_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18737_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18737_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18737_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18738_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18738_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18738_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18739_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18739_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18739_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18740_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18740_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t1173_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18740_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3368_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18736_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18737_MethodInfo,
	&InternalEnumerator_1_Dispose_m18738_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18739_MethodInfo,
	&InternalEnumerator_1_get_Current_m18740_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18739_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18738_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3368_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18737_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18739_MethodInfo,
	&InternalEnumerator_1_Dispose_m18738_MethodInfo,
	&InternalEnumerator_1_get_Current_m18740_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3368_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4806_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3368_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4806_il2cpp_TypeInfo, 7},
};
extern TypeInfo DecimalConstantAttribute_t1173_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3368_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18740_MethodInfo/* Method Usage */,
	&DecimalConstantAttribute_t1173_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDecimalConstantAttribute_t1173_m24835_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3368_0_0_0;
extern Il2CppType InternalEnumerator_1_t3368_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3368_GenericClass;
TypeInfo InternalEnumerator_1_t3368_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3368_MethodInfos/* methods */
	, InternalEnumerator_1_t3368_PropertyInfos/* properties */
	, InternalEnumerator_1_t3368_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3368_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3368_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3368_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3368_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3368_1_0_0/* this_arg */
	, InternalEnumerator_1_t3368_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3368_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3368_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3368)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6237_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo ICollection_1_get_Count_m32483_MethodInfo;
static PropertyInfo ICollection_1_t6237____Count_PropertyInfo = 
{
	&ICollection_1_t6237_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32483_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32484_MethodInfo;
static PropertyInfo ICollection_1_t6237____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6237_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32484_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6237_PropertyInfos[] =
{
	&ICollection_1_t6237____Count_PropertyInfo,
	&ICollection_1_t6237____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32483_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32483_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32483_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32484_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32484_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32484_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
static ParameterInfo ICollection_1_t6237_ICollection_1_Add_m32485_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32485_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32485_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6237_ICollection_1_Add_m32485_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32485_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32486_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32486_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32486_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
static ParameterInfo ICollection_1_t6237_ICollection_1_Contains_m32487_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1173_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32487_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32487_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6237_ICollection_1_Contains_m32487_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32487_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttributeU5BU5D_t3635_0_0_0;
extern Il2CppType DecimalConstantAttributeU5BU5D_t3635_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6237_ICollection_1_CopyTo_m32488_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttributeU5BU5D_t3635_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32488_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32488_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6237_ICollection_1_CopyTo_m32488_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32488_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
static ParameterInfo ICollection_1_t6237_ICollection_1_Remove_m32489_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1173_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32489_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32489_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6237_ICollection_1_Remove_m32489_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32489_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6237_MethodInfos[] =
{
	&ICollection_1_get_Count_m32483_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32484_MethodInfo,
	&ICollection_1_Add_m32485_MethodInfo,
	&ICollection_1_Clear_m32486_MethodInfo,
	&ICollection_1_Contains_m32487_MethodInfo,
	&ICollection_1_CopyTo_m32488_MethodInfo,
	&ICollection_1_Remove_m32489_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6239_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6237_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6239_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6237_0_0_0;
extern Il2CppType ICollection_1_t6237_1_0_0;
struct ICollection_1_t6237;
extern Il2CppGenericClass ICollection_1_t6237_GenericClass;
TypeInfo ICollection_1_t6237_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6237_MethodInfos/* methods */
	, ICollection_1_t6237_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6237_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6237_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6237_0_0_0/* byval_arg */
	, &ICollection_1_t6237_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6237_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern Il2CppType IEnumerator_1_t4806_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32490_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32490_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6239_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4806_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32490_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6239_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32490_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6239_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6239_0_0_0;
extern Il2CppType IEnumerable_1_t6239_1_0_0;
struct IEnumerable_1_t6239;
extern Il2CppGenericClass IEnumerable_1_t6239_GenericClass;
TypeInfo IEnumerable_1_t6239_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6239_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6239_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6239_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6239_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6239_0_0_0/* byval_arg */
	, &IEnumerable_1_t6239_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6239_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6238_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>
extern MethodInfo IList_1_get_Item_m32491_MethodInfo;
extern MethodInfo IList_1_set_Item_m32492_MethodInfo;
static PropertyInfo IList_1_t6238____Item_PropertyInfo = 
{
	&IList_1_t6238_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32491_MethodInfo/* get */
	, &IList_1_set_Item_m32492_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6238_PropertyInfos[] =
{
	&IList_1_t6238____Item_PropertyInfo,
	NULL
};
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
static ParameterInfo IList_1_t6238_IList_1_IndexOf_m32493_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1173_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32493_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32493_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6238_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6238_IList_1_IndexOf_m32493_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32493_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
static ParameterInfo IList_1_t6238_IList_1_Insert_m32494_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32494_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32494_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6238_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6238_IList_1_Insert_m32494_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32494_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6238_IList_1_RemoveAt_m32495_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32495_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32495_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6238_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6238_IList_1_RemoveAt_m32495_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32495_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6238_IList_1_get_Item_m32491_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32491_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32491_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6238_il2cpp_TypeInfo/* declaring_type */
	, &DecimalConstantAttribute_t1173_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6238_IList_1_get_Item_m32491_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32491_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DecimalConstantAttribute_t1173_0_0_0;
static ParameterInfo IList_1_t6238_IList_1_set_Item_m32492_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DecimalConstantAttribute_t1173_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32492_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DecimalConstantAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32492_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6238_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6238_IList_1_set_Item_m32492_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32492_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6238_MethodInfos[] =
{
	&IList_1_IndexOf_m32493_MethodInfo,
	&IList_1_Insert_m32494_MethodInfo,
	&IList_1_RemoveAt_m32495_MethodInfo,
	&IList_1_get_Item_m32491_MethodInfo,
	&IList_1_set_Item_m32492_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6238_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6237_il2cpp_TypeInfo,
	&IEnumerable_1_t6239_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6238_0_0_0;
extern Il2CppType IList_1_t6238_1_0_0;
struct IList_1_t6238;
extern Il2CppGenericClass IList_1_t6238_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6238_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6238_MethodInfos/* methods */
	, IList_1_t6238_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6238_il2cpp_TypeInfo/* element_class */
	, IList_1_t6238_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6238_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6238_0_0_0/* byval_arg */
	, &IList_1_t6238_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6238_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4808_il2cpp_TypeInfo;

// System.Runtime.InteropServices.FieldOffsetAttribute
#include "mscorlib_System_Runtime_InteropServices_FieldOffsetAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32496_MethodInfo;
static PropertyInfo IEnumerator_1_t4808____Current_PropertyInfo = 
{
	&IEnumerator_1_t4808_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32496_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4808_PropertyInfos[] =
{
	&IEnumerator_1_t4808____Current_PropertyInfo,
	NULL
};
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32496_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32496_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4808_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t1174_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32496_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4808_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32496_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4808_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4808_0_0_0;
extern Il2CppType IEnumerator_1_t4808_1_0_0;
struct IEnumerator_1_t4808;
extern Il2CppGenericClass IEnumerator_1_t4808_GenericClass;
TypeInfo IEnumerator_1_t4808_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4808_MethodInfos/* methods */
	, IEnumerator_1_t4808_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4808_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4808_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4808_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4808_0_0_0/* byval_arg */
	, &IEnumerator_1_t4808_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4808_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_398.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3369_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_398MethodDeclarations.h"

extern TypeInfo FieldOffsetAttribute_t1174_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18745_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFieldOffsetAttribute_t1174_m24846_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.FieldOffsetAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.FieldOffsetAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisFieldOffsetAttribute_t1174_m24846(__this, p0, method) (FieldOffsetAttribute_t1174 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3369____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3369, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3369____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3369, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3369_FieldInfos[] =
{
	&InternalEnumerator_1_t3369____array_0_FieldInfo,
	&InternalEnumerator_1_t3369____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18742_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3369____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3369_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3369____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3369_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18745_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3369_PropertyInfos[] =
{
	&InternalEnumerator_1_t3369____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3369____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3369_InternalEnumerator_1__ctor_m18741_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18741_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18741_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3369_InternalEnumerator_1__ctor_m18741_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18741_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18742_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18742_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18742_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18743_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18743_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18743_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18744_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18744_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18744_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18745_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18745_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t1174_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18745_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3369_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18741_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18742_MethodInfo,
	&InternalEnumerator_1_Dispose_m18743_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18744_MethodInfo,
	&InternalEnumerator_1_get_Current_m18745_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18744_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18743_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3369_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18742_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18744_MethodInfo,
	&InternalEnumerator_1_Dispose_m18743_MethodInfo,
	&InternalEnumerator_1_get_Current_m18745_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3369_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4808_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3369_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4808_il2cpp_TypeInfo, 7},
};
extern TypeInfo FieldOffsetAttribute_t1174_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3369_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18745_MethodInfo/* Method Usage */,
	&FieldOffsetAttribute_t1174_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFieldOffsetAttribute_t1174_m24846_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3369_0_0_0;
extern Il2CppType InternalEnumerator_1_t3369_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3369_GenericClass;
TypeInfo InternalEnumerator_1_t3369_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3369_MethodInfos/* methods */
	, InternalEnumerator_1_t3369_PropertyInfos/* properties */
	, InternalEnumerator_1_t3369_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3369_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3369_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3369_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3369_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3369_1_0_0/* this_arg */
	, InternalEnumerator_1_t3369_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3369_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3369_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3369)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6240_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo ICollection_1_get_Count_m32497_MethodInfo;
static PropertyInfo ICollection_1_t6240____Count_PropertyInfo = 
{
	&ICollection_1_t6240_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32497_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32498_MethodInfo;
static PropertyInfo ICollection_1_t6240____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6240_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32498_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6240_PropertyInfos[] =
{
	&ICollection_1_t6240____Count_PropertyInfo,
	&ICollection_1_t6240____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32497_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32497_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32497_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32498_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32498_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32498_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
static ParameterInfo ICollection_1_t6240_ICollection_1_Add_m32499_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1174_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32499_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32499_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6240_ICollection_1_Add_m32499_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32499_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32500_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32500_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32500_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
static ParameterInfo ICollection_1_t6240_ICollection_1_Contains_m32501_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1174_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32501_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32501_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6240_ICollection_1_Contains_m32501_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32501_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttributeU5BU5D_t3636_0_0_0;
extern Il2CppType FieldOffsetAttributeU5BU5D_t3636_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6240_ICollection_1_CopyTo_m32502_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttributeU5BU5D_t3636_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32502_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32502_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6240_ICollection_1_CopyTo_m32502_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32502_GenericMethod/* genericMethod */

};
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
static ParameterInfo ICollection_1_t6240_ICollection_1_Remove_m32503_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1174_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32503_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32503_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6240_ICollection_1_Remove_m32503_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32503_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6240_MethodInfos[] =
{
	&ICollection_1_get_Count_m32497_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32498_MethodInfo,
	&ICollection_1_Add_m32499_MethodInfo,
	&ICollection_1_Clear_m32500_MethodInfo,
	&ICollection_1_Contains_m32501_MethodInfo,
	&ICollection_1_CopyTo_m32502_MethodInfo,
	&ICollection_1_Remove_m32503_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6242_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6240_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6242_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6240_0_0_0;
extern Il2CppType ICollection_1_t6240_1_0_0;
struct ICollection_1_t6240;
extern Il2CppGenericClass ICollection_1_t6240_GenericClass;
TypeInfo ICollection_1_t6240_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6240_MethodInfos/* methods */
	, ICollection_1_t6240_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6240_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6240_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6240_0_0_0/* byval_arg */
	, &ICollection_1_t6240_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6240_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern Il2CppType IEnumerator_1_t4808_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32504_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.FieldOffsetAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32504_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6242_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4808_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32504_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6242_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32504_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6242_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6242_0_0_0;
extern Il2CppType IEnumerable_1_t6242_1_0_0;
struct IEnumerable_1_t6242;
extern Il2CppGenericClass IEnumerable_1_t6242_GenericClass;
TypeInfo IEnumerable_1_t6242_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6242_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6242_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6242_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6242_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6242_0_0_0/* byval_arg */
	, &IEnumerable_1_t6242_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6242_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6241_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>
extern MethodInfo IList_1_get_Item_m32505_MethodInfo;
extern MethodInfo IList_1_set_Item_m32506_MethodInfo;
static PropertyInfo IList_1_t6241____Item_PropertyInfo = 
{
	&IList_1_t6241_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32505_MethodInfo/* get */
	, &IList_1_set_Item_m32506_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6241_PropertyInfos[] =
{
	&IList_1_t6241____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
static ParameterInfo IList_1_t6241_IList_1_IndexOf_m32507_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1174_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32507_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32507_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6241_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6241_IList_1_IndexOf_m32507_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32507_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
static ParameterInfo IList_1_t6241_IList_1_Insert_m32508_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1174_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32508_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32508_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6241_IList_1_Insert_m32508_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32508_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6241_IList_1_RemoveAt_m32509_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32509_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32509_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6241_IList_1_RemoveAt_m32509_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32509_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6241_IList_1_get_Item_m32505_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32505_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32505_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6241_il2cpp_TypeInfo/* declaring_type */
	, &FieldOffsetAttribute_t1174_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6241_IList_1_get_Item_m32505_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32505_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FieldOffsetAttribute_t1174_0_0_0;
static ParameterInfo IList_1_t6241_IList_1_set_Item_m32506_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldOffsetAttribute_t1174_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32506_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.FieldOffsetAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32506_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6241_IList_1_set_Item_m32506_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32506_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6241_MethodInfos[] =
{
	&IList_1_IndexOf_m32507_MethodInfo,
	&IList_1_Insert_m32508_MethodInfo,
	&IList_1_RemoveAt_m32509_MethodInfo,
	&IList_1_get_Item_m32505_MethodInfo,
	&IList_1_set_Item_m32506_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6241_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6240_il2cpp_TypeInfo,
	&IEnumerable_1_t6242_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6241_0_0_0;
extern Il2CppType IList_1_t6241_1_0_0;
struct IList_1_t6241;
extern Il2CppGenericClass IList_1_t6241_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6241_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6241_MethodInfos/* methods */
	, IList_1_t6241_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6241_il2cpp_TypeInfo/* element_class */
	, IList_1_t6241_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6241_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6241_0_0_0/* byval_arg */
	, &IList_1_t6241_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6241_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4810_il2cpp_TypeInfo;

// System.MonoTODOAttribute
#include "mscorlib_System_MonoTODOAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32510_MethodInfo;
static PropertyInfo IEnumerator_1_t4810____Current_PropertyInfo = 
{
	&IEnumerator_1_t4810_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32510_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4810_PropertyInfos[] =
{
	&IEnumerator_1_t4810____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32510_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32510_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4810_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1182_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32510_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4810_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32510_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4810_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4810_0_0_0;
extern Il2CppType IEnumerator_1_t4810_1_0_0;
struct IEnumerator_1_t4810;
extern Il2CppGenericClass IEnumerator_1_t4810_GenericClass;
TypeInfo IEnumerator_1_t4810_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4810_MethodInfos/* methods */
	, IEnumerator_1_t4810_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4810_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4810_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4810_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4810_0_0_0/* byval_arg */
	, &IEnumerator_1_t4810_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4810_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_399.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3370_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_399MethodDeclarations.h"

extern TypeInfo MonoTODOAttribute_t1182_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18750_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoTODOAttribute_t1182_m24857_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoTODOAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoTODOAttribute_t1182_m24857(__this, p0, method) (MonoTODOAttribute_t1182 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoTODOAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3370____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3370, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3370____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3370, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3370_FieldInfos[] =
{
	&InternalEnumerator_1_t3370____array_0_FieldInfo,
	&InternalEnumerator_1_t3370____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18747_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3370____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3370_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18747_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3370____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3370_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3370_PropertyInfos[] =
{
	&InternalEnumerator_1_t3370____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3370____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3370_InternalEnumerator_1__ctor_m18746_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18746_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18746_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3370_InternalEnumerator_1__ctor_m18746_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18746_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18747_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18747_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18747_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18748_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18748_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18748_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18749_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18749_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18749_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18750_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoTODOAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18750_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1182_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18750_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3370_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18746_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18747_MethodInfo,
	&InternalEnumerator_1_Dispose_m18748_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18749_MethodInfo,
	&InternalEnumerator_1_get_Current_m18750_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18749_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18748_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3370_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18747_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18749_MethodInfo,
	&InternalEnumerator_1_Dispose_m18748_MethodInfo,
	&InternalEnumerator_1_get_Current_m18750_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3370_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4810_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3370_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4810_il2cpp_TypeInfo, 7},
};
extern TypeInfo MonoTODOAttribute_t1182_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3370_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18750_MethodInfo/* Method Usage */,
	&MonoTODOAttribute_t1182_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoTODOAttribute_t1182_m24857_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3370_0_0_0;
extern Il2CppType InternalEnumerator_1_t3370_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3370_GenericClass;
TypeInfo InternalEnumerator_1_t3370_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3370_MethodInfos/* methods */
	, InternalEnumerator_1_t3370_PropertyInfos/* properties */
	, InternalEnumerator_1_t3370_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3370_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3370_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3370_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3370_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3370_1_0_0/* this_arg */
	, InternalEnumerator_1_t3370_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3370_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3370_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3370)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6243_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>
extern MethodInfo ICollection_1_get_Count_m32511_MethodInfo;
static PropertyInfo ICollection_1_t6243____Count_PropertyInfo = 
{
	&ICollection_1_t6243_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32511_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32512_MethodInfo;
static PropertyInfo ICollection_1_t6243____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6243_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32512_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6243_PropertyInfos[] =
{
	&ICollection_1_t6243____Count_PropertyInfo,
	&ICollection_1_t6243____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32511_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32511_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32511_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32512_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32512_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32512_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
static ParameterInfo ICollection_1_t6243_ICollection_1_Add_m32513_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1182_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32513_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32513_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6243_ICollection_1_Add_m32513_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32513_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32514_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32514_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32514_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
static ParameterInfo ICollection_1_t6243_ICollection_1_Contains_m32515_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1182_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32515_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32515_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6243_ICollection_1_Contains_m32515_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32515_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttributeU5BU5D_t3637_0_0_0;
extern Il2CppType MonoTODOAttributeU5BU5D_t3637_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6243_ICollection_1_CopyTo_m32516_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttributeU5BU5D_t3637_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32516_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32516_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6243_ICollection_1_CopyTo_m32516_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32516_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
static ParameterInfo ICollection_1_t6243_ICollection_1_Remove_m32517_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1182_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32517_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoTODOAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32517_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6243_ICollection_1_Remove_m32517_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32517_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6243_MethodInfos[] =
{
	&ICollection_1_get_Count_m32511_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32512_MethodInfo,
	&ICollection_1_Add_m32513_MethodInfo,
	&ICollection_1_Clear_m32514_MethodInfo,
	&ICollection_1_Contains_m32515_MethodInfo,
	&ICollection_1_CopyTo_m32516_MethodInfo,
	&ICollection_1_Remove_m32517_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6245_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6243_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6245_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6243_0_0_0;
extern Il2CppType ICollection_1_t6243_1_0_0;
struct ICollection_1_t6243;
extern Il2CppGenericClass ICollection_1_t6243_GenericClass;
TypeInfo ICollection_1_t6243_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6243_MethodInfos/* methods */
	, ICollection_1_t6243_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6243_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6243_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6243_0_0_0/* byval_arg */
	, &ICollection_1_t6243_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6243_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>
extern Il2CppType IEnumerator_1_t4810_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32518_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoTODOAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32518_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6245_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4810_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32518_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6245_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32518_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6245_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6245_0_0_0;
extern Il2CppType IEnumerable_1_t6245_1_0_0;
struct IEnumerable_1_t6245;
extern Il2CppGenericClass IEnumerable_1_t6245_GenericClass;
TypeInfo IEnumerable_1_t6245_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6245_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6245_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6245_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6245_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6245_0_0_0/* byval_arg */
	, &IEnumerable_1_t6245_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6245_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6244_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoTODOAttribute>
extern MethodInfo IList_1_get_Item_m32519_MethodInfo;
extern MethodInfo IList_1_set_Item_m32520_MethodInfo;
static PropertyInfo IList_1_t6244____Item_PropertyInfo = 
{
	&IList_1_t6244_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32519_MethodInfo/* get */
	, &IList_1_set_Item_m32520_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6244_PropertyInfos[] =
{
	&IList_1_t6244____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
static ParameterInfo IList_1_t6244_IList_1_IndexOf_m32521_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1182_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32521_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoTODOAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32521_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6244_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6244_IList_1_IndexOf_m32521_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32521_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
static ParameterInfo IList_1_t6244_IList_1_Insert_m32522_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1182_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32522_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32522_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6244_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6244_IList_1_Insert_m32522_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32522_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6244_IList_1_RemoveAt_m32523_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32523_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32523_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6244_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6244_IList_1_RemoveAt_m32523_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32523_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6244_IList_1_get_Item_m32519_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32519_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoTODOAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32519_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6244_il2cpp_TypeInfo/* declaring_type */
	, &MonoTODOAttribute_t1182_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6244_IList_1_get_Item_m32519_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32519_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MonoTODOAttribute_t1182_0_0_0;
static ParameterInfo IList_1_t6244_IList_1_set_Item_m32520_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoTODOAttribute_t1182_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32520_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoTODOAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32520_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6244_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6244_IList_1_set_Item_m32520_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32520_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6244_MethodInfos[] =
{
	&IList_1_IndexOf_m32521_MethodInfo,
	&IList_1_Insert_m32522_MethodInfo,
	&IList_1_RemoveAt_m32523_MethodInfo,
	&IList_1_get_Item_m32519_MethodInfo,
	&IList_1_set_Item_m32520_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6244_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6243_il2cpp_TypeInfo,
	&IEnumerable_1_t6245_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6244_0_0_0;
extern Il2CppType IList_1_t6244_1_0_0;
struct IList_1_t6244;
extern Il2CppGenericClass IList_1_t6244_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6244_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6244_MethodInfos/* methods */
	, IList_1_t6244_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6244_il2cpp_TypeInfo/* element_class */
	, IList_1_t6244_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6244_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6244_0_0_0/* byval_arg */
	, &IList_1_t6244_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6244_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4812_il2cpp_TypeInfo;

// System.MonoDocumentationNoteAttribute
#include "mscorlib_System_MonoDocumentationNoteAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo IEnumerator_1_get_Current_m32524_MethodInfo;
static PropertyInfo IEnumerator_1_t4812____Current_PropertyInfo = 
{
	&IEnumerator_1_t4812_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32524_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4812_PropertyInfos[] =
{
	&IEnumerator_1_t4812____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32524_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32524_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4812_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t1183_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32524_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4812_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32524_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4812_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4812_0_0_0;
extern Il2CppType IEnumerator_1_t4812_1_0_0;
struct IEnumerator_1_t4812;
extern Il2CppGenericClass IEnumerator_1_t4812_GenericClass;
TypeInfo IEnumerator_1_t4812_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4812_MethodInfos/* methods */
	, IEnumerator_1_t4812_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4812_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4812_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4812_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4812_0_0_0/* byval_arg */
	, &IEnumerator_1_t4812_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4812_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_400.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3371_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_400MethodDeclarations.h"

extern TypeInfo MonoDocumentationNoteAttribute_t1183_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18755_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t1183_m24868_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoDocumentationNoteAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoDocumentationNoteAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t1183_m24868(__this, p0, method) (MonoDocumentationNoteAttribute_t1183 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3371____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3371, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3371____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3371, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3371_FieldInfos[] =
{
	&InternalEnumerator_1_t3371____array_0_FieldInfo,
	&InternalEnumerator_1_t3371____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18752_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3371____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3371_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18752_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3371____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3371_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18755_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3371_PropertyInfos[] =
{
	&InternalEnumerator_1_t3371____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3371____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3371_InternalEnumerator_1__ctor_m18751_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18751_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18751_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3371_InternalEnumerator_1__ctor_m18751_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18751_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18752_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18752_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18752_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18753_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18753_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18753_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18754_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18754_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18754_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18755_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoDocumentationNoteAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18755_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t1183_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18755_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3371_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18751_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18752_MethodInfo,
	&InternalEnumerator_1_Dispose_m18753_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18754_MethodInfo,
	&InternalEnumerator_1_get_Current_m18755_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18754_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18753_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3371_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18752_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18754_MethodInfo,
	&InternalEnumerator_1_Dispose_m18753_MethodInfo,
	&InternalEnumerator_1_get_Current_m18755_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3371_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4812_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3371_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4812_il2cpp_TypeInfo, 7},
};
extern TypeInfo MonoDocumentationNoteAttribute_t1183_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3371_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18755_MethodInfo/* Method Usage */,
	&MonoDocumentationNoteAttribute_t1183_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoDocumentationNoteAttribute_t1183_m24868_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3371_0_0_0;
extern Il2CppType InternalEnumerator_1_t3371_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3371_GenericClass;
TypeInfo InternalEnumerator_1_t3371_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3371_MethodInfos/* methods */
	, InternalEnumerator_1_t3371_PropertyInfos/* properties */
	, InternalEnumerator_1_t3371_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3371_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3371_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3371_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3371_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3371_1_0_0/* this_arg */
	, InternalEnumerator_1_t3371_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3371_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3371_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3371)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6246_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo ICollection_1_get_Count_m32525_MethodInfo;
static PropertyInfo ICollection_1_t6246____Count_PropertyInfo = 
{
	&ICollection_1_t6246_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32525_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32526_MethodInfo;
static PropertyInfo ICollection_1_t6246____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6246_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32526_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6246_PropertyInfos[] =
{
	&ICollection_1_t6246____Count_PropertyInfo,
	&ICollection_1_t6246____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32525_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m32525_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32525_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32526_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32526_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32526_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
static ParameterInfo ICollection_1_t6246_ICollection_1_Add_m32527_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1183_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32527_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Add(T)
MethodInfo ICollection_1_Add_m32527_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6246_ICollection_1_Add_m32527_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32527_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32528_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Clear()
MethodInfo ICollection_1_Clear_m32528_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32528_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
static ParameterInfo ICollection_1_t6246_ICollection_1_Contains_m32529_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1183_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32529_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m32529_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6246_ICollection_1_Contains_m32529_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32529_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttributeU5BU5D_t3638_0_0_0;
extern Il2CppType MonoDocumentationNoteAttributeU5BU5D_t3638_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6246_ICollection_1_CopyTo_m32530_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttributeU5BU5D_t3638_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32530_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32530_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6246_ICollection_1_CopyTo_m32530_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32530_GenericMethod/* genericMethod */

};
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
static ParameterInfo ICollection_1_t6246_ICollection_1_Remove_m32531_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1183_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32531_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoDocumentationNoteAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m32531_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6246_ICollection_1_Remove_m32531_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32531_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6246_MethodInfos[] =
{
	&ICollection_1_get_Count_m32525_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32526_MethodInfo,
	&ICollection_1_Add_m32527_MethodInfo,
	&ICollection_1_Clear_m32528_MethodInfo,
	&ICollection_1_Contains_m32529_MethodInfo,
	&ICollection_1_CopyTo_m32530_MethodInfo,
	&ICollection_1_Remove_m32531_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6248_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6246_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6248_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6246_0_0_0;
extern Il2CppType ICollection_1_t6246_1_0_0;
struct ICollection_1_t6246;
extern Il2CppGenericClass ICollection_1_t6246_GenericClass;
TypeInfo ICollection_1_t6246_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6246_MethodInfos/* methods */
	, ICollection_1_t6246_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6246_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6246_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6246_0_0_0/* byval_arg */
	, &ICollection_1_t6246_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6246_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>
extern Il2CppType IEnumerator_1_t4812_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32532_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoDocumentationNoteAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32532_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6248_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4812_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32532_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6248_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32532_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6248_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6248_0_0_0;
extern Il2CppType IEnumerable_1_t6248_1_0_0;
struct IEnumerable_1_t6248;
extern Il2CppGenericClass IEnumerable_1_t6248_GenericClass;
TypeInfo IEnumerable_1_t6248_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6248_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6248_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6248_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6248_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6248_0_0_0/* byval_arg */
	, &IEnumerable_1_t6248_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6248_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6247_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>
extern MethodInfo IList_1_get_Item_m32533_MethodInfo;
extern MethodInfo IList_1_set_Item_m32534_MethodInfo;
static PropertyInfo IList_1_t6247____Item_PropertyInfo = 
{
	&IList_1_t6247_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32533_MethodInfo/* get */
	, &IList_1_set_Item_m32534_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6247_PropertyInfos[] =
{
	&IList_1_t6247____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
static ParameterInfo IList_1_t6247_IList_1_IndexOf_m32535_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1183_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32535_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32535_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6247_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6247_IList_1_IndexOf_m32535_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32535_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
static ParameterInfo IList_1_t6247_IList_1_Insert_m32536_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1183_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32536_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32536_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6247_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6247_IList_1_Insert_m32536_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32536_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6247_IList_1_RemoveAt_m32537_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32537_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32537_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6247_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6247_IList_1_RemoveAt_m32537_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32537_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6247_IList_1_get_Item_m32533_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32533_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32533_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6247_il2cpp_TypeInfo/* declaring_type */
	, &MonoDocumentationNoteAttribute_t1183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6247_IList_1_get_Item_m32533_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32533_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MonoDocumentationNoteAttribute_t1183_0_0_0;
static ParameterInfo IList_1_t6247_IList_1_set_Item_m32534_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoDocumentationNoteAttribute_t1183_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32534_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoDocumentationNoteAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32534_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6247_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6247_IList_1_set_Item_m32534_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32534_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6247_MethodInfos[] =
{
	&IList_1_IndexOf_m32535_MethodInfo,
	&IList_1_Insert_m32536_MethodInfo,
	&IList_1_RemoveAt_m32537_MethodInfo,
	&IList_1_get_Item_m32533_MethodInfo,
	&IList_1_set_Item_m32534_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6247_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6246_il2cpp_TypeInfo,
	&IEnumerable_1_t6248_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6247_0_0_0;
extern Il2CppType IList_1_t6247_1_0_0;
struct IList_1_t6247;
extern Il2CppGenericClass IList_1_t6247_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6247_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6247_MethodInfos/* methods */
	, IList_1_t6247_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6247_il2cpp_TypeInfo/* element_class */
	, IList_1_t6247_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6247_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6247_0_0_0/* byval_arg */
	, &IList_1_t6247_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6247_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4814_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.CodePointIndexer/TableRange
#include "mscorlib_Mono_Globalization_Unicode_CodePointIndexer_TableRa.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo IEnumerator_1_get_Current_m32538_MethodInfo;
static PropertyInfo IEnumerator_1_t4814____Current_PropertyInfo = 
{
	&IEnumerator_1_t4814_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32538_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4814_PropertyInfos[] =
{
	&IEnumerator_1_t4814____Current_PropertyInfo,
	NULL
};
extern Il2CppType TableRange_t1187_0_0_0;
extern void* RuntimeInvoker_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32538_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32538_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4814_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t1187_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t1187/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32538_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4814_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32538_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4814_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4814_0_0_0;
extern Il2CppType IEnumerator_1_t4814_1_0_0;
struct IEnumerator_1_t4814;
extern Il2CppGenericClass IEnumerator_1_t4814_GenericClass;
TypeInfo IEnumerator_1_t4814_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4814_MethodInfos/* methods */
	, IEnumerator_1_t4814_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4814_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4814_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4814_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4814_0_0_0/* byval_arg */
	, &IEnumerator_1_t4814_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4814_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_401.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3372_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_401MethodDeclarations.h"

extern TypeInfo TableRange_t1187_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18760_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTableRange_t1187_m24879_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.CodePointIndexer/TableRange>(System.Int32)
 TableRange_t1187  Array_InternalArray__get_Item_TisTableRange_t1187_m24879 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18756_MethodInfo;
 void InternalEnumerator_1__ctor_m18756 (InternalEnumerator_1_t3372 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757 (InternalEnumerator_1_t3372 * __this, MethodInfo* method){
	{
		TableRange_t1187  L_0 = InternalEnumerator_1_get_Current_m18760(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18760_MethodInfo);
		TableRange_t1187  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TableRange_t1187_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18758_MethodInfo;
 void InternalEnumerator_1_Dispose_m18758 (InternalEnumerator_1_t3372 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18759_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18759 (InternalEnumerator_1_t3372 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
 TableRange_t1187  InternalEnumerator_1_get_Current_m18760 (InternalEnumerator_1_t3372 * __this, MethodInfo* method){
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
		TableRange_t1187  L_8 = Array_InternalArray__get_Item_TisTableRange_t1187_m24879(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTableRange_t1187_m24879_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3372____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3372, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3372____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3372, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3372_FieldInfos[] =
{
	&InternalEnumerator_1_t3372____array_0_FieldInfo,
	&InternalEnumerator_1_t3372____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3372____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3372_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3372____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3372_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18760_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3372_PropertyInfos[] =
{
	&InternalEnumerator_1_t3372____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3372____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3372_InternalEnumerator_1__ctor_m18756_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18756_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18756_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18756/* method */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3372_InternalEnumerator_1__ctor_m18756_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18756_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757/* method */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18758_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18758_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18758/* method */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18758_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18759_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18759_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18759/* method */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18759_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1187_0_0_0;
extern void* RuntimeInvoker_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18760_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18760_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18760/* method */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t1187_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t1187/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18760_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3372_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18756_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757_MethodInfo,
	&InternalEnumerator_1_Dispose_m18758_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18759_MethodInfo,
	&InternalEnumerator_1_get_Current_m18760_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3372_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18757_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18759_MethodInfo,
	&InternalEnumerator_1_Dispose_m18758_MethodInfo,
	&InternalEnumerator_1_get_Current_m18760_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3372_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4814_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3372_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4814_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3372_0_0_0;
extern Il2CppType InternalEnumerator_1_t3372_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3372_GenericClass;
TypeInfo InternalEnumerator_1_t3372_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3372_MethodInfos/* methods */
	, InternalEnumerator_1_t3372_PropertyInfos/* properties */
	, InternalEnumerator_1_t3372_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3372_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3372_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3372_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3372_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3372_1_0_0/* this_arg */
	, InternalEnumerator_1_t3372_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3372_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3372)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6249_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo ICollection_1_get_Count_m32539_MethodInfo;
static PropertyInfo ICollection_1_t6249____Count_PropertyInfo = 
{
	&ICollection_1_t6249_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32539_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32540_MethodInfo;
static PropertyInfo ICollection_1_t6249____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6249_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32540_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6249_PropertyInfos[] =
{
	&ICollection_1_t6249____Count_PropertyInfo,
	&ICollection_1_t6249____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32539_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Count()
MethodInfo ICollection_1_get_Count_m32539_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32539_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32540_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32540_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32540_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1187_0_0_0;
extern Il2CppType TableRange_t1187_0_0_0;
static ParameterInfo ICollection_1_t6249_ICollection_1_Add_m32541_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1187_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32541_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Add(T)
MethodInfo ICollection_1_Add_m32541_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_TableRange_t1187/* invoker_method */
	, ICollection_1_t6249_ICollection_1_Add_m32541_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32541_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32542_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Clear()
MethodInfo ICollection_1_Clear_m32542_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32542_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1187_0_0_0;
static ParameterInfo ICollection_1_t6249_ICollection_1_Contains_m32543_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1187_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32543_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Contains(T)
MethodInfo ICollection_1_Contains_m32543_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TableRange_t1187/* invoker_method */
	, ICollection_1_t6249_ICollection_1_Contains_m32543_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32543_GenericMethod/* genericMethod */

};
extern Il2CppType TableRangeU5BU5D_t1188_0_0_0;
extern Il2CppType TableRangeU5BU5D_t1188_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6249_ICollection_1_CopyTo_m32544_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TableRangeU5BU5D_t1188_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32544_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32544_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6249_ICollection_1_CopyTo_m32544_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32544_GenericMethod/* genericMethod */

};
extern Il2CppType TableRange_t1187_0_0_0;
static ParameterInfo ICollection_1_t6249_ICollection_1_Remove_m32545_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1187_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32545_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Remove(T)
MethodInfo ICollection_1_Remove_m32545_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TableRange_t1187/* invoker_method */
	, ICollection_1_t6249_ICollection_1_Remove_m32545_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32545_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6249_MethodInfos[] =
{
	&ICollection_1_get_Count_m32539_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32540_MethodInfo,
	&ICollection_1_Add_m32541_MethodInfo,
	&ICollection_1_Clear_m32542_MethodInfo,
	&ICollection_1_Contains_m32543_MethodInfo,
	&ICollection_1_CopyTo_m32544_MethodInfo,
	&ICollection_1_Remove_m32545_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6251_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6249_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6251_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6249_0_0_0;
extern Il2CppType ICollection_1_t6249_1_0_0;
struct ICollection_1_t6249;
extern Il2CppGenericClass ICollection_1_t6249_GenericClass;
TypeInfo ICollection_1_t6249_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6249_MethodInfos/* methods */
	, ICollection_1_t6249_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6249_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6249_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6249_0_0_0/* byval_arg */
	, &ICollection_1_t6249_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6249_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern Il2CppType IEnumerator_1_t4814_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32546_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32546_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6251_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4814_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32546_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6251_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32546_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6251_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6251_0_0_0;
extern Il2CppType IEnumerable_1_t6251_1_0_0;
struct IEnumerable_1_t6251;
extern Il2CppGenericClass IEnumerable_1_t6251_GenericClass;
TypeInfo IEnumerable_1_t6251_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6251_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6251_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6251_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6251_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6251_0_0_0/* byval_arg */
	, &IEnumerable_1_t6251_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6251_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6250_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>
extern MethodInfo IList_1_get_Item_m32547_MethodInfo;
extern MethodInfo IList_1_set_Item_m32548_MethodInfo;
static PropertyInfo IList_1_t6250____Item_PropertyInfo = 
{
	&IList_1_t6250_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32547_MethodInfo/* get */
	, &IList_1_set_Item_m32548_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6250_PropertyInfos[] =
{
	&IList_1_t6250____Item_PropertyInfo,
	NULL
};
extern Il2CppType TableRange_t1187_0_0_0;
static ParameterInfo IList_1_t6250_IList_1_IndexOf_m32549_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TableRange_t1187_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32549_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32549_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6250_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TableRange_t1187/* invoker_method */
	, IList_1_t6250_IList_1_IndexOf_m32549_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32549_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TableRange_t1187_0_0_0;
static ParameterInfo IList_1_t6250_IList_1_Insert_m32550_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TableRange_t1187_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32550_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32550_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_TableRange_t1187/* invoker_method */
	, IList_1_t6250_IList_1_Insert_m32550_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32550_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6250_IList_1_RemoveAt_m32551_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32551_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32551_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6250_IList_1_RemoveAt_m32551_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32551_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6250_IList_1_get_Item_m32547_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TableRange_t1187_0_0_0;
extern void* RuntimeInvoker_TableRange_t1187_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32547_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32547_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6250_il2cpp_TypeInfo/* declaring_type */
	, &TableRange_t1187_0_0_0/* return_type */
	, RuntimeInvoker_TableRange_t1187_Int32_t18/* invoker_method */
	, IList_1_t6250_IList_1_get_Item_m32547_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32547_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TableRange_t1187_0_0_0;
static ParameterInfo IList_1_t6250_IList_1_set_Item_m32548_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TableRange_t1187_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_TableRange_t1187 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32548_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.CodePointIndexer/TableRange>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32548_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_TableRange_t1187/* invoker_method */
	, IList_1_t6250_IList_1_set_Item_m32548_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32548_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6250_MethodInfos[] =
{
	&IList_1_IndexOf_m32549_MethodInfo,
	&IList_1_Insert_m32550_MethodInfo,
	&IList_1_RemoveAt_m32551_MethodInfo,
	&IList_1_get_Item_m32547_MethodInfo,
	&IList_1_set_Item_m32548_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6250_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6249_il2cpp_TypeInfo,
	&IEnumerable_1_t6251_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6250_0_0_0;
extern Il2CppType IList_1_t6250_1_0_0;
struct IList_1_t6250;
extern Il2CppGenericClass IList_1_t6250_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6250_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6250_MethodInfos/* methods */
	, IList_1_t6250_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6250_il2cpp_TypeInfo/* element_class */
	, IList_1_t6250_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6250_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6250_0_0_0/* byval_arg */
	, &IList_1_t6250_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6250_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4816_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.TailoringInfo
#include "mscorlib_Mono_Globalization_Unicode_TailoringInfo.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo IEnumerator_1_get_Current_m32552_MethodInfo;
static PropertyInfo IEnumerator_1_t4816____Current_PropertyInfo = 
{
	&IEnumerator_1_t4816_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32552_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4816_PropertyInfos[] =
{
	&IEnumerator_1_t4816____Current_PropertyInfo,
	NULL
};
extern Il2CppType TailoringInfo_t1190_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32552_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32552_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4816_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t1190_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32552_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4816_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32552_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4816_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4816_0_0_0;
extern Il2CppType IEnumerator_1_t4816_1_0_0;
struct IEnumerator_1_t4816;
extern Il2CppGenericClass IEnumerator_1_t4816_GenericClass;
TypeInfo IEnumerator_1_t4816_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4816_MethodInfos/* methods */
	, IEnumerator_1_t4816_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4816_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4816_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4816_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4816_0_0_0/* byval_arg */
	, &IEnumerator_1_t4816_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4816_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_402.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3373_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_402MethodDeclarations.h"

extern TypeInfo TailoringInfo_t1190_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18765_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTailoringInfo_t1190_m24890_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.TailoringInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisTailoringInfo_t1190_m24890(__this, p0, method) (TailoringInfo_t1190 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3373____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3373, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3373____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3373, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3373_FieldInfos[] =
{
	&InternalEnumerator_1_t3373____array_0_FieldInfo,
	&InternalEnumerator_1_t3373____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18762_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3373____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3373_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18762_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3373____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3373_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18765_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3373_PropertyInfos[] =
{
	&InternalEnumerator_1_t3373____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3373____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3373_InternalEnumerator_1__ctor_m18761_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18761_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18761_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3373_InternalEnumerator_1__ctor_m18761_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18761_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18762_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18762_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18762_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18763_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18763_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18763_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18764_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18764_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18764_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1190_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18765_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.TailoringInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18765_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t1190_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18765_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3373_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18761_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18762_MethodInfo,
	&InternalEnumerator_1_Dispose_m18763_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18764_MethodInfo,
	&InternalEnumerator_1_get_Current_m18765_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18764_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18763_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3373_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18762_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18764_MethodInfo,
	&InternalEnumerator_1_Dispose_m18763_MethodInfo,
	&InternalEnumerator_1_get_Current_m18765_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3373_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4816_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3373_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4816_il2cpp_TypeInfo, 7},
};
extern TypeInfo TailoringInfo_t1190_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3373_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18765_MethodInfo/* Method Usage */,
	&TailoringInfo_t1190_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisTailoringInfo_t1190_m24890_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3373_0_0_0;
extern Il2CppType InternalEnumerator_1_t3373_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3373_GenericClass;
TypeInfo InternalEnumerator_1_t3373_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3373_MethodInfos/* methods */
	, InternalEnumerator_1_t3373_PropertyInfos/* properties */
	, InternalEnumerator_1_t3373_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3373_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3373_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3373_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3373_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3373_1_0_0/* this_arg */
	, InternalEnumerator_1_t3373_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3373_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3373_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3373)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6252_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo ICollection_1_get_Count_m32553_MethodInfo;
static PropertyInfo ICollection_1_t6252____Count_PropertyInfo = 
{
	&ICollection_1_t6252_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32553_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32554_MethodInfo;
static PropertyInfo ICollection_1_t6252____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6252_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32554_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6252_PropertyInfos[] =
{
	&ICollection_1_t6252____Count_PropertyInfo,
	&ICollection_1_t6252____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32553_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m32553_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32553_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32554_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32554_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32554_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1190_0_0_0;
extern Il2CppType TailoringInfo_t1190_0_0_0;
static ParameterInfo ICollection_1_t6252_ICollection_1_Add_m32555_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1190_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32555_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Add(T)
MethodInfo ICollection_1_Add_m32555_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6252_ICollection_1_Add_m32555_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32555_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32556_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Clear()
MethodInfo ICollection_1_Clear_m32556_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32556_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1190_0_0_0;
static ParameterInfo ICollection_1_t6252_ICollection_1_Contains_m32557_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1190_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32557_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m32557_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6252_ICollection_1_Contains_m32557_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32557_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfoU5BU5D_t1195_0_0_0;
extern Il2CppType TailoringInfoU5BU5D_t1195_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6252_ICollection_1_CopyTo_m32558_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfoU5BU5D_t1195_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32558_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32558_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6252_ICollection_1_CopyTo_m32558_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32558_GenericMethod/* genericMethod */

};
extern Il2CppType TailoringInfo_t1190_0_0_0;
static ParameterInfo ICollection_1_t6252_ICollection_1_Remove_m32559_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1190_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32559_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.TailoringInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m32559_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6252_ICollection_1_Remove_m32559_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32559_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6252_MethodInfos[] =
{
	&ICollection_1_get_Count_m32553_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32554_MethodInfo,
	&ICollection_1_Add_m32555_MethodInfo,
	&ICollection_1_Clear_m32556_MethodInfo,
	&ICollection_1_Contains_m32557_MethodInfo,
	&ICollection_1_CopyTo_m32558_MethodInfo,
	&ICollection_1_Remove_m32559_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6254_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6252_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6254_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6252_0_0_0;
extern Il2CppType ICollection_1_t6252_1_0_0;
struct ICollection_1_t6252;
extern Il2CppGenericClass ICollection_1_t6252_GenericClass;
TypeInfo ICollection_1_t6252_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6252_MethodInfos/* methods */
	, ICollection_1_t6252_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6252_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6252_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6252_0_0_0/* byval_arg */
	, &ICollection_1_t6252_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6252_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>
extern Il2CppType IEnumerator_1_t4816_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32560_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.TailoringInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32560_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6254_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4816_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32560_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6254_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32560_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6254_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6254_0_0_0;
extern Il2CppType IEnumerable_1_t6254_1_0_0;
struct IEnumerable_1_t6254;
extern Il2CppGenericClass IEnumerable_1_t6254_GenericClass;
TypeInfo IEnumerable_1_t6254_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6254_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6254_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6254_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6254_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6254_0_0_0/* byval_arg */
	, &IEnumerable_1_t6254_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6254_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6253_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>
extern MethodInfo IList_1_get_Item_m32561_MethodInfo;
extern MethodInfo IList_1_set_Item_m32562_MethodInfo;
static PropertyInfo IList_1_t6253____Item_PropertyInfo = 
{
	&IList_1_t6253_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32561_MethodInfo/* get */
	, &IList_1_set_Item_m32562_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6253_PropertyInfos[] =
{
	&IList_1_t6253____Item_PropertyInfo,
	NULL
};
extern Il2CppType TailoringInfo_t1190_0_0_0;
static ParameterInfo IList_1_t6253_IList_1_IndexOf_m32563_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1190_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32563_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32563_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6253_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6253_IList_1_IndexOf_m32563_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32563_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TailoringInfo_t1190_0_0_0;
static ParameterInfo IList_1_t6253_IList_1_Insert_m32564_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1190_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32564_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32564_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6253_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6253_IList_1_Insert_m32564_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32564_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6253_IList_1_RemoveAt_m32565_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32565_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32565_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6253_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6253_IList_1_RemoveAt_m32565_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32565_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6253_IList_1_get_Item_m32561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TailoringInfo_t1190_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32561_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32561_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6253_il2cpp_TypeInfo/* declaring_type */
	, &TailoringInfo_t1190_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6253_IList_1_get_Item_m32561_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32561_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TailoringInfo_t1190_0_0_0;
static ParameterInfo IList_1_t6253_IList_1_set_Item_m32562_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TailoringInfo_t1190_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32562_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.TailoringInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32562_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6253_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6253_IList_1_set_Item_m32562_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32562_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6253_MethodInfos[] =
{
	&IList_1_IndexOf_m32563_MethodInfo,
	&IList_1_Insert_m32564_MethodInfo,
	&IList_1_RemoveAt_m32565_MethodInfo,
	&IList_1_get_Item_m32561_MethodInfo,
	&IList_1_set_Item_m32562_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6253_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6252_il2cpp_TypeInfo,
	&IEnumerable_1_t6254_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6253_0_0_0;
extern Il2CppType IList_1_t6253_1_0_0;
struct IList_1_t6253;
extern Il2CppGenericClass IList_1_t6253_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6253_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6253_MethodInfos/* methods */
	, IList_1_t6253_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6253_il2cpp_TypeInfo/* element_class */
	, IList_1_t6253_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6253_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6253_0_0_0/* byval_arg */
	, &IList_1_t6253_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6253_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4817_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Contraction
#include "mscorlib_Mono_Globalization_Unicode_Contraction.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo IEnumerator_1_get_Current_m32566_MethodInfo;
static PropertyInfo IEnumerator_1_t4817____Current_PropertyInfo = 
{
	&IEnumerator_1_t4817_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32566_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4817_PropertyInfos[] =
{
	&IEnumerator_1_t4817____Current_PropertyInfo,
	NULL
};
extern Il2CppType Contraction_t1191_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32566_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32566_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4817_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t1191_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32566_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4817_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32566_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4817_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4817_0_0_0;
extern Il2CppType IEnumerator_1_t4817_1_0_0;
struct IEnumerator_1_t4817;
extern Il2CppGenericClass IEnumerator_1_t4817_GenericClass;
TypeInfo IEnumerator_1_t4817_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4817_MethodInfos/* methods */
	, IEnumerator_1_t4817_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4817_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4817_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4817_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4817_0_0_0/* byval_arg */
	, &IEnumerator_1_t4817_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4817_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_403.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3374_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_403MethodDeclarations.h"

extern TypeInfo Contraction_t1191_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18770_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContraction_t1191_m24901_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Contraction>(System.Int32)
#define Array_InternalArray__get_Item_TisContraction_t1191_m24901(__this, p0, method) (Contraction_t1191 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3374____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3374, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3374____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3374, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3374_FieldInfos[] =
{
	&InternalEnumerator_1_t3374____array_0_FieldInfo,
	&InternalEnumerator_1_t3374____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18767_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3374____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3374_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18767_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3374____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3374_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18770_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3374_PropertyInfos[] =
{
	&InternalEnumerator_1_t3374____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3374____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3374_InternalEnumerator_1__ctor_m18766_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18766_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18766_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3374_InternalEnumerator_1__ctor_m18766_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18766_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18767_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18767_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18767_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18768_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18768_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18768_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18769_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18769_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18769_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1191_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18770_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Contraction>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18770_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t1191_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18770_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3374_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18766_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18767_MethodInfo,
	&InternalEnumerator_1_Dispose_m18768_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18769_MethodInfo,
	&InternalEnumerator_1_get_Current_m18770_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18769_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18768_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3374_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18767_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18769_MethodInfo,
	&InternalEnumerator_1_Dispose_m18768_MethodInfo,
	&InternalEnumerator_1_get_Current_m18770_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3374_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4817_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3374_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4817_il2cpp_TypeInfo, 7},
};
extern TypeInfo Contraction_t1191_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3374_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18770_MethodInfo/* Method Usage */,
	&Contraction_t1191_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContraction_t1191_m24901_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3374_0_0_0;
extern Il2CppType InternalEnumerator_1_t3374_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3374_GenericClass;
TypeInfo InternalEnumerator_1_t3374_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3374_MethodInfos/* methods */
	, InternalEnumerator_1_t3374_PropertyInfos/* properties */
	, InternalEnumerator_1_t3374_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3374_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3374_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3374_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3374_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3374_1_0_0/* this_arg */
	, InternalEnumerator_1_t3374_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3374_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3374_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3374)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6255_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo ICollection_1_get_Count_m32567_MethodInfo;
static PropertyInfo ICollection_1_t6255____Count_PropertyInfo = 
{
	&ICollection_1_t6255_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32567_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32568_MethodInfo;
static PropertyInfo ICollection_1_t6255____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6255_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32568_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6255_PropertyInfos[] =
{
	&ICollection_1_t6255____Count_PropertyInfo,
	&ICollection_1_t6255____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32567_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_Count()
MethodInfo ICollection_1_get_Count_m32567_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32567_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32568_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32568_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32568_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1191_0_0_0;
extern Il2CppType Contraction_t1191_0_0_0;
static ParameterInfo ICollection_1_t6255_ICollection_1_Add_m32569_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1191_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32569_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Add(T)
MethodInfo ICollection_1_Add_m32569_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6255_ICollection_1_Add_m32569_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32569_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32570_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Clear()
MethodInfo ICollection_1_Clear_m32570_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32570_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1191_0_0_0;
static ParameterInfo ICollection_1_t6255_ICollection_1_Contains_m32571_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1191_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32571_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Contains(T)
MethodInfo ICollection_1_Contains_m32571_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6255_ICollection_1_Contains_m32571_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32571_GenericMethod/* genericMethod */

};
extern Il2CppType ContractionU5BU5D_t1197_0_0_0;
extern Il2CppType ContractionU5BU5D_t1197_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6255_ICollection_1_CopyTo_m32572_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractionU5BU5D_t1197_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32572_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32572_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6255_ICollection_1_CopyTo_m32572_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32572_GenericMethod/* genericMethod */

};
extern Il2CppType Contraction_t1191_0_0_0;
static ParameterInfo ICollection_1_t6255_ICollection_1_Remove_m32573_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1191_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32573_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Contraction>::Remove(T)
MethodInfo ICollection_1_Remove_m32573_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6255_ICollection_1_Remove_m32573_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32573_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6255_MethodInfos[] =
{
	&ICollection_1_get_Count_m32567_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32568_MethodInfo,
	&ICollection_1_Add_m32569_MethodInfo,
	&ICollection_1_Clear_m32570_MethodInfo,
	&ICollection_1_Contains_m32571_MethodInfo,
	&ICollection_1_CopyTo_m32572_MethodInfo,
	&ICollection_1_Remove_m32573_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6257_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6255_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6257_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6255_0_0_0;
extern Il2CppType ICollection_1_t6255_1_0_0;
struct ICollection_1_t6255;
extern Il2CppGenericClass ICollection_1_t6255_GenericClass;
TypeInfo ICollection_1_t6255_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6255_MethodInfos/* methods */
	, ICollection_1_t6255_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6255_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6255_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6255_0_0_0/* byval_arg */
	, &ICollection_1_t6255_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6255_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>
extern Il2CppType IEnumerator_1_t4817_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32574_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Contraction>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32574_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6257_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4817_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32574_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6257_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32574_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6257_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6257_0_0_0;
extern Il2CppType IEnumerable_1_t6257_1_0_0;
struct IEnumerable_1_t6257;
extern Il2CppGenericClass IEnumerable_1_t6257_GenericClass;
TypeInfo IEnumerable_1_t6257_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6257_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6257_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6257_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6257_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6257_0_0_0/* byval_arg */
	, &IEnumerable_1_t6257_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6257_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6256_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>
extern MethodInfo IList_1_get_Item_m32575_MethodInfo;
extern MethodInfo IList_1_set_Item_m32576_MethodInfo;
static PropertyInfo IList_1_t6256____Item_PropertyInfo = 
{
	&IList_1_t6256_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32575_MethodInfo/* get */
	, &IList_1_set_Item_m32576_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6256_PropertyInfos[] =
{
	&IList_1_t6256____Item_PropertyInfo,
	NULL
};
extern Il2CppType Contraction_t1191_0_0_0;
static ParameterInfo IList_1_t6256_IList_1_IndexOf_m32577_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Contraction_t1191_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32577_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32577_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6256_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6256_IList_1_IndexOf_m32577_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32577_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Contraction_t1191_0_0_0;
static ParameterInfo IList_1_t6256_IList_1_Insert_m32578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Contraction_t1191_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32578_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32578_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6256_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6256_IList_1_Insert_m32578_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32578_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6256_IList_1_RemoveAt_m32579_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32579_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32579_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6256_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6256_IList_1_RemoveAt_m32579_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32579_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6256_IList_1_get_Item_m32575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Contraction_t1191_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32575_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32575_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6256_il2cpp_TypeInfo/* declaring_type */
	, &Contraction_t1191_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6256_IList_1_get_Item_m32575_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32575_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Contraction_t1191_0_0_0;
static ParameterInfo IList_1_t6256_IList_1_set_Item_m32576_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Contraction_t1191_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32576_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Contraction>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32576_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6256_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6256_IList_1_set_Item_m32576_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32576_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6256_MethodInfos[] =
{
	&IList_1_IndexOf_m32577_MethodInfo,
	&IList_1_Insert_m32578_MethodInfo,
	&IList_1_RemoveAt_m32579_MethodInfo,
	&IList_1_get_Item_m32575_MethodInfo,
	&IList_1_set_Item_m32576_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6256_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6255_il2cpp_TypeInfo,
	&IEnumerable_1_t6257_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6256_0_0_0;
extern Il2CppType IList_1_t6256_1_0_0;
struct IList_1_t6256;
extern Il2CppGenericClass IList_1_t6256_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6256_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6256_MethodInfos/* methods */
	, IList_1_t6256_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6256_il2cpp_TypeInfo/* element_class */
	, IList_1_t6256_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6256_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6256_0_0_0/* byval_arg */
	, &IList_1_t6256_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6256_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4819_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.Level2Map
#include "mscorlib_Mono_Globalization_Unicode_Level2Map.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo IEnumerator_1_get_Current_m32580_MethodInfo;
static PropertyInfo IEnumerator_1_t4819____Current_PropertyInfo = 
{
	&IEnumerator_1_t4819_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32580_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4819_PropertyInfos[] =
{
	&IEnumerator_1_t4819____Current_PropertyInfo,
	NULL
};
extern Il2CppType Level2Map_t1193_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32580_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32580_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4819_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t1193_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32580_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4819_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32580_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4819_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4819_0_0_0;
extern Il2CppType IEnumerator_1_t4819_1_0_0;
struct IEnumerator_1_t4819;
extern Il2CppGenericClass IEnumerator_1_t4819_GenericClass;
TypeInfo IEnumerator_1_t4819_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4819_MethodInfos/* methods */
	, IEnumerator_1_t4819_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4819_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4819_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4819_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4819_0_0_0/* byval_arg */
	, &IEnumerator_1_t4819_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4819_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_404.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3375_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_404MethodDeclarations.h"

extern TypeInfo Level2Map_t1193_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18775_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLevel2Map_t1193_m24912_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.Level2Map>(System.Int32)
#define Array_InternalArray__get_Item_TisLevel2Map_t1193_m24912(__this, p0, method) (Level2Map_t1193 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3375____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3375, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3375____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3375, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3375_FieldInfos[] =
{
	&InternalEnumerator_1_t3375____array_0_FieldInfo,
	&InternalEnumerator_1_t3375____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18772_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3375____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3375_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18772_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3375____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3375_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18775_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3375_PropertyInfos[] =
{
	&InternalEnumerator_1_t3375____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3375____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3375_InternalEnumerator_1__ctor_m18771_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18771_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18771_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3375_InternalEnumerator_1__ctor_m18771_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18771_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18772_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18772_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18772_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18773_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18773_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18773_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18774_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18774_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18774_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1193_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18775_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.Level2Map>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18775_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t1193_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18775_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3375_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18771_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18772_MethodInfo,
	&InternalEnumerator_1_Dispose_m18773_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18774_MethodInfo,
	&InternalEnumerator_1_get_Current_m18775_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18774_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18773_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3375_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18772_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18774_MethodInfo,
	&InternalEnumerator_1_Dispose_m18773_MethodInfo,
	&InternalEnumerator_1_get_Current_m18775_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3375_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4819_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3375_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4819_il2cpp_TypeInfo, 7},
};
extern TypeInfo Level2Map_t1193_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3375_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18775_MethodInfo/* Method Usage */,
	&Level2Map_t1193_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisLevel2Map_t1193_m24912_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3375_0_0_0;
extern Il2CppType InternalEnumerator_1_t3375_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3375_GenericClass;
TypeInfo InternalEnumerator_1_t3375_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3375_MethodInfos/* methods */
	, InternalEnumerator_1_t3375_PropertyInfos/* properties */
	, InternalEnumerator_1_t3375_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3375_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3375_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3375_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3375_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3375_1_0_0/* this_arg */
	, InternalEnumerator_1_t3375_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3375_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3375_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3375)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6258_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo ICollection_1_get_Count_m32581_MethodInfo;
static PropertyInfo ICollection_1_t6258____Count_PropertyInfo = 
{
	&ICollection_1_t6258_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32581_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32582_MethodInfo;
static PropertyInfo ICollection_1_t6258____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6258_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32582_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6258_PropertyInfos[] =
{
	&ICollection_1_t6258____Count_PropertyInfo,
	&ICollection_1_t6258____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32581_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_Count()
MethodInfo ICollection_1_get_Count_m32581_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32581_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32582_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32582_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32582_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1193_0_0_0;
extern Il2CppType Level2Map_t1193_0_0_0;
static ParameterInfo ICollection_1_t6258_ICollection_1_Add_m32583_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1193_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32583_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Add(T)
MethodInfo ICollection_1_Add_m32583_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6258_ICollection_1_Add_m32583_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32583_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32584_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Clear()
MethodInfo ICollection_1_Clear_m32584_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32584_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1193_0_0_0;
static ParameterInfo ICollection_1_t6258_ICollection_1_Contains_m32585_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1193_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32585_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Contains(T)
MethodInfo ICollection_1_Contains_m32585_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6258_ICollection_1_Contains_m32585_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32585_GenericMethod/* genericMethod */

};
extern Il2CppType Level2MapU5BU5D_t1198_0_0_0;
extern Il2CppType Level2MapU5BU5D_t1198_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6258_ICollection_1_CopyTo_m32586_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Level2MapU5BU5D_t1198_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32586_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32586_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6258_ICollection_1_CopyTo_m32586_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32586_GenericMethod/* genericMethod */

};
extern Il2CppType Level2Map_t1193_0_0_0;
static ParameterInfo ICollection_1_t6258_ICollection_1_Remove_m32587_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1193_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32587_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.Level2Map>::Remove(T)
MethodInfo ICollection_1_Remove_m32587_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6258_ICollection_1_Remove_m32587_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32587_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6258_MethodInfos[] =
{
	&ICollection_1_get_Count_m32581_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32582_MethodInfo,
	&ICollection_1_Add_m32583_MethodInfo,
	&ICollection_1_Clear_m32584_MethodInfo,
	&ICollection_1_Contains_m32585_MethodInfo,
	&ICollection_1_CopyTo_m32586_MethodInfo,
	&ICollection_1_Remove_m32587_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6260_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6258_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6260_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6258_0_0_0;
extern Il2CppType ICollection_1_t6258_1_0_0;
struct ICollection_1_t6258;
extern Il2CppGenericClass ICollection_1_t6258_GenericClass;
TypeInfo ICollection_1_t6258_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6258_MethodInfos/* methods */
	, ICollection_1_t6258_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6258_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6258_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6258_0_0_0/* byval_arg */
	, &ICollection_1_t6258_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6258_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>
extern Il2CppType IEnumerator_1_t4819_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32588_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.Level2Map>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32588_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6260_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4819_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32588_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6260_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32588_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6260_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6260_0_0_0;
extern Il2CppType IEnumerable_1_t6260_1_0_0;
struct IEnumerable_1_t6260;
extern Il2CppGenericClass IEnumerable_1_t6260_GenericClass;
TypeInfo IEnumerable_1_t6260_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6260_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6260_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6260_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6260_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6260_0_0_0/* byval_arg */
	, &IEnumerable_1_t6260_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6260_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6259_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>
extern MethodInfo IList_1_get_Item_m32589_MethodInfo;
extern MethodInfo IList_1_set_Item_m32590_MethodInfo;
static PropertyInfo IList_1_t6259____Item_PropertyInfo = 
{
	&IList_1_t6259_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32589_MethodInfo/* get */
	, &IList_1_set_Item_m32590_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6259_PropertyInfos[] =
{
	&IList_1_t6259____Item_PropertyInfo,
	NULL
};
extern Il2CppType Level2Map_t1193_0_0_0;
static ParameterInfo IList_1_t6259_IList_1_IndexOf_m32591_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1193_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32591_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32591_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6259_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6259_IList_1_IndexOf_m32591_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32591_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Level2Map_t1193_0_0_0;
static ParameterInfo IList_1_t6259_IList_1_Insert_m32592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1193_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32592_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32592_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6259_IList_1_Insert_m32592_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32592_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6259_IList_1_RemoveAt_m32593_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32593_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32593_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6259_IList_1_RemoveAt_m32593_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32593_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6259_IList_1_get_Item_m32589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Level2Map_t1193_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32589_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32589_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6259_il2cpp_TypeInfo/* declaring_type */
	, &Level2Map_t1193_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6259_IList_1_get_Item_m32589_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32589_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Level2Map_t1193_0_0_0;
static ParameterInfo IList_1_t6259_IList_1_set_Item_m32590_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Level2Map_t1193_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32590_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.Level2Map>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32590_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6259_IList_1_set_Item_m32590_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32590_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6259_MethodInfos[] =
{
	&IList_1_IndexOf_m32591_MethodInfo,
	&IList_1_Insert_m32592_MethodInfo,
	&IList_1_RemoveAt_m32593_MethodInfo,
	&IList_1_get_Item_m32589_MethodInfo,
	&IList_1_set_Item_m32590_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6259_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6258_il2cpp_TypeInfo,
	&IEnumerable_1_t6260_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6259_0_0_0;
extern Il2CppType IList_1_t6259_1_0_0;
struct IList_1_t6259;
extern Il2CppGenericClass IList_1_t6259_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6259_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6259_MethodInfos/* methods */
	, IList_1_t6259_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6259_il2cpp_TypeInfo/* element_class */
	, IList_1_t6259_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6259_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6259_0_0_0/* byval_arg */
	, &IList_1_t6259_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6259_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4821_il2cpp_TypeInfo;

// Mono.Globalization.Unicode.SimpleCollator/ExtenderType
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator_ExtenderT.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo IEnumerator_1_get_Current_m32594_MethodInfo;
static PropertyInfo IEnumerator_1_t4821____Current_PropertyInfo = 
{
	&IEnumerator_1_t4821_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32594_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4821_PropertyInfos[] =
{
	&IEnumerator_1_t4821____Current_PropertyInfo,
	NULL
};
extern Il2CppType ExtenderType_t1203_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t1203 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32594_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32594_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4821_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t1203_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t1203/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32594_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4821_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32594_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4821_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4821_0_0_0;
extern Il2CppType IEnumerator_1_t4821_1_0_0;
struct IEnumerator_1_t4821;
extern Il2CppGenericClass IEnumerator_1_t4821_GenericClass;
TypeInfo IEnumerator_1_t4821_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4821_MethodInfos/* methods */
	, IEnumerator_1_t4821_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4821_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4821_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4821_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4821_0_0_0/* byval_arg */
	, &IEnumerator_1_t4821_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4821_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_405.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3376_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_405MethodDeclarations.h"

extern TypeInfo ExtenderType_t1203_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18780_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisExtenderType_t1203_m24923_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisExtenderType_t1203_m24923 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18776_MethodInfo;
 void InternalEnumerator_1__ctor_m18776 (InternalEnumerator_1_t3376 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777 (InternalEnumerator_1_t3376 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m18780(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18780_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ExtenderType_t1203_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18778_MethodInfo;
 void InternalEnumerator_1_Dispose_m18778 (InternalEnumerator_1_t3376 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18779_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18779 (InternalEnumerator_1_t3376 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m18780 (InternalEnumerator_1_t3376 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisExtenderType_t1203_m24923(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisExtenderType_t1203_m24923_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3376____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3376, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3376____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3376, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3376_FieldInfos[] =
{
	&InternalEnumerator_1_t3376____array_0_FieldInfo,
	&InternalEnumerator_1_t3376____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3376____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3376_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3376____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3376_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18780_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3376_PropertyInfos[] =
{
	&InternalEnumerator_1_t3376____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3376____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3376_InternalEnumerator_1__ctor_m18776_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18776_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18776_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18776/* method */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3376_InternalEnumerator_1__ctor_m18776_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18776_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777/* method */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18778_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18778_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18778/* method */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18778_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18779_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18779_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18779/* method */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18779_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1203_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t1203 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18780_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18780_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18780/* method */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t1203_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t1203/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18780_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3376_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18776_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777_MethodInfo,
	&InternalEnumerator_1_Dispose_m18778_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18779_MethodInfo,
	&InternalEnumerator_1_get_Current_m18780_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3376_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18777_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18779_MethodInfo,
	&InternalEnumerator_1_Dispose_m18778_MethodInfo,
	&InternalEnumerator_1_get_Current_m18780_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3376_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4821_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3376_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4821_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3376_0_0_0;
extern Il2CppType InternalEnumerator_1_t3376_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3376_GenericClass;
TypeInfo InternalEnumerator_1_t3376_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3376_MethodInfos/* methods */
	, InternalEnumerator_1_t3376_PropertyInfos/* properties */
	, InternalEnumerator_1_t3376_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3376_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3376_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3376_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3376_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3376_1_0_0/* this_arg */
	, InternalEnumerator_1_t3376_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3376_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3376)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6261_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo ICollection_1_get_Count_m32595_MethodInfo;
static PropertyInfo ICollection_1_t6261____Count_PropertyInfo = 
{
	&ICollection_1_t6261_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32595_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32596_MethodInfo;
static PropertyInfo ICollection_1_t6261____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6261_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32596_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6261_PropertyInfos[] =
{
	&ICollection_1_t6261____Count_PropertyInfo,
	&ICollection_1_t6261____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32595_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Count()
MethodInfo ICollection_1_get_Count_m32595_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32595_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32596_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32596_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32596_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1203_0_0_0;
extern Il2CppType ExtenderType_t1203_0_0_0;
static ParameterInfo ICollection_1_t6261_ICollection_1_Add_m32597_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1203_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32597_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Add(T)
MethodInfo ICollection_1_Add_m32597_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6261_ICollection_1_Add_m32597_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32597_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32598_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Clear()
MethodInfo ICollection_1_Clear_m32598_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32598_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1203_0_0_0;
static ParameterInfo ICollection_1_t6261_ICollection_1_Contains_m32599_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1203_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32599_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Contains(T)
MethodInfo ICollection_1_Contains_m32599_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6261_ICollection_1_Contains_m32599_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32599_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderTypeU5BU5D_t3639_0_0_0;
extern Il2CppType ExtenderTypeU5BU5D_t3639_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6261_ICollection_1_CopyTo_m32600_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderTypeU5BU5D_t3639_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32600_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32600_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6261_ICollection_1_CopyTo_m32600_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32600_GenericMethod/* genericMethod */

};
extern Il2CppType ExtenderType_t1203_0_0_0;
static ParameterInfo ICollection_1_t6261_ICollection_1_Remove_m32601_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1203_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32601_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Remove(T)
MethodInfo ICollection_1_Remove_m32601_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6261_ICollection_1_Remove_m32601_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32601_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6261_MethodInfos[] =
{
	&ICollection_1_get_Count_m32595_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32596_MethodInfo,
	&ICollection_1_Add_m32597_MethodInfo,
	&ICollection_1_Clear_m32598_MethodInfo,
	&ICollection_1_Contains_m32599_MethodInfo,
	&ICollection_1_CopyTo_m32600_MethodInfo,
	&ICollection_1_Remove_m32601_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6263_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6261_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6263_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6261_0_0_0;
extern Il2CppType ICollection_1_t6261_1_0_0;
struct ICollection_1_t6261;
extern Il2CppGenericClass ICollection_1_t6261_GenericClass;
TypeInfo ICollection_1_t6261_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6261_MethodInfos/* methods */
	, ICollection_1_t6261_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6261_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6261_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6261_0_0_0/* byval_arg */
	, &ICollection_1_t6261_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6261_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern Il2CppType IEnumerator_1_t4821_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32602_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32602_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6263_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4821_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32602_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6263_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32602_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6263_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6263_0_0_0;
extern Il2CppType IEnumerable_1_t6263_1_0_0;
struct IEnumerable_1_t6263;
extern Il2CppGenericClass IEnumerable_1_t6263_GenericClass;
TypeInfo IEnumerable_1_t6263_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6263_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6263_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6263_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6263_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6263_0_0_0/* byval_arg */
	, &IEnumerable_1_t6263_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6263_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6262_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>
extern MethodInfo IList_1_get_Item_m32603_MethodInfo;
extern MethodInfo IList_1_set_Item_m32604_MethodInfo;
static PropertyInfo IList_1_t6262____Item_PropertyInfo = 
{
	&IList_1_t6262_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32603_MethodInfo/* get */
	, &IList_1_set_Item_m32604_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6262_PropertyInfos[] =
{
	&IList_1_t6262____Item_PropertyInfo,
	NULL
};
extern Il2CppType ExtenderType_t1203_0_0_0;
static ParameterInfo IList_1_t6262_IList_1_IndexOf_m32605_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1203_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32605_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32605_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6262_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6262_IList_1_IndexOf_m32605_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32605_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ExtenderType_t1203_0_0_0;
static ParameterInfo IList_1_t6262_IList_1_Insert_m32606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1203_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32606_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32606_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6262_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6262_IList_1_Insert_m32606_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32606_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6262_IList_1_RemoveAt_m32607_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32607_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32607_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6262_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6262_IList_1_RemoveAt_m32607_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32607_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6262_IList_1_get_Item_m32603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ExtenderType_t1203_0_0_0;
extern void* RuntimeInvoker_ExtenderType_t1203_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32603_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32603_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6262_il2cpp_TypeInfo/* declaring_type */
	, &ExtenderType_t1203_0_0_0/* return_type */
	, RuntimeInvoker_ExtenderType_t1203_Int32_t18/* invoker_method */
	, IList_1_t6262_IList_1_get_Item_m32603_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32603_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ExtenderType_t1203_0_0_0;
static ParameterInfo IList_1_t6262_IList_1_set_Item_m32604_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ExtenderType_t1203_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32604_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Globalization.Unicode.SimpleCollator/ExtenderType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32604_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6262_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6262_IList_1_set_Item_m32604_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32604_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6262_MethodInfos[] =
{
	&IList_1_IndexOf_m32605_MethodInfo,
	&IList_1_Insert_m32606_MethodInfo,
	&IList_1_RemoveAt_m32607_MethodInfo,
	&IList_1_get_Item_m32603_MethodInfo,
	&IList_1_set_Item_m32604_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6262_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6261_il2cpp_TypeInfo,
	&IEnumerable_1_t6263_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6262_0_0_0;
extern Il2CppType IList_1_t6262_1_0_0;
struct IList_1_t6262;
extern Il2CppGenericClass IList_1_t6262_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6262_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6262_MethodInfos/* methods */
	, IList_1_t6262_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6262_il2cpp_TypeInfo/* element_class */
	, IList_1_t6262_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6262_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6262_0_0_0/* byval_arg */
	, &IList_1_t6262_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6262_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4823_il2cpp_TypeInfo;

// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IEnumerator_1_get_Current_m32608_MethodInfo;
static PropertyInfo IEnumerator_1_t4823____Current_PropertyInfo = 
{
	&IEnumerator_1_t4823_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32608_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4823_PropertyInfos[] =
{
	&IEnumerator_1_t4823____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t1212 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32608_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32608_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4823_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t1212_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t1212/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32608_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4823_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32608_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4823_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4823_0_0_0;
extern Il2CppType IEnumerator_1_t4823_1_0_0;
struct IEnumerator_1_t4823;
extern Il2CppGenericClass IEnumerator_1_t4823_GenericClass;
TypeInfo IEnumerator_1_t4823_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4823_MethodInfos/* methods */
	, IEnumerator_1_t4823_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4823_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4823_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4823_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4823_0_0_0/* byval_arg */
	, &IEnumerator_1_t4823_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4823_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_406.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3377_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_406MethodDeclarations.h"

extern TypeInfo ConfidenceFactor_t1212_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18785_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConfidenceFactor_t1212_m24934_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.Prime.ConfidenceFactor>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConfidenceFactor_t1212_m24934 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18781_MethodInfo;
 void InternalEnumerator_1__ctor_m18781 (InternalEnumerator_1_t3377 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782 (InternalEnumerator_1_t3377 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m18785(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18785_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ConfidenceFactor_t1212_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18783_MethodInfo;
 void InternalEnumerator_1_Dispose_m18783 (InternalEnumerator_1_t3377 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18784_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18784 (InternalEnumerator_1_t3377 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m18785 (InternalEnumerator_1_t3377 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisConfidenceFactor_t1212_m24934(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConfidenceFactor_t1212_m24934_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3377____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3377, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3377____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3377, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3377_FieldInfos[] =
{
	&InternalEnumerator_1_t3377____array_0_FieldInfo,
	&InternalEnumerator_1_t3377____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3377____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3377_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3377____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3377_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3377_PropertyInfos[] =
{
	&InternalEnumerator_1_t3377____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3377____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3377_InternalEnumerator_1__ctor_m18781_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18781_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18781_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18781/* method */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3377_InternalEnumerator_1__ctor_m18781_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18781_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782/* method */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18783_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18783_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18783/* method */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18783_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18784_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18784_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18784/* method */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18784_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t1212 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18785_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.Prime.ConfidenceFactor>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18785_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18785/* method */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t1212_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t1212/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18785_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3377_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18781_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782_MethodInfo,
	&InternalEnumerator_1_Dispose_m18783_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18784_MethodInfo,
	&InternalEnumerator_1_get_Current_m18785_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3377_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18782_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18784_MethodInfo,
	&InternalEnumerator_1_Dispose_m18783_MethodInfo,
	&InternalEnumerator_1_get_Current_m18785_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3377_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4823_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3377_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4823_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3377_0_0_0;
extern Il2CppType InternalEnumerator_1_t3377_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3377_GenericClass;
TypeInfo InternalEnumerator_1_t3377_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3377_MethodInfos/* methods */
	, InternalEnumerator_1_t3377_PropertyInfos/* properties */
	, InternalEnumerator_1_t3377_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3377_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3377_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3377_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3377_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3377_1_0_0/* this_arg */
	, InternalEnumerator_1_t3377_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3377_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3377)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6264_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo ICollection_1_get_Count_m32609_MethodInfo;
static PropertyInfo ICollection_1_t6264____Count_PropertyInfo = 
{
	&ICollection_1_t6264_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32609_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32610_MethodInfo;
static PropertyInfo ICollection_1_t6264____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6264_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32610_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6264_PropertyInfos[] =
{
	&ICollection_1_t6264____Count_PropertyInfo,
	&ICollection_1_t6264____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32609_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_Count()
MethodInfo ICollection_1_get_Count_m32609_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32609_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32610_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32610_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32610_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
static ParameterInfo ICollection_1_t6264_ICollection_1_Add_m32611_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1212_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32611_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Add(T)
MethodInfo ICollection_1_Add_m32611_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6264_ICollection_1_Add_m32611_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32611_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32612_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Clear()
MethodInfo ICollection_1_Clear_m32612_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32612_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
static ParameterInfo ICollection_1_t6264_ICollection_1_Contains_m32613_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1212_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32613_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Contains(T)
MethodInfo ICollection_1_Contains_m32613_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6264_ICollection_1_Contains_m32613_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32613_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactorU5BU5D_t3640_0_0_0;
extern Il2CppType ConfidenceFactorU5BU5D_t3640_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6264_ICollection_1_CopyTo_m32614_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactorU5BU5D_t3640_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32614_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32614_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6264_ICollection_1_CopyTo_m32614_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32614_GenericMethod/* genericMethod */

};
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
static ParameterInfo ICollection_1_t6264_ICollection_1_Remove_m32615_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1212_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32615_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.Prime.ConfidenceFactor>::Remove(T)
MethodInfo ICollection_1_Remove_m32615_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6264_ICollection_1_Remove_m32615_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32615_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6264_MethodInfos[] =
{
	&ICollection_1_get_Count_m32609_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32610_MethodInfo,
	&ICollection_1_Add_m32611_MethodInfo,
	&ICollection_1_Clear_m32612_MethodInfo,
	&ICollection_1_Contains_m32613_MethodInfo,
	&ICollection_1_CopyTo_m32614_MethodInfo,
	&ICollection_1_Remove_m32615_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6266_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6264_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6266_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6264_0_0_0;
extern Il2CppType ICollection_1_t6264_1_0_0;
struct ICollection_1_t6264;
extern Il2CppGenericClass ICollection_1_t6264_GenericClass;
TypeInfo ICollection_1_t6264_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6264_MethodInfos/* methods */
	, ICollection_1_t6264_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6264_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6264_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6264_0_0_0/* byval_arg */
	, &ICollection_1_t6264_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6264_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>
extern Il2CppType IEnumerator_1_t4823_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32616_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.Prime.ConfidenceFactor>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32616_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6266_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4823_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32616_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6266_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32616_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6266_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6266_0_0_0;
extern Il2CppType IEnumerable_1_t6266_1_0_0;
struct IEnumerable_1_t6266;
extern Il2CppGenericClass IEnumerable_1_t6266_GenericClass;
TypeInfo IEnumerable_1_t6266_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6266_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6266_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6266_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6266_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6266_0_0_0/* byval_arg */
	, &IEnumerable_1_t6266_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6266_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6265_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>
extern MethodInfo IList_1_get_Item_m32617_MethodInfo;
extern MethodInfo IList_1_set_Item_m32618_MethodInfo;
static PropertyInfo IList_1_t6265____Item_PropertyInfo = 
{
	&IList_1_t6265_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32617_MethodInfo/* get */
	, &IList_1_set_Item_m32618_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6265_PropertyInfos[] =
{
	&IList_1_t6265____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
static ParameterInfo IList_1_t6265_IList_1_IndexOf_m32619_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1212_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32619_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32619_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6265_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6265_IList_1_IndexOf_m32619_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32619_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
static ParameterInfo IList_1_t6265_IList_1_Insert_m32620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1212_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32620_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32620_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6265_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6265_IList_1_Insert_m32620_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32620_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6265_IList_1_RemoveAt_m32621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32621_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32621_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6265_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6265_IList_1_RemoveAt_m32621_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32621_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6265_IList_1_get_Item_m32617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
extern void* RuntimeInvoker_ConfidenceFactor_t1212_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32617_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32617_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6265_il2cpp_TypeInfo/* declaring_type */
	, &ConfidenceFactor_t1212_0_0_0/* return_type */
	, RuntimeInvoker_ConfidenceFactor_t1212_Int32_t18/* invoker_method */
	, IList_1_t6265_IList_1_get_Item_m32617_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32617_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ConfidenceFactor_t1212_0_0_0;
static ParameterInfo IList_1_t6265_IList_1_set_Item_m32618_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConfidenceFactor_t1212_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32618_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.Prime.ConfidenceFactor>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32618_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6265_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6265_IList_1_set_Item_m32618_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32618_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6265_MethodInfos[] =
{
	&IList_1_IndexOf_m32619_MethodInfo,
	&IList_1_Insert_m32620_MethodInfo,
	&IList_1_RemoveAt_m32621_MethodInfo,
	&IList_1_get_Item_m32617_MethodInfo,
	&IList_1_set_Item_m32618_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6265_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6264_il2cpp_TypeInfo,
	&IEnumerable_1_t6266_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6265_0_0_0;
extern Il2CppType IList_1_t6265_1_0_0;
struct IList_1_t6265;
extern Il2CppGenericClass IList_1_t6265_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6265_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6265_MethodInfos/* methods */
	, IList_1_t6265_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6265_il2cpp_TypeInfo/* element_class */
	, IList_1_t6265_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6265_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6265_0_0_0/* byval_arg */
	, &IList_1_t6265_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6265_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4825_il2cpp_TypeInfo;

// Mono.Math.BigInteger
#include "mscorlib_Mono_Math_BigInteger.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>
extern MethodInfo IEnumerator_1_get_Current_m32622_MethodInfo;
static PropertyInfo IEnumerator_1_t4825____Current_PropertyInfo = 
{
	&IEnumerator_1_t4825_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32622_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4825_PropertyInfos[] =
{
	&IEnumerator_1_t4825____Current_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t1210_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32622_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32622_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4825_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t1210_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m32622_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4825_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32622_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4825_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4825_0_0_0;
extern Il2CppType IEnumerator_1_t4825_1_0_0;
struct IEnumerator_1_t4825;
extern Il2CppGenericClass IEnumerator_1_t4825_GenericClass;
TypeInfo IEnumerator_1_t4825_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4825_MethodInfos/* methods */
	, IEnumerator_1_t4825_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4825_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4825_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4825_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4825_0_0_0/* byval_arg */
	, &IEnumerator_1_t4825_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4825_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_407.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3378_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_407MethodDeclarations.h"

extern TypeInfo BigInteger_t1210_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18790_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisBigInteger_t1210_m24945_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger>(System.Int32)
#define Array_InternalArray__get_Item_TisBigInteger_t1210_m24945(__this, p0, method) (BigInteger_t1210 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3378____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3378, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3378____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3378, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3378_FieldInfos[] =
{
	&InternalEnumerator_1_t3378____array_0_FieldInfo,
	&InternalEnumerator_1_t3378____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18787_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3378____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3378_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18787_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3378____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3378_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18790_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3378_PropertyInfos[] =
{
	&InternalEnumerator_1_t3378____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3378____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3378_InternalEnumerator_1__ctor_m18786_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18786_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18786_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3378_InternalEnumerator_1__ctor_m18786_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18786_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18787_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18787_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18787_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18788_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18788_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18788_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18789_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18789_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18789_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1210_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18790_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18790_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t1210_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m18790_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3378_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18786_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18787_MethodInfo,
	&InternalEnumerator_1_Dispose_m18788_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18789_MethodInfo,
	&InternalEnumerator_1_get_Current_m18790_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m18789_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m18788_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3378_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18787_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18789_MethodInfo,
	&InternalEnumerator_1_Dispose_m18788_MethodInfo,
	&InternalEnumerator_1_get_Current_m18790_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3378_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4825_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3378_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4825_il2cpp_TypeInfo, 7},
};
extern TypeInfo BigInteger_t1210_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3378_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m18790_MethodInfo/* Method Usage */,
	&BigInteger_t1210_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisBigInteger_t1210_m24945_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3378_0_0_0;
extern Il2CppType InternalEnumerator_1_t3378_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3378_GenericClass;
TypeInfo InternalEnumerator_1_t3378_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3378_MethodInfos/* methods */
	, InternalEnumerator_1_t3378_PropertyInfos/* properties */
	, InternalEnumerator_1_t3378_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3378_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3378_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3378_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3378_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3378_1_0_0/* this_arg */
	, InternalEnumerator_1_t3378_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3378_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3378_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3378)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6267_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>
extern MethodInfo ICollection_1_get_Count_m32623_MethodInfo;
static PropertyInfo ICollection_1_t6267____Count_PropertyInfo = 
{
	&ICollection_1_t6267_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32623_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32624_MethodInfo;
static PropertyInfo ICollection_1_t6267____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6267_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32624_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6267_PropertyInfos[] =
{
	&ICollection_1_t6267____Count_PropertyInfo,
	&ICollection_1_t6267____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32623_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_Count()
MethodInfo ICollection_1_get_Count_m32623_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32623_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32624_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32624_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32624_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1210_0_0_0;
extern Il2CppType BigInteger_t1210_0_0_0;
static ParameterInfo ICollection_1_t6267_ICollection_1_Add_m32625_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1210_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32625_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Add(T)
MethodInfo ICollection_1_Add_m32625_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6267_ICollection_1_Add_m32625_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32625_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32626_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Clear()
MethodInfo ICollection_1_Clear_m32626_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32626_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1210_0_0_0;
static ParameterInfo ICollection_1_t6267_ICollection_1_Contains_m32627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1210_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32627_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Contains(T)
MethodInfo ICollection_1_Contains_m32627_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6267_ICollection_1_Contains_m32627_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32627_GenericMethod/* genericMethod */

};
extern Il2CppType BigIntegerU5BU5D_t1217_0_0_0;
extern Il2CppType BigIntegerU5BU5D_t1217_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6267_ICollection_1_CopyTo_m32628_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &BigIntegerU5BU5D_t1217_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32628_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32628_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6267_ICollection_1_CopyTo_m32628_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32628_GenericMethod/* genericMethod */

};
extern Il2CppType BigInteger_t1210_0_0_0;
static ParameterInfo ICollection_1_t6267_ICollection_1_Remove_m32629_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1210_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32629_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger>::Remove(T)
MethodInfo ICollection_1_Remove_m32629_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6267_ICollection_1_Remove_m32629_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32629_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6267_MethodInfos[] =
{
	&ICollection_1_get_Count_m32623_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32624_MethodInfo,
	&ICollection_1_Add_m32625_MethodInfo,
	&ICollection_1_Clear_m32626_MethodInfo,
	&ICollection_1_Contains_m32627_MethodInfo,
	&ICollection_1_CopyTo_m32628_MethodInfo,
	&ICollection_1_Remove_m32629_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6269_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6267_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6269_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6267_0_0_0;
extern Il2CppType ICollection_1_t6267_1_0_0;
struct ICollection_1_t6267;
extern Il2CppGenericClass ICollection_1_t6267_GenericClass;
TypeInfo ICollection_1_t6267_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6267_MethodInfos/* methods */
	, ICollection_1_t6267_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6267_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6267_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6267_0_0_0/* byval_arg */
	, &ICollection_1_t6267_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6267_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>
extern Il2CppType IEnumerator_1_t4825_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32630_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32630_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6269_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4825_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32630_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6269_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32630_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6269_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6269_0_0_0;
extern Il2CppType IEnumerable_1_t6269_1_0_0;
struct IEnumerable_1_t6269;
extern Il2CppGenericClass IEnumerable_1_t6269_GenericClass;
TypeInfo IEnumerable_1_t6269_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6269_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6269_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6269_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6269_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6269_0_0_0/* byval_arg */
	, &IEnumerable_1_t6269_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6269_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6268_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger>
extern MethodInfo IList_1_get_Item_m32631_MethodInfo;
extern MethodInfo IList_1_set_Item_m32632_MethodInfo;
static PropertyInfo IList_1_t6268____Item_PropertyInfo = 
{
	&IList_1_t6268_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32631_MethodInfo/* get */
	, &IList_1_set_Item_m32632_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6268_PropertyInfos[] =
{
	&IList_1_t6268____Item_PropertyInfo,
	NULL
};
extern Il2CppType BigInteger_t1210_0_0_0;
static ParameterInfo IList_1_t6268_IList_1_IndexOf_m32633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1210_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32633_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32633_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6268_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6268_IList_1_IndexOf_m32633_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32633_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType BigInteger_t1210_0_0_0;
static ParameterInfo IList_1_t6268_IList_1_Insert_m32634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1210_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32634_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32634_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6268_IList_1_Insert_m32634_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32634_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6268_IList_1_RemoveAt_m32635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32635_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32635_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6268_IList_1_RemoveAt_m32635_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32635_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6268_IList_1_get_Item_m32631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType BigInteger_t1210_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32631_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32631_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6268_il2cpp_TypeInfo/* declaring_type */
	, &BigInteger_t1210_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6268_IList_1_get_Item_m32631_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32631_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType BigInteger_t1210_0_0_0;
static ParameterInfo IList_1_t6268_IList_1_set_Item_m32632_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &BigInteger_t1210_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32632_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32632_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6268_IList_1_set_Item_m32632_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32632_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6268_MethodInfos[] =
{
	&IList_1_IndexOf_m32633_MethodInfo,
	&IList_1_Insert_m32634_MethodInfo,
	&IList_1_RemoveAt_m32635_MethodInfo,
	&IList_1_get_Item_m32631_MethodInfo,
	&IList_1_set_Item_m32632_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6268_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6267_il2cpp_TypeInfo,
	&IEnumerable_1_t6269_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6268_0_0_0;
extern Il2CppType IList_1_t6268_1_0_0;
struct IList_1_t6268;
extern Il2CppGenericClass IList_1_t6268_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6268_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6268_MethodInfos/* methods */
	, IList_1_t6268_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6268_il2cpp_TypeInfo/* element_class */
	, IList_1_t6268_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6268_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6268_0_0_0/* byval_arg */
	, &IList_1_t6268_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6268_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4827_il2cpp_TypeInfo;

// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"


// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IEnumerator_1_get_Current_m32636_MethodInfo;
static PropertyInfo IEnumerator_1_t4827____Current_PropertyInfo = 
{
	&IEnumerator_1_t4827_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32636_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4827_PropertyInfos[] =
{
	&IEnumerator_1_t4827____Current_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t1214_0_0_0;
extern void* RuntimeInvoker_Sign_t1214 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32636_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32636_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4827_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t1214_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t1214/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32636_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4827_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32636_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4827_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4827_0_0_0;
extern Il2CppType IEnumerator_1_t4827_1_0_0;
struct IEnumerator_1_t4827;
extern Il2CppGenericClass IEnumerator_1_t4827_GenericClass;
TypeInfo IEnumerator_1_t4827_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4827_MethodInfos/* methods */
	, IEnumerator_1_t4827_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4827_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4827_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4827_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4827_0_0_0/* byval_arg */
	, &IEnumerator_1_t4827_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4827_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_408.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3379_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_408MethodDeclarations.h"

extern TypeInfo Sign_t1214_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18795_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSign_t1214_m24956_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Mono.Math.BigInteger/Sign>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSign_t1214_m24956 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18791_MethodInfo;
 void InternalEnumerator_1__ctor_m18791 (InternalEnumerator_1_t3379 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792 (InternalEnumerator_1_t3379 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m18795(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18795_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Sign_t1214_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18793_MethodInfo;
 void InternalEnumerator_1_Dispose_m18793 (InternalEnumerator_1_t3379 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18794_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18794 (InternalEnumerator_1_t3379 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m18795 (InternalEnumerator_1_t3379 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSign_t1214_m24956(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSign_t1214_m24956_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3379____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3379, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3379____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3379, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3379_FieldInfos[] =
{
	&InternalEnumerator_1_t3379____array_0_FieldInfo,
	&InternalEnumerator_1_t3379____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3379____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3379_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3379____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3379_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18795_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3379_PropertyInfos[] =
{
	&InternalEnumerator_1_t3379____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3379____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3379_InternalEnumerator_1__ctor_m18791_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18791_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18791_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18791/* method */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3379_InternalEnumerator_1__ctor_m18791_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18791_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792/* method */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18793_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18793_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18793/* method */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18793_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18794_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18794_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18794/* method */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18794_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1214_0_0_0;
extern void* RuntimeInvoker_Sign_t1214 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18795_GenericMethod;
// T System.Array/InternalEnumerator`1<Mono.Math.BigInteger/Sign>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18795_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18795/* method */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t1214_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t1214/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18795_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3379_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18791_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792_MethodInfo,
	&InternalEnumerator_1_Dispose_m18793_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18794_MethodInfo,
	&InternalEnumerator_1_get_Current_m18795_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3379_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18792_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18794_MethodInfo,
	&InternalEnumerator_1_Dispose_m18793_MethodInfo,
	&InternalEnumerator_1_get_Current_m18795_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3379_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4827_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3379_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4827_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3379_0_0_0;
extern Il2CppType InternalEnumerator_1_t3379_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3379_GenericClass;
TypeInfo InternalEnumerator_1_t3379_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3379_MethodInfos/* methods */
	, InternalEnumerator_1_t3379_PropertyInfos/* properties */
	, InternalEnumerator_1_t3379_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3379_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3379_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3379_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3379_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3379_1_0_0/* this_arg */
	, InternalEnumerator_1_t3379_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3379_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3379)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6270_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>
extern MethodInfo ICollection_1_get_Count_m32637_MethodInfo;
static PropertyInfo ICollection_1_t6270____Count_PropertyInfo = 
{
	&ICollection_1_t6270_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32637_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32638_MethodInfo;
static PropertyInfo ICollection_1_t6270____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6270_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32638_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6270_PropertyInfos[] =
{
	&ICollection_1_t6270____Count_PropertyInfo,
	&ICollection_1_t6270____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32637_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_Count()
MethodInfo ICollection_1_get_Count_m32637_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32637_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32638_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32638_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32638_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1214_0_0_0;
extern Il2CppType Sign_t1214_0_0_0;
static ParameterInfo ICollection_1_t6270_ICollection_1_Add_m32639_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1214_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32639_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Add(T)
MethodInfo ICollection_1_Add_m32639_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6270_ICollection_1_Add_m32639_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32639_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32640_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Clear()
MethodInfo ICollection_1_Clear_m32640_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32640_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1214_0_0_0;
static ParameterInfo ICollection_1_t6270_ICollection_1_Contains_m32641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1214_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32641_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Contains(T)
MethodInfo ICollection_1_Contains_m32641_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6270_ICollection_1_Contains_m32641_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32641_GenericMethod/* genericMethod */

};
extern Il2CppType SignU5BU5D_t3641_0_0_0;
extern Il2CppType SignU5BU5D_t3641_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6270_ICollection_1_CopyTo_m32642_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SignU5BU5D_t3641_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32642_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32642_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6270_ICollection_1_CopyTo_m32642_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32642_GenericMethod/* genericMethod */

};
extern Il2CppType Sign_t1214_0_0_0;
static ParameterInfo ICollection_1_t6270_ICollection_1_Remove_m32643_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1214_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32643_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Mono.Math.BigInteger/Sign>::Remove(T)
MethodInfo ICollection_1_Remove_m32643_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6270_ICollection_1_Remove_m32643_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32643_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6270_MethodInfos[] =
{
	&ICollection_1_get_Count_m32637_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32638_MethodInfo,
	&ICollection_1_Add_m32639_MethodInfo,
	&ICollection_1_Clear_m32640_MethodInfo,
	&ICollection_1_Contains_m32641_MethodInfo,
	&ICollection_1_CopyTo_m32642_MethodInfo,
	&ICollection_1_Remove_m32643_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6272_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6270_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6272_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6270_0_0_0;
extern Il2CppType ICollection_1_t6270_1_0_0;
struct ICollection_1_t6270;
extern Il2CppGenericClass ICollection_1_t6270_GenericClass;
TypeInfo ICollection_1_t6270_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6270_MethodInfos/* methods */
	, ICollection_1_t6270_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6270_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6270_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6270_0_0_0/* byval_arg */
	, &ICollection_1_t6270_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6270_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>
extern Il2CppType IEnumerator_1_t4827_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32644_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Mono.Math.BigInteger/Sign>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32644_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6272_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4827_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32644_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6272_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32644_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6272_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6272_0_0_0;
extern Il2CppType IEnumerable_1_t6272_1_0_0;
struct IEnumerable_1_t6272;
extern Il2CppGenericClass IEnumerable_1_t6272_GenericClass;
TypeInfo IEnumerable_1_t6272_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6272_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6272_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6272_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6272_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6272_0_0_0/* byval_arg */
	, &IEnumerable_1_t6272_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6272_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6271_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>
extern MethodInfo IList_1_get_Item_m32645_MethodInfo;
extern MethodInfo IList_1_set_Item_m32646_MethodInfo;
static PropertyInfo IList_1_t6271____Item_PropertyInfo = 
{
	&IList_1_t6271_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32645_MethodInfo/* get */
	, &IList_1_set_Item_m32646_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6271_PropertyInfos[] =
{
	&IList_1_t6271____Item_PropertyInfo,
	NULL
};
extern Il2CppType Sign_t1214_0_0_0;
static ParameterInfo IList_1_t6271_IList_1_IndexOf_m32647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Sign_t1214_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32647_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32647_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6271_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6271_IList_1_IndexOf_m32647_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32647_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Sign_t1214_0_0_0;
static ParameterInfo IList_1_t6271_IList_1_Insert_m32648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t1214_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32648_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32648_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6271_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6271_IList_1_Insert_m32648_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32648_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6271_IList_1_RemoveAt_m32649_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32649_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32649_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6271_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6271_IList_1_RemoveAt_m32649_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32649_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6271_IList_1_get_Item_m32645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Sign_t1214_0_0_0;
extern void* RuntimeInvoker_Sign_t1214_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32645_GenericMethod;
// T System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32645_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6271_il2cpp_TypeInfo/* declaring_type */
	, &Sign_t1214_0_0_0/* return_type */
	, RuntimeInvoker_Sign_t1214_Int32_t18/* invoker_method */
	, IList_1_t6271_IList_1_get_Item_m32645_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32645_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Sign_t1214_0_0_0;
static ParameterInfo IList_1_t6271_IList_1_set_Item_m32646_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Sign_t1214_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32646_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Mono.Math.BigInteger/Sign>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32646_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6271_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6271_IList_1_set_Item_m32646_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32646_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6271_MethodInfos[] =
{
	&IList_1_IndexOf_m32647_MethodInfo,
	&IList_1_Insert_m32648_MethodInfo,
	&IList_1_RemoveAt_m32649_MethodInfo,
	&IList_1_get_Item_m32645_MethodInfo,
	&IList_1_set_Item_m32646_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6271_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6270_il2cpp_TypeInfo,
	&IEnumerable_1_t6272_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6271_0_0_0;
extern Il2CppType IList_1_t6271_1_0_0;
struct IList_1_t6271;
extern Il2CppGenericClass IList_1_t6271_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6271_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6271_MethodInfos/* methods */
	, IList_1_t6271_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6271_il2cpp_TypeInfo/* element_class */
	, IList_1_t6271_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6271_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6271_0_0_0/* byval_arg */
	, &IList_1_t6271_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6271_GenericClass/* generic_class */
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
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollectionDebuggerView_1_t3380_il2cpp_TypeInfo;
// System.Collections.Generic.CollectionDebuggerView`1<System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_1_0MethodDeclarations.h"



// Metadata Definition System.Collections.Generic.CollectionDebuggerView`1<System.Object>
static MethodInfo* CollectionDebuggerView_1_t3380_MethodInfos[] =
{
	NULL
};
extern MethodInfo Object_Equals_m1289_MethodInfo;
extern MethodInfo Object_GetHashCode_m1290_MethodInfo;
extern MethodInfo Object_ToString_m1300_MethodInfo;
static MethodInfo* CollectionDebuggerView_1_t3380_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType CollectionDebuggerView_1_t3380_0_0_0;
extern Il2CppType CollectionDebuggerView_1_t3380_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct CollectionDebuggerView_1_t3380;
extern Il2CppGenericClass CollectionDebuggerView_1_t3380_GenericClass;
TypeInfo CollectionDebuggerView_1_t3380_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CollectionDebuggerView`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, CollectionDebuggerView_1_t3380_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CollectionDebuggerView_1_t3380_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CollectionDebuggerView_1_t3380_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CollectionDebuggerView_1_t3380_il2cpp_TypeInfo/* cast_class */
	, &CollectionDebuggerView_1_t3380_0_0_0/* byval_arg */
	, &CollectionDebuggerView_1_t3380_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CollectionDebuggerView_1_t3380_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CollectionDebuggerView_1_t3380)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048832/* flags */
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
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CollectionDebuggerView_2_t3381_il2cpp_TypeInfo;
// System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_CollectionDebuggerView_2_0MethodDeclarations.h"



// Metadata Definition System.Collections.Generic.CollectionDebuggerView`2<System.Object,System.Object>
static MethodInfo* CollectionDebuggerView_2_t3381_MethodInfos[] =
{
	NULL
};
static MethodInfo* CollectionDebuggerView_2_t3381_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType CollectionDebuggerView_2_t3381_0_0_0;
extern Il2CppType CollectionDebuggerView_2_t3381_1_0_0;
struct CollectionDebuggerView_2_t3381;
extern Il2CppGenericClass CollectionDebuggerView_2_t3381_GenericClass;
TypeInfo CollectionDebuggerView_2_t3381_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "CollectionDebuggerView`2"/* name */
	, "System.Collections.Generic"/* namespaze */
	, CollectionDebuggerView_2_t3381_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CollectionDebuggerView_2_t3381_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CollectionDebuggerView_2_t3381_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CollectionDebuggerView_2_t3381_il2cpp_TypeInfo/* cast_class */
	, &CollectionDebuggerView_2_t3381_0_0_0/* byval_arg */
	, &CollectionDebuggerView_2_t3381_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CollectionDebuggerView_2_t3381_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CollectionDebuggerView_2_t3381)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048832/* flags */
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
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t4829_il2cpp_TypeInfo;

// System.Collections.Hashtable/Slot
#include "mscorlib_System_Collections_Hashtable_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>
extern MethodInfo IEnumerator_1_get_Current_m32650_MethodInfo;
static PropertyInfo IEnumerator_1_t4829____Current_PropertyInfo = 
{
	&IEnumerator_1_t4829_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32650_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4829_PropertyInfos[] =
{
	&IEnumerator_1_t4829____Current_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1286_0_0_0;
extern void* RuntimeInvoker_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32650_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32650_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4829_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1286_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1286/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32650_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4829_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32650_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4829_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4829_0_0_0;
extern Il2CppType IEnumerator_1_t4829_1_0_0;
struct IEnumerator_1_t4829;
extern Il2CppGenericClass IEnumerator_1_t4829_GenericClass;
TypeInfo IEnumerator_1_t4829_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4829_MethodInfos/* methods */
	, IEnumerator_1_t4829_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4829_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4829_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4829_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4829_0_0_0/* byval_arg */
	, &IEnumerator_1_t4829_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4829_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_409.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3382_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_409MethodDeclarations.h"

extern TypeInfo Slot_t1286_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18800_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t1286_m24967_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/Slot>(System.Int32)
 Slot_t1286  Array_InternalArray__get_Item_TisSlot_t1286_m24967 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18796_MethodInfo;
 void InternalEnumerator_1__ctor_m18796 (InternalEnumerator_1_t3382 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797 (InternalEnumerator_1_t3382 * __this, MethodInfo* method){
	{
		Slot_t1286  L_0 = InternalEnumerator_1_get_Current_m18800(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18800_MethodInfo);
		Slot_t1286  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Slot_t1286_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18798_MethodInfo;
 void InternalEnumerator_1_Dispose_m18798 (InternalEnumerator_1_t3382 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18799_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18799 (InternalEnumerator_1_t3382 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
 Slot_t1286  InternalEnumerator_1_get_Current_m18800 (InternalEnumerator_1_t3382 * __this, MethodInfo* method){
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
		Slot_t1286  L_8 = Array_InternalArray__get_Item_TisSlot_t1286_m24967(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSlot_t1286_m24967_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3382____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3382, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3382____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3382, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3382_FieldInfos[] =
{
	&InternalEnumerator_1_t3382____array_0_FieldInfo,
	&InternalEnumerator_1_t3382____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3382____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3382_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3382____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3382_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3382_PropertyInfos[] =
{
	&InternalEnumerator_1_t3382____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3382____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3382_InternalEnumerator_1__ctor_m18796_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18796_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18796_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18796/* method */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3382_InternalEnumerator_1__ctor_m18796_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18796_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797/* method */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18798_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18798_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18798/* method */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18798_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18799_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18799_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18799/* method */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18799_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1286_0_0_0;
extern void* RuntimeInvoker_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18800_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/Slot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18800_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18800/* method */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1286_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1286/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18800_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3382_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18796_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797_MethodInfo,
	&InternalEnumerator_1_Dispose_m18798_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18799_MethodInfo,
	&InternalEnumerator_1_get_Current_m18800_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3382_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18797_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18799_MethodInfo,
	&InternalEnumerator_1_Dispose_m18798_MethodInfo,
	&InternalEnumerator_1_get_Current_m18800_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3382_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4829_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3382_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4829_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3382_0_0_0;
extern Il2CppType InternalEnumerator_1_t3382_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3382_GenericClass;
TypeInfo InternalEnumerator_1_t3382_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3382_MethodInfos/* methods */
	, InternalEnumerator_1_t3382_PropertyInfos/* properties */
	, InternalEnumerator_1_t3382_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3382_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3382_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3382_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3382_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3382_1_0_0/* this_arg */
	, InternalEnumerator_1_t3382_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3382_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3382)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6273_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>
extern MethodInfo ICollection_1_get_Count_m32651_MethodInfo;
static PropertyInfo ICollection_1_t6273____Count_PropertyInfo = 
{
	&ICollection_1_t6273_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32651_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32652_MethodInfo;
static PropertyInfo ICollection_1_t6273____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6273_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32652_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6273_PropertyInfos[] =
{
	&ICollection_1_t6273____Count_PropertyInfo,
	&ICollection_1_t6273____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32651_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_Count()
MethodInfo ICollection_1_get_Count_m32651_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32651_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32652_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32652_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32652_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1286_0_0_0;
extern Il2CppType Slot_t1286_0_0_0;
static ParameterInfo ICollection_1_t6273_ICollection_1_Add_m32653_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1286_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32653_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Add(T)
MethodInfo ICollection_1_Add_m32653_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Slot_t1286/* invoker_method */
	, ICollection_1_t6273_ICollection_1_Add_m32653_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32653_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32654_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Clear()
MethodInfo ICollection_1_Clear_m32654_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32654_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1286_0_0_0;
static ParameterInfo ICollection_1_t6273_ICollection_1_Contains_m32655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1286_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32655_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Contains(T)
MethodInfo ICollection_1_Contains_m32655_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Slot_t1286/* invoker_method */
	, ICollection_1_t6273_ICollection_1_Contains_m32655_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32655_GenericMethod/* genericMethod */

};
extern Il2CppType SlotU5BU5D_t1292_0_0_0;
extern Il2CppType SlotU5BU5D_t1292_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6273_ICollection_1_CopyTo_m32656_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SlotU5BU5D_t1292_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32656_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32656_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6273_ICollection_1_CopyTo_m32656_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32656_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1286_0_0_0;
static ParameterInfo ICollection_1_t6273_ICollection_1_Remove_m32657_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1286_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32657_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/Slot>::Remove(T)
MethodInfo ICollection_1_Remove_m32657_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Slot_t1286/* invoker_method */
	, ICollection_1_t6273_ICollection_1_Remove_m32657_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32657_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6273_MethodInfos[] =
{
	&ICollection_1_get_Count_m32651_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32652_MethodInfo,
	&ICollection_1_Add_m32653_MethodInfo,
	&ICollection_1_Clear_m32654_MethodInfo,
	&ICollection_1_Contains_m32655_MethodInfo,
	&ICollection_1_CopyTo_m32656_MethodInfo,
	&ICollection_1_Remove_m32657_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6275_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6273_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6275_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6273_0_0_0;
extern Il2CppType ICollection_1_t6273_1_0_0;
struct ICollection_1_t6273;
extern Il2CppGenericClass ICollection_1_t6273_GenericClass;
TypeInfo ICollection_1_t6273_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6273_MethodInfos/* methods */
	, ICollection_1_t6273_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6273_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6273_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6273_0_0_0/* byval_arg */
	, &ICollection_1_t6273_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6273_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>
extern Il2CppType IEnumerator_1_t4829_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32658_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/Slot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32658_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6275_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4829_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32658_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6275_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32658_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6275_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6275_0_0_0;
extern Il2CppType IEnumerable_1_t6275_1_0_0;
struct IEnumerable_1_t6275;
extern Il2CppGenericClass IEnumerable_1_t6275_GenericClass;
TypeInfo IEnumerable_1_t6275_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6275_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6275_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6275_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6275_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6275_0_0_0/* byval_arg */
	, &IEnumerable_1_t6275_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6275_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6274_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>
extern MethodInfo IList_1_get_Item_m32659_MethodInfo;
extern MethodInfo IList_1_set_Item_m32660_MethodInfo;
static PropertyInfo IList_1_t6274____Item_PropertyInfo = 
{
	&IList_1_t6274_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32659_MethodInfo/* get */
	, &IList_1_set_Item_m32660_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6274_PropertyInfos[] =
{
	&IList_1_t6274____Item_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1286_0_0_0;
static ParameterInfo IList_1_t6274_IList_1_IndexOf_m32661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1286_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32661_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32661_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6274_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Slot_t1286/* invoker_method */
	, IList_1_t6274_IList_1_IndexOf_m32661_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32661_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Slot_t1286_0_0_0;
static ParameterInfo IList_1_t6274_IList_1_Insert_m32662_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1286_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32662_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32662_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Slot_t1286/* invoker_method */
	, IList_1_t6274_IList_1_Insert_m32662_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32662_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6274_IList_1_RemoveAt_m32663_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32663_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32663_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6274_IList_1_RemoveAt_m32663_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32663_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6274_IList_1_get_Item_m32659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Slot_t1286_0_0_0;
extern void* RuntimeInvoker_Slot_t1286_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32659_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32659_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6274_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1286_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1286_Int32_t18/* invoker_method */
	, IList_1_t6274_IList_1_get_Item_m32659_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32659_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Slot_t1286_0_0_0;
static ParameterInfo IList_1_t6274_IList_1_set_Item_m32660_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1286_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Slot_t1286 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32660_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/Slot>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32660_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Slot_t1286/* invoker_method */
	, IList_1_t6274_IList_1_set_Item_m32660_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32660_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6274_MethodInfos[] =
{
	&IList_1_IndexOf_m32661_MethodInfo,
	&IList_1_Insert_m32662_MethodInfo,
	&IList_1_RemoveAt_m32663_MethodInfo,
	&IList_1_get_Item_m32659_MethodInfo,
	&IList_1_set_Item_m32660_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6274_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6273_il2cpp_TypeInfo,
	&IEnumerable_1_t6275_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6274_0_0_0;
extern Il2CppType IList_1_t6274_1_0_0;
struct IList_1_t6274;
extern Il2CppGenericClass IList_1_t6274_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6274_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6274_MethodInfos/* methods */
	, IList_1_t6274_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6274_il2cpp_TypeInfo/* element_class */
	, IList_1_t6274_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6274_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6274_0_0_0/* byval_arg */
	, &IList_1_t6274_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6274_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4831_il2cpp_TypeInfo;

// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo IEnumerator_1_get_Current_m32664_MethodInfo;
static PropertyInfo IEnumerator_1_t4831____Current_PropertyInfo = 
{
	&IEnumerator_1_t4831_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32664_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4831_PropertyInfos[] =
{
	&IEnumerator_1_t4831____Current_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1288_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1288 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32664_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32664_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4831_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1288_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1288/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32664_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4831_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32664_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4831_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4831_0_0_0;
extern Il2CppType IEnumerator_1_t4831_1_0_0;
struct IEnumerator_1_t4831;
extern Il2CppGenericClass IEnumerator_1_t4831_GenericClass;
TypeInfo IEnumerator_1_t4831_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4831_MethodInfos/* methods */
	, IEnumerator_1_t4831_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4831_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4831_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4831_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4831_0_0_0/* byval_arg */
	, &IEnumerator_1_t4831_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4831_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_410.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3383_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_410MethodDeclarations.h"

extern TypeInfo EnumeratorMode_t1288_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18805_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEnumeratorMode_t1288_m24978_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/EnumeratorMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.Hashtable/EnumeratorMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEnumeratorMode_t1288_m24978 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18801_MethodInfo;
 void InternalEnumerator_1__ctor_m18801 (InternalEnumerator_1_t3383 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802 (InternalEnumerator_1_t3383 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m18805(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18805_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EnumeratorMode_t1288_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18803_MethodInfo;
 void InternalEnumerator_1_Dispose_m18803 (InternalEnumerator_1_t3383 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18804_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18804 (InternalEnumerator_1_t3383 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m18805 (InternalEnumerator_1_t3383 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEnumeratorMode_t1288_m24978(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEnumeratorMode_t1288_m24978_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3383____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3383, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3383____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3383, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3383_FieldInfos[] =
{
	&InternalEnumerator_1_t3383____array_0_FieldInfo,
	&InternalEnumerator_1_t3383____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3383____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3383_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3383____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3383_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18805_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3383_PropertyInfos[] =
{
	&InternalEnumerator_1_t3383____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3383____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3383_InternalEnumerator_1__ctor_m18801_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18801_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18801_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18801/* method */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3383_InternalEnumerator_1__ctor_m18801_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18801_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802/* method */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18803_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18803_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18803/* method */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18803_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18804_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18804_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18804/* method */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18804_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1288_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1288 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18805_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.Hashtable/EnumeratorMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18805_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18805/* method */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1288_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1288/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18805_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3383_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18801_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802_MethodInfo,
	&InternalEnumerator_1_Dispose_m18803_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18804_MethodInfo,
	&InternalEnumerator_1_get_Current_m18805_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3383_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18802_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18804_MethodInfo,
	&InternalEnumerator_1_Dispose_m18803_MethodInfo,
	&InternalEnumerator_1_get_Current_m18805_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3383_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4831_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3383_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4831_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3383_0_0_0;
extern Il2CppType InternalEnumerator_1_t3383_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3383_GenericClass;
TypeInfo InternalEnumerator_1_t3383_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3383_MethodInfos/* methods */
	, InternalEnumerator_1_t3383_PropertyInfos/* properties */
	, InternalEnumerator_1_t3383_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3383_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3383_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3383_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3383_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3383_1_0_0/* this_arg */
	, InternalEnumerator_1_t3383_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3383_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3383)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6276_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo ICollection_1_get_Count_m32665_MethodInfo;
static PropertyInfo ICollection_1_t6276____Count_PropertyInfo = 
{
	&ICollection_1_t6276_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32666_MethodInfo;
static PropertyInfo ICollection_1_t6276____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6276_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32666_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6276_PropertyInfos[] =
{
	&ICollection_1_t6276____Count_PropertyInfo,
	&ICollection_1_t6276____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32665_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_Count()
MethodInfo ICollection_1_get_Count_m32665_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32665_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32666_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32666_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32666_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1288_0_0_0;
extern Il2CppType EnumeratorMode_t1288_0_0_0;
static ParameterInfo ICollection_1_t6276_ICollection_1_Add_m32667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1288_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32667_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Add(T)
MethodInfo ICollection_1_Add_m32667_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6276_ICollection_1_Add_m32667_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32667_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32668_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Clear()
MethodInfo ICollection_1_Clear_m32668_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32668_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1288_0_0_0;
static ParameterInfo ICollection_1_t6276_ICollection_1_Contains_m32669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1288_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32669_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Contains(T)
MethodInfo ICollection_1_Contains_m32669_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6276_ICollection_1_Contains_m32669_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32669_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorModeU5BU5D_t3642_0_0_0;
extern Il2CppType EnumeratorModeU5BU5D_t3642_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6276_ICollection_1_CopyTo_m32670_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorModeU5BU5D_t3642_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32670_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32670_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6276_ICollection_1_CopyTo_m32670_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32670_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1288_0_0_0;
static ParameterInfo ICollection_1_t6276_ICollection_1_Remove_m32671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1288_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32671_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.Hashtable/EnumeratorMode>::Remove(T)
MethodInfo ICollection_1_Remove_m32671_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6276_ICollection_1_Remove_m32671_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32671_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6276_MethodInfos[] =
{
	&ICollection_1_get_Count_m32665_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32666_MethodInfo,
	&ICollection_1_Add_m32667_MethodInfo,
	&ICollection_1_Clear_m32668_MethodInfo,
	&ICollection_1_Contains_m32669_MethodInfo,
	&ICollection_1_CopyTo_m32670_MethodInfo,
	&ICollection_1_Remove_m32671_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6278_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6276_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6278_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6276_0_0_0;
extern Il2CppType ICollection_1_t6276_1_0_0;
struct ICollection_1_t6276;
extern Il2CppGenericClass ICollection_1_t6276_GenericClass;
TypeInfo ICollection_1_t6276_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6276_MethodInfos/* methods */
	, ICollection_1_t6276_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6276_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6276_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6276_0_0_0/* byval_arg */
	, &ICollection_1_t6276_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6276_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>
extern Il2CppType IEnumerator_1_t4831_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32672_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Hashtable/EnumeratorMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32672_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6278_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4831_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32672_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6278_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32672_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6278_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6278_0_0_0;
extern Il2CppType IEnumerable_1_t6278_1_0_0;
struct IEnumerable_1_t6278;
extern Il2CppGenericClass IEnumerable_1_t6278_GenericClass;
TypeInfo IEnumerable_1_t6278_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6278_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6278_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6278_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6278_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6278_0_0_0/* byval_arg */
	, &IEnumerable_1_t6278_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6278_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6277_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>
extern MethodInfo IList_1_get_Item_m32673_MethodInfo;
extern MethodInfo IList_1_set_Item_m32674_MethodInfo;
static PropertyInfo IList_1_t6277____Item_PropertyInfo = 
{
	&IList_1_t6277_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32673_MethodInfo/* get */
	, &IList_1_set_Item_m32674_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6277_PropertyInfos[] =
{
	&IList_1_t6277____Item_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1288_0_0_0;
static ParameterInfo IList_1_t6277_IList_1_IndexOf_m32675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1288_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32675_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32675_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6277_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6277_IList_1_IndexOf_m32675_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32675_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType EnumeratorMode_t1288_0_0_0;
static ParameterInfo IList_1_t6277_IList_1_Insert_m32676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1288_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32676_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32676_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6277_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6277_IList_1_Insert_m32676_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32676_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6277_IList_1_RemoveAt_m32677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32677_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32677_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6277_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6277_IList_1_RemoveAt_m32677_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32677_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6277_IList_1_get_Item_m32673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType EnumeratorMode_t1288_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1288_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32673_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32673_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6277_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1288_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1288_Int32_t18/* invoker_method */
	, IList_1_t6277_IList_1_get_Item_m32673_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32673_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType EnumeratorMode_t1288_0_0_0;
static ParameterInfo IList_1_t6277_IList_1_set_Item_m32674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1288_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32674_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.Hashtable/EnumeratorMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32674_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6277_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6277_IList_1_set_Item_m32674_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32674_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6277_MethodInfos[] =
{
	&IList_1_IndexOf_m32675_MethodInfo,
	&IList_1_Insert_m32676_MethodInfo,
	&IList_1_RemoveAt_m32677_MethodInfo,
	&IList_1_get_Item_m32673_MethodInfo,
	&IList_1_set_Item_m32674_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6277_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6276_il2cpp_TypeInfo,
	&IEnumerable_1_t6278_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6277_0_0_0;
extern Il2CppType IList_1_t6277_1_0_0;
struct IList_1_t6277;
extern Il2CppGenericClass IList_1_t6277_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6277_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6277_MethodInfos/* methods */
	, IList_1_t6277_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6277_il2cpp_TypeInfo/* element_class */
	, IList_1_t6277_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6277_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6277_0_0_0/* byval_arg */
	, &IList_1_t6277_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6277_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4833_il2cpp_TypeInfo;

// System.Collections.SortedList/Slot
#include "mscorlib_System_Collections_SortedList_Slot.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>
extern MethodInfo IEnumerator_1_get_Current_m32678_MethodInfo;
static PropertyInfo IEnumerator_1_t4833____Current_PropertyInfo = 
{
	&IEnumerator_1_t4833_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32678_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4833_PropertyInfos[] =
{
	&IEnumerator_1_t4833____Current_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1293_0_0_0;
extern void* RuntimeInvoker_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32678_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32678_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4833_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1293_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1293/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32678_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4833_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32678_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4833_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4833_0_0_0;
extern Il2CppType IEnumerator_1_t4833_1_0_0;
struct IEnumerator_1_t4833;
extern Il2CppGenericClass IEnumerator_1_t4833_GenericClass;
TypeInfo IEnumerator_1_t4833_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4833_MethodInfos/* methods */
	, IEnumerator_1_t4833_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4833_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4833_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4833_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4833_0_0_0/* byval_arg */
	, &IEnumerator_1_t4833_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4833_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_411.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3384_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_411MethodDeclarations.h"

extern TypeInfo Slot_t1293_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18810_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSlot_t1293_m24989_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/Slot>(System.Int32)
 Slot_t1293  Array_InternalArray__get_Item_TisSlot_t1293_m24989 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18806_MethodInfo;
 void InternalEnumerator_1__ctor_m18806 (InternalEnumerator_1_t3384 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807 (InternalEnumerator_1_t3384 * __this, MethodInfo* method){
	{
		Slot_t1293  L_0 = InternalEnumerator_1_get_Current_m18810(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18810_MethodInfo);
		Slot_t1293  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Slot_t1293_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18808_MethodInfo;
 void InternalEnumerator_1_Dispose_m18808 (InternalEnumerator_1_t3384 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18809_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18809 (InternalEnumerator_1_t3384 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
 Slot_t1293  InternalEnumerator_1_get_Current_m18810 (InternalEnumerator_1_t3384 * __this, MethodInfo* method){
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
		Slot_t1293  L_8 = Array_InternalArray__get_Item_TisSlot_t1293_m24989(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSlot_t1293_m24989_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3384____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3384, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3384____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3384, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3384_FieldInfos[] =
{
	&InternalEnumerator_1_t3384____array_0_FieldInfo,
	&InternalEnumerator_1_t3384____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3384____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3384_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3384____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3384_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18810_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3384_PropertyInfos[] =
{
	&InternalEnumerator_1_t3384____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3384____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3384_InternalEnumerator_1__ctor_m18806_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18806_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18806_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18806/* method */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3384_InternalEnumerator_1__ctor_m18806_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18806_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807/* method */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18808_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18808_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18808/* method */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18808_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18809_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18809_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18809/* method */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18809_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1293_0_0_0;
extern void* RuntimeInvoker_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18810_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/Slot>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18810_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18810/* method */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1293_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1293/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18810_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3384_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18806_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807_MethodInfo,
	&InternalEnumerator_1_Dispose_m18808_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18809_MethodInfo,
	&InternalEnumerator_1_get_Current_m18810_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3384_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18807_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18809_MethodInfo,
	&InternalEnumerator_1_Dispose_m18808_MethodInfo,
	&InternalEnumerator_1_get_Current_m18810_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3384_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4833_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3384_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4833_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3384_0_0_0;
extern Il2CppType InternalEnumerator_1_t3384_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3384_GenericClass;
TypeInfo InternalEnumerator_1_t3384_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3384_MethodInfos/* methods */
	, InternalEnumerator_1_t3384_PropertyInfos/* properties */
	, InternalEnumerator_1_t3384_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3384_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3384_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3384_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3384_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3384_1_0_0/* this_arg */
	, InternalEnumerator_1_t3384_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3384_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3384)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6279_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>
extern MethodInfo ICollection_1_get_Count_m32679_MethodInfo;
static PropertyInfo ICollection_1_t6279____Count_PropertyInfo = 
{
	&ICollection_1_t6279_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32679_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32680_MethodInfo;
static PropertyInfo ICollection_1_t6279____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6279_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6279_PropertyInfos[] =
{
	&ICollection_1_t6279____Count_PropertyInfo,
	&ICollection_1_t6279____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32679_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_Count()
MethodInfo ICollection_1_get_Count_m32679_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32679_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32680_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32680_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32680_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1293_0_0_0;
extern Il2CppType Slot_t1293_0_0_0;
static ParameterInfo ICollection_1_t6279_ICollection_1_Add_m32681_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1293_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32681_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Add(T)
MethodInfo ICollection_1_Add_m32681_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Slot_t1293/* invoker_method */
	, ICollection_1_t6279_ICollection_1_Add_m32681_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32681_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32682_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Clear()
MethodInfo ICollection_1_Clear_m32682_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32682_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1293_0_0_0;
static ParameterInfo ICollection_1_t6279_ICollection_1_Contains_m32683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1293_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32683_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Contains(T)
MethodInfo ICollection_1_Contains_m32683_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Slot_t1293/* invoker_method */
	, ICollection_1_t6279_ICollection_1_Contains_m32683_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32683_GenericMethod/* genericMethod */

};
extern Il2CppType SlotU5BU5D_t1296_0_0_0;
extern Il2CppType SlotU5BU5D_t1296_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6279_ICollection_1_CopyTo_m32684_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SlotU5BU5D_t1296_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32684_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32684_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6279_ICollection_1_CopyTo_m32684_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32684_GenericMethod/* genericMethod */

};
extern Il2CppType Slot_t1293_0_0_0;
static ParameterInfo ICollection_1_t6279_ICollection_1_Remove_m32685_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1293_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32685_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/Slot>::Remove(T)
MethodInfo ICollection_1_Remove_m32685_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Slot_t1293/* invoker_method */
	, ICollection_1_t6279_ICollection_1_Remove_m32685_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32685_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6279_MethodInfos[] =
{
	&ICollection_1_get_Count_m32679_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32680_MethodInfo,
	&ICollection_1_Add_m32681_MethodInfo,
	&ICollection_1_Clear_m32682_MethodInfo,
	&ICollection_1_Contains_m32683_MethodInfo,
	&ICollection_1_CopyTo_m32684_MethodInfo,
	&ICollection_1_Remove_m32685_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6281_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6279_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6281_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6279_0_0_0;
extern Il2CppType ICollection_1_t6279_1_0_0;
struct ICollection_1_t6279;
extern Il2CppGenericClass ICollection_1_t6279_GenericClass;
TypeInfo ICollection_1_t6279_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6279_MethodInfos/* methods */
	, ICollection_1_t6279_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6279_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6279_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6279_0_0_0/* byval_arg */
	, &ICollection_1_t6279_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6279_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>
extern Il2CppType IEnumerator_1_t4833_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32686_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/Slot>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32686_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6281_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4833_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32686_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6281_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32686_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6281_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6281_0_0_0;
extern Il2CppType IEnumerable_1_t6281_1_0_0;
struct IEnumerable_1_t6281;
extern Il2CppGenericClass IEnumerable_1_t6281_GenericClass;
TypeInfo IEnumerable_1_t6281_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6281_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6281_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6281_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6281_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6281_0_0_0/* byval_arg */
	, &IEnumerable_1_t6281_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6281_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6280_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>
extern MethodInfo IList_1_get_Item_m32687_MethodInfo;
extern MethodInfo IList_1_set_Item_m32688_MethodInfo;
static PropertyInfo IList_1_t6280____Item_PropertyInfo = 
{
	&IList_1_t6280_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32687_MethodInfo/* get */
	, &IList_1_set_Item_m32688_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6280_PropertyInfos[] =
{
	&IList_1_t6280____Item_PropertyInfo,
	NULL
};
extern Il2CppType Slot_t1293_0_0_0;
static ParameterInfo IList_1_t6280_IList_1_IndexOf_m32689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Slot_t1293_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32689_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32689_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6280_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Slot_t1293/* invoker_method */
	, IList_1_t6280_IList_1_IndexOf_m32689_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32689_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Slot_t1293_0_0_0;
static ParameterInfo IList_1_t6280_IList_1_Insert_m32690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1293_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32690_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32690_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6280_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Slot_t1293/* invoker_method */
	, IList_1_t6280_IList_1_Insert_m32690_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32690_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6280_IList_1_RemoveAt_m32691_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32691_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32691_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6280_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6280_IList_1_RemoveAt_m32691_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32691_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6280_IList_1_get_Item_m32687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Slot_t1293_0_0_0;
extern void* RuntimeInvoker_Slot_t1293_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32687_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32687_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6280_il2cpp_TypeInfo/* declaring_type */
	, &Slot_t1293_0_0_0/* return_type */
	, RuntimeInvoker_Slot_t1293_Int32_t18/* invoker_method */
	, IList_1_t6280_IList_1_get_Item_m32687_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32687_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Slot_t1293_0_0_0;
static ParameterInfo IList_1_t6280_IList_1_set_Item_m32688_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Slot_t1293_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Slot_t1293 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32688_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/Slot>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32688_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6280_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Slot_t1293/* invoker_method */
	, IList_1_t6280_IList_1_set_Item_m32688_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32688_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6280_MethodInfos[] =
{
	&IList_1_IndexOf_m32689_MethodInfo,
	&IList_1_Insert_m32690_MethodInfo,
	&IList_1_RemoveAt_m32691_MethodInfo,
	&IList_1_get_Item_m32687_MethodInfo,
	&IList_1_set_Item_m32688_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6280_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6279_il2cpp_TypeInfo,
	&IEnumerable_1_t6281_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6280_0_0_0;
extern Il2CppType IList_1_t6280_1_0_0;
struct IList_1_t6280;
extern Il2CppGenericClass IList_1_t6280_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6280_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6280_MethodInfos/* methods */
	, IList_1_t6280_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6280_il2cpp_TypeInfo/* element_class */
	, IList_1_t6280_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6280_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6280_0_0_0/* byval_arg */
	, &IList_1_t6280_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6280_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4835_il2cpp_TypeInfo;

// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo IEnumerator_1_get_Current_m32692_MethodInfo;
static PropertyInfo IEnumerator_1_t4835____Current_PropertyInfo = 
{
	&IEnumerator_1_t4835_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32692_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4835_PropertyInfos[] =
{
	&IEnumerator_1_t4835____Current_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1294_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1294 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32692_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32692_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4835_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1294_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1294/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32692_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4835_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32692_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4835_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4835_0_0_0;
extern Il2CppType IEnumerator_1_t4835_1_0_0;
struct IEnumerator_1_t4835;
extern Il2CppGenericClass IEnumerator_1_t4835_GenericClass;
TypeInfo IEnumerator_1_t4835_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4835_MethodInfos/* methods */
	, IEnumerator_1_t4835_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4835_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4835_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4835_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4835_0_0_0/* byval_arg */
	, &IEnumerator_1_t4835_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4835_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_412.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3385_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_412MethodDeclarations.h"

extern TypeInfo EnumeratorMode_t1294_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18815_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEnumeratorMode_t1294_m25000_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/EnumeratorMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Collections.SortedList/EnumeratorMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEnumeratorMode_t1294_m25000 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18811_MethodInfo;
 void InternalEnumerator_1__ctor_m18811 (InternalEnumerator_1_t3385 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812 (InternalEnumerator_1_t3385 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m18815(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18815_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EnumeratorMode_t1294_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18813_MethodInfo;
 void InternalEnumerator_1_Dispose_m18813 (InternalEnumerator_1_t3385 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18814_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18814 (InternalEnumerator_1_t3385 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m18815 (InternalEnumerator_1_t3385 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEnumeratorMode_t1294_m25000(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEnumeratorMode_t1294_m25000_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3385____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3385, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3385____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3385, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3385_FieldInfos[] =
{
	&InternalEnumerator_1_t3385____array_0_FieldInfo,
	&InternalEnumerator_1_t3385____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3385____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3385_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3385____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3385_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18815_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3385_PropertyInfos[] =
{
	&InternalEnumerator_1_t3385____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3385____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3385_InternalEnumerator_1__ctor_m18811_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18811_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18811_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18811/* method */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3385_InternalEnumerator_1__ctor_m18811_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18811_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812/* method */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18813_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18813_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18813/* method */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18813_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18814_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18814_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18814/* method */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18814_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1294_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1294 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18815_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Collections.SortedList/EnumeratorMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18815_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18815/* method */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1294_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1294/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18815_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3385_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18811_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812_MethodInfo,
	&InternalEnumerator_1_Dispose_m18813_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18814_MethodInfo,
	&InternalEnumerator_1_get_Current_m18815_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3385_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18812_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18814_MethodInfo,
	&InternalEnumerator_1_Dispose_m18813_MethodInfo,
	&InternalEnumerator_1_get_Current_m18815_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3385_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4835_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3385_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4835_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3385_0_0_0;
extern Il2CppType InternalEnumerator_1_t3385_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3385_GenericClass;
TypeInfo InternalEnumerator_1_t3385_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3385_MethodInfos/* methods */
	, InternalEnumerator_1_t3385_PropertyInfos/* properties */
	, InternalEnumerator_1_t3385_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3385_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3385_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3385_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3385_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3385_1_0_0/* this_arg */
	, InternalEnumerator_1_t3385_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3385_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3385)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6282_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo ICollection_1_get_Count_m32693_MethodInfo;
static PropertyInfo ICollection_1_t6282____Count_PropertyInfo = 
{
	&ICollection_1_t6282_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32693_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32694_MethodInfo;
static PropertyInfo ICollection_1_t6282____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6282_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32694_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6282_PropertyInfos[] =
{
	&ICollection_1_t6282____Count_PropertyInfo,
	&ICollection_1_t6282____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32693_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_Count()
MethodInfo ICollection_1_get_Count_m32693_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32693_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32694_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32694_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32694_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1294_0_0_0;
extern Il2CppType EnumeratorMode_t1294_0_0_0;
static ParameterInfo ICollection_1_t6282_ICollection_1_Add_m32695_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1294_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32695_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Add(T)
MethodInfo ICollection_1_Add_m32695_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6282_ICollection_1_Add_m32695_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32695_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32696_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Clear()
MethodInfo ICollection_1_Clear_m32696_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32696_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1294_0_0_0;
static ParameterInfo ICollection_1_t6282_ICollection_1_Contains_m32697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1294_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32697_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Contains(T)
MethodInfo ICollection_1_Contains_m32697_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6282_ICollection_1_Contains_m32697_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32697_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorModeU5BU5D_t3643_0_0_0;
extern Il2CppType EnumeratorModeU5BU5D_t3643_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6282_ICollection_1_CopyTo_m32698_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorModeU5BU5D_t3643_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32698_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32698_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6282_ICollection_1_CopyTo_m32698_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32698_GenericMethod/* genericMethod */

};
extern Il2CppType EnumeratorMode_t1294_0_0_0;
static ParameterInfo ICollection_1_t6282_ICollection_1_Remove_m32699_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1294_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32699_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Collections.SortedList/EnumeratorMode>::Remove(T)
MethodInfo ICollection_1_Remove_m32699_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6282_ICollection_1_Remove_m32699_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32699_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6282_MethodInfos[] =
{
	&ICollection_1_get_Count_m32693_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32694_MethodInfo,
	&ICollection_1_Add_m32695_MethodInfo,
	&ICollection_1_Clear_m32696_MethodInfo,
	&ICollection_1_Contains_m32697_MethodInfo,
	&ICollection_1_CopyTo_m32698_MethodInfo,
	&ICollection_1_Remove_m32699_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6284_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6282_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6284_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6282_0_0_0;
extern Il2CppType ICollection_1_t6282_1_0_0;
struct ICollection_1_t6282;
extern Il2CppGenericClass ICollection_1_t6282_GenericClass;
TypeInfo ICollection_1_t6282_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6282_MethodInfos/* methods */
	, ICollection_1_t6282_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6282_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6282_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6282_0_0_0/* byval_arg */
	, &ICollection_1_t6282_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6282_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>
extern Il2CppType IEnumerator_1_t4835_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32700_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.SortedList/EnumeratorMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32700_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6284_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4835_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32700_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6284_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32700_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6284_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6284_0_0_0;
extern Il2CppType IEnumerable_1_t6284_1_0_0;
struct IEnumerable_1_t6284;
extern Il2CppGenericClass IEnumerable_1_t6284_GenericClass;
TypeInfo IEnumerable_1_t6284_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6284_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6284_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6284_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6284_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6284_0_0_0/* byval_arg */
	, &IEnumerable_1_t6284_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6284_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t6283_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>
extern MethodInfo IList_1_get_Item_m32701_MethodInfo;
extern MethodInfo IList_1_set_Item_m32702_MethodInfo;
static PropertyInfo IList_1_t6283____Item_PropertyInfo = 
{
	&IList_1_t6283_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m32701_MethodInfo/* get */
	, &IList_1_set_Item_m32702_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6283_PropertyInfos[] =
{
	&IList_1_t6283____Item_PropertyInfo,
	NULL
};
extern Il2CppType EnumeratorMode_t1294_0_0_0;
static ParameterInfo IList_1_t6283_IList_1_IndexOf_m32703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1294_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m32703_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m32703_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6283_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6283_IList_1_IndexOf_m32703_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m32703_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType EnumeratorMode_t1294_0_0_0;
static ParameterInfo IList_1_t6283_IList_1_Insert_m32704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1294_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m32704_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m32704_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6283_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6283_IList_1_Insert_m32704_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m32704_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6283_IList_1_RemoveAt_m32705_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m32705_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m32705_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6283_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6283_IList_1_RemoveAt_m32705_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m32705_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6283_IList_1_get_Item_m32701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType EnumeratorMode_t1294_0_0_0;
extern void* RuntimeInvoker_EnumeratorMode_t1294_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m32701_GenericMethod;
// T System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m32701_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6283_il2cpp_TypeInfo/* declaring_type */
	, &EnumeratorMode_t1294_0_0_0/* return_type */
	, RuntimeInvoker_EnumeratorMode_t1294_Int32_t18/* invoker_method */
	, IList_1_t6283_IList_1_get_Item_m32701_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m32701_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType EnumeratorMode_t1294_0_0_0;
static ParameterInfo IList_1_t6283_IList_1_set_Item_m32702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EnumeratorMode_t1294_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m32702_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Collections.SortedList/EnumeratorMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m32702_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6283_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6283_IList_1_set_Item_m32702_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m32702_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6283_MethodInfos[] =
{
	&IList_1_IndexOf_m32703_MethodInfo,
	&IList_1_Insert_m32704_MethodInfo,
	&IList_1_RemoveAt_m32705_MethodInfo,
	&IList_1_get_Item_m32701_MethodInfo,
	&IList_1_set_Item_m32702_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6283_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6282_il2cpp_TypeInfo,
	&IEnumerable_1_t6284_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6283_0_0_0;
extern Il2CppType IList_1_t6283_1_0_0;
struct IList_1_t6283;
extern Il2CppGenericClass IList_1_t6283_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6283_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6283_MethodInfos/* methods */
	, IList_1_t6283_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6283_il2cpp_TypeInfo/* element_class */
	, IList_1_t6283_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6283_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6283_0_0_0/* byval_arg */
	, &IList_1_t6283_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6283_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t4837_il2cpp_TypeInfo;

// System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "mscorlib_System_Configuration_Assemblies_AssemblyHashAlgorit.h"


// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo IEnumerator_1_get_Current_m32706_MethodInfo;
static PropertyInfo IEnumerator_1_t4837____Current_PropertyInfo = 
{
	&IEnumerator_1_t4837_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m32706_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4837_PropertyInfos[] =
{
	&IEnumerator_1_t4837____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssemblyHashAlgorithm_t1298_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t1298 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m32706_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
MethodInfo IEnumerator_1_get_Current_m32706_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4837_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t1298_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t1298/* invoker_method */
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
	, &IEnumerator_1_get_Current_m32706_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4837_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m32706_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4837_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4837_0_0_0;
extern Il2CppType IEnumerator_1_t4837_1_0_0;
struct IEnumerator_1_t4837;
extern Il2CppGenericClass IEnumerator_1_t4837_GenericClass;
TypeInfo IEnumerator_1_t4837_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4837_MethodInfos/* methods */
	, IEnumerator_1_t4837_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4837_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4837_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4837_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4837_0_0_0/* byval_arg */
	, &IEnumerator_1_t4837_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4837_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_413.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3386_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_413MethodDeclarations.h"

extern TypeInfo AssemblyHashAlgorithm_t1298_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m18820_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1298_m25011_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyHashAlgorithm>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Configuration.Assemblies.AssemblyHashAlgorithm>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1298_m25011 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m18816_MethodInfo;
 void InternalEnumerator_1__ctor_m18816 (InternalEnumerator_1_t3386 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817 (InternalEnumerator_1_t3386 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m18820(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m18820_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AssemblyHashAlgorithm_t1298_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m18818_MethodInfo;
 void InternalEnumerator_1_Dispose_m18818 (InternalEnumerator_1_t3386 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m18819_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m18819 (InternalEnumerator_1_t3386 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m18820 (InternalEnumerator_1_t3386 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1298_m25011(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAssemblyHashAlgorithm_t1298_m25011_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3386____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3386, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3386____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3386, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3386_FieldInfos[] =
{
	&InternalEnumerator_1_t3386____array_0_FieldInfo,
	&InternalEnumerator_1_t3386____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3386____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3386_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3386____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3386_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m18820_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3386_PropertyInfos[] =
{
	&InternalEnumerator_1_t3386____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3386____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3386_InternalEnumerator_1__ctor_m18816_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m18816_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m18816_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m18816/* method */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3386_InternalEnumerator_1__ctor_m18816_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m18816_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817/* method */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m18818_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m18818_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m18818/* method */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m18818_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m18819_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m18819_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m18819/* method */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m18819_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1298_0_0_0;
extern void* RuntimeInvoker_AssemblyHashAlgorithm_t1298 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m18820_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m18820_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m18820/* method */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* declaring_type */
	, &AssemblyHashAlgorithm_t1298_0_0_0/* return_type */
	, RuntimeInvoker_AssemblyHashAlgorithm_t1298/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m18820_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3386_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m18816_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817_MethodInfo,
	&InternalEnumerator_1_Dispose_m18818_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18819_MethodInfo,
	&InternalEnumerator_1_get_Current_m18820_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3386_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m18817_MethodInfo,
	&InternalEnumerator_1_MoveNext_m18819_MethodInfo,
	&InternalEnumerator_1_Dispose_m18818_MethodInfo,
	&InternalEnumerator_1_get_Current_m18820_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3386_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4837_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3386_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4837_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3386_0_0_0;
extern Il2CppType InternalEnumerator_1_t3386_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3386_GenericClass;
TypeInfo InternalEnumerator_1_t3386_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3386_MethodInfos/* methods */
	, InternalEnumerator_1_t3386_PropertyInfos/* properties */
	, InternalEnumerator_1_t3386_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3386_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3386_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3386_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3386_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3386_1_0_0/* this_arg */
	, InternalEnumerator_1_t3386_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3386_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3386)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6285_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern MethodInfo ICollection_1_get_Count_m32707_MethodInfo;
static PropertyInfo ICollection_1_t6285____Count_PropertyInfo = 
{
	&ICollection_1_t6285_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m32707_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m32708_MethodInfo;
static PropertyInfo ICollection_1_t6285____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6285_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m32708_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6285_PropertyInfos[] =
{
	&ICollection_1_t6285____Count_PropertyInfo,
	&ICollection_1_t6285____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m32707_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_Count()
MethodInfo ICollection_1_get_Count_m32707_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m32707_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m32708_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m32708_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m32708_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1298_0_0_0;
extern Il2CppType AssemblyHashAlgorithm_t1298_0_0_0;
static ParameterInfo ICollection_1_t6285_ICollection_1_Add_m32709_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1298_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m32709_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Add(T)
MethodInfo ICollection_1_Add_m32709_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6285_ICollection_1_Add_m32709_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m32709_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m32710_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Clear()
MethodInfo ICollection_1_Clear_m32710_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m32710_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1298_0_0_0;
static ParameterInfo ICollection_1_t6285_ICollection_1_Contains_m32711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1298_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m32711_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Contains(T)
MethodInfo ICollection_1_Contains_m32711_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6285_ICollection_1_Contains_m32711_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m32711_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithmU5BU5D_t3644_0_0_0;
extern Il2CppType AssemblyHashAlgorithmU5BU5D_t3644_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6285_ICollection_1_CopyTo_m32712_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithmU5BU5D_t3644_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m32712_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m32712_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6285_ICollection_1_CopyTo_m32712_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m32712_GenericMethod/* genericMethod */

};
extern Il2CppType AssemblyHashAlgorithm_t1298_0_0_0;
static ParameterInfo ICollection_1_t6285_ICollection_1_Remove_m32713_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssemblyHashAlgorithm_t1298_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m32713_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::Remove(T)
MethodInfo ICollection_1_Remove_m32713_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6285_ICollection_1_Remove_m32713_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m32713_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6285_MethodInfos[] =
{
	&ICollection_1_get_Count_m32707_MethodInfo,
	&ICollection_1_get_IsReadOnly_m32708_MethodInfo,
	&ICollection_1_Add_m32709_MethodInfo,
	&ICollection_1_Clear_m32710_MethodInfo,
	&ICollection_1_Contains_m32711_MethodInfo,
	&ICollection_1_CopyTo_m32712_MethodInfo,
	&ICollection_1_Remove_m32713_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6287_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6285_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6287_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6285_0_0_0;
extern Il2CppType ICollection_1_t6285_1_0_0;
struct ICollection_1_t6285;
extern Il2CppGenericClass ICollection_1_t6285_GenericClass;
TypeInfo ICollection_1_t6285_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6285_MethodInfos/* methods */
	, ICollection_1_t6285_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6285_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6285_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6285_0_0_0/* byval_arg */
	, &ICollection_1_t6285_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6285_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>
extern Il2CppType IEnumerator_1_t4837_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m32714_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Configuration.Assemblies.AssemblyHashAlgorithm>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m32714_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6287_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4837_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m32714_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6287_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m32714_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6287_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6287_0_0_0;
extern Il2CppType IEnumerable_1_t6287_1_0_0;
struct IEnumerable_1_t6287;
extern Il2CppGenericClass IEnumerable_1_t6287_GenericClass;
TypeInfo IEnumerable_1_t6287_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6287_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6287_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6287_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6287_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6287_0_0_0/* byval_arg */
	, &IEnumerable_1_t6287_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6287_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
