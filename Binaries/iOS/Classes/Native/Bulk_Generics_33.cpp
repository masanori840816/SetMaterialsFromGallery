#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_473.h"
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
extern TypeInfo InternalEnumerator_1_t3449_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_473MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"
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
extern TypeInfo ParameterAttributes_t1405_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t949_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m19133_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4119_MethodInfo;
extern MethodInfo Array_get_Length_m4124_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25678_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25678 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19129_MethodInfo;
 void InternalEnumerator_1__ctor_m19129 (InternalEnumerator_1_t3449 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130 (InternalEnumerator_1_t3449 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19133(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19133_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ParameterAttributes_t1405_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19131_MethodInfo;
 void InternalEnumerator_1_Dispose_m19131 (InternalEnumerator_1_t3449 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19132_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19132 (InternalEnumerator_1_t3449 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19133 (InternalEnumerator_1_t3449 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25678(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisParameterAttributes_t1405_m25678_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3449____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3449, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3449____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3449, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3449_FieldInfos[] =
{
	&InternalEnumerator_1_t3449____array_0_FieldInfo,
	&InternalEnumerator_1_t3449____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3449____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3449_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3449____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3449_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19133_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3449_PropertyInfos[] =
{
	&InternalEnumerator_1_t3449____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3449____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3449_InternalEnumerator_1__ctor_m19129_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19129_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19129_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19129/* method */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3449_InternalEnumerator_1__ctor_m19129_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19129_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130/* method */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19131_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19131_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19131/* method */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19131_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19132_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19132_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19132/* method */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19132_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t1405 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19133_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19133_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19133/* method */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_get_Current_m19133_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3449_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19129_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130_MethodInfo,
	&InternalEnumerator_1_Dispose_m19131_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19132_MethodInfo,
	&InternalEnumerator_1_get_Current_m19133_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1360_MethodInfo;
extern MethodInfo Object_Finalize_m7_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1361_MethodInfo;
extern MethodInfo ValueType_ToString_m1476_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3449_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19130_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19132_MethodInfo,
	&InternalEnumerator_1_Dispose_m19131_MethodInfo,
	&InternalEnumerator_1_get_Current_m19133_MethodInfo,
};
extern TypeInfo IEnumerator_t112_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t301_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t4956_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t3449_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4956_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3449_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4956_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3449_0_0_0;
extern Il2CppType InternalEnumerator_1_t3449_1_0_0;
extern TypeInfo ValueType_t296_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t3449_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t3449_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3449_MethodInfos/* methods */
	, InternalEnumerator_1_t3449_PropertyInfos/* properties */
	, InternalEnumerator_1_t3449_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3449_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3449_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3449_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3449_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3449_1_0_0/* this_arg */
	, InternalEnumerator_1_t3449_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3449_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3449)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6466_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>
extern MethodInfo ICollection_1_get_Count_m33552_MethodInfo;
static PropertyInfo ICollection_1_t6466____Count_PropertyInfo = 
{
	&ICollection_1_t6466_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33552_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33553_MethodInfo;
static PropertyInfo ICollection_1_t6466____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6466_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33553_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6466_PropertyInfos[] =
{
	&ICollection_1_t6466____Count_PropertyInfo,
	&ICollection_1_t6466____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33552_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m33552_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33552_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33553_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33553_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33553_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
extern Il2CppType ParameterAttributes_t1405_0_0_0;
static ParameterInfo ICollection_1_t6466_ICollection_1_Add_m33554_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t1405_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33554_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Add(T)
MethodInfo ICollection_1_Add_m33554_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6466_ICollection_1_Add_m33554_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33554_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33555_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Clear()
MethodInfo ICollection_1_Clear_m33555_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33555_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
static ParameterInfo ICollection_1_t6466_ICollection_1_Contains_m33556_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t1405_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33556_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m33556_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6466_ICollection_1_Contains_m33556_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33556_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributesU5BU5D_t3695_0_0_0;
extern Il2CppType ParameterAttributesU5BU5D_t3695_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6466_ICollection_1_CopyTo_m33557_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributesU5BU5D_t3695_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33557_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33557_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6466_ICollection_1_CopyTo_m33557_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33557_GenericMethod/* genericMethod */

};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
static ParameterInfo ICollection_1_t6466_ICollection_1_Remove_m33558_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t1405_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33558_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m33558_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6466_ICollection_1_Remove_m33558_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33558_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6466_MethodInfos[] =
{
	&ICollection_1_get_Count_m33552_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33553_MethodInfo,
	&ICollection_1_Add_m33554_MethodInfo,
	&ICollection_1_Clear_m33555_MethodInfo,
	&ICollection_1_Contains_m33556_MethodInfo,
	&ICollection_1_CopyTo_m33557_MethodInfo,
	&ICollection_1_Remove_m33558_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t641_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6468_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6466_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6466_0_0_0;
extern Il2CppType ICollection_1_t6466_1_0_0;
struct ICollection_1_t6466;
extern Il2CppGenericClass ICollection_1_t6466_GenericClass;
TypeInfo ICollection_1_t6466_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6466_MethodInfos/* methods */
	, ICollection_1_t6466_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6466_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6466_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6466_0_0_0/* byval_arg */
	, &ICollection_1_t6466_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6466_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>
extern Il2CppType IEnumerator_1_t4956_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33559_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33559_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6468_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4956_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33559_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6468_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33559_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6468_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6468_0_0_0;
extern Il2CppType IEnumerable_1_t6468_1_0_0;
struct IEnumerable_1_t6468;
extern Il2CppGenericClass IEnumerable_1_t6468_GenericClass;
TypeInfo IEnumerable_1_t6468_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6468_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6468_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6468_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6468_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6468_0_0_0/* byval_arg */
	, &IEnumerable_1_t6468_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6468_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6467_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>
extern MethodInfo IList_1_get_Item_m33560_MethodInfo;
extern MethodInfo IList_1_set_Item_m33561_MethodInfo;
static PropertyInfo IList_1_t6467____Item_PropertyInfo = 
{
	&IList_1_t6467_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33560_MethodInfo/* get */
	, &IList_1_set_Item_m33561_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6467_PropertyInfos[] =
{
	&IList_1_t6467____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
static ParameterInfo IList_1_t6467_IList_1_IndexOf_m33562_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t1405_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33562_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33562_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6467_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6467_IList_1_IndexOf_m33562_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33562_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ParameterAttributes_t1405_0_0_0;
static ParameterInfo IList_1_t6467_IList_1_Insert_m33563_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t1405_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33563_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33563_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6467_IList_1_Insert_m33563_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33563_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6467_IList_1_RemoveAt_m33564_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33564_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33564_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6467_IList_1_RemoveAt_m33564_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33564_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6467_IList_1_get_Item_m33560_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ParameterAttributes_t1405_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t1405_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33560_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33560_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6467_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t1405_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t1405_Int32_t18/* invoker_method */
	, IList_1_t6467_IList_1_get_Item_m33560_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33560_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ParameterAttributes_t1405_0_0_0;
static ParameterInfo IList_1_t6467_IList_1_set_Item_m33561_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t1405_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33561_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33561_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6467_IList_1_set_Item_m33561_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33561_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6467_MethodInfos[] =
{
	&IList_1_IndexOf_m33562_MethodInfo,
	&IList_1_Insert_m33563_MethodInfo,
	&IList_1_RemoveAt_m33564_MethodInfo,
	&IList_1_get_Item_m33560_MethodInfo,
	&IList_1_set_Item_m33561_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6467_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6466_il2cpp_TypeInfo,
	&IEnumerable_1_t6468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6467_0_0_0;
extern Il2CppType IList_1_t6467_1_0_0;
struct IList_1_t6467;
extern Il2CppGenericClass IList_1_t6467_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6467_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6467_MethodInfos/* methods */
	, IList_1_t6467_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6467_il2cpp_TypeInfo/* element_class */
	, IList_1_t6467_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6467_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6467_0_0_0/* byval_arg */
	, &IList_1_t6467_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6467_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4958_il2cpp_TypeInfo;

// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo IEnumerator_1_get_Current_m33565_MethodInfo;
static PropertyInfo IEnumerator_1_t4958____Current_PropertyInfo = 
{
	&IEnumerator_1_t4958_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33565_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4958_PropertyInfos[] =
{
	&IEnumerator_1_t4958____Current_PropertyInfo,
	NULL
};
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t1407 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33565_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33565_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4958_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t1407_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t1407/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33565_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4958_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33565_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4958_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4958_0_0_0;
extern Il2CppType IEnumerator_1_t4958_1_0_0;
struct IEnumerator_1_t4958;
extern Il2CppGenericClass IEnumerator_1_t4958_GenericClass;
TypeInfo IEnumerator_1_t4958_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4958_MethodInfos/* methods */
	, IEnumerator_1_t4958_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4958_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4958_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4958_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4958_0_0_0/* byval_arg */
	, &IEnumerator_1_t4958_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4958_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_474.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3450_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_474MethodDeclarations.h"

extern TypeInfo ProcessorArchitecture_t1407_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19138_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisProcessorArchitecture_t1407_m25689_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ProcessorArchitecture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ProcessorArchitecture>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisProcessorArchitecture_t1407_m25689 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19134_MethodInfo;
 void InternalEnumerator_1__ctor_m19134 (InternalEnumerator_1_t3450 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135 (InternalEnumerator_1_t3450 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19138(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19138_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ProcessorArchitecture_t1407_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19136_MethodInfo;
 void InternalEnumerator_1_Dispose_m19136 (InternalEnumerator_1_t3450 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19137_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19137 (InternalEnumerator_1_t3450 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19138 (InternalEnumerator_1_t3450 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisProcessorArchitecture_t1407_m25689(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisProcessorArchitecture_t1407_m25689_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3450____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3450, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3450____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3450, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3450_FieldInfos[] =
{
	&InternalEnumerator_1_t3450____array_0_FieldInfo,
	&InternalEnumerator_1_t3450____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3450____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3450_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3450____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3450_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19138_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3450_PropertyInfos[] =
{
	&InternalEnumerator_1_t3450____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3450____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3450_InternalEnumerator_1__ctor_m19134_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19134_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19134_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19134/* method */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3450_InternalEnumerator_1__ctor_m19134_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19134_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135/* method */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19136_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19136_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19136/* method */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19136_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19137_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19137_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19137/* method */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19137_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t1407 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19138_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19138_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19138/* method */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t1407_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t1407/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19138_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3450_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19134_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135_MethodInfo,
	&InternalEnumerator_1_Dispose_m19136_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19137_MethodInfo,
	&InternalEnumerator_1_get_Current_m19138_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3450_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19135_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19137_MethodInfo,
	&InternalEnumerator_1_Dispose_m19136_MethodInfo,
	&InternalEnumerator_1_get_Current_m19138_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3450_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4958_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3450_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4958_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3450_0_0_0;
extern Il2CppType InternalEnumerator_1_t3450_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3450_GenericClass;
TypeInfo InternalEnumerator_1_t3450_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3450_MethodInfos/* methods */
	, InternalEnumerator_1_t3450_PropertyInfos/* properties */
	, InternalEnumerator_1_t3450_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3450_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3450_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3450_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3450_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3450_1_0_0/* this_arg */
	, InternalEnumerator_1_t3450_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3450_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3450)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6469_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo ICollection_1_get_Count_m33566_MethodInfo;
static PropertyInfo ICollection_1_t6469____Count_PropertyInfo = 
{
	&ICollection_1_t6469_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33566_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33567_MethodInfo;
static PropertyInfo ICollection_1_t6469____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6469_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33567_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6469_PropertyInfos[] =
{
	&ICollection_1_t6469____Count_PropertyInfo,
	&ICollection_1_t6469____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33566_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_Count()
MethodInfo ICollection_1_get_Count_m33566_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33566_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33567_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33567_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33567_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
static ParameterInfo ICollection_1_t6469_ICollection_1_Add_m33568_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t1407_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33568_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Add(T)
MethodInfo ICollection_1_Add_m33568_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6469_ICollection_1_Add_m33568_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33568_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33569_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Clear()
MethodInfo ICollection_1_Clear_m33569_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33569_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
static ParameterInfo ICollection_1_t6469_ICollection_1_Contains_m33570_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t1407_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33570_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Contains(T)
MethodInfo ICollection_1_Contains_m33570_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6469_ICollection_1_Contains_m33570_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33570_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitectureU5BU5D_t3696_0_0_0;
extern Il2CppType ProcessorArchitectureU5BU5D_t3696_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6469_ICollection_1_CopyTo_m33571_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitectureU5BU5D_t3696_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33571_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33571_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6469_ICollection_1_CopyTo_m33571_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33571_GenericMethod/* genericMethod */

};
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
static ParameterInfo ICollection_1_t6469_ICollection_1_Remove_m33572_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t1407_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33572_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Remove(T)
MethodInfo ICollection_1_Remove_m33572_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6469_ICollection_1_Remove_m33572_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33572_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6469_MethodInfos[] =
{
	&ICollection_1_get_Count_m33566_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33567_MethodInfo,
	&ICollection_1_Add_m33568_MethodInfo,
	&ICollection_1_Clear_m33569_MethodInfo,
	&ICollection_1_Contains_m33570_MethodInfo,
	&ICollection_1_CopyTo_m33571_MethodInfo,
	&ICollection_1_Remove_m33572_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6471_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6469_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6469_0_0_0;
extern Il2CppType ICollection_1_t6469_1_0_0;
struct ICollection_1_t6469;
extern Il2CppGenericClass ICollection_1_t6469_GenericClass;
TypeInfo ICollection_1_t6469_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6469_MethodInfos/* methods */
	, ICollection_1_t6469_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6469_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6469_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6469_0_0_0/* byval_arg */
	, &ICollection_1_t6469_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6469_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>
extern Il2CppType IEnumerator_1_t4958_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33573_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33573_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6471_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4958_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33573_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6471_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33573_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6471_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6471_0_0_0;
extern Il2CppType IEnumerable_1_t6471_1_0_0;
struct IEnumerable_1_t6471;
extern Il2CppGenericClass IEnumerable_1_t6471_GenericClass;
TypeInfo IEnumerable_1_t6471_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6471_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6471_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6471_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6471_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6471_0_0_0/* byval_arg */
	, &IEnumerable_1_t6471_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6471_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo IList_1_get_Item_m33574_MethodInfo;
extern MethodInfo IList_1_set_Item_m33575_MethodInfo;
static PropertyInfo IList_1_t6470____Item_PropertyInfo = 
{
	&IList_1_t6470_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33574_MethodInfo/* get */
	, &IList_1_set_Item_m33575_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6470_PropertyInfos[] =
{
	&IList_1_t6470____Item_PropertyInfo,
	NULL
};
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
static ParameterInfo IList_1_t6470_IList_1_IndexOf_m33576_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t1407_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33576_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33576_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6470_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6470_IList_1_IndexOf_m33576_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33576_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
static ParameterInfo IList_1_t6470_IList_1_Insert_m33577_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t1407_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33577_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33577_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6470_IList_1_Insert_m33577_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33577_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6470_IList_1_RemoveAt_m33578_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33578_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33578_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6470_IList_1_RemoveAt_m33578_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33578_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6470_IList_1_get_Item_m33574_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t1407_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33574_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33574_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6470_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t1407_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t1407_Int32_t18/* invoker_method */
	, IList_1_t6470_IList_1_get_Item_m33574_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33574_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ProcessorArchitecture_t1407_0_0_0;
static ParameterInfo IList_1_t6470_IList_1_set_Item_m33575_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t1407_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33575_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33575_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6470_IList_1_set_Item_m33575_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33575_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6470_MethodInfos[] =
{
	&IList_1_IndexOf_m33576_MethodInfo,
	&IList_1_Insert_m33577_MethodInfo,
	&IList_1_RemoveAt_m33578_MethodInfo,
	&IList_1_get_Item_m33574_MethodInfo,
	&IList_1_set_Item_m33575_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6470_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6469_il2cpp_TypeInfo,
	&IEnumerable_1_t6471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6470_0_0_0;
extern Il2CppType IList_1_t6470_1_0_0;
struct IList_1_t6470;
extern Il2CppGenericClass IList_1_t6470_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6470_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6470_MethodInfos/* methods */
	, IList_1_t6470_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6470_il2cpp_TypeInfo/* element_class */
	, IList_1_t6470_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6470_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6470_0_0_0/* byval_arg */
	, &IList_1_t6470_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6470_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4960_il2cpp_TypeInfo;

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>
extern MethodInfo IEnumerator_1_get_Current_m33579_MethodInfo;
static PropertyInfo IEnumerator_1_t4960____Current_PropertyInfo = 
{
	&IEnumerator_1_t4960_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33579_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4960_PropertyInfos[] =
{
	&IEnumerator_1_t4960____Current_PropertyInfo,
	NULL
};
extern Il2CppType PropertyAttributes_t1408_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t1408 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33579_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33579_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4960_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t1408_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t1408/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33579_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4960_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33579_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4960_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4960_0_0_0;
extern Il2CppType IEnumerator_1_t4960_1_0_0;
struct IEnumerator_1_t4960;
extern Il2CppGenericClass IEnumerator_1_t4960_GenericClass;
TypeInfo IEnumerator_1_t4960_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4960_MethodInfos/* methods */
	, IEnumerator_1_t4960_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4960_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4960_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4960_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4960_0_0_0/* byval_arg */
	, &IEnumerator_1_t4960_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4960_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_475.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3451_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_475MethodDeclarations.h"

extern TypeInfo PropertyAttributes_t1408_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19143_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPropertyAttributes_t1408_m25700_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPropertyAttributes_t1408_m25700 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19139_MethodInfo;
 void InternalEnumerator_1__ctor_m19139 (InternalEnumerator_1_t3451 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140 (InternalEnumerator_1_t3451 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19143(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19143_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PropertyAttributes_t1408_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19141_MethodInfo;
 void InternalEnumerator_1_Dispose_m19141 (InternalEnumerator_1_t3451 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19142_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19142 (InternalEnumerator_1_t3451 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19143 (InternalEnumerator_1_t3451 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPropertyAttributes_t1408_m25700(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPropertyAttributes_t1408_m25700_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3451____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3451, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3451____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3451, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3451_FieldInfos[] =
{
	&InternalEnumerator_1_t3451____array_0_FieldInfo,
	&InternalEnumerator_1_t3451____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3451____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3451_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3451____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3451_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19143_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3451_PropertyInfos[] =
{
	&InternalEnumerator_1_t3451____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3451____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3451_InternalEnumerator_1__ctor_m19139_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19139_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19139_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19139/* method */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3451_InternalEnumerator_1__ctor_m19139_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19139_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140/* method */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19141_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19141_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19141/* method */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19141_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19142_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19142_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19142/* method */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19142_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t1408_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t1408 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19143_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19143_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19143/* method */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t1408_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t1408/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19143_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3451_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19139_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140_MethodInfo,
	&InternalEnumerator_1_Dispose_m19141_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19142_MethodInfo,
	&InternalEnumerator_1_get_Current_m19143_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3451_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19140_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19142_MethodInfo,
	&InternalEnumerator_1_Dispose_m19141_MethodInfo,
	&InternalEnumerator_1_get_Current_m19143_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3451_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4960_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3451_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4960_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3451_0_0_0;
extern Il2CppType InternalEnumerator_1_t3451_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3451_GenericClass;
TypeInfo InternalEnumerator_1_t3451_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3451_MethodInfos/* methods */
	, InternalEnumerator_1_t3451_PropertyInfos/* properties */
	, InternalEnumerator_1_t3451_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3451_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3451_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3451_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3451_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3451_1_0_0/* this_arg */
	, InternalEnumerator_1_t3451_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3451_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3451)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6472_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>
extern MethodInfo ICollection_1_get_Count_m33580_MethodInfo;
static PropertyInfo ICollection_1_t6472____Count_PropertyInfo = 
{
	&ICollection_1_t6472_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33580_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33581_MethodInfo;
static PropertyInfo ICollection_1_t6472____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6472_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33581_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6472_PropertyInfos[] =
{
	&ICollection_1_t6472____Count_PropertyInfo,
	&ICollection_1_t6472____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33580_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m33580_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33580_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33581_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33581_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33581_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t1408_0_0_0;
extern Il2CppType PropertyAttributes_t1408_0_0_0;
static ParameterInfo ICollection_1_t6472_ICollection_1_Add_m33582_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t1408_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33582_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Add(T)
MethodInfo ICollection_1_Add_m33582_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6472_ICollection_1_Add_m33582_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33582_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33583_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Clear()
MethodInfo ICollection_1_Clear_m33583_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33583_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t1408_0_0_0;
static ParameterInfo ICollection_1_t6472_ICollection_1_Contains_m33584_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t1408_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33584_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m33584_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6472_ICollection_1_Contains_m33584_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33584_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributesU5BU5D_t3697_0_0_0;
extern Il2CppType PropertyAttributesU5BU5D_t3697_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6472_ICollection_1_CopyTo_m33585_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributesU5BU5D_t3697_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33585_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33585_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6472_ICollection_1_CopyTo_m33585_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33585_GenericMethod/* genericMethod */

};
extern Il2CppType PropertyAttributes_t1408_0_0_0;
static ParameterInfo ICollection_1_t6472_ICollection_1_Remove_m33586_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t1408_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33586_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m33586_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6472_ICollection_1_Remove_m33586_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33586_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6472_MethodInfos[] =
{
	&ICollection_1_get_Count_m33580_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33581_MethodInfo,
	&ICollection_1_Add_m33582_MethodInfo,
	&ICollection_1_Clear_m33583_MethodInfo,
	&ICollection_1_Contains_m33584_MethodInfo,
	&ICollection_1_CopyTo_m33585_MethodInfo,
	&ICollection_1_Remove_m33586_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6474_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6472_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6472_0_0_0;
extern Il2CppType ICollection_1_t6472_1_0_0;
struct ICollection_1_t6472;
extern Il2CppGenericClass ICollection_1_t6472_GenericClass;
TypeInfo ICollection_1_t6472_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6472_MethodInfos/* methods */
	, ICollection_1_t6472_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6472_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6472_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6472_0_0_0/* byval_arg */
	, &ICollection_1_t6472_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6472_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>
extern Il2CppType IEnumerator_1_t4960_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33587_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33587_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6474_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4960_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33587_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6474_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33587_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6474_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6474_0_0_0;
extern Il2CppType IEnumerable_1_t6474_1_0_0;
struct IEnumerable_1_t6474;
extern Il2CppGenericClass IEnumerable_1_t6474_GenericClass;
TypeInfo IEnumerable_1_t6474_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6474_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6474_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6474_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6474_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6474_0_0_0/* byval_arg */
	, &IEnumerable_1_t6474_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6474_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6473_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>
extern MethodInfo IList_1_get_Item_m33588_MethodInfo;
extern MethodInfo IList_1_set_Item_m33589_MethodInfo;
static PropertyInfo IList_1_t6473____Item_PropertyInfo = 
{
	&IList_1_t6473_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33588_MethodInfo/* get */
	, &IList_1_set_Item_m33589_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6473_PropertyInfos[] =
{
	&IList_1_t6473____Item_PropertyInfo,
	NULL
};
extern Il2CppType PropertyAttributes_t1408_0_0_0;
static ParameterInfo IList_1_t6473_IList_1_IndexOf_m33590_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t1408_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33590_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33590_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6473_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6473_IList_1_IndexOf_m33590_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33590_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PropertyAttributes_t1408_0_0_0;
static ParameterInfo IList_1_t6473_IList_1_Insert_m33591_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t1408_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33591_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33591_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6473_IList_1_Insert_m33591_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33591_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6473_IList_1_RemoveAt_m33592_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33592_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33592_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6473_IList_1_RemoveAt_m33592_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33592_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6473_IList_1_get_Item_m33588_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType PropertyAttributes_t1408_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t1408_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33588_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33588_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6473_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t1408_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t1408_Int32_t18/* invoker_method */
	, IList_1_t6473_IList_1_get_Item_m33588_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33588_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PropertyAttributes_t1408_0_0_0;
static ParameterInfo IList_1_t6473_IList_1_set_Item_m33589_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t1408_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33589_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33589_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6473_IList_1_set_Item_m33589_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33589_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6473_MethodInfos[] =
{
	&IList_1_IndexOf_m33590_MethodInfo,
	&IList_1_Insert_m33591_MethodInfo,
	&IList_1_RemoveAt_m33592_MethodInfo,
	&IList_1_get_Item_m33588_MethodInfo,
	&IList_1_set_Item_m33589_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6473_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6472_il2cpp_TypeInfo,
	&IEnumerable_1_t6474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6473_0_0_0;
extern Il2CppType IList_1_t6473_1_0_0;
struct IList_1_t6473;
extern Il2CppGenericClass IList_1_t6473_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6473_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6473_MethodInfos/* methods */
	, IList_1_t6473_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6473_il2cpp_TypeInfo/* element_class */
	, IList_1_t6473_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6473_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6473_0_0_0/* byval_arg */
	, &IList_1_t6473_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6473_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4962_il2cpp_TypeInfo;

// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>
extern MethodInfo IEnumerator_1_get_Current_m33593_MethodInfo;
static PropertyInfo IEnumerator_1_t4962____Current_PropertyInfo = 
{
	&IEnumerator_1_t4962_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33593_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4962_PropertyInfos[] =
{
	&IEnumerator_1_t4962____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeAttributes_t1412_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t1412 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33593_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33593_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4962_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t1412_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t1412/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33593_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4962_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33593_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4962_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4962_0_0_0;
extern Il2CppType IEnumerator_1_t4962_1_0_0;
struct IEnumerator_1_t4962;
extern Il2CppGenericClass IEnumerator_1_t4962_GenericClass;
TypeInfo IEnumerator_1_t4962_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4962_MethodInfos/* methods */
	, IEnumerator_1_t4962_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4962_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4962_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4962_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4962_0_0_0/* byval_arg */
	, &IEnumerator_1_t4962_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4962_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_476.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3452_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_476MethodDeclarations.h"

extern TypeInfo TypeAttributes_t1412_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19148_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeAttributes_t1412_m25711_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.TypeAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.TypeAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeAttributes_t1412_m25711 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19144_MethodInfo;
 void InternalEnumerator_1__ctor_m19144 (InternalEnumerator_1_t3452 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145 (InternalEnumerator_1_t3452 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19148(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19148_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeAttributes_t1412_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19146_MethodInfo;
 void InternalEnumerator_1_Dispose_m19146 (InternalEnumerator_1_t3452 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19147_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19147 (InternalEnumerator_1_t3452 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19148 (InternalEnumerator_1_t3452 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeAttributes_t1412_m25711(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeAttributes_t1412_m25711_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3452____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3452, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3452____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3452, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3452_FieldInfos[] =
{
	&InternalEnumerator_1_t3452____array_0_FieldInfo,
	&InternalEnumerator_1_t3452____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3452____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3452_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3452____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3452_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19148_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3452_PropertyInfos[] =
{
	&InternalEnumerator_1_t3452____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3452____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3452_InternalEnumerator_1__ctor_m19144_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19144_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19144_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19144/* method */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3452_InternalEnumerator_1__ctor_m19144_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19144_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145/* method */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19146_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19146_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19146/* method */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19146_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19147_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19147_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19147/* method */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19147_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t1412_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t1412 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19148_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19148_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19148/* method */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t1412_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t1412/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19148_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3452_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19144_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145_MethodInfo,
	&InternalEnumerator_1_Dispose_m19146_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19147_MethodInfo,
	&InternalEnumerator_1_get_Current_m19148_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3452_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19145_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19147_MethodInfo,
	&InternalEnumerator_1_Dispose_m19146_MethodInfo,
	&InternalEnumerator_1_get_Current_m19148_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3452_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4962_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3452_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4962_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3452_0_0_0;
extern Il2CppType InternalEnumerator_1_t3452_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3452_GenericClass;
TypeInfo InternalEnumerator_1_t3452_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3452_MethodInfos/* methods */
	, InternalEnumerator_1_t3452_PropertyInfos/* properties */
	, InternalEnumerator_1_t3452_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3452_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3452_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3452_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3452_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3452_1_0_0/* this_arg */
	, InternalEnumerator_1_t3452_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3452_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3452)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6475_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>
extern MethodInfo ICollection_1_get_Count_m33594_MethodInfo;
static PropertyInfo ICollection_1_t6475____Count_PropertyInfo = 
{
	&ICollection_1_t6475_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33594_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33595_MethodInfo;
static PropertyInfo ICollection_1_t6475____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6475_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33595_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6475_PropertyInfos[] =
{
	&ICollection_1_t6475____Count_PropertyInfo,
	&ICollection_1_t6475____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33594_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m33594_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33594_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33595_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33595_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33595_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t1412_0_0_0;
extern Il2CppType TypeAttributes_t1412_0_0_0;
static ParameterInfo ICollection_1_t6475_ICollection_1_Add_m33596_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t1412_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33596_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Add(T)
MethodInfo ICollection_1_Add_m33596_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6475_ICollection_1_Add_m33596_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33596_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33597_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Clear()
MethodInfo ICollection_1_Clear_m33597_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33597_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t1412_0_0_0;
static ParameterInfo ICollection_1_t6475_ICollection_1_Contains_m33598_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t1412_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33598_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m33598_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6475_ICollection_1_Contains_m33598_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33598_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributesU5BU5D_t3698_0_0_0;
extern Il2CppType TypeAttributesU5BU5D_t3698_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6475_ICollection_1_CopyTo_m33599_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributesU5BU5D_t3698_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33599_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33599_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6475_ICollection_1_CopyTo_m33599_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33599_GenericMethod/* genericMethod */

};
extern Il2CppType TypeAttributes_t1412_0_0_0;
static ParameterInfo ICollection_1_t6475_ICollection_1_Remove_m33600_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t1412_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33600_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m33600_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6475_ICollection_1_Remove_m33600_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33600_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6475_MethodInfos[] =
{
	&ICollection_1_get_Count_m33594_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33595_MethodInfo,
	&ICollection_1_Add_m33596_MethodInfo,
	&ICollection_1_Clear_m33597_MethodInfo,
	&ICollection_1_Contains_m33598_MethodInfo,
	&ICollection_1_CopyTo_m33599_MethodInfo,
	&ICollection_1_Remove_m33600_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6477_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6475_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6475_0_0_0;
extern Il2CppType ICollection_1_t6475_1_0_0;
struct ICollection_1_t6475;
extern Il2CppGenericClass ICollection_1_t6475_GenericClass;
TypeInfo ICollection_1_t6475_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6475_MethodInfos/* methods */
	, ICollection_1_t6475_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6475_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6475_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6475_0_0_0/* byval_arg */
	, &ICollection_1_t6475_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6475_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>
extern Il2CppType IEnumerator_1_t4962_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33601_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33601_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6477_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4962_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33601_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6477_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33601_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6477_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6477_0_0_0;
extern Il2CppType IEnumerable_1_t6477_1_0_0;
struct IEnumerable_1_t6477;
extern Il2CppGenericClass IEnumerable_1_t6477_GenericClass;
TypeInfo IEnumerable_1_t6477_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6477_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6477_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6477_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6477_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6477_0_0_0/* byval_arg */
	, &IEnumerable_1_t6477_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6477_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6476_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>
extern MethodInfo IList_1_get_Item_m33602_MethodInfo;
extern MethodInfo IList_1_set_Item_m33603_MethodInfo;
static PropertyInfo IList_1_t6476____Item_PropertyInfo = 
{
	&IList_1_t6476_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33602_MethodInfo/* get */
	, &IList_1_set_Item_m33603_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6476_PropertyInfos[] =
{
	&IList_1_t6476____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeAttributes_t1412_0_0_0;
static ParameterInfo IList_1_t6476_IList_1_IndexOf_m33604_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t1412_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33604_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33604_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6476_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6476_IList_1_IndexOf_m33604_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33604_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeAttributes_t1412_0_0_0;
static ParameterInfo IList_1_t6476_IList_1_Insert_m33605_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t1412_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33605_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33605_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6476_IList_1_Insert_m33605_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33605_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6476_IList_1_RemoveAt_m33606_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33606_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33606_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6476_IList_1_RemoveAt_m33606_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33606_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6476_IList_1_get_Item_m33602_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TypeAttributes_t1412_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t1412_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33602_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33602_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6476_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t1412_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t1412_Int32_t18/* invoker_method */
	, IList_1_t6476_IList_1_get_Item_m33602_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33602_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeAttributes_t1412_0_0_0;
static ParameterInfo IList_1_t6476_IList_1_set_Item_m33603_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t1412_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33603_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33603_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6476_IList_1_set_Item_m33603_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33603_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6476_MethodInfos[] =
{
	&IList_1_IndexOf_m33604_MethodInfo,
	&IList_1_Insert_m33605_MethodInfo,
	&IList_1_RemoveAt_m33606_MethodInfo,
	&IList_1_get_Item_m33602_MethodInfo,
	&IList_1_set_Item_m33603_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6476_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6475_il2cpp_TypeInfo,
	&IEnumerable_1_t6477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6476_0_0_0;
extern Il2CppType IList_1_t6476_1_0_0;
struct IList_1_t6476;
extern Il2CppGenericClass IList_1_t6476_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6476_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6476_MethodInfos/* methods */
	, IList_1_t6476_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6476_il2cpp_TypeInfo/* element_class */
	, IList_1_t6476_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6476_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6476_0_0_0/* byval_arg */
	, &IList_1_t6476_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6476_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4964_il2cpp_TypeInfo;

// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33607_MethodInfo;
static PropertyInfo IEnumerator_1_t4964____Current_PropertyInfo = 
{
	&IEnumerator_1_t4964_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33607_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4964_PropertyInfos[] =
{
	&IEnumerator_1_t4964____Current_PropertyInfo,
	NULL
};
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33607_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33607_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4964_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t747_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33607_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4964_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33607_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4964_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4964_0_0_0;
extern Il2CppType IEnumerator_1_t4964_1_0_0;
struct IEnumerator_1_t4964;
extern Il2CppGenericClass IEnumerator_1_t4964_GenericClass;
TypeInfo IEnumerator_1_t4964_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4964_MethodInfos/* methods */
	, IEnumerator_1_t4964_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4964_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4964_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4964_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4964_0_0_0/* byval_arg */
	, &IEnumerator_1_t4964_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4964_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_477.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3453_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_477MethodDeclarations.h"

extern TypeInfo NeutralResourcesLanguageAttribute_t747_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19153_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t747_m25722_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m19779_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19779(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Resources.NeutralResourcesLanguageAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Resources.NeutralResourcesLanguageAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t747_m25722(__this, p0, method) (NeutralResourcesLanguageAttribute_t747 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3453____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3453, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3453____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3453, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3453_FieldInfos[] =
{
	&InternalEnumerator_1_t3453____array_0_FieldInfo,
	&InternalEnumerator_1_t3453____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19150_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3453____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3453_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19150_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3453____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3453_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19153_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3453_PropertyInfos[] =
{
	&InternalEnumerator_1_t3453____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3453____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3453_InternalEnumerator_1__ctor_m19149_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19149_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19149_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3453_InternalEnumerator_1__ctor_m19149_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19149_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19150_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19150_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19150_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19151_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19151_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19151_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19152_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19152_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19152_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19153_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19153_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t747_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19153_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3453_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19149_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19150_MethodInfo,
	&InternalEnumerator_1_Dispose_m19151_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19152_MethodInfo,
	&InternalEnumerator_1_get_Current_m19153_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19152_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19151_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3453_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19150_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19152_MethodInfo,
	&InternalEnumerator_1_Dispose_m19151_MethodInfo,
	&InternalEnumerator_1_get_Current_m19153_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3453_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4964_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3453_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4964_il2cpp_TypeInfo, 7},
};
extern TypeInfo NeutralResourcesLanguageAttribute_t747_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3453_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19153_MethodInfo/* Method Usage */,
	&NeutralResourcesLanguageAttribute_t747_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t747_m25722_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3453_0_0_0;
extern Il2CppType InternalEnumerator_1_t3453_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3453_GenericClass;
TypeInfo InternalEnumerator_1_t3453_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3453_MethodInfos/* methods */
	, InternalEnumerator_1_t3453_PropertyInfos/* properties */
	, InternalEnumerator_1_t3453_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3453_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3453_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3453_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3453_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3453_1_0_0/* this_arg */
	, InternalEnumerator_1_t3453_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3453_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3453_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3453)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6478_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo ICollection_1_get_Count_m33608_MethodInfo;
static PropertyInfo ICollection_1_t6478____Count_PropertyInfo = 
{
	&ICollection_1_t6478_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33608_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33609_MethodInfo;
static PropertyInfo ICollection_1_t6478____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6478_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33609_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6478_PropertyInfos[] =
{
	&ICollection_1_t6478____Count_PropertyInfo,
	&ICollection_1_t6478____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33608_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33608_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33608_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33609_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33609_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33609_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
static ParameterInfo ICollection_1_t6478_ICollection_1_Add_m33610_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t747_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33610_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33610_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6478_ICollection_1_Add_m33610_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33610_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33611_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33611_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33611_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
static ParameterInfo ICollection_1_t6478_ICollection_1_Contains_m33612_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t747_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33612_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33612_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6478_ICollection_1_Contains_m33612_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33612_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttributeU5BU5D_t3699_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttributeU5BU5D_t3699_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6478_ICollection_1_CopyTo_m33613_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttributeU5BU5D_t3699_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33613_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33613_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6478_ICollection_1_CopyTo_m33613_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33613_GenericMethod/* genericMethod */

};
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
static ParameterInfo ICollection_1_t6478_ICollection_1_Remove_m33614_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t747_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33614_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33614_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6478_ICollection_1_Remove_m33614_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33614_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6478_MethodInfos[] =
{
	&ICollection_1_get_Count_m33608_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33609_MethodInfo,
	&ICollection_1_Add_m33610_MethodInfo,
	&ICollection_1_Clear_m33611_MethodInfo,
	&ICollection_1_Contains_m33612_MethodInfo,
	&ICollection_1_CopyTo_m33613_MethodInfo,
	&ICollection_1_Remove_m33614_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6480_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6478_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6478_0_0_0;
extern Il2CppType ICollection_1_t6478_1_0_0;
struct ICollection_1_t6478;
extern Il2CppGenericClass ICollection_1_t6478_GenericClass;
TypeInfo ICollection_1_t6478_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6478_MethodInfos/* methods */
	, ICollection_1_t6478_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6478_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6478_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6478_0_0_0/* byval_arg */
	, &ICollection_1_t6478_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6478_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>
extern Il2CppType IEnumerator_1_t4964_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33615_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33615_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6480_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4964_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33615_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6480_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33615_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6480_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6480_0_0_0;
extern Il2CppType IEnumerable_1_t6480_1_0_0;
struct IEnumerable_1_t6480;
extern Il2CppGenericClass IEnumerable_1_t6480_GenericClass;
TypeInfo IEnumerable_1_t6480_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6480_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6480_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6480_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6480_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6480_0_0_0/* byval_arg */
	, &IEnumerable_1_t6480_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6480_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6479_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo IList_1_get_Item_m33616_MethodInfo;
extern MethodInfo IList_1_set_Item_m33617_MethodInfo;
static PropertyInfo IList_1_t6479____Item_PropertyInfo = 
{
	&IList_1_t6479_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33616_MethodInfo/* get */
	, &IList_1_set_Item_m33617_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6479_PropertyInfos[] =
{
	&IList_1_t6479____Item_PropertyInfo,
	NULL
};
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
static ParameterInfo IList_1_t6479_IList_1_IndexOf_m33618_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t747_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33618_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33618_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6479_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6479_IList_1_IndexOf_m33618_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33618_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
static ParameterInfo IList_1_t6479_IList_1_Insert_m33619_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t747_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33619_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33619_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6479_IList_1_Insert_m33619_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33619_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6479_IList_1_RemoveAt_m33620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33620_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33620_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6479_IList_1_RemoveAt_m33620_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33620_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6479_IList_1_get_Item_m33616_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33616_GenericMethod;
// T System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33616_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6479_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t747_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6479_IList_1_get_Item_m33616_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33616_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType NeutralResourcesLanguageAttribute_t747_0_0_0;
static ParameterInfo IList_1_t6479_IList_1_set_Item_m33617_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t747_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33617_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33617_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6479_IList_1_set_Item_m33617_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33617_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6479_MethodInfos[] =
{
	&IList_1_IndexOf_m33618_MethodInfo,
	&IList_1_Insert_m33619_MethodInfo,
	&IList_1_RemoveAt_m33620_MethodInfo,
	&IList_1_get_Item_m33616_MethodInfo,
	&IList_1_set_Item_m33617_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6479_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6478_il2cpp_TypeInfo,
	&IEnumerable_1_t6480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6479_0_0_0;
extern Il2CppType IList_1_t6479_1_0_0;
struct IList_1_t6479;
extern Il2CppGenericClass IList_1_t6479_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6479_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6479_MethodInfos/* methods */
	, IList_1_t6479_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6479_il2cpp_TypeInfo/* element_class */
	, IList_1_t6479_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6479_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6479_0_0_0/* byval_arg */
	, &IList_1_t6479_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6479_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4966_il2cpp_TypeInfo;

// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33621_MethodInfo;
static PropertyInfo IEnumerator_1_t4966____Current_PropertyInfo = 
{
	&IEnumerator_1_t4966_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33621_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4966_PropertyInfos[] =
{
	&IEnumerator_1_t4966____Current_PropertyInfo,
	NULL
};
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33621_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33621_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4966_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t745_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33621_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4966_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33621_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4966_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4966_0_0_0;
extern Il2CppType IEnumerator_1_t4966_1_0_0;
struct IEnumerator_1_t4966;
extern Il2CppGenericClass IEnumerator_1_t4966_GenericClass;
TypeInfo IEnumerator_1_t4966_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4966_MethodInfos/* methods */
	, IEnumerator_1_t4966_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4966_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4966_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4966_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4966_0_0_0/* byval_arg */
	, &IEnumerator_1_t4966_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4966_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_478.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3454_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_478MethodDeclarations.h"

extern TypeInfo SatelliteContractVersionAttribute_t745_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19158_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t745_m25733_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Resources.SatelliteContractVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Resources.SatelliteContractVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t745_m25733(__this, p0, method) (SatelliteContractVersionAttribute_t745 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3454____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3454, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3454____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3454, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3454_FieldInfos[] =
{
	&InternalEnumerator_1_t3454____array_0_FieldInfo,
	&InternalEnumerator_1_t3454____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19155_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3454____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3454_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19155_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3454____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3454_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19158_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3454_PropertyInfos[] =
{
	&InternalEnumerator_1_t3454____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3454____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3454_InternalEnumerator_1__ctor_m19154_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19154_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19154_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3454_InternalEnumerator_1__ctor_m19154_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19154_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19155_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19155_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19155_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19156_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19156_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19156_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19157_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19157_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19157_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19158_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19158_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t745_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19158_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3454_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19154_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19155_MethodInfo,
	&InternalEnumerator_1_Dispose_m19156_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19157_MethodInfo,
	&InternalEnumerator_1_get_Current_m19158_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19157_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19156_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3454_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19155_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19157_MethodInfo,
	&InternalEnumerator_1_Dispose_m19156_MethodInfo,
	&InternalEnumerator_1_get_Current_m19158_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3454_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4966_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3454_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4966_il2cpp_TypeInfo, 7},
};
extern TypeInfo SatelliteContractVersionAttribute_t745_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3454_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19158_MethodInfo/* Method Usage */,
	&SatelliteContractVersionAttribute_t745_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t745_m25733_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3454_0_0_0;
extern Il2CppType InternalEnumerator_1_t3454_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3454_GenericClass;
TypeInfo InternalEnumerator_1_t3454_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3454_MethodInfos/* methods */
	, InternalEnumerator_1_t3454_PropertyInfos/* properties */
	, InternalEnumerator_1_t3454_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3454_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3454_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3454_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3454_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3454_1_0_0/* this_arg */
	, InternalEnumerator_1_t3454_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3454_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3454_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3454)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6481_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m33622_MethodInfo;
static PropertyInfo ICollection_1_t6481____Count_PropertyInfo = 
{
	&ICollection_1_t6481_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33622_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33623_MethodInfo;
static PropertyInfo ICollection_1_t6481____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6481_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33623_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6481_PropertyInfos[] =
{
	&ICollection_1_t6481____Count_PropertyInfo,
	&ICollection_1_t6481____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33622_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33622_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33622_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33623_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33623_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33623_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
static ParameterInfo ICollection_1_t6481_ICollection_1_Add_m33624_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t745_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33624_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33624_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6481_ICollection_1_Add_m33624_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33624_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33625_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33625_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33625_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
static ParameterInfo ICollection_1_t6481_ICollection_1_Contains_m33626_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t745_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33626_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33626_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6481_ICollection_1_Contains_m33626_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33626_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttributeU5BU5D_t3700_0_0_0;
extern Il2CppType SatelliteContractVersionAttributeU5BU5D_t3700_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6481_ICollection_1_CopyTo_m33627_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttributeU5BU5D_t3700_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33627_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33627_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6481_ICollection_1_CopyTo_m33627_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33627_GenericMethod/* genericMethod */

};
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
static ParameterInfo ICollection_1_t6481_ICollection_1_Remove_m33628_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t745_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33628_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33628_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6481_ICollection_1_Remove_m33628_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33628_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6481_MethodInfos[] =
{
	&ICollection_1_get_Count_m33622_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33623_MethodInfo,
	&ICollection_1_Add_m33624_MethodInfo,
	&ICollection_1_Clear_m33625_MethodInfo,
	&ICollection_1_Contains_m33626_MethodInfo,
	&ICollection_1_CopyTo_m33627_MethodInfo,
	&ICollection_1_Remove_m33628_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6483_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6481_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6481_0_0_0;
extern Il2CppType ICollection_1_t6481_1_0_0;
struct ICollection_1_t6481;
extern Il2CppGenericClass ICollection_1_t6481_GenericClass;
TypeInfo ICollection_1_t6481_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6481_MethodInfos/* methods */
	, ICollection_1_t6481_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6481_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6481_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6481_0_0_0/* byval_arg */
	, &ICollection_1_t6481_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6481_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>
extern Il2CppType IEnumerator_1_t4966_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33629_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33629_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6483_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4966_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33629_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6483_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33629_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6483_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6483_0_0_0;
extern Il2CppType IEnumerable_1_t6483_1_0_0;
struct IEnumerable_1_t6483;
extern Il2CppGenericClass IEnumerable_1_t6483_GenericClass;
TypeInfo IEnumerable_1_t6483_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6483_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6483_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6483_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6483_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6483_0_0_0/* byval_arg */
	, &IEnumerable_1_t6483_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6483_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6482_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo IList_1_get_Item_m33630_MethodInfo;
extern MethodInfo IList_1_set_Item_m33631_MethodInfo;
static PropertyInfo IList_1_t6482____Item_PropertyInfo = 
{
	&IList_1_t6482_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33630_MethodInfo/* get */
	, &IList_1_set_Item_m33631_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6482_PropertyInfos[] =
{
	&IList_1_t6482____Item_PropertyInfo,
	NULL
};
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
static ParameterInfo IList_1_t6482_IList_1_IndexOf_m33632_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t745_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33632_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33632_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6482_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6482_IList_1_IndexOf_m33632_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33632_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
static ParameterInfo IList_1_t6482_IList_1_Insert_m33633_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t745_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33633_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33633_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6482_IList_1_Insert_m33633_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33633_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6482_IList_1_RemoveAt_m33634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33634_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33634_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6482_IList_1_RemoveAt_m33634_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33634_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6482_IList_1_get_Item_m33630_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33630_GenericMethod;
// T System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33630_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6482_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t745_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6482_IList_1_get_Item_m33630_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33630_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SatelliteContractVersionAttribute_t745_0_0_0;
static ParameterInfo IList_1_t6482_IList_1_set_Item_m33631_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t745_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33631_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33631_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6482_IList_1_set_Item_m33631_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33631_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6482_MethodInfos[] =
{
	&IList_1_IndexOf_m33632_MethodInfo,
	&IList_1_Insert_m33633_MethodInfo,
	&IList_1_RemoveAt_m33634_MethodInfo,
	&IList_1_get_Item_m33630_MethodInfo,
	&IList_1_set_Item_m33631_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6482_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6481_il2cpp_TypeInfo,
	&IEnumerable_1_t6483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6482_0_0_0;
extern Il2CppType IList_1_t6482_1_0_0;
struct IList_1_t6482;
extern Il2CppGenericClass IList_1_t6482_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6482_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6482_MethodInfos/* methods */
	, IList_1_t6482_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6482_il2cpp_TypeInfo/* element_class */
	, IList_1_t6482_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6482_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6482_0_0_0/* byval_arg */
	, &IList_1_t6482_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6482_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4968_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo IEnumerator_1_get_Current_m33635_MethodInfo;
static PropertyInfo IEnumerator_1_t4968____Current_PropertyInfo = 
{
	&IEnumerator_1_t4968_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33635_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4968_PropertyInfos[] =
{
	&IEnumerator_1_t4968____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t1413 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33635_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33635_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4968_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t1413_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t1413/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33635_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4968_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33635_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4968_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4968_0_0_0;
extern Il2CppType IEnumerator_1_t4968_1_0_0;
struct IEnumerator_1_t4968;
extern Il2CppGenericClass IEnumerator_1_t4968_GenericClass;
TypeInfo IEnumerator_1_t4968_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4968_MethodInfos/* methods */
	, IEnumerator_1_t4968_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4968_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4968_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4968_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4968_0_0_0/* byval_arg */
	, &IEnumerator_1_t4968_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4968_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_479.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3455_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_479MethodDeclarations.h"

extern TypeInfo CompilationRelaxations_t1413_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19163_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxations_t1413_m25744_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCompilationRelaxations_t1413_m25744 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19159_MethodInfo;
 void InternalEnumerator_1__ctor_m19159 (InternalEnumerator_1_t3455 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160 (InternalEnumerator_1_t3455 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19163(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19163_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CompilationRelaxations_t1413_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19161_MethodInfo;
 void InternalEnumerator_1_Dispose_m19161 (InternalEnumerator_1_t3455 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19162_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19162 (InternalEnumerator_1_t3455 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19163 (InternalEnumerator_1_t3455 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCompilationRelaxations_t1413_m25744(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCompilationRelaxations_t1413_m25744_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3455____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3455, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3455____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3455, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3455_FieldInfos[] =
{
	&InternalEnumerator_1_t3455____array_0_FieldInfo,
	&InternalEnumerator_1_t3455____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3455____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3455_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3455____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3455_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19163_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3455_PropertyInfos[] =
{
	&InternalEnumerator_1_t3455____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3455____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3455_InternalEnumerator_1__ctor_m19159_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19159_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19159_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19159/* method */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3455_InternalEnumerator_1__ctor_m19159_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19159_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160/* method */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19161_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19161_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19161/* method */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19161_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19162_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19162_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19162/* method */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19162_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t1413 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19163_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19163_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19163/* method */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t1413_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t1413/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19163_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3455_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19159_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160_MethodInfo,
	&InternalEnumerator_1_Dispose_m19161_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19162_MethodInfo,
	&InternalEnumerator_1_get_Current_m19163_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3455_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19160_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19162_MethodInfo,
	&InternalEnumerator_1_Dispose_m19161_MethodInfo,
	&InternalEnumerator_1_get_Current_m19163_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3455_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4968_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3455_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4968_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3455_0_0_0;
extern Il2CppType InternalEnumerator_1_t3455_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3455_GenericClass;
TypeInfo InternalEnumerator_1_t3455_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3455_MethodInfos/* methods */
	, InternalEnumerator_1_t3455_PropertyInfos/* properties */
	, InternalEnumerator_1_t3455_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3455_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3455_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3455_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3455_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3455_1_0_0/* this_arg */
	, InternalEnumerator_1_t3455_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3455_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3455)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6484_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo ICollection_1_get_Count_m33636_MethodInfo;
static PropertyInfo ICollection_1_t6484____Count_PropertyInfo = 
{
	&ICollection_1_t6484_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33636_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33637_MethodInfo;
static PropertyInfo ICollection_1_t6484____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6484_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33637_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6484_PropertyInfos[] =
{
	&ICollection_1_t6484____Count_PropertyInfo,
	&ICollection_1_t6484____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33636_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Count()
MethodInfo ICollection_1_get_Count_m33636_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33636_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33637_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33637_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33637_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
static ParameterInfo ICollection_1_t6484_ICollection_1_Add_m33638_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t1413_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33638_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Add(T)
MethodInfo ICollection_1_Add_m33638_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6484_ICollection_1_Add_m33638_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33638_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33639_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Clear()
MethodInfo ICollection_1_Clear_m33639_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33639_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
static ParameterInfo ICollection_1_t6484_ICollection_1_Contains_m33640_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t1413_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33640_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Contains(T)
MethodInfo ICollection_1_Contains_m33640_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6484_ICollection_1_Contains_m33640_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33640_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsU5BU5D_t3701_0_0_0;
extern Il2CppType CompilationRelaxationsU5BU5D_t3701_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6484_ICollection_1_CopyTo_m33641_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsU5BU5D_t3701_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33641_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33641_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6484_ICollection_1_CopyTo_m33641_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33641_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
static ParameterInfo ICollection_1_t6484_ICollection_1_Remove_m33642_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t1413_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33642_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Remove(T)
MethodInfo ICollection_1_Remove_m33642_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6484_ICollection_1_Remove_m33642_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33642_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6484_MethodInfos[] =
{
	&ICollection_1_get_Count_m33636_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33637_MethodInfo,
	&ICollection_1_Add_m33638_MethodInfo,
	&ICollection_1_Clear_m33639_MethodInfo,
	&ICollection_1_Contains_m33640_MethodInfo,
	&ICollection_1_CopyTo_m33641_MethodInfo,
	&ICollection_1_Remove_m33642_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6486_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6484_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6484_0_0_0;
extern Il2CppType ICollection_1_t6484_1_0_0;
struct ICollection_1_t6484;
extern Il2CppGenericClass ICollection_1_t6484_GenericClass;
TypeInfo ICollection_1_t6484_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6484_MethodInfos/* methods */
	, ICollection_1_t6484_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6484_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6484_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6484_0_0_0/* byval_arg */
	, &ICollection_1_t6484_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6484_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType IEnumerator_1_t4968_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33643_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33643_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6486_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4968_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33643_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6486_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33643_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6486_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6486_0_0_0;
extern Il2CppType IEnumerable_1_t6486_1_0_0;
struct IEnumerable_1_t6486;
extern Il2CppGenericClass IEnumerable_1_t6486_GenericClass;
TypeInfo IEnumerable_1_t6486_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6486_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6486_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6486_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6486_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6486_0_0_0/* byval_arg */
	, &IEnumerable_1_t6486_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6486_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6485_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo IList_1_get_Item_m33644_MethodInfo;
extern MethodInfo IList_1_set_Item_m33645_MethodInfo;
static PropertyInfo IList_1_t6485____Item_PropertyInfo = 
{
	&IList_1_t6485_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33644_MethodInfo/* get */
	, &IList_1_set_Item_m33645_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6485_PropertyInfos[] =
{
	&IList_1_t6485____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
static ParameterInfo IList_1_t6485_IList_1_IndexOf_m33646_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t1413_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33646_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33646_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6485_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6485_IList_1_IndexOf_m33646_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33646_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
static ParameterInfo IList_1_t6485_IList_1_Insert_m33647_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t1413_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33647_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33647_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6485_IList_1_Insert_m33647_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33647_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6485_IList_1_RemoveAt_m33648_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33648_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33648_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6485_IList_1_RemoveAt_m33648_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33648_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6485_IList_1_get_Item_m33644_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t1413_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33644_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33644_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6485_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t1413_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t1413_Int32_t18/* invoker_method */
	, IList_1_t6485_IList_1_get_Item_m33644_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33644_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CompilationRelaxations_t1413_0_0_0;
static ParameterInfo IList_1_t6485_IList_1_set_Item_m33645_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t1413_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33645_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33645_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6485_IList_1_set_Item_m33645_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33645_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6485_MethodInfos[] =
{
	&IList_1_IndexOf_m33646_MethodInfo,
	&IList_1_Insert_m33647_MethodInfo,
	&IList_1_RemoveAt_m33648_MethodInfo,
	&IList_1_get_Item_m33644_MethodInfo,
	&IList_1_set_Item_m33645_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6485_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6484_il2cpp_TypeInfo,
	&IEnumerable_1_t6486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6485_0_0_0;
extern Il2CppType IList_1_t6485_1_0_0;
struct IList_1_t6485;
extern Il2CppGenericClass IList_1_t6485_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6485_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6485_MethodInfos/* methods */
	, IList_1_t6485_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6485_il2cpp_TypeInfo/* element_class */
	, IList_1_t6485_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6485_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6485_0_0_0/* byval_arg */
	, &IList_1_t6485_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6485_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4970_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33649_MethodInfo;
static PropertyInfo IEnumerator_1_t4970____Current_PropertyInfo = 
{
	&IEnumerator_1_t4970_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33649_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4970_PropertyInfos[] =
{
	&IEnumerator_1_t4970____Current_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33649_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33649_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4970_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t750_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33649_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4970_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33649_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4970_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4970_0_0_0;
extern Il2CppType IEnumerator_1_t4970_1_0_0;
struct IEnumerator_1_t4970;
extern Il2CppGenericClass IEnumerator_1_t4970_GenericClass;
TypeInfo IEnumerator_1_t4970_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4970_MethodInfos/* methods */
	, IEnumerator_1_t4970_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4970_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4970_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4970_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4970_0_0_0/* byval_arg */
	, &IEnumerator_1_t4970_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4970_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_480.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3456_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_480MethodDeclarations.h"

extern TypeInfo CompilationRelaxationsAttribute_t750_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19168_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t750_m25755_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t750_m25755(__this, p0, method) (CompilationRelaxationsAttribute_t750 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3456____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3456, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3456____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3456, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3456_FieldInfos[] =
{
	&InternalEnumerator_1_t3456____array_0_FieldInfo,
	&InternalEnumerator_1_t3456____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19165_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3456____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3456_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19165_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3456____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3456_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19168_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3456_PropertyInfos[] =
{
	&InternalEnumerator_1_t3456____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3456____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3456_InternalEnumerator_1__ctor_m19164_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19164_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19164_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3456_InternalEnumerator_1__ctor_m19164_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19164_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19165_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19165_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19165_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19166_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19166_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19166_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19167_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19167_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19167_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19168_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19168_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t750_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19168_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3456_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19164_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19165_MethodInfo,
	&InternalEnumerator_1_Dispose_m19166_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19167_MethodInfo,
	&InternalEnumerator_1_get_Current_m19168_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19167_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19166_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3456_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19165_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19167_MethodInfo,
	&InternalEnumerator_1_Dispose_m19166_MethodInfo,
	&InternalEnumerator_1_get_Current_m19168_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3456_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4970_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3456_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4970_il2cpp_TypeInfo, 7},
};
extern TypeInfo CompilationRelaxationsAttribute_t750_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3456_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19168_MethodInfo/* Method Usage */,
	&CompilationRelaxationsAttribute_t750_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t750_m25755_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3456_0_0_0;
extern Il2CppType InternalEnumerator_1_t3456_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3456_GenericClass;
TypeInfo InternalEnumerator_1_t3456_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3456_MethodInfos/* methods */
	, InternalEnumerator_1_t3456_PropertyInfos/* properties */
	, InternalEnumerator_1_t3456_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3456_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3456_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3456_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3456_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3456_1_0_0/* this_arg */
	, InternalEnumerator_1_t3456_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3456_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3456_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3456)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6487_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo ICollection_1_get_Count_m33650_MethodInfo;
static PropertyInfo ICollection_1_t6487____Count_PropertyInfo = 
{
	&ICollection_1_t6487_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33650_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33651_MethodInfo;
static PropertyInfo ICollection_1_t6487____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6487_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33651_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6487_PropertyInfos[] =
{
	&ICollection_1_t6487____Count_PropertyInfo,
	&ICollection_1_t6487____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33650_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33650_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33650_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33651_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33651_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33651_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
static ParameterInfo ICollection_1_t6487_ICollection_1_Add_m33652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t750_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33652_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33652_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6487_ICollection_1_Add_m33652_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33652_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33653_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33653_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33653_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
static ParameterInfo ICollection_1_t6487_ICollection_1_Contains_m33654_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t750_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33654_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33654_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6487_ICollection_1_Contains_m33654_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33654_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttributeU5BU5D_t3702_0_0_0;
extern Il2CppType CompilationRelaxationsAttributeU5BU5D_t3702_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6487_ICollection_1_CopyTo_m33655_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttributeU5BU5D_t3702_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33655_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33655_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6487_ICollection_1_CopyTo_m33655_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33655_GenericMethod/* genericMethod */

};
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
static ParameterInfo ICollection_1_t6487_ICollection_1_Remove_m33656_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t750_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33656_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33656_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6487_ICollection_1_Remove_m33656_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33656_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6487_MethodInfos[] =
{
	&ICollection_1_get_Count_m33650_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33651_MethodInfo,
	&ICollection_1_Add_m33652_MethodInfo,
	&ICollection_1_Clear_m33653_MethodInfo,
	&ICollection_1_Contains_m33654_MethodInfo,
	&ICollection_1_CopyTo_m33655_MethodInfo,
	&ICollection_1_Remove_m33656_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6489_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6487_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6487_0_0_0;
extern Il2CppType ICollection_1_t6487_1_0_0;
struct ICollection_1_t6487;
extern Il2CppGenericClass ICollection_1_t6487_GenericClass;
TypeInfo ICollection_1_t6487_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6487_MethodInfos/* methods */
	, ICollection_1_t6487_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6487_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6487_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6487_0_0_0/* byval_arg */
	, &ICollection_1_t6487_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6487_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern Il2CppType IEnumerator_1_t4970_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33657_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33657_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6489_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4970_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33657_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6489_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33657_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6489_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6489_0_0_0;
extern Il2CppType IEnumerable_1_t6489_1_0_0;
struct IEnumerable_1_t6489;
extern Il2CppGenericClass IEnumerable_1_t6489_GenericClass;
TypeInfo IEnumerable_1_t6489_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6489_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6489_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6489_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6489_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6489_0_0_0/* byval_arg */
	, &IEnumerable_1_t6489_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6489_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6488_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo IList_1_get_Item_m33658_MethodInfo;
extern MethodInfo IList_1_set_Item_m33659_MethodInfo;
static PropertyInfo IList_1_t6488____Item_PropertyInfo = 
{
	&IList_1_t6488_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33658_MethodInfo/* get */
	, &IList_1_set_Item_m33659_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6488_PropertyInfos[] =
{
	&IList_1_t6488____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
static ParameterInfo IList_1_t6488_IList_1_IndexOf_m33660_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t750_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33660_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33660_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6488_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6488_IList_1_IndexOf_m33660_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33660_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
static ParameterInfo IList_1_t6488_IList_1_Insert_m33661_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t750_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33661_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33661_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6488_IList_1_Insert_m33661_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33661_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6488_IList_1_RemoveAt_m33662_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33662_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33662_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6488_IList_1_RemoveAt_m33662_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33662_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6488_IList_1_get_Item_m33658_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33658_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33658_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6488_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t750_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6488_IList_1_get_Item_m33658_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33658_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CompilationRelaxationsAttribute_t750_0_0_0;
static ParameterInfo IList_1_t6488_IList_1_set_Item_m33659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t750_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33659_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33659_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6488_IList_1_set_Item_m33659_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33659_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6488_MethodInfos[] =
{
	&IList_1_IndexOf_m33660_MethodInfo,
	&IList_1_Insert_m33661_MethodInfo,
	&IList_1_RemoveAt_m33662_MethodInfo,
	&IList_1_get_Item_m33658_MethodInfo,
	&IList_1_set_Item_m33659_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6488_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6487_il2cpp_TypeInfo,
	&IEnumerable_1_t6489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6488_0_0_0;
extern Il2CppType IList_1_t6488_1_0_0;
struct IList_1_t6488;
extern Il2CppGenericClass IList_1_t6488_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6488_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6488_MethodInfos/* methods */
	, IList_1_t6488_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6488_il2cpp_TypeInfo/* element_class */
	, IList_1_t6488_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6488_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6488_0_0_0/* byval_arg */
	, &IList_1_t6488_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6488_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4972_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33663_MethodInfo;
static PropertyInfo IEnumerator_1_t4972____Current_PropertyInfo = 
{
	&IEnumerator_1_t4972_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33663_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4972_PropertyInfos[] =
{
	&IEnumerator_1_t4972____Current_PropertyInfo,
	NULL
};
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33663_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33663_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4972_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t1414_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33663_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4972_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33663_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4972_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4972_0_0_0;
extern Il2CppType IEnumerator_1_t4972_1_0_0;
struct IEnumerator_1_t4972;
extern Il2CppGenericClass IEnumerator_1_t4972_GenericClass;
TypeInfo IEnumerator_1_t4972_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4972_MethodInfos/* methods */
	, IEnumerator_1_t4972_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4972_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4972_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4972_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4972_0_0_0/* byval_arg */
	, &IEnumerator_1_t4972_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4972_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_481.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3457_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_481MethodDeclarations.h"

extern TypeInfo DefaultDependencyAttribute_t1414_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19173_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t1414_m25766_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DefaultDependencyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DefaultDependencyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t1414_m25766(__this, p0, method) (DefaultDependencyAttribute_t1414 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3457____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3457, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3457____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3457, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3457_FieldInfos[] =
{
	&InternalEnumerator_1_t3457____array_0_FieldInfo,
	&InternalEnumerator_1_t3457____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19170_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3457____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3457_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19170_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3457____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3457_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19173_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3457_PropertyInfos[] =
{
	&InternalEnumerator_1_t3457____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3457____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3457_InternalEnumerator_1__ctor_m19169_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19169_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19169_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3457_InternalEnumerator_1__ctor_m19169_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19169_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19170_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19170_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19170_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19171_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19171_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19171_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19172_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19172_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19172_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19173_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19173_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t1414_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19173_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3457_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19169_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19170_MethodInfo,
	&InternalEnumerator_1_Dispose_m19171_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19172_MethodInfo,
	&InternalEnumerator_1_get_Current_m19173_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19172_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19171_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3457_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19170_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19172_MethodInfo,
	&InternalEnumerator_1_Dispose_m19171_MethodInfo,
	&InternalEnumerator_1_get_Current_m19173_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3457_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4972_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3457_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4972_il2cpp_TypeInfo, 7},
};
extern TypeInfo DefaultDependencyAttribute_t1414_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3457_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19173_MethodInfo/* Method Usage */,
	&DefaultDependencyAttribute_t1414_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t1414_m25766_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3457_0_0_0;
extern Il2CppType InternalEnumerator_1_t3457_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3457_GenericClass;
TypeInfo InternalEnumerator_1_t3457_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3457_MethodInfos/* methods */
	, InternalEnumerator_1_t3457_PropertyInfos/* properties */
	, InternalEnumerator_1_t3457_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3457_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3457_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3457_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3457_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3457_1_0_0/* this_arg */
	, InternalEnumerator_1_t3457_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3457_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3457_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3457)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6490_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo ICollection_1_get_Count_m33664_MethodInfo;
static PropertyInfo ICollection_1_t6490____Count_PropertyInfo = 
{
	&ICollection_1_t6490_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33664_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33665_MethodInfo;
static PropertyInfo ICollection_1_t6490____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6490_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6490_PropertyInfos[] =
{
	&ICollection_1_t6490____Count_PropertyInfo,
	&ICollection_1_t6490____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33664_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33664_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33664_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33665_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33665_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33665_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
static ParameterInfo ICollection_1_t6490_ICollection_1_Add_m33666_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t1414_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33666_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33666_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6490_ICollection_1_Add_m33666_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33666_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33667_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33667_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33667_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
static ParameterInfo ICollection_1_t6490_ICollection_1_Contains_m33668_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t1414_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33668_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33668_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6490_ICollection_1_Contains_m33668_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33668_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttributeU5BU5D_t3703_0_0_0;
extern Il2CppType DefaultDependencyAttributeU5BU5D_t3703_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6490_ICollection_1_CopyTo_m33669_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttributeU5BU5D_t3703_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33669_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33669_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6490_ICollection_1_CopyTo_m33669_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33669_GenericMethod/* genericMethod */

};
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
static ParameterInfo ICollection_1_t6490_ICollection_1_Remove_m33670_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t1414_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33670_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33670_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6490_ICollection_1_Remove_m33670_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33670_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6490_MethodInfos[] =
{
	&ICollection_1_get_Count_m33664_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33665_MethodInfo,
	&ICollection_1_Add_m33666_MethodInfo,
	&ICollection_1_Clear_m33667_MethodInfo,
	&ICollection_1_Contains_m33668_MethodInfo,
	&ICollection_1_CopyTo_m33669_MethodInfo,
	&ICollection_1_Remove_m33670_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6492_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6490_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6490_0_0_0;
extern Il2CppType ICollection_1_t6490_1_0_0;
struct ICollection_1_t6490;
extern Il2CppGenericClass ICollection_1_t6490_GenericClass;
TypeInfo ICollection_1_t6490_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6490_MethodInfos/* methods */
	, ICollection_1_t6490_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6490_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6490_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6490_0_0_0/* byval_arg */
	, &ICollection_1_t6490_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6490_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern Il2CppType IEnumerator_1_t4972_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33671_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33671_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6492_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4972_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33671_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6492_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33671_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6492_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6492_0_0_0;
extern Il2CppType IEnumerable_1_t6492_1_0_0;
struct IEnumerable_1_t6492;
extern Il2CppGenericClass IEnumerable_1_t6492_GenericClass;
TypeInfo IEnumerable_1_t6492_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6492_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6492_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6492_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6492_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6492_0_0_0/* byval_arg */
	, &IEnumerable_1_t6492_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6492_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6491_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo IList_1_get_Item_m33672_MethodInfo;
extern MethodInfo IList_1_set_Item_m33673_MethodInfo;
static PropertyInfo IList_1_t6491____Item_PropertyInfo = 
{
	&IList_1_t6491_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33672_MethodInfo/* get */
	, &IList_1_set_Item_m33673_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6491_PropertyInfos[] =
{
	&IList_1_t6491____Item_PropertyInfo,
	NULL
};
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
static ParameterInfo IList_1_t6491_IList_1_IndexOf_m33674_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t1414_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33674_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33674_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6491_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6491_IList_1_IndexOf_m33674_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33674_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
static ParameterInfo IList_1_t6491_IList_1_Insert_m33675_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t1414_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33675_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33675_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6491_IList_1_Insert_m33675_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33675_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6491_IList_1_RemoveAt_m33676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33676_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33676_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6491_IList_1_RemoveAt_m33676_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33676_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6491_IList_1_get_Item_m33672_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33672_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33672_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6491_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t1414_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6491_IList_1_get_Item_m33672_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33672_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DefaultDependencyAttribute_t1414_0_0_0;
static ParameterInfo IList_1_t6491_IList_1_set_Item_m33673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t1414_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33673_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33673_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6491_IList_1_set_Item_m33673_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33673_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6491_MethodInfos[] =
{
	&IList_1_IndexOf_m33674_MethodInfo,
	&IList_1_Insert_m33675_MethodInfo,
	&IList_1_RemoveAt_m33676_MethodInfo,
	&IList_1_get_Item_m33672_MethodInfo,
	&IList_1_set_Item_m33673_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6491_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6490_il2cpp_TypeInfo,
	&IEnumerable_1_t6492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6491_0_0_0;
extern Il2CppType IList_1_t6491_1_0_0;
struct IList_1_t6491;
extern Il2CppGenericClass IList_1_t6491_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6491_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6491_MethodInfos/* methods */
	, IList_1_t6491_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6491_il2cpp_TypeInfo/* element_class */
	, IList_1_t6491_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6491_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6491_0_0_0/* byval_arg */
	, &IList_1_t6491_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6491_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4974_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo IEnumerator_1_get_Current_m33677_MethodInfo;
static PropertyInfo IEnumerator_1_t4974____Current_PropertyInfo = 
{
	&IEnumerator_1_t4974_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33677_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4974_PropertyInfos[] =
{
	&IEnumerator_1_t4974____Current_PropertyInfo,
	NULL
};
extern Il2CppType LoadHint_t1416_0_0_0;
extern void* RuntimeInvoker_LoadHint_t1416 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33677_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33677_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4974_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t1416_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t1416/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33677_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4974_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33677_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4974_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4974_0_0_0;
extern Il2CppType IEnumerator_1_t4974_1_0_0;
struct IEnumerator_1_t4974;
extern Il2CppGenericClass IEnumerator_1_t4974_GenericClass;
TypeInfo IEnumerator_1_t4974_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4974_MethodInfos/* methods */
	, IEnumerator_1_t4974_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4974_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4974_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4974_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4974_0_0_0/* byval_arg */
	, &IEnumerator_1_t4974_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4974_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_482.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3458_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_482MethodDeclarations.h"

extern TypeInfo LoadHint_t1416_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19178_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoadHint_t1416_m25777_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.LoadHint>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.LoadHint>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoadHint_t1416_m25777 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19174_MethodInfo;
 void InternalEnumerator_1__ctor_m19174 (InternalEnumerator_1_t3458 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175 (InternalEnumerator_1_t3458 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19178(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19178_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoadHint_t1416_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19176_MethodInfo;
 void InternalEnumerator_1_Dispose_m19176 (InternalEnumerator_1_t3458 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19177_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19177 (InternalEnumerator_1_t3458 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19178 (InternalEnumerator_1_t3458 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLoadHint_t1416_m25777(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoadHint_t1416_m25777_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3458____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3458, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3458____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3458, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3458_FieldInfos[] =
{
	&InternalEnumerator_1_t3458____array_0_FieldInfo,
	&InternalEnumerator_1_t3458____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3458____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3458_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3458____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3458_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19178_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3458_PropertyInfos[] =
{
	&InternalEnumerator_1_t3458____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3458____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3458_InternalEnumerator_1__ctor_m19174_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19174_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19174_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19174/* method */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3458_InternalEnumerator_1__ctor_m19174_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19174_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175/* method */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19176_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19176_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19176/* method */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19176_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19177_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19177_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19177/* method */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19177_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t1416_0_0_0;
extern void* RuntimeInvoker_LoadHint_t1416 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19178_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19178_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19178/* method */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t1416_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t1416/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19178_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3458_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19174_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175_MethodInfo,
	&InternalEnumerator_1_Dispose_m19176_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19177_MethodInfo,
	&InternalEnumerator_1_get_Current_m19178_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3458_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19175_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19177_MethodInfo,
	&InternalEnumerator_1_Dispose_m19176_MethodInfo,
	&InternalEnumerator_1_get_Current_m19178_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3458_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4974_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3458_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4974_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3458_0_0_0;
extern Il2CppType InternalEnumerator_1_t3458_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3458_GenericClass;
TypeInfo InternalEnumerator_1_t3458_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3458_MethodInfos/* methods */
	, InternalEnumerator_1_t3458_PropertyInfos/* properties */
	, InternalEnumerator_1_t3458_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3458_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3458_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3458_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3458_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3458_1_0_0/* this_arg */
	, InternalEnumerator_1_t3458_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3458_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3458)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6493_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo ICollection_1_get_Count_m33678_MethodInfo;
static PropertyInfo ICollection_1_t6493____Count_PropertyInfo = 
{
	&ICollection_1_t6493_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33678_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33679_MethodInfo;
static PropertyInfo ICollection_1_t6493____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6493_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33679_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6493_PropertyInfos[] =
{
	&ICollection_1_t6493____Count_PropertyInfo,
	&ICollection_1_t6493____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33678_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_Count()
MethodInfo ICollection_1_get_Count_m33678_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33678_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33679_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33679_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33679_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t1416_0_0_0;
extern Il2CppType LoadHint_t1416_0_0_0;
static ParameterInfo ICollection_1_t6493_ICollection_1_Add_m33680_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t1416_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33680_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Add(T)
MethodInfo ICollection_1_Add_m33680_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6493_ICollection_1_Add_m33680_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33680_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33681_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Clear()
MethodInfo ICollection_1_Clear_m33681_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33681_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t1416_0_0_0;
static ParameterInfo ICollection_1_t6493_ICollection_1_Contains_m33682_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t1416_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33682_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Contains(T)
MethodInfo ICollection_1_Contains_m33682_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6493_ICollection_1_Contains_m33682_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33682_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHintU5BU5D_t3704_0_0_0;
extern Il2CppType LoadHintU5BU5D_t3704_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6493_ICollection_1_CopyTo_m33683_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoadHintU5BU5D_t3704_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33683_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33683_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6493_ICollection_1_CopyTo_m33683_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33683_GenericMethod/* genericMethod */

};
extern Il2CppType LoadHint_t1416_0_0_0;
static ParameterInfo ICollection_1_t6493_ICollection_1_Remove_m33684_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t1416_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33684_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Remove(T)
MethodInfo ICollection_1_Remove_m33684_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6493_ICollection_1_Remove_m33684_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33684_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6493_MethodInfos[] =
{
	&ICollection_1_get_Count_m33678_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33679_MethodInfo,
	&ICollection_1_Add_m33680_MethodInfo,
	&ICollection_1_Clear_m33681_MethodInfo,
	&ICollection_1_Contains_m33682_MethodInfo,
	&ICollection_1_CopyTo_m33683_MethodInfo,
	&ICollection_1_Remove_m33684_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6495_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6493_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6493_0_0_0;
extern Il2CppType ICollection_1_t6493_1_0_0;
struct ICollection_1_t6493;
extern Il2CppGenericClass ICollection_1_t6493_GenericClass;
TypeInfo ICollection_1_t6493_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6493_MethodInfos/* methods */
	, ICollection_1_t6493_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6493_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6493_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6493_0_0_0/* byval_arg */
	, &ICollection_1_t6493_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6493_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType IEnumerator_1_t4974_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33685_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33685_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6495_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4974_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33685_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6495_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33685_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6495_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6495_0_0_0;
extern Il2CppType IEnumerable_1_t6495_1_0_0;
struct IEnumerable_1_t6495;
extern Il2CppGenericClass IEnumerable_1_t6495_GenericClass;
TypeInfo IEnumerable_1_t6495_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6495_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6495_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6495_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6495_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6495_0_0_0/* byval_arg */
	, &IEnumerable_1_t6495_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6495_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6494_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo IList_1_get_Item_m33686_MethodInfo;
extern MethodInfo IList_1_set_Item_m33687_MethodInfo;
static PropertyInfo IList_1_t6494____Item_PropertyInfo = 
{
	&IList_1_t6494_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33686_MethodInfo/* get */
	, &IList_1_set_Item_m33687_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6494_PropertyInfos[] =
{
	&IList_1_t6494____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoadHint_t1416_0_0_0;
static ParameterInfo IList_1_t6494_IList_1_IndexOf_m33688_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t1416_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33688_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33688_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6494_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6494_IList_1_IndexOf_m33688_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33688_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType LoadHint_t1416_0_0_0;
static ParameterInfo IList_1_t6494_IList_1_Insert_m33689_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoadHint_t1416_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33689_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33689_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6494_IList_1_Insert_m33689_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33689_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6494_IList_1_RemoveAt_m33690_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33690_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33690_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6494_IList_1_RemoveAt_m33690_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33690_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6494_IList_1_get_Item_m33686_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType LoadHint_t1416_0_0_0;
extern void* RuntimeInvoker_LoadHint_t1416_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33686_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33686_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6494_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t1416_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t1416_Int32_t18/* invoker_method */
	, IList_1_t6494_IList_1_get_Item_m33686_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33686_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType LoadHint_t1416_0_0_0;
static ParameterInfo IList_1_t6494_IList_1_set_Item_m33687_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoadHint_t1416_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33687_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33687_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6494_IList_1_set_Item_m33687_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33687_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6494_MethodInfos[] =
{
	&IList_1_IndexOf_m33688_MethodInfo,
	&IList_1_Insert_m33689_MethodInfo,
	&IList_1_RemoveAt_m33690_MethodInfo,
	&IList_1_get_Item_m33686_MethodInfo,
	&IList_1_set_Item_m33687_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6494_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6493_il2cpp_TypeInfo,
	&IEnumerable_1_t6495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6494_0_0_0;
extern Il2CppType IList_1_t6494_1_0_0;
struct IList_1_t6494;
extern Il2CppGenericClass IList_1_t6494_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6494_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6494_MethodInfos/* methods */
	, IList_1_t6494_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6494_il2cpp_TypeInfo/* element_class */
	, IList_1_t6494_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6494_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6494_0_0_0/* byval_arg */
	, &IList_1_t6494_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6494_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4976_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33691_MethodInfo;
static PropertyInfo IEnumerator_1_t4976____Current_PropertyInfo = 
{
	&IEnumerator_1_t4976_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33691_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4976_PropertyInfos[] =
{
	&IEnumerator_1_t4976____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33691_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33691_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4976_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t1417_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33691_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4976_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33691_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4976_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4976_0_0_0;
extern Il2CppType IEnumerator_1_t4976_1_0_0;
struct IEnumerator_1_t4976;
extern Il2CppGenericClass IEnumerator_1_t4976_GenericClass;
TypeInfo IEnumerator_1_t4976_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4976_MethodInfos/* methods */
	, IEnumerator_1_t4976_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4976_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4976_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4976_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4976_0_0_0/* byval_arg */
	, &IEnumerator_1_t4976_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4976_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_483.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3459_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_483MethodDeclarations.h"

extern TypeInfo StringFreezingAttribute_t1417_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19183_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringFreezingAttribute_t1417_m25788_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.StringFreezingAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.StringFreezingAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisStringFreezingAttribute_t1417_m25788(__this, p0, method) (StringFreezingAttribute_t1417 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3459____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3459, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3459____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3459, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3459_FieldInfos[] =
{
	&InternalEnumerator_1_t3459____array_0_FieldInfo,
	&InternalEnumerator_1_t3459____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19180_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3459____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3459_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19180_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3459____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3459_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19183_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3459_PropertyInfos[] =
{
	&InternalEnumerator_1_t3459____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3459____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3459_InternalEnumerator_1__ctor_m19179_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19179_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19179_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3459_InternalEnumerator_1__ctor_m19179_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19179_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19180_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19180_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19180_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19181_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19181_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19181_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19182_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19182_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19182_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19183_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19183_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t1417_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19183_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3459_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19179_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19180_MethodInfo,
	&InternalEnumerator_1_Dispose_m19181_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19182_MethodInfo,
	&InternalEnumerator_1_get_Current_m19183_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19182_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19181_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3459_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19180_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19182_MethodInfo,
	&InternalEnumerator_1_Dispose_m19181_MethodInfo,
	&InternalEnumerator_1_get_Current_m19183_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3459_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4976_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3459_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4976_il2cpp_TypeInfo, 7},
};
extern TypeInfo StringFreezingAttribute_t1417_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3459_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19183_MethodInfo/* Method Usage */,
	&StringFreezingAttribute_t1417_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisStringFreezingAttribute_t1417_m25788_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3459_0_0_0;
extern Il2CppType InternalEnumerator_1_t3459_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3459_GenericClass;
TypeInfo InternalEnumerator_1_t3459_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3459_MethodInfos/* methods */
	, InternalEnumerator_1_t3459_PropertyInfos/* properties */
	, InternalEnumerator_1_t3459_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3459_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3459_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3459_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3459_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3459_1_0_0/* this_arg */
	, InternalEnumerator_1_t3459_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3459_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3459_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3459)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6496_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo ICollection_1_get_Count_m33692_MethodInfo;
static PropertyInfo ICollection_1_t6496____Count_PropertyInfo = 
{
	&ICollection_1_t6496_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33692_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33693_MethodInfo;
static PropertyInfo ICollection_1_t6496____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6496_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33693_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6496_PropertyInfos[] =
{
	&ICollection_1_t6496____Count_PropertyInfo,
	&ICollection_1_t6496____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33692_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33692_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33692_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33693_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33693_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33693_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
static ParameterInfo ICollection_1_t6496_ICollection_1_Add_m33694_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t1417_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33694_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33694_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6496_ICollection_1_Add_m33694_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33694_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33695_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33695_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33695_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
static ParameterInfo ICollection_1_t6496_ICollection_1_Contains_m33696_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t1417_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33696_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33696_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6496_ICollection_1_Contains_m33696_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33696_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttributeU5BU5D_t3705_0_0_0;
extern Il2CppType StringFreezingAttributeU5BU5D_t3705_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6496_ICollection_1_CopyTo_m33697_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttributeU5BU5D_t3705_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33697_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33697_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6496_ICollection_1_CopyTo_m33697_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33697_GenericMethod/* genericMethod */

};
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
static ParameterInfo ICollection_1_t6496_ICollection_1_Remove_m33698_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t1417_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33698_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33698_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6496_ICollection_1_Remove_m33698_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33698_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6496_MethodInfos[] =
{
	&ICollection_1_get_Count_m33692_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33693_MethodInfo,
	&ICollection_1_Add_m33694_MethodInfo,
	&ICollection_1_Clear_m33695_MethodInfo,
	&ICollection_1_Contains_m33696_MethodInfo,
	&ICollection_1_CopyTo_m33697_MethodInfo,
	&ICollection_1_Remove_m33698_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6498_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6496_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6496_0_0_0;
extern Il2CppType ICollection_1_t6496_1_0_0;
struct ICollection_1_t6496;
extern Il2CppGenericClass ICollection_1_t6496_GenericClass;
TypeInfo ICollection_1_t6496_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6496_MethodInfos/* methods */
	, ICollection_1_t6496_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6496_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6496_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6496_0_0_0/* byval_arg */
	, &ICollection_1_t6496_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6496_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType IEnumerator_1_t4976_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33699_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33699_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6498_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4976_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33699_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6498_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33699_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6498_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6498_0_0_0;
extern Il2CppType IEnumerable_1_t6498_1_0_0;
struct IEnumerable_1_t6498;
extern Il2CppGenericClass IEnumerable_1_t6498_GenericClass;
TypeInfo IEnumerable_1_t6498_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6498_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6498_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6498_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6498_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6498_0_0_0/* byval_arg */
	, &IEnumerable_1_t6498_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6498_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6497_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo IList_1_get_Item_m33700_MethodInfo;
extern MethodInfo IList_1_set_Item_m33701_MethodInfo;
static PropertyInfo IList_1_t6497____Item_PropertyInfo = 
{
	&IList_1_t6497_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33700_MethodInfo/* get */
	, &IList_1_set_Item_m33701_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6497_PropertyInfos[] =
{
	&IList_1_t6497____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
static ParameterInfo IList_1_t6497_IList_1_IndexOf_m33702_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t1417_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33702_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33702_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6497_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6497_IList_1_IndexOf_m33702_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33702_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
static ParameterInfo IList_1_t6497_IList_1_Insert_m33703_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t1417_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33703_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33703_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6497_IList_1_Insert_m33703_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33703_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6497_IList_1_RemoveAt_m33704_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33704_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33704_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6497_IList_1_RemoveAt_m33704_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33704_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6497_IList_1_get_Item_m33700_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33700_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33700_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6497_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t1417_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6497_IList_1_get_Item_m33700_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33700_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType StringFreezingAttribute_t1417_0_0_0;
static ParameterInfo IList_1_t6497_IList_1_set_Item_m33701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t1417_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33701_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33701_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6497_IList_1_set_Item_m33701_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33701_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6497_MethodInfos[] =
{
	&IList_1_IndexOf_m33702_MethodInfo,
	&IList_1_Insert_m33703_MethodInfo,
	&IList_1_RemoveAt_m33704_MethodInfo,
	&IList_1_get_Item_m33700_MethodInfo,
	&IList_1_set_Item_m33701_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6497_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6496_il2cpp_TypeInfo,
	&IEnumerable_1_t6498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6497_0_0_0;
extern Il2CppType IList_1_t6497_1_0_0;
struct IList_1_t6497;
extern Il2CppGenericClass IList_1_t6497_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6497_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6497_MethodInfos/* methods */
	, IList_1_t6497_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6497_il2cpp_TypeInfo/* element_class */
	, IList_1_t6497_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6497_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6497_0_0_0/* byval_arg */
	, &IList_1_t6497_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6497_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4978_il2cpp_TypeInfo;

// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo IEnumerator_1_get_Current_m33705_MethodInfo;
static PropertyInfo IEnumerator_1_t4978____Current_PropertyInfo = 
{
	&IEnumerator_1_t4978_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33705_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4978_PropertyInfos[] =
{
	&IEnumerator_1_t4978____Current_PropertyInfo,
	NULL
};
extern Il2CppType Cer_t1418_0_0_0;
extern void* RuntimeInvoker_Cer_t1418 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33705_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33705_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4978_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t1418_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t1418/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33705_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4978_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33705_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4978_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4978_0_0_0;
extern Il2CppType IEnumerator_1_t4978_1_0_0;
struct IEnumerator_1_t4978;
extern Il2CppGenericClass IEnumerator_1_t4978_GenericClass;
TypeInfo IEnumerator_1_t4978_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4978_MethodInfos/* methods */
	, IEnumerator_1_t4978_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4978_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4978_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4978_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4978_0_0_0/* byval_arg */
	, &IEnumerator_1_t4978_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4978_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_484.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3460_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_484MethodDeclarations.h"

extern TypeInfo Cer_t1418_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19188_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCer_t1418_m25799_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Cer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Cer>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCer_t1418_m25799 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19184_MethodInfo;
 void InternalEnumerator_1__ctor_m19184 (InternalEnumerator_1_t3460 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185 (InternalEnumerator_1_t3460 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19188(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19188_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Cer_t1418_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19186_MethodInfo;
 void InternalEnumerator_1_Dispose_m19186 (InternalEnumerator_1_t3460 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19187_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19187 (InternalEnumerator_1_t3460 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19188 (InternalEnumerator_1_t3460 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCer_t1418_m25799(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCer_t1418_m25799_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3460____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3460, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3460____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3460, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3460_FieldInfos[] =
{
	&InternalEnumerator_1_t3460____array_0_FieldInfo,
	&InternalEnumerator_1_t3460____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3460____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3460_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3460____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3460_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19188_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3460_PropertyInfos[] =
{
	&InternalEnumerator_1_t3460____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3460____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3460_InternalEnumerator_1__ctor_m19184_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19184_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19184_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19184/* method */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3460_InternalEnumerator_1__ctor_m19184_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19184_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185/* method */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19186_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19186_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19186/* method */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19186_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19187_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19187_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19187/* method */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19187_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t1418_0_0_0;
extern void* RuntimeInvoker_Cer_t1418 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19188_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19188_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19188/* method */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t1418_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t1418/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19188_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3460_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19184_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185_MethodInfo,
	&InternalEnumerator_1_Dispose_m19186_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19187_MethodInfo,
	&InternalEnumerator_1_get_Current_m19188_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3460_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19185_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19187_MethodInfo,
	&InternalEnumerator_1_Dispose_m19186_MethodInfo,
	&InternalEnumerator_1_get_Current_m19188_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3460_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4978_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3460_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4978_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3460_0_0_0;
extern Il2CppType InternalEnumerator_1_t3460_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3460_GenericClass;
TypeInfo InternalEnumerator_1_t3460_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3460_MethodInfos/* methods */
	, InternalEnumerator_1_t3460_PropertyInfos/* properties */
	, InternalEnumerator_1_t3460_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3460_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3460_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3460_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3460_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3460_1_0_0/* this_arg */
	, InternalEnumerator_1_t3460_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3460_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3460)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6499_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo ICollection_1_get_Count_m33706_MethodInfo;
static PropertyInfo ICollection_1_t6499____Count_PropertyInfo = 
{
	&ICollection_1_t6499_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33706_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33707_MethodInfo;
static PropertyInfo ICollection_1_t6499____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6499_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33707_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6499_PropertyInfos[] =
{
	&ICollection_1_t6499____Count_PropertyInfo,
	&ICollection_1_t6499____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33706_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_Count()
MethodInfo ICollection_1_get_Count_m33706_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33706_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33707_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33707_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33707_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t1418_0_0_0;
extern Il2CppType Cer_t1418_0_0_0;
static ParameterInfo ICollection_1_t6499_ICollection_1_Add_m33708_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t1418_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33708_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Add(T)
MethodInfo ICollection_1_Add_m33708_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6499_ICollection_1_Add_m33708_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33708_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33709_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Clear()
MethodInfo ICollection_1_Clear_m33709_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33709_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t1418_0_0_0;
static ParameterInfo ICollection_1_t6499_ICollection_1_Contains_m33710_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t1418_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33710_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Contains(T)
MethodInfo ICollection_1_Contains_m33710_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6499_ICollection_1_Contains_m33710_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33710_GenericMethod/* genericMethod */

};
extern Il2CppType CerU5BU5D_t3706_0_0_0;
extern Il2CppType CerU5BU5D_t3706_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6499_ICollection_1_CopyTo_m33711_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CerU5BU5D_t3706_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33711_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33711_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6499_ICollection_1_CopyTo_m33711_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33711_GenericMethod/* genericMethod */

};
extern Il2CppType Cer_t1418_0_0_0;
static ParameterInfo ICollection_1_t6499_ICollection_1_Remove_m33712_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t1418_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33712_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Remove(T)
MethodInfo ICollection_1_Remove_m33712_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6499_ICollection_1_Remove_m33712_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33712_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6499_MethodInfos[] =
{
	&ICollection_1_get_Count_m33706_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33707_MethodInfo,
	&ICollection_1_Add_m33708_MethodInfo,
	&ICollection_1_Clear_m33709_MethodInfo,
	&ICollection_1_Contains_m33710_MethodInfo,
	&ICollection_1_CopyTo_m33711_MethodInfo,
	&ICollection_1_Remove_m33712_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6501_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6499_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6499_0_0_0;
extern Il2CppType ICollection_1_t6499_1_0_0;
struct ICollection_1_t6499;
extern Il2CppGenericClass ICollection_1_t6499_GenericClass;
TypeInfo ICollection_1_t6499_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6499_MethodInfos/* methods */
	, ICollection_1_t6499_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6499_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6499_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6499_0_0_0/* byval_arg */
	, &ICollection_1_t6499_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6499_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType IEnumerator_1_t4978_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33713_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33713_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6501_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4978_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33713_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6501_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33713_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6501_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6501_0_0_0;
extern Il2CppType IEnumerable_1_t6501_1_0_0;
struct IEnumerable_1_t6501;
extern Il2CppGenericClass IEnumerable_1_t6501_GenericClass;
TypeInfo IEnumerable_1_t6501_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6501_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6501_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6501_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6501_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6501_0_0_0/* byval_arg */
	, &IEnumerable_1_t6501_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6501_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6500_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo IList_1_get_Item_m33714_MethodInfo;
extern MethodInfo IList_1_set_Item_m33715_MethodInfo;
static PropertyInfo IList_1_t6500____Item_PropertyInfo = 
{
	&IList_1_t6500_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33714_MethodInfo/* get */
	, &IList_1_set_Item_m33715_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6500_PropertyInfos[] =
{
	&IList_1_t6500____Item_PropertyInfo,
	NULL
};
extern Il2CppType Cer_t1418_0_0_0;
static ParameterInfo IList_1_t6500_IList_1_IndexOf_m33716_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t1418_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33716_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33716_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6500_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6500_IList_1_IndexOf_m33716_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33716_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Cer_t1418_0_0_0;
static ParameterInfo IList_1_t6500_IList_1_Insert_m33717_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Cer_t1418_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33717_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33717_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6500_IList_1_Insert_m33717_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33717_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6500_IList_1_RemoveAt_m33718_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33718_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33718_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6500_IList_1_RemoveAt_m33718_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33718_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6500_IList_1_get_Item_m33714_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Cer_t1418_0_0_0;
extern void* RuntimeInvoker_Cer_t1418_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33714_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33714_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6500_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t1418_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t1418_Int32_t18/* invoker_method */
	, IList_1_t6500_IList_1_get_Item_m33714_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33714_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Cer_t1418_0_0_0;
static ParameterInfo IList_1_t6500_IList_1_set_Item_m33715_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Cer_t1418_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33715_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33715_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6500_IList_1_set_Item_m33715_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33715_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6500_MethodInfos[] =
{
	&IList_1_IndexOf_m33716_MethodInfo,
	&IList_1_Insert_m33717_MethodInfo,
	&IList_1_RemoveAt_m33718_MethodInfo,
	&IList_1_get_Item_m33714_MethodInfo,
	&IList_1_set_Item_m33715_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6500_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6499_il2cpp_TypeInfo,
	&IEnumerable_1_t6501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6500_0_0_0;
extern Il2CppType IList_1_t6500_1_0_0;
struct IList_1_t6500;
extern Il2CppGenericClass IList_1_t6500_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6500_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6500_MethodInfos/* methods */
	, IList_1_t6500_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6500_il2cpp_TypeInfo/* element_class */
	, IList_1_t6500_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6500_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6500_0_0_0/* byval_arg */
	, &IList_1_t6500_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6500_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4980_il2cpp_TypeInfo;

// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo IEnumerator_1_get_Current_m33719_MethodInfo;
static PropertyInfo IEnumerator_1_t4980____Current_PropertyInfo = 
{
	&IEnumerator_1_t4980_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33719_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4980_PropertyInfos[] =
{
	&IEnumerator_1_t4980____Current_PropertyInfo,
	NULL
};
extern Il2CppType Consistency_t1419_0_0_0;
extern void* RuntimeInvoker_Consistency_t1419 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33719_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33719_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4980_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t1419_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t1419/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33719_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4980_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33719_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4980_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4980_0_0_0;
extern Il2CppType IEnumerator_1_t4980_1_0_0;
struct IEnumerator_1_t4980;
extern Il2CppGenericClass IEnumerator_1_t4980_GenericClass;
TypeInfo IEnumerator_1_t4980_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4980_MethodInfos/* methods */
	, IEnumerator_1_t4980_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4980_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4980_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4980_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4980_0_0_0/* byval_arg */
	, &IEnumerator_1_t4980_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4980_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_485.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3461_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_485MethodDeclarations.h"

extern TypeInfo Consistency_t1419_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19193_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConsistency_t1419_m25810_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Consistency>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Consistency>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConsistency_t1419_m25810 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19189_MethodInfo;
 void InternalEnumerator_1__ctor_m19189 (InternalEnumerator_1_t3461 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190 (InternalEnumerator_1_t3461 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19193(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19193_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Consistency_t1419_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19191_MethodInfo;
 void InternalEnumerator_1_Dispose_m19191 (InternalEnumerator_1_t3461 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19192_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19192 (InternalEnumerator_1_t3461 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19193 (InternalEnumerator_1_t3461 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisConsistency_t1419_m25810(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConsistency_t1419_m25810_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3461____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3461, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3461____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3461, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3461_FieldInfos[] =
{
	&InternalEnumerator_1_t3461____array_0_FieldInfo,
	&InternalEnumerator_1_t3461____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3461____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3461_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3461____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3461_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3461_PropertyInfos[] =
{
	&InternalEnumerator_1_t3461____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3461____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3461_InternalEnumerator_1__ctor_m19189_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19189_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19189_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19189/* method */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3461_InternalEnumerator_1__ctor_m19189_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19189_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190/* method */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19191_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19191_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19191/* method */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19191_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19192_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19192_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19192/* method */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19192_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t1419_0_0_0;
extern void* RuntimeInvoker_Consistency_t1419 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19193_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19193_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19193/* method */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t1419_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t1419/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19193_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3461_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19189_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190_MethodInfo,
	&InternalEnumerator_1_Dispose_m19191_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19192_MethodInfo,
	&InternalEnumerator_1_get_Current_m19193_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3461_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19190_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19192_MethodInfo,
	&InternalEnumerator_1_Dispose_m19191_MethodInfo,
	&InternalEnumerator_1_get_Current_m19193_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3461_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4980_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3461_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4980_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3461_0_0_0;
extern Il2CppType InternalEnumerator_1_t3461_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3461_GenericClass;
TypeInfo InternalEnumerator_1_t3461_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3461_MethodInfos/* methods */
	, InternalEnumerator_1_t3461_PropertyInfos/* properties */
	, InternalEnumerator_1_t3461_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3461_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3461_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3461_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3461_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3461_1_0_0/* this_arg */
	, InternalEnumerator_1_t3461_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3461_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3461)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6502_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo ICollection_1_get_Count_m33720_MethodInfo;
static PropertyInfo ICollection_1_t6502____Count_PropertyInfo = 
{
	&ICollection_1_t6502_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33720_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33721_MethodInfo;
static PropertyInfo ICollection_1_t6502____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6502_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33721_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6502_PropertyInfos[] =
{
	&ICollection_1_t6502____Count_PropertyInfo,
	&ICollection_1_t6502____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33720_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_Count()
MethodInfo ICollection_1_get_Count_m33720_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33720_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33721_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33721_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33721_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t1419_0_0_0;
extern Il2CppType Consistency_t1419_0_0_0;
static ParameterInfo ICollection_1_t6502_ICollection_1_Add_m33722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t1419_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33722_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Add(T)
MethodInfo ICollection_1_Add_m33722_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6502_ICollection_1_Add_m33722_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33722_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33723_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Clear()
MethodInfo ICollection_1_Clear_m33723_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33723_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t1419_0_0_0;
static ParameterInfo ICollection_1_t6502_ICollection_1_Contains_m33724_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t1419_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33724_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Contains(T)
MethodInfo ICollection_1_Contains_m33724_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6502_ICollection_1_Contains_m33724_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33724_GenericMethod/* genericMethod */

};
extern Il2CppType ConsistencyU5BU5D_t3707_0_0_0;
extern Il2CppType ConsistencyU5BU5D_t3707_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6502_ICollection_1_CopyTo_m33725_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConsistencyU5BU5D_t3707_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33725_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33725_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6502_ICollection_1_CopyTo_m33725_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33725_GenericMethod/* genericMethod */

};
extern Il2CppType Consistency_t1419_0_0_0;
static ParameterInfo ICollection_1_t6502_ICollection_1_Remove_m33726_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t1419_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33726_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Remove(T)
MethodInfo ICollection_1_Remove_m33726_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6502_ICollection_1_Remove_m33726_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33726_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6502_MethodInfos[] =
{
	&ICollection_1_get_Count_m33720_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33721_MethodInfo,
	&ICollection_1_Add_m33722_MethodInfo,
	&ICollection_1_Clear_m33723_MethodInfo,
	&ICollection_1_Contains_m33724_MethodInfo,
	&ICollection_1_CopyTo_m33725_MethodInfo,
	&ICollection_1_Remove_m33726_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6504_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6502_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6502_0_0_0;
extern Il2CppType ICollection_1_t6502_1_0_0;
struct ICollection_1_t6502;
extern Il2CppGenericClass ICollection_1_t6502_GenericClass;
TypeInfo ICollection_1_t6502_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6502_MethodInfos/* methods */
	, ICollection_1_t6502_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6502_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6502_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6502_0_0_0/* byval_arg */
	, &ICollection_1_t6502_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6502_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType IEnumerator_1_t4980_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33727_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33727_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6504_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4980_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33727_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6504_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33727_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6504_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6504_0_0_0;
extern Il2CppType IEnumerable_1_t6504_1_0_0;
struct IEnumerable_1_t6504;
extern Il2CppGenericClass IEnumerable_1_t6504_GenericClass;
TypeInfo IEnumerable_1_t6504_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6504_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6504_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6504_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6504_0_0_0/* byval_arg */
	, &IEnumerable_1_t6504_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6504_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6503_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo IList_1_get_Item_m33728_MethodInfo;
extern MethodInfo IList_1_set_Item_m33729_MethodInfo;
static PropertyInfo IList_1_t6503____Item_PropertyInfo = 
{
	&IList_1_t6503_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33728_MethodInfo/* get */
	, &IList_1_set_Item_m33729_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6503_PropertyInfos[] =
{
	&IList_1_t6503____Item_PropertyInfo,
	NULL
};
extern Il2CppType Consistency_t1419_0_0_0;
static ParameterInfo IList_1_t6503_IList_1_IndexOf_m33730_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t1419_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33730_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33730_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6503_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6503_IList_1_IndexOf_m33730_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33730_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Consistency_t1419_0_0_0;
static ParameterInfo IList_1_t6503_IList_1_Insert_m33731_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Consistency_t1419_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33731_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33731_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6503_IList_1_Insert_m33731_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33731_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6503_IList_1_RemoveAt_m33732_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33732_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33732_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6503_IList_1_RemoveAt_m33732_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33732_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6503_IList_1_get_Item_m33728_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Consistency_t1419_0_0_0;
extern void* RuntimeInvoker_Consistency_t1419_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33728_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33728_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6503_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t1419_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t1419_Int32_t18/* invoker_method */
	, IList_1_t6503_IList_1_get_Item_m33728_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33728_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Consistency_t1419_0_0_0;
static ParameterInfo IList_1_t6503_IList_1_set_Item_m33729_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Consistency_t1419_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33729_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33729_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6503_IList_1_set_Item_m33729_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33729_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6503_MethodInfos[] =
{
	&IList_1_IndexOf_m33730_MethodInfo,
	&IList_1_Insert_m33731_MethodInfo,
	&IList_1_RemoveAt_m33732_MethodInfo,
	&IList_1_get_Item_m33728_MethodInfo,
	&IList_1_set_Item_m33729_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6503_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6502_il2cpp_TypeInfo,
	&IEnumerable_1_t6504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6503_0_0_0;
extern Il2CppType IList_1_t6503_1_0_0;
struct IList_1_t6503;
extern Il2CppGenericClass IList_1_t6503_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6503_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6503_MethodInfos/* methods */
	, IList_1_t6503_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6503_il2cpp_TypeInfo/* element_class */
	, IList_1_t6503_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6503_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6503_0_0_0/* byval_arg */
	, &IList_1_t6503_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6503_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4982_il2cpp_TypeInfo;

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33733_MethodInfo;
static PropertyInfo IEnumerator_1_t4982____Current_PropertyInfo = 
{
	&IEnumerator_1_t4982_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33733_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4982_PropertyInfos[] =
{
	&IEnumerator_1_t4982____Current_PropertyInfo,
	NULL
};
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33733_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33733_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4982_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t1421_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33733_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4982_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33733_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4982_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4982_0_0_0;
extern Il2CppType IEnumerator_1_t4982_1_0_0;
struct IEnumerator_1_t4982;
extern Il2CppGenericClass IEnumerator_1_t4982_GenericClass;
TypeInfo IEnumerator_1_t4982_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4982_MethodInfos/* methods */
	, IEnumerator_1_t4982_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4982_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4982_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4982_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4982_0_0_0/* byval_arg */
	, &IEnumerator_1_t4982_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4982_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_486.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3462_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_486MethodDeclarations.h"

extern TypeInfo ReliabilityContractAttribute_t1421_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19198_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisReliabilityContractAttribute_t1421_m25821_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisReliabilityContractAttribute_t1421_m25821(__this, p0, method) (ReliabilityContractAttribute_t1421 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3462____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3462, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3462____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3462, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3462_FieldInfos[] =
{
	&InternalEnumerator_1_t3462____array_0_FieldInfo,
	&InternalEnumerator_1_t3462____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3462____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3462_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3462____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3462_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19198_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3462_PropertyInfos[] =
{
	&InternalEnumerator_1_t3462____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3462____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3462_InternalEnumerator_1__ctor_m19194_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19194_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19194_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3462_InternalEnumerator_1__ctor_m19194_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19194_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19196_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19196_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19196_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19197_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19197_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19197_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19198_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19198_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t1421_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19198_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3462_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19194_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_MethodInfo,
	&InternalEnumerator_1_Dispose_m19196_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19197_MethodInfo,
	&InternalEnumerator_1_get_Current_m19198_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19197_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19196_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3462_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19195_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19197_MethodInfo,
	&InternalEnumerator_1_Dispose_m19196_MethodInfo,
	&InternalEnumerator_1_get_Current_m19198_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3462_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4982_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3462_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4982_il2cpp_TypeInfo, 7},
};
extern TypeInfo ReliabilityContractAttribute_t1421_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3462_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19198_MethodInfo/* Method Usage */,
	&ReliabilityContractAttribute_t1421_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisReliabilityContractAttribute_t1421_m25821_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3462_0_0_0;
extern Il2CppType InternalEnumerator_1_t3462_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3462_GenericClass;
TypeInfo InternalEnumerator_1_t3462_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3462_MethodInfos/* methods */
	, InternalEnumerator_1_t3462_PropertyInfos/* properties */
	, InternalEnumerator_1_t3462_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3462_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3462_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3462_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3462_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3462_1_0_0/* this_arg */
	, InternalEnumerator_1_t3462_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3462_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3462_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3462)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6505_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo ICollection_1_get_Count_m33734_MethodInfo;
static PropertyInfo ICollection_1_t6505____Count_PropertyInfo = 
{
	&ICollection_1_t6505_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33734_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33735_MethodInfo;
static PropertyInfo ICollection_1_t6505____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6505_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33735_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6505_PropertyInfos[] =
{
	&ICollection_1_t6505____Count_PropertyInfo,
	&ICollection_1_t6505____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33734_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33734_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33734_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33735_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33735_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33735_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
static ParameterInfo ICollection_1_t6505_ICollection_1_Add_m33736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t1421_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33736_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33736_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6505_ICollection_1_Add_m33736_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33736_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33737_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33737_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33737_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
static ParameterInfo ICollection_1_t6505_ICollection_1_Contains_m33738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t1421_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33738_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33738_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6505_ICollection_1_Contains_m33738_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33738_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttributeU5BU5D_t3708_0_0_0;
extern Il2CppType ReliabilityContractAttributeU5BU5D_t3708_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6505_ICollection_1_CopyTo_m33739_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttributeU5BU5D_t3708_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33739_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33739_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6505_ICollection_1_CopyTo_m33739_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33739_GenericMethod/* genericMethod */

};
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
static ParameterInfo ICollection_1_t6505_ICollection_1_Remove_m33740_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t1421_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33740_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33740_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6505_ICollection_1_Remove_m33740_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33740_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6505_MethodInfos[] =
{
	&ICollection_1_get_Count_m33734_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33735_MethodInfo,
	&ICollection_1_Add_m33736_MethodInfo,
	&ICollection_1_Clear_m33737_MethodInfo,
	&ICollection_1_Contains_m33738_MethodInfo,
	&ICollection_1_CopyTo_m33739_MethodInfo,
	&ICollection_1_Remove_m33740_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6507_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6505_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6505_0_0_0;
extern Il2CppType ICollection_1_t6505_1_0_0;
struct ICollection_1_t6505;
extern Il2CppGenericClass ICollection_1_t6505_GenericClass;
TypeInfo ICollection_1_t6505_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6505_MethodInfos/* methods */
	, ICollection_1_t6505_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6505_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6505_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6505_0_0_0/* byval_arg */
	, &ICollection_1_t6505_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6505_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType IEnumerator_1_t4982_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33741_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33741_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6507_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4982_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33741_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6507_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33741_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6507_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6507_0_0_0;
extern Il2CppType IEnumerable_1_t6507_1_0_0;
struct IEnumerable_1_t6507;
extern Il2CppGenericClass IEnumerable_1_t6507_GenericClass;
TypeInfo IEnumerable_1_t6507_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6507_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6507_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6507_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6507_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6507_0_0_0/* byval_arg */
	, &IEnumerable_1_t6507_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6507_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6506_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo IList_1_get_Item_m33742_MethodInfo;
extern MethodInfo IList_1_set_Item_m33743_MethodInfo;
static PropertyInfo IList_1_t6506____Item_PropertyInfo = 
{
	&IList_1_t6506_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33742_MethodInfo/* get */
	, &IList_1_set_Item_m33743_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6506_PropertyInfos[] =
{
	&IList_1_t6506____Item_PropertyInfo,
	NULL
};
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
static ParameterInfo IList_1_t6506_IList_1_IndexOf_m33744_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t1421_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33744_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33744_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6506_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6506_IList_1_IndexOf_m33744_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33744_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
static ParameterInfo IList_1_t6506_IList_1_Insert_m33745_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t1421_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33745_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33745_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6506_IList_1_Insert_m33745_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33745_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6506_IList_1_RemoveAt_m33746_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33746_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33746_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6506_IList_1_RemoveAt_m33746_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33746_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6506_IList_1_get_Item_m33742_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33742_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33742_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6506_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t1421_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6506_IList_1_get_Item_m33742_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33742_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ReliabilityContractAttribute_t1421_0_0_0;
static ParameterInfo IList_1_t6506_IList_1_set_Item_m33743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t1421_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33743_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33743_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6506_IList_1_set_Item_m33743_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33743_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6506_MethodInfos[] =
{
	&IList_1_IndexOf_m33744_MethodInfo,
	&IList_1_Insert_m33745_MethodInfo,
	&IList_1_RemoveAt_m33746_MethodInfo,
	&IList_1_get_Item_m33742_MethodInfo,
	&IList_1_set_Item_m33743_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6506_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6505_il2cpp_TypeInfo,
	&IEnumerable_1_t6507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6506_0_0_0;
extern Il2CppType IList_1_t6506_1_0_0;
struct IList_1_t6506;
extern Il2CppGenericClass IList_1_t6506_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6506_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6506_MethodInfos/* methods */
	, IList_1_t6506_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6506_il2cpp_TypeInfo/* element_class */
	, IList_1_t6506_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6506_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6506_0_0_0/* byval_arg */
	, &IList_1_t6506_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6506_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4984_il2cpp_TypeInfo;

// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo IEnumerator_1_get_Current_m33747_MethodInfo;
static PropertyInfo IEnumerator_1_t4984____Current_PropertyInfo = 
{
	&IEnumerator_1_t4984_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33747_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4984_PropertyInfos[] =
{
	&IEnumerator_1_t4984____Current_PropertyInfo,
	NULL
};
extern Il2CppType CallingConvention_t1423_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t1423 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33747_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33747_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4984_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t1423_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t1423/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33747_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4984_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33747_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4984_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4984_0_0_0;
extern Il2CppType IEnumerator_1_t4984_1_0_0;
struct IEnumerator_1_t4984;
extern Il2CppGenericClass IEnumerator_1_t4984_GenericClass;
TypeInfo IEnumerator_1_t4984_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4984_MethodInfos/* methods */
	, IEnumerator_1_t4984_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4984_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4984_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4984_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4984_0_0_0/* byval_arg */
	, &IEnumerator_1_t4984_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4984_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_487.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3463_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_487MethodDeclarations.h"

extern TypeInfo CallingConvention_t1423_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19203_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCallingConvention_t1423_m25832_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CallingConvention>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CallingConvention>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCallingConvention_t1423_m25832 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19199_MethodInfo;
 void InternalEnumerator_1__ctor_m19199 (InternalEnumerator_1_t3463 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200 (InternalEnumerator_1_t3463 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19203(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19203_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CallingConvention_t1423_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19201_MethodInfo;
 void InternalEnumerator_1_Dispose_m19201 (InternalEnumerator_1_t3463 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19202_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19202 (InternalEnumerator_1_t3463 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19203 (InternalEnumerator_1_t3463 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCallingConvention_t1423_m25832(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCallingConvention_t1423_m25832_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3463____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3463, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3463____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3463, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3463_FieldInfos[] =
{
	&InternalEnumerator_1_t3463____array_0_FieldInfo,
	&InternalEnumerator_1_t3463____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3463____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3463_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3463____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3463_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19203_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3463_PropertyInfos[] =
{
	&InternalEnumerator_1_t3463____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3463____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3463_InternalEnumerator_1__ctor_m19199_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19199_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19199_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19199/* method */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3463_InternalEnumerator_1__ctor_m19199_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19199_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200/* method */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19201_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19201_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19201/* method */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19201_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19202_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19202_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19202/* method */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19202_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t1423_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t1423 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19203_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19203_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19203/* method */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t1423_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t1423/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19203_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3463_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19199_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_MethodInfo,
	&InternalEnumerator_1_Dispose_m19201_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19202_MethodInfo,
	&InternalEnumerator_1_get_Current_m19203_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3463_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19200_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19202_MethodInfo,
	&InternalEnumerator_1_Dispose_m19201_MethodInfo,
	&InternalEnumerator_1_get_Current_m19203_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3463_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4984_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3463_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4984_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3463_0_0_0;
extern Il2CppType InternalEnumerator_1_t3463_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3463_GenericClass;
TypeInfo InternalEnumerator_1_t3463_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3463_MethodInfos/* methods */
	, InternalEnumerator_1_t3463_PropertyInfos/* properties */
	, InternalEnumerator_1_t3463_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3463_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3463_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3463_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3463_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3463_1_0_0/* this_arg */
	, InternalEnumerator_1_t3463_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3463_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3463)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6508_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo ICollection_1_get_Count_m33748_MethodInfo;
static PropertyInfo ICollection_1_t6508____Count_PropertyInfo = 
{
	&ICollection_1_t6508_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33748_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33749_MethodInfo;
static PropertyInfo ICollection_1_t6508____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6508_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33749_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6508_PropertyInfos[] =
{
	&ICollection_1_t6508____Count_PropertyInfo,
	&ICollection_1_t6508____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33748_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_Count()
MethodInfo ICollection_1_get_Count_m33748_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33748_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33749_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33749_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33749_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t1423_0_0_0;
extern Il2CppType CallingConvention_t1423_0_0_0;
static ParameterInfo ICollection_1_t6508_ICollection_1_Add_m33750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t1423_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33750_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Add(T)
MethodInfo ICollection_1_Add_m33750_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6508_ICollection_1_Add_m33750_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33750_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33751_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Clear()
MethodInfo ICollection_1_Clear_m33751_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33751_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t1423_0_0_0;
static ParameterInfo ICollection_1_t6508_ICollection_1_Contains_m33752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t1423_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33752_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Contains(T)
MethodInfo ICollection_1_Contains_m33752_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6508_ICollection_1_Contains_m33752_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33752_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConventionU5BU5D_t3709_0_0_0;
extern Il2CppType CallingConventionU5BU5D_t3709_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6508_ICollection_1_CopyTo_m33753_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventionU5BU5D_t3709_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33753_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33753_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6508_ICollection_1_CopyTo_m33753_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33753_GenericMethod/* genericMethod */

};
extern Il2CppType CallingConvention_t1423_0_0_0;
static ParameterInfo ICollection_1_t6508_ICollection_1_Remove_m33754_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t1423_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33754_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Remove(T)
MethodInfo ICollection_1_Remove_m33754_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6508_ICollection_1_Remove_m33754_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33754_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6508_MethodInfos[] =
{
	&ICollection_1_get_Count_m33748_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33749_MethodInfo,
	&ICollection_1_Add_m33750_MethodInfo,
	&ICollection_1_Clear_m33751_MethodInfo,
	&ICollection_1_Contains_m33752_MethodInfo,
	&ICollection_1_CopyTo_m33753_MethodInfo,
	&ICollection_1_Remove_m33754_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6510_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6508_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6510_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6508_0_0_0;
extern Il2CppType ICollection_1_t6508_1_0_0;
struct ICollection_1_t6508;
extern Il2CppGenericClass ICollection_1_t6508_GenericClass;
TypeInfo ICollection_1_t6508_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6508_MethodInfos/* methods */
	, ICollection_1_t6508_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6508_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6508_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6508_0_0_0/* byval_arg */
	, &ICollection_1_t6508_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6508_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType IEnumerator_1_t4984_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33755_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33755_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6510_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4984_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33755_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6510_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33755_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6510_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6510_0_0_0;
extern Il2CppType IEnumerable_1_t6510_1_0_0;
struct IEnumerable_1_t6510;
extern Il2CppGenericClass IEnumerable_1_t6510_GenericClass;
TypeInfo IEnumerable_1_t6510_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6510_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6510_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6510_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6510_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6510_0_0_0/* byval_arg */
	, &IEnumerable_1_t6510_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6510_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6509_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo IList_1_get_Item_m33756_MethodInfo;
extern MethodInfo IList_1_set_Item_m33757_MethodInfo;
static PropertyInfo IList_1_t6509____Item_PropertyInfo = 
{
	&IList_1_t6509_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33756_MethodInfo/* get */
	, &IList_1_set_Item_m33757_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6509_PropertyInfos[] =
{
	&IList_1_t6509____Item_PropertyInfo,
	NULL
};
extern Il2CppType CallingConvention_t1423_0_0_0;
static ParameterInfo IList_1_t6509_IList_1_IndexOf_m33758_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t1423_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33758_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33758_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6509_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6509_IList_1_IndexOf_m33758_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33758_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CallingConvention_t1423_0_0_0;
static ParameterInfo IList_1_t6509_IList_1_Insert_m33759_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t1423_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33759_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33759_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6509_IList_1_Insert_m33759_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33759_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6509_IList_1_RemoveAt_m33760_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33760_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33760_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6509_IList_1_RemoveAt_m33760_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33760_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6509_IList_1_get_Item_m33756_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType CallingConvention_t1423_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t1423_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33756_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33756_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6509_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t1423_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t1423_Int32_t18/* invoker_method */
	, IList_1_t6509_IList_1_get_Item_m33756_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33756_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CallingConvention_t1423_0_0_0;
static ParameterInfo IList_1_t6509_IList_1_set_Item_m33757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t1423_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33757_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33757_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6509_IList_1_set_Item_m33757_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33757_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6509_MethodInfos[] =
{
	&IList_1_IndexOf_m33758_MethodInfo,
	&IList_1_Insert_m33759_MethodInfo,
	&IList_1_RemoveAt_m33760_MethodInfo,
	&IList_1_get_Item_m33756_MethodInfo,
	&IList_1_set_Item_m33757_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6509_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6508_il2cpp_TypeInfo,
	&IEnumerable_1_t6510_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6509_0_0_0;
extern Il2CppType IList_1_t6509_1_0_0;
struct IList_1_t6509;
extern Il2CppGenericClass IList_1_t6509_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6509_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6509_MethodInfos/* methods */
	, IList_1_t6509_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6509_il2cpp_TypeInfo/* element_class */
	, IList_1_t6509_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6509_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6509_0_0_0/* byval_arg */
	, &IList_1_t6509_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6509_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4986_il2cpp_TypeInfo;

// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo IEnumerator_1_get_Current_m33761_MethodInfo;
static PropertyInfo IEnumerator_1_t4986____Current_PropertyInfo = 
{
	&IEnumerator_1_t4986_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33761_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4986_PropertyInfos[] =
{
	&IEnumerator_1_t4986____Current_PropertyInfo,
	NULL
};
extern Il2CppType CharSet_t1424_0_0_0;
extern void* RuntimeInvoker_CharSet_t1424 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33761_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33761_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4986_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t1424_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t1424/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33761_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4986_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33761_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4986_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4986_0_0_0;
extern Il2CppType IEnumerator_1_t4986_1_0_0;
struct IEnumerator_1_t4986;
extern Il2CppGenericClass IEnumerator_1_t4986_GenericClass;
TypeInfo IEnumerator_1_t4986_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4986_MethodInfos/* methods */
	, IEnumerator_1_t4986_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4986_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4986_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4986_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4986_0_0_0/* byval_arg */
	, &IEnumerator_1_t4986_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4986_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_488.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3464_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_488MethodDeclarations.h"

extern TypeInfo CharSet_t1424_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19208_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCharSet_t1424_m25843_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CharSet>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CharSet>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCharSet_t1424_m25843 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19204_MethodInfo;
 void InternalEnumerator_1__ctor_m19204 (InternalEnumerator_1_t3464 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205 (InternalEnumerator_1_t3464 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19208(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19208_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CharSet_t1424_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19206_MethodInfo;
 void InternalEnumerator_1_Dispose_m19206 (InternalEnumerator_1_t3464 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19207_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19207 (InternalEnumerator_1_t3464 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19208 (InternalEnumerator_1_t3464 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCharSet_t1424_m25843(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCharSet_t1424_m25843_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3464____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3464, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3464____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3464, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3464_FieldInfos[] =
{
	&InternalEnumerator_1_t3464____array_0_FieldInfo,
	&InternalEnumerator_1_t3464____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3464____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3464_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3464____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3464_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3464_PropertyInfos[] =
{
	&InternalEnumerator_1_t3464____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3464____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3464_InternalEnumerator_1__ctor_m19204_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19204_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19204_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19204/* method */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3464_InternalEnumerator_1__ctor_m19204_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19204_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205/* method */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19206_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19206_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19206/* method */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19206_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19207_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19207_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19207/* method */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19207_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t1424_0_0_0;
extern void* RuntimeInvoker_CharSet_t1424 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19208_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19208_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19208/* method */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t1424_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t1424/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19208_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3464_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19204_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205_MethodInfo,
	&InternalEnumerator_1_Dispose_m19206_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19207_MethodInfo,
	&InternalEnumerator_1_get_Current_m19208_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3464_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19205_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19207_MethodInfo,
	&InternalEnumerator_1_Dispose_m19206_MethodInfo,
	&InternalEnumerator_1_get_Current_m19208_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3464_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4986_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3464_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4986_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3464_0_0_0;
extern Il2CppType InternalEnumerator_1_t3464_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3464_GenericClass;
TypeInfo InternalEnumerator_1_t3464_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3464_MethodInfos/* methods */
	, InternalEnumerator_1_t3464_PropertyInfos/* properties */
	, InternalEnumerator_1_t3464_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3464_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3464_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3464_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3464_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3464_1_0_0/* this_arg */
	, InternalEnumerator_1_t3464_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3464_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3464)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6511_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo ICollection_1_get_Count_m33762_MethodInfo;
static PropertyInfo ICollection_1_t6511____Count_PropertyInfo = 
{
	&ICollection_1_t6511_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33762_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33763_MethodInfo;
static PropertyInfo ICollection_1_t6511____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6511_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33763_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6511_PropertyInfos[] =
{
	&ICollection_1_t6511____Count_PropertyInfo,
	&ICollection_1_t6511____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33762_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_Count()
MethodInfo ICollection_1_get_Count_m33762_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33762_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33763_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33763_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33763_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t1424_0_0_0;
extern Il2CppType CharSet_t1424_0_0_0;
static ParameterInfo ICollection_1_t6511_ICollection_1_Add_m33764_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t1424_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33764_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Add(T)
MethodInfo ICollection_1_Add_m33764_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6511_ICollection_1_Add_m33764_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33764_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33765_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Clear()
MethodInfo ICollection_1_Clear_m33765_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33765_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t1424_0_0_0;
static ParameterInfo ICollection_1_t6511_ICollection_1_Contains_m33766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t1424_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33766_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Contains(T)
MethodInfo ICollection_1_Contains_m33766_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6511_ICollection_1_Contains_m33766_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33766_GenericMethod/* genericMethod */

};
extern Il2CppType CharSetU5BU5D_t3710_0_0_0;
extern Il2CppType CharSetU5BU5D_t3710_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6511_ICollection_1_CopyTo_m33767_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CharSetU5BU5D_t3710_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33767_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33767_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6511_ICollection_1_CopyTo_m33767_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33767_GenericMethod/* genericMethod */

};
extern Il2CppType CharSet_t1424_0_0_0;
static ParameterInfo ICollection_1_t6511_ICollection_1_Remove_m33768_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t1424_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33768_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Remove(T)
MethodInfo ICollection_1_Remove_m33768_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6511_ICollection_1_Remove_m33768_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33768_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6511_MethodInfos[] =
{
	&ICollection_1_get_Count_m33762_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33763_MethodInfo,
	&ICollection_1_Add_m33764_MethodInfo,
	&ICollection_1_Clear_m33765_MethodInfo,
	&ICollection_1_Contains_m33766_MethodInfo,
	&ICollection_1_CopyTo_m33767_MethodInfo,
	&ICollection_1_Remove_m33768_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6513_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6511_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6513_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6511_0_0_0;
extern Il2CppType ICollection_1_t6511_1_0_0;
struct ICollection_1_t6511;
extern Il2CppGenericClass ICollection_1_t6511_GenericClass;
TypeInfo ICollection_1_t6511_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6511_MethodInfos/* methods */
	, ICollection_1_t6511_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6511_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6511_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6511_0_0_0/* byval_arg */
	, &ICollection_1_t6511_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6511_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType IEnumerator_1_t4986_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33769_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33769_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6513_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4986_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33769_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6513_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33769_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6513_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6513_0_0_0;
extern Il2CppType IEnumerable_1_t6513_1_0_0;
struct IEnumerable_1_t6513;
extern Il2CppGenericClass IEnumerable_1_t6513_GenericClass;
TypeInfo IEnumerable_1_t6513_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6513_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6513_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6513_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6513_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6513_0_0_0/* byval_arg */
	, &IEnumerable_1_t6513_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6513_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6512_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo IList_1_get_Item_m33770_MethodInfo;
extern MethodInfo IList_1_set_Item_m33771_MethodInfo;
static PropertyInfo IList_1_t6512____Item_PropertyInfo = 
{
	&IList_1_t6512_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33770_MethodInfo/* get */
	, &IList_1_set_Item_m33771_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6512_PropertyInfos[] =
{
	&IList_1_t6512____Item_PropertyInfo,
	NULL
};
extern Il2CppType CharSet_t1424_0_0_0;
static ParameterInfo IList_1_t6512_IList_1_IndexOf_m33772_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t1424_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33772_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33772_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6512_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6512_IList_1_IndexOf_m33772_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33772_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CharSet_t1424_0_0_0;
static ParameterInfo IList_1_t6512_IList_1_Insert_m33773_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CharSet_t1424_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33773_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33773_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6512_IList_1_Insert_m33773_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33773_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6512_IList_1_RemoveAt_m33774_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33774_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33774_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6512_IList_1_RemoveAt_m33774_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33774_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6512_IList_1_get_Item_m33770_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType CharSet_t1424_0_0_0;
extern void* RuntimeInvoker_CharSet_t1424_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33770_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33770_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6512_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t1424_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t1424_Int32_t18/* invoker_method */
	, IList_1_t6512_IList_1_get_Item_m33770_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33770_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType CharSet_t1424_0_0_0;
static ParameterInfo IList_1_t6512_IList_1_set_Item_m33771_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CharSet_t1424_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33771_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33771_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6512_IList_1_set_Item_m33771_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33771_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6512_MethodInfos[] =
{
	&IList_1_IndexOf_m33772_MethodInfo,
	&IList_1_Insert_m33773_MethodInfo,
	&IList_1_RemoveAt_m33774_MethodInfo,
	&IList_1_get_Item_m33770_MethodInfo,
	&IList_1_set_Item_m33771_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6512_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6511_il2cpp_TypeInfo,
	&IEnumerable_1_t6513_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6512_0_0_0;
extern Il2CppType IList_1_t6512_1_0_0;
struct IList_1_t6512;
extern Il2CppGenericClass IList_1_t6512_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6512_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6512_MethodInfos/* methods */
	, IList_1_t6512_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6512_il2cpp_TypeInfo/* element_class */
	, IList_1_t6512_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6512_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6512_0_0_0/* byval_arg */
	, &IList_1_t6512_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6512_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4988_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33775_MethodInfo;
static PropertyInfo IEnumerator_1_t4988____Current_PropertyInfo = 
{
	&IEnumerator_1_t4988_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33775_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4988_PropertyInfos[] =
{
	&IEnumerator_1_t4988____Current_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33775_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33775_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4988_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t1425_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33775_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4988_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33775_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4988_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4988_0_0_0;
extern Il2CppType IEnumerator_1_t4988_1_0_0;
struct IEnumerator_1_t4988;
extern Il2CppGenericClass IEnumerator_1_t4988_GenericClass;
TypeInfo IEnumerator_1_t4988_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4988_MethodInfos/* methods */
	, IEnumerator_1_t4988_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4988_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4988_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4988_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4988_0_0_0/* byval_arg */
	, &IEnumerator_1_t4988_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4988_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_489.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3465_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_489MethodDeclarations.h"

extern TypeInfo ClassInterfaceAttribute_t1425_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19213_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceAttribute_t1425_m25854_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisClassInterfaceAttribute_t1425_m25854(__this, p0, method) (ClassInterfaceAttribute_t1425 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3465____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3465, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3465____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3465, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3465_FieldInfos[] =
{
	&InternalEnumerator_1_t3465____array_0_FieldInfo,
	&InternalEnumerator_1_t3465____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19210_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3465____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3465_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19210_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3465____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3465_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3465_PropertyInfos[] =
{
	&InternalEnumerator_1_t3465____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3465____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3465_InternalEnumerator_1__ctor_m19209_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19209_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19209_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3465_InternalEnumerator_1__ctor_m19209_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19209_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19210_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19210_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19210_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19211_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19211_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19211_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19212_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19212_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19212_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19213_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19213_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t1425_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19213_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3465_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19209_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19210_MethodInfo,
	&InternalEnumerator_1_Dispose_m19211_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19212_MethodInfo,
	&InternalEnumerator_1_get_Current_m19213_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19212_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19211_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3465_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19210_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19212_MethodInfo,
	&InternalEnumerator_1_Dispose_m19211_MethodInfo,
	&InternalEnumerator_1_get_Current_m19213_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3465_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4988_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3465_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4988_il2cpp_TypeInfo, 7},
};
extern TypeInfo ClassInterfaceAttribute_t1425_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3465_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19213_MethodInfo/* Method Usage */,
	&ClassInterfaceAttribute_t1425_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisClassInterfaceAttribute_t1425_m25854_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3465_0_0_0;
extern Il2CppType InternalEnumerator_1_t3465_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3465_GenericClass;
TypeInfo InternalEnumerator_1_t3465_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3465_MethodInfos/* methods */
	, InternalEnumerator_1_t3465_PropertyInfos/* properties */
	, InternalEnumerator_1_t3465_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3465_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3465_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3465_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3465_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3465_1_0_0/* this_arg */
	, InternalEnumerator_1_t3465_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3465_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3465_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3465)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6514_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo ICollection_1_get_Count_m33776_MethodInfo;
static PropertyInfo ICollection_1_t6514____Count_PropertyInfo = 
{
	&ICollection_1_t6514_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33776_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33777_MethodInfo;
static PropertyInfo ICollection_1_t6514____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6514_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33777_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6514_PropertyInfos[] =
{
	&ICollection_1_t6514____Count_PropertyInfo,
	&ICollection_1_t6514____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33776_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33776_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33776_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33777_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33777_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33777_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
static ParameterInfo ICollection_1_t6514_ICollection_1_Add_m33778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t1425_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33778_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33778_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6514_ICollection_1_Add_m33778_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33778_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33779_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33779_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33779_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
static ParameterInfo ICollection_1_t6514_ICollection_1_Contains_m33780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t1425_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33780_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33780_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6514_ICollection_1_Contains_m33780_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33780_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttributeU5BU5D_t3711_0_0_0;
extern Il2CppType ClassInterfaceAttributeU5BU5D_t3711_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6514_ICollection_1_CopyTo_m33781_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttributeU5BU5D_t3711_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33781_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33781_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6514_ICollection_1_CopyTo_m33781_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33781_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
static ParameterInfo ICollection_1_t6514_ICollection_1_Remove_m33782_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t1425_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33782_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33782_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6514_ICollection_1_Remove_m33782_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33782_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6514_MethodInfos[] =
{
	&ICollection_1_get_Count_m33776_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33777_MethodInfo,
	&ICollection_1_Add_m33778_MethodInfo,
	&ICollection_1_Clear_m33779_MethodInfo,
	&ICollection_1_Contains_m33780_MethodInfo,
	&ICollection_1_CopyTo_m33781_MethodInfo,
	&ICollection_1_Remove_m33782_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6516_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6514_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6516_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6514_0_0_0;
extern Il2CppType ICollection_1_t6514_1_0_0;
struct ICollection_1_t6514;
extern Il2CppGenericClass ICollection_1_t6514_GenericClass;
TypeInfo ICollection_1_t6514_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6514_MethodInfos/* methods */
	, ICollection_1_t6514_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6514_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6514_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6514_0_0_0/* byval_arg */
	, &ICollection_1_t6514_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6514_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType IEnumerator_1_t4988_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33783_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33783_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6516_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4988_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33783_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6516_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33783_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6516_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6516_0_0_0;
extern Il2CppType IEnumerable_1_t6516_1_0_0;
struct IEnumerable_1_t6516;
extern Il2CppGenericClass IEnumerable_1_t6516_GenericClass;
TypeInfo IEnumerable_1_t6516_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6516_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6516_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6516_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6516_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6516_0_0_0/* byval_arg */
	, &IEnumerable_1_t6516_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6516_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6515_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo IList_1_get_Item_m33784_MethodInfo;
extern MethodInfo IList_1_set_Item_m33785_MethodInfo;
static PropertyInfo IList_1_t6515____Item_PropertyInfo = 
{
	&IList_1_t6515_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33784_MethodInfo/* get */
	, &IList_1_set_Item_m33785_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6515_PropertyInfos[] =
{
	&IList_1_t6515____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
static ParameterInfo IList_1_t6515_IList_1_IndexOf_m33786_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t1425_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33786_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33786_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6515_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6515_IList_1_IndexOf_m33786_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33786_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
static ParameterInfo IList_1_t6515_IList_1_Insert_m33787_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t1425_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33787_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33787_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6515_IList_1_Insert_m33787_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33787_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6515_IList_1_RemoveAt_m33788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33788_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33788_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6515_IList_1_RemoveAt_m33788_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33788_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6515_IList_1_get_Item_m33784_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33784_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33784_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6515_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t1425_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6515_IList_1_get_Item_m33784_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33784_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ClassInterfaceAttribute_t1425_0_0_0;
static ParameterInfo IList_1_t6515_IList_1_set_Item_m33785_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t1425_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33785_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33785_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6515_IList_1_set_Item_m33785_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33785_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6515_MethodInfos[] =
{
	&IList_1_IndexOf_m33786_MethodInfo,
	&IList_1_Insert_m33787_MethodInfo,
	&IList_1_RemoveAt_m33788_MethodInfo,
	&IList_1_get_Item_m33784_MethodInfo,
	&IList_1_set_Item_m33785_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6515_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6514_il2cpp_TypeInfo,
	&IEnumerable_1_t6516_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6515_0_0_0;
extern Il2CppType IList_1_t6515_1_0_0;
struct IList_1_t6515;
extern Il2CppGenericClass IList_1_t6515_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6515_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6515_MethodInfos/* methods */
	, IList_1_t6515_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6515_il2cpp_TypeInfo/* element_class */
	, IList_1_t6515_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6515_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6515_0_0_0/* byval_arg */
	, &IList_1_t6515_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6515_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4990_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo IEnumerator_1_get_Current_m33789_MethodInfo;
static PropertyInfo IEnumerator_1_t4990____Current_PropertyInfo = 
{
	&IEnumerator_1_t4990_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33789_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4990_PropertyInfos[] =
{
	&IEnumerator_1_t4990____Current_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t1426 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33789_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33789_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4990_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t1426_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t1426/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33789_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4990_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33789_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4990_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4990_0_0_0;
extern Il2CppType IEnumerator_1_t4990_1_0_0;
struct IEnumerator_1_t4990;
extern Il2CppGenericClass IEnumerator_1_t4990_GenericClass;
TypeInfo IEnumerator_1_t4990_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4990_MethodInfos/* methods */
	, IEnumerator_1_t4990_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4990_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4990_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4990_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4990_0_0_0/* byval_arg */
	, &IEnumerator_1_t4990_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4990_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_490.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3466_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_490MethodDeclarations.h"

extern TypeInfo ClassInterfaceType_t1426_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19218_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceType_t1426_m25865_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisClassInterfaceType_t1426_m25865 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19214_MethodInfo;
 void InternalEnumerator_1__ctor_m19214 (InternalEnumerator_1_t3466 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215 (InternalEnumerator_1_t3466 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19218(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19218_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ClassInterfaceType_t1426_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19216_MethodInfo;
 void InternalEnumerator_1_Dispose_m19216 (InternalEnumerator_1_t3466 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19217_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19217 (InternalEnumerator_1_t3466 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19218 (InternalEnumerator_1_t3466 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisClassInterfaceType_t1426_m25865(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisClassInterfaceType_t1426_m25865_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3466____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3466, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3466____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3466, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3466_FieldInfos[] =
{
	&InternalEnumerator_1_t3466____array_0_FieldInfo,
	&InternalEnumerator_1_t3466____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3466____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3466_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3466____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3466_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19218_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3466_PropertyInfos[] =
{
	&InternalEnumerator_1_t3466____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3466____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3466_InternalEnumerator_1__ctor_m19214_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19214_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19214_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19214/* method */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3466_InternalEnumerator_1__ctor_m19214_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19214_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215/* method */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19216_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19216_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19216/* method */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19216_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19217_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19217_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19217/* method */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19217_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t1426 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19218_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19218_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19218/* method */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t1426_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t1426/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19218_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3466_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19214_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215_MethodInfo,
	&InternalEnumerator_1_Dispose_m19216_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19217_MethodInfo,
	&InternalEnumerator_1_get_Current_m19218_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3466_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19215_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19217_MethodInfo,
	&InternalEnumerator_1_Dispose_m19216_MethodInfo,
	&InternalEnumerator_1_get_Current_m19218_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3466_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4990_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3466_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4990_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3466_0_0_0;
extern Il2CppType InternalEnumerator_1_t3466_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3466_GenericClass;
TypeInfo InternalEnumerator_1_t3466_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3466_MethodInfos/* methods */
	, InternalEnumerator_1_t3466_PropertyInfos/* properties */
	, InternalEnumerator_1_t3466_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3466_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3466_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3466_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3466_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3466_1_0_0/* this_arg */
	, InternalEnumerator_1_t3466_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3466_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3466)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6517_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo ICollection_1_get_Count_m33790_MethodInfo;
static PropertyInfo ICollection_1_t6517____Count_PropertyInfo = 
{
	&ICollection_1_t6517_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33790_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33791_MethodInfo;
static PropertyInfo ICollection_1_t6517____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6517_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33791_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6517_PropertyInfos[] =
{
	&ICollection_1_t6517____Count_PropertyInfo,
	&ICollection_1_t6517____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33790_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Count()
MethodInfo ICollection_1_get_Count_m33790_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33790_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33791_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33791_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33791_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
static ParameterInfo ICollection_1_t6517_ICollection_1_Add_m33792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t1426_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33792_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Add(T)
MethodInfo ICollection_1_Add_m33792_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6517_ICollection_1_Add_m33792_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33792_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33793_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Clear()
MethodInfo ICollection_1_Clear_m33793_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33793_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
static ParameterInfo ICollection_1_t6517_ICollection_1_Contains_m33794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t1426_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33794_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Contains(T)
MethodInfo ICollection_1_Contains_m33794_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6517_ICollection_1_Contains_m33794_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33794_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceTypeU5BU5D_t3712_0_0_0;
extern Il2CppType ClassInterfaceTypeU5BU5D_t3712_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6517_ICollection_1_CopyTo_m33795_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceTypeU5BU5D_t3712_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33795_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33795_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6517_ICollection_1_CopyTo_m33795_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33795_GenericMethod/* genericMethod */

};
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
static ParameterInfo ICollection_1_t6517_ICollection_1_Remove_m33796_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t1426_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33796_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Remove(T)
MethodInfo ICollection_1_Remove_m33796_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6517_ICollection_1_Remove_m33796_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33796_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6517_MethodInfos[] =
{
	&ICollection_1_get_Count_m33790_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33791_MethodInfo,
	&ICollection_1_Add_m33792_MethodInfo,
	&ICollection_1_Clear_m33793_MethodInfo,
	&ICollection_1_Contains_m33794_MethodInfo,
	&ICollection_1_CopyTo_m33795_MethodInfo,
	&ICollection_1_Remove_m33796_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6519_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6517_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6519_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6517_0_0_0;
extern Il2CppType ICollection_1_t6517_1_0_0;
struct ICollection_1_t6517;
extern Il2CppGenericClass ICollection_1_t6517_GenericClass;
TypeInfo ICollection_1_t6517_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6517_MethodInfos/* methods */
	, ICollection_1_t6517_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6517_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6517_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6517_0_0_0/* byval_arg */
	, &ICollection_1_t6517_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6517_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType IEnumerator_1_t4990_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33797_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33797_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6519_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4990_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33797_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6519_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33797_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6519_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6519_0_0_0;
extern Il2CppType IEnumerable_1_t6519_1_0_0;
struct IEnumerable_1_t6519;
extern Il2CppGenericClass IEnumerable_1_t6519_GenericClass;
TypeInfo IEnumerable_1_t6519_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6519_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6519_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6519_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6519_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6519_0_0_0/* byval_arg */
	, &IEnumerable_1_t6519_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6519_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6518_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo IList_1_get_Item_m33798_MethodInfo;
extern MethodInfo IList_1_set_Item_m33799_MethodInfo;
static PropertyInfo IList_1_t6518____Item_PropertyInfo = 
{
	&IList_1_t6518_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33798_MethodInfo/* get */
	, &IList_1_set_Item_m33799_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6518_PropertyInfos[] =
{
	&IList_1_t6518____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
static ParameterInfo IList_1_t6518_IList_1_IndexOf_m33800_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t1426_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33800_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33800_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6518_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6518_IList_1_IndexOf_m33800_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33800_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
static ParameterInfo IList_1_t6518_IList_1_Insert_m33801_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t1426_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33801_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33801_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6518_IList_1_Insert_m33801_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33801_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6518_IList_1_RemoveAt_m33802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33802_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33802_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6518_IList_1_RemoveAt_m33802_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33802_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6518_IList_1_get_Item_m33798_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t1426_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33798_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33798_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6518_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t1426_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t1426_Int32_t18/* invoker_method */
	, IList_1_t6518_IList_1_get_Item_m33798_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33798_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ClassInterfaceType_t1426_0_0_0;
static ParameterInfo IList_1_t6518_IList_1_set_Item_m33799_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t1426_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33799_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33799_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6518_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6518_IList_1_set_Item_m33799_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33799_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6518_MethodInfos[] =
{
	&IList_1_IndexOf_m33800_MethodInfo,
	&IList_1_Insert_m33801_MethodInfo,
	&IList_1_RemoveAt_m33802_MethodInfo,
	&IList_1_get_Item_m33798_MethodInfo,
	&IList_1_set_Item_m33799_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6518_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6517_il2cpp_TypeInfo,
	&IEnumerable_1_t6519_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6518_0_0_0;
extern Il2CppType IList_1_t6518_1_0_0;
struct IList_1_t6518;
extern Il2CppGenericClass IList_1_t6518_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6518_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6518_MethodInfos/* methods */
	, IList_1_t6518_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6518_il2cpp_TypeInfo/* element_class */
	, IList_1_t6518_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6518_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6518_0_0_0/* byval_arg */
	, &IList_1_t6518_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6518_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4992_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33803_MethodInfo;
static PropertyInfo IEnumerator_1_t4992____Current_PropertyInfo = 
{
	&IEnumerator_1_t4992_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33803_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4992_PropertyInfos[] =
{
	&IEnumerator_1_t4992____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33803_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33803_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4992_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t1427_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33803_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4992_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33803_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4992_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4992_0_0_0;
extern Il2CppType IEnumerator_1_t4992_1_0_0;
struct IEnumerator_1_t4992;
extern Il2CppGenericClass IEnumerator_1_t4992_GenericClass;
TypeInfo IEnumerator_1_t4992_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4992_MethodInfos/* methods */
	, IEnumerator_1_t4992_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4992_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4992_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4992_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4992_0_0_0/* byval_arg */
	, &IEnumerator_1_t4992_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4992_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_491.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3467_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_491MethodDeclarations.h"

extern TypeInfo ComDefaultInterfaceAttribute_t1427_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19223_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t1427_m25876_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t1427_m25876(__this, p0, method) (ComDefaultInterfaceAttribute_t1427 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3467____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3467, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3467____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3467, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3467_FieldInfos[] =
{
	&InternalEnumerator_1_t3467____array_0_FieldInfo,
	&InternalEnumerator_1_t3467____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19220_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3467____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3467_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19220_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3467____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3467_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19223_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3467_PropertyInfos[] =
{
	&InternalEnumerator_1_t3467____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3467____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3467_InternalEnumerator_1__ctor_m19219_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19219_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19219_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3467_InternalEnumerator_1__ctor_m19219_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19219_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19220_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19220_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19220_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19221_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19221_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19221_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19222_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19222_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19222_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19223_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19223_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t1427_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19223_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3467_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19219_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19220_MethodInfo,
	&InternalEnumerator_1_Dispose_m19221_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19222_MethodInfo,
	&InternalEnumerator_1_get_Current_m19223_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19222_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19221_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3467_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19220_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19222_MethodInfo,
	&InternalEnumerator_1_Dispose_m19221_MethodInfo,
	&InternalEnumerator_1_get_Current_m19223_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3467_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4992_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3467_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4992_il2cpp_TypeInfo, 7},
};
extern TypeInfo ComDefaultInterfaceAttribute_t1427_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3467_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19223_MethodInfo/* Method Usage */,
	&ComDefaultInterfaceAttribute_t1427_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t1427_m25876_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3467_0_0_0;
extern Il2CppType InternalEnumerator_1_t3467_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3467_GenericClass;
TypeInfo InternalEnumerator_1_t3467_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3467_MethodInfos/* methods */
	, InternalEnumerator_1_t3467_PropertyInfos/* properties */
	, InternalEnumerator_1_t3467_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3467_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3467_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3467_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3467_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3467_1_0_0/* this_arg */
	, InternalEnumerator_1_t3467_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3467_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3467_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3467)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6520_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo ICollection_1_get_Count_m33804_MethodInfo;
static PropertyInfo ICollection_1_t6520____Count_PropertyInfo = 
{
	&ICollection_1_t6520_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33804_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33805_MethodInfo;
static PropertyInfo ICollection_1_t6520____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6520_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33805_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6520_PropertyInfos[] =
{
	&ICollection_1_t6520____Count_PropertyInfo,
	&ICollection_1_t6520____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33804_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m33804_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33804_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33805_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33805_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33805_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
static ParameterInfo ICollection_1_t6520_ICollection_1_Add_m33806_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t1427_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33806_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Add(T)
MethodInfo ICollection_1_Add_m33806_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6520_ICollection_1_Add_m33806_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33806_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33807_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Clear()
MethodInfo ICollection_1_Clear_m33807_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33807_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
static ParameterInfo ICollection_1_t6520_ICollection_1_Contains_m33808_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t1427_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33808_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m33808_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6520_ICollection_1_Contains_m33808_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33808_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttributeU5BU5D_t3713_0_0_0;
extern Il2CppType ComDefaultInterfaceAttributeU5BU5D_t3713_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6520_ICollection_1_CopyTo_m33809_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttributeU5BU5D_t3713_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33809_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33809_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6520_ICollection_1_CopyTo_m33809_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33809_GenericMethod/* genericMethod */

};
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
static ParameterInfo ICollection_1_t6520_ICollection_1_Remove_m33810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t1427_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33810_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m33810_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6520_ICollection_1_Remove_m33810_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33810_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6520_MethodInfos[] =
{
	&ICollection_1_get_Count_m33804_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33805_MethodInfo,
	&ICollection_1_Add_m33806_MethodInfo,
	&ICollection_1_Clear_m33807_MethodInfo,
	&ICollection_1_Contains_m33808_MethodInfo,
	&ICollection_1_CopyTo_m33809_MethodInfo,
	&ICollection_1_Remove_m33810_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6522_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6520_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6522_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6520_0_0_0;
extern Il2CppType ICollection_1_t6520_1_0_0;
struct ICollection_1_t6520;
extern Il2CppGenericClass ICollection_1_t6520_GenericClass;
TypeInfo ICollection_1_t6520_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6520_MethodInfos/* methods */
	, ICollection_1_t6520_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6520_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6520_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6520_0_0_0/* byval_arg */
	, &ICollection_1_t6520_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6520_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType IEnumerator_1_t4992_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33811_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33811_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6522_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4992_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33811_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6522_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33811_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6522_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6522_0_0_0;
extern Il2CppType IEnumerable_1_t6522_1_0_0;
struct IEnumerable_1_t6522;
extern Il2CppGenericClass IEnumerable_1_t6522_GenericClass;
TypeInfo IEnumerable_1_t6522_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6522_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6522_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6522_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6522_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6522_0_0_0/* byval_arg */
	, &IEnumerable_1_t6522_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6522_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6521_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo IList_1_get_Item_m33812_MethodInfo;
extern MethodInfo IList_1_set_Item_m33813_MethodInfo;
static PropertyInfo IList_1_t6521____Item_PropertyInfo = 
{
	&IList_1_t6521_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33812_MethodInfo/* get */
	, &IList_1_set_Item_m33813_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6521_PropertyInfos[] =
{
	&IList_1_t6521____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
static ParameterInfo IList_1_t6521_IList_1_IndexOf_m33814_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t1427_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33814_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33814_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6521_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6521_IList_1_IndexOf_m33814_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33814_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
static ParameterInfo IList_1_t6521_IList_1_Insert_m33815_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t1427_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33815_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33815_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6521_IList_1_Insert_m33815_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33815_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6521_IList_1_RemoveAt_m33816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33816_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33816_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6521_IList_1_RemoveAt_m33816_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33816_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6521_IList_1_get_Item_m33812_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33812_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33812_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6521_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t1427_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6521_IList_1_get_Item_m33812_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33812_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ComDefaultInterfaceAttribute_t1427_0_0_0;
static ParameterInfo IList_1_t6521_IList_1_set_Item_m33813_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t1427_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33813_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33813_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6521_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6521_IList_1_set_Item_m33813_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33813_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6521_MethodInfos[] =
{
	&IList_1_IndexOf_m33814_MethodInfo,
	&IList_1_Insert_m33815_MethodInfo,
	&IList_1_RemoveAt_m33816_MethodInfo,
	&IList_1_get_Item_m33812_MethodInfo,
	&IList_1_set_Item_m33813_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6521_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6520_il2cpp_TypeInfo,
	&IEnumerable_1_t6522_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6521_0_0_0;
extern Il2CppType IList_1_t6521_1_0_0;
struct IList_1_t6521;
extern Il2CppGenericClass IList_1_t6521_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6521_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6521_MethodInfos/* methods */
	, IList_1_t6521_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6521_il2cpp_TypeInfo/* element_class */
	, IList_1_t6521_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6521_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6521_0_0_0/* byval_arg */
	, &IList_1_t6521_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6521_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4994_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo IEnumerator_1_get_Current_m33817_MethodInfo;
static PropertyInfo IEnumerator_1_t4994____Current_PropertyInfo = 
{
	&IEnumerator_1_t4994_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33817_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4994_PropertyInfos[] =
{
	&IEnumerator_1_t4994____Current_PropertyInfo,
	NULL
};
extern Il2CppType ComInterfaceType_t1428_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t1428 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33817_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33817_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4994_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t1428_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t1428/* invoker_method */
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
	, &IEnumerator_1_get_Current_m33817_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4994_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33817_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4994_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4994_0_0_0;
extern Il2CppType IEnumerator_1_t4994_1_0_0;
struct IEnumerator_1_t4994;
extern Il2CppGenericClass IEnumerator_1_t4994_GenericClass;
TypeInfo IEnumerator_1_t4994_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4994_MethodInfos/* methods */
	, IEnumerator_1_t4994_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4994_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4994_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4994_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4994_0_0_0/* byval_arg */
	, &IEnumerator_1_t4994_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4994_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_492.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3468_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_492MethodDeclarations.h"

extern TypeInfo ComInterfaceType_t1428_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19228_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComInterfaceType_t1428_m25887_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComInterfaceType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComInterfaceType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisComInterfaceType_t1428_m25887 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19224_MethodInfo;
 void InternalEnumerator_1__ctor_m19224 (InternalEnumerator_1_t3468 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225 (InternalEnumerator_1_t3468 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19228(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19228_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ComInterfaceType_t1428_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19226_MethodInfo;
 void InternalEnumerator_1_Dispose_m19226 (InternalEnumerator_1_t3468 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19227_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19227 (InternalEnumerator_1_t3468 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19228 (InternalEnumerator_1_t3468 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisComInterfaceType_t1428_m25887(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisComInterfaceType_t1428_m25887_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3468____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3468, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3468____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3468, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3468_FieldInfos[] =
{
	&InternalEnumerator_1_t3468____array_0_FieldInfo,
	&InternalEnumerator_1_t3468____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3468____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3468_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3468____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3468_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3468_PropertyInfos[] =
{
	&InternalEnumerator_1_t3468____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3468____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3468_InternalEnumerator_1__ctor_m19224_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19224_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19224_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19224/* method */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3468_InternalEnumerator_1__ctor_m19224_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19224_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225/* method */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19226_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19226_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19226/* method */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19226_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19227_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19227_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19227/* method */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19227_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t1428_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t1428 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19228_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19228_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19228/* method */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t1428_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t1428/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19228_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3468_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19224_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225_MethodInfo,
	&InternalEnumerator_1_Dispose_m19226_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19227_MethodInfo,
	&InternalEnumerator_1_get_Current_m19228_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3468_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19225_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19227_MethodInfo,
	&InternalEnumerator_1_Dispose_m19226_MethodInfo,
	&InternalEnumerator_1_get_Current_m19228_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3468_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t4994_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3468_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t4994_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3468_0_0_0;
extern Il2CppType InternalEnumerator_1_t3468_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3468_GenericClass;
TypeInfo InternalEnumerator_1_t3468_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3468_MethodInfos/* methods */
	, InternalEnumerator_1_t3468_PropertyInfos/* properties */
	, InternalEnumerator_1_t3468_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3468_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3468_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3468_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3468_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3468_1_0_0/* this_arg */
	, InternalEnumerator_1_t3468_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3468_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3468)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6523_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo ICollection_1_get_Count_m33818_MethodInfo;
static PropertyInfo ICollection_1_t6523____Count_PropertyInfo = 
{
	&ICollection_1_t6523_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m33818_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m33819_MethodInfo;
static PropertyInfo ICollection_1_t6523____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6523_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m33819_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6523_PropertyInfos[] =
{
	&ICollection_1_t6523____Count_PropertyInfo,
	&ICollection_1_t6523____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m33818_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_Count()
MethodInfo ICollection_1_get_Count_m33818_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m33818_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m33819_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m33819_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m33819_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t1428_0_0_0;
extern Il2CppType ComInterfaceType_t1428_0_0_0;
static ParameterInfo ICollection_1_t6523_ICollection_1_Add_m33820_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t1428_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m33820_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Add(T)
MethodInfo ICollection_1_Add_m33820_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6523_ICollection_1_Add_m33820_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m33820_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m33821_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Clear()
MethodInfo ICollection_1_Clear_m33821_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m33821_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t1428_0_0_0;
static ParameterInfo ICollection_1_t6523_ICollection_1_Contains_m33822_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t1428_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m33822_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Contains(T)
MethodInfo ICollection_1_Contains_m33822_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6523_ICollection_1_Contains_m33822_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m33822_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceTypeU5BU5D_t3714_0_0_0;
extern Il2CppType ComInterfaceTypeU5BU5D_t3714_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6523_ICollection_1_CopyTo_m33823_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceTypeU5BU5D_t3714_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m33823_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m33823_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6523_ICollection_1_CopyTo_m33823_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m33823_GenericMethod/* genericMethod */

};
extern Il2CppType ComInterfaceType_t1428_0_0_0;
static ParameterInfo ICollection_1_t6523_ICollection_1_Remove_m33824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t1428_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m33824_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Remove(T)
MethodInfo ICollection_1_Remove_m33824_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6523_ICollection_1_Remove_m33824_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m33824_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6523_MethodInfos[] =
{
	&ICollection_1_get_Count_m33818_MethodInfo,
	&ICollection_1_get_IsReadOnly_m33819_MethodInfo,
	&ICollection_1_Add_m33820_MethodInfo,
	&ICollection_1_Clear_m33821_MethodInfo,
	&ICollection_1_Contains_m33822_MethodInfo,
	&ICollection_1_CopyTo_m33823_MethodInfo,
	&ICollection_1_Remove_m33824_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6525_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6523_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6525_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6523_0_0_0;
extern Il2CppType ICollection_1_t6523_1_0_0;
struct ICollection_1_t6523;
extern Il2CppGenericClass ICollection_1_t6523_GenericClass;
TypeInfo ICollection_1_t6523_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6523_MethodInfos/* methods */
	, ICollection_1_t6523_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6523_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6523_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6523_0_0_0/* byval_arg */
	, &ICollection_1_t6523_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6523_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType IEnumerator_1_t4994_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m33825_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m33825_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6525_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t4994_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m33825_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6525_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m33825_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6525_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6525_0_0_0;
extern Il2CppType IEnumerable_1_t6525_1_0_0;
struct IEnumerable_1_t6525;
extern Il2CppGenericClass IEnumerable_1_t6525_GenericClass;
TypeInfo IEnumerable_1_t6525_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6525_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6525_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6525_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6525_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6525_0_0_0/* byval_arg */
	, &IEnumerable_1_t6525_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6525_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6524_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo IList_1_get_Item_m33826_MethodInfo;
extern MethodInfo IList_1_set_Item_m33827_MethodInfo;
static PropertyInfo IList_1_t6524____Item_PropertyInfo = 
{
	&IList_1_t6524_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m33826_MethodInfo/* get */
	, &IList_1_set_Item_m33827_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6524_PropertyInfos[] =
{
	&IList_1_t6524____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComInterfaceType_t1428_0_0_0;
static ParameterInfo IList_1_t6524_IList_1_IndexOf_m33828_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t1428_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m33828_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m33828_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6524_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6524_IList_1_IndexOf_m33828_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m33828_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ComInterfaceType_t1428_0_0_0;
static ParameterInfo IList_1_t6524_IList_1_Insert_m33829_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t1428_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m33829_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m33829_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6524_IList_1_Insert_m33829_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m33829_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6524_IList_1_RemoveAt_m33830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m33830_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m33830_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6524_IList_1_RemoveAt_m33830_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m33830_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6524_IList_1_get_Item_m33826_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ComInterfaceType_t1428_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t1428_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m33826_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m33826_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6524_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t1428_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t1428_Int32_t18/* invoker_method */
	, IList_1_t6524_IList_1_get_Item_m33826_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m33826_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ComInterfaceType_t1428_0_0_0;
static ParameterInfo IList_1_t6524_IList_1_set_Item_m33827_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t1428_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m33827_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m33827_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6524_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6524_IList_1_set_Item_m33827_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m33827_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6524_MethodInfos[] =
{
	&IList_1_IndexOf_m33828_MethodInfo,
	&IList_1_Insert_m33829_MethodInfo,
	&IList_1_RemoveAt_m33830_MethodInfo,
	&IList_1_get_Item_m33826_MethodInfo,
	&IList_1_set_Item_m33827_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6524_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6523_il2cpp_TypeInfo,
	&IEnumerable_1_t6525_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6524_0_0_0;
extern Il2CppType IList_1_t6524_1_0_0;
struct IList_1_t6524;
extern Il2CppGenericClass IList_1_t6524_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6524_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6524_MethodInfos/* methods */
	, IList_1_t6524_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6524_il2cpp_TypeInfo/* element_class */
	, IList_1_t6524_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6524_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6524_0_0_0/* byval_arg */
	, &IList_1_t6524_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6524_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t4996_il2cpp_TypeInfo;

// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo IEnumerator_1_get_Current_m33831_MethodInfo;
static PropertyInfo IEnumerator_1_t4996____Current_PropertyInfo = 
{
	&IEnumerator_1_t4996_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m33831_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t4996_PropertyInfos[] =
{
	&IEnumerator_1_t4996____Current_PropertyInfo,
	NULL
};
extern Il2CppType DispIdAttribute_t1429_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m33831_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m33831_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t4996_il2cpp_TypeInfo/* declaring_type */
	, &DispIdAttribute_t1429_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m33831_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t4996_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m33831_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t4996_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t4996_0_0_0;
extern Il2CppType IEnumerator_1_t4996_1_0_0;
struct IEnumerator_1_t4996;
extern Il2CppGenericClass IEnumerator_1_t4996_GenericClass;
TypeInfo IEnumerator_1_t4996_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t4996_MethodInfos/* methods */
	, IEnumerator_1_t4996_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t4996_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t4996_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t4996_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t4996_0_0_0/* byval_arg */
	, &IEnumerator_1_t4996_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t4996_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
