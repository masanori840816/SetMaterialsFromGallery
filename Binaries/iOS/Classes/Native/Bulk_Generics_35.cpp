#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_513.h"
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
extern TypeInfo InternalEnumerator_1_t3489_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_513MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.Formatters.Binary.TypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Type.h"
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
extern TypeInfo TypeTag_t1515_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t949_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m19333_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4119_MethodInfo;
extern MethodInfo Array_get_Length_m4124_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeTag_t1515_m26118_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.TypeTag>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisTypeTag_t1515_m26118 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19329_MethodInfo;
 void InternalEnumerator_1__ctor_m19329 (InternalEnumerator_1_t3489 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330 (InternalEnumerator_1_t3489 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m19333(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19333_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeTag_t1515_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19331_MethodInfo;
 void InternalEnumerator_1_Dispose_m19331 (InternalEnumerator_1_t3489 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19332_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19332 (InternalEnumerator_1_t3489 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m19333 (InternalEnumerator_1_t3489 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisTypeTag_t1515_m26118(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeTag_t1515_m26118_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3489____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3489, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3489____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3489, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3489_FieldInfos[] =
{
	&InternalEnumerator_1_t3489____array_0_FieldInfo,
	&InternalEnumerator_1_t3489____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3489____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3489_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3489____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3489_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3489_PropertyInfos[] =
{
	&InternalEnumerator_1_t3489____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3489____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3489_InternalEnumerator_1__ctor_m19329_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19329_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19329_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19329/* method */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3489_InternalEnumerator_1__ctor_m19329_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19329_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330/* method */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19331_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19331_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19331/* method */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19331_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19332_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19332_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19332/* method */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19332_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t1515_0_0_0;
extern void* RuntimeInvoker_TypeTag_t1515 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19333_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19333_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19333/* method */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* declaring_type */
	, &TypeTag_t1515_0_0_0/* return_type */
	, RuntimeInvoker_TypeTag_t1515/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19333_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3489_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19329_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330_MethodInfo,
	&InternalEnumerator_1_Dispose_m19331_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19332_MethodInfo,
	&InternalEnumerator_1_get_Current_m19333_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1360_MethodInfo;
extern MethodInfo Object_Finalize_m7_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1361_MethodInfo;
extern MethodInfo ValueType_ToString_m1476_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3489_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19330_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19332_MethodInfo,
	&InternalEnumerator_1_Dispose_m19331_MethodInfo,
	&InternalEnumerator_1_get_Current_m19333_MethodInfo,
};
extern TypeInfo IEnumerator_t112_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t301_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5036_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t3489_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5036_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3489_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5036_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3489_0_0_0;
extern Il2CppType InternalEnumerator_1_t3489_1_0_0;
extern TypeInfo ValueType_t296_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t3489_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t3489_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3489_MethodInfos/* methods */
	, InternalEnumerator_1_t3489_PropertyInfos/* properties */
	, InternalEnumerator_1_t3489_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3489_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3489_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3489_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3489_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3489_1_0_0/* this_arg */
	, InternalEnumerator_1_t3489_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3489_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3489)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6586_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo ICollection_1_get_Count_m34112_MethodInfo;
static PropertyInfo ICollection_1_t6586____Count_PropertyInfo = 
{
	&ICollection_1_t6586_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34112_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34113_MethodInfo;
static PropertyInfo ICollection_1_t6586____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6586_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34113_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6586_PropertyInfos[] =
{
	&ICollection_1_t6586____Count_PropertyInfo,
	&ICollection_1_t6586____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34112_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Count()
MethodInfo ICollection_1_get_Count_m34112_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34112_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34113_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34113_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34113_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t1515_0_0_0;
extern Il2CppType TypeTag_t1515_0_0_0;
static ParameterInfo ICollection_1_t6586_ICollection_1_Add_m34114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t1515_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34114_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Add(T)
MethodInfo ICollection_1_Add_m34114_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Byte_t624/* invoker_method */
	, ICollection_1_t6586_ICollection_1_Add_m34114_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34114_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34115_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Clear()
MethodInfo ICollection_1_Clear_m34115_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34115_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t1515_0_0_0;
static ParameterInfo ICollection_1_t6586_ICollection_1_Contains_m34116_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t1515_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34116_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Contains(T)
MethodInfo ICollection_1_Contains_m34116_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6586_ICollection_1_Contains_m34116_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34116_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTagU5BU5D_t2093_0_0_0;
extern Il2CppType TypeTagU5BU5D_t2093_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6586_ICollection_1_CopyTo_m34117_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeTagU5BU5D_t2093_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34117_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34117_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6586_ICollection_1_CopyTo_m34117_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34117_GenericMethod/* genericMethod */

};
extern Il2CppType TypeTag_t1515_0_0_0;
static ParameterInfo ICollection_1_t6586_ICollection_1_Remove_m34118_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t1515_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34118_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Remove(T)
MethodInfo ICollection_1_Remove_m34118_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6586_ICollection_1_Remove_m34118_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34118_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6586_MethodInfos[] =
{
	&ICollection_1_get_Count_m34112_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34113_MethodInfo,
	&ICollection_1_Add_m34114_MethodInfo,
	&ICollection_1_Clear_m34115_MethodInfo,
	&ICollection_1_Contains_m34116_MethodInfo,
	&ICollection_1_CopyTo_m34117_MethodInfo,
	&ICollection_1_Remove_m34118_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t641_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6588_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6586_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6588_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6586_0_0_0;
extern Il2CppType ICollection_1_t6586_1_0_0;
struct ICollection_1_t6586;
extern Il2CppGenericClass ICollection_1_t6586_GenericClass;
TypeInfo ICollection_1_t6586_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6586_MethodInfos/* methods */
	, ICollection_1_t6586_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6586_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6586_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6586_0_0_0/* byval_arg */
	, &ICollection_1_t6586_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6586_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern Il2CppType IEnumerator_1_t5036_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34119_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34119_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6588_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5036_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34119_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6588_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34119_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6588_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6588_0_0_0;
extern Il2CppType IEnumerable_1_t6588_1_0_0;
struct IEnumerable_1_t6588;
extern Il2CppGenericClass IEnumerable_1_t6588_GenericClass;
TypeInfo IEnumerable_1_t6588_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6588_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6588_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6588_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6588_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6588_0_0_0/* byval_arg */
	, &IEnumerable_1_t6588_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6588_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6587_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>
extern MethodInfo IList_1_get_Item_m34120_MethodInfo;
extern MethodInfo IList_1_set_Item_m34121_MethodInfo;
static PropertyInfo IList_1_t6587____Item_PropertyInfo = 
{
	&IList_1_t6587_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34120_MethodInfo/* get */
	, &IList_1_set_Item_m34121_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6587_PropertyInfos[] =
{
	&IList_1_t6587____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeTag_t1515_0_0_0;
static ParameterInfo IList_1_t6587_IList_1_IndexOf_m34122_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeTag_t1515_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34122_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34122_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6587_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6587_IList_1_IndexOf_m34122_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34122_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeTag_t1515_0_0_0;
static ParameterInfo IList_1_t6587_IList_1_Insert_m34123_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeTag_t1515_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34123_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34123_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6587_IList_1_Insert_m34123_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34123_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6587_IList_1_RemoveAt_m34124_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34124_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34124_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6587_IList_1_RemoveAt_m34124_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34124_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6587_IList_1_get_Item_m34120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TypeTag_t1515_0_0_0;
extern void* RuntimeInvoker_TypeTag_t1515_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34120_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34120_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6587_il2cpp_TypeInfo/* declaring_type */
	, &TypeTag_t1515_0_0_0/* return_type */
	, RuntimeInvoker_TypeTag_t1515_Int32_t18/* invoker_method */
	, IList_1_t6587_IList_1_get_Item_m34120_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34120_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeTag_t1515_0_0_0;
static ParameterInfo IList_1_t6587_IList_1_set_Item_m34121_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeTag_t1515_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34121_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.TypeTag>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34121_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6587_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6587_IList_1_set_Item_m34121_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34121_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6587_MethodInfos[] =
{
	&IList_1_IndexOf_m34122_MethodInfo,
	&IList_1_Insert_m34123_MethodInfo,
	&IList_1_RemoveAt_m34124_MethodInfo,
	&IList_1_get_Item_m34120_MethodInfo,
	&IList_1_set_Item_m34121_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6587_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6586_il2cpp_TypeInfo,
	&IEnumerable_1_t6588_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6587_0_0_0;
extern Il2CppType IList_1_t6587_1_0_0;
struct IList_1_t6587;
extern Il2CppGenericClass IList_1_t6587_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6587_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6587_MethodInfos/* methods */
	, IList_1_t6587_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6587_il2cpp_TypeInfo/* element_class */
	, IList_1_t6587_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6587_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6587_0_0_0/* byval_arg */
	, &IList_1_t6587_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6587_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5038_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Meth.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo IEnumerator_1_get_Current_m34125_MethodInfo;
static PropertyInfo IEnumerator_1_t5038____Current_PropertyInfo = 
{
	&IEnumerator_1_t5038_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34125_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5038_PropertyInfos[] =
{
	&IEnumerator_1_t5038____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodFlags_t1516_0_0_0;
extern void* RuntimeInvoker_MethodFlags_t1516 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34125_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34125_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5038_il2cpp_TypeInfo/* declaring_type */
	, &MethodFlags_t1516_0_0_0/* return_type */
	, RuntimeInvoker_MethodFlags_t1516/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34125_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5038_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34125_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5038_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5038_0_0_0;
extern Il2CppType IEnumerator_1_t5038_1_0_0;
struct IEnumerator_1_t5038;
extern Il2CppGenericClass IEnumerator_1_t5038_GenericClass;
TypeInfo IEnumerator_1_t5038_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5038_MethodInfos/* methods */
	, IEnumerator_1_t5038_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5038_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5038_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5038_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5038_0_0_0/* byval_arg */
	, &IEnumerator_1_t5038_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5038_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_514.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3490_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_514MethodDeclarations.h"

extern TypeInfo MethodFlags_t1516_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19338_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodFlags_t1516_m26129_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.MethodFlags>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodFlags_t1516_m26129 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19334_MethodInfo;
 void InternalEnumerator_1__ctor_m19334 (InternalEnumerator_1_t3490 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335 (InternalEnumerator_1_t3490 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19338(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19338_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodFlags_t1516_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19336_MethodInfo;
 void InternalEnumerator_1_Dispose_m19336 (InternalEnumerator_1_t3490 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19337_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19337 (InternalEnumerator_1_t3490 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19338 (InternalEnumerator_1_t3490 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodFlags_t1516_m26129(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodFlags_t1516_m26129_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3490____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3490, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3490____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3490, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3490_FieldInfos[] =
{
	&InternalEnumerator_1_t3490____array_0_FieldInfo,
	&InternalEnumerator_1_t3490____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3490____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3490_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3490____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3490_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19338_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3490_PropertyInfos[] =
{
	&InternalEnumerator_1_t3490____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3490____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3490_InternalEnumerator_1__ctor_m19334_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19334_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19334_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19334/* method */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3490_InternalEnumerator_1__ctor_m19334_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19334_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335/* method */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19336_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19336_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19336/* method */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19336_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19337_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19337_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19337/* method */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19337_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t1516_0_0_0;
extern void* RuntimeInvoker_MethodFlags_t1516 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19338_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19338_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19338/* method */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* declaring_type */
	, &MethodFlags_t1516_0_0_0/* return_type */
	, RuntimeInvoker_MethodFlags_t1516/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19338_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3490_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19334_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335_MethodInfo,
	&InternalEnumerator_1_Dispose_m19336_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19337_MethodInfo,
	&InternalEnumerator_1_get_Current_m19338_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3490_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19335_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19337_MethodInfo,
	&InternalEnumerator_1_Dispose_m19336_MethodInfo,
	&InternalEnumerator_1_get_Current_m19338_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3490_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5038_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3490_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5038_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3490_0_0_0;
extern Il2CppType InternalEnumerator_1_t3490_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3490_GenericClass;
TypeInfo InternalEnumerator_1_t3490_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3490_MethodInfos/* methods */
	, InternalEnumerator_1_t3490_PropertyInfos/* properties */
	, InternalEnumerator_1_t3490_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3490_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3490_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3490_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3490_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3490_1_0_0/* this_arg */
	, InternalEnumerator_1_t3490_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3490_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3490)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6589_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo ICollection_1_get_Count_m34126_MethodInfo;
static PropertyInfo ICollection_1_t6589____Count_PropertyInfo = 
{
	&ICollection_1_t6589_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34126_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34127_MethodInfo;
static PropertyInfo ICollection_1_t6589____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6589_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34127_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6589_PropertyInfos[] =
{
	&ICollection_1_t6589____Count_PropertyInfo,
	&ICollection_1_t6589____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34126_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Count()
MethodInfo ICollection_1_get_Count_m34126_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34126_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34127_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34127_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34127_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t1516_0_0_0;
extern Il2CppType MethodFlags_t1516_0_0_0;
static ParameterInfo ICollection_1_t6589_ICollection_1_Add_m34128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t1516_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34128_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Add(T)
MethodInfo ICollection_1_Add_m34128_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6589_ICollection_1_Add_m34128_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34128_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34129_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Clear()
MethodInfo ICollection_1_Clear_m34129_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34129_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t1516_0_0_0;
static ParameterInfo ICollection_1_t6589_ICollection_1_Contains_m34130_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t1516_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34130_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Contains(T)
MethodInfo ICollection_1_Contains_m34130_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6589_ICollection_1_Contains_m34130_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34130_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlagsU5BU5D_t3732_0_0_0;
extern Il2CppType MethodFlagsU5BU5D_t3732_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6589_ICollection_1_CopyTo_m34131_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlagsU5BU5D_t3732_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34131_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34131_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6589_ICollection_1_CopyTo_m34131_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34131_GenericMethod/* genericMethod */

};
extern Il2CppType MethodFlags_t1516_0_0_0;
static ParameterInfo ICollection_1_t6589_ICollection_1_Remove_m34132_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t1516_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34132_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Remove(T)
MethodInfo ICollection_1_Remove_m34132_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6589_ICollection_1_Remove_m34132_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34132_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6589_MethodInfos[] =
{
	&ICollection_1_get_Count_m34126_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34127_MethodInfo,
	&ICollection_1_Add_m34128_MethodInfo,
	&ICollection_1_Clear_m34129_MethodInfo,
	&ICollection_1_Contains_m34130_MethodInfo,
	&ICollection_1_CopyTo_m34131_MethodInfo,
	&ICollection_1_Remove_m34132_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6591_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6589_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6591_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6589_0_0_0;
extern Il2CppType ICollection_1_t6589_1_0_0;
struct ICollection_1_t6589;
extern Il2CppGenericClass ICollection_1_t6589_GenericClass;
TypeInfo ICollection_1_t6589_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6589_MethodInfos/* methods */
	, ICollection_1_t6589_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6589_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6589_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6589_0_0_0/* byval_arg */
	, &ICollection_1_t6589_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6589_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern Il2CppType IEnumerator_1_t5038_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34133_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34133_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6591_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5038_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34133_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6591_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34133_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6591_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6591_0_0_0;
extern Il2CppType IEnumerable_1_t6591_1_0_0;
struct IEnumerable_1_t6591;
extern Il2CppGenericClass IEnumerable_1_t6591_GenericClass;
TypeInfo IEnumerable_1_t6591_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6591_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6591_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6591_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6591_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6591_0_0_0/* byval_arg */
	, &IEnumerable_1_t6591_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6591_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6590_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>
extern MethodInfo IList_1_get_Item_m34134_MethodInfo;
extern MethodInfo IList_1_set_Item_m34135_MethodInfo;
static PropertyInfo IList_1_t6590____Item_PropertyInfo = 
{
	&IList_1_t6590_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34134_MethodInfo/* get */
	, &IList_1_set_Item_m34135_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6590_PropertyInfos[] =
{
	&IList_1_t6590____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodFlags_t1516_0_0_0;
static ParameterInfo IList_1_t6590_IList_1_IndexOf_m34136_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t1516_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34136_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34136_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6590_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6590_IList_1_IndexOf_m34136_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34136_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodFlags_t1516_0_0_0;
static ParameterInfo IList_1_t6590_IList_1_Insert_m34137_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t1516_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34137_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34137_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6590_IList_1_Insert_m34137_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34137_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6590_IList_1_RemoveAt_m34138_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34138_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34138_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6590_IList_1_RemoveAt_m34138_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34138_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6590_IList_1_get_Item_m34134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType MethodFlags_t1516_0_0_0;
extern void* RuntimeInvoker_MethodFlags_t1516_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34134_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34134_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6590_il2cpp_TypeInfo/* declaring_type */
	, &MethodFlags_t1516_0_0_0/* return_type */
	, RuntimeInvoker_MethodFlags_t1516_Int32_t18/* invoker_method */
	, IList_1_t6590_IList_1_get_Item_m34134_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34134_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType MethodFlags_t1516_0_0_0;
static ParameterInfo IList_1_t6590_IList_1_set_Item_m34135_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodFlags_t1516_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34135_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.MethodFlags>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34135_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6590_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6590_IList_1_set_Item_m34135_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34135_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6590_MethodInfos[] =
{
	&IList_1_IndexOf_m34136_MethodInfo,
	&IList_1_Insert_m34137_MethodInfo,
	&IList_1_RemoveAt_m34138_MethodInfo,
	&IList_1_get_Item_m34134_MethodInfo,
	&IList_1_set_Item_m34135_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6590_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6589_il2cpp_TypeInfo,
	&IEnumerable_1_t6591_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6590_0_0_0;
extern Il2CppType IList_1_t6590_1_0_0;
struct IList_1_t6590;
extern Il2CppGenericClass IList_1_t6590_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6590_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6590_MethodInfos/* methods */
	, IList_1_t6590_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6590_il2cpp_TypeInfo/* element_class */
	, IList_1_t6590_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6590_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6590_0_0_0/* byval_arg */
	, &IList_1_t6590_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6590_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5040_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Retu.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo IEnumerator_1_get_Current_m34139_MethodInfo;
static PropertyInfo IEnumerator_1_t5040____Current_PropertyInfo = 
{
	&IEnumerator_1_t5040_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34139_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5040_PropertyInfos[] =
{
	&IEnumerator_1_t5040____Current_PropertyInfo,
	NULL
};
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
extern void* RuntimeInvoker_ReturnTypeTag_t1517 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34139_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34139_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5040_il2cpp_TypeInfo/* declaring_type */
	, &ReturnTypeTag_t1517_0_0_0/* return_type */
	, RuntimeInvoker_ReturnTypeTag_t1517/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34139_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5040_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34139_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5040_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5040_0_0_0;
extern Il2CppType IEnumerator_1_t5040_1_0_0;
struct IEnumerator_1_t5040;
extern Il2CppGenericClass IEnumerator_1_t5040_GenericClass;
TypeInfo IEnumerator_1_t5040_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5040_MethodInfos/* methods */
	, IEnumerator_1_t5040_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5040_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5040_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5040_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5040_0_0_0/* byval_arg */
	, &IEnumerator_1_t5040_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5040_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_515.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3491_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_515MethodDeclarations.h"

extern TypeInfo ReturnTypeTag_t1517_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19343_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisReturnTypeTag_t1517_m26140_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisReturnTypeTag_t1517_m26140 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19339_MethodInfo;
 void InternalEnumerator_1__ctor_m19339 (InternalEnumerator_1_t3491 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340 (InternalEnumerator_1_t3491 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m19343(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19343_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ReturnTypeTag_t1517_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19341_MethodInfo;
 void InternalEnumerator_1_Dispose_m19341 (InternalEnumerator_1_t3491 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19342_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19342 (InternalEnumerator_1_t3491 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m19343 (InternalEnumerator_1_t3491 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisReturnTypeTag_t1517_m26140(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisReturnTypeTag_t1517_m26140_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3491____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3491, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3491____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3491, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3491_FieldInfos[] =
{
	&InternalEnumerator_1_t3491____array_0_FieldInfo,
	&InternalEnumerator_1_t3491____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3491____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3491_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3491____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3491_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19343_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3491_PropertyInfos[] =
{
	&InternalEnumerator_1_t3491____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3491____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3491_InternalEnumerator_1__ctor_m19339_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19339_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19339_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19339/* method */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3491_InternalEnumerator_1__ctor_m19339_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19339_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340/* method */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19341_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19341_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19341/* method */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19341_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19342_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19342_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19342/* method */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19342_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
extern void* RuntimeInvoker_ReturnTypeTag_t1517 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19343_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19343_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19343/* method */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* declaring_type */
	, &ReturnTypeTag_t1517_0_0_0/* return_type */
	, RuntimeInvoker_ReturnTypeTag_t1517/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19343_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3491_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19339_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340_MethodInfo,
	&InternalEnumerator_1_Dispose_m19341_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19342_MethodInfo,
	&InternalEnumerator_1_get_Current_m19343_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3491_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19340_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19342_MethodInfo,
	&InternalEnumerator_1_Dispose_m19341_MethodInfo,
	&InternalEnumerator_1_get_Current_m19343_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3491_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5040_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3491_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5040_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3491_0_0_0;
extern Il2CppType InternalEnumerator_1_t3491_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3491_GenericClass;
TypeInfo InternalEnumerator_1_t3491_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3491_MethodInfos/* methods */
	, InternalEnumerator_1_t3491_PropertyInfos/* properties */
	, InternalEnumerator_1_t3491_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3491_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3491_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3491_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3491_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3491_1_0_0/* this_arg */
	, InternalEnumerator_1_t3491_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3491_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3491)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6592_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo ICollection_1_get_Count_m34140_MethodInfo;
static PropertyInfo ICollection_1_t6592____Count_PropertyInfo = 
{
	&ICollection_1_t6592_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34140_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34141_MethodInfo;
static PropertyInfo ICollection_1_t6592____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6592_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34141_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6592_PropertyInfos[] =
{
	&ICollection_1_t6592____Count_PropertyInfo,
	&ICollection_1_t6592____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34140_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Count()
MethodInfo ICollection_1_get_Count_m34140_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34140_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34141_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34141_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34141_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
static ParameterInfo ICollection_1_t6592_ICollection_1_Add_m34142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t1517_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34142_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Add(T)
MethodInfo ICollection_1_Add_m34142_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Byte_t624/* invoker_method */
	, ICollection_1_t6592_ICollection_1_Add_m34142_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34142_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34143_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Clear()
MethodInfo ICollection_1_Clear_m34143_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34143_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
static ParameterInfo ICollection_1_t6592_ICollection_1_Contains_m34144_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t1517_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34144_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Contains(T)
MethodInfo ICollection_1_Contains_m34144_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6592_ICollection_1_Contains_m34144_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34144_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTagU5BU5D_t3733_0_0_0;
extern Il2CppType ReturnTypeTagU5BU5D_t3733_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6592_ICollection_1_CopyTo_m34145_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTagU5BU5D_t3733_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34145_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34145_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6592_ICollection_1_CopyTo_m34145_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34145_GenericMethod/* genericMethod */

};
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
static ParameterInfo ICollection_1_t6592_ICollection_1_Remove_m34146_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t1517_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34146_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Remove(T)
MethodInfo ICollection_1_Remove_m34146_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6592_ICollection_1_Remove_m34146_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34146_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6592_MethodInfos[] =
{
	&ICollection_1_get_Count_m34140_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34141_MethodInfo,
	&ICollection_1_Add_m34142_MethodInfo,
	&ICollection_1_Clear_m34143_MethodInfo,
	&ICollection_1_Contains_m34144_MethodInfo,
	&ICollection_1_CopyTo_m34145_MethodInfo,
	&ICollection_1_Remove_m34146_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6594_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6592_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6594_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6592_0_0_0;
extern Il2CppType ICollection_1_t6592_1_0_0;
struct ICollection_1_t6592;
extern Il2CppGenericClass ICollection_1_t6592_GenericClass;
TypeInfo ICollection_1_t6592_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6592_MethodInfos/* methods */
	, ICollection_1_t6592_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6592_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6592_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6592_0_0_0/* byval_arg */
	, &ICollection_1_t6592_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6592_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern Il2CppType IEnumerator_1_t5040_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34147_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34147_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6594_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5040_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34147_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6594_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34147_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6594_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6594_0_0_0;
extern Il2CppType IEnumerable_1_t6594_1_0_0;
struct IEnumerable_1_t6594;
extern Il2CppGenericClass IEnumerable_1_t6594_GenericClass;
TypeInfo IEnumerable_1_t6594_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6594_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6594_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6594_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6594_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6594_0_0_0/* byval_arg */
	, &IEnumerable_1_t6594_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6594_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6593_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>
extern MethodInfo IList_1_get_Item_m34148_MethodInfo;
extern MethodInfo IList_1_set_Item_m34149_MethodInfo;
static PropertyInfo IList_1_t6593____Item_PropertyInfo = 
{
	&IList_1_t6593_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34148_MethodInfo/* get */
	, &IList_1_set_Item_m34149_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6593_PropertyInfos[] =
{
	&IList_1_t6593____Item_PropertyInfo,
	NULL
};
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
static ParameterInfo IList_1_t6593_IList_1_IndexOf_m34150_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t1517_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34150_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34150_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6593_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6593_IList_1_IndexOf_m34150_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34150_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
static ParameterInfo IList_1_t6593_IList_1_Insert_m34151_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t1517_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34151_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34151_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6593_IList_1_Insert_m34151_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34151_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6593_IList_1_RemoveAt_m34152_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34152_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34152_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6593_IList_1_RemoveAt_m34152_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34152_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6593_IList_1_get_Item_m34148_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
extern void* RuntimeInvoker_ReturnTypeTag_t1517_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34148_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34148_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6593_il2cpp_TypeInfo/* declaring_type */
	, &ReturnTypeTag_t1517_0_0_0/* return_type */
	, RuntimeInvoker_ReturnTypeTag_t1517_Int32_t18/* invoker_method */
	, IList_1_t6593_IList_1_get_Item_m34148_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34148_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ReturnTypeTag_t1517_0_0_0;
static ParameterInfo IList_1_t6593_IList_1_set_Item_m34149_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ReturnTypeTag_t1517_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34149_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34149_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6593_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6593_IList_1_set_Item_m34149_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34149_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6593_MethodInfos[] =
{
	&IList_1_IndexOf_m34150_MethodInfo,
	&IList_1_Insert_m34151_MethodInfo,
	&IList_1_RemoveAt_m34152_MethodInfo,
	&IList_1_get_Item_m34148_MethodInfo,
	&IList_1_set_Item_m34149_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6593_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6592_il2cpp_TypeInfo,
	&IEnumerable_1_t6594_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6593_0_0_0;
extern Il2CppType IList_1_t6593_1_0_0;
struct IList_1_t6593;
extern Il2CppGenericClass IList_1_t6593_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6593_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6593_MethodInfos/* methods */
	, IList_1_t6593_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6593_il2cpp_TypeInfo/* element_class */
	, IList_1_t6593_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6593_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6593_0_0_0/* byval_arg */
	, &IList_1_t6593_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6593_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5041_il2cpp_TypeInfo;

// System.DateTime
#include "mscorlib_System_DateTime.h"


// T System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime>
extern MethodInfo IEnumerator_1_get_Current_m34153_MethodInfo;
static PropertyInfo IEnumerator_1_t5041____Current_PropertyInfo = 
{
	&IEnumerator_1_t5041_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34153_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5041_PropertyInfos[] =
{
	&IEnumerator_1_t5041____Current_PropertyInfo,
	NULL
};
extern Il2CppType DateTime_t458_0_0_0;
extern void* RuntimeInvoker_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34153_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.DateTime>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34153_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5041_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t458_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t458/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34153_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5041_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34153_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5041_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5041_0_0_0;
extern Il2CppType IEnumerator_1_t5041_1_0_0;
struct IEnumerator_1_t5041;
extern Il2CppGenericClass IEnumerator_1_t5041_GenericClass;
TypeInfo IEnumerator_1_t5041_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5041_MethodInfos/* methods */
	, IEnumerator_1_t5041_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5041_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5041_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5041_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5041_0_0_0/* byval_arg */
	, &IEnumerator_1_t5041_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5041_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_516.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3492_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTime>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_516MethodDeclarations.h"

extern TypeInfo DateTime_t458_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19348_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDateTime_t458_m26151_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime>(System.Int32)
 DateTime_t458  Array_InternalArray__get_Item_TisDateTime_t458_m26151 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19344_MethodInfo;
 void InternalEnumerator_1__ctor_m19344 (InternalEnumerator_1_t3492 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345 (InternalEnumerator_1_t3492 * __this, MethodInfo* method){
	{
		DateTime_t458  L_0 = InternalEnumerator_1_get_Current_m19348(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19348_MethodInfo);
		DateTime_t458  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DateTime_t458_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19346_MethodInfo;
 void InternalEnumerator_1_Dispose_m19346 (InternalEnumerator_1_t3492 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19347_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19347 (InternalEnumerator_1_t3492 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
 DateTime_t458  InternalEnumerator_1_get_Current_m19348 (InternalEnumerator_1_t3492 * __this, MethodInfo* method){
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
		DateTime_t458  L_8 = Array_InternalArray__get_Item_TisDateTime_t458_m26151(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDateTime_t458_m26151_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3492____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3492, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3492____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3492, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3492_FieldInfos[] =
{
	&InternalEnumerator_1_t3492____array_0_FieldInfo,
	&InternalEnumerator_1_t3492____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3492____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3492_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3492____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3492_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3492_PropertyInfos[] =
{
	&InternalEnumerator_1_t3492____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3492____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3492_InternalEnumerator_1__ctor_m19344_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19344_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19344_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19344/* method */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3492_InternalEnumerator_1__ctor_m19344_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19344_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DateTime>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345/* method */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19346_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19346_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19346/* method */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19346_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19347_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19347_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19347/* method */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19347_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t458_0_0_0;
extern void* RuntimeInvoker_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19348_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DateTime>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19348_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19348/* method */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t458_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t458/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19348_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3492_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19344_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345_MethodInfo,
	&InternalEnumerator_1_Dispose_m19346_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19347_MethodInfo,
	&InternalEnumerator_1_get_Current_m19348_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3492_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19345_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19347_MethodInfo,
	&InternalEnumerator_1_Dispose_m19346_MethodInfo,
	&InternalEnumerator_1_get_Current_m19348_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3492_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5041_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3492_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5041_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3492_0_0_0;
extern Il2CppType InternalEnumerator_1_t3492_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3492_GenericClass;
TypeInfo InternalEnumerator_1_t3492_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3492_MethodInfos/* methods */
	, InternalEnumerator_1_t3492_PropertyInfos/* properties */
	, InternalEnumerator_1_t3492_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3492_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3492_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3492_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3492_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3492_1_0_0/* this_arg */
	, InternalEnumerator_1_t3492_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3492_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3492)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6595_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime>
extern MethodInfo ICollection_1_get_Count_m34154_MethodInfo;
static PropertyInfo ICollection_1_t6595____Count_PropertyInfo = 
{
	&ICollection_1_t6595_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34154_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34155_MethodInfo;
static PropertyInfo ICollection_1_t6595____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6595_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34155_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6595_PropertyInfos[] =
{
	&ICollection_1_t6595____Count_PropertyInfo,
	&ICollection_1_t6595____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34154_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime>::get_Count()
MethodInfo ICollection_1_get_Count_m34154_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34154_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34155_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34155_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34155_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t458_0_0_0;
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo ICollection_1_t6595_ICollection_1_Add_m34156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34156_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Add(T)
MethodInfo ICollection_1_Add_m34156_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_DateTime_t458/* invoker_method */
	, ICollection_1_t6595_ICollection_1_Add_m34156_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34156_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34157_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::Clear()
MethodInfo ICollection_1_Clear_m34157_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34157_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo ICollection_1_t6595_ICollection_1_Contains_m34158_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34158_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Contains(T)
MethodInfo ICollection_1_Contains_m34158_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTime_t458/* invoker_method */
	, ICollection_1_t6595_ICollection_1_Contains_m34158_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34158_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeU5BU5D_t2090_0_0_0;
extern Il2CppType DateTimeU5BU5D_t2090_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6595_ICollection_1_CopyTo_m34159_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeU5BU5D_t2090_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34159_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34159_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6595_ICollection_1_CopyTo_m34159_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34159_GenericMethod/* genericMethod */

};
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo ICollection_1_t6595_ICollection_1_Remove_m34160_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34160_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime>::Remove(T)
MethodInfo ICollection_1_Remove_m34160_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTime_t458/* invoker_method */
	, ICollection_1_t6595_ICollection_1_Remove_m34160_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34160_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6595_MethodInfos[] =
{
	&ICollection_1_get_Count_m34154_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34155_MethodInfo,
	&ICollection_1_Add_m34156_MethodInfo,
	&ICollection_1_Clear_m34157_MethodInfo,
	&ICollection_1_Contains_m34158_MethodInfo,
	&ICollection_1_CopyTo_m34159_MethodInfo,
	&ICollection_1_Remove_m34160_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6597_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6595_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6597_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6595_0_0_0;
extern Il2CppType ICollection_1_t6595_1_0_0;
struct ICollection_1_t6595;
extern Il2CppGenericClass ICollection_1_t6595_GenericClass;
TypeInfo ICollection_1_t6595_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6595_MethodInfos/* methods */
	, ICollection_1_t6595_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6595_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6595_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6595_0_0_0/* byval_arg */
	, &ICollection_1_t6595_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6595_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime>
extern Il2CppType IEnumerator_1_t5041_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34161_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34161_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6597_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5041_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34161_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6597_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34161_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6597_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6597_0_0_0;
extern Il2CppType IEnumerable_1_t6597_1_0_0;
struct IEnumerable_1_t6597;
extern Il2CppGenericClass IEnumerable_1_t6597_GenericClass;
TypeInfo IEnumerable_1_t6597_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6597_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6597_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6597_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6597_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6597_0_0_0/* byval_arg */
	, &IEnumerable_1_t6597_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6597_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6596_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTime>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTime>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTime>
extern MethodInfo IList_1_get_Item_m34162_MethodInfo;
extern MethodInfo IList_1_set_Item_m34163_MethodInfo;
static PropertyInfo IList_1_t6596____Item_PropertyInfo = 
{
	&IList_1_t6596_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34162_MethodInfo/* get */
	, &IList_1_set_Item_m34163_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6596_PropertyInfos[] =
{
	&IList_1_t6596____Item_PropertyInfo,
	NULL
};
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo IList_1_t6596_IList_1_IndexOf_m34164_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34164_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DateTime>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34164_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6596_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTime_t458/* invoker_method */
	, IList_1_t6596_IList_1_IndexOf_m34164_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34164_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo IList_1_t6596_IList_1_Insert_m34165_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34165_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34165_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_DateTime_t458/* invoker_method */
	, IList_1_t6596_IList_1_Insert_m34165_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34165_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6596_IList_1_RemoveAt_m34166_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34166_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34166_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6596_IList_1_RemoveAt_m34166_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34166_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6596_IList_1_get_Item_m34162_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DateTime_t458_0_0_0;
extern void* RuntimeInvoker_DateTime_t458_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34162_GenericMethod;
// T System.Collections.Generic.IList`1<System.DateTime>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34162_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6596_il2cpp_TypeInfo/* declaring_type */
	, &DateTime_t458_0_0_0/* return_type */
	, RuntimeInvoker_DateTime_t458_Int32_t18/* invoker_method */
	, IList_1_t6596_IList_1_get_Item_m34162_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34162_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo IList_1_t6596_IList_1_set_Item_m34163_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34163_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34163_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_DateTime_t458/* invoker_method */
	, IList_1_t6596_IList_1_set_Item_m34163_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34163_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6596_MethodInfos[] =
{
	&IList_1_IndexOf_m34164_MethodInfo,
	&IList_1_Insert_m34165_MethodInfo,
	&IList_1_RemoveAt_m34166_MethodInfo,
	&IList_1_get_Item_m34162_MethodInfo,
	&IList_1_set_Item_m34163_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6596_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6595_il2cpp_TypeInfo,
	&IEnumerable_1_t6597_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6596_0_0_0;
extern Il2CppType IList_1_t6596_1_0_0;
struct IList_1_t6596;
extern Il2CppGenericClass IList_1_t6596_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6596_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6596_MethodInfos/* methods */
	, IList_1_t6596_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6596_il2cpp_TypeInfo/* element_class */
	, IList_1_t6596_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6596_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6596_0_0_0/* byval_arg */
	, &IList_1_t6596_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6596_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t6598_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>
extern MethodInfo ICollection_1_get_Count_m34167_MethodInfo;
static PropertyInfo ICollection_1_t6598____Count_PropertyInfo = 
{
	&ICollection_1_t6598_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34167_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34168_MethodInfo;
static PropertyInfo ICollection_1_t6598____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6598_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34168_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6598_PropertyInfos[] =
{
	&ICollection_1_t6598____Count_PropertyInfo,
	&ICollection_1_t6598____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34167_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_Count()
MethodInfo ICollection_1_get_Count_m34167_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34167_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34168_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34168_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34168_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2111_0_0_0;
extern Il2CppType IComparable_1_t2111_0_0_0;
static ParameterInfo ICollection_1_t6598_ICollection_1_Add_m34169_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2111_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34169_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Add(T)
MethodInfo ICollection_1_Add_m34169_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6598_ICollection_1_Add_m34169_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34169_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34170_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Clear()
MethodInfo ICollection_1_Clear_m34170_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34170_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2111_0_0_0;
static ParameterInfo ICollection_1_t6598_ICollection_1_Contains_m34171_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2111_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34171_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Contains(T)
MethodInfo ICollection_1_Contains_m34171_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6598_ICollection_1_Contains_m34171_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34171_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t3734_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t3734_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6598_ICollection_1_CopyTo_m34172_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t3734_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34172_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34172_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6598_ICollection_1_CopyTo_m34172_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34172_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2111_0_0_0;
static ParameterInfo ICollection_1_t6598_ICollection_1_Remove_m34173_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2111_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34173_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.DateTime>>::Remove(T)
MethodInfo ICollection_1_Remove_m34173_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6598_ICollection_1_Remove_m34173_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34173_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6598_MethodInfos[] =
{
	&ICollection_1_get_Count_m34167_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34168_MethodInfo,
	&ICollection_1_Add_m34169_MethodInfo,
	&ICollection_1_Clear_m34170_MethodInfo,
	&ICollection_1_Contains_m34171_MethodInfo,
	&ICollection_1_CopyTo_m34172_MethodInfo,
	&ICollection_1_Remove_m34173_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6600_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6598_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6600_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6598_0_0_0;
extern Il2CppType ICollection_1_t6598_1_0_0;
struct ICollection_1_t6598;
extern Il2CppGenericClass ICollection_1_t6598_GenericClass;
TypeInfo ICollection_1_t6598_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6598_MethodInfos/* methods */
	, ICollection_1_t6598_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6598_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6598_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6598_0_0_0/* byval_arg */
	, &ICollection_1_t6598_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6598_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>
extern Il2CppType IEnumerator_1_t5043_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34174_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.DateTime>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34174_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6600_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5043_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34174_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6600_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34174_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6600_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6600_0_0_0;
extern Il2CppType IEnumerable_1_t6600_1_0_0;
struct IEnumerable_1_t6600;
extern Il2CppGenericClass IEnumerable_1_t6600_GenericClass;
TypeInfo IEnumerable_1_t6600_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6600_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6600_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6600_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6600_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6600_0_0_0/* byval_arg */
	, &IEnumerable_1_t6600_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6600_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5043_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>
extern MethodInfo IEnumerator_1_get_Current_m34175_MethodInfo;
static PropertyInfo IEnumerator_1_t5043____Current_PropertyInfo = 
{
	&IEnumerator_1_t5043_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34175_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5043_PropertyInfos[] =
{
	&IEnumerator_1_t5043____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2111_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34175_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34175_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5043_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2111_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34175_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5043_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34175_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5043_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5043_0_0_0;
extern Il2CppType IEnumerator_1_t5043_1_0_0;
struct IEnumerator_1_t5043;
extern Il2CppGenericClass IEnumerator_1_t5043_GenericClass;
TypeInfo IEnumerator_1_t5043_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5043_MethodInfos/* methods */
	, IEnumerator_1_t5043_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5043_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5043_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5043_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5043_0_0_0/* byval_arg */
	, &IEnumerator_1_t5043_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5043_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2111_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.DateTime>
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo IComparable_1_t2111_IComparable_1_CompareTo_m34176_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m34176_GenericMethod;
// System.Int32 System.IComparable`1<System.DateTime>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m34176_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2111_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTime_t458/* invoker_method */
	, IComparable_1_t2111_IComparable_1_CompareTo_m34176_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m34176_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2111_MethodInfos[] =
{
	&IComparable_1_CompareTo_m34176_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2111_1_0_0;
struct IComparable_1_t2111;
extern Il2CppGenericClass IComparable_1_t2111_GenericClass;
TypeInfo IComparable_1_t2111_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2111_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2111_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2111_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2111_0_0_0/* byval_arg */
	, &IComparable_1_t2111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2111_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_517.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3493_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_517MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m19353_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2111_m26162_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m19779_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19779(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2111_m26162(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3493____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3493, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3493____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3493, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3493_FieldInfos[] =
{
	&InternalEnumerator_1_t3493____array_0_FieldInfo,
	&InternalEnumerator_1_t3493____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19350_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3493____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3493_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19350_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3493____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3493_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19353_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3493_PropertyInfos[] =
{
	&InternalEnumerator_1_t3493____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3493____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3493_InternalEnumerator_1__ctor_m19349_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19349_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19349_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3493_InternalEnumerator_1__ctor_m19349_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19349_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19350_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19350_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19350_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19351_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19351_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19351_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19352_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19352_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19352_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2111_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19353_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.DateTime>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19353_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2111_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19353_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3493_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19349_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19350_MethodInfo,
	&InternalEnumerator_1_Dispose_m19351_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19352_MethodInfo,
	&InternalEnumerator_1_get_Current_m19353_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19352_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19351_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3493_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19350_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19352_MethodInfo,
	&InternalEnumerator_1_Dispose_m19351_MethodInfo,
	&InternalEnumerator_1_get_Current_m19353_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3493_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5043_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3493_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5043_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2111_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3493_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19353_MethodInfo/* Method Usage */,
	&IComparable_1_t2111_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2111_m26162_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3493_0_0_0;
extern Il2CppType InternalEnumerator_1_t3493_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3493_GenericClass;
TypeInfo InternalEnumerator_1_t3493_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3493_MethodInfos/* methods */
	, InternalEnumerator_1_t3493_PropertyInfos/* properties */
	, InternalEnumerator_1_t3493_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3493_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3493_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3493_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3493_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3493_1_0_0/* this_arg */
	, InternalEnumerator_1_t3493_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3493_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3493_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3493)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t6599_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>
extern MethodInfo IList_1_get_Item_m34177_MethodInfo;
extern MethodInfo IList_1_set_Item_m34178_MethodInfo;
static PropertyInfo IList_1_t6599____Item_PropertyInfo = 
{
	&IList_1_t6599_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34177_MethodInfo/* get */
	, &IList_1_set_Item_m34178_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6599_PropertyInfos[] =
{
	&IList_1_t6599____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2111_0_0_0;
static ParameterInfo IList_1_t6599_IList_1_IndexOf_m34179_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2111_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34179_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34179_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6599_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6599_IList_1_IndexOf_m34179_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34179_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IComparable_1_t2111_0_0_0;
static ParameterInfo IList_1_t6599_IList_1_Insert_m34180_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2111_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34180_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34180_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6599_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6599_IList_1_Insert_m34180_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34180_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6599_IList_1_RemoveAt_m34181_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34181_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34181_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6599_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6599_IList_1_RemoveAt_m34181_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34181_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6599_IList_1_get_Item_m34177_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IComparable_1_t2111_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34177_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34177_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6599_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2111_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6599_IList_1_get_Item_m34177_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34177_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IComparable_1_t2111_0_0_0;
static ParameterInfo IList_1_t6599_IList_1_set_Item_m34178_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2111_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34178_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.DateTime>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34178_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6599_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6599_IList_1_set_Item_m34178_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34178_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6599_MethodInfos[] =
{
	&IList_1_IndexOf_m34179_MethodInfo,
	&IList_1_Insert_m34180_MethodInfo,
	&IList_1_RemoveAt_m34181_MethodInfo,
	&IList_1_get_Item_m34177_MethodInfo,
	&IList_1_set_Item_m34178_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6599_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6598_il2cpp_TypeInfo,
	&IEnumerable_1_t6600_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6599_0_0_0;
extern Il2CppType IList_1_t6599_1_0_0;
struct IList_1_t6599;
extern Il2CppGenericClass IList_1_t6599_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6599_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6599_MethodInfos/* methods */
	, IList_1_t6599_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6599_il2cpp_TypeInfo/* element_class */
	, IList_1_t6599_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6599_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6599_0_0_0/* byval_arg */
	, &IList_1_t6599_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6599_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t6601_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo ICollection_1_get_Count_m34182_MethodInfo;
static PropertyInfo ICollection_1_t6601____Count_PropertyInfo = 
{
	&ICollection_1_t6601_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34182_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34183_MethodInfo;
static PropertyInfo ICollection_1_t6601____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6601_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34183_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6601_PropertyInfos[] =
{
	&ICollection_1_t6601____Count_PropertyInfo,
	&ICollection_1_t6601____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34182_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_Count()
MethodInfo ICollection_1_get_Count_m34182_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34182_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34183_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34183_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34183_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2112_0_0_0;
extern Il2CppType IEquatable_1_t2112_0_0_0;
static ParameterInfo ICollection_1_t6601_ICollection_1_Add_m34184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2112_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34184_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Add(T)
MethodInfo ICollection_1_Add_m34184_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6601_ICollection_1_Add_m34184_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34184_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34185_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Clear()
MethodInfo ICollection_1_Clear_m34185_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34185_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2112_0_0_0;
static ParameterInfo ICollection_1_t6601_ICollection_1_Contains_m34186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2112_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34186_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Contains(T)
MethodInfo ICollection_1_Contains_m34186_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6601_ICollection_1_Contains_m34186_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34186_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t3735_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t3735_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6601_ICollection_1_CopyTo_m34187_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t3735_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34187_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34187_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6601_ICollection_1_CopyTo_m34187_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34187_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2112_0_0_0;
static ParameterInfo ICollection_1_t6601_ICollection_1_Remove_m34188_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2112_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34188_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.DateTime>>::Remove(T)
MethodInfo ICollection_1_Remove_m34188_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6601_ICollection_1_Remove_m34188_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34188_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6601_MethodInfos[] =
{
	&ICollection_1_get_Count_m34182_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34183_MethodInfo,
	&ICollection_1_Add_m34184_MethodInfo,
	&ICollection_1_Clear_m34185_MethodInfo,
	&ICollection_1_Contains_m34186_MethodInfo,
	&ICollection_1_CopyTo_m34187_MethodInfo,
	&ICollection_1_Remove_m34188_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6603_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6601_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6603_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6601_0_0_0;
extern Il2CppType ICollection_1_t6601_1_0_0;
struct ICollection_1_t6601;
extern Il2CppGenericClass ICollection_1_t6601_GenericClass;
TypeInfo ICollection_1_t6601_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6601_MethodInfos/* methods */
	, ICollection_1_t6601_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6601_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6601_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6601_0_0_0/* byval_arg */
	, &ICollection_1_t6601_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6601_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>
extern Il2CppType IEnumerator_1_t5045_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34189_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.DateTime>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34189_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6603_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5045_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34189_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6603_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34189_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6603_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6603_0_0_0;
extern Il2CppType IEnumerable_1_t6603_1_0_0;
struct IEnumerable_1_t6603;
extern Il2CppGenericClass IEnumerable_1_t6603_GenericClass;
TypeInfo IEnumerable_1_t6603_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6603_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6603_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6603_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6603_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6603_0_0_0/* byval_arg */
	, &IEnumerable_1_t6603_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6603_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5045_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo IEnumerator_1_get_Current_m34190_MethodInfo;
static PropertyInfo IEnumerator_1_t5045____Current_PropertyInfo = 
{
	&IEnumerator_1_t5045_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34190_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5045_PropertyInfos[] =
{
	&IEnumerator_1_t5045____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2112_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34190_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34190_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5045_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2112_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34190_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5045_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34190_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5045_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5045_0_0_0;
extern Il2CppType IEnumerator_1_t5045_1_0_0;
struct IEnumerator_1_t5045;
extern Il2CppGenericClass IEnumerator_1_t5045_GenericClass;
TypeInfo IEnumerator_1_t5045_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5045_MethodInfos/* methods */
	, IEnumerator_1_t5045_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5045_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5045_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5045_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5045_0_0_0/* byval_arg */
	, &IEnumerator_1_t5045_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5045_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2112_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.DateTime>::Equals(T)
// Metadata Definition System.IEquatable`1<System.DateTime>
extern Il2CppType DateTime_t458_0_0_0;
static ParameterInfo IEquatable_1_t2112_IEquatable_1_Equals_m34191_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t458_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTime_t458 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m34191_GenericMethod;
// System.Boolean System.IEquatable`1<System.DateTime>::Equals(T)
MethodInfo IEquatable_1_Equals_m34191_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2112_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTime_t458/* invoker_method */
	, IEquatable_1_t2112_IEquatable_1_Equals_m34191_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m34191_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2112_MethodInfos[] =
{
	&IEquatable_1_Equals_m34191_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2112_1_0_0;
struct IEquatable_1_t2112;
extern Il2CppGenericClass IEquatable_1_t2112_GenericClass;
TypeInfo IEquatable_1_t2112_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2112_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2112_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2112_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2112_0_0_0/* byval_arg */
	, &IEquatable_1_t2112_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2112_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_518.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3494_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_518MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m19358_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2112_m26173_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.DateTime>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2112_m26173(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3494____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3494, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3494____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3494, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3494_FieldInfos[] =
{
	&InternalEnumerator_1_t3494____array_0_FieldInfo,
	&InternalEnumerator_1_t3494____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19355_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3494____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3494_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19355_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3494____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3494_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19358_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3494_PropertyInfos[] =
{
	&InternalEnumerator_1_t3494____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3494____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3494_InternalEnumerator_1__ctor_m19354_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19354_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19354_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3494_InternalEnumerator_1__ctor_m19354_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19354_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19355_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19355_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19355_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19356_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19356_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19356_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19357_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19357_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19357_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2112_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19358_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.DateTime>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19358_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2112_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19358_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3494_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19354_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19355_MethodInfo,
	&InternalEnumerator_1_Dispose_m19356_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19357_MethodInfo,
	&InternalEnumerator_1_get_Current_m19358_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19357_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19356_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3494_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19355_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19357_MethodInfo,
	&InternalEnumerator_1_Dispose_m19356_MethodInfo,
	&InternalEnumerator_1_get_Current_m19358_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3494_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5045_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3494_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5045_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2112_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3494_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19358_MethodInfo/* Method Usage */,
	&IEquatable_1_t2112_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2112_m26173_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3494_0_0_0;
extern Il2CppType InternalEnumerator_1_t3494_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3494_GenericClass;
TypeInfo InternalEnumerator_1_t3494_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3494_MethodInfos/* methods */
	, InternalEnumerator_1_t3494_PropertyInfos/* properties */
	, InternalEnumerator_1_t3494_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3494_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3494_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3494_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3494_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3494_1_0_0/* this_arg */
	, InternalEnumerator_1_t3494_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3494_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3494_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3494)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t6602_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>
extern MethodInfo IList_1_get_Item_m34192_MethodInfo;
extern MethodInfo IList_1_set_Item_m34193_MethodInfo;
static PropertyInfo IList_1_t6602____Item_PropertyInfo = 
{
	&IList_1_t6602_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34192_MethodInfo/* get */
	, &IList_1_set_Item_m34193_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6602_PropertyInfos[] =
{
	&IList_1_t6602____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2112_0_0_0;
static ParameterInfo IList_1_t6602_IList_1_IndexOf_m34194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2112_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34194_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34194_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6602_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6602_IList_1_IndexOf_m34194_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34194_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IEquatable_1_t2112_0_0_0;
static ParameterInfo IList_1_t6602_IList_1_Insert_m34195_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2112_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34195_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34195_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6602_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6602_IList_1_Insert_m34195_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34195_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6602_IList_1_RemoveAt_m34196_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34196_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34196_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6602_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6602_IList_1_RemoveAt_m34196_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34196_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6602_IList_1_get_Item_m34192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IEquatable_1_t2112_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34192_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34192_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6602_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2112_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6602_IList_1_get_Item_m34192_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34192_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IEquatable_1_t2112_0_0_0;
static ParameterInfo IList_1_t6602_IList_1_set_Item_m34193_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2112_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34193_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.DateTime>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34193_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6602_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6602_IList_1_set_Item_m34193_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34193_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6602_MethodInfos[] =
{
	&IList_1_IndexOf_m34194_MethodInfo,
	&IList_1_Insert_m34195_MethodInfo,
	&IList_1_RemoveAt_m34196_MethodInfo,
	&IList_1_get_Item_m34192_MethodInfo,
	&IList_1_set_Item_m34193_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6602_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6601_il2cpp_TypeInfo,
	&IEnumerable_1_t6603_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6602_0_0_0;
extern Il2CppType IList_1_t6602_1_0_0;
struct IList_1_t6602;
extern Il2CppGenericClass IList_1_t6602_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6602_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6602_MethodInfos/* methods */
	, IList_1_t6602_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6602_il2cpp_TypeInfo/* element_class */
	, IList_1_t6602_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6602_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6602_0_0_0/* byval_arg */
	, &IList_1_t6602_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6602_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5046_il2cpp_TypeInfo;

// System.Decimal
#include "mscorlib_System_Decimal.h"


// T System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Decimal>
extern MethodInfo IEnumerator_1_get_Current_m34197_MethodInfo;
static PropertyInfo IEnumerator_1_t5046____Current_PropertyInfo = 
{
	&IEnumerator_1_t5046_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34197_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5046_PropertyInfos[] =
{
	&IEnumerator_1_t5046____Current_PropertyInfo,
	NULL
};
extern Il2CppType Decimal_t1145_0_0_0;
extern void* RuntimeInvoker_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34197_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Decimal>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34197_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5046_il2cpp_TypeInfo/* declaring_type */
	, &Decimal_t1145_0_0_0/* return_type */
	, RuntimeInvoker_Decimal_t1145/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34197_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5046_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34197_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5046_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5046_0_0_0;
extern Il2CppType IEnumerator_1_t5046_1_0_0;
struct IEnumerator_1_t5046;
extern Il2CppGenericClass IEnumerator_1_t5046_GenericClass;
TypeInfo IEnumerator_1_t5046_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5046_MethodInfos/* methods */
	, IEnumerator_1_t5046_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5046_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5046_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5046_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5046_0_0_0/* byval_arg */
	, &IEnumerator_1_t5046_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5046_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_519.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3495_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Decimal>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_519MethodDeclarations.h"

extern TypeInfo Decimal_t1145_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19363_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDecimal_t1145_m26184_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Decimal>(System.Int32)
 Decimal_t1145  Array_InternalArray__get_Item_TisDecimal_t1145_m26184 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19359_MethodInfo;
 void InternalEnumerator_1__ctor_m19359 (InternalEnumerator_1_t3495 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
	{
		Decimal_t1145  L_0 = InternalEnumerator_1_get_Current_m19363(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19363_MethodInfo);
		Decimal_t1145  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Decimal_t1145_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19361_MethodInfo;
 void InternalEnumerator_1_Dispose_m19361 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19362_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19362 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
 Decimal_t1145  InternalEnumerator_1_get_Current_m19363 (InternalEnumerator_1_t3495 * __this, MethodInfo* method){
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
		Decimal_t1145  L_8 = Array_InternalArray__get_Item_TisDecimal_t1145_m26184(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDecimal_t1145_m26184_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Decimal>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3495____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3495, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3495____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3495, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3495_FieldInfos[] =
{
	&InternalEnumerator_1_t3495____array_0_FieldInfo,
	&InternalEnumerator_1_t3495____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3495____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3495____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3495_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3495_PropertyInfos[] =
{
	&InternalEnumerator_1_t3495____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3495____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3495_InternalEnumerator_1__ctor_m19359_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19359_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19359_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19359/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3495_InternalEnumerator_1__ctor_m19359_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19359_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Decimal>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19361_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Decimal>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19361_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19361/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19361_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19362_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Decimal>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19362_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19362/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19362_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t1145_0_0_0;
extern void* RuntimeInvoker_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19363_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Decimal>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19363_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19363/* method */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* declaring_type */
	, &Decimal_t1145_0_0_0/* return_type */
	, RuntimeInvoker_Decimal_t1145/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19363_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3495_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19359_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360_MethodInfo,
	&InternalEnumerator_1_Dispose_m19361_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19362_MethodInfo,
	&InternalEnumerator_1_get_Current_m19363_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3495_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19360_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19362_MethodInfo,
	&InternalEnumerator_1_Dispose_m19361_MethodInfo,
	&InternalEnumerator_1_get_Current_m19363_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3495_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5046_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3495_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5046_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3495_0_0_0;
extern Il2CppType InternalEnumerator_1_t3495_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3495_GenericClass;
TypeInfo InternalEnumerator_1_t3495_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3495_MethodInfos/* methods */
	, InternalEnumerator_1_t3495_PropertyInfos/* properties */
	, InternalEnumerator_1_t3495_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3495_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3495_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3495_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3495_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3495_1_0_0/* this_arg */
	, InternalEnumerator_1_t3495_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3495_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3495)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6604_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Decimal>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Decimal>
extern MethodInfo ICollection_1_get_Count_m34198_MethodInfo;
static PropertyInfo ICollection_1_t6604____Count_PropertyInfo = 
{
	&ICollection_1_t6604_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34198_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34199_MethodInfo;
static PropertyInfo ICollection_1_t6604____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6604_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34199_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6604_PropertyInfos[] =
{
	&ICollection_1_t6604____Count_PropertyInfo,
	&ICollection_1_t6604____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34198_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Decimal>::get_Count()
MethodInfo ICollection_1_get_Count_m34198_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34198_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34199_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34199_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34199_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t1145_0_0_0;
extern Il2CppType Decimal_t1145_0_0_0;
static ParameterInfo ICollection_1_t6604_ICollection_1_Add_m34200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t1145_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34200_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Add(T)
MethodInfo ICollection_1_Add_m34200_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Decimal_t1145/* invoker_method */
	, ICollection_1_t6604_ICollection_1_Add_m34200_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34200_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34201_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::Clear()
MethodInfo ICollection_1_Clear_m34201_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34201_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t1145_0_0_0;
static ParameterInfo ICollection_1_t6604_ICollection_1_Contains_m34202_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t1145_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34202_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Contains(T)
MethodInfo ICollection_1_Contains_m34202_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Decimal_t1145/* invoker_method */
	, ICollection_1_t6604_ICollection_1_Contains_m34202_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34202_GenericMethod/* genericMethod */

};
extern Il2CppType DecimalU5BU5D_t2091_0_0_0;
extern Il2CppType DecimalU5BU5D_t2091_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6604_ICollection_1_CopyTo_m34203_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DecimalU5BU5D_t2091_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34203_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Decimal>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34203_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6604_ICollection_1_CopyTo_m34203_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34203_GenericMethod/* genericMethod */

};
extern Il2CppType Decimal_t1145_0_0_0;
static ParameterInfo ICollection_1_t6604_ICollection_1_Remove_m34204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t1145_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34204_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Decimal>::Remove(T)
MethodInfo ICollection_1_Remove_m34204_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Decimal_t1145/* invoker_method */
	, ICollection_1_t6604_ICollection_1_Remove_m34204_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34204_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6604_MethodInfos[] =
{
	&ICollection_1_get_Count_m34198_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34199_MethodInfo,
	&ICollection_1_Add_m34200_MethodInfo,
	&ICollection_1_Clear_m34201_MethodInfo,
	&ICollection_1_Contains_m34202_MethodInfo,
	&ICollection_1_CopyTo_m34203_MethodInfo,
	&ICollection_1_Remove_m34204_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6606_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6604_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6606_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6604_0_0_0;
extern Il2CppType ICollection_1_t6604_1_0_0;
struct ICollection_1_t6604;
extern Il2CppGenericClass ICollection_1_t6604_GenericClass;
TypeInfo ICollection_1_t6604_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6604_MethodInfos/* methods */
	, ICollection_1_t6604_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6604_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6604_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6604_0_0_0/* byval_arg */
	, &ICollection_1_t6604_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6604_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Decimal>
extern Il2CppType IEnumerator_1_t5046_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34205_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Decimal>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34205_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6606_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5046_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34205_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6606_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34205_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6606_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6606_0_0_0;
extern Il2CppType IEnumerable_1_t6606_1_0_0;
struct IEnumerable_1_t6606;
extern Il2CppGenericClass IEnumerable_1_t6606_GenericClass;
TypeInfo IEnumerable_1_t6606_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6606_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6606_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6606_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6606_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6606_0_0_0/* byval_arg */
	, &IEnumerable_1_t6606_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6606_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6605_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Decimal>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Decimal>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Decimal>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Decimal>
extern MethodInfo IList_1_get_Item_m34206_MethodInfo;
extern MethodInfo IList_1_set_Item_m34207_MethodInfo;
static PropertyInfo IList_1_t6605____Item_PropertyInfo = 
{
	&IList_1_t6605_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34206_MethodInfo/* get */
	, &IList_1_set_Item_m34207_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6605_PropertyInfos[] =
{
	&IList_1_t6605____Item_PropertyInfo,
	NULL
};
extern Il2CppType Decimal_t1145_0_0_0;
static ParameterInfo IList_1_t6605_IList_1_IndexOf_m34208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t1145_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34208_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Decimal>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34208_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6605_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Decimal_t1145/* invoker_method */
	, IList_1_t6605_IList_1_IndexOf_m34208_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34208_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Decimal_t1145_0_0_0;
static ParameterInfo IList_1_t6605_IList_1_Insert_m34209_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Decimal_t1145_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34209_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Decimal>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34209_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Decimal_t1145/* invoker_method */
	, IList_1_t6605_IList_1_Insert_m34209_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34209_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6605_IList_1_RemoveAt_m34210_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34210_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Decimal>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34210_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6605_IList_1_RemoveAt_m34210_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34210_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6605_IList_1_get_Item_m34206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Decimal_t1145_0_0_0;
extern void* RuntimeInvoker_Decimal_t1145_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34206_GenericMethod;
// T System.Collections.Generic.IList`1<System.Decimal>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34206_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6605_il2cpp_TypeInfo/* declaring_type */
	, &Decimal_t1145_0_0_0/* return_type */
	, RuntimeInvoker_Decimal_t1145_Int32_t18/* invoker_method */
	, IList_1_t6605_IList_1_get_Item_m34206_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34206_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Decimal_t1145_0_0_0;
static ParameterInfo IList_1_t6605_IList_1_set_Item_m34207_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Decimal_t1145_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Decimal_t1145 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34207_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Decimal>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34207_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Decimal_t1145/* invoker_method */
	, IList_1_t6605_IList_1_set_Item_m34207_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34207_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6605_MethodInfos[] =
{
	&IList_1_IndexOf_m34208_MethodInfo,
	&IList_1_Insert_m34209_MethodInfo,
	&IList_1_RemoveAt_m34210_MethodInfo,
	&IList_1_get_Item_m34206_MethodInfo,
	&IList_1_set_Item_m34207_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6605_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6604_il2cpp_TypeInfo,
	&IEnumerable_1_t6606_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6605_0_0_0;
extern Il2CppType IList_1_t6605_1_0_0;
struct IList_1_t6605;
extern Il2CppGenericClass IList_1_t6605_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6605_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6605_MethodInfos/* methods */
	, IList_1_t6605_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6605_il2cpp_TypeInfo/* element_class */
	, IList_1_t6605_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6605_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6605_0_0_0/* byval_arg */
	, &IList_1_t6605_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6605_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t6607_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>
extern MethodInfo ICollection_1_get_Count_m34211_MethodInfo;
static PropertyInfo ICollection_1_t6607____Count_PropertyInfo = 
{
	&ICollection_1_t6607_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34211_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34212_MethodInfo;
static PropertyInfo ICollection_1_t6607____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6607_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34212_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6607_PropertyInfos[] =
{
	&ICollection_1_t6607____Count_PropertyInfo,
	&ICollection_1_t6607____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34211_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_Count()
MethodInfo ICollection_1_get_Count_m34211_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34211_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34212_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34212_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34212_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t1795_0_0_0;
extern Il2CppType IComparable_1_t1795_0_0_0;
static ParameterInfo ICollection_1_t6607_ICollection_1_Add_m34213_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t1795_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34213_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Add(T)
MethodInfo ICollection_1_Add_m34213_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6607_ICollection_1_Add_m34213_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34213_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34214_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Clear()
MethodInfo ICollection_1_Clear_m34214_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34214_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t1795_0_0_0;
static ParameterInfo ICollection_1_t6607_ICollection_1_Contains_m34215_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t1795_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34215_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Contains(T)
MethodInfo ICollection_1_Contains_m34215_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6607_ICollection_1_Contains_m34215_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34215_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t3736_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t3736_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6607_ICollection_1_CopyTo_m34216_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t3736_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34216_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34216_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6607_ICollection_1_CopyTo_m34216_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34216_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t1795_0_0_0;
static ParameterInfo ICollection_1_t6607_ICollection_1_Remove_m34217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t1795_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34217_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Decimal>>::Remove(T)
MethodInfo ICollection_1_Remove_m34217_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6607_ICollection_1_Remove_m34217_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34217_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6607_MethodInfos[] =
{
	&ICollection_1_get_Count_m34211_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34212_MethodInfo,
	&ICollection_1_Add_m34213_MethodInfo,
	&ICollection_1_Clear_m34214_MethodInfo,
	&ICollection_1_Contains_m34215_MethodInfo,
	&ICollection_1_CopyTo_m34216_MethodInfo,
	&ICollection_1_Remove_m34217_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6609_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6607_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6609_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6607_0_0_0;
extern Il2CppType ICollection_1_t6607_1_0_0;
struct ICollection_1_t6607;
extern Il2CppGenericClass ICollection_1_t6607_GenericClass;
TypeInfo ICollection_1_t6607_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6607_MethodInfos/* methods */
	, ICollection_1_t6607_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6607_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6607_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6607_0_0_0/* byval_arg */
	, &ICollection_1_t6607_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6607_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>
extern Il2CppType IEnumerator_1_t5048_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34218_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Decimal>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34218_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6609_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5048_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34218_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6609_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34218_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6609_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6609_0_0_0;
extern Il2CppType IEnumerable_1_t6609_1_0_0;
struct IEnumerable_1_t6609;
extern Il2CppGenericClass IEnumerable_1_t6609_GenericClass;
TypeInfo IEnumerable_1_t6609_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6609_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6609_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6609_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6609_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6609_0_0_0/* byval_arg */
	, &IEnumerable_1_t6609_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6609_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5048_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>
extern MethodInfo IEnumerator_1_get_Current_m34219_MethodInfo;
static PropertyInfo IEnumerator_1_t5048____Current_PropertyInfo = 
{
	&IEnumerator_1_t5048_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34219_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5048_PropertyInfos[] =
{
	&IEnumerator_1_t5048____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t1795_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34219_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34219_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5048_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t1795_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34219_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5048_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34219_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5048_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5048_0_0_0;
extern Il2CppType IEnumerator_1_t5048_1_0_0;
struct IEnumerator_1_t5048;
extern Il2CppGenericClass IEnumerator_1_t5048_GenericClass;
TypeInfo IEnumerator_1_t5048_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5048_MethodInfos/* methods */
	, IEnumerator_1_t5048_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5048_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5048_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5048_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5048_0_0_0/* byval_arg */
	, &IEnumerator_1_t5048_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5048_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_520.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3496_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_520MethodDeclarations.h"

extern TypeInfo IComparable_1_t1795_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19368_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t1795_m26195_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t1795_m26195(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3496____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3496, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3496____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3496, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3496_FieldInfos[] =
{
	&InternalEnumerator_1_t3496____array_0_FieldInfo,
	&InternalEnumerator_1_t3496____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19365_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3496____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19365_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3496____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3496_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19368_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3496_PropertyInfos[] =
{
	&InternalEnumerator_1_t3496____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3496____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3496_InternalEnumerator_1__ctor_m19364_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19364_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19364_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3496_InternalEnumerator_1__ctor_m19364_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19364_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19365_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19365_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19365_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19366_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19366_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19366_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19367_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19367_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19367_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t1795_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19368_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Decimal>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19368_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t1795_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19368_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3496_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19364_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19365_MethodInfo,
	&InternalEnumerator_1_Dispose_m19366_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19367_MethodInfo,
	&InternalEnumerator_1_get_Current_m19368_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19367_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19366_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3496_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19365_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19367_MethodInfo,
	&InternalEnumerator_1_Dispose_m19366_MethodInfo,
	&InternalEnumerator_1_get_Current_m19368_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3496_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5048_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3496_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5048_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t1795_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3496_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19368_MethodInfo/* Method Usage */,
	&IComparable_1_t1795_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t1795_m26195_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3496_0_0_0;
extern Il2CppType InternalEnumerator_1_t3496_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3496_GenericClass;
TypeInfo InternalEnumerator_1_t3496_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3496_MethodInfos/* methods */
	, InternalEnumerator_1_t3496_PropertyInfos/* properties */
	, InternalEnumerator_1_t3496_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3496_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3496_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3496_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3496_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3496_1_0_0/* this_arg */
	, InternalEnumerator_1_t3496_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3496_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3496_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3496)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t6608_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>
extern MethodInfo IList_1_get_Item_m34220_MethodInfo;
extern MethodInfo IList_1_set_Item_m34221_MethodInfo;
static PropertyInfo IList_1_t6608____Item_PropertyInfo = 
{
	&IList_1_t6608_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34220_MethodInfo/* get */
	, &IList_1_set_Item_m34221_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6608_PropertyInfos[] =
{
	&IList_1_t6608____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t1795_0_0_0;
static ParameterInfo IList_1_t6608_IList_1_IndexOf_m34222_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t1795_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34222_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34222_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6608_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6608_IList_1_IndexOf_m34222_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34222_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IComparable_1_t1795_0_0_0;
static ParameterInfo IList_1_t6608_IList_1_Insert_m34223_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t1795_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34223_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34223_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6608_IList_1_Insert_m34223_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34223_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6608_IList_1_RemoveAt_m34224_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34224_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34224_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6608_IList_1_RemoveAt_m34224_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34224_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6608_IList_1_get_Item_m34220_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IComparable_1_t1795_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34220_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34220_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6608_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t1795_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6608_IList_1_get_Item_m34220_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34220_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IComparable_1_t1795_0_0_0;
static ParameterInfo IList_1_t6608_IList_1_set_Item_m34221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t1795_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34221_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Decimal>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34221_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6608_IList_1_set_Item_m34221_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34221_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6608_MethodInfos[] =
{
	&IList_1_IndexOf_m34222_MethodInfo,
	&IList_1_Insert_m34223_MethodInfo,
	&IList_1_RemoveAt_m34224_MethodInfo,
	&IList_1_get_Item_m34220_MethodInfo,
	&IList_1_set_Item_m34221_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6608_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6607_il2cpp_TypeInfo,
	&IEnumerable_1_t6609_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6608_0_0_0;
extern Il2CppType IList_1_t6608_1_0_0;
struct IList_1_t6608;
extern Il2CppGenericClass IList_1_t6608_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6608_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6608_MethodInfos/* methods */
	, IList_1_t6608_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6608_il2cpp_TypeInfo/* element_class */
	, IList_1_t6608_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6608_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6608_0_0_0/* byval_arg */
	, &IList_1_t6608_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6608_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t6610_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo ICollection_1_get_Count_m34225_MethodInfo;
static PropertyInfo ICollection_1_t6610____Count_PropertyInfo = 
{
	&ICollection_1_t6610_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34225_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34226_MethodInfo;
static PropertyInfo ICollection_1_t6610____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6610_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34226_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6610_PropertyInfos[] =
{
	&ICollection_1_t6610____Count_PropertyInfo,
	&ICollection_1_t6610____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34225_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_Count()
MethodInfo ICollection_1_get_Count_m34225_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34225_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34226_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34226_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34226_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t1796_0_0_0;
extern Il2CppType IEquatable_1_t1796_0_0_0;
static ParameterInfo ICollection_1_t6610_ICollection_1_Add_m34227_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t1796_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34227_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Add(T)
MethodInfo ICollection_1_Add_m34227_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6610_ICollection_1_Add_m34227_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34227_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34228_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Clear()
MethodInfo ICollection_1_Clear_m34228_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34228_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t1796_0_0_0;
static ParameterInfo ICollection_1_t6610_ICollection_1_Contains_m34229_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t1796_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34229_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Contains(T)
MethodInfo ICollection_1_Contains_m34229_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6610_ICollection_1_Contains_m34229_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34229_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t3737_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t3737_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6610_ICollection_1_CopyTo_m34230_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t3737_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34230_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34230_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6610_ICollection_1_CopyTo_m34230_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34230_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t1796_0_0_0;
static ParameterInfo ICollection_1_t6610_ICollection_1_Remove_m34231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t1796_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34231_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Decimal>>::Remove(T)
MethodInfo ICollection_1_Remove_m34231_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6610_ICollection_1_Remove_m34231_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34231_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6610_MethodInfos[] =
{
	&ICollection_1_get_Count_m34225_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34226_MethodInfo,
	&ICollection_1_Add_m34227_MethodInfo,
	&ICollection_1_Clear_m34228_MethodInfo,
	&ICollection_1_Contains_m34229_MethodInfo,
	&ICollection_1_CopyTo_m34230_MethodInfo,
	&ICollection_1_Remove_m34231_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6612_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6610_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6612_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6610_0_0_0;
extern Il2CppType ICollection_1_t6610_1_0_0;
struct ICollection_1_t6610;
extern Il2CppGenericClass ICollection_1_t6610_GenericClass;
TypeInfo ICollection_1_t6610_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6610_MethodInfos/* methods */
	, ICollection_1_t6610_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6610_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6610_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6610_0_0_0/* byval_arg */
	, &ICollection_1_t6610_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6610_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>
extern Il2CppType IEnumerator_1_t5050_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34232_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Decimal>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34232_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6612_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5050_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34232_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6612_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34232_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6612_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6612_0_0_0;
extern Il2CppType IEnumerable_1_t6612_1_0_0;
struct IEnumerable_1_t6612;
extern Il2CppGenericClass IEnumerable_1_t6612_GenericClass;
TypeInfo IEnumerable_1_t6612_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6612_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6612_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6612_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6612_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6612_0_0_0/* byval_arg */
	, &IEnumerable_1_t6612_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6612_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5050_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo IEnumerator_1_get_Current_m34233_MethodInfo;
static PropertyInfo IEnumerator_1_t5050____Current_PropertyInfo = 
{
	&IEnumerator_1_t5050_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34233_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5050_PropertyInfos[] =
{
	&IEnumerator_1_t5050____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t1796_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34233_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34233_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5050_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t1796_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34233_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5050_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34233_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5050_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5050_0_0_0;
extern Il2CppType IEnumerator_1_t5050_1_0_0;
struct IEnumerator_1_t5050;
extern Il2CppGenericClass IEnumerator_1_t5050_GenericClass;
TypeInfo IEnumerator_1_t5050_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5050_MethodInfos/* methods */
	, IEnumerator_1_t5050_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5050_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5050_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5050_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5050_0_0_0/* byval_arg */
	, &IEnumerator_1_t5050_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5050_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_521.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3497_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_521MethodDeclarations.h"

extern TypeInfo IEquatable_1_t1796_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19373_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t1796_m26206_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Decimal>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t1796_m26206(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3497____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3497, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3497____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3497, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3497_FieldInfos[] =
{
	&InternalEnumerator_1_t3497____array_0_FieldInfo,
	&InternalEnumerator_1_t3497____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19370_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3497____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19370_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3497____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3497_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19373_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3497_PropertyInfos[] =
{
	&InternalEnumerator_1_t3497____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3497____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3497_InternalEnumerator_1__ctor_m19369_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19369_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19369_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3497_InternalEnumerator_1__ctor_m19369_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19369_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19370_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19370_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19370_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19371_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19371_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19371_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19372_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19372_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19372_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t1796_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19373_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Decimal>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19373_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t1796_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19373_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3497_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19369_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19370_MethodInfo,
	&InternalEnumerator_1_Dispose_m19371_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19372_MethodInfo,
	&InternalEnumerator_1_get_Current_m19373_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19372_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19371_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3497_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19370_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19372_MethodInfo,
	&InternalEnumerator_1_Dispose_m19371_MethodInfo,
	&InternalEnumerator_1_get_Current_m19373_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3497_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5050_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3497_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5050_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t1796_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3497_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19373_MethodInfo/* Method Usage */,
	&IEquatable_1_t1796_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t1796_m26206_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3497_0_0_0;
extern Il2CppType InternalEnumerator_1_t3497_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3497_GenericClass;
TypeInfo InternalEnumerator_1_t3497_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3497_MethodInfos/* methods */
	, InternalEnumerator_1_t3497_PropertyInfos/* properties */
	, InternalEnumerator_1_t3497_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3497_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3497_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3497_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3497_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3497_1_0_0/* this_arg */
	, InternalEnumerator_1_t3497_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3497_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3497_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3497)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t6611_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>
extern MethodInfo IList_1_get_Item_m34234_MethodInfo;
extern MethodInfo IList_1_set_Item_m34235_MethodInfo;
static PropertyInfo IList_1_t6611____Item_PropertyInfo = 
{
	&IList_1_t6611_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34234_MethodInfo/* get */
	, &IList_1_set_Item_m34235_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6611_PropertyInfos[] =
{
	&IList_1_t6611____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t1796_0_0_0;
static ParameterInfo IList_1_t6611_IList_1_IndexOf_m34236_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t1796_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34236_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34236_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6611_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6611_IList_1_IndexOf_m34236_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34236_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IEquatable_1_t1796_0_0_0;
static ParameterInfo IList_1_t6611_IList_1_Insert_m34237_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t1796_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34237_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34237_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6611_IList_1_Insert_m34237_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34237_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6611_IList_1_RemoveAt_m34238_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34238_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34238_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6611_IList_1_RemoveAt_m34238_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34238_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6611_IList_1_get_Item_m34234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IEquatable_1_t1796_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34234_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34234_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6611_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t1796_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6611_IList_1_get_Item_m34234_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34234_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IEquatable_1_t1796_0_0_0;
static ParameterInfo IList_1_t6611_IList_1_set_Item_m34235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t1796_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34235_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Decimal>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34235_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6611_IList_1_set_Item_m34235_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34235_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6611_MethodInfos[] =
{
	&IList_1_IndexOf_m34236_MethodInfo,
	&IList_1_Insert_m34237_MethodInfo,
	&IList_1_RemoveAt_m34238_MethodInfo,
	&IList_1_get_Item_m34234_MethodInfo,
	&IList_1_set_Item_m34235_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6611_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6610_il2cpp_TypeInfo,
	&IEnumerable_1_t6612_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6611_0_0_0;
extern Il2CppType IList_1_t6611_1_0_0;
struct IList_1_t6611;
extern Il2CppGenericClass IList_1_t6611_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6611_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6611_MethodInfos/* methods */
	, IList_1_t6611_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6611_il2cpp_TypeInfo/* element_class */
	, IList_1_t6611_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6611_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6611_0_0_0/* byval_arg */
	, &IList_1_t6611_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6611_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5052_il2cpp_TypeInfo;

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"


// T System.Collections.Generic.IEnumerator`1<System.TimeSpan>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TimeSpan>
extern MethodInfo IEnumerator_1_get_Current_m34239_MethodInfo;
static PropertyInfo IEnumerator_1_t5052____Current_PropertyInfo = 
{
	&IEnumerator_1_t5052_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34239_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5052_PropertyInfos[] =
{
	&IEnumerator_1_t5052____Current_PropertyInfo,
	NULL
};
extern Il2CppType TimeSpan_t846_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34239_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.TimeSpan>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34239_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5052_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t846_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t846/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34239_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5052_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34239_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5052_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5052_0_0_0;
extern Il2CppType IEnumerator_1_t5052_1_0_0;
struct IEnumerator_1_t5052;
extern Il2CppGenericClass IEnumerator_1_t5052_GenericClass;
TypeInfo IEnumerator_1_t5052_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5052_MethodInfos/* methods */
	, IEnumerator_1_t5052_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5052_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5052_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5052_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5052_0_0_0/* byval_arg */
	, &IEnumerator_1_t5052_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5052_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_522.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3498_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.TimeSpan>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_522MethodDeclarations.h"

extern TypeInfo TimeSpan_t846_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19378_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTimeSpan_t846_m26217_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TimeSpan>(System.Int32)
 TimeSpan_t846  Array_InternalArray__get_Item_TisTimeSpan_t846_m26217 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19374_MethodInfo;
 void InternalEnumerator_1__ctor_m19374 (InternalEnumerator_1_t3498 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375 (InternalEnumerator_1_t3498 * __this, MethodInfo* method){
	{
		TimeSpan_t846  L_0 = InternalEnumerator_1_get_Current_m19378(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19378_MethodInfo);
		TimeSpan_t846  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19376_MethodInfo;
 void InternalEnumerator_1_Dispose_m19376 (InternalEnumerator_1_t3498 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19377_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19377 (InternalEnumerator_1_t3498 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
 TimeSpan_t846  InternalEnumerator_1_get_Current_m19378 (InternalEnumerator_1_t3498 * __this, MethodInfo* method){
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
		TimeSpan_t846  L_8 = Array_InternalArray__get_Item_TisTimeSpan_t846_m26217(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTimeSpan_t846_m26217_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TimeSpan>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3498____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3498, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3498____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3498, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3498_FieldInfos[] =
{
	&InternalEnumerator_1_t3498____array_0_FieldInfo,
	&InternalEnumerator_1_t3498____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3498____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3498_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3498____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3498_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3498_PropertyInfos[] =
{
	&InternalEnumerator_1_t3498____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3498____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3498_InternalEnumerator_1__ctor_m19374_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19374_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19374_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19374/* method */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3498_InternalEnumerator_1__ctor_m19374_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19374_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375/* method */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19376_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19376_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19376/* method */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19376_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19377_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19377_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19377/* method */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19377_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19378_GenericMethod;
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19378_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19378/* method */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t846_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t846/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19378_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3498_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19374_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375_MethodInfo,
	&InternalEnumerator_1_Dispose_m19376_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19377_MethodInfo,
	&InternalEnumerator_1_get_Current_m19378_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3498_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19375_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19377_MethodInfo,
	&InternalEnumerator_1_Dispose_m19376_MethodInfo,
	&InternalEnumerator_1_get_Current_m19378_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3498_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5052_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3498_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5052_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3498_0_0_0;
extern Il2CppType InternalEnumerator_1_t3498_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3498_GenericClass;
TypeInfo InternalEnumerator_1_t3498_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3498_MethodInfos/* methods */
	, InternalEnumerator_1_t3498_PropertyInfos/* properties */
	, InternalEnumerator_1_t3498_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3498_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3498_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3498_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3498_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3498_1_0_0/* this_arg */
	, InternalEnumerator_1_t3498_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3498_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3498)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6613_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.TimeSpan>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.TimeSpan>
extern MethodInfo ICollection_1_get_Count_m34240_MethodInfo;
static PropertyInfo ICollection_1_t6613____Count_PropertyInfo = 
{
	&ICollection_1_t6613_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34240_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34241_MethodInfo;
static PropertyInfo ICollection_1_t6613____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6613_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34241_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6613_PropertyInfos[] =
{
	&ICollection_1_t6613____Count_PropertyInfo,
	&ICollection_1_t6613____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34240_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.TimeSpan>::get_Count()
MethodInfo ICollection_1_get_Count_m34240_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34240_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34241_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34241_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34241_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo ICollection_1_t6613_ICollection_1_Add_m34242_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34242_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Add(T)
MethodInfo ICollection_1_Add_m34242_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_TimeSpan_t846/* invoker_method */
	, ICollection_1_t6613_ICollection_1_Add_m34242_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34242_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34243_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::Clear()
MethodInfo ICollection_1_Clear_m34243_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34243_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo ICollection_1_t6613_ICollection_1_Contains_m34244_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34244_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Contains(T)
MethodInfo ICollection_1_Contains_m34244_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TimeSpan_t846/* invoker_method */
	, ICollection_1_t6613_ICollection_1_Contains_m34244_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34244_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpanU5BU5D_t2092_0_0_0;
extern Il2CppType TimeSpanU5BU5D_t2092_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6613_ICollection_1_CopyTo_m34245_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpanU5BU5D_t2092_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34245_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TimeSpan>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34245_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6613_ICollection_1_CopyTo_m34245_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34245_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo ICollection_1_t6613_ICollection_1_Remove_m34246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34246_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TimeSpan>::Remove(T)
MethodInfo ICollection_1_Remove_m34246_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TimeSpan_t846/* invoker_method */
	, ICollection_1_t6613_ICollection_1_Remove_m34246_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34246_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6613_MethodInfos[] =
{
	&ICollection_1_get_Count_m34240_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34241_MethodInfo,
	&ICollection_1_Add_m34242_MethodInfo,
	&ICollection_1_Clear_m34243_MethodInfo,
	&ICollection_1_Contains_m34244_MethodInfo,
	&ICollection_1_CopyTo_m34245_MethodInfo,
	&ICollection_1_Remove_m34246_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6615_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6613_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6615_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6613_0_0_0;
extern Il2CppType ICollection_1_t6613_1_0_0;
struct ICollection_1_t6613;
extern Il2CppGenericClass ICollection_1_t6613_GenericClass;
TypeInfo ICollection_1_t6613_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6613_MethodInfos/* methods */
	, ICollection_1_t6613_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6613_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6613_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6613_0_0_0/* byval_arg */
	, &ICollection_1_t6613_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6613_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeSpan>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TimeSpan>
extern Il2CppType IEnumerator_1_t5052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34247_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TimeSpan>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34247_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6615_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5052_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34247_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6615_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34247_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6615_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6615_0_0_0;
extern Il2CppType IEnumerable_1_t6615_1_0_0;
struct IEnumerable_1_t6615;
extern Il2CppGenericClass IEnumerable_1_t6615_GenericClass;
TypeInfo IEnumerable_1_t6615_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6615_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6615_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6615_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6615_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6615_0_0_0/* byval_arg */
	, &IEnumerable_1_t6615_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6615_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6614_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.TimeSpan>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TimeSpan>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.TimeSpan>
extern MethodInfo IList_1_get_Item_m34248_MethodInfo;
extern MethodInfo IList_1_set_Item_m34249_MethodInfo;
static PropertyInfo IList_1_t6614____Item_PropertyInfo = 
{
	&IList_1_t6614_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34248_MethodInfo/* get */
	, &IList_1_set_Item_m34249_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6614_PropertyInfos[] =
{
	&IList_1_t6614____Item_PropertyInfo,
	NULL
};
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IList_1_t6614_IList_1_IndexOf_m34250_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34250_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.TimeSpan>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34250_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6614_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846/* invoker_method */
	, IList_1_t6614_IList_1_IndexOf_m34250_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34250_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IList_1_t6614_IList_1_Insert_m34251_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34251_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34251_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_TimeSpan_t846/* invoker_method */
	, IList_1_t6614_IList_1_Insert_m34251_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34251_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6614_IList_1_RemoveAt_m34252_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34252_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34252_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6614_IList_1_RemoveAt_m34252_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34252_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6614_IList_1_get_Item_m34248_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TimeSpan_t846_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t846_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34248_GenericMethod;
// T System.Collections.Generic.IList`1<System.TimeSpan>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34248_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6614_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t846_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t846_Int32_t18/* invoker_method */
	, IList_1_t6614_IList_1_get_Item_m34248_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34248_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IList_1_t6614_IList_1_set_Item_m34249_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34249_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TimeSpan>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34249_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_TimeSpan_t846/* invoker_method */
	, IList_1_t6614_IList_1_set_Item_m34249_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34249_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6614_MethodInfos[] =
{
	&IList_1_IndexOf_m34250_MethodInfo,
	&IList_1_Insert_m34251_MethodInfo,
	&IList_1_RemoveAt_m34252_MethodInfo,
	&IList_1_get_Item_m34248_MethodInfo,
	&IList_1_set_Item_m34249_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6614_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6613_il2cpp_TypeInfo,
	&IEnumerable_1_t6615_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6614_0_0_0;
extern Il2CppType IList_1_t6614_1_0_0;
struct IList_1_t6614;
extern Il2CppGenericClass IList_1_t6614_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6614_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6614_MethodInfos/* methods */
	, IList_1_t6614_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6614_il2cpp_TypeInfo/* element_class */
	, IList_1_t6614_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6614_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6614_0_0_0/* byval_arg */
	, &IList_1_t6614_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6614_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t6616_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo ICollection_1_get_Count_m34253_MethodInfo;
static PropertyInfo ICollection_1_t6616____Count_PropertyInfo = 
{
	&ICollection_1_t6616_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34253_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34254_MethodInfo;
static PropertyInfo ICollection_1_t6616____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6616_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34254_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6616_PropertyInfos[] =
{
	&ICollection_1_t6616____Count_PropertyInfo,
	&ICollection_1_t6616____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34253_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_Count()
MethodInfo ICollection_1_get_Count_m34253_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34253_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34254_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34254_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34254_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2136_0_0_0;
extern Il2CppType IComparable_1_t2136_0_0_0;
static ParameterInfo ICollection_1_t6616_ICollection_1_Add_m34255_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2136_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34255_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Add(T)
MethodInfo ICollection_1_Add_m34255_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6616_ICollection_1_Add_m34255_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34255_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34256_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Clear()
MethodInfo ICollection_1_Clear_m34256_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34256_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2136_0_0_0;
static ParameterInfo ICollection_1_t6616_ICollection_1_Contains_m34257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2136_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34257_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Contains(T)
MethodInfo ICollection_1_Contains_m34257_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6616_ICollection_1_Contains_m34257_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34257_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t3738_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t3738_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6616_ICollection_1_CopyTo_m34258_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t3738_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34258_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34258_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6616_ICollection_1_CopyTo_m34258_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34258_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2136_0_0_0;
static ParameterInfo ICollection_1_t6616_ICollection_1_Remove_m34259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2136_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34259_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.TimeSpan>>::Remove(T)
MethodInfo ICollection_1_Remove_m34259_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6616_ICollection_1_Remove_m34259_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34259_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6616_MethodInfos[] =
{
	&ICollection_1_get_Count_m34253_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34254_MethodInfo,
	&ICollection_1_Add_m34255_MethodInfo,
	&ICollection_1_Clear_m34256_MethodInfo,
	&ICollection_1_Contains_m34257_MethodInfo,
	&ICollection_1_CopyTo_m34258_MethodInfo,
	&ICollection_1_Remove_m34259_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6618_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6616_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6618_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6616_0_0_0;
extern Il2CppType ICollection_1_t6616_1_0_0;
struct ICollection_1_t6616;
extern Il2CppGenericClass ICollection_1_t6616_GenericClass;
TypeInfo ICollection_1_t6616_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6616_MethodInfos/* methods */
	, ICollection_1_t6616_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6616_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6616_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6616_0_0_0/* byval_arg */
	, &ICollection_1_t6616_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6616_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>
extern Il2CppType IEnumerator_1_t5054_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34260_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.TimeSpan>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34260_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6618_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5054_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34260_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6618_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34260_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6618_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6618_0_0_0;
extern Il2CppType IEnumerable_1_t6618_1_0_0;
struct IEnumerable_1_t6618;
extern Il2CppGenericClass IEnumerable_1_t6618_GenericClass;
TypeInfo IEnumerable_1_t6618_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6618_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6618_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6618_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6618_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6618_0_0_0/* byval_arg */
	, &IEnumerable_1_t6618_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6618_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5054_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo IEnumerator_1_get_Current_m34261_MethodInfo;
static PropertyInfo IEnumerator_1_t5054____Current_PropertyInfo = 
{
	&IEnumerator_1_t5054_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34261_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5054_PropertyInfos[] =
{
	&IEnumerator_1_t5054____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2136_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34261_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34261_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5054_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2136_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34261_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5054_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34261_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5054_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5054_0_0_0;
extern Il2CppType IEnumerator_1_t5054_1_0_0;
struct IEnumerator_1_t5054;
extern Il2CppGenericClass IEnumerator_1_t5054_GenericClass;
TypeInfo IEnumerator_1_t5054_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5054_MethodInfos/* methods */
	, IEnumerator_1_t5054_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5054_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5054_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5054_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5054_0_0_0/* byval_arg */
	, &IEnumerator_1_t5054_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5054_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t2136_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.TimeSpan>
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IComparable_1_t2136_IComparable_1_CompareTo_m34262_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m34262_GenericMethod;
// System.Int32 System.IComparable`1<System.TimeSpan>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m34262_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2136_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846/* invoker_method */
	, IComparable_1_t2136_IComparable_1_CompareTo_m34262_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m34262_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2136_MethodInfos[] =
{
	&IComparable_1_CompareTo_m34262_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2136_1_0_0;
struct IComparable_1_t2136;
extern Il2CppGenericClass IComparable_1_t2136_GenericClass;
TypeInfo IComparable_1_t2136_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2136_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2136_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2136_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2136_0_0_0/* byval_arg */
	, &IComparable_1_t2136_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2136_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_523.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3499_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_523MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m19383_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t2136_m26228_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t2136_m26228(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3499____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3499, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3499____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3499, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3499_FieldInfos[] =
{
	&InternalEnumerator_1_t3499____array_0_FieldInfo,
	&InternalEnumerator_1_t3499____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19380_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3499____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3499_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19380_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3499____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3499_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19383_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3499_PropertyInfos[] =
{
	&InternalEnumerator_1_t3499____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3499____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3499_InternalEnumerator_1__ctor_m19379_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19379_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19379_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3499_InternalEnumerator_1__ctor_m19379_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19379_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19380_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19380_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19380_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19381_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19381_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19381_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19382_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19382_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19382_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t2136_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19383_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.TimeSpan>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19383_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2136_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19383_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3499_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19379_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19380_MethodInfo,
	&InternalEnumerator_1_Dispose_m19381_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19382_MethodInfo,
	&InternalEnumerator_1_get_Current_m19383_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19382_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19381_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3499_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19380_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19382_MethodInfo,
	&InternalEnumerator_1_Dispose_m19381_MethodInfo,
	&InternalEnumerator_1_get_Current_m19383_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3499_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5054_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3499_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5054_il2cpp_TypeInfo, 7},
};
extern TypeInfo IComparable_1_t2136_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3499_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19383_MethodInfo/* Method Usage */,
	&IComparable_1_t2136_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t2136_m26228_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3499_0_0_0;
extern Il2CppType InternalEnumerator_1_t3499_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3499_GenericClass;
TypeInfo InternalEnumerator_1_t3499_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3499_MethodInfos/* methods */
	, InternalEnumerator_1_t3499_PropertyInfos/* properties */
	, InternalEnumerator_1_t3499_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3499_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3499_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3499_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3499_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3499_1_0_0/* this_arg */
	, InternalEnumerator_1_t3499_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3499_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3499_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3499)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t6617_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>
extern MethodInfo IList_1_get_Item_m34263_MethodInfo;
extern MethodInfo IList_1_set_Item_m34264_MethodInfo;
static PropertyInfo IList_1_t6617____Item_PropertyInfo = 
{
	&IList_1_t6617_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34263_MethodInfo/* get */
	, &IList_1_set_Item_m34264_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6617_PropertyInfos[] =
{
	&IList_1_t6617____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t2136_0_0_0;
static ParameterInfo IList_1_t6617_IList_1_IndexOf_m34265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2136_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34265_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34265_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6617_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6617_IList_1_IndexOf_m34265_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34265_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IComparable_1_t2136_0_0_0;
static ParameterInfo IList_1_t6617_IList_1_Insert_m34266_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2136_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34266_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34266_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6617_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6617_IList_1_Insert_m34266_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34266_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6617_IList_1_RemoveAt_m34267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34267_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34267_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6617_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6617_IList_1_RemoveAt_m34267_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34267_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6617_IList_1_get_Item_m34263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IComparable_1_t2136_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34263_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34263_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6617_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t2136_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6617_IList_1_get_Item_m34263_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34263_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IComparable_1_t2136_0_0_0;
static ParameterInfo IList_1_t6617_IList_1_set_Item_m34264_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t2136_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34264_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.TimeSpan>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34264_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6617_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6617_IList_1_set_Item_m34264_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34264_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6617_MethodInfos[] =
{
	&IList_1_IndexOf_m34265_MethodInfo,
	&IList_1_Insert_m34266_MethodInfo,
	&IList_1_RemoveAt_m34267_MethodInfo,
	&IList_1_get_Item_m34263_MethodInfo,
	&IList_1_set_Item_m34264_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6617_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6616_il2cpp_TypeInfo,
	&IEnumerable_1_t6618_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6617_0_0_0;
extern Il2CppType IList_1_t6617_1_0_0;
struct IList_1_t6617;
extern Il2CppGenericClass IList_1_t6617_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6617_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6617_MethodInfos/* methods */
	, IList_1_t6617_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6617_il2cpp_TypeInfo/* element_class */
	, IList_1_t6617_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6617_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6617_0_0_0/* byval_arg */
	, &IList_1_t6617_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6617_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo ICollection_1_t6619_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo ICollection_1_get_Count_m34268_MethodInfo;
static PropertyInfo ICollection_1_t6619____Count_PropertyInfo = 
{
	&ICollection_1_t6619_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34268_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34269_MethodInfo;
static PropertyInfo ICollection_1_t6619____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6619_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34269_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6619_PropertyInfos[] =
{
	&ICollection_1_t6619____Count_PropertyInfo,
	&ICollection_1_t6619____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34268_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_Count()
MethodInfo ICollection_1_get_Count_m34268_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34268_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34269_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34269_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34269_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2137_0_0_0;
extern Il2CppType IEquatable_1_t2137_0_0_0;
static ParameterInfo ICollection_1_t6619_ICollection_1_Add_m34270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2137_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34270_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Add(T)
MethodInfo ICollection_1_Add_m34270_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6619_ICollection_1_Add_m34270_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34270_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34271_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Clear()
MethodInfo ICollection_1_Clear_m34271_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34271_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2137_0_0_0;
static ParameterInfo ICollection_1_t6619_ICollection_1_Contains_m34272_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2137_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34272_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Contains(T)
MethodInfo ICollection_1_Contains_m34272_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6619_ICollection_1_Contains_m34272_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34272_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t3739_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t3739_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6619_ICollection_1_CopyTo_m34273_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t3739_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34273_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34273_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6619_ICollection_1_CopyTo_m34273_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34273_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2137_0_0_0;
static ParameterInfo ICollection_1_t6619_ICollection_1_Remove_m34274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2137_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34274_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.TimeSpan>>::Remove(T)
MethodInfo ICollection_1_Remove_m34274_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6619_ICollection_1_Remove_m34274_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34274_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6619_MethodInfos[] =
{
	&ICollection_1_get_Count_m34268_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34269_MethodInfo,
	&ICollection_1_Add_m34270_MethodInfo,
	&ICollection_1_Clear_m34271_MethodInfo,
	&ICollection_1_Contains_m34272_MethodInfo,
	&ICollection_1_CopyTo_m34273_MethodInfo,
	&ICollection_1_Remove_m34274_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6621_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6619_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6621_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6619_0_0_0;
extern Il2CppType ICollection_1_t6619_1_0_0;
struct ICollection_1_t6619;
extern Il2CppGenericClass ICollection_1_t6619_GenericClass;
TypeInfo ICollection_1_t6619_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6619_MethodInfos/* methods */
	, ICollection_1_t6619_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6619_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6619_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6619_0_0_0/* byval_arg */
	, &ICollection_1_t6619_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6619_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>
extern Il2CppType IEnumerator_1_t5056_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34275_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.TimeSpan>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34275_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6621_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5056_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34275_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6621_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34275_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6621_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6621_0_0_0;
extern Il2CppType IEnumerable_1_t6621_1_0_0;
struct IEnumerable_1_t6621;
extern Il2CppGenericClass IEnumerable_1_t6621_GenericClass;
TypeInfo IEnumerable_1_t6621_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6621_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6621_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6621_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6621_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6621_0_0_0/* byval_arg */
	, &IEnumerable_1_t6621_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6621_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5056_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo IEnumerator_1_get_Current_m34276_MethodInfo;
static PropertyInfo IEnumerator_1_t5056____Current_PropertyInfo = 
{
	&IEnumerator_1_t5056_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34276_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5056_PropertyInfos[] =
{
	&IEnumerator_1_t5056____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2137_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34276_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34276_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5056_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2137_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34276_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5056_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34276_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5056_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5056_0_0_0;
extern Il2CppType IEnumerator_1_t5056_1_0_0;
struct IEnumerator_1_t5056;
extern Il2CppGenericClass IEnumerator_1_t5056_GenericClass;
TypeInfo IEnumerator_1_t5056_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5056_MethodInfos/* methods */
	, IEnumerator_1_t5056_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5056_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5056_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5056_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5056_0_0_0/* byval_arg */
	, &IEnumerator_1_t5056_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5056_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2137_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T)
// Metadata Definition System.IEquatable`1<System.TimeSpan>
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IEquatable_1_t2137_IEquatable_1_Equals_m34277_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m34277_GenericMethod;
// System.Boolean System.IEquatable`1<System.TimeSpan>::Equals(T)
MethodInfo IEquatable_1_Equals_m34277_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2137_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TimeSpan_t846/* invoker_method */
	, IEquatable_1_t2137_IEquatable_1_Equals_m34277_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m34277_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2137_MethodInfos[] =
{
	&IEquatable_1_Equals_m34277_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2137_1_0_0;
struct IEquatable_1_t2137;
extern Il2CppGenericClass IEquatable_1_t2137_GenericClass;
TypeInfo IEquatable_1_t2137_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2137_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2137_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2137_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2137_0_0_0/* byval_arg */
	, &IEquatable_1_t2137_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2137_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_524.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3500_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_524MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m19388_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t2137_m26239_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.TimeSpan>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t2137_m26239(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3500____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3500, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3500____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3500, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3500_FieldInfos[] =
{
	&InternalEnumerator_1_t3500____array_0_FieldInfo,
	&InternalEnumerator_1_t3500____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19385_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3500____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3500_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19385_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3500____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3500_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19388_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3500_PropertyInfos[] =
{
	&InternalEnumerator_1_t3500____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3500____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3500_InternalEnumerator_1__ctor_m19384_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19384_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19384_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3500_InternalEnumerator_1__ctor_m19384_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19384_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19385_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19385_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19385_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19386_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19386_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19386_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19387_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19387_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19387_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t2137_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19388_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.TimeSpan>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19388_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2137_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19388_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3500_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19384_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19385_MethodInfo,
	&InternalEnumerator_1_Dispose_m19386_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19387_MethodInfo,
	&InternalEnumerator_1_get_Current_m19388_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19387_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19386_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3500_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19385_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19387_MethodInfo,
	&InternalEnumerator_1_Dispose_m19386_MethodInfo,
	&InternalEnumerator_1_get_Current_m19388_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3500_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5056_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3500_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5056_il2cpp_TypeInfo, 7},
};
extern TypeInfo IEquatable_1_t2137_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3500_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19388_MethodInfo/* Method Usage */,
	&IEquatable_1_t2137_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t2137_m26239_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3500_0_0_0;
extern Il2CppType InternalEnumerator_1_t3500_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3500_GenericClass;
TypeInfo InternalEnumerator_1_t3500_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3500_MethodInfos/* methods */
	, InternalEnumerator_1_t3500_PropertyInfos/* properties */
	, InternalEnumerator_1_t3500_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3500_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3500_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3500_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3500_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3500_1_0_0/* this_arg */
	, InternalEnumerator_1_t3500_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3500_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3500_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3500)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t6620_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>
extern MethodInfo IList_1_get_Item_m34278_MethodInfo;
extern MethodInfo IList_1_set_Item_m34279_MethodInfo;
static PropertyInfo IList_1_t6620____Item_PropertyInfo = 
{
	&IList_1_t6620_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34278_MethodInfo/* get */
	, &IList_1_set_Item_m34279_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6620_PropertyInfos[] =
{
	&IList_1_t6620____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t2137_0_0_0;
static ParameterInfo IList_1_t6620_IList_1_IndexOf_m34280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2137_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34280_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34280_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6620_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6620_IList_1_IndexOf_m34280_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34280_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IEquatable_1_t2137_0_0_0;
static ParameterInfo IList_1_t6620_IList_1_Insert_m34281_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2137_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34281_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34281_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6620_IList_1_Insert_m34281_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34281_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6620_IList_1_RemoveAt_m34282_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34282_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34282_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6620_IList_1_RemoveAt_m34282_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34282_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6620_IList_1_get_Item_m34278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType IEquatable_1_t2137_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34278_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34278_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6620_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t2137_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6620_IList_1_get_Item_m34278_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34278_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType IEquatable_1_t2137_0_0_0;
static ParameterInfo IList_1_t6620_IList_1_set_Item_m34279_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t2137_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34279_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.TimeSpan>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34279_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6620_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6620_IList_1_set_Item_m34279_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34279_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6620_MethodInfos[] =
{
	&IList_1_IndexOf_m34280_MethodInfo,
	&IList_1_Insert_m34281_MethodInfo,
	&IList_1_RemoveAt_m34282_MethodInfo,
	&IList_1_get_Item_m34278_MethodInfo,
	&IList_1_set_Item_m34279_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6620_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6619_il2cpp_TypeInfo,
	&IEnumerable_1_t6621_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6620_0_0_0;
extern Il2CppType IList_1_t6620_1_0_0;
struct IList_1_t6620;
extern Il2CppGenericClass IList_1_t6620_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6620_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6620_MethodInfos/* methods */
	, IList_1_t6620_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6620_il2cpp_TypeInfo/* element_class */
	, IList_1_t6620_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6620_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6620_0_0_0/* byval_arg */
	, &IList_1_t6620_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6620_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5058_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterAs.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo IEnumerator_1_get_Current_m34283_MethodInfo;
static PropertyInfo IEnumerator_1_t5058____Current_PropertyInfo = 
{
	&IEnumerator_1_t5058_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34283_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5058_PropertyInfos[] =
{
	&IEnumerator_1_t5058____Current_PropertyInfo,
	NULL
};
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
extern void* RuntimeInvoker_FormatterAssemblyStyle_t1526 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34283_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34283_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5058_il2cpp_TypeInfo/* declaring_type */
	, &FormatterAssemblyStyle_t1526_0_0_0/* return_type */
	, RuntimeInvoker_FormatterAssemblyStyle_t1526/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34283_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5058_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34283_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5058_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5058_0_0_0;
extern Il2CppType IEnumerator_1_t5058_1_0_0;
struct IEnumerator_1_t5058;
extern Il2CppGenericClass IEnumerator_1_t5058_GenericClass;
TypeInfo IEnumerator_1_t5058_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5058_MethodInfos/* methods */
	, IEnumerator_1_t5058_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5058_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5058_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5058_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5058_0_0_0/* byval_arg */
	, &IEnumerator_1_t5058_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5058_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_525.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3501_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_525MethodDeclarations.h"

extern TypeInfo FormatterAssemblyStyle_t1526_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19393_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t1526_m26250_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t1526_m26250 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19389_MethodInfo;
 void InternalEnumerator_1__ctor_m19389 (InternalEnumerator_1_t3501 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390 (InternalEnumerator_1_t3501 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19393(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19393_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FormatterAssemblyStyle_t1526_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19391_MethodInfo;
 void InternalEnumerator_1_Dispose_m19391 (InternalEnumerator_1_t3501 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19392_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19392 (InternalEnumerator_1_t3501 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19393 (InternalEnumerator_1_t3501 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t1526_m26250(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFormatterAssemblyStyle_t1526_m26250_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3501____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3501, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3501____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3501, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3501_FieldInfos[] =
{
	&InternalEnumerator_1_t3501____array_0_FieldInfo,
	&InternalEnumerator_1_t3501____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3501____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3501____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3501_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3501_PropertyInfos[] =
{
	&InternalEnumerator_1_t3501____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3501____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3501_InternalEnumerator_1__ctor_m19389_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19389_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19389_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19389/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3501_InternalEnumerator_1__ctor_m19389_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19389_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19391_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19391_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19391/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19391_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19392_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19392_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19392/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19392_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
extern void* RuntimeInvoker_FormatterAssemblyStyle_t1526 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19393_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19393_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19393/* method */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* declaring_type */
	, &FormatterAssemblyStyle_t1526_0_0_0/* return_type */
	, RuntimeInvoker_FormatterAssemblyStyle_t1526/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19393_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3501_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19389_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390_MethodInfo,
	&InternalEnumerator_1_Dispose_m19391_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19392_MethodInfo,
	&InternalEnumerator_1_get_Current_m19393_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3501_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19390_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19392_MethodInfo,
	&InternalEnumerator_1_Dispose_m19391_MethodInfo,
	&InternalEnumerator_1_get_Current_m19393_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3501_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5058_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3501_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5058_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3501_0_0_0;
extern Il2CppType InternalEnumerator_1_t3501_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3501_GenericClass;
TypeInfo InternalEnumerator_1_t3501_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3501_MethodInfos/* methods */
	, InternalEnumerator_1_t3501_PropertyInfos/* properties */
	, InternalEnumerator_1_t3501_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3501_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3501_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3501_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3501_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3501_1_0_0/* this_arg */
	, InternalEnumerator_1_t3501_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3501_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3501)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6622_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo ICollection_1_get_Count_m34284_MethodInfo;
static PropertyInfo ICollection_1_t6622____Count_PropertyInfo = 
{
	&ICollection_1_t6622_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34284_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34285_MethodInfo;
static PropertyInfo ICollection_1_t6622____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6622_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34285_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6622_PropertyInfos[] =
{
	&ICollection_1_t6622____Count_PropertyInfo,
	&ICollection_1_t6622____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34284_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Count()
MethodInfo ICollection_1_get_Count_m34284_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34284_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34285_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34285_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34285_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
static ParameterInfo ICollection_1_t6622_ICollection_1_Add_m34286_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t1526_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34286_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Add(T)
MethodInfo ICollection_1_Add_m34286_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6622_ICollection_1_Add_m34286_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34286_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34287_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Clear()
MethodInfo ICollection_1_Clear_m34287_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34287_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
static ParameterInfo ICollection_1_t6622_ICollection_1_Contains_m34288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t1526_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34288_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Contains(T)
MethodInfo ICollection_1_Contains_m34288_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6622_ICollection_1_Contains_m34288_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34288_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyleU5BU5D_t3740_0_0_0;
extern Il2CppType FormatterAssemblyStyleU5BU5D_t3740_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6622_ICollection_1_CopyTo_m34289_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyleU5BU5D_t3740_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34289_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34289_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6622_ICollection_1_CopyTo_m34289_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34289_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
static ParameterInfo ICollection_1_t6622_ICollection_1_Remove_m34290_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t1526_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34290_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Remove(T)
MethodInfo ICollection_1_Remove_m34290_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6622_ICollection_1_Remove_m34290_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34290_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6622_MethodInfos[] =
{
	&ICollection_1_get_Count_m34284_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34285_MethodInfo,
	&ICollection_1_Add_m34286_MethodInfo,
	&ICollection_1_Clear_m34287_MethodInfo,
	&ICollection_1_Contains_m34288_MethodInfo,
	&ICollection_1_CopyTo_m34289_MethodInfo,
	&ICollection_1_Remove_m34290_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6624_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6622_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6624_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6622_0_0_0;
extern Il2CppType ICollection_1_t6622_1_0_0;
struct ICollection_1_t6622;
extern Il2CppGenericClass ICollection_1_t6622_GenericClass;
TypeInfo ICollection_1_t6622_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6622_MethodInfos/* methods */
	, ICollection_1_t6622_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6622_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6622_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6622_0_0_0/* byval_arg */
	, &ICollection_1_t6622_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6622_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern Il2CppType IEnumerator_1_t5058_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34291_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34291_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6624_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5058_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34291_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6624_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34291_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6624_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6624_0_0_0;
extern Il2CppType IEnumerable_1_t6624_1_0_0;
struct IEnumerable_1_t6624;
extern Il2CppGenericClass IEnumerable_1_t6624_GenericClass;
TypeInfo IEnumerable_1_t6624_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6624_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6624_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6624_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6624_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6624_0_0_0/* byval_arg */
	, &IEnumerable_1_t6624_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6624_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6623_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>
extern MethodInfo IList_1_get_Item_m34292_MethodInfo;
extern MethodInfo IList_1_set_Item_m34293_MethodInfo;
static PropertyInfo IList_1_t6623____Item_PropertyInfo = 
{
	&IList_1_t6623_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34292_MethodInfo/* get */
	, &IList_1_set_Item_m34293_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6623_PropertyInfos[] =
{
	&IList_1_t6623____Item_PropertyInfo,
	NULL
};
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
static ParameterInfo IList_1_t6623_IList_1_IndexOf_m34294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t1526_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34294_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34294_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6623_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6623_IList_1_IndexOf_m34294_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34294_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
static ParameterInfo IList_1_t6623_IList_1_Insert_m34295_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t1526_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34295_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34295_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6623_IList_1_Insert_m34295_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34295_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6623_IList_1_RemoveAt_m34296_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34296_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34296_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6623_IList_1_RemoveAt_m34296_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34296_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6623_IList_1_get_Item_m34292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
extern void* RuntimeInvoker_FormatterAssemblyStyle_t1526_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34292_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34292_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6623_il2cpp_TypeInfo/* declaring_type */
	, &FormatterAssemblyStyle_t1526_0_0_0/* return_type */
	, RuntimeInvoker_FormatterAssemblyStyle_t1526_Int32_t18/* invoker_method */
	, IList_1_t6623_IList_1_get_Item_m34292_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34292_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FormatterAssemblyStyle_t1526_0_0_0;
static ParameterInfo IList_1_t6623_IList_1_set_Item_m34293_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FormatterAssemblyStyle_t1526_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34293_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterAssemblyStyle>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34293_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6623_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6623_IList_1_set_Item_m34293_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34293_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6623_MethodInfos[] =
{
	&IList_1_IndexOf_m34294_MethodInfo,
	&IList_1_Insert_m34295_MethodInfo,
	&IList_1_RemoveAt_m34296_MethodInfo,
	&IList_1_get_Item_m34292_MethodInfo,
	&IList_1_set_Item_m34293_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6623_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6622_il2cpp_TypeInfo,
	&IEnumerable_1_t6624_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6623_0_0_0;
extern Il2CppType IList_1_t6623_1_0_0;
struct IList_1_t6623;
extern Il2CppGenericClass IList_1_t6623_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6623_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6623_MethodInfos/* methods */
	, IList_1_t6623_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6623_il2cpp_TypeInfo/* element_class */
	, IList_1_t6623_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6623_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6623_0_0_0/* byval_arg */
	, &IList_1_t6623_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6623_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5060_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "mscorlib_System_Runtime_Serialization_Formatters_FormatterTy.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo IEnumerator_1_get_Current_m34297_MethodInfo;
static PropertyInfo IEnumerator_1_t5060____Current_PropertyInfo = 
{
	&IEnumerator_1_t5060_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34297_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5060_PropertyInfos[] =
{
	&IEnumerator_1_t5060____Current_PropertyInfo,
	NULL
};
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
extern void* RuntimeInvoker_FormatterTypeStyle_t1527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34297_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34297_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5060_il2cpp_TypeInfo/* declaring_type */
	, &FormatterTypeStyle_t1527_0_0_0/* return_type */
	, RuntimeInvoker_FormatterTypeStyle_t1527/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34297_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5060_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34297_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5060_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5060_0_0_0;
extern Il2CppType IEnumerator_1_t5060_1_0_0;
struct IEnumerator_1_t5060;
extern Il2CppGenericClass IEnumerator_1_t5060_GenericClass;
TypeInfo IEnumerator_1_t5060_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5060_MethodInfos/* methods */
	, IEnumerator_1_t5060_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5060_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5060_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5060_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5060_0_0_0/* byval_arg */
	, &IEnumerator_1_t5060_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5060_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_526.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3502_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_526MethodDeclarations.h"

extern TypeInfo FormatterTypeStyle_t1527_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19398_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFormatterTypeStyle_t1527_m26261_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.FormatterTypeStyle>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFormatterTypeStyle_t1527_m26261 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19394_MethodInfo;
 void InternalEnumerator_1__ctor_m19394 (InternalEnumerator_1_t3502 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395 (InternalEnumerator_1_t3502 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19398(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19398_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FormatterTypeStyle_t1527_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19396_MethodInfo;
 void InternalEnumerator_1_Dispose_m19396 (InternalEnumerator_1_t3502 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19397_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19397 (InternalEnumerator_1_t3502 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19398 (InternalEnumerator_1_t3502 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFormatterTypeStyle_t1527_m26261(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFormatterTypeStyle_t1527_m26261_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3502____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3502, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3502____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3502, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3502_FieldInfos[] =
{
	&InternalEnumerator_1_t3502____array_0_FieldInfo,
	&InternalEnumerator_1_t3502____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3502____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3502_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3502____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3502_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19398_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3502_PropertyInfos[] =
{
	&InternalEnumerator_1_t3502____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3502____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3502_InternalEnumerator_1__ctor_m19394_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19394_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19394_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19394/* method */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3502_InternalEnumerator_1__ctor_m19394_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19394_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395/* method */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19396_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19396_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19396/* method */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19396_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19397_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19397_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19397/* method */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19397_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
extern void* RuntimeInvoker_FormatterTypeStyle_t1527 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19398_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19398_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19398/* method */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* declaring_type */
	, &FormatterTypeStyle_t1527_0_0_0/* return_type */
	, RuntimeInvoker_FormatterTypeStyle_t1527/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19398_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3502_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19394_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395_MethodInfo,
	&InternalEnumerator_1_Dispose_m19396_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19397_MethodInfo,
	&InternalEnumerator_1_get_Current_m19398_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3502_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19395_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19397_MethodInfo,
	&InternalEnumerator_1_Dispose_m19396_MethodInfo,
	&InternalEnumerator_1_get_Current_m19398_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3502_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5060_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3502_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5060_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3502_0_0_0;
extern Il2CppType InternalEnumerator_1_t3502_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3502_GenericClass;
TypeInfo InternalEnumerator_1_t3502_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3502_MethodInfos/* methods */
	, InternalEnumerator_1_t3502_PropertyInfos/* properties */
	, InternalEnumerator_1_t3502_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3502_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3502_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3502_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3502_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3502_1_0_0/* this_arg */
	, InternalEnumerator_1_t3502_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3502_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3502)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6625_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo ICollection_1_get_Count_m34298_MethodInfo;
static PropertyInfo ICollection_1_t6625____Count_PropertyInfo = 
{
	&ICollection_1_t6625_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34298_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34299_MethodInfo;
static PropertyInfo ICollection_1_t6625____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6625_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34299_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6625_PropertyInfos[] =
{
	&ICollection_1_t6625____Count_PropertyInfo,
	&ICollection_1_t6625____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34298_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Count()
MethodInfo ICollection_1_get_Count_m34298_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34298_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34299_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34299_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34299_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
static ParameterInfo ICollection_1_t6625_ICollection_1_Add_m34300_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t1527_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34300_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Add(T)
MethodInfo ICollection_1_Add_m34300_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6625_ICollection_1_Add_m34300_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34300_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34301_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Clear()
MethodInfo ICollection_1_Clear_m34301_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34301_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
static ParameterInfo ICollection_1_t6625_ICollection_1_Contains_m34302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t1527_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34302_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Contains(T)
MethodInfo ICollection_1_Contains_m34302_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6625_ICollection_1_Contains_m34302_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34302_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyleU5BU5D_t3741_0_0_0;
extern Il2CppType FormatterTypeStyleU5BU5D_t3741_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6625_ICollection_1_CopyTo_m34303_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyleU5BU5D_t3741_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34303_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34303_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6625_ICollection_1_CopyTo_m34303_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34303_GenericMethod/* genericMethod */

};
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
static ParameterInfo ICollection_1_t6625_ICollection_1_Remove_m34304_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t1527_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34304_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Remove(T)
MethodInfo ICollection_1_Remove_m34304_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6625_ICollection_1_Remove_m34304_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34304_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6625_MethodInfos[] =
{
	&ICollection_1_get_Count_m34298_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34299_MethodInfo,
	&ICollection_1_Add_m34300_MethodInfo,
	&ICollection_1_Clear_m34301_MethodInfo,
	&ICollection_1_Contains_m34302_MethodInfo,
	&ICollection_1_CopyTo_m34303_MethodInfo,
	&ICollection_1_Remove_m34304_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6627_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6625_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6627_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6625_0_0_0;
extern Il2CppType ICollection_1_t6625_1_0_0;
struct ICollection_1_t6625;
extern Il2CppGenericClass ICollection_1_t6625_GenericClass;
TypeInfo ICollection_1_t6625_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6625_MethodInfos/* methods */
	, ICollection_1_t6625_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6625_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6625_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6625_0_0_0/* byval_arg */
	, &ICollection_1_t6625_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6625_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern Il2CppType IEnumerator_1_t5060_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34305_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34305_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6627_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5060_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34305_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6627_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34305_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6627_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6627_0_0_0;
extern Il2CppType IEnumerable_1_t6627_1_0_0;
struct IEnumerable_1_t6627;
extern Il2CppGenericClass IEnumerable_1_t6627_GenericClass;
TypeInfo IEnumerable_1_t6627_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6627_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6627_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6627_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6627_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6627_0_0_0/* byval_arg */
	, &IEnumerable_1_t6627_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6627_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6626_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>
extern MethodInfo IList_1_get_Item_m34306_MethodInfo;
extern MethodInfo IList_1_set_Item_m34307_MethodInfo;
static PropertyInfo IList_1_t6626____Item_PropertyInfo = 
{
	&IList_1_t6626_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34306_MethodInfo/* get */
	, &IList_1_set_Item_m34307_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6626_PropertyInfos[] =
{
	&IList_1_t6626____Item_PropertyInfo,
	NULL
};
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
static ParameterInfo IList_1_t6626_IList_1_IndexOf_m34308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t1527_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34308_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34308_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6626_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6626_IList_1_IndexOf_m34308_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34308_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
static ParameterInfo IList_1_t6626_IList_1_Insert_m34309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t1527_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34309_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34309_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6626_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6626_IList_1_Insert_m34309_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34309_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6626_IList_1_RemoveAt_m34310_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34310_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34310_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6626_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6626_IList_1_RemoveAt_m34310_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34310_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6626_IList_1_get_Item_m34306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
extern void* RuntimeInvoker_FormatterTypeStyle_t1527_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34306_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34306_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6626_il2cpp_TypeInfo/* declaring_type */
	, &FormatterTypeStyle_t1527_0_0_0/* return_type */
	, RuntimeInvoker_FormatterTypeStyle_t1527_Int32_t18/* invoker_method */
	, IList_1_t6626_IList_1_get_Item_m34306_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34306_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType FormatterTypeStyle_t1527_0_0_0;
static ParameterInfo IList_1_t6626_IList_1_set_Item_m34307_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FormatterTypeStyle_t1527_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34307_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.FormatterTypeStyle>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34307_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6626_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6626_IList_1_set_Item_m34307_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34307_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6626_MethodInfos[] =
{
	&IList_1_IndexOf_m34308_MethodInfo,
	&IList_1_Insert_m34309_MethodInfo,
	&IList_1_RemoveAt_m34310_MethodInfo,
	&IList_1_get_Item_m34306_MethodInfo,
	&IList_1_set_Item_m34307_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6626_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6625_il2cpp_TypeInfo,
	&IEnumerable_1_t6627_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6626_0_0_0;
extern Il2CppType IList_1_t6626_1_0_0;
struct IList_1_t6626;
extern Il2CppGenericClass IList_1_t6626_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6626_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6626_MethodInfos/* methods */
	, IList_1_t6626_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6626_il2cpp_TypeInfo/* element_class */
	, IList_1_t6626_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6626_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6626_0_0_0/* byval_arg */
	, &IList_1_t6626_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6626_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5062_il2cpp_TypeInfo;

// System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "mscorlib_System_Runtime_Serialization_Formatters_TypeFilterL.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo IEnumerator_1_get_Current_m34311_MethodInfo;
static PropertyInfo IEnumerator_1_t5062____Current_PropertyInfo = 
{
	&IEnumerator_1_t5062_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34311_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5062_PropertyInfos[] =
{
	&IEnumerator_1_t5062____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
extern void* RuntimeInvoker_TypeFilterLevel_t1528 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34311_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34311_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5062_il2cpp_TypeInfo/* declaring_type */
	, &TypeFilterLevel_t1528_0_0_0/* return_type */
	, RuntimeInvoker_TypeFilterLevel_t1528/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34311_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5062_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34311_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5062_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5062_0_0_0;
extern Il2CppType IEnumerator_1_t5062_1_0_0;
struct IEnumerator_1_t5062;
extern Il2CppGenericClass IEnumerator_1_t5062_GenericClass;
TypeInfo IEnumerator_1_t5062_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5062_MethodInfos/* methods */
	, IEnumerator_1_t5062_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5062_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5062_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5062_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5062_0_0_0/* byval_arg */
	, &IEnumerator_1_t5062_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5062_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_527.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3503_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_527MethodDeclarations.h"

extern TypeInfo TypeFilterLevel_t1528_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19403_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeFilterLevel_t1528_m26272_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.Formatters.TypeFilterLevel>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeFilterLevel_t1528_m26272 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19399_MethodInfo;
 void InternalEnumerator_1__ctor_m19399 (InternalEnumerator_1_t3503 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400 (InternalEnumerator_1_t3503 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19403(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19403_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeFilterLevel_t1528_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19401_MethodInfo;
 void InternalEnumerator_1_Dispose_m19401 (InternalEnumerator_1_t3503 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19402_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19402 (InternalEnumerator_1_t3503 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19403 (InternalEnumerator_1_t3503 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeFilterLevel_t1528_m26272(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeFilterLevel_t1528_m26272_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3503____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3503, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3503____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3503, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3503_FieldInfos[] =
{
	&InternalEnumerator_1_t3503____array_0_FieldInfo,
	&InternalEnumerator_1_t3503____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3503____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3503_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3503____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3503_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19403_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3503_PropertyInfos[] =
{
	&InternalEnumerator_1_t3503____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3503____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3503_InternalEnumerator_1__ctor_m19399_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19399_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19399_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19399/* method */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3503_InternalEnumerator_1__ctor_m19399_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19399_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400/* method */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19401_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19401_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19401/* method */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19401_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19402_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19402_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19402/* method */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19402_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
extern void* RuntimeInvoker_TypeFilterLevel_t1528 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19403_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19403_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19403/* method */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* declaring_type */
	, &TypeFilterLevel_t1528_0_0_0/* return_type */
	, RuntimeInvoker_TypeFilterLevel_t1528/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19403_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3503_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19399_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400_MethodInfo,
	&InternalEnumerator_1_Dispose_m19401_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19402_MethodInfo,
	&InternalEnumerator_1_get_Current_m19403_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3503_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19400_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19402_MethodInfo,
	&InternalEnumerator_1_Dispose_m19401_MethodInfo,
	&InternalEnumerator_1_get_Current_m19403_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3503_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5062_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3503_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5062_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3503_0_0_0;
extern Il2CppType InternalEnumerator_1_t3503_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3503_GenericClass;
TypeInfo InternalEnumerator_1_t3503_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3503_MethodInfos/* methods */
	, InternalEnumerator_1_t3503_PropertyInfos/* properties */
	, InternalEnumerator_1_t3503_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3503_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3503_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3503_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3503_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3503_1_0_0/* this_arg */
	, InternalEnumerator_1_t3503_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3503_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3503)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6628_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo ICollection_1_get_Count_m34312_MethodInfo;
static PropertyInfo ICollection_1_t6628____Count_PropertyInfo = 
{
	&ICollection_1_t6628_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34312_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34313_MethodInfo;
static PropertyInfo ICollection_1_t6628____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6628_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34313_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6628_PropertyInfos[] =
{
	&ICollection_1_t6628____Count_PropertyInfo,
	&ICollection_1_t6628____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34312_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Count()
MethodInfo ICollection_1_get_Count_m34312_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34312_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34313_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34313_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34313_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
static ParameterInfo ICollection_1_t6628_ICollection_1_Add_m34314_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t1528_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34314_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Add(T)
MethodInfo ICollection_1_Add_m34314_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6628_ICollection_1_Add_m34314_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34314_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34315_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Clear()
MethodInfo ICollection_1_Clear_m34315_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34315_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
static ParameterInfo ICollection_1_t6628_ICollection_1_Contains_m34316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t1528_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34316_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Contains(T)
MethodInfo ICollection_1_Contains_m34316_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6628_ICollection_1_Contains_m34316_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34316_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevelU5BU5D_t3742_0_0_0;
extern Il2CppType TypeFilterLevelU5BU5D_t3742_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6628_ICollection_1_CopyTo_m34317_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevelU5BU5D_t3742_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34317_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34317_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6628_ICollection_1_CopyTo_m34317_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34317_GenericMethod/* genericMethod */

};
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
static ParameterInfo ICollection_1_t6628_ICollection_1_Remove_m34318_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t1528_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34318_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Remove(T)
MethodInfo ICollection_1_Remove_m34318_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6628_ICollection_1_Remove_m34318_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34318_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6628_MethodInfos[] =
{
	&ICollection_1_get_Count_m34312_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34313_MethodInfo,
	&ICollection_1_Add_m34314_MethodInfo,
	&ICollection_1_Clear_m34315_MethodInfo,
	&ICollection_1_Contains_m34316_MethodInfo,
	&ICollection_1_CopyTo_m34317_MethodInfo,
	&ICollection_1_Remove_m34318_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6630_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6628_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6630_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6628_0_0_0;
extern Il2CppType ICollection_1_t6628_1_0_0;
struct ICollection_1_t6628;
extern Il2CppGenericClass ICollection_1_t6628_GenericClass;
TypeInfo ICollection_1_t6628_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6628_MethodInfos/* methods */
	, ICollection_1_t6628_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6628_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6628_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6628_0_0_0/* byval_arg */
	, &ICollection_1_t6628_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6628_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern Il2CppType IEnumerator_1_t5062_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34319_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34319_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6630_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5062_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34319_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6630_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34319_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6630_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6630_0_0_0;
extern Il2CppType IEnumerable_1_t6630_1_0_0;
struct IEnumerable_1_t6630;
extern Il2CppGenericClass IEnumerable_1_t6630_GenericClass;
TypeInfo IEnumerable_1_t6630_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6630_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6630_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6630_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6630_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6630_0_0_0/* byval_arg */
	, &IEnumerable_1_t6630_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6630_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6629_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>
extern MethodInfo IList_1_get_Item_m34320_MethodInfo;
extern MethodInfo IList_1_set_Item_m34321_MethodInfo;
static PropertyInfo IList_1_t6629____Item_PropertyInfo = 
{
	&IList_1_t6629_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34320_MethodInfo/* get */
	, &IList_1_set_Item_m34321_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6629_PropertyInfos[] =
{
	&IList_1_t6629____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
static ParameterInfo IList_1_t6629_IList_1_IndexOf_m34322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t1528_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34322_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34322_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6629_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6629_IList_1_IndexOf_m34322_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34322_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
static ParameterInfo IList_1_t6629_IList_1_Insert_m34323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t1528_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34323_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34323_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6629_IList_1_Insert_m34323_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34323_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6629_IList_1_RemoveAt_m34324_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34324_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34324_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6629_IList_1_RemoveAt_m34324_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34324_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6629_IList_1_get_Item_m34320_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
extern void* RuntimeInvoker_TypeFilterLevel_t1528_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34320_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34320_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6629_il2cpp_TypeInfo/* declaring_type */
	, &TypeFilterLevel_t1528_0_0_0/* return_type */
	, RuntimeInvoker_TypeFilterLevel_t1528_Int32_t18/* invoker_method */
	, IList_1_t6629_IList_1_get_Item_m34320_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34320_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeFilterLevel_t1528_0_0_0;
static ParameterInfo IList_1_t6629_IList_1_set_Item_m34321_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeFilterLevel_t1528_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34321_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.Formatters.TypeFilterLevel>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34321_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6629_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6629_IList_1_set_Item_m34321_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34321_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6629_MethodInfos[] =
{
	&IList_1_IndexOf_m34322_MethodInfo,
	&IList_1_Insert_m34323_MethodInfo,
	&IList_1_RemoveAt_m34324_MethodInfo,
	&IList_1_get_Item_m34320_MethodInfo,
	&IList_1_set_Item_m34321_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6629_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6628_il2cpp_TypeInfo,
	&IEnumerable_1_t6630_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6629_0_0_0;
extern Il2CppType IList_1_t6629_1_0_0;
struct IList_1_t6629;
extern Il2CppGenericClass IList_1_t6629_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6629_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6629_MethodInfos/* methods */
	, IList_1_t6629_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6629_il2cpp_TypeInfo/* element_class */
	, IList_1_t6629_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6629_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6629_0_0_0/* byval_arg */
	, &IList_1_t6629_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6629_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5064_il2cpp_TypeInfo;

// System.Runtime.Serialization.ObjectRecordStatus
#include "mscorlib_System_Runtime_Serialization_ObjectRecordStatus.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo IEnumerator_1_get_Current_m34325_MethodInfo;
static PropertyInfo IEnumerator_1_t5064____Current_PropertyInfo = 
{
	&IEnumerator_1_t5064_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34325_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5064_PropertyInfos[] =
{
	&IEnumerator_1_t5064____Current_PropertyInfo,
	NULL
};
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
extern void* RuntimeInvoker_ObjectRecordStatus_t1537 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34325_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34325_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5064_il2cpp_TypeInfo/* declaring_type */
	, &ObjectRecordStatus_t1537_0_0_0/* return_type */
	, RuntimeInvoker_ObjectRecordStatus_t1537/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34325_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5064_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34325_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5064_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5064_0_0_0;
extern Il2CppType IEnumerator_1_t5064_1_0_0;
struct IEnumerator_1_t5064;
extern Il2CppGenericClass IEnumerator_1_t5064_GenericClass;
TypeInfo IEnumerator_1_t5064_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5064_MethodInfos/* methods */
	, IEnumerator_1_t5064_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5064_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5064_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5064_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5064_0_0_0/* byval_arg */
	, &IEnumerator_1_t5064_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5064_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_528.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3504_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_528MethodDeclarations.h"

extern TypeInfo ObjectRecordStatus_t1537_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19408_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisObjectRecordStatus_t1537_m26283_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.ObjectRecordStatus>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisObjectRecordStatus_t1537_m26283 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19404_MethodInfo;
 void InternalEnumerator_1__ctor_m19404 (InternalEnumerator_1_t3504 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405 (InternalEnumerator_1_t3504 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m19408(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19408_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ObjectRecordStatus_t1537_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19406_MethodInfo;
 void InternalEnumerator_1_Dispose_m19406 (InternalEnumerator_1_t3504 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19407_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19407 (InternalEnumerator_1_t3504 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m19408 (InternalEnumerator_1_t3504 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisObjectRecordStatus_t1537_m26283(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisObjectRecordStatus_t1537_m26283_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3504____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3504, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3504____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3504, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3504_FieldInfos[] =
{
	&InternalEnumerator_1_t3504____array_0_FieldInfo,
	&InternalEnumerator_1_t3504____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3504____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3504_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3504____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3504_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19408_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3504_PropertyInfos[] =
{
	&InternalEnumerator_1_t3504____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3504____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3504_InternalEnumerator_1__ctor_m19404_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19404_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19404_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19404/* method */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3504_InternalEnumerator_1__ctor_m19404_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19404_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405/* method */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19406_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19406_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19406/* method */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19406_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19407_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19407_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19407/* method */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19407_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
extern void* RuntimeInvoker_ObjectRecordStatus_t1537 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19408_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19408_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19408/* method */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* declaring_type */
	, &ObjectRecordStatus_t1537_0_0_0/* return_type */
	, RuntimeInvoker_ObjectRecordStatus_t1537/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19408_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3504_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19404_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405_MethodInfo,
	&InternalEnumerator_1_Dispose_m19406_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19407_MethodInfo,
	&InternalEnumerator_1_get_Current_m19408_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3504_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19405_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19407_MethodInfo,
	&InternalEnumerator_1_Dispose_m19406_MethodInfo,
	&InternalEnumerator_1_get_Current_m19408_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3504_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5064_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3504_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5064_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3504_0_0_0;
extern Il2CppType InternalEnumerator_1_t3504_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3504_GenericClass;
TypeInfo InternalEnumerator_1_t3504_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3504_MethodInfos/* methods */
	, InternalEnumerator_1_t3504_PropertyInfos/* properties */
	, InternalEnumerator_1_t3504_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3504_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3504_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3504_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3504_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3504_1_0_0/* this_arg */
	, InternalEnumerator_1_t3504_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3504_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3504)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6631_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo ICollection_1_get_Count_m34326_MethodInfo;
static PropertyInfo ICollection_1_t6631____Count_PropertyInfo = 
{
	&ICollection_1_t6631_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34327_MethodInfo;
static PropertyInfo ICollection_1_t6631____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6631_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34327_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6631_PropertyInfos[] =
{
	&ICollection_1_t6631____Count_PropertyInfo,
	&ICollection_1_t6631____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34326_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Count()
MethodInfo ICollection_1_get_Count_m34326_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34326_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34327_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34327_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34327_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
static ParameterInfo ICollection_1_t6631_ICollection_1_Add_m34328_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t1537_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34328_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Add(T)
MethodInfo ICollection_1_Add_m34328_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Byte_t624/* invoker_method */
	, ICollection_1_t6631_ICollection_1_Add_m34328_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34328_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34329_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Clear()
MethodInfo ICollection_1_Clear_m34329_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34329_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
static ParameterInfo ICollection_1_t6631_ICollection_1_Contains_m34330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t1537_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34330_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Contains(T)
MethodInfo ICollection_1_Contains_m34330_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6631_ICollection_1_Contains_m34330_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34330_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatusU5BU5D_t3743_0_0_0;
extern Il2CppType ObjectRecordStatusU5BU5D_t3743_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6631_ICollection_1_CopyTo_m34331_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatusU5BU5D_t3743_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34331_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34331_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6631_ICollection_1_CopyTo_m34331_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34331_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
static ParameterInfo ICollection_1_t6631_ICollection_1_Remove_m34332_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t1537_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34332_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.ObjectRecordStatus>::Remove(T)
MethodInfo ICollection_1_Remove_m34332_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6631_ICollection_1_Remove_m34332_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34332_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6631_MethodInfos[] =
{
	&ICollection_1_get_Count_m34326_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34327_MethodInfo,
	&ICollection_1_Add_m34328_MethodInfo,
	&ICollection_1_Clear_m34329_MethodInfo,
	&ICollection_1_Contains_m34330_MethodInfo,
	&ICollection_1_CopyTo_m34331_MethodInfo,
	&ICollection_1_Remove_m34332_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6633_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6631_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6633_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6631_0_0_0;
extern Il2CppType ICollection_1_t6631_1_0_0;
struct ICollection_1_t6631;
extern Il2CppGenericClass ICollection_1_t6631_GenericClass;
TypeInfo ICollection_1_t6631_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6631_MethodInfos/* methods */
	, ICollection_1_t6631_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6631_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6631_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6631_0_0_0/* byval_arg */
	, &ICollection_1_t6631_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6631_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>
extern Il2CppType IEnumerator_1_t5064_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34333_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.ObjectRecordStatus>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34333_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6633_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5064_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34333_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6633_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34333_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6633_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6633_0_0_0;
extern Il2CppType IEnumerable_1_t6633_1_0_0;
struct IEnumerable_1_t6633;
extern Il2CppGenericClass IEnumerable_1_t6633_GenericClass;
TypeInfo IEnumerable_1_t6633_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6633_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6633_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6633_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6633_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6633_0_0_0/* byval_arg */
	, &IEnumerable_1_t6633_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6633_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6632_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>
extern MethodInfo IList_1_get_Item_m34334_MethodInfo;
extern MethodInfo IList_1_set_Item_m34335_MethodInfo;
static PropertyInfo IList_1_t6632____Item_PropertyInfo = 
{
	&IList_1_t6632_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34334_MethodInfo/* get */
	, &IList_1_set_Item_m34335_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6632_PropertyInfos[] =
{
	&IList_1_t6632____Item_PropertyInfo,
	NULL
};
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
static ParameterInfo IList_1_t6632_IList_1_IndexOf_m34336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t1537_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34336_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34336_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6632_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6632_IList_1_IndexOf_m34336_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34336_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
static ParameterInfo IList_1_t6632_IList_1_Insert_m34337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t1537_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34337_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34337_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6632_IList_1_Insert_m34337_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34337_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6632_IList_1_RemoveAt_m34338_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34338_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34338_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6632_IList_1_RemoveAt_m34338_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34338_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6632_IList_1_get_Item_m34334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
extern void* RuntimeInvoker_ObjectRecordStatus_t1537_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34334_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34334_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6632_il2cpp_TypeInfo/* declaring_type */
	, &ObjectRecordStatus_t1537_0_0_0/* return_type */
	, RuntimeInvoker_ObjectRecordStatus_t1537_Int32_t18/* invoker_method */
	, IList_1_t6632_IList_1_get_Item_m34334_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34334_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ObjectRecordStatus_t1537_0_0_0;
static ParameterInfo IList_1_t6632_IList_1_set_Item_m34335_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ObjectRecordStatus_t1537_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34335_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.ObjectRecordStatus>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34335_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6632_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6632_IList_1_set_Item_m34335_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34335_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6632_MethodInfos[] =
{
	&IList_1_IndexOf_m34336_MethodInfo,
	&IList_1_Insert_m34337_MethodInfo,
	&IList_1_RemoveAt_m34338_MethodInfo,
	&IList_1_get_Item_m34334_MethodInfo,
	&IList_1_set_Item_m34335_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6632_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6631_il2cpp_TypeInfo,
	&IEnumerable_1_t6633_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6632_0_0_0;
extern Il2CppType IList_1_t6632_1_0_0;
struct IList_1_t6632;
extern Il2CppGenericClass IList_1_t6632_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6632_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6632_MethodInfos/* methods */
	, IList_1_t6632_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6632_il2cpp_TypeInfo/* element_class */
	, IList_1_t6632_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6632_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6632_0_0_0/* byval_arg */
	, &IList_1_t6632_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6632_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5066_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnDeserializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializedAttribut.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m34339_MethodInfo;
static PropertyInfo IEnumerator_1_t5066____Current_PropertyInfo = 
{
	&IEnumerator_1_t5066_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34339_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5066_PropertyInfos[] =
{
	&IEnumerator_1_t5066____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34339_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34339_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5066_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializedAttribute_t1538_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34339_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5066_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34339_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5066_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5066_0_0_0;
extern Il2CppType IEnumerator_1_t5066_1_0_0;
struct IEnumerator_1_t5066;
extern Il2CppGenericClass IEnumerator_1_t5066_GenericClass;
TypeInfo IEnumerator_1_t5066_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5066_MethodInfos/* methods */
	, IEnumerator_1_t5066_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5066_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5066_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5066_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5066_0_0_0/* byval_arg */
	, &IEnumerator_1_t5066_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5066_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_529.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3505_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_529MethodDeclarations.h"

extern TypeInfo OnDeserializedAttribute_t1538_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19413_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnDeserializedAttribute_t1538_m26294_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnDeserializedAttribute_t1538_m26294(__this, p0, method) (OnDeserializedAttribute_t1538 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3505____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3505, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3505____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3505, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3505_FieldInfos[] =
{
	&InternalEnumerator_1_t3505____array_0_FieldInfo,
	&InternalEnumerator_1_t3505____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19410_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3505____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19410_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3505____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3505_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19413_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3505_PropertyInfos[] =
{
	&InternalEnumerator_1_t3505____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3505____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3505_InternalEnumerator_1__ctor_m19409_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19409_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19409_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3505_InternalEnumerator_1__ctor_m19409_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19409_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19410_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19410_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19410_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19411_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19411_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19411_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19412_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19412_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19412_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19413_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19413_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializedAttribute_t1538_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19413_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3505_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19409_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19410_MethodInfo,
	&InternalEnumerator_1_Dispose_m19411_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19412_MethodInfo,
	&InternalEnumerator_1_get_Current_m19413_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19412_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19411_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3505_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19410_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19412_MethodInfo,
	&InternalEnumerator_1_Dispose_m19411_MethodInfo,
	&InternalEnumerator_1_get_Current_m19413_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3505_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5066_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3505_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5066_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnDeserializedAttribute_t1538_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3505_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19413_MethodInfo/* Method Usage */,
	&OnDeserializedAttribute_t1538_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnDeserializedAttribute_t1538_m26294_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3505_0_0_0;
extern Il2CppType InternalEnumerator_1_t3505_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3505_GenericClass;
TypeInfo InternalEnumerator_1_t3505_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3505_MethodInfos/* methods */
	, InternalEnumerator_1_t3505_PropertyInfos/* properties */
	, InternalEnumerator_1_t3505_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3505_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3505_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3505_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3505_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3505_1_0_0/* this_arg */
	, InternalEnumerator_1_t3505_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3505_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3505_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3505)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6634_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo ICollection_1_get_Count_m34340_MethodInfo;
static PropertyInfo ICollection_1_t6634____Count_PropertyInfo = 
{
	&ICollection_1_t6634_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34341_MethodInfo;
static PropertyInfo ICollection_1_t6634____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6634_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34341_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6634_PropertyInfos[] =
{
	&ICollection_1_t6634____Count_PropertyInfo,
	&ICollection_1_t6634____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34340_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m34340_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34340_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34341_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34341_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34341_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
static ParameterInfo ICollection_1_t6634_ICollection_1_Add_m34342_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t1538_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34342_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m34342_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6634_ICollection_1_Add_m34342_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34342_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34343_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m34343_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34343_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
static ParameterInfo ICollection_1_t6634_ICollection_1_Contains_m34344_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t1538_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34344_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m34344_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6634_ICollection_1_Contains_m34344_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34344_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttributeU5BU5D_t3744_0_0_0;
extern Il2CppType OnDeserializedAttributeU5BU5D_t3744_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6634_ICollection_1_CopyTo_m34345_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttributeU5BU5D_t3744_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34345_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34345_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6634_ICollection_1_CopyTo_m34345_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34345_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
static ParameterInfo ICollection_1_t6634_ICollection_1_Remove_m34346_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t1538_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34346_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m34346_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6634_ICollection_1_Remove_m34346_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34346_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6634_MethodInfos[] =
{
	&ICollection_1_get_Count_m34340_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34341_MethodInfo,
	&ICollection_1_Add_m34342_MethodInfo,
	&ICollection_1_Clear_m34343_MethodInfo,
	&ICollection_1_Contains_m34344_MethodInfo,
	&ICollection_1_CopyTo_m34345_MethodInfo,
	&ICollection_1_Remove_m34346_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6636_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6634_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6636_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6634_0_0_0;
extern Il2CppType ICollection_1_t6634_1_0_0;
struct ICollection_1_t6634;
extern Il2CppGenericClass ICollection_1_t6634_GenericClass;
TypeInfo ICollection_1_t6634_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6634_MethodInfos/* methods */
	, ICollection_1_t6634_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6634_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6634_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6634_0_0_0/* byval_arg */
	, &ICollection_1_t6634_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6634_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern Il2CppType IEnumerator_1_t5066_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34347_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34347_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6636_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5066_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34347_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6636_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34347_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6636_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6636_0_0_0;
extern Il2CppType IEnumerable_1_t6636_1_0_0;
struct IEnumerable_1_t6636;
extern Il2CppGenericClass IEnumerable_1_t6636_GenericClass;
TypeInfo IEnumerable_1_t6636_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6636_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6636_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6636_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6636_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6636_0_0_0/* byval_arg */
	, &IEnumerable_1_t6636_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6636_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6635_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>
extern MethodInfo IList_1_get_Item_m34348_MethodInfo;
extern MethodInfo IList_1_set_Item_m34349_MethodInfo;
static PropertyInfo IList_1_t6635____Item_PropertyInfo = 
{
	&IList_1_t6635_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34348_MethodInfo/* get */
	, &IList_1_set_Item_m34349_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6635_PropertyInfos[] =
{
	&IList_1_t6635____Item_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
static ParameterInfo IList_1_t6635_IList_1_IndexOf_m34350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t1538_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34350_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34350_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6635_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6635_IList_1_IndexOf_m34350_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34350_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
static ParameterInfo IList_1_t6635_IList_1_Insert_m34351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t1538_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34351_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34351_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6635_IList_1_Insert_m34351_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34351_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6635_IList_1_RemoveAt_m34352_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34352_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34352_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6635_IList_1_RemoveAt_m34352_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34352_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6635_IList_1_get_Item_m34348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34348_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34348_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6635_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializedAttribute_t1538_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6635_IList_1_get_Item_m34348_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34348_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OnDeserializedAttribute_t1538_0_0_0;
static ParameterInfo IList_1_t6635_IList_1_set_Item_m34349_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializedAttribute_t1538_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34349_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34349_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6635_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6635_IList_1_set_Item_m34349_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34349_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6635_MethodInfos[] =
{
	&IList_1_IndexOf_m34350_MethodInfo,
	&IList_1_Insert_m34351_MethodInfo,
	&IList_1_RemoveAt_m34352_MethodInfo,
	&IList_1_get_Item_m34348_MethodInfo,
	&IList_1_set_Item_m34349_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6635_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6634_il2cpp_TypeInfo,
	&IEnumerable_1_t6636_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6635_0_0_0;
extern Il2CppType IList_1_t6635_1_0_0;
struct IList_1_t6635;
extern Il2CppGenericClass IList_1_t6635_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6635_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6635_MethodInfos/* methods */
	, IList_1_t6635_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6635_il2cpp_TypeInfo/* element_class */
	, IList_1_t6635_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6635_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6635_0_0_0/* byval_arg */
	, &IList_1_t6635_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6635_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5068_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnDeserializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnDeserializingAttribu.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo IEnumerator_1_get_Current_m34353_MethodInfo;
static PropertyInfo IEnumerator_1_t5068____Current_PropertyInfo = 
{
	&IEnumerator_1_t5068_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34353_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5068_PropertyInfos[] =
{
	&IEnumerator_1_t5068____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34353_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34353_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5068_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializingAttribute_t1539_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34353_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5068_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34353_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5068_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5068_0_0_0;
extern Il2CppType IEnumerator_1_t5068_1_0_0;
struct IEnumerator_1_t5068;
extern Il2CppGenericClass IEnumerator_1_t5068_GenericClass;
TypeInfo IEnumerator_1_t5068_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5068_MethodInfos/* methods */
	, IEnumerator_1_t5068_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5068_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5068_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5068_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5068_0_0_0/* byval_arg */
	, &IEnumerator_1_t5068_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5068_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_530.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3506_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_530MethodDeclarations.h"

extern TypeInfo OnDeserializingAttribute_t1539_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19418_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnDeserializingAttribute_t1539_m26305_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnDeserializingAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnDeserializingAttribute_t1539_m26305(__this, p0, method) (OnDeserializingAttribute_t1539 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3506____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3506, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3506____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3506, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3506_FieldInfos[] =
{
	&InternalEnumerator_1_t3506____array_0_FieldInfo,
	&InternalEnumerator_1_t3506____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19415_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3506____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19415_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3506____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3506_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19418_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3506_PropertyInfos[] =
{
	&InternalEnumerator_1_t3506____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3506____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3506_InternalEnumerator_1__ctor_m19414_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19414_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19414_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3506_InternalEnumerator_1__ctor_m19414_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19414_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19415_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19415_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19415_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19416_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19416_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19416_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19417_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19417_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19417_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19418_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19418_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializingAttribute_t1539_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19418_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3506_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19414_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19415_MethodInfo,
	&InternalEnumerator_1_Dispose_m19416_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19417_MethodInfo,
	&InternalEnumerator_1_get_Current_m19418_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19417_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19416_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3506_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19415_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19417_MethodInfo,
	&InternalEnumerator_1_Dispose_m19416_MethodInfo,
	&InternalEnumerator_1_get_Current_m19418_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3506_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5068_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3506_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5068_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnDeserializingAttribute_t1539_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3506_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19418_MethodInfo/* Method Usage */,
	&OnDeserializingAttribute_t1539_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnDeserializingAttribute_t1539_m26305_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3506_0_0_0;
extern Il2CppType InternalEnumerator_1_t3506_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3506_GenericClass;
TypeInfo InternalEnumerator_1_t3506_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3506_MethodInfos/* methods */
	, InternalEnumerator_1_t3506_PropertyInfos/* properties */
	, InternalEnumerator_1_t3506_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3506_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3506_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3506_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3506_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3506_1_0_0/* this_arg */
	, InternalEnumerator_1_t3506_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3506_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3506_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3506)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6637_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo ICollection_1_get_Count_m34354_MethodInfo;
static PropertyInfo ICollection_1_t6637____Count_PropertyInfo = 
{
	&ICollection_1_t6637_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34355_MethodInfo;
static PropertyInfo ICollection_1_t6637____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6637_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34355_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6637_PropertyInfos[] =
{
	&ICollection_1_t6637____Count_PropertyInfo,
	&ICollection_1_t6637____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34354_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m34354_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34354_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34355_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34355_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34355_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
static ParameterInfo ICollection_1_t6637_ICollection_1_Add_m34356_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t1539_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34356_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Add(T)
MethodInfo ICollection_1_Add_m34356_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6637_ICollection_1_Add_m34356_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34356_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34357_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Clear()
MethodInfo ICollection_1_Clear_m34357_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34357_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
static ParameterInfo ICollection_1_t6637_ICollection_1_Contains_m34358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t1539_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34358_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m34358_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6637_ICollection_1_Contains_m34358_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34358_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttributeU5BU5D_t3745_0_0_0;
extern Il2CppType OnDeserializingAttributeU5BU5D_t3745_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6637_ICollection_1_CopyTo_m34359_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttributeU5BU5D_t3745_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34359_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34359_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6637_ICollection_1_CopyTo_m34359_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34359_GenericMethod/* genericMethod */

};
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
static ParameterInfo ICollection_1_t6637_ICollection_1_Remove_m34360_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t1539_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34360_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnDeserializingAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m34360_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6637_ICollection_1_Remove_m34360_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34360_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6637_MethodInfos[] =
{
	&ICollection_1_get_Count_m34354_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34355_MethodInfo,
	&ICollection_1_Add_m34356_MethodInfo,
	&ICollection_1_Clear_m34357_MethodInfo,
	&ICollection_1_Contains_m34358_MethodInfo,
	&ICollection_1_CopyTo_m34359_MethodInfo,
	&ICollection_1_Remove_m34360_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6639_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6637_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6639_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6637_0_0_0;
extern Il2CppType ICollection_1_t6637_1_0_0;
struct ICollection_1_t6637;
extern Il2CppGenericClass ICollection_1_t6637_GenericClass;
TypeInfo ICollection_1_t6637_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6637_MethodInfos/* methods */
	, ICollection_1_t6637_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6637_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6637_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6637_0_0_0/* byval_arg */
	, &ICollection_1_t6637_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6637_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern Il2CppType IEnumerator_1_t5068_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34361_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnDeserializingAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34361_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6639_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5068_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34361_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6639_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34361_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6639_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6639_0_0_0;
extern Il2CppType IEnumerable_1_t6639_1_0_0;
struct IEnumerable_1_t6639;
extern Il2CppGenericClass IEnumerable_1_t6639_GenericClass;
TypeInfo IEnumerable_1_t6639_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6639_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6639_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6639_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6639_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6639_0_0_0/* byval_arg */
	, &IEnumerable_1_t6639_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6639_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6638_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>
extern MethodInfo IList_1_get_Item_m34362_MethodInfo;
extern MethodInfo IList_1_set_Item_m34363_MethodInfo;
static PropertyInfo IList_1_t6638____Item_PropertyInfo = 
{
	&IList_1_t6638_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34362_MethodInfo/* get */
	, &IList_1_set_Item_m34363_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6638_PropertyInfos[] =
{
	&IList_1_t6638____Item_PropertyInfo,
	NULL
};
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
static ParameterInfo IList_1_t6638_IList_1_IndexOf_m34364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t1539_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34364_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34364_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6638_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6638_IList_1_IndexOf_m34364_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34364_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
static ParameterInfo IList_1_t6638_IList_1_Insert_m34365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t1539_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34365_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34365_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6638_IList_1_Insert_m34365_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34365_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6638_IList_1_RemoveAt_m34366_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34366_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34366_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6638_IList_1_RemoveAt_m34366_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34366_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6638_IList_1_get_Item_m34362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34362_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34362_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6638_il2cpp_TypeInfo/* declaring_type */
	, &OnDeserializingAttribute_t1539_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6638_IList_1_get_Item_m34362_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34362_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OnDeserializingAttribute_t1539_0_0_0;
static ParameterInfo IList_1_t6638_IList_1_set_Item_m34363_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OnDeserializingAttribute_t1539_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34363_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnDeserializingAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34363_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6638_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6638_IList_1_set_Item_m34363_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34363_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6638_MethodInfos[] =
{
	&IList_1_IndexOf_m34364_MethodInfo,
	&IList_1_Insert_m34365_MethodInfo,
	&IList_1_RemoveAt_m34366_MethodInfo,
	&IList_1_get_Item_m34362_MethodInfo,
	&IList_1_set_Item_m34363_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6638_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6637_il2cpp_TypeInfo,
	&IEnumerable_1_t6639_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6638_0_0_0;
extern Il2CppType IList_1_t6638_1_0_0;
struct IList_1_t6638;
extern Il2CppGenericClass IList_1_t6638_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6638_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6638_MethodInfos/* methods */
	, IList_1_t6638_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6638_il2cpp_TypeInfo/* element_class */
	, IList_1_t6638_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6638_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6638_0_0_0/* byval_arg */
	, &IList_1_t6638_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6638_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5070_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnSerializedAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializedAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m34367_MethodInfo;
static PropertyInfo IEnumerator_1_t5070____Current_PropertyInfo = 
{
	&IEnumerator_1_t5070_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5070_PropertyInfos[] =
{
	&IEnumerator_1_t5070____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34367_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34367_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5070_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializedAttribute_t1540_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34367_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5070_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34367_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5070_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5070_0_0_0;
extern Il2CppType IEnumerator_1_t5070_1_0_0;
struct IEnumerator_1_t5070;
extern Il2CppGenericClass IEnumerator_1_t5070_GenericClass;
TypeInfo IEnumerator_1_t5070_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5070_MethodInfos/* methods */
	, IEnumerator_1_t5070_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5070_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5070_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5070_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5070_0_0_0/* byval_arg */
	, &IEnumerator_1_t5070_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5070_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_531.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3507_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_531MethodDeclarations.h"

extern TypeInfo OnSerializedAttribute_t1540_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19423_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnSerializedAttribute_t1540_m26316_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnSerializedAttribute_t1540_m26316(__this, p0, method) (OnSerializedAttribute_t1540 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3507____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3507, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3507____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3507, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3507_FieldInfos[] =
{
	&InternalEnumerator_1_t3507____array_0_FieldInfo,
	&InternalEnumerator_1_t3507____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19420_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3507____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19420_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3507____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3507_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19423_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3507_PropertyInfos[] =
{
	&InternalEnumerator_1_t3507____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3507____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3507_InternalEnumerator_1__ctor_m19419_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19419_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19419_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3507_InternalEnumerator_1__ctor_m19419_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19419_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19420_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19420_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19420_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19421_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19421_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19421_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19422_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19422_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19422_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19423_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19423_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializedAttribute_t1540_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19423_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3507_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19419_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19420_MethodInfo,
	&InternalEnumerator_1_Dispose_m19421_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19422_MethodInfo,
	&InternalEnumerator_1_get_Current_m19423_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19422_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19421_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3507_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19420_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19422_MethodInfo,
	&InternalEnumerator_1_Dispose_m19421_MethodInfo,
	&InternalEnumerator_1_get_Current_m19423_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3507_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5070_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3507_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5070_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnSerializedAttribute_t1540_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3507_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19423_MethodInfo/* Method Usage */,
	&OnSerializedAttribute_t1540_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnSerializedAttribute_t1540_m26316_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3507_0_0_0;
extern Il2CppType InternalEnumerator_1_t3507_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3507_GenericClass;
TypeInfo InternalEnumerator_1_t3507_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3507_MethodInfos/* methods */
	, InternalEnumerator_1_t3507_PropertyInfos/* properties */
	, InternalEnumerator_1_t3507_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3507_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3507_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3507_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3507_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3507_1_0_0/* this_arg */
	, InternalEnumerator_1_t3507_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3507_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3507_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3507)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6640_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo ICollection_1_get_Count_m34368_MethodInfo;
static PropertyInfo ICollection_1_t6640____Count_PropertyInfo = 
{
	&ICollection_1_t6640_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34368_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34369_MethodInfo;
static PropertyInfo ICollection_1_t6640____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6640_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6640_PropertyInfos[] =
{
	&ICollection_1_t6640____Count_PropertyInfo,
	&ICollection_1_t6640____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34368_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m34368_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34368_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34369_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34369_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34369_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
static ParameterInfo ICollection_1_t6640_ICollection_1_Add_m34370_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t1540_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34370_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m34370_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6640_ICollection_1_Add_m34370_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34370_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34371_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m34371_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34371_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
static ParameterInfo ICollection_1_t6640_ICollection_1_Contains_m34372_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t1540_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34372_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m34372_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6640_ICollection_1_Contains_m34372_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34372_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttributeU5BU5D_t3746_0_0_0;
extern Il2CppType OnSerializedAttributeU5BU5D_t3746_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6640_ICollection_1_CopyTo_m34373_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttributeU5BU5D_t3746_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34373_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34373_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6640_ICollection_1_CopyTo_m34373_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34373_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
static ParameterInfo ICollection_1_t6640_ICollection_1_Remove_m34374_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t1540_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34374_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Serialization.OnSerializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m34374_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6640_ICollection_1_Remove_m34374_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34374_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6640_MethodInfos[] =
{
	&ICollection_1_get_Count_m34368_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34369_MethodInfo,
	&ICollection_1_Add_m34370_MethodInfo,
	&ICollection_1_Clear_m34371_MethodInfo,
	&ICollection_1_Contains_m34372_MethodInfo,
	&ICollection_1_CopyTo_m34373_MethodInfo,
	&ICollection_1_Remove_m34374_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6642_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6640_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6642_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6640_0_0_0;
extern Il2CppType ICollection_1_t6640_1_0_0;
struct ICollection_1_t6640;
extern Il2CppGenericClass ICollection_1_t6640_GenericClass;
TypeInfo ICollection_1_t6640_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6640_MethodInfos/* methods */
	, ICollection_1_t6640_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6640_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6640_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6640_0_0_0/* byval_arg */
	, &ICollection_1_t6640_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6640_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>
extern Il2CppType IEnumerator_1_t5070_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34375_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Serialization.OnSerializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34375_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6642_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5070_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34375_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6642_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34375_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6642_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6642_0_0_0;
extern Il2CppType IEnumerable_1_t6642_1_0_0;
struct IEnumerable_1_t6642;
extern Il2CppGenericClass IEnumerable_1_t6642_GenericClass;
TypeInfo IEnumerable_1_t6642_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6642_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6642_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6642_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6642_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6642_0_0_0/* byval_arg */
	, &IEnumerable_1_t6642_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6642_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6641_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>
extern MethodInfo IList_1_get_Item_m34376_MethodInfo;
extern MethodInfo IList_1_set_Item_m34377_MethodInfo;
static PropertyInfo IList_1_t6641____Item_PropertyInfo = 
{
	&IList_1_t6641_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34376_MethodInfo/* get */
	, &IList_1_set_Item_m34377_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6641_PropertyInfos[] =
{
	&IList_1_t6641____Item_PropertyInfo,
	NULL
};
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
static ParameterInfo IList_1_t6641_IList_1_IndexOf_m34378_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t1540_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34378_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34378_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6641_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6641_IList_1_IndexOf_m34378_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34378_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
static ParameterInfo IList_1_t6641_IList_1_Insert_m34379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t1540_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34379_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34379_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6641_IList_1_Insert_m34379_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34379_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6641_IList_1_RemoveAt_m34380_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34380_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34380_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6641_IList_1_RemoveAt_m34380_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34380_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6641_IList_1_get_Item_m34376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34376_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34376_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6641_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializedAttribute_t1540_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6641_IList_1_get_Item_m34376_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34376_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType OnSerializedAttribute_t1540_0_0_0;
static ParameterInfo IList_1_t6641_IList_1_set_Item_m34377_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OnSerializedAttribute_t1540_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34377_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.Serialization.OnSerializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34377_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6641_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6641_IList_1_set_Item_m34377_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34377_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6641_MethodInfos[] =
{
	&IList_1_IndexOf_m34378_MethodInfo,
	&IList_1_Insert_m34379_MethodInfo,
	&IList_1_RemoveAt_m34380_MethodInfo,
	&IList_1_get_Item_m34376_MethodInfo,
	&IList_1_set_Item_m34377_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6641_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6640_il2cpp_TypeInfo,
	&IEnumerable_1_t6642_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6641_0_0_0;
extern Il2CppType IList_1_t6641_1_0_0;
struct IList_1_t6641;
extern Il2CppGenericClass IList_1_t6641_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6641_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6641_MethodInfos/* methods */
	, IList_1_t6641_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6641_il2cpp_TypeInfo/* element_class */
	, IList_1_t6641_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6641_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6641_0_0_0/* byval_arg */
	, &IList_1_t6641_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6641_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5072_il2cpp_TypeInfo;

// System.Runtime.Serialization.OnSerializingAttribute
#include "mscorlib_System_Runtime_Serialization_OnSerializingAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern MethodInfo IEnumerator_1_get_Current_m34381_MethodInfo;
static PropertyInfo IEnumerator_1_t5072____Current_PropertyInfo = 
{
	&IEnumerator_1_t5072_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5072_PropertyInfos[] =
{
	&IEnumerator_1_t5072____Current_PropertyInfo,
	NULL
};
extern Il2CppType OnSerializingAttribute_t1541_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34381_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34381_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5072_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializingAttribute_t1541_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34381_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5072_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34381_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5072_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5072_0_0_0;
extern Il2CppType IEnumerator_1_t5072_1_0_0;
struct IEnumerator_1_t5072;
extern Il2CppGenericClass IEnumerator_1_t5072_GenericClass;
TypeInfo IEnumerator_1_t5072_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5072_MethodInfos/* methods */
	, IEnumerator_1_t5072_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5072_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5072_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5072_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5072_0_0_0/* byval_arg */
	, &IEnumerator_1_t5072_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5072_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_532.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3508_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_532MethodDeclarations.h"

extern TypeInfo OnSerializingAttribute_t1541_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19428_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOnSerializingAttribute_t1541_m26327_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Serialization.OnSerializingAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOnSerializingAttribute_t1541_m26327(__this, p0, method) (OnSerializingAttribute_t1541 *)Array_InternalArray__get_Item_TisObject_t_m19779_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3508____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3508, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3508____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3508, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3508_FieldInfos[] =
{
	&InternalEnumerator_1_t3508____array_0_FieldInfo,
	&InternalEnumerator_1_t3508____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19425_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3508____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3508_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19425_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3508____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3508_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19428_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3508_PropertyInfos[] =
{
	&InternalEnumerator_1_t3508____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3508____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3508_InternalEnumerator_1__ctor_m19424_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19424_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19424_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10439_gshared/* method */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3508_InternalEnumerator_1__ctor_m19424_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19424_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19425_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19425_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10441_gshared/* method */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19425_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19426_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19426_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10443_gshared/* method */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19426_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19427_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19427_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10445_gshared/* method */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19427_GenericMethod/* genericMethod */

};
extern Il2CppType OnSerializingAttribute_t1541_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19428_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.Serialization.OnSerializingAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19428_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10447_gshared/* method */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* declaring_type */
	, &OnSerializingAttribute_t1541_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19428_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3508_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19424_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19425_MethodInfo,
	&InternalEnumerator_1_Dispose_m19426_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19427_MethodInfo,
	&InternalEnumerator_1_get_Current_m19428_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19427_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19426_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3508_VTable[] =
{
	&ValueType_Equals_m1360_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1361_MethodInfo,
	&ValueType_ToString_m1476_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19425_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19427_MethodInfo,
	&InternalEnumerator_1_Dispose_m19426_MethodInfo,
	&InternalEnumerator_1_get_Current_m19428_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3508_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5072_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3508_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5072_il2cpp_TypeInfo, 7},
};
extern TypeInfo OnSerializingAttribute_t1541_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3508_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19428_MethodInfo/* Method Usage */,
	&OnSerializingAttribute_t1541_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOnSerializingAttribute_t1541_m26327_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3508_0_0_0;
extern Il2CppType InternalEnumerator_1_t3508_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3508_GenericClass;
TypeInfo InternalEnumerator_1_t3508_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3508_MethodInfos/* methods */
	, InternalEnumerator_1_t3508_PropertyInfos/* properties */
	, InternalEnumerator_1_t3508_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3508_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3508_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3508_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3508_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3508_1_0_0/* this_arg */
	, InternalEnumerator_1_t3508_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3508_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3508_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3508)+ sizeof (Il2CppObject)/* instance_size */
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
