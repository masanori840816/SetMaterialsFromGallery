#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.DateTime/Which>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_548.h"
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
extern TypeInfo InternalEnumerator_1_t3540_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTime/Which>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_548MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.DateTime/Which
#include "mscorlib_System_DateTime_Which.h"
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
extern TypeInfo Which_t1656_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t949_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m19662_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m4114_MethodInfo;
extern MethodInfo Array_get_Length_m4119_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWhich_t1656_m26513_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime/Which>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime/Which>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWhich_t1656_m26513 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19658_MethodInfo;
 void InternalEnumerator_1__ctor_m19658 (InternalEnumerator_1_t3540 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659 (InternalEnumerator_1_t3540 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19662(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19662_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Which_t1656_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19660_MethodInfo;
 void InternalEnumerator_1_Dispose_m19660 (InternalEnumerator_1_t3540 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime/Which>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19661_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19661 (InternalEnumerator_1_t3540 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTime/Which>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19662 (InternalEnumerator_1_t3540 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWhich_t1656_m26513(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWhich_t1656_m26513_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime/Which>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3540____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3540, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3540____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3540, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3540_FieldInfos[] =
{
	&InternalEnumerator_1_t3540____array_0_FieldInfo,
	&InternalEnumerator_1_t3540____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3540____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3540_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3540____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3540_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19662_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3540_PropertyInfos[] =
{
	&InternalEnumerator_1_t3540____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3540____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3540_InternalEnumerator_1__ctor_m19658_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19658_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19658_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19658/* method */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3540_InternalEnumerator_1__ctor_m19658_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19658_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659/* method */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19660_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19660_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19660/* method */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19660_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19661_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime/Which>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19661_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19661/* method */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19661_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t1656_0_0_0;
extern void* RuntimeInvoker_Which_t1656 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19662_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DateTime/Which>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19662_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19662/* method */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* declaring_type */
	, &Which_t1656_0_0_0/* return_type */
	, RuntimeInvoker_Which_t1656/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19662_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3540_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19658_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659_MethodInfo,
	&InternalEnumerator_1_Dispose_m19660_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19661_MethodInfo,
	&InternalEnumerator_1_get_Current_m19662_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m1357_MethodInfo;
extern MethodInfo Object_Finalize_m7_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m1358_MethodInfo;
extern MethodInfo ValueType_ToString_m1473_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3540_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19659_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19661_MethodInfo,
	&InternalEnumerator_1_Dispose_m19660_MethodInfo,
	&InternalEnumerator_1_get_Current_m19662_MethodInfo,
};
extern TypeInfo IEnumerator_t112_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t301_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t5105_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t3540_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5105_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3540_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5105_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3540_0_0_0;
extern Il2CppType InternalEnumerator_1_t3540_1_0_0;
extern TypeInfo ValueType_t296_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t3540_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t3540_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3540_MethodInfos/* methods */
	, InternalEnumerator_1_t3540_PropertyInfos/* properties */
	, InternalEnumerator_1_t3540_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3540_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3540_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3540_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3540_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3540_1_0_0/* this_arg */
	, InternalEnumerator_1_t3540_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3540_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3540)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6687_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime/Which>
extern MethodInfo ICollection_1_get_Count_m34612_MethodInfo;
static PropertyInfo ICollection_1_t6687____Count_PropertyInfo = 
{
	&ICollection_1_t6687_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34612_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34613_MethodInfo;
static PropertyInfo ICollection_1_t6687____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6687_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34613_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6687_PropertyInfos[] =
{
	&ICollection_1_t6687____Count_PropertyInfo,
	&ICollection_1_t6687____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34612_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_Count()
MethodInfo ICollection_1_get_Count_m34612_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34612_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34613_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34613_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34613_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t1656_0_0_0;
extern Il2CppType Which_t1656_0_0_0;
static ParameterInfo ICollection_1_t6687_ICollection_1_Add_m34614_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t1656_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34614_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Add(T)
MethodInfo ICollection_1_Add_m34614_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6687_ICollection_1_Add_m34614_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34614_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34615_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Clear()
MethodInfo ICollection_1_Clear_m34615_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34615_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t1656_0_0_0;
static ParameterInfo ICollection_1_t6687_ICollection_1_Contains_m34616_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t1656_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34616_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Contains(T)
MethodInfo ICollection_1_Contains_m34616_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6687_ICollection_1_Contains_m34616_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34616_GenericMethod/* genericMethod */

};
extern Il2CppType WhichU5BU5D_t3761_0_0_0;
extern Il2CppType WhichU5BU5D_t3761_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6687_ICollection_1_CopyTo_m34617_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WhichU5BU5D_t3761_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34617_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34617_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6687_ICollection_1_CopyTo_m34617_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34617_GenericMethod/* genericMethod */

};
extern Il2CppType Which_t1656_0_0_0;
static ParameterInfo ICollection_1_t6687_ICollection_1_Remove_m34618_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t1656_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34618_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Remove(T)
MethodInfo ICollection_1_Remove_m34618_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6687_ICollection_1_Remove_m34618_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34618_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6687_MethodInfos[] =
{
	&ICollection_1_get_Count_m34612_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34613_MethodInfo,
	&ICollection_1_Add_m34614_MethodInfo,
	&ICollection_1_Clear_m34615_MethodInfo,
	&ICollection_1_Contains_m34616_MethodInfo,
	&ICollection_1_CopyTo_m34617_MethodInfo,
	&ICollection_1_Remove_m34618_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t641_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t6689_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6687_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6689_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6687_0_0_0;
extern Il2CppType ICollection_1_t6687_1_0_0;
struct ICollection_1_t6687;
extern Il2CppGenericClass ICollection_1_t6687_GenericClass;
TypeInfo ICollection_1_t6687_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6687_MethodInfos/* methods */
	, ICollection_1_t6687_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6687_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6687_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6687_0_0_0/* byval_arg */
	, &ICollection_1_t6687_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6687_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime/Which>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime/Which>
extern Il2CppType IEnumerator_1_t5105_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34619_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime/Which>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34619_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6689_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5105_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34619_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6689_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34619_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6689_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6689_0_0_0;
extern Il2CppType IEnumerable_1_t6689_1_0_0;
struct IEnumerable_1_t6689;
extern Il2CppGenericClass IEnumerable_1_t6689_GenericClass;
TypeInfo IEnumerable_1_t6689_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6689_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6689_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6689_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6689_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6689_0_0_0/* byval_arg */
	, &IEnumerable_1_t6689_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6689_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6688_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTime/Which>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTime/Which>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTime/Which>
extern MethodInfo IList_1_get_Item_m34620_MethodInfo;
extern MethodInfo IList_1_set_Item_m34621_MethodInfo;
static PropertyInfo IList_1_t6688____Item_PropertyInfo = 
{
	&IList_1_t6688_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34620_MethodInfo/* get */
	, &IList_1_set_Item_m34621_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6688_PropertyInfos[] =
{
	&IList_1_t6688____Item_PropertyInfo,
	NULL
};
extern Il2CppType Which_t1656_0_0_0;
static ParameterInfo IList_1_t6688_IList_1_IndexOf_m34622_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t1656_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34622_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DateTime/Which>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34622_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6688_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6688_IList_1_IndexOf_m34622_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34622_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Which_t1656_0_0_0;
static ParameterInfo IList_1_t6688_IList_1_Insert_m34623_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Which_t1656_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34623_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34623_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6688_IList_1_Insert_m34623_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34623_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6688_IList_1_RemoveAt_m34624_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34624_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34624_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6688_IList_1_RemoveAt_m34624_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34624_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6688_IList_1_get_Item_m34620_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Which_t1656_0_0_0;
extern void* RuntimeInvoker_Which_t1656_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34620_GenericMethod;
// T System.Collections.Generic.IList`1<System.DateTime/Which>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34620_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6688_il2cpp_TypeInfo/* declaring_type */
	, &Which_t1656_0_0_0/* return_type */
	, RuntimeInvoker_Which_t1656_Int32_t18/* invoker_method */
	, IList_1_t6688_IList_1_get_Item_m34620_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34620_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType Which_t1656_0_0_0;
static ParameterInfo IList_1_t6688_IList_1_set_Item_m34621_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Which_t1656_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34621_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34621_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6688_IList_1_set_Item_m34621_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34621_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6688_MethodInfos[] =
{
	&IList_1_IndexOf_m34622_MethodInfo,
	&IList_1_Insert_m34623_MethodInfo,
	&IList_1_RemoveAt_m34624_MethodInfo,
	&IList_1_get_Item_m34620_MethodInfo,
	&IList_1_set_Item_m34621_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6688_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6687_il2cpp_TypeInfo,
	&IEnumerable_1_t6689_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6688_0_0_0;
extern Il2CppType IList_1_t6688_1_0_0;
struct IList_1_t6688;
extern Il2CppGenericClass IList_1_t6688_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6688_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6688_MethodInfos/* methods */
	, IList_1_t6688_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6688_il2cpp_TypeInfo/* element_class */
	, IList_1_t6688_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6688_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6688_0_0_0/* byval_arg */
	, &IList_1_t6688_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6688_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5107_il2cpp_TypeInfo;

// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"


// T System.Collections.Generic.IEnumerator`1<System.DateTimeKind>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTimeKind>
extern MethodInfo IEnumerator_1_get_Current_m34625_MethodInfo;
static PropertyInfo IEnumerator_1_t5107____Current_PropertyInfo = 
{
	&IEnumerator_1_t5107_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34625_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5107_PropertyInfos[] =
{
	&IEnumerator_1_t5107____Current_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeKind_t1658_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t1658 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34625_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.DateTimeKind>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34625_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5107_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t1658_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t1658/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34625_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5107_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34625_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5107_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5107_0_0_0;
extern Il2CppType IEnumerator_1_t5107_1_0_0;
struct IEnumerator_1_t5107;
extern Il2CppGenericClass IEnumerator_1_t5107_GenericClass;
TypeInfo IEnumerator_1_t5107_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5107_MethodInfos/* methods */
	, IEnumerator_1_t5107_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5107_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5107_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5107_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5107_0_0_0/* byval_arg */
	, &IEnumerator_1_t5107_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5107_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.DateTimeKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_549.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3541_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTimeKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_549MethodDeclarations.h"

extern TypeInfo DateTimeKind_t1658_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19667_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDateTimeKind_t1658_m26524_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTimeKind>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTimeKind>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDateTimeKind_t1658_m26524 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19663_MethodInfo;
 void InternalEnumerator_1__ctor_m19663 (InternalEnumerator_1_t3541 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664 (InternalEnumerator_1_t3541 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19667(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19667_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DateTimeKind_t1658_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19665_MethodInfo;
 void InternalEnumerator_1_Dispose_m19665 (InternalEnumerator_1_t3541 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTimeKind>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19666_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19666 (InternalEnumerator_1_t3541 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTimeKind>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19667 (InternalEnumerator_1_t3541 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDateTimeKind_t1658_m26524(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDateTimeKind_t1658_m26524_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTimeKind>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3541____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3541, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3541____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3541, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3541_FieldInfos[] =
{
	&InternalEnumerator_1_t3541____array_0_FieldInfo,
	&InternalEnumerator_1_t3541____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3541____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3541_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3541____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3541_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19667_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3541_PropertyInfos[] =
{
	&InternalEnumerator_1_t3541____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3541____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3541_InternalEnumerator_1__ctor_m19663_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19663_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19663_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19663/* method */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3541_InternalEnumerator_1__ctor_m19663_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19663_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664/* method */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19665_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19665_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19665/* method */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19665_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19666_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DateTimeKind>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19666_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19666/* method */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19666_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t1658_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t1658 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19667_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DateTimeKind>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19667_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19667/* method */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t1658_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t1658/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19667_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3541_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19663_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664_MethodInfo,
	&InternalEnumerator_1_Dispose_m19665_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19666_MethodInfo,
	&InternalEnumerator_1_get_Current_m19667_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3541_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19664_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19666_MethodInfo,
	&InternalEnumerator_1_Dispose_m19665_MethodInfo,
	&InternalEnumerator_1_get_Current_m19667_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3541_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5107_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3541_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5107_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3541_0_0_0;
extern Il2CppType InternalEnumerator_1_t3541_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3541_GenericClass;
TypeInfo InternalEnumerator_1_t3541_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3541_MethodInfos/* methods */
	, InternalEnumerator_1_t3541_PropertyInfos/* properties */
	, InternalEnumerator_1_t3541_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3541_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3541_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3541_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3541_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3541_1_0_0/* this_arg */
	, InternalEnumerator_1_t3541_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3541_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3541)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6690_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTimeKind>
extern MethodInfo ICollection_1_get_Count_m34626_MethodInfo;
static PropertyInfo ICollection_1_t6690____Count_PropertyInfo = 
{
	&ICollection_1_t6690_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34626_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34627_MethodInfo;
static PropertyInfo ICollection_1_t6690____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6690_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34627_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6690_PropertyInfos[] =
{
	&ICollection_1_t6690____Count_PropertyInfo,
	&ICollection_1_t6690____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34626_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_Count()
MethodInfo ICollection_1_get_Count_m34626_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34626_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34627_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34627_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34627_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t1658_0_0_0;
extern Il2CppType DateTimeKind_t1658_0_0_0;
static ParameterInfo ICollection_1_t6690_ICollection_1_Add_m34628_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t1658_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34628_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Add(T)
MethodInfo ICollection_1_Add_m34628_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6690_ICollection_1_Add_m34628_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34628_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34629_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Clear()
MethodInfo ICollection_1_Clear_m34629_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34629_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t1658_0_0_0;
static ParameterInfo ICollection_1_t6690_ICollection_1_Contains_m34630_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t1658_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34630_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Contains(T)
MethodInfo ICollection_1_Contains_m34630_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6690_ICollection_1_Contains_m34630_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34630_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKindU5BU5D_t3762_0_0_0;
extern Il2CppType DateTimeKindU5BU5D_t3762_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6690_ICollection_1_CopyTo_m34631_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKindU5BU5D_t3762_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34631_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34631_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6690_ICollection_1_CopyTo_m34631_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34631_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeKind_t1658_0_0_0;
static ParameterInfo ICollection_1_t6690_ICollection_1_Remove_m34632_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t1658_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34632_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Remove(T)
MethodInfo ICollection_1_Remove_m34632_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6690_ICollection_1_Remove_m34632_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34632_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6690_MethodInfos[] =
{
	&ICollection_1_get_Count_m34626_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34627_MethodInfo,
	&ICollection_1_Add_m34628_MethodInfo,
	&ICollection_1_Clear_m34629_MethodInfo,
	&ICollection_1_Contains_m34630_MethodInfo,
	&ICollection_1_CopyTo_m34631_MethodInfo,
	&ICollection_1_Remove_m34632_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6692_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6690_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6692_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6690_0_0_0;
extern Il2CppType ICollection_1_t6690_1_0_0;
struct ICollection_1_t6690;
extern Il2CppGenericClass ICollection_1_t6690_GenericClass;
TypeInfo ICollection_1_t6690_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6690_MethodInfos/* methods */
	, ICollection_1_t6690_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6690_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6690_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6690_0_0_0/* byval_arg */
	, &ICollection_1_t6690_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6690_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTimeKind>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTimeKind>
extern Il2CppType IEnumerator_1_t5107_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34633_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTimeKind>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34633_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6692_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5107_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34633_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6692_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34633_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6692_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6692_0_0_0;
extern Il2CppType IEnumerable_1_t6692_1_0_0;
struct IEnumerable_1_t6692;
extern Il2CppGenericClass IEnumerable_1_t6692_GenericClass;
TypeInfo IEnumerable_1_t6692_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6692_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6692_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6692_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6692_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6692_0_0_0/* byval_arg */
	, &IEnumerable_1_t6692_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6692_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6691_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTimeKind>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTimeKind>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTimeKind>
extern MethodInfo IList_1_get_Item_m34634_MethodInfo;
extern MethodInfo IList_1_set_Item_m34635_MethodInfo;
static PropertyInfo IList_1_t6691____Item_PropertyInfo = 
{
	&IList_1_t6691_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34634_MethodInfo/* get */
	, &IList_1_set_Item_m34635_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6691_PropertyInfos[] =
{
	&IList_1_t6691____Item_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeKind_t1658_0_0_0;
static ParameterInfo IList_1_t6691_IList_1_IndexOf_m34636_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t1658_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34636_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DateTimeKind>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34636_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6691_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6691_IList_1_IndexOf_m34636_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34636_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DateTimeKind_t1658_0_0_0;
static ParameterInfo IList_1_t6691_IList_1_Insert_m34637_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t1658_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34637_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34637_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6691_IList_1_Insert_m34637_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34637_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6691_IList_1_RemoveAt_m34638_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34638_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34638_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6691_IList_1_RemoveAt_m34638_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34638_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6691_IList_1_get_Item_m34634_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DateTimeKind_t1658_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t1658_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34634_GenericMethod;
// T System.Collections.Generic.IList`1<System.DateTimeKind>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34634_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6691_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t1658_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t1658_Int32_t18/* invoker_method */
	, IList_1_t6691_IList_1_get_Item_m34634_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34634_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DateTimeKind_t1658_0_0_0;
static ParameterInfo IList_1_t6691_IList_1_set_Item_m34635_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t1658_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34635_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34635_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6691_IList_1_set_Item_m34635_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34635_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6691_MethodInfos[] =
{
	&IList_1_IndexOf_m34636_MethodInfo,
	&IList_1_Insert_m34637_MethodInfo,
	&IList_1_RemoveAt_m34638_MethodInfo,
	&IList_1_get_Item_m34634_MethodInfo,
	&IList_1_set_Item_m34635_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6691_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6690_il2cpp_TypeInfo,
	&IEnumerable_1_t6692_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6691_0_0_0;
extern Il2CppType IList_1_t6691_1_0_0;
struct IList_1_t6691;
extern Il2CppGenericClass IList_1_t6691_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6691_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6691_MethodInfos/* methods */
	, IList_1_t6691_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6691_il2cpp_TypeInfo/* element_class */
	, IList_1_t6691_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6691_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6691_0_0_0/* byval_arg */
	, &IList_1_t6691_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6691_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IComparable_1_t2115_il2cpp_TypeInfo;

// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"


// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo IComparable_1_t2115_IComparable_1_CompareTo_m34639_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m34639_GenericMethod;
// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m34639_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2115_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657/* invoker_method */
	, IComparable_1_t2115_IComparable_1_CompareTo_m34639_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m34639_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2115_MethodInfos[] =
{
	&IComparable_1_CompareTo_m34639_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2115_0_0_0;
extern Il2CppType IComparable_1_t2115_1_0_0;
struct IComparable_1_t2115;
extern Il2CppGenericClass IComparable_1_t2115_GenericClass;
TypeInfo IComparable_1_t2115_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2115_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2115_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2115_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2115_0_0_0/* byval_arg */
	, &IComparable_1_t2115_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2115_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2116_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
// Metadata Definition System.IEquatable`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo IEquatable_1_t2116_IEquatable_1_Equals_m34640_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m34640_GenericMethod;
// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
MethodInfo IEquatable_1_Equals_m34640_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2116_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657/* invoker_method */
	, IEquatable_1_t2116_IEquatable_1_Equals_m34640_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m34640_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2116_MethodInfos[] =
{
	&IEquatable_1_Equals_m34640_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2116_0_0_0;
extern Il2CppType IEquatable_1_t2116_1_0_0;
struct IEquatable_1_t2116;
extern Il2CppGenericClass IEquatable_1_t2116_GenericClass;
TypeInfo IEquatable_1_t2116_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2116_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2116_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2116_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2116_0_0_0/* byval_arg */
	, &IEquatable_1_t2116_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2116_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2113_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0MethodDeclarations.h"

extern TypeInfo DateTimeOffset_t1657_il2cpp_TypeInfo;
extern TypeInfo Int32_t18_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_30MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m19669_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m34639_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m10404_MethodInfo;
 void GenericComparer_1__ctor_m10404 (GenericComparer_1_t2113 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m19669(__this, /*hidden argument*/&Comparer_1__ctor_m19669_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m19668_MethodInfo;
 int32_t GenericComparer_1_Compare_m19668 (GenericComparer_1_t2113 * __this, DateTimeOffset_t1657  ___x, DateTimeOffset_t1657  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t1657  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t1657  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTimeOffset_t1657  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t1657  >::Invoke(&IComparable_1_CompareTo_m34639_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m10404_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo GenericComparer_1__ctor_m10404_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m10404/* method */
	, &GenericComparer_1_t2113_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericComparer_1__ctor_m10404_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo GenericComparer_1_t2113_GenericComparer_1_Compare_m19668_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m19668_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m19668_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m19668/* method */
	, &GenericComparer_1_t2113_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, GenericComparer_1_t2113_GenericComparer_1_Compare_m19668_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m19668_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t2113_MethodInfos[] =
{
	&GenericComparer_1__ctor_m10404_MethodInfo,
	&GenericComparer_1_Compare_m19668_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m1289_MethodInfo;
extern MethodInfo Object_GetHashCode_m1290_MethodInfo;
extern MethodInfo Object_ToString_m1300_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m19671_MethodInfo;
static MethodInfo* GenericComparer_1_t2113_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&GenericComparer_1_Compare_m19668_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19671_MethodInfo,
	&GenericComparer_1_Compare_m19668_MethodInfo,
};
extern TypeInfo IComparer_1_t6864_il2cpp_TypeInfo;
extern TypeInfo IComparer_t767_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t2113_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6864_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t2113_0_0_0;
extern Il2CppType GenericComparer_1_t2113_1_0_0;
extern TypeInfo Comparer_1_t3542_il2cpp_TypeInfo;
struct GenericComparer_1_t2113;
extern Il2CppGenericClass GenericComparer_1_t2113_GenericClass;
TypeInfo GenericComparer_1_t2113_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t2113_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t2113_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t2113_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t2113_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t2113_0_0_0/* byval_arg */
	, &GenericComparer_1_t2113_1_0_0/* this_arg */
	, GenericComparer_1_t2113_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t2113_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t2113)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_30.h"
#ifndef _MSC_VER
#else
#endif

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.GenericComparer`1
#include "mscorlib_System_Collections_Generic_GenericComparer_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_31.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t15_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t1261_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t546_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3543_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t377_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_31MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType GenericComparer_1_t1261_0_0_0;
extern MethodInfo Object__ctor_m1299_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m1528_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m3131_MethodInfo;
extern MethodInfo Type_MakeGenericType_m3129_MethodInfo;
extern MethodInfo Activator_CreateInstance_m8976_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m19673_MethodInfo;
extern MethodInfo Comparer_1_Compare_m34641_MethodInfo;
extern MethodInfo ArgumentException__ctor_m9000_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
 void Comparer_1__ctor_m19669 (Comparer_1_t3542 * __this, MethodInfo* method){
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
extern MethodInfo Comparer_1__cctor_m19670_MethodInfo;
 void Comparer_1__cctor_m19670 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t3543 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3543 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t3543_il2cpp_TypeInfo));
	DefaultComparer__ctor_m19673(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m19673_MethodInfo);
	((Comparer_1_t3542_StaticFields*)InitializedTypeInfo(&Comparer_1_t3542_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m19671 (Comparer_1_t3542 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, DateTimeOffset_t1657 , DateTimeOffset_t1657  >::Invoke(&Comparer_1_Compare_m34641_MethodInfo, __this, ((*(DateTimeOffset_t1657 *)((DateTimeOffset_t1657 *)UnBox (___x, InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo))))), ((*(DateTimeOffset_t1657 *)((DateTimeOffset_t1657 *)UnBox (___y, InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t377 * L_1 = (ArgumentException_t377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t377_il2cpp_TypeInfo));
		ArgumentException__ctor_m9000(L_1, /*hidden argument*/&ArgumentException__ctor_m9000_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern MethodInfo Comparer_1_get_Default_m19672_MethodInfo;
 Comparer_1_t3542 * Comparer_1_get_Default_m19672 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t3542_il2cpp_TypeInfo));
		return (((Comparer_1_t3542_StaticFields*)InitializedTypeInfo(&Comparer_1_t3542_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTimeOffset>
extern Il2CppType Comparer_1_t3542_0_0_49;
FieldInfo Comparer_1_t3542_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t3542_0_0_49/* type */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t3542_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t3542_FieldInfos[] =
{
	&Comparer_1_t3542_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t3542____Default_PropertyInfo = 
{
	&Comparer_1_t3542_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m19672_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t3542_PropertyInfos[] =
{
	&Comparer_1_t3542____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m19669_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
MethodInfo Comparer_1__ctor_m19669_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m19669/* method */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__ctor_m19669_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m19670_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
MethodInfo Comparer_1__cctor_m19670_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m19670/* method */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m19670_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t3542_Comparer_1_System_Collections_IComparer_Compare_m19671_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m19671_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m19671_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m19671/* method */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t_Object_t/* invoker_method */
	, Comparer_1_t3542_Comparer_1_System_Collections_IComparer_Compare_m19671_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m19671_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo Comparer_1_t3542_Comparer_1_Compare_m34641_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m34641_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo Comparer_1_Compare_m34641_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, Comparer_1_t3542_Comparer_1_Compare_m34641_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m34641_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t3542_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m19672_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
MethodInfo Comparer_1_get_Default_m19672_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m19672/* method */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t3542_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m19672_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t3542_MethodInfos[] =
{
	&Comparer_1__ctor_m19669_MethodInfo,
	&Comparer_1__cctor_m19670_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19671_MethodInfo,
	&Comparer_1_Compare_m34641_MethodInfo,
	&Comparer_1_get_Default_m19672_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t3542_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&Comparer_1_Compare_m34641_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19671_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t3542_InterfacesTypeInfos[] = 
{
	&IComparer_1_t6864_il2cpp_TypeInfo,
	&IComparer_t767_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t3542_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6864_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t3542_0_0_0;
extern Il2CppType Comparer_1_t3542_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t3542;
extern Il2CppGenericClass Comparer_1_t3542_GenericClass;
TypeInfo Comparer_1_t3542_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t3542_MethodInfos/* methods */
	, Comparer_1_t3542_PropertyInfos/* properties */
	, Comparer_1_t3542_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t3542_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t3542_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t3542_0_0_0/* byval_arg */
	, &Comparer_1_t3542_1_0_0/* this_arg */
	, Comparer_1_t3542_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t3542_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t3542)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t3542_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo IComparer_1_t6864_IComparer_1_Compare_m34642_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m34642_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo IComparer_1_Compare_m34642_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t6864_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, IComparer_1_t6864_IComparer_1_Compare_m34642_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m34642_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t6864_MethodInfos[] =
{
	&IComparer_1_Compare_m34642_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t6864_0_0_0;
extern Il2CppType IComparer_1_t6864_1_0_0;
struct IComparer_1_t6864;
extern Il2CppGenericClass IComparer_1_t6864_GenericClass;
TypeInfo IComparer_1_t6864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t6864_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t6864_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t6864_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t6864_0_0_0/* byval_arg */
	, &IComparer_1_t6864_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t6864_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif

extern TypeInfo IComparable_t270_il2cpp_TypeInfo;
extern MethodInfo IComparable_CompareTo_m9818_MethodInfo;
extern MethodInfo ArgumentException__ctor_m1918_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
 void DefaultComparer__ctor_m19673 (DefaultComparer_t3543 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m19669(__this, /*hidden argument*/&Comparer_1__ctor_m19669_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m19674_MethodInfo;
 int32_t DefaultComparer_Compare_m19674 (DefaultComparer_t3543 * __this, DateTimeOffset_t1657  ___x, DateTimeOffset_t1657  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t1657  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t1657  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTimeOffset_t1657  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		DateTimeOffset_t1657  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t2115_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		DateTimeOffset_t1657  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2115_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t1657  >::Invoke(&IComparable_1_CompareTo_m34639_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2115_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		DateTimeOffset_t1657  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		DateTimeOffset_t1657  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_13);
		DateTimeOffset_t1657  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m9818_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t377 * L_18 = (ArgumentException_t377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t377_il2cpp_TypeInfo));
		ArgumentException__ctor_m1918(L_18, (String_t*) &_stringLiteral1182, /*hidden argument*/&ArgumentException__ctor_m1918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m19673_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
MethodInfo DefaultComparer__ctor_m19673_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m19673/* method */
	, &DefaultComparer_t3543_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m19673_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo DefaultComparer_t3543_DefaultComparer_Compare_m19674_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m19674_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m19674_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m19674/* method */
	, &DefaultComparer_t3543_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, DefaultComparer_t3543_DefaultComparer_Compare_m19674_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m19674_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t3543_MethodInfos[] =
{
	&DefaultComparer__ctor_m19673_MethodInfo,
	&DefaultComparer_Compare_m19674_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t3543_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&DefaultComparer_Compare_m19674_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19671_MethodInfo,
	&DefaultComparer_Compare_m19674_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t3543_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6864_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t3543_0_0_0;
extern Il2CppType DefaultComparer_t3543_1_0_0;
struct DefaultComparer_t3543;
extern Il2CppGenericClass DefaultComparer_t3543_GenericClass;
extern TypeInfo Comparer_1_t1260_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t3543_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t3543_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t3542_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t1260_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t3543_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t3543_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t3543_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t3543_0_0_0/* byval_arg */
	, &DefaultComparer_t3543_1_0_0/* this_arg */
	, DefaultComparer_t3543_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t3543_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t3543)/* instance_size */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2114_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m19677_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m34640_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m10405_MethodInfo;
 void GenericEqualityComparer_1__ctor_m10405 (GenericEqualityComparer_1_t2114 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m19677(__this, /*hidden argument*/&EqualityComparer_1__ctor_m19677_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m19675_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m19675 (GenericEqualityComparer_1_t2114 * __this, DateTimeOffset_t1657  ___obj, MethodInfo* method){
	{
		DateTimeOffset_t1657  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1290_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m19676_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m19676 (GenericEqualityComparer_1_t2114 * __this, DateTimeOffset_t1657  ___x, DateTimeOffset_t1657  ___y, MethodInfo* method){
	{
		DateTimeOffset_t1657  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t1657  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, DateTimeOffset_t1657  >::Invoke(&IEquatable_1_Equals_m34640_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m10405_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m10405_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m10405/* method */
	, &GenericEqualityComparer_1_t2114_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericEqualityComparer_1__ctor_m10405_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2114_GenericEqualityComparer_1_GetHashCode_m19675_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m19675_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m19675_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m19675/* method */
	, &GenericEqualityComparer_1_t2114_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657/* invoker_method */
	, GenericEqualityComparer_1_t2114_GenericEqualityComparer_1_GetHashCode_m19675_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m19675_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2114_GenericEqualityComparer_1_Equals_m19676_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m19676_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m19676_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m19676/* method */
	, &GenericEqualityComparer_1_t2114_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, GenericEqualityComparer_1_t2114_GenericEqualityComparer_1_Equals_m19676_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m19676_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t2114_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m10405_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19675_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19676_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t2114_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19676_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19675_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19675_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19676_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t6865_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t774_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t2114_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6865_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t2114_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2114_1_0_0;
extern TypeInfo EqualityComparer_1_t3544_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t2114;
extern Il2CppGenericClass GenericEqualityComparer_1_t2114_GenericClass;
TypeInfo GenericEqualityComparer_1_t2114_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t2114_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t2114_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t2114_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t2114_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t2114_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t2114_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t2114_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t2114_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t2114)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_39.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.GenericEqualityComparer`1
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_40.h"
extern TypeInfo GenericEqualityComparer_1_t1271_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t3545_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_40MethodDeclarations.h"
extern Il2CppType GenericEqualityComparer_1_t1271_0_0_0;
extern MethodInfo DefaultComparer__ctor_m19682_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m34643_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m34644_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
 void EqualityComparer_1__ctor_m19677 (EqualityComparer_1_t3544 * __this, MethodInfo* method){
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m19678_MethodInfo;
 void EqualityComparer_1__cctor_m19678 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t3545 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3545 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t3545_il2cpp_TypeInfo));
	DefaultComparer__ctor_m19682(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m19682_MethodInfo);
	((EqualityComparer_1_t3544_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t3544_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679 (EqualityComparer_1_t3544 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, DateTimeOffset_t1657  >::Invoke(&EqualityComparer_1_GetHashCode_m34643_MethodInfo, __this, ((*(DateTimeOffset_t1657 *)((DateTimeOffset_t1657 *)UnBox (___obj, InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680 (EqualityComparer_1_t3544 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, DateTimeOffset_t1657 , DateTimeOffset_t1657  >::Invoke(&EqualityComparer_1_Equals_m34644_MethodInfo, __this, ((*(DateTimeOffset_t1657 *)((DateTimeOffset_t1657 *)UnBox (___x, InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo))))), ((*(DateTimeOffset_t1657 *)((DateTimeOffset_t1657 *)UnBox (___y, InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m19681_MethodInfo;
 EqualityComparer_1_t3544 * EqualityComparer_1_get_Default_m19681 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t3544_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t3544_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t3544_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
extern Il2CppType EqualityComparer_1_t3544_0_0_49;
FieldInfo EqualityComparer_1_t3544_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t3544_0_0_49/* type */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t3544_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t3544_FieldInfos[] =
{
	&EqualityComparer_1_t3544_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t3544____Default_PropertyInfo = 
{
	&EqualityComparer_1_t3544_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m19681_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t3544_PropertyInfos[] =
{
	&EqualityComparer_1_t3544____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m19677_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo EqualityComparer_1__ctor_m19677_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m19677/* method */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__ctor_m19677_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m19678_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
MethodInfo EqualityComparer_1__cctor_m19678_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m19678/* method */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m19678_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t3544_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679/* method */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, EqualityComparer_1_t3544_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t3544_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680/* method */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t3544_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo EqualityComparer_1_t3544_EqualityComparer_1_GetHashCode_m34643_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m34643_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m34643_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657/* invoker_method */
	, EqualityComparer_1_t3544_EqualityComparer_1_GetHashCode_m34643_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m34643_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo EqualityComparer_1_t3544_EqualityComparer_1_Equals_m34644_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m34644_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m34644_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, EqualityComparer_1_t3544_EqualityComparer_1_Equals_m34644_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m34644_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t3544_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19681_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m19681_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m19681/* method */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t3544_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m19681_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t3544_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m19677_MethodInfo,
	&EqualityComparer_1__cctor_m19678_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_MethodInfo,
	&EqualityComparer_1_GetHashCode_m34643_MethodInfo,
	&EqualityComparer_1_Equals_m34644_MethodInfo,
	&EqualityComparer_1_get_Default_m19681_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t3544_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&EqualityComparer_1_Equals_m34644_MethodInfo,
	&EqualityComparer_1_GetHashCode_m34643_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t3544_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t6865_il2cpp_TypeInfo,
	&IEqualityComparer_t774_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t3544_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6865_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t3544_0_0_0;
extern Il2CppType EqualityComparer_1_t3544_1_0_0;
struct EqualityComparer_1_t3544;
extern Il2CppGenericClass EqualityComparer_1_t3544_GenericClass;
TypeInfo EqualityComparer_1_t3544_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t3544_MethodInfos/* methods */
	, EqualityComparer_1_t3544_PropertyInfos/* properties */
	, EqualityComparer_1_t3544_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t3544_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t3544_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t3544_0_0_0/* byval_arg */
	, &EqualityComparer_1_t3544_1_0_0/* this_arg */
	, EqualityComparer_1_t3544_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t3544_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t3544)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t3544_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo IEqualityComparer_1_t6865_IEqualityComparer_1_Equals_m34645_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34645_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m34645_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t6865_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, IEqualityComparer_1_t6865_IEqualityComparer_1_Equals_m34645_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m34645_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo IEqualityComparer_1_t6865_IEqualityComparer_1_GetHashCode_m34646_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m34646_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m34646_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t6865_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657/* invoker_method */
	, IEqualityComparer_1_t6865_IEqualityComparer_1_GetHashCode_m34646_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m34646_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t6865_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m34645_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m34646_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t6865_0_0_0;
extern Il2CppType IEqualityComparer_1_t6865_1_0_0;
struct IEqualityComparer_1_t6865;
extern Il2CppGenericClass IEqualityComparer_1_t6865_GenericClass;
TypeInfo IEqualityComparer_1_t6865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t6865_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t6865_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t6865_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t6865_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t6865_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t6865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
 void DefaultComparer__ctor_m19682 (DefaultComparer_t3545 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m19677(__this, /*hidden argument*/&EqualityComparer_1__ctor_m19677_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m19683_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m19683 (DefaultComparer_t3545 * __this, DateTimeOffset_t1657  ___obj, MethodInfo* method){
	{
		DateTimeOffset_t1657  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1290_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m19684_MethodInfo;
 bool DefaultComparer_Equals_m19684 (DefaultComparer_t3545 * __this, DateTimeOffset_t1657  ___x, DateTimeOffset_t1657  ___y, MethodInfo* method){
	{
		DateTimeOffset_t1657  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t1657  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTimeOffset_t1657  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1289_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t1657_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m19682_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
MethodInfo DefaultComparer__ctor_m19682_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m19682/* method */
	, &DefaultComparer_t3545_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m19682_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo DefaultComparer_t3545_DefaultComparer_GetHashCode_m19683_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m19683_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m19683_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m19683/* method */
	, &DefaultComparer_t3545_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_DateTimeOffset_t1657/* invoker_method */
	, DefaultComparer_t3545_DefaultComparer_GetHashCode_m19683_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m19683_GenericMethod/* genericMethod */

};
extern Il2CppType DateTimeOffset_t1657_0_0_0;
extern Il2CppType DateTimeOffset_t1657_0_0_0;
static ParameterInfo DefaultComparer_t3545_DefaultComparer_Equals_m19684_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t1657_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m19684_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m19684_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m19684/* method */
	, &DefaultComparer_t3545_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_DateTimeOffset_t1657_DateTimeOffset_t1657/* invoker_method */
	, DefaultComparer_t3545_DefaultComparer_Equals_m19684_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m19684_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t3545_MethodInfos[] =
{
	&DefaultComparer__ctor_m19682_MethodInfo,
	&DefaultComparer_GetHashCode_m19683_MethodInfo,
	&DefaultComparer_Equals_m19684_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t3545_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&DefaultComparer_Equals_m19684_MethodInfo,
	&DefaultComparer_GetHashCode_m19683_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19680_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19679_MethodInfo,
	&DefaultComparer_GetHashCode_m19683_MethodInfo,
	&DefaultComparer_Equals_m19684_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t3545_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6865_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t3545_0_0_0;
extern Il2CppType DefaultComparer_t3545_1_0_0;
struct DefaultComparer_t3545;
extern Il2CppGenericClass DefaultComparer_t3545_GenericClass;
extern TypeInfo EqualityComparer_1_t1270_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t3545_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t3545_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t3544_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t1270_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t3545_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t3545_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t3545_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t3545_0_0_0/* byval_arg */
	, &DefaultComparer_t3545_1_0_0/* this_arg */
	, DefaultComparer_t3545_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t3545_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t3545)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Nullable_1_t1660_il2cpp_TypeInfo;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_genMethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
extern TypeInfo TimeSpan_t846_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo Nullable_1_Equals_m19686_MethodInfo;


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern MethodInfo Nullable_1__ctor_m10406_MethodInfo;
 void Nullable_1__ctor_m10406 (Nullable_1_t1660 * __this, TimeSpan_t846  ___value, MethodInfo* method){
	{
		__this->___has_value_1 = 1;
		__this->___value_0 = ___value;
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern MethodInfo Nullable_1_get_HasValue_m10407_MethodInfo;
 bool Nullable_1_get_HasValue_m10407 (Nullable_1_t1660 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value_1);
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern MethodInfo Nullable_1_get_Value_m10408_MethodInfo;
 TimeSpan_t846  Nullable_1_get_Value_m10408 (Nullable_1_t1660 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value_1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t949 * L_1 = (InvalidOperationException_t949 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t949_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m4114(L_1, (String_t*) &_stringLiteral1097, /*hidden argument*/&InvalidOperationException__ctor_m4114_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0013:
	{
		TimeSpan_t846  L_2 = (__this->___value_0);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern MethodInfo Nullable_1_Equals_m19685_MethodInfo;
 bool Nullable_1_Equals_m19685 (Nullable_1_t1660 * __this, Object_t * ___other, MethodInfo* method){
	{
		if (___other)
		{
			goto IL_000d;
		}
	}
	{
		bool L_0 = (__this->___has_value_1);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Nullable_1_t1660_il2cpp_TypeInfo))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		void* L_1 = alloca(sizeof(Nullable_1_t1660 ));
		UnBoxNullable(___other, InitializedTypeInfo(&Nullable_1_t1660_il2cpp_TypeInfo), L_1);
		bool L_2 = Nullable_1_Equals_m19686(__this, ((*(Nullable_1_t1660 *)((Nullable_1_t1660 *)L_1))), /*hidden argument*/&Nullable_1_Equals_m19686_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
 bool Nullable_1_Equals_m19686 (Nullable_1_t1660 * __this, Nullable_1_t1660  ___other, MethodInfo* method){
	{
		NullCheck((&___other));
		bool L_0 = ((&___other)->___has_value_1);
		bool L_1 = (__this->___has_value_1);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (__this->___has_value_1);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		NullCheck((&___other));
		TimeSpan_t846 * L_3 = &((&___other)->___value_0);
		TimeSpan_t846  L_4 = (__this->___value_0);
		TimeSpan_t846  L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_5);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*L_3)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m1357_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*L_3)), L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern MethodInfo Nullable_1_GetHashCode_m19687_MethodInfo;
 int32_t Nullable_1_GetHashCode_m19687 (Nullable_1_t1660 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value_1);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		TimeSpan_t846 * L_1 = &(__this->___value_0);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*L_1)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ValueType_GetHashCode_m1358_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*L_1)));
		return L_2;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern MethodInfo Nullable_1_ToString_m19688_MethodInfo;
 String_t* Nullable_1_ToString_m19688 (Nullable_1_t1660 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TimeSpan_t846 * L_1 = &(__this->___value_0);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*L_1)));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ValueType_ToString_m1473_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*L_1)));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
	}
}
// Metadata Definition System.Nullable`1<System.TimeSpan>
extern Il2CppType TimeSpan_t846_0_0_3;
FieldInfo Nullable_1_t1660____value_0_FieldInfo = 
{
	"value"/* name */
	, &TimeSpan_t846_0_0_3/* type */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* parent */
	, offsetof(Nullable_1_t1660, ___value_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t15_0_0_3;
FieldInfo Nullable_1_t1660____has_value_1_FieldInfo = 
{
	"has_value"/* name */
	, &Boolean_t15_0_0_3/* type */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* parent */
	, offsetof(Nullable_1_t1660, ___has_value_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Nullable_1_t1660_FieldInfos[] =
{
	&Nullable_1_t1660____value_0_FieldInfo,
	&Nullable_1_t1660____has_value_1_FieldInfo,
	NULL
};
static PropertyInfo Nullable_1_t1660____HasValue_PropertyInfo = 
{
	&Nullable_1_t1660_il2cpp_TypeInfo/* parent */
	, "HasValue"/* name */
	, &Nullable_1_get_HasValue_m10407_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo Nullable_1_t1660____Value_PropertyInfo = 
{
	&Nullable_1_t1660_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &Nullable_1_get_Value_m10408_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Nullable_1_t1660_PropertyInfos[] =
{
	&Nullable_1_t1660____HasValue_PropertyInfo,
	&Nullable_1_t1660____Value_PropertyInfo,
	NULL
};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo Nullable_1_t1660_Nullable_1__ctor_m10406_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Nullable_1__ctor_m10406_GenericMethod;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
MethodInfo Nullable_1__ctor_m10406_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Nullable_1__ctor_m10406/* method */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_TimeSpan_t846/* invoker_method */
	, Nullable_1_t1660_Nullable_1__ctor_m10406_ParameterInfos/* parameters */
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
	, &Nullable_1__ctor_m10406_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Nullable_1_get_HasValue_m10407_GenericMethod;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
MethodInfo Nullable_1_get_HasValue_m10407_MethodInfo = 
{
	"get_HasValue"/* name */
	, (methodPointerType)&Nullable_1_get_HasValue_m10407/* method */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Nullable_1_get_HasValue_m10407_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Nullable_1_get_Value_m10408_GenericMethod;
// T System.Nullable`1<System.TimeSpan>::get_Value()
MethodInfo Nullable_1_get_Value_m10408_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&Nullable_1_get_Value_m10408/* method */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t846_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t846/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Nullable_1_get_Value_m10408_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Nullable_1_t1660_Nullable_1_Equals_m19685_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Nullable_1_Equals_m19685_GenericMethod;
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
MethodInfo Nullable_1_Equals_m19685_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Nullable_1_Equals_m19685/* method */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, Nullable_1_t1660_Nullable_1_Equals_m19685_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Nullable_1_Equals_m19685_GenericMethod/* genericMethod */

};
extern Il2CppType Nullable_1_t1660_0_0_0;
extern Il2CppType Nullable_1_t1660_0_0_0;
static ParameterInfo Nullable_1_t1660_Nullable_1_Equals_m19686_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Nullable_1_t1660_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Nullable_1_t1660 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Nullable_1_Equals_m19686_GenericMethod;
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
MethodInfo Nullable_1_Equals_m19686_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Nullable_1_Equals_m19686/* method */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Nullable_1_t1660/* invoker_method */
	, Nullable_1_t1660_Nullable_1_Equals_m19686_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Nullable_1_Equals_m19686_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Nullable_1_GetHashCode_m19687_GenericMethod;
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
MethodInfo Nullable_1_GetHashCode_m19687_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Nullable_1_GetHashCode_m19687/* method */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Nullable_1_GetHashCode_m19687_GenericMethod/* genericMethod */

};
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Nullable_1_ToString_m19688_GenericMethod;
// System.String System.Nullable`1<System.TimeSpan>::ToString()
MethodInfo Nullable_1_ToString_m19688_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Nullable_1_ToString_m19688/* method */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Nullable_1_ToString_m19688_GenericMethod/* genericMethod */

};
static MethodInfo* Nullable_1_t1660_MethodInfos[] =
{
	&Nullable_1__ctor_m10406_MethodInfo,
	&Nullable_1_get_HasValue_m10407_MethodInfo,
	&Nullable_1_get_Value_m10408_MethodInfo,
	&Nullable_1_Equals_m19685_MethodInfo,
	&Nullable_1_Equals_m19686_MethodInfo,
	&Nullable_1_GetHashCode_m19687_MethodInfo,
	&Nullable_1_ToString_m19688_MethodInfo,
	NULL
};
static MethodInfo* Nullable_1_t1660_VTable[] =
{
	&Nullable_1_Equals_m19685_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Nullable_1_GetHashCode_m19687_MethodInfo,
	&Nullable_1_ToString_m19688_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Nullable_1_t1660_1_0_0;
extern Il2CppGenericClass Nullable_1_t1660_GenericClass;
TypeInfo Nullable_1_t1660_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Nullable`1"/* name */
	, "System"/* namespaze */
	, Nullable_1_t1660_MethodInfos/* methods */
	, Nullable_1_t1660_PropertyInfos/* properties */
	, Nullable_1_t1660_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Nullable_1_t1660_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Nullable_1_t1660_il2cpp_TypeInfo/* cast_class */
	, &Nullable_1_t1660_0_0_0/* byval_arg */
	, &Nullable_1_t1660_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &Nullable_1_t1660_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Nullable_1_t1660)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057033/* flags */
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
	, 7/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5109_il2cpp_TypeInfo;

// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"


// T System.Collections.Generic.IEnumerator`1<System.DayOfWeek>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DayOfWeek>
extern MethodInfo IEnumerator_1_get_Current_m34647_MethodInfo;
static PropertyInfo IEnumerator_1_t5109____Current_PropertyInfo = 
{
	&IEnumerator_1_t5109_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34647_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5109_PropertyInfos[] =
{
	&IEnumerator_1_t5109____Current_PropertyInfo,
	NULL
};
extern Il2CppType DayOfWeek_t1661_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t1661 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34647_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.DayOfWeek>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34647_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5109_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t1661_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t1661/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34647_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5109_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34647_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5109_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5109_0_0_0;
extern Il2CppType IEnumerator_1_t5109_1_0_0;
struct IEnumerator_1_t5109;
extern Il2CppGenericClass IEnumerator_1_t5109_GenericClass;
TypeInfo IEnumerator_1_t5109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5109_MethodInfos/* methods */
	, IEnumerator_1_t5109_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5109_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5109_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5109_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5109_0_0_0/* byval_arg */
	, &IEnumerator_1_t5109_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5109_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.DayOfWeek>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_550.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3546_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DayOfWeek>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_550MethodDeclarations.h"

extern TypeInfo DayOfWeek_t1661_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19693_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDayOfWeek_t1661_m26535_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DayOfWeek>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DayOfWeek>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDayOfWeek_t1661_m26535 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19689_MethodInfo;
 void InternalEnumerator_1__ctor_m19689 (InternalEnumerator_1_t3546 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690 (InternalEnumerator_1_t3546 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19693(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19693_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DayOfWeek_t1661_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19691_MethodInfo;
 void InternalEnumerator_1_Dispose_m19691 (InternalEnumerator_1_t3546 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DayOfWeek>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19692_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19692 (InternalEnumerator_1_t3546 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DayOfWeek>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19693 (InternalEnumerator_1_t3546 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDayOfWeek_t1661_m26535(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDayOfWeek_t1661_m26535_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DayOfWeek>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3546____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3546, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3546____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3546, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3546_FieldInfos[] =
{
	&InternalEnumerator_1_t3546____array_0_FieldInfo,
	&InternalEnumerator_1_t3546____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3546____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3546_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3546____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3546_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19693_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3546_PropertyInfos[] =
{
	&InternalEnumerator_1_t3546____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3546____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3546_InternalEnumerator_1__ctor_m19689_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19689_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19689_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19689/* method */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3546_InternalEnumerator_1__ctor_m19689_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19689_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690/* method */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19691_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19691_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19691/* method */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19691_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19692_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.DayOfWeek>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19692_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19692/* method */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19692_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t1661_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t1661 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19693_GenericMethod;
// T System.Array/InternalEnumerator`1<System.DayOfWeek>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19693_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19693/* method */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t1661_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t1661/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19693_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3546_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19689_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690_MethodInfo,
	&InternalEnumerator_1_Dispose_m19691_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19692_MethodInfo,
	&InternalEnumerator_1_get_Current_m19693_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3546_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19690_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19692_MethodInfo,
	&InternalEnumerator_1_Dispose_m19691_MethodInfo,
	&InternalEnumerator_1_get_Current_m19693_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3546_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5109_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3546_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5109_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3546_0_0_0;
extern Il2CppType InternalEnumerator_1_t3546_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3546_GenericClass;
TypeInfo InternalEnumerator_1_t3546_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3546_MethodInfos/* methods */
	, InternalEnumerator_1_t3546_PropertyInfos/* properties */
	, InternalEnumerator_1_t3546_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3546_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3546_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3546_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3546_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3546_1_0_0/* this_arg */
	, InternalEnumerator_1_t3546_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3546_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3546)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6693_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DayOfWeek>
extern MethodInfo ICollection_1_get_Count_m34648_MethodInfo;
static PropertyInfo ICollection_1_t6693____Count_PropertyInfo = 
{
	&ICollection_1_t6693_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34648_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34649_MethodInfo;
static PropertyInfo ICollection_1_t6693____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6693_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34649_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6693_PropertyInfos[] =
{
	&ICollection_1_t6693____Count_PropertyInfo,
	&ICollection_1_t6693____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34648_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_Count()
MethodInfo ICollection_1_get_Count_m34648_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34648_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34649_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34649_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34649_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t1661_0_0_0;
extern Il2CppType DayOfWeek_t1661_0_0_0;
static ParameterInfo ICollection_1_t6693_ICollection_1_Add_m34650_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t1661_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34650_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Add(T)
MethodInfo ICollection_1_Add_m34650_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6693_ICollection_1_Add_m34650_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34650_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34651_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Clear()
MethodInfo ICollection_1_Clear_m34651_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34651_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t1661_0_0_0;
static ParameterInfo ICollection_1_t6693_ICollection_1_Contains_m34652_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t1661_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34652_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Contains(T)
MethodInfo ICollection_1_Contains_m34652_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6693_ICollection_1_Contains_m34652_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34652_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeekU5BU5D_t3763_0_0_0;
extern Il2CppType DayOfWeekU5BU5D_t3763_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6693_ICollection_1_CopyTo_m34653_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeekU5BU5D_t3763_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34653_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34653_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6693_ICollection_1_CopyTo_m34653_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34653_GenericMethod/* genericMethod */

};
extern Il2CppType DayOfWeek_t1661_0_0_0;
static ParameterInfo ICollection_1_t6693_ICollection_1_Remove_m34654_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t1661_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34654_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Remove(T)
MethodInfo ICollection_1_Remove_m34654_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6693_ICollection_1_Remove_m34654_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34654_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6693_MethodInfos[] =
{
	&ICollection_1_get_Count_m34648_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34649_MethodInfo,
	&ICollection_1_Add_m34650_MethodInfo,
	&ICollection_1_Clear_m34651_MethodInfo,
	&ICollection_1_Contains_m34652_MethodInfo,
	&ICollection_1_CopyTo_m34653_MethodInfo,
	&ICollection_1_Remove_m34654_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6695_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6693_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6695_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6693_0_0_0;
extern Il2CppType ICollection_1_t6693_1_0_0;
struct ICollection_1_t6693;
extern Il2CppGenericClass ICollection_1_t6693_GenericClass;
TypeInfo ICollection_1_t6693_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6693_MethodInfos/* methods */
	, ICollection_1_t6693_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6693_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6693_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6693_0_0_0/* byval_arg */
	, &ICollection_1_t6693_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6693_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DayOfWeek>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DayOfWeek>
extern Il2CppType IEnumerator_1_t5109_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34655_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DayOfWeek>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34655_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6695_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5109_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34655_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6695_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34655_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6695_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6695_0_0_0;
extern Il2CppType IEnumerable_1_t6695_1_0_0;
struct IEnumerable_1_t6695;
extern Il2CppGenericClass IEnumerable_1_t6695_GenericClass;
TypeInfo IEnumerable_1_t6695_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6695_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6695_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6695_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6695_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6695_0_0_0/* byval_arg */
	, &IEnumerable_1_t6695_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6695_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6694_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DayOfWeek>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DayOfWeek>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DayOfWeek>
extern MethodInfo IList_1_get_Item_m34656_MethodInfo;
extern MethodInfo IList_1_set_Item_m34657_MethodInfo;
static PropertyInfo IList_1_t6694____Item_PropertyInfo = 
{
	&IList_1_t6694_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34656_MethodInfo/* get */
	, &IList_1_set_Item_m34657_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6694_PropertyInfos[] =
{
	&IList_1_t6694____Item_PropertyInfo,
	NULL
};
extern Il2CppType DayOfWeek_t1661_0_0_0;
static ParameterInfo IList_1_t6694_IList_1_IndexOf_m34658_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t1661_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34658_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.DayOfWeek>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34658_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6694_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6694_IList_1_IndexOf_m34658_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34658_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DayOfWeek_t1661_0_0_0;
static ParameterInfo IList_1_t6694_IList_1_Insert_m34659_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t1661_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34659_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34659_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6694_IList_1_Insert_m34659_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34659_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6694_IList_1_RemoveAt_m34660_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34660_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34660_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6694_IList_1_RemoveAt_m34660_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34660_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6694_IList_1_get_Item_m34656_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType DayOfWeek_t1661_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t1661_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34656_GenericMethod;
// T System.Collections.Generic.IList`1<System.DayOfWeek>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34656_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6694_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t1661_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t1661_Int32_t18/* invoker_method */
	, IList_1_t6694_IList_1_get_Item_m34656_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34656_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType DayOfWeek_t1661_0_0_0;
static ParameterInfo IList_1_t6694_IList_1_set_Item_m34657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t1661_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34657_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34657_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6694_IList_1_set_Item_m34657_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34657_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6694_MethodInfos[] =
{
	&IList_1_IndexOf_m34658_MethodInfo,
	&IList_1_Insert_m34659_MethodInfo,
	&IList_1_RemoveAt_m34660_MethodInfo,
	&IList_1_get_Item_m34656_MethodInfo,
	&IList_1_set_Item_m34657_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6694_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6693_il2cpp_TypeInfo,
	&IEnumerable_1_t6695_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6694_0_0_0;
extern Il2CppType IList_1_t6694_1_0_0;
struct IList_1_t6694;
extern Il2CppGenericClass IList_1_t6694_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6694_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6694_MethodInfos/* methods */
	, IList_1_t6694_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6694_il2cpp_TypeInfo/* element_class */
	, IList_1_t6694_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6694_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6694_0_0_0/* byval_arg */
	, &IList_1_t6694_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6694_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IComparer_1_t2117_il2cpp_TypeInfo;

// System.SByte
#include "mscorlib_System_SByte.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.SByte>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.SByte>
extern Il2CppType SByte_t276_0_0_0;
extern Il2CppType SByte_t276_0_0_0;
extern Il2CppType SByte_t276_0_0_0;
static ParameterInfo IComparer_1_t2117_IComparer_1_Compare_m34661_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t276_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &SByte_t276_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_SByte_t276_SByte_t276 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m34661_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.SByte>::Compare(T,T)
MethodInfo IComparer_1_Compare_m34661_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t2117_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_SByte_t276_SByte_t276/* invoker_method */
	, IComparer_1_t2117_IComparer_1_Compare_m34661_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m34661_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t2117_MethodInfos[] =
{
	&IComparer_1_Compare_m34661_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t2117_0_0_0;
extern Il2CppType IComparer_1_t2117_1_0_0;
struct IComparer_1_t2117;
extern Il2CppGenericClass IComparer_1_t2117_GenericClass;
TypeInfo IComparer_1_t2117_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t2117_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t2117_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t2117_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t2117_0_0_0/* byval_arg */
	, &IComparer_1_t2117_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t2117_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t2118_il2cpp_TypeInfo;

// System.Int16
#include "mscorlib_System_Int16.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int16>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Int16>
extern Il2CppType Int16_t349_0_0_0;
extern Il2CppType Int16_t349_0_0_0;
extern Il2CppType Int16_t349_0_0_0;
static ParameterInfo IComparer_1_t2118_IComparer_1_Compare_m34662_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t349_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int16_t349_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int16_t349_Int16_t349 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m34662_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.Int16>::Compare(T,T)
MethodInfo IComparer_1_Compare_m34662_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t2118_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int16_t349_Int16_t349/* invoker_method */
	, IComparer_1_t2118_IComparer_1_Compare_m34662_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m34662_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t2118_MethodInfos[] =
{
	&IComparer_1_Compare_m34662_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t2118_0_0_0;
extern Il2CppType IComparer_1_t2118_1_0_0;
struct IComparer_1_t2118;
extern Il2CppGenericClass IComparer_1_t2118_GenericClass;
TypeInfo IComparer_1_t2118_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t2118_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t2118_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t2118_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t2118_0_0_0/* byval_arg */
	, &IComparer_1_t2118_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t2118_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t2120_il2cpp_TypeInfo;

// System.Int64
#include "mscorlib_System_Int64.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int64>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Int64>
extern Il2CppType Int64_t620_0_0_0;
extern Il2CppType Int64_t620_0_0_0;
extern Il2CppType Int64_t620_0_0_0;
static ParameterInfo IComparer_1_t2120_IComparer_1_Compare_m34663_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int64_t620_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int64_t620_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int64_t620_Int64_t620 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m34663_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.Int64>::Compare(T,T)
MethodInfo IComparer_1_Compare_m34663_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t2120_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int64_t620_Int64_t620/* invoker_method */
	, IComparer_1_t2120_IComparer_1_Compare_m34663_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m34663_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t2120_MethodInfos[] =
{
	&IComparer_1_Compare_m34663_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t2120_0_0_0;
extern Il2CppType IComparer_1_t2120_1_0_0;
struct IComparer_1_t2120;
extern Il2CppGenericClass IComparer_1_t2120_GenericClass;
TypeInfo IComparer_1_t2120_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t2120_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t2120_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t2120_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t2120_0_0_0/* byval_arg */
	, &IComparer_1_t2120_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t2120_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5111_il2cpp_TypeInfo;

// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"


// T System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>
extern MethodInfo IEnumerator_1_get_Current_m34664_MethodInfo;
static PropertyInfo IEnumerator_1_t5111____Current_PropertyInfo = 
{
	&IEnumerator_1_t5111_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34664_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5111_PropertyInfos[] =
{
	&IEnumerator_1_t5111____Current_PropertyInfo,
	NULL
};
extern Il2CppType SpecialFolder_t1673_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t1673 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34664_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34664_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5111_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t1673_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t1673/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34664_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5111_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34664_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5111_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5111_0_0_0;
extern Il2CppType IEnumerator_1_t5111_1_0_0;
struct IEnumerator_1_t5111;
extern Il2CppGenericClass IEnumerator_1_t5111_GenericClass;
TypeInfo IEnumerator_1_t5111_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5111_MethodInfos/* methods */
	, IEnumerator_1_t5111_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5111_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5111_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5111_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5111_0_0_0/* byval_arg */
	, &IEnumerator_1_t5111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5111_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_551.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3547_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_551MethodDeclarations.h"

extern TypeInfo SpecialFolder_t1673_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19698_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpecialFolder_t1673_m26546_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSpecialFolder_t1673_m26546 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19694_MethodInfo;
 void InternalEnumerator_1__ctor_m19694 (InternalEnumerator_1_t3547 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695 (InternalEnumerator_1_t3547 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19698(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19698_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SpecialFolder_t1673_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19696_MethodInfo;
 void InternalEnumerator_1_Dispose_m19696 (InternalEnumerator_1_t3547 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19697_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19697 (InternalEnumerator_1_t3547 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19698 (InternalEnumerator_1_t3547 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSpecialFolder_t1673_m26546(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSpecialFolder_t1673_m26546_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3547____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3547, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3547____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3547, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3547_FieldInfos[] =
{
	&InternalEnumerator_1_t3547____array_0_FieldInfo,
	&InternalEnumerator_1_t3547____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3547____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3547_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3547____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3547_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19698_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3547_PropertyInfos[] =
{
	&InternalEnumerator_1_t3547____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3547____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3547_InternalEnumerator_1__ctor_m19694_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19694_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19694_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19694/* method */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3547_InternalEnumerator_1__ctor_m19694_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19694_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695/* method */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19696_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19696_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19696/* method */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19696_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19697_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19697_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19697/* method */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19697_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t1673_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t1673 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19698_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19698_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19698/* method */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t1673_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t1673/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19698_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3547_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19694_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695_MethodInfo,
	&InternalEnumerator_1_Dispose_m19696_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19697_MethodInfo,
	&InternalEnumerator_1_get_Current_m19698_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3547_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19695_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19697_MethodInfo,
	&InternalEnumerator_1_Dispose_m19696_MethodInfo,
	&InternalEnumerator_1_get_Current_m19698_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3547_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5111_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3547_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5111_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3547_0_0_0;
extern Il2CppType InternalEnumerator_1_t3547_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3547_GenericClass;
TypeInfo InternalEnumerator_1_t3547_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3547_MethodInfos/* methods */
	, InternalEnumerator_1_t3547_PropertyInfos/* properties */
	, InternalEnumerator_1_t3547_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3547_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3547_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3547_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3547_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3547_1_0_0/* this_arg */
	, InternalEnumerator_1_t3547_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3547_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3547)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6696_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo ICollection_1_get_Count_m34665_MethodInfo;
static PropertyInfo ICollection_1_t6696____Count_PropertyInfo = 
{
	&ICollection_1_t6696_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34666_MethodInfo;
static PropertyInfo ICollection_1_t6696____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6696_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34666_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6696_PropertyInfos[] =
{
	&ICollection_1_t6696____Count_PropertyInfo,
	&ICollection_1_t6696____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34665_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
MethodInfo ICollection_1_get_Count_m34665_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34665_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34666_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34666_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34666_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t1673_0_0_0;
extern Il2CppType SpecialFolder_t1673_0_0_0;
static ParameterInfo ICollection_1_t6696_ICollection_1_Add_m34667_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t1673_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34667_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
MethodInfo ICollection_1_Add_m34667_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6696_ICollection_1_Add_m34667_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34667_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34668_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
MethodInfo ICollection_1_Clear_m34668_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34668_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t1673_0_0_0;
static ParameterInfo ICollection_1_t6696_ICollection_1_Contains_m34669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t1673_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34669_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
MethodInfo ICollection_1_Contains_m34669_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6696_ICollection_1_Contains_m34669_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34669_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolderU5BU5D_t3764_0_0_0;
extern Il2CppType SpecialFolderU5BU5D_t3764_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6696_ICollection_1_CopyTo_m34670_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolderU5BU5D_t3764_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34670_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34670_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6696_ICollection_1_CopyTo_m34670_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34670_GenericMethod/* genericMethod */

};
extern Il2CppType SpecialFolder_t1673_0_0_0;
static ParameterInfo ICollection_1_t6696_ICollection_1_Remove_m34671_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t1673_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34671_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
MethodInfo ICollection_1_Remove_m34671_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6696_ICollection_1_Remove_m34671_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34671_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6696_MethodInfos[] =
{
	&ICollection_1_get_Count_m34665_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34666_MethodInfo,
	&ICollection_1_Add_m34667_MethodInfo,
	&ICollection_1_Clear_m34668_MethodInfo,
	&ICollection_1_Contains_m34669_MethodInfo,
	&ICollection_1_CopyTo_m34670_MethodInfo,
	&ICollection_1_Remove_m34671_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6698_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6696_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6698_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6696_0_0_0;
extern Il2CppType ICollection_1_t6696_1_0_0;
struct ICollection_1_t6696;
extern Il2CppGenericClass ICollection_1_t6696_GenericClass;
TypeInfo ICollection_1_t6696_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6696_MethodInfos/* methods */
	, ICollection_1_t6696_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6696_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6696_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6696_0_0_0/* byval_arg */
	, &ICollection_1_t6696_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6696_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern Il2CppType IEnumerator_1_t5111_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34672_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34672_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6698_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5111_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34672_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6698_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34672_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6698_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6698_0_0_0;
extern Il2CppType IEnumerable_1_t6698_1_0_0;
struct IEnumerable_1_t6698;
extern Il2CppGenericClass IEnumerable_1_t6698_GenericClass;
TypeInfo IEnumerable_1_t6698_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6698_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6698_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6698_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6698_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6698_0_0_0/* byval_arg */
	, &IEnumerable_1_t6698_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6698_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6697_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo IList_1_get_Item_m34673_MethodInfo;
extern MethodInfo IList_1_set_Item_m34674_MethodInfo;
static PropertyInfo IList_1_t6697____Item_PropertyInfo = 
{
	&IList_1_t6697_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34673_MethodInfo/* get */
	, &IList_1_set_Item_m34674_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6697_PropertyInfos[] =
{
	&IList_1_t6697____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpecialFolder_t1673_0_0_0;
static ParameterInfo IList_1_t6697_IList_1_IndexOf_m34675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t1673_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34675_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34675_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6697_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6697_IList_1_IndexOf_m34675_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34675_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SpecialFolder_t1673_0_0_0;
static ParameterInfo IList_1_t6697_IList_1_Insert_m34676_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t1673_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34676_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34676_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6697_IList_1_Insert_m34676_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34676_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6697_IList_1_RemoveAt_m34677_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34677_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34677_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6697_IList_1_RemoveAt_m34677_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34677_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6697_IList_1_get_Item_m34673_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType SpecialFolder_t1673_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t1673_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34673_GenericMethod;
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34673_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6697_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t1673_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t1673_Int32_t18/* invoker_method */
	, IList_1_t6697_IList_1_get_Item_m34673_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34673_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType SpecialFolder_t1673_0_0_0;
static ParameterInfo IList_1_t6697_IList_1_set_Item_m34674_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t1673_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34674_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34674_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6697_IList_1_set_Item_m34674_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34674_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6697_MethodInfos[] =
{
	&IList_1_IndexOf_m34675_MethodInfo,
	&IList_1_Insert_m34676_MethodInfo,
	&IList_1_RemoveAt_m34677_MethodInfo,
	&IList_1_get_Item_m34673_MethodInfo,
	&IList_1_set_Item_m34674_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6697_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6696_il2cpp_TypeInfo,
	&IEnumerable_1_t6698_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6697_0_0_0;
extern Il2CppType IList_1_t6697_1_0_0;
struct IList_1_t6697;
extern Il2CppGenericClass IList_1_t6697_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6697_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6697_MethodInfos/* methods */
	, IList_1_t6697_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6697_il2cpp_TypeInfo/* element_class */
	, IList_1_t6697_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6697_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6697_0_0_0/* byval_arg */
	, &IList_1_t6697_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6697_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IComparable_1_t2124_il2cpp_TypeInfo;

// System.Guid
#include "mscorlib_System_Guid.h"


// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo IComparable_1_t2124_IComparable_1_CompareTo_m34678_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m34678_GenericMethod;
// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m34678_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2124_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680/* invoker_method */
	, IComparable_1_t2124_IComparable_1_CompareTo_m34678_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m34678_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2124_MethodInfos[] =
{
	&IComparable_1_CompareTo_m34678_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2124_0_0_0;
extern Il2CppType IComparable_1_t2124_1_0_0;
struct IComparable_1_t2124;
extern Il2CppGenericClass IComparable_1_t2124_GenericClass;
TypeInfo IComparable_1_t2124_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2124_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2124_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2124_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2124_0_0_0/* byval_arg */
	, &IComparable_1_t2124_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2124_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2125_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo IEquatable_1_t2125_IEquatable_1_Equals_m34679_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m34679_GenericMethod;
// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
MethodInfo IEquatable_1_Equals_m34679_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2125_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Guid_t1680/* invoker_method */
	, IEquatable_1_t2125_IEquatable_1_Equals_m34679_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m34679_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2125_MethodInfos[] =
{
	&IEquatable_1_Equals_m34679_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2125_0_0_0;
extern Il2CppType IEquatable_1_t2125_1_0_0;
struct IEquatable_1_t2125;
extern Il2CppGenericClass IEquatable_1_t2125_GenericClass;
TypeInfo IEquatable_1_t2125_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2125_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2125_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2125_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2125_0_0_0/* byval_arg */
	, &IEquatable_1_t2125_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2125_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2122_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"

extern TypeInfo Guid_t1680_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_31MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m19700_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m34678_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m10409_MethodInfo;
 void GenericComparer_1__ctor_m10409 (GenericComparer_1_t2122 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m19700(__this, /*hidden argument*/&Comparer_1__ctor_m19700_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m19699_MethodInfo;
 int32_t GenericComparer_1_Compare_m19699 (GenericComparer_1_t2122 * __this, Guid_t1680  ___x, Guid_t1680  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t1680  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t1680  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t1680  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t1680  >::Invoke(&IComparable_1_CompareTo_m34678_MethodInfo, Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m10409_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
MethodInfo GenericComparer_1__ctor_m10409_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m10409/* method */
	, &GenericComparer_1_t2122_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericComparer_1__ctor_m10409_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo GenericComparer_1_t2122_GenericComparer_1_Compare_m19699_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m19699_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m19699_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m19699/* method */
	, &GenericComparer_1_t2122_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680/* invoker_method */
	, GenericComparer_1_t2122_GenericComparer_1_Compare_m19699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m19699_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t2122_MethodInfos[] =
{
	&GenericComparer_1__ctor_m10409_MethodInfo,
	&GenericComparer_1_Compare_m19699_MethodInfo,
	NULL
};
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m19702_MethodInfo;
static MethodInfo* GenericComparer_1_t2122_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&GenericComparer_1_Compare_m19699_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19702_MethodInfo,
	&GenericComparer_1_Compare_m19699_MethodInfo,
};
extern TypeInfo IComparer_1_t6866_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t2122_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6866_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t2122_0_0_0;
extern Il2CppType GenericComparer_1_t2122_1_0_0;
extern TypeInfo Comparer_1_t3548_il2cpp_TypeInfo;
struct GenericComparer_1_t2122;
extern Il2CppGenericClass GenericComparer_1_t2122_GenericClass;
TypeInfo GenericComparer_1_t2122_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t2122_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t2122_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t2122_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t2122_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t2122_0_0_0/* byval_arg */
	, &GenericComparer_1_t2122_1_0_0/* this_arg */
	, GenericComparer_1_t2122_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t2122_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t2122)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_31.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_32.h"
extern TypeInfo DefaultComparer_t3549_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_32MethodDeclarations.h"
extern MethodInfo DefaultComparer__ctor_m19704_MethodInfo;
extern MethodInfo Comparer_1_Compare_m34680_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
 void Comparer_1__ctor_m19700 (Comparer_1_t3548 * __this, MethodInfo* method){
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern MethodInfo Comparer_1__cctor_m19701_MethodInfo;
 void Comparer_1__cctor_m19701 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t3549 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3549 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t3549_il2cpp_TypeInfo));
	DefaultComparer__ctor_m19704(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m19704_MethodInfo);
	((Comparer_1_t3548_StaticFields*)InitializedTypeInfo(&Comparer_1_t3548_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m19702 (Comparer_1_t3548 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t1680 , Guid_t1680  >::Invoke(&Comparer_1_Compare_m34680_MethodInfo, __this, ((*(Guid_t1680 *)((Guid_t1680 *)UnBox (___x, InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo))))), ((*(Guid_t1680 *)((Guid_t1680 *)UnBox (___y, InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t377 * L_1 = (ArgumentException_t377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t377_il2cpp_TypeInfo));
		ArgumentException__ctor_m9000(L_1, /*hidden argument*/&ArgumentException__ctor_m9000_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern MethodInfo Comparer_1_get_Default_m19703_MethodInfo;
 Comparer_1_t3548 * Comparer_1_get_Default_m19703 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t3548_il2cpp_TypeInfo));
		return (((Comparer_1_t3548_StaticFields*)InitializedTypeInfo(&Comparer_1_t3548_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType Comparer_1_t3548_0_0_49;
FieldInfo Comparer_1_t3548_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t3548_0_0_49/* type */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t3548_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t3548_FieldInfos[] =
{
	&Comparer_1_t3548_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t3548____Default_PropertyInfo = 
{
	&Comparer_1_t3548_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m19703_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t3548_PropertyInfos[] =
{
	&Comparer_1_t3548____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m19700_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
MethodInfo Comparer_1__ctor_m19700_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m19700/* method */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__ctor_m19700_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m19701_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
MethodInfo Comparer_1__cctor_m19701_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m19701/* method */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m19701_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t3548_Comparer_1_System_Collections_IComparer_Compare_m19702_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m19702_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m19702_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m19702/* method */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t_Object_t/* invoker_method */
	, Comparer_1_t3548_Comparer_1_System_Collections_IComparer_Compare_m19702_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m19702_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo Comparer_1_t3548_Comparer_1_Compare_m34680_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m34680_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
MethodInfo Comparer_1_Compare_m34680_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680/* invoker_method */
	, Comparer_1_t3548_Comparer_1_Compare_m34680_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m34680_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t3548_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m19703_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
MethodInfo Comparer_1_get_Default_m19703_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m19703/* method */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t3548_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m19703_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t3548_MethodInfos[] =
{
	&Comparer_1__ctor_m19700_MethodInfo,
	&Comparer_1__cctor_m19701_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19702_MethodInfo,
	&Comparer_1_Compare_m34680_MethodInfo,
	&Comparer_1_get_Default_m19703_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t3548_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&Comparer_1_Compare_m34680_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19702_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t3548_InterfacesTypeInfos[] = 
{
	&IComparer_1_t6866_il2cpp_TypeInfo,
	&IComparer_t767_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t3548_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6866_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t3548_0_0_0;
extern Il2CppType Comparer_1_t3548_1_0_0;
struct Comparer_1_t3548;
extern Il2CppGenericClass Comparer_1_t3548_GenericClass;
TypeInfo Comparer_1_t3548_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t3548_MethodInfos/* methods */
	, Comparer_1_t3548_PropertyInfos/* properties */
	, Comparer_1_t3548_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t3548_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t3548_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t3548_0_0_0/* byval_arg */
	, &Comparer_1_t3548_1_0_0/* this_arg */
	, Comparer_1_t3548_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t3548_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t3548)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t3548_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo IComparer_1_t6866_IComparer_1_Compare_m34681_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m34681_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
MethodInfo IComparer_1_Compare_m34681_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t6866_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680/* invoker_method */
	, IComparer_1_t6866_IComparer_1_Compare_m34681_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m34681_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t6866_MethodInfos[] =
{
	&IComparer_1_Compare_m34681_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t6866_0_0_0;
extern Il2CppType IComparer_1_t6866_1_0_0;
struct IComparer_1_t6866;
extern Il2CppGenericClass IComparer_1_t6866_GenericClass;
TypeInfo IComparer_1_t6866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t6866_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t6866_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t6866_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t6866_0_0_0/* byval_arg */
	, &IComparer_1_t6866_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t6866_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
 void DefaultComparer__ctor_m19704 (DefaultComparer_t3549 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m19700(__this, /*hidden argument*/&Comparer_1__ctor_m19700_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m19705_MethodInfo;
 int32_t DefaultComparer_Compare_m19705 (DefaultComparer_t3549 * __this, Guid_t1680  ___x, Guid_t1680  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t1680  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t1680  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t1680  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Guid_t1680  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t2124_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		Guid_t1680  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2124_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t1680  >::Invoke(&IComparable_1_CompareTo_m34678_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2124_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		Guid_t1680  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Guid_t1680  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_13);
		Guid_t1680  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m9818_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t377 * L_18 = (ArgumentException_t377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t377_il2cpp_TypeInfo));
		ArgumentException__ctor_m1918(L_18, (String_t*) &_stringLiteral1182, /*hidden argument*/&ArgumentException__ctor_m1918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m19704_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m19704_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m19704/* method */
	, &DefaultComparer_t3549_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m19704_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo DefaultComparer_t3549_DefaultComparer_Compare_m19705_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m19705_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m19705_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m19705/* method */
	, &DefaultComparer_t3549_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680_Guid_t1680/* invoker_method */
	, DefaultComparer_t3549_DefaultComparer_Compare_m19705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m19705_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t3549_MethodInfos[] =
{
	&DefaultComparer__ctor_m19704_MethodInfo,
	&DefaultComparer_Compare_m19705_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t3549_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&DefaultComparer_Compare_m19705_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19702_MethodInfo,
	&DefaultComparer_Compare_m19705_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t3549_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6866_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t3549_0_0_0;
extern Il2CppType DefaultComparer_t3549_1_0_0;
struct DefaultComparer_t3549;
extern Il2CppGenericClass DefaultComparer_t3549_GenericClass;
TypeInfo DefaultComparer_t3549_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t3549_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t3548_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t1260_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t3549_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t3549_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t3549_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t3549_0_0_0/* byval_arg */
	, &DefaultComparer_t3549_1_0_0/* this_arg */
	, DefaultComparer_t3549_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t3549_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t3549)/* instance_size */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2123_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m19708_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m34679_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m10410_MethodInfo;
 void GenericEqualityComparer_1__ctor_m10410 (GenericEqualityComparer_1_t2123 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m19708(__this, /*hidden argument*/&EqualityComparer_1__ctor_m19708_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m19706_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m19706 (GenericEqualityComparer_1_t2123 * __this, Guid_t1680  ___obj, MethodInfo* method){
	{
		Guid_t1680  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1290_MethodInfo, Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m19707_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m19707 (GenericEqualityComparer_1_t2123 * __this, Guid_t1680  ___x, Guid_t1680  ___y, MethodInfo* method){
	{
		Guid_t1680  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t1680  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Guid_t1680  >::Invoke(&IEquatable_1_Equals_m34679_MethodInfo, Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m10410_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m10410_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m10410/* method */
	, &GenericEqualityComparer_1_t2123_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericEqualityComparer_1__ctor_m10410_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2123_GenericEqualityComparer_1_GetHashCode_m19706_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m19706_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m19706_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m19706/* method */
	, &GenericEqualityComparer_1_t2123_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680/* invoker_method */
	, GenericEqualityComparer_1_t2123_GenericEqualityComparer_1_GetHashCode_m19706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m19706_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2123_GenericEqualityComparer_1_Equals_m19707_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m19707_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m19707_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m19707/* method */
	, &GenericEqualityComparer_1_t2123_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680/* invoker_method */
	, GenericEqualityComparer_1_t2123_GenericEqualityComparer_1_Equals_m19707_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m19707_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t2123_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m10410_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19706_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19707_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t2123_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19707_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19706_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19706_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19707_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t6867_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t2123_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6867_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t2123_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2123_1_0_0;
extern TypeInfo EqualityComparer_1_t3550_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t2123;
extern Il2CppGenericClass GenericEqualityComparer_1_t2123_GenericClass;
TypeInfo GenericEqualityComparer_1_t2123_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t2123_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t2123_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t2123_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t2123_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t2123_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t2123_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t2123_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t2123_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t2123)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_40.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_41.h"
extern TypeInfo DefaultComparer_t3551_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_41MethodDeclarations.h"
extern MethodInfo DefaultComparer__ctor_m19713_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m34682_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m34683_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
 void EqualityComparer_1__ctor_m19708 (EqualityComparer_1_t3550 * __this, MethodInfo* method){
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m19709_MethodInfo;
 void EqualityComparer_1__cctor_m19709 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t3551 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3551 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t3551_il2cpp_TypeInfo));
	DefaultComparer__ctor_m19713(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m19713_MethodInfo);
	((EqualityComparer_1_t3550_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t3550_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710 (EqualityComparer_1_t3550 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t1680  >::Invoke(&EqualityComparer_1_GetHashCode_m34682_MethodInfo, __this, ((*(Guid_t1680 *)((Guid_t1680 *)UnBox (___obj, InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711 (EqualityComparer_1_t3550 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, Guid_t1680 , Guid_t1680  >::Invoke(&EqualityComparer_1_Equals_m34683_MethodInfo, __this, ((*(Guid_t1680 *)((Guid_t1680 *)UnBox (___x, InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo))))), ((*(Guid_t1680 *)((Guid_t1680 *)UnBox (___y, InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m19712_MethodInfo;
 EqualityComparer_1_t3550 * EqualityComparer_1_get_Default_m19712 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t3550_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t3550_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t3550_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType EqualityComparer_1_t3550_0_0_49;
FieldInfo EqualityComparer_1_t3550_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t3550_0_0_49/* type */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t3550_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t3550_FieldInfos[] =
{
	&EqualityComparer_1_t3550_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t3550____Default_PropertyInfo = 
{
	&EqualityComparer_1_t3550_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m19712_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t3550_PropertyInfos[] =
{
	&EqualityComparer_1_t3550____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m19708_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
MethodInfo EqualityComparer_1__ctor_m19708_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m19708/* method */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__ctor_m19708_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m19709_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
MethodInfo EqualityComparer_1__cctor_m19709_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m19709/* method */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m19709_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t3550_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710/* method */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, EqualityComparer_1_t3550_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t3550_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711/* method */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t3550_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo EqualityComparer_1_t3550_EqualityComparer_1_GetHashCode_m34682_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m34682_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m34682_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680/* invoker_method */
	, EqualityComparer_1_t3550_EqualityComparer_1_GetHashCode_m34682_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m34682_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo EqualityComparer_1_t3550_EqualityComparer_1_Equals_m34683_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m34683_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m34683_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680/* invoker_method */
	, EqualityComparer_1_t3550_EqualityComparer_1_Equals_m34683_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m34683_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t3550_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19712_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m19712_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m19712/* method */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t3550_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m19712_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t3550_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m19708_MethodInfo,
	&EqualityComparer_1__cctor_m19709_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_MethodInfo,
	&EqualityComparer_1_GetHashCode_m34682_MethodInfo,
	&EqualityComparer_1_Equals_m34683_MethodInfo,
	&EqualityComparer_1_get_Default_m19712_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t3550_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&EqualityComparer_1_Equals_m34683_MethodInfo,
	&EqualityComparer_1_GetHashCode_m34682_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t3550_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t6867_il2cpp_TypeInfo,
	&IEqualityComparer_t774_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t3550_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6867_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t3550_0_0_0;
extern Il2CppType EqualityComparer_1_t3550_1_0_0;
struct EqualityComparer_1_t3550;
extern Il2CppGenericClass EqualityComparer_1_t3550_GenericClass;
TypeInfo EqualityComparer_1_t3550_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t3550_MethodInfos/* methods */
	, EqualityComparer_1_t3550_PropertyInfos/* properties */
	, EqualityComparer_1_t3550_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t3550_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t3550_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t3550_0_0_0/* byval_arg */
	, &EqualityComparer_1_t3550_1_0_0/* this_arg */
	, EqualityComparer_1_t3550_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t3550_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t3550)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t3550_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo IEqualityComparer_1_t6867_IEqualityComparer_1_Equals_m34684_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34684_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m34684_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t6867_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680/* invoker_method */
	, IEqualityComparer_1_t6867_IEqualityComparer_1_Equals_m34684_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m34684_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo IEqualityComparer_1_t6867_IEqualityComparer_1_GetHashCode_m34685_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m34685_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m34685_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t6867_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680/* invoker_method */
	, IEqualityComparer_1_t6867_IEqualityComparer_1_GetHashCode_m34685_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m34685_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t6867_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m34684_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m34685_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t6867_0_0_0;
extern Il2CppType IEqualityComparer_1_t6867_1_0_0;
struct IEqualityComparer_1_t6867;
extern Il2CppGenericClass IEqualityComparer_1_t6867_GenericClass;
TypeInfo IEqualityComparer_1_t6867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t6867_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t6867_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t6867_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t6867_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t6867_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t6867_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
 void DefaultComparer__ctor_m19713 (DefaultComparer_t3551 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m19708(__this, /*hidden argument*/&EqualityComparer_1__ctor_m19708_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m19714_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m19714 (DefaultComparer_t3551 * __this, Guid_t1680  ___obj, MethodInfo* method){
	{
		Guid_t1680  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1290_MethodInfo, Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m19715_MethodInfo;
 bool DefaultComparer_Equals_m19715 (DefaultComparer_t3551 * __this, Guid_t1680  ___x, Guid_t1680  ___y, MethodInfo* method){
	{
		Guid_t1680  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t1680  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t1680  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1289_MethodInfo, Box(InitializedTypeInfo(&Guid_t1680_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m19713_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m19713_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m19713/* method */
	, &DefaultComparer_t3551_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m19713_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo DefaultComparer_t3551_DefaultComparer_GetHashCode_m19714_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m19714_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m19714_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m19714/* method */
	, &DefaultComparer_t3551_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Guid_t1680/* invoker_method */
	, DefaultComparer_t3551_DefaultComparer_GetHashCode_m19714_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m19714_GenericMethod/* genericMethod */

};
extern Il2CppType Guid_t1680_0_0_0;
extern Il2CppType Guid_t1680_0_0_0;
static ParameterInfo DefaultComparer_t3551_DefaultComparer_Equals_m19715_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t1680_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m19715_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m19715_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m19715/* method */
	, &DefaultComparer_t3551_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Guid_t1680_Guid_t1680/* invoker_method */
	, DefaultComparer_t3551_DefaultComparer_Equals_m19715_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m19715_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t3551_MethodInfos[] =
{
	&DefaultComparer__ctor_m19713_MethodInfo,
	&DefaultComparer_GetHashCode_m19714_MethodInfo,
	&DefaultComparer_Equals_m19715_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t3551_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&DefaultComparer_Equals_m19715_MethodInfo,
	&DefaultComparer_GetHashCode_m19714_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19711_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19710_MethodInfo,
	&DefaultComparer_GetHashCode_m19714_MethodInfo,
	&DefaultComparer_Equals_m19715_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t3551_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6867_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t3551_0_0_0;
extern Il2CppType DefaultComparer_t3551_1_0_0;
struct DefaultComparer_t3551;
extern Il2CppGenericClass DefaultComparer_t3551_GenericClass;
TypeInfo DefaultComparer_t3551_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t3551_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t3550_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t1270_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t3551_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t3551_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t3551_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t3551_0_0_0/* byval_arg */
	, &DefaultComparer_t3551_1_0_0/* this_arg */
	, DefaultComparer_t3551_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t3551_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t3551)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5113_il2cpp_TypeInfo;

// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimization.h"


// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo IEnumerator_1_get_Current_m34686_MethodInfo;
static PropertyInfo IEnumerator_1_t5113____Current_PropertyInfo = 
{
	&IEnumerator_1_t5113_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34686_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5113_PropertyInfos[] =
{
	&IEnumerator_1_t5113____Current_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t1682_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t1682 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34686_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34686_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5113_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t1682_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t1682/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34686_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5113_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34686_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5113_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5113_0_0_0;
extern Il2CppType IEnumerator_1_t5113_1_0_0;
struct IEnumerator_1_t5113;
extern Il2CppGenericClass IEnumerator_1_t5113_GenericClass;
TypeInfo IEnumerator_1_t5113_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5113_MethodInfos/* methods */
	, IEnumerator_1_t5113_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5113_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5113_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5113_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5113_0_0_0/* byval_arg */
	, &IEnumerator_1_t5113_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5113_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.LoaderOptimization>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_552.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3552_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.LoaderOptimization>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_552MethodDeclarations.h"

extern TypeInfo LoaderOptimization_t1682_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19720_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoaderOptimization_t1682_m26557_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoaderOptimization_t1682_m26557 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19716_MethodInfo;
 void InternalEnumerator_1__ctor_m19716 (InternalEnumerator_1_t3552 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717 (InternalEnumerator_1_t3552 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19720(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19720_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoaderOptimization_t1682_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19718_MethodInfo;
 void InternalEnumerator_1_Dispose_m19718 (InternalEnumerator_1_t3552 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19719_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19719 (InternalEnumerator_1_t3552 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19720 (InternalEnumerator_1_t3552 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLoaderOptimization_t1682_m26557(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoaderOptimization_t1682_m26557_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3552____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3552, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3552____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3552, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3552_FieldInfos[] =
{
	&InternalEnumerator_1_t3552____array_0_FieldInfo,
	&InternalEnumerator_1_t3552____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3552____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3552_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3552____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3552_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19720_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3552_PropertyInfos[] =
{
	&InternalEnumerator_1_t3552____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3552____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3552_InternalEnumerator_1__ctor_m19716_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19716_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19716_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19716/* method */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3552_InternalEnumerator_1__ctor_m19716_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19716_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717/* method */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19718_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19718_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19718/* method */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19718_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19719_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19719_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19719/* method */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19719_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t1682_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t1682 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19720_GenericMethod;
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19720_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19720/* method */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t1682_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t1682/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19720_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3552_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19716_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717_MethodInfo,
	&InternalEnumerator_1_Dispose_m19718_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19719_MethodInfo,
	&InternalEnumerator_1_get_Current_m19720_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3552_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19717_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19719_MethodInfo,
	&InternalEnumerator_1_Dispose_m19718_MethodInfo,
	&InternalEnumerator_1_get_Current_m19720_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3552_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5113_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3552_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5113_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3552_0_0_0;
extern Il2CppType InternalEnumerator_1_t3552_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3552_GenericClass;
TypeInfo InternalEnumerator_1_t3552_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3552_MethodInfos/* methods */
	, InternalEnumerator_1_t3552_PropertyInfos/* properties */
	, InternalEnumerator_1_t3552_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3552_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3552_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3552_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3552_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3552_1_0_0/* this_arg */
	, InternalEnumerator_1_t3552_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3552_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3552)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6699_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo ICollection_1_get_Count_m34687_MethodInfo;
static PropertyInfo ICollection_1_t6699____Count_PropertyInfo = 
{
	&ICollection_1_t6699_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34687_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34688_MethodInfo;
static PropertyInfo ICollection_1_t6699____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6699_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34688_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6699_PropertyInfos[] =
{
	&ICollection_1_t6699____Count_PropertyInfo,
	&ICollection_1_t6699____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34687_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
MethodInfo ICollection_1_get_Count_m34687_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34687_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34688_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34688_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34688_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t1682_0_0_0;
extern Il2CppType LoaderOptimization_t1682_0_0_0;
static ParameterInfo ICollection_1_t6699_ICollection_1_Add_m34689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t1682_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34689_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
MethodInfo ICollection_1_Add_m34689_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6699_ICollection_1_Add_m34689_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34689_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34690_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
MethodInfo ICollection_1_Clear_m34690_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34690_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t1682_0_0_0;
static ParameterInfo ICollection_1_t6699_ICollection_1_Contains_m34691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t1682_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34691_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
MethodInfo ICollection_1_Contains_m34691_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6699_ICollection_1_Contains_m34691_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34691_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimizationU5BU5D_t3765_0_0_0;
extern Il2CppType LoaderOptimizationU5BU5D_t3765_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6699_ICollection_1_CopyTo_m34692_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimizationU5BU5D_t3765_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34692_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34692_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6699_ICollection_1_CopyTo_m34692_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34692_GenericMethod/* genericMethod */

};
extern Il2CppType LoaderOptimization_t1682_0_0_0;
static ParameterInfo ICollection_1_t6699_ICollection_1_Remove_m34693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t1682_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34693_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
MethodInfo ICollection_1_Remove_m34693_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6699_ICollection_1_Remove_m34693_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34693_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6699_MethodInfos[] =
{
	&ICollection_1_get_Count_m34687_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34688_MethodInfo,
	&ICollection_1_Add_m34689_MethodInfo,
	&ICollection_1_Clear_m34690_MethodInfo,
	&ICollection_1_Contains_m34691_MethodInfo,
	&ICollection_1_CopyTo_m34692_MethodInfo,
	&ICollection_1_Remove_m34693_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6701_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6699_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6701_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6699_0_0_0;
extern Il2CppType ICollection_1_t6699_1_0_0;
struct ICollection_1_t6699;
extern Il2CppGenericClass ICollection_1_t6699_GenericClass;
TypeInfo ICollection_1_t6699_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6699_MethodInfos/* methods */
	, ICollection_1_t6699_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6699_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6699_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6699_0_0_0/* byval_arg */
	, &ICollection_1_t6699_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6699_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern Il2CppType IEnumerator_1_t5113_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34694_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34694_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6701_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5113_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34694_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6701_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34694_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6701_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6701_0_0_0;
extern Il2CppType IEnumerable_1_t6701_1_0_0;
struct IEnumerable_1_t6701;
extern Il2CppGenericClass IEnumerable_1_t6701_GenericClass;
TypeInfo IEnumerable_1_t6701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6701_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6701_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6701_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6701_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6701_0_0_0/* byval_arg */
	, &IEnumerable_1_t6701_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6701_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6700_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo IList_1_get_Item_m34695_MethodInfo;
extern MethodInfo IList_1_set_Item_m34696_MethodInfo;
static PropertyInfo IList_1_t6700____Item_PropertyInfo = 
{
	&IList_1_t6700_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34695_MethodInfo/* get */
	, &IList_1_set_Item_m34696_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6700_PropertyInfos[] =
{
	&IList_1_t6700____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t1682_0_0_0;
static ParameterInfo IList_1_t6700_IList_1_IndexOf_m34697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t1682_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34697_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34697_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6700_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6700_IList_1_IndexOf_m34697_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34697_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType LoaderOptimization_t1682_0_0_0;
static ParameterInfo IList_1_t6700_IList_1_Insert_m34698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t1682_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34698_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34698_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6700_IList_1_Insert_m34698_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34698_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6700_IList_1_RemoveAt_m34699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34699_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34699_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6700_IList_1_RemoveAt_m34699_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34699_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6700_IList_1_get_Item_m34695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType LoaderOptimization_t1682_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t1682_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34695_GenericMethod;
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34695_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6700_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t1682_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t1682_Int32_t18/* invoker_method */
	, IList_1_t6700_IList_1_get_Item_m34695_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34695_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType LoaderOptimization_t1682_0_0_0;
static ParameterInfo IList_1_t6700_IList_1_set_Item_m34696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t1682_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34696_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34696_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6700_IList_1_set_Item_m34696_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34696_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6700_MethodInfos[] =
{
	&IList_1_IndexOf_m34697_MethodInfo,
	&IList_1_Insert_m34698_MethodInfo,
	&IList_1_RemoveAt_m34699_MethodInfo,
	&IList_1_get_Item_m34695_MethodInfo,
	&IList_1_set_Item_m34696_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6700_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6699_il2cpp_TypeInfo,
	&IEnumerable_1_t6701_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6700_0_0_0;
extern Il2CppType IList_1_t6700_1_0_0;
struct IList_1_t6700;
extern Il2CppGenericClass IList_1_t6700_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6700_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6700_MethodInfos/* methods */
	, IList_1_t6700_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6700_il2cpp_TypeInfo/* element_class */
	, IList_1_t6700_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6700_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6700_0_0_0/* byval_arg */
	, &IList_1_t6700_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6700_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5115_il2cpp_TypeInfo;

// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m34700_MethodInfo;
static PropertyInfo IEnumerator_1_t5115____Current_PropertyInfo = 
{
	&IEnumerator_1_t5115_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5115_PropertyInfos[] =
{
	&IEnumerator_1_t5115____Current_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34700_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34700_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5115_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t1696_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34700_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5115_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34700_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5115_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5115_0_0_0;
extern Il2CppType IEnumerator_1_t5115_1_0_0;
struct IEnumerator_1_t5115;
extern Il2CppGenericClass IEnumerator_1_t5115_GenericClass;
TypeInfo IEnumerator_1_t5115_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5115_MethodInfos/* methods */
	, IEnumerator_1_t5115_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5115_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5115_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5115_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5115_0_0_0/* byval_arg */
	, &IEnumerator_1_t5115_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5115_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_553.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3553_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_553MethodDeclarations.h"

extern TypeInfo NonSerializedAttribute_t1696_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19725_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNonSerializedAttribute_t1696_m26568_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m19774_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m19774(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNonSerializedAttribute_t1696_m26568(__this, p0, method) (NonSerializedAttribute_t1696 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3553____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3553, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3553____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3553, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3553_FieldInfos[] =
{
	&InternalEnumerator_1_t3553____array_0_FieldInfo,
	&InternalEnumerator_1_t3553____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19722_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3553____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3553_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19722_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3553____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3553_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19725_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3553_PropertyInfos[] =
{
	&InternalEnumerator_1_t3553____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3553____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3553_InternalEnumerator_1__ctor_m19721_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19721_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19721_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3553_InternalEnumerator_1__ctor_m19721_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19721_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19722_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19722_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19722_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19723_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19723_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19723_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19724_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19724_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19724_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19725_GenericMethod;
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19725_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t1696_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19725_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3553_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19721_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19722_MethodInfo,
	&InternalEnumerator_1_Dispose_m19723_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19724_MethodInfo,
	&InternalEnumerator_1_get_Current_m19725_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19724_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19723_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3553_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19722_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19724_MethodInfo,
	&InternalEnumerator_1_Dispose_m19723_MethodInfo,
	&InternalEnumerator_1_get_Current_m19725_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3553_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5115_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3553_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5115_il2cpp_TypeInfo, 7},
};
extern TypeInfo NonSerializedAttribute_t1696_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3553_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19725_MethodInfo/* Method Usage */,
	&NonSerializedAttribute_t1696_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisNonSerializedAttribute_t1696_m26568_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3553_0_0_0;
extern Il2CppType InternalEnumerator_1_t3553_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3553_GenericClass;
TypeInfo InternalEnumerator_1_t3553_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3553_MethodInfos/* methods */
	, InternalEnumerator_1_t3553_PropertyInfos/* properties */
	, InternalEnumerator_1_t3553_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3553_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3553_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3553_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3553_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3553_1_0_0/* this_arg */
	, InternalEnumerator_1_t3553_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3553_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3553_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3553)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6702_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo ICollection_1_get_Count_m34701_MethodInfo;
static PropertyInfo ICollection_1_t6702____Count_PropertyInfo = 
{
	&ICollection_1_t6702_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34701_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34702_MethodInfo;
static PropertyInfo ICollection_1_t6702____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6702_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6702_PropertyInfos[] =
{
	&ICollection_1_t6702____Count_PropertyInfo,
	&ICollection_1_t6702____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34701_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m34701_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34701_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34702_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34702_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34702_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
static ParameterInfo ICollection_1_t6702_ICollection_1_Add_m34703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t1696_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34703_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m34703_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6702_ICollection_1_Add_m34703_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34703_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34704_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m34704_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34704_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
static ParameterInfo ICollection_1_t6702_ICollection_1_Contains_m34705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t1696_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34705_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m34705_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6702_ICollection_1_Contains_m34705_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34705_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttributeU5BU5D_t3766_0_0_0;
extern Il2CppType NonSerializedAttributeU5BU5D_t3766_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6702_ICollection_1_CopyTo_m34706_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttributeU5BU5D_t3766_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34706_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34706_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6702_ICollection_1_CopyTo_m34706_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34706_GenericMethod/* genericMethod */

};
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
static ParameterInfo ICollection_1_t6702_ICollection_1_Remove_m34707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t1696_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34707_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m34707_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6702_ICollection_1_Remove_m34707_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34707_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6702_MethodInfos[] =
{
	&ICollection_1_get_Count_m34701_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34702_MethodInfo,
	&ICollection_1_Add_m34703_MethodInfo,
	&ICollection_1_Clear_m34704_MethodInfo,
	&ICollection_1_Contains_m34705_MethodInfo,
	&ICollection_1_CopyTo_m34706_MethodInfo,
	&ICollection_1_Remove_m34707_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6704_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6702_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6704_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6702_0_0_0;
extern Il2CppType ICollection_1_t6702_1_0_0;
struct ICollection_1_t6702;
extern Il2CppGenericClass ICollection_1_t6702_GenericClass;
TypeInfo ICollection_1_t6702_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6702_MethodInfos/* methods */
	, ICollection_1_t6702_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6702_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6702_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6702_0_0_0/* byval_arg */
	, &ICollection_1_t6702_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6702_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern Il2CppType IEnumerator_1_t5115_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34708_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34708_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6704_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5115_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34708_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6704_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34708_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6704_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6704_0_0_0;
extern Il2CppType IEnumerable_1_t6704_1_0_0;
struct IEnumerable_1_t6704;
extern Il2CppGenericClass IEnumerable_1_t6704_GenericClass;
TypeInfo IEnumerable_1_t6704_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6704_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6704_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6704_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6704_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6704_0_0_0/* byval_arg */
	, &IEnumerable_1_t6704_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6704_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6703_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo IList_1_get_Item_m34709_MethodInfo;
extern MethodInfo IList_1_set_Item_m34710_MethodInfo;
static PropertyInfo IList_1_t6703____Item_PropertyInfo = 
{
	&IList_1_t6703_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34709_MethodInfo/* get */
	, &IList_1_set_Item_m34710_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6703_PropertyInfos[] =
{
	&IList_1_t6703____Item_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
static ParameterInfo IList_1_t6703_IList_1_IndexOf_m34711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t1696_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34711_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34711_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6703_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6703_IList_1_IndexOf_m34711_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34711_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
static ParameterInfo IList_1_t6703_IList_1_Insert_m34712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t1696_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34712_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34712_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6703_IList_1_Insert_m34712_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34712_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6703_IList_1_RemoveAt_m34713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34713_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34713_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6703_IList_1_RemoveAt_m34713_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34713_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6703_IList_1_get_Item_m34709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34709_GenericMethod;
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34709_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6703_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t1696_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6703_IList_1_get_Item_m34709_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34709_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType NonSerializedAttribute_t1696_0_0_0;
static ParameterInfo IList_1_t6703_IList_1_set_Item_m34710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t1696_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34710_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34710_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6703_IList_1_set_Item_m34710_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34710_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6703_MethodInfos[] =
{
	&IList_1_IndexOf_m34711_MethodInfo,
	&IList_1_Insert_m34712_MethodInfo,
	&IList_1_RemoveAt_m34713_MethodInfo,
	&IList_1_get_Item_m34709_MethodInfo,
	&IList_1_set_Item_m34710_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6703_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6702_il2cpp_TypeInfo,
	&IEnumerable_1_t6704_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6703_0_0_0;
extern Il2CppType IList_1_t6703_1_0_0;
struct IList_1_t6703;
extern Il2CppGenericClass IList_1_t6703_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6703_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6703_MethodInfos/* methods */
	, IList_1_t6703_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6703_il2cpp_TypeInfo/* element_class */
	, IList_1_t6703_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6703_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6703_0_0_0/* byval_arg */
	, &IList_1_t6703_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6703_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5117_il2cpp_TypeInfo;

// System.PlatformID
#include "mscorlib_System_PlatformID.h"


// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.PlatformID>
extern MethodInfo IEnumerator_1_get_Current_m34714_MethodInfo;
static PropertyInfo IEnumerator_1_t5117____Current_PropertyInfo = 
{
	&IEnumerator_1_t5117_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34714_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5117_PropertyInfos[] =
{
	&IEnumerator_1_t5117____Current_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t1701_0_0_0;
extern void* RuntimeInvoker_PlatformID_t1701 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34714_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.PlatformID>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34714_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5117_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t1701_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t1701/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34714_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5117_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34714_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5117_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5117_0_0_0;
extern Il2CppType IEnumerator_1_t5117_1_0_0;
struct IEnumerator_1_t5117;
extern Il2CppGenericClass IEnumerator_1_t5117_GenericClass;
TypeInfo IEnumerator_1_t5117_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5117_MethodInfos/* methods */
	, IEnumerator_1_t5117_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5117_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5117_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5117_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5117_0_0_0/* byval_arg */
	, &IEnumerator_1_t5117_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5117_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.PlatformID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_554.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3554_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.PlatformID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_554MethodDeclarations.h"

extern TypeInfo PlatformID_t1701_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19730_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPlatformID_t1701_m26579_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.PlatformID>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPlatformID_t1701_m26579 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19726_MethodInfo;
 void InternalEnumerator_1__ctor_m19726 (InternalEnumerator_1_t3554 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727 (InternalEnumerator_1_t3554 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19730(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19730_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PlatformID_t1701_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19728_MethodInfo;
 void InternalEnumerator_1_Dispose_m19728 (InternalEnumerator_1_t3554 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19729_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19729 (InternalEnumerator_1_t3554 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19730 (InternalEnumerator_1_t3554 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPlatformID_t1701_m26579(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPlatformID_t1701_m26579_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.PlatformID>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3554____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3554, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3554____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3554, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3554_FieldInfos[] =
{
	&InternalEnumerator_1_t3554____array_0_FieldInfo,
	&InternalEnumerator_1_t3554____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3554____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3554_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3554____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3554_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19730_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3554_PropertyInfos[] =
{
	&InternalEnumerator_1_t3554____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3554____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3554_InternalEnumerator_1__ctor_m19726_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19726_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19726_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19726/* method */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3554_InternalEnumerator_1__ctor_m19726_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19726_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.PlatformID>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727/* method */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19728_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.PlatformID>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19728_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19728/* method */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19728_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19729_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.PlatformID>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19729_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19729/* method */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19729_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t1701_0_0_0;
extern void* RuntimeInvoker_PlatformID_t1701 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19730_GenericMethod;
// T System.Array/InternalEnumerator`1<System.PlatformID>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19730_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19730/* method */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t1701_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t1701/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19730_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3554_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19726_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727_MethodInfo,
	&InternalEnumerator_1_Dispose_m19728_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19729_MethodInfo,
	&InternalEnumerator_1_get_Current_m19730_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3554_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19727_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19729_MethodInfo,
	&InternalEnumerator_1_Dispose_m19728_MethodInfo,
	&InternalEnumerator_1_get_Current_m19730_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3554_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5117_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3554_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5117_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3554_0_0_0;
extern Il2CppType InternalEnumerator_1_t3554_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3554_GenericClass;
TypeInfo InternalEnumerator_1_t3554_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3554_MethodInfos/* methods */
	, InternalEnumerator_1_t3554_PropertyInfos/* properties */
	, InternalEnumerator_1_t3554_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3554_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3554_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3554_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3554_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3554_1_0_0/* this_arg */
	, InternalEnumerator_1_t3554_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3554_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3554)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6705_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.PlatformID>
extern MethodInfo ICollection_1_get_Count_m34715_MethodInfo;
static PropertyInfo ICollection_1_t6705____Count_PropertyInfo = 
{
	&ICollection_1_t6705_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34715_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34716_MethodInfo;
static PropertyInfo ICollection_1_t6705____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6705_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34716_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6705_PropertyInfos[] =
{
	&ICollection_1_t6705____Count_PropertyInfo,
	&ICollection_1_t6705____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34715_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.PlatformID>::get_Count()
MethodInfo ICollection_1_get_Count_m34715_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34715_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34716_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34716_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34716_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t1701_0_0_0;
extern Il2CppType PlatformID_t1701_0_0_0;
static ParameterInfo ICollection_1_t6705_ICollection_1_Add_m34717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t1701_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34717_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Add(T)
MethodInfo ICollection_1_Add_m34717_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6705_ICollection_1_Add_m34717_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34717_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34718_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::Clear()
MethodInfo ICollection_1_Clear_m34718_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34718_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t1701_0_0_0;
static ParameterInfo ICollection_1_t6705_ICollection_1_Contains_m34719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t1701_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34719_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Contains(T)
MethodInfo ICollection_1_Contains_m34719_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6705_ICollection_1_Contains_m34719_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34719_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformIDU5BU5D_t3767_0_0_0;
extern Il2CppType PlatformIDU5BU5D_t3767_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6705_ICollection_1_CopyTo_m34720_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PlatformIDU5BU5D_t3767_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34720_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.PlatformID>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34720_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6705_ICollection_1_CopyTo_m34720_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34720_GenericMethod/* genericMethod */

};
extern Il2CppType PlatformID_t1701_0_0_0;
static ParameterInfo ICollection_1_t6705_ICollection_1_Remove_m34721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t1701_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34721_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.PlatformID>::Remove(T)
MethodInfo ICollection_1_Remove_m34721_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6705_ICollection_1_Remove_m34721_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34721_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6705_MethodInfos[] =
{
	&ICollection_1_get_Count_m34715_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34716_MethodInfo,
	&ICollection_1_Add_m34717_MethodInfo,
	&ICollection_1_Clear_m34718_MethodInfo,
	&ICollection_1_Contains_m34719_MethodInfo,
	&ICollection_1_CopyTo_m34720_MethodInfo,
	&ICollection_1_Remove_m34721_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6707_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6705_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6707_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6705_0_0_0;
extern Il2CppType ICollection_1_t6705_1_0_0;
struct ICollection_1_t6705;
extern Il2CppGenericClass ICollection_1_t6705_GenericClass;
TypeInfo ICollection_1_t6705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6705_MethodInfos/* methods */
	, ICollection_1_t6705_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6705_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6705_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6705_0_0_0/* byval_arg */
	, &ICollection_1_t6705_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6705_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.PlatformID>
extern Il2CppType IEnumerator_1_t5117_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34722_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.PlatformID>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34722_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6707_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5117_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34722_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6707_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34722_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6707_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6707_0_0_0;
extern Il2CppType IEnumerable_1_t6707_1_0_0;
struct IEnumerable_1_t6707;
extern Il2CppGenericClass IEnumerable_1_t6707_GenericClass;
TypeInfo IEnumerable_1_t6707_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6707_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6707_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6707_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6707_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6707_0_0_0/* byval_arg */
	, &IEnumerable_1_t6707_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6707_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6706_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.PlatformID>
extern MethodInfo IList_1_get_Item_m34723_MethodInfo;
extern MethodInfo IList_1_set_Item_m34724_MethodInfo;
static PropertyInfo IList_1_t6706____Item_PropertyInfo = 
{
	&IList_1_t6706_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34723_MethodInfo/* get */
	, &IList_1_set_Item_m34724_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6706_PropertyInfos[] =
{
	&IList_1_t6706____Item_PropertyInfo,
	NULL
};
extern Il2CppType PlatformID_t1701_0_0_0;
static ParameterInfo IList_1_t6706_IList_1_IndexOf_m34725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PlatformID_t1701_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34725_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.PlatformID>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34725_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6706_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6706_IList_1_IndexOf_m34725_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34725_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PlatformID_t1701_0_0_0;
static ParameterInfo IList_1_t6706_IList_1_Insert_m34726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t1701_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34726_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34726_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6706_IList_1_Insert_m34726_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34726_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6706_IList_1_RemoveAt_m34727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34727_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34727_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6706_IList_1_RemoveAt_m34727_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34727_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6706_IList_1_get_Item_m34723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType PlatformID_t1701_0_0_0;
extern void* RuntimeInvoker_PlatformID_t1701_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34723_GenericMethod;
// T System.Collections.Generic.IList`1<System.PlatformID>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34723_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6706_il2cpp_TypeInfo/* declaring_type */
	, &PlatformID_t1701_0_0_0/* return_type */
	, RuntimeInvoker_PlatformID_t1701_Int32_t18/* invoker_method */
	, IList_1_t6706_IList_1_get_Item_m34723_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34723_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType PlatformID_t1701_0_0_0;
static ParameterInfo IList_1_t6706_IList_1_set_Item_m34724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PlatformID_t1701_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34724_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.PlatformID>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34724_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6706_IList_1_set_Item_m34724_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34724_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6706_MethodInfos[] =
{
	&IList_1_IndexOf_m34725_MethodInfo,
	&IList_1_Insert_m34726_MethodInfo,
	&IList_1_RemoveAt_m34727_MethodInfo,
	&IList_1_get_Item_m34723_MethodInfo,
	&IList_1_set_Item_m34724_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6706_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6705_il2cpp_TypeInfo,
	&IEnumerable_1_t6707_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6706_0_0_0;
extern Il2CppType IList_1_t6706_1_0_0;
struct IList_1_t6706;
extern Il2CppGenericClass IList_1_t6706_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6706_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6706_MethodInfos/* methods */
	, IList_1_t6706_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6706_il2cpp_TypeInfo/* element_class */
	, IList_1_t6706_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6706_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6706_0_0_0/* byval_arg */
	, &IList_1_t6706_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6706_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5119_il2cpp_TypeInfo;

// System.StringComparison
#include "mscorlib_System_StringComparison.h"


// T System.Collections.Generic.IEnumerator`1<System.StringComparison>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringComparison>
extern MethodInfo IEnumerator_1_get_Current_m34728_MethodInfo;
static PropertyInfo IEnumerator_1_t5119____Current_PropertyInfo = 
{
	&IEnumerator_1_t5119_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34728_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5119_PropertyInfos[] =
{
	&IEnumerator_1_t5119____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringComparison_t1706_0_0_0;
extern void* RuntimeInvoker_StringComparison_t1706 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34728_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.StringComparison>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34728_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5119_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t1706_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t1706/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34728_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5119_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34728_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5119_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5119_0_0_0;
extern Il2CppType IEnumerator_1_t5119_1_0_0;
struct IEnumerator_1_t5119;
extern Il2CppGenericClass IEnumerator_1_t5119_GenericClass;
TypeInfo IEnumerator_1_t5119_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5119_MethodInfos/* methods */
	, IEnumerator_1_t5119_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5119_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5119_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5119_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5119_0_0_0/* byval_arg */
	, &IEnumerator_1_t5119_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5119_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.StringComparison>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_555.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3555_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.StringComparison>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_555MethodDeclarations.h"

extern TypeInfo StringComparison_t1706_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19735_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringComparison_t1706_m26590_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.StringComparison>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.StringComparison>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStringComparison_t1706_m26590 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19731_MethodInfo;
 void InternalEnumerator_1__ctor_m19731 (InternalEnumerator_1_t3555 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.StringComparison>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732 (InternalEnumerator_1_t3555 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19735(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19735_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StringComparison_t1706_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19733_MethodInfo;
 void InternalEnumerator_1_Dispose_m19733 (InternalEnumerator_1_t3555 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.StringComparison>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19734_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19734 (InternalEnumerator_1_t3555 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.StringComparison>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19735 (InternalEnumerator_1_t3555 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisStringComparison_t1706_m26590(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStringComparison_t1706_m26590_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringComparison>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3555____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3555, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3555____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3555, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3555_FieldInfos[] =
{
	&InternalEnumerator_1_t3555____array_0_FieldInfo,
	&InternalEnumerator_1_t3555____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3555____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3555_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3555____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3555_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19735_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3555_PropertyInfos[] =
{
	&InternalEnumerator_1_t3555____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3555____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3555_InternalEnumerator_1__ctor_m19731_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19731_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19731_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19731/* method */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3555_InternalEnumerator_1__ctor_m19731_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19731_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.StringComparison>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732/* method */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19733_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringComparison>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19733_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19733/* method */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19733_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19734_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.StringComparison>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19734_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19734/* method */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19734_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t1706_0_0_0;
extern void* RuntimeInvoker_StringComparison_t1706 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19735_GenericMethod;
// T System.Array/InternalEnumerator`1<System.StringComparison>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19735_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19735/* method */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t1706_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t1706/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19735_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3555_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19731_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732_MethodInfo,
	&InternalEnumerator_1_Dispose_m19733_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19734_MethodInfo,
	&InternalEnumerator_1_get_Current_m19735_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3555_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19732_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19734_MethodInfo,
	&InternalEnumerator_1_Dispose_m19733_MethodInfo,
	&InternalEnumerator_1_get_Current_m19735_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3555_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5119_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3555_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5119_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3555_0_0_0;
extern Il2CppType InternalEnumerator_1_t3555_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3555_GenericClass;
TypeInfo InternalEnumerator_1_t3555_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3555_MethodInfos/* methods */
	, InternalEnumerator_1_t3555_PropertyInfos/* properties */
	, InternalEnumerator_1_t3555_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3555_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3555_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3555_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3555_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3555_1_0_0/* this_arg */
	, InternalEnumerator_1_t3555_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3555_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3555)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6708_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.StringComparison>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.StringComparison>
extern MethodInfo ICollection_1_get_Count_m34729_MethodInfo;
static PropertyInfo ICollection_1_t6708____Count_PropertyInfo = 
{
	&ICollection_1_t6708_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34730_MethodInfo;
static PropertyInfo ICollection_1_t6708____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6708_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34730_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6708_PropertyInfos[] =
{
	&ICollection_1_t6708____Count_PropertyInfo,
	&ICollection_1_t6708____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34729_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.StringComparison>::get_Count()
MethodInfo ICollection_1_get_Count_m34729_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34729_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34730_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34730_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34730_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t1706_0_0_0;
extern Il2CppType StringComparison_t1706_0_0_0;
static ParameterInfo ICollection_1_t6708_ICollection_1_Add_m34731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t1706_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34731_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Add(T)
MethodInfo ICollection_1_Add_m34731_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6708_ICollection_1_Add_m34731_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34731_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34732_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::Clear()
MethodInfo ICollection_1_Clear_m34732_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34732_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t1706_0_0_0;
static ParameterInfo ICollection_1_t6708_ICollection_1_Contains_m34733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t1706_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34733_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Contains(T)
MethodInfo ICollection_1_Contains_m34733_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6708_ICollection_1_Contains_m34733_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34733_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparisonU5BU5D_t3768_0_0_0;
extern Il2CppType StringComparisonU5BU5D_t3768_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6708_ICollection_1_CopyTo_m34734_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringComparisonU5BU5D_t3768_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34734_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringComparison>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34734_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6708_ICollection_1_CopyTo_m34734_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34734_GenericMethod/* genericMethod */

};
extern Il2CppType StringComparison_t1706_0_0_0;
static ParameterInfo ICollection_1_t6708_ICollection_1_Remove_m34735_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t1706_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34735_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringComparison>::Remove(T)
MethodInfo ICollection_1_Remove_m34735_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6708_ICollection_1_Remove_m34735_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34735_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6708_MethodInfos[] =
{
	&ICollection_1_get_Count_m34729_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34730_MethodInfo,
	&ICollection_1_Add_m34731_MethodInfo,
	&ICollection_1_Clear_m34732_MethodInfo,
	&ICollection_1_Contains_m34733_MethodInfo,
	&ICollection_1_CopyTo_m34734_MethodInfo,
	&ICollection_1_Remove_m34735_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6710_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6708_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6710_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6708_0_0_0;
extern Il2CppType ICollection_1_t6708_1_0_0;
struct ICollection_1_t6708;
extern Il2CppGenericClass ICollection_1_t6708_GenericClass;
TypeInfo ICollection_1_t6708_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6708_MethodInfos/* methods */
	, ICollection_1_t6708_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6708_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6708_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6708_0_0_0/* byval_arg */
	, &ICollection_1_t6708_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6708_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringComparison>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringComparison>
extern Il2CppType IEnumerator_1_t5119_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34736_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringComparison>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34736_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6710_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5119_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34736_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6710_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34736_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6710_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6710_0_0_0;
extern Il2CppType IEnumerable_1_t6710_1_0_0;
struct IEnumerable_1_t6710;
extern Il2CppGenericClass IEnumerable_1_t6710_GenericClass;
TypeInfo IEnumerable_1_t6710_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6710_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6710_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6710_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6710_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6710_0_0_0/* byval_arg */
	, &IEnumerable_1_t6710_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6710_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6709_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.StringComparison>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.StringComparison>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.StringComparison>
extern MethodInfo IList_1_get_Item_m34737_MethodInfo;
extern MethodInfo IList_1_set_Item_m34738_MethodInfo;
static PropertyInfo IList_1_t6709____Item_PropertyInfo = 
{
	&IList_1_t6709_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34737_MethodInfo/* get */
	, &IList_1_set_Item_m34738_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6709_PropertyInfos[] =
{
	&IList_1_t6709____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringComparison_t1706_0_0_0;
static ParameterInfo IList_1_t6709_IList_1_IndexOf_m34739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringComparison_t1706_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34739_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.StringComparison>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34739_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6709_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6709_IList_1_IndexOf_m34739_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34739_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType StringComparison_t1706_0_0_0;
static ParameterInfo IList_1_t6709_IList_1_Insert_m34740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringComparison_t1706_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34740_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34740_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6709_IList_1_Insert_m34740_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34740_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6709_IList_1_RemoveAt_m34741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34741_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34741_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6709_IList_1_RemoveAt_m34741_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34741_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6709_IList_1_get_Item_m34737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType StringComparison_t1706_0_0_0;
extern void* RuntimeInvoker_StringComparison_t1706_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34737_GenericMethod;
// T System.Collections.Generic.IList`1<System.StringComparison>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34737_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6709_il2cpp_TypeInfo/* declaring_type */
	, &StringComparison_t1706_0_0_0/* return_type */
	, RuntimeInvoker_StringComparison_t1706_Int32_t18/* invoker_method */
	, IList_1_t6709_IList_1_get_Item_m34737_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34737_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType StringComparison_t1706_0_0_0;
static ParameterInfo IList_1_t6709_IList_1_set_Item_m34738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringComparison_t1706_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34738_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringComparison>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34738_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6709_IList_1_set_Item_m34738_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34738_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6709_MethodInfos[] =
{
	&IList_1_IndexOf_m34739_MethodInfo,
	&IList_1_Insert_m34740_MethodInfo,
	&IList_1_RemoveAt_m34741_MethodInfo,
	&IList_1_get_Item_m34737_MethodInfo,
	&IList_1_set_Item_m34738_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6709_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6708_il2cpp_TypeInfo,
	&IEnumerable_1_t6710_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6709_0_0_0;
extern Il2CppType IList_1_t6709_1_0_0;
struct IList_1_t6709;
extern Il2CppGenericClass IList_1_t6709_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6709_MethodInfos/* methods */
	, IList_1_t6709_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6709_il2cpp_TypeInfo/* element_class */
	, IList_1_t6709_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6709_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6709_0_0_0/* byval_arg */
	, &IList_1_t6709_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6709_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5121_il2cpp_TypeInfo;

// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"


// T System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>
extern MethodInfo IEnumerator_1_get_Current_m34742_MethodInfo;
static PropertyInfo IEnumerator_1_t5121____Current_PropertyInfo = 
{
	&IEnumerator_1_t5121_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5121_PropertyInfos[] =
{
	&IEnumerator_1_t5121____Current_PropertyInfo,
	NULL
};
extern Il2CppType StringSplitOptions_t1707_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t1707 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34742_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.StringSplitOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34742_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5121_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t1707_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t1707/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34742_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5121_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34742_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5121_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5121_0_0_0;
extern Il2CppType IEnumerator_1_t5121_1_0_0;
struct IEnumerator_1_t5121;
extern Il2CppGenericClass IEnumerator_1_t5121_GenericClass;
TypeInfo IEnumerator_1_t5121_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5121_MethodInfos/* methods */
	, IEnumerator_1_t5121_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5121_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5121_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5121_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5121_0_0_0/* byval_arg */
	, &IEnumerator_1_t5121_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5121_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.StringSplitOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_556.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3556_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.StringSplitOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_556MethodDeclarations.h"

extern TypeInfo StringSplitOptions_t1707_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19740_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringSplitOptions_t1707_m26601_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.StringSplitOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.StringSplitOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStringSplitOptions_t1707_m26601 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19736_MethodInfo;
 void InternalEnumerator_1__ctor_m19736 (InternalEnumerator_1_t3556 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.StringSplitOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737 (InternalEnumerator_1_t3556 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19740(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19740_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&StringSplitOptions_t1707_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19738_MethodInfo;
 void InternalEnumerator_1_Dispose_m19738 (InternalEnumerator_1_t3556 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.StringSplitOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19739_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19739 (InternalEnumerator_1_t3556 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.StringSplitOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19740 (InternalEnumerator_1_t3556 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisStringSplitOptions_t1707_m26601(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStringSplitOptions_t1707_m26601_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.StringSplitOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3556____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3556, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3556____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3556, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3556_FieldInfos[] =
{
	&InternalEnumerator_1_t3556____array_0_FieldInfo,
	&InternalEnumerator_1_t3556____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3556____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3556_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3556____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3556_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19740_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3556_PropertyInfos[] =
{
	&InternalEnumerator_1_t3556____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3556____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3556_InternalEnumerator_1__ctor_m19736_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19736_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19736_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19736/* method */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3556_InternalEnumerator_1__ctor_m19736_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19736_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.StringSplitOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737/* method */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19738_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.StringSplitOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19738_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19738/* method */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19738_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19739_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.StringSplitOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19739_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19739/* method */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19739_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t1707_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t1707 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19740_GenericMethod;
// T System.Array/InternalEnumerator`1<System.StringSplitOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19740_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19740/* method */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t1707_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t1707/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19740_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3556_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19736_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737_MethodInfo,
	&InternalEnumerator_1_Dispose_m19738_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19739_MethodInfo,
	&InternalEnumerator_1_get_Current_m19740_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3556_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19737_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19739_MethodInfo,
	&InternalEnumerator_1_Dispose_m19738_MethodInfo,
	&InternalEnumerator_1_get_Current_m19740_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3556_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5121_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3556_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5121_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3556_0_0_0;
extern Il2CppType InternalEnumerator_1_t3556_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3556_GenericClass;
TypeInfo InternalEnumerator_1_t3556_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3556_MethodInfos/* methods */
	, InternalEnumerator_1_t3556_PropertyInfos/* properties */
	, InternalEnumerator_1_t3556_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3556_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3556_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3556_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3556_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3556_1_0_0/* this_arg */
	, InternalEnumerator_1_t3556_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3556_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3556)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6711_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.StringSplitOptions>
extern MethodInfo ICollection_1_get_Count_m34743_MethodInfo;
static PropertyInfo ICollection_1_t6711____Count_PropertyInfo = 
{
	&ICollection_1_t6711_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34743_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34744_MethodInfo;
static PropertyInfo ICollection_1_t6711____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6711_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34744_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6711_PropertyInfos[] =
{
	&ICollection_1_t6711____Count_PropertyInfo,
	&ICollection_1_t6711____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34743_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m34743_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34743_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34744_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34744_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34744_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t1707_0_0_0;
extern Il2CppType StringSplitOptions_t1707_0_0_0;
static ParameterInfo ICollection_1_t6711_ICollection_1_Add_m34745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t1707_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34745_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Add(T)
MethodInfo ICollection_1_Add_m34745_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6711_ICollection_1_Add_m34745_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34745_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34746_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Clear()
MethodInfo ICollection_1_Clear_m34746_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34746_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t1707_0_0_0;
static ParameterInfo ICollection_1_t6711_ICollection_1_Contains_m34747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t1707_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34747_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m34747_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6711_ICollection_1_Contains_m34747_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34747_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptionsU5BU5D_t3769_0_0_0;
extern Il2CppType StringSplitOptionsU5BU5D_t3769_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6711_ICollection_1_CopyTo_m34748_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptionsU5BU5D_t3769_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34748_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.StringSplitOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34748_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6711_ICollection_1_CopyTo_m34748_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34748_GenericMethod/* genericMethod */

};
extern Il2CppType StringSplitOptions_t1707_0_0_0;
static ParameterInfo ICollection_1_t6711_ICollection_1_Remove_m34749_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t1707_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34749_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.StringSplitOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m34749_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6711_ICollection_1_Remove_m34749_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34749_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6711_MethodInfos[] =
{
	&ICollection_1_get_Count_m34743_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34744_MethodInfo,
	&ICollection_1_Add_m34745_MethodInfo,
	&ICollection_1_Clear_m34746_MethodInfo,
	&ICollection_1_Contains_m34747_MethodInfo,
	&ICollection_1_CopyTo_m34748_MethodInfo,
	&ICollection_1_Remove_m34749_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6713_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6711_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6713_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6711_0_0_0;
extern Il2CppType ICollection_1_t6711_1_0_0;
struct ICollection_1_t6711;
extern Il2CppGenericClass ICollection_1_t6711_GenericClass;
TypeInfo ICollection_1_t6711_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6711_MethodInfos/* methods */
	, ICollection_1_t6711_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6711_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6711_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6711_0_0_0/* byval_arg */
	, &ICollection_1_t6711_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6711_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>
extern Il2CppType IEnumerator_1_t5121_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34750_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.StringSplitOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34750_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6713_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5121_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34750_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6713_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34750_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6713_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6713_0_0_0;
extern Il2CppType IEnumerable_1_t6713_1_0_0;
struct IEnumerable_1_t6713;
extern Il2CppGenericClass IEnumerable_1_t6713_GenericClass;
TypeInfo IEnumerable_1_t6713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6713_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6713_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6713_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6713_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6713_0_0_0/* byval_arg */
	, &IEnumerable_1_t6713_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6713_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6712_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.StringSplitOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.StringSplitOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.StringSplitOptions>
extern MethodInfo IList_1_get_Item_m34751_MethodInfo;
extern MethodInfo IList_1_set_Item_m34752_MethodInfo;
static PropertyInfo IList_1_t6712____Item_PropertyInfo = 
{
	&IList_1_t6712_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34751_MethodInfo/* get */
	, &IList_1_set_Item_m34752_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6712_PropertyInfos[] =
{
	&IList_1_t6712____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringSplitOptions_t1707_0_0_0;
static ParameterInfo IList_1_t6712_IList_1_IndexOf_m34753_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t1707_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34753_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.StringSplitOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34753_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6712_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6712_IList_1_IndexOf_m34753_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34753_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType StringSplitOptions_t1707_0_0_0;
static ParameterInfo IList_1_t6712_IList_1_Insert_m34754_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t1707_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34754_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34754_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6712_IList_1_Insert_m34754_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34754_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6712_IList_1_RemoveAt_m34755_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34755_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34755_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6712_IList_1_RemoveAt_m34755_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34755_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6712_IList_1_get_Item_m34751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType StringSplitOptions_t1707_0_0_0;
extern void* RuntimeInvoker_StringSplitOptions_t1707_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34751_GenericMethod;
// T System.Collections.Generic.IList`1<System.StringSplitOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34751_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6712_il2cpp_TypeInfo/* declaring_type */
	, &StringSplitOptions_t1707_0_0_0/* return_type */
	, RuntimeInvoker_StringSplitOptions_t1707_Int32_t18/* invoker_method */
	, IList_1_t6712_IList_1_get_Item_m34751_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34751_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType StringSplitOptions_t1707_0_0_0;
static ParameterInfo IList_1_t6712_IList_1_set_Item_m34752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringSplitOptions_t1707_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34752_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.StringSplitOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34752_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6712_IList_1_set_Item_m34752_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34752_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6712_MethodInfos[] =
{
	&IList_1_IndexOf_m34753_MethodInfo,
	&IList_1_Insert_m34754_MethodInfo,
	&IList_1_RemoveAt_m34755_MethodInfo,
	&IList_1_get_Item_m34751_MethodInfo,
	&IList_1_set_Item_m34752_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6712_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6711_il2cpp_TypeInfo,
	&IEnumerable_1_t6713_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6712_0_0_0;
extern Il2CppType IList_1_t6712_1_0_0;
struct IList_1_t6712;
extern Il2CppGenericClass IList_1_t6712_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6712_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6712_MethodInfos/* methods */
	, IList_1_t6712_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6712_il2cpp_TypeInfo/* element_class */
	, IList_1_t6712_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6712_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6712_0_0_0/* byval_arg */
	, &IList_1_t6712_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6712_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5123_il2cpp_TypeInfo;

// System.ThreadStaticAttribute
#include "mscorlib_System_ThreadStaticAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>
extern MethodInfo IEnumerator_1_get_Current_m34756_MethodInfo;
static PropertyInfo IEnumerator_1_t5123____Current_PropertyInfo = 
{
	&IEnumerator_1_t5123_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34756_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5123_PropertyInfos[] =
{
	&IEnumerator_1_t5123____Current_PropertyInfo,
	NULL
};
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34756_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ThreadStaticAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34756_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5123_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t1708_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m34756_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5123_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34756_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5123_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5123_0_0_0;
extern Il2CppType IEnumerator_1_t5123_1_0_0;
struct IEnumerator_1_t5123;
extern Il2CppGenericClass IEnumerator_1_t5123_GenericClass;
TypeInfo IEnumerator_1_t5123_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5123_MethodInfos/* methods */
	, IEnumerator_1_t5123_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5123_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5123_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5123_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5123_0_0_0/* byval_arg */
	, &IEnumerator_1_t5123_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5123_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_557.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3557_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_557MethodDeclarations.h"

extern TypeInfo ThreadStaticAttribute_t1708_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19745_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisThreadStaticAttribute_t1708_m26612_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ThreadStaticAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ThreadStaticAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisThreadStaticAttribute_t1708_m26612(__this, p0, method) (ThreadStaticAttribute_t1708 *)Array_InternalArray__get_Item_TisObject_t_m19774_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::.ctor(System.Array)
// System.Object System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3557____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3557, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3557____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3557, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3557_FieldInfos[] =
{
	&InternalEnumerator_1_t3557____array_0_FieldInfo,
	&InternalEnumerator_1_t3557____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19742_MethodInfo;
static PropertyInfo InternalEnumerator_1_t3557____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3557_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3557____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3557_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19745_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3557_PropertyInfos[] =
{
	&InternalEnumerator_1_t3557____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3557____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3557_InternalEnumerator_1__ctor_m19741_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19741_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19741_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m10434_gshared/* method */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3557_InternalEnumerator_1__ctor_m19741_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19741_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19742_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19742_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10436_gshared/* method */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19742_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19743_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19743_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m10438_gshared/* method */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19743_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19744_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19744_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m10440_gshared/* method */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19744_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19745_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ThreadStaticAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19745_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m10442_gshared/* method */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t1708_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m19745_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3557_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19741_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19742_MethodInfo,
	&InternalEnumerator_1_Dispose_m19743_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19744_MethodInfo,
	&InternalEnumerator_1_get_Current_m19745_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m19744_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m19743_MethodInfo;
static MethodInfo* InternalEnumerator_1_t3557_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19742_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19744_MethodInfo,
	&InternalEnumerator_1_Dispose_m19743_MethodInfo,
	&InternalEnumerator_1_get_Current_m19745_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3557_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5123_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3557_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5123_il2cpp_TypeInfo, 7},
};
extern TypeInfo ThreadStaticAttribute_t1708_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t3557_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m19745_MethodInfo/* Method Usage */,
	&ThreadStaticAttribute_t1708_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisThreadStaticAttribute_t1708_m26612_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3557_0_0_0;
extern Il2CppType InternalEnumerator_1_t3557_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3557_GenericClass;
TypeInfo InternalEnumerator_1_t3557_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3557_MethodInfos/* methods */
	, InternalEnumerator_1_t3557_PropertyInfos/* properties */
	, InternalEnumerator_1_t3557_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3557_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3557_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3557_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3557_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3557_1_0_0/* this_arg */
	, InternalEnumerator_1_t3557_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3557_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t3557_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3557)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6714_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>
extern MethodInfo ICollection_1_get_Count_m34757_MethodInfo;
static PropertyInfo ICollection_1_t6714____Count_PropertyInfo = 
{
	&ICollection_1_t6714_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34757_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34758_MethodInfo;
static PropertyInfo ICollection_1_t6714____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6714_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34758_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6714_PropertyInfos[] =
{
	&ICollection_1_t6714____Count_PropertyInfo,
	&ICollection_1_t6714____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34757_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m34757_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34757_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34758_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34758_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34758_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
static ParameterInfo ICollection_1_t6714_ICollection_1_Add_m34759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t1708_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34759_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Add(T)
MethodInfo ICollection_1_Add_m34759_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, ICollection_1_t6714_ICollection_1_Add_m34759_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34759_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34760_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Clear()
MethodInfo ICollection_1_Clear_m34760_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34760_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
static ParameterInfo ICollection_1_t6714_ICollection_1_Contains_m34761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t1708_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34761_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m34761_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6714_ICollection_1_Contains_m34761_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34761_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttributeU5BU5D_t3770_0_0_0;
extern Il2CppType ThreadStaticAttributeU5BU5D_t3770_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6714_ICollection_1_CopyTo_m34762_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttributeU5BU5D_t3770_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34762_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34762_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6714_ICollection_1_CopyTo_m34762_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34762_GenericMethod/* genericMethod */

};
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
static ParameterInfo ICollection_1_t6714_ICollection_1_Remove_m34763_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t1708_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34763_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ThreadStaticAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m34763_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, ICollection_1_t6714_ICollection_1_Remove_m34763_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34763_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6714_MethodInfos[] =
{
	&ICollection_1_get_Count_m34757_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34758_MethodInfo,
	&ICollection_1_Add_m34759_MethodInfo,
	&ICollection_1_Clear_m34760_MethodInfo,
	&ICollection_1_Contains_m34761_MethodInfo,
	&ICollection_1_CopyTo_m34762_MethodInfo,
	&ICollection_1_Remove_m34763_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6716_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6714_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6716_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6714_0_0_0;
extern Il2CppType ICollection_1_t6714_1_0_0;
struct ICollection_1_t6714;
extern Il2CppGenericClass ICollection_1_t6714_GenericClass;
TypeInfo ICollection_1_t6714_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6714_MethodInfos/* methods */
	, ICollection_1_t6714_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6714_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6714_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6714_0_0_0/* byval_arg */
	, &ICollection_1_t6714_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6714_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>
extern Il2CppType IEnumerator_1_t5123_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34764_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ThreadStaticAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34764_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6716_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5123_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34764_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6716_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34764_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6716_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6716_0_0_0;
extern Il2CppType IEnumerable_1_t6716_1_0_0;
struct IEnumerable_1_t6716;
extern Il2CppGenericClass IEnumerable_1_t6716_GenericClass;
TypeInfo IEnumerable_1_t6716_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6716_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6716_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6716_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6716_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6716_0_0_0/* byval_arg */
	, &IEnumerable_1_t6716_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6716_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6715_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ThreadStaticAttribute>
extern MethodInfo IList_1_get_Item_m34765_MethodInfo;
extern MethodInfo IList_1_set_Item_m34766_MethodInfo;
static PropertyInfo IList_1_t6715____Item_PropertyInfo = 
{
	&IList_1_t6715_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34765_MethodInfo/* get */
	, &IList_1_set_Item_m34766_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6715_PropertyInfos[] =
{
	&IList_1_t6715____Item_PropertyInfo,
	NULL
};
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
static ParameterInfo IList_1_t6715_IList_1_IndexOf_m34767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t1708_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34767_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34767_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6715_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6715_IList_1_IndexOf_m34767_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34767_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
static ParameterInfo IList_1_t6715_IList_1_Insert_m34768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t1708_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34768_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34768_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6715_IList_1_Insert_m34768_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34768_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6715_IList_1_RemoveAt_m34769_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34769_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34769_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6715_IList_1_RemoveAt_m34769_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34769_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6715_IList_1_get_Item_m34765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34765_GenericMethod;
// T System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34765_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6715_il2cpp_TypeInfo/* declaring_type */
	, &ThreadStaticAttribute_t1708_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t18/* invoker_method */
	, IList_1_t6715_IList_1_get_Item_m34765_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34765_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType ThreadStaticAttribute_t1708_0_0_0;
static ParameterInfo IList_1_t6715_IList_1_set_Item_m34766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ThreadStaticAttribute_t1708_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34766_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ThreadStaticAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34766_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Object_t/* invoker_method */
	, IList_1_t6715_IList_1_set_Item_m34766_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34766_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6715_MethodInfos[] =
{
	&IList_1_IndexOf_m34767_MethodInfo,
	&IList_1_Insert_m34768_MethodInfo,
	&IList_1_RemoveAt_m34769_MethodInfo,
	&IList_1_get_Item_m34765_MethodInfo,
	&IList_1_set_Item_m34766_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6715_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6714_il2cpp_TypeInfo,
	&IEnumerable_1_t6716_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6715_0_0_0;
extern Il2CppType IList_1_t6715_1_0_0;
struct IList_1_t6715;
extern Il2CppGenericClass IList_1_t6715_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6715_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6715_MethodInfos/* methods */
	, IList_1_t6715_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6715_il2cpp_TypeInfo/* element_class */
	, IList_1_t6715_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6715_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6715_0_0_0/* byval_arg */
	, &IList_1_t6715_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6715_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t2134_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_2MethodDeclarations.h"

extern TypeInfo IComparable_1_t2136_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_32MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m19747_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m34257_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m10414_MethodInfo;
 void GenericComparer_1__ctor_m10414 (GenericComparer_1_t2134 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m19747(__this, /*hidden argument*/&Comparer_1__ctor_m19747_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m19746_MethodInfo;
 int32_t GenericComparer_1_Compare_m19746 (GenericComparer_1_t2134 * __this, TimeSpan_t846  ___x, TimeSpan_t846  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t846  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t846  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t846  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t846  >::Invoke(&IComparable_1_CompareTo_m34257_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.TimeSpan>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1__ctor_m10414_GenericMethod;
// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
MethodInfo GenericComparer_1__ctor_m10414_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m10414/* method */
	, &GenericComparer_1_t2134_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericComparer_1__ctor_m10414_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo GenericComparer_1_t2134_GenericComparer_1_Compare_m19746_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericComparer_1_Compare_m19746_GenericMethod;
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m19746_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m19746/* method */
	, &GenericComparer_1_t2134_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, GenericComparer_1_t2134_GenericComparer_1_Compare_m19746_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericComparer_1_Compare_m19746_GenericMethod/* genericMethod */

};
static MethodInfo* GenericComparer_1_t2134_MethodInfos[] =
{
	&GenericComparer_1__ctor_m10414_MethodInfo,
	&GenericComparer_1_Compare_m19746_MethodInfo,
	NULL
};
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m19749_MethodInfo;
static MethodInfo* GenericComparer_1_t2134_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&GenericComparer_1_Compare_m19746_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19749_MethodInfo,
	&GenericComparer_1_Compare_m19746_MethodInfo,
};
extern TypeInfo IComparer_1_t6868_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t2134_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6868_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t2134_0_0_0;
extern Il2CppType GenericComparer_1_t2134_1_0_0;
extern TypeInfo Comparer_1_t3558_il2cpp_TypeInfo;
struct GenericComparer_1_t2134;
extern Il2CppGenericClass GenericComparer_1_t2134_GenericClass;
TypeInfo GenericComparer_1_t2134_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t2134_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t2134_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t2134_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t2134_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t2134_0_0_0/* byval_arg */
	, &GenericComparer_1_t2134_1_0_0/* this_arg */
	, GenericComparer_1_t2134_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t2134_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t2134)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_32.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_33.h"
extern TypeInfo DefaultComparer_t3559_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_33MethodDeclarations.h"
extern Il2CppType IComparable_1_t2136_0_0_0;
extern MethodInfo DefaultComparer__ctor_m19751_MethodInfo;
extern MethodInfo Comparer_1_Compare_m34770_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
 void Comparer_1__ctor_m19747 (Comparer_1_t3558 * __this, MethodInfo* method){
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
extern MethodInfo Comparer_1__cctor_m19748_MethodInfo;
 void Comparer_1__cctor_m19748 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t3559 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3559 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t3559_il2cpp_TypeInfo));
	DefaultComparer__ctor_m19751(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m19751_MethodInfo);
	((Comparer_1_t3558_StaticFields*)InitializedTypeInfo(&Comparer_1_t3558_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
 int32_t Comparer_1_System_Collections_IComparer_Compare_m19749 (Comparer_1_t3558 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, TimeSpan_t846 , TimeSpan_t846  >::Invoke(&Comparer_1_Compare_m34770_MethodInfo, __this, ((*(TimeSpan_t846 *)((TimeSpan_t846 *)UnBox (___x, InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo))))), ((*(TimeSpan_t846 *)((TimeSpan_t846 *)UnBox (___y, InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t377 * L_1 = (ArgumentException_t377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t377_il2cpp_TypeInfo));
		ArgumentException__ctor_m9000(L_1, /*hidden argument*/&ArgumentException__ctor_m9000_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
extern MethodInfo Comparer_1_get_Default_m19750_MethodInfo;
 Comparer_1_t3558 * Comparer_1_get_Default_m19750 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t3558_il2cpp_TypeInfo));
		return (((Comparer_1_t3558_StaticFields*)InitializedTypeInfo(&Comparer_1_t3558_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.TimeSpan>
extern Il2CppType Comparer_1_t3558_0_0_49;
FieldInfo Comparer_1_t3558_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t3558_0_0_49/* type */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t3558_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t3558_FieldInfos[] =
{
	&Comparer_1_t3558_____default_0_FieldInfo,
	NULL
};
static PropertyInfo Comparer_1_t3558____Default_PropertyInfo = 
{
	&Comparer_1_t3558_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m19750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t3558_PropertyInfos[] =
{
	&Comparer_1_t3558____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__ctor_m19747_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.ctor()
MethodInfo Comparer_1__ctor_m19747_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m19747/* method */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__ctor_m19747_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1__cctor_m19748_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1<System.TimeSpan>::.cctor()
MethodInfo Comparer_1__cctor_m19748_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m19748/* method */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1__cctor_m19748_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t3558_Comparer_1_System_Collections_IComparer_Compare_m19749_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_System_Collections_IComparer_Compare_m19749_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m19749_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m19749/* method */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t_Object_t/* invoker_method */
	, Comparer_1_t3558_Comparer_1_System_Collections_IComparer_Compare_m19749_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_System_Collections_IComparer_Compare_m19749_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo Comparer_1_t3558_Comparer_1_Compare_m34770_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_Compare_m34770_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo Comparer_1_Compare_m34770_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, Comparer_1_t3558_Comparer_1_Compare_m34770_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_Compare_m34770_GenericMethod/* genericMethod */

};
extern Il2CppType Comparer_1_t3558_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Comparer_1_get_Default_m19750_GenericMethod;
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.TimeSpan>::get_Default()
MethodInfo Comparer_1_get_Default_m19750_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m19750/* method */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t3558_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Comparer_1_get_Default_m19750_GenericMethod/* genericMethod */

};
static MethodInfo* Comparer_1_t3558_MethodInfos[] =
{
	&Comparer_1__ctor_m19747_MethodInfo,
	&Comparer_1__cctor_m19748_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19749_MethodInfo,
	&Comparer_1_Compare_m34770_MethodInfo,
	&Comparer_1_get_Default_m19750_MethodInfo,
	NULL
};
static MethodInfo* Comparer_1_t3558_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&Comparer_1_Compare_m34770_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19749_MethodInfo,
	NULL,
};
static TypeInfo* Comparer_1_t3558_InterfacesTypeInfos[] = 
{
	&IComparer_1_t6868_il2cpp_TypeInfo,
	&IComparer_t767_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair Comparer_1_t3558_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6868_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t3558_0_0_0;
extern Il2CppType Comparer_1_t3558_1_0_0;
struct Comparer_1_t3558;
extern Il2CppGenericClass Comparer_1_t3558_GenericClass;
TypeInfo Comparer_1_t3558_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t3558_MethodInfos/* methods */
	, Comparer_1_t3558_PropertyInfos/* properties */
	, Comparer_1_t3558_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t3558_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t3558_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t3558_0_0_0/* byval_arg */
	, &Comparer_1_t3558_1_0_0/* this_arg */
	, Comparer_1_t3558_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t3558_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t3558)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t3558_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.TimeSpan>
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IComparer_1_t6868_IComparer_1_Compare_m34771_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparer_1_Compare_m34771_GenericMethod;
// System.Int32 System.Collections.Generic.IComparer`1<System.TimeSpan>::Compare(T,T)
MethodInfo IComparer_1_Compare_m34771_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t6868_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, IComparer_1_t6868_IComparer_1_Compare_m34771_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparer_1_Compare_m34771_GenericMethod/* genericMethod */

};
static MethodInfo* IComparer_1_t6868_MethodInfos[] =
{
	&IComparer_1_Compare_m34771_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t6868_0_0_0;
extern Il2CppType IComparer_1_t6868_1_0_0;
struct IComparer_1_t6868;
extern Il2CppGenericClass IComparer_1_t6868_GenericClass;
TypeInfo IComparer_1_t6868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t6868_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t6868_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t6868_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t6868_0_0_0/* byval_arg */
	, &IComparer_1_t6868_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t6868_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
 void DefaultComparer__ctor_m19751 (DefaultComparer_t3559 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m19747(__this, /*hidden argument*/&Comparer_1__ctor_m19747_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m19752_MethodInfo;
 int32_t DefaultComparer_Compare_m19752 (DefaultComparer_t3559 * __this, TimeSpan_t846  ___x, TimeSpan_t846  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		TimeSpan_t846  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		TimeSpan_t846  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		TimeSpan_t846  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		TimeSpan_t846  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t2136_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		TimeSpan_t846  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2136_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, TimeSpan_t846  >::Invoke(&IComparable_1_CompareTo_m34257_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t2136_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		TimeSpan_t846  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		TimeSpan_t846  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_13);
		TimeSpan_t846  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m9818_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t270_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t377 * L_18 = (ArgumentException_t377 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t377_il2cpp_TypeInfo));
		ArgumentException__ctor_m1918(L_18, (String_t*) &_stringLiteral1182, /*hidden argument*/&ArgumentException__ctor_m1918_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m19751_GenericMethod;
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
MethodInfo DefaultComparer__ctor_m19751_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m19751/* method */
	, &DefaultComparer_t3559_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m19751_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo DefaultComparer_t3559_DefaultComparer_Compare_m19752_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Compare_m19752_GenericMethod;
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m19752_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m19752/* method */
	, &DefaultComparer_t3559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, DefaultComparer_t3559_DefaultComparer_Compare_m19752_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Compare_m19752_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t3559_MethodInfos[] =
{
	&DefaultComparer__ctor_m19751_MethodInfo,
	&DefaultComparer_Compare_m19752_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t3559_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&DefaultComparer_Compare_m19752_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m19749_MethodInfo,
	&DefaultComparer_Compare_m19752_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t3559_InterfacesOffsets[] = 
{
	{ &IComparer_1_t6868_il2cpp_TypeInfo, 4},
	{ &IComparer_t767_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t3559_0_0_0;
extern Il2CppType DefaultComparer_t3559_1_0_0;
struct DefaultComparer_t3559;
extern Il2CppGenericClass DefaultComparer_t3559_GenericClass;
TypeInfo DefaultComparer_t3559_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t3559_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t3558_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t1260_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t3559_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t3559_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t3559_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t3559_0_0_0/* byval_arg */
	, &DefaultComparer_t3559_1_0_0/* this_arg */
	, DefaultComparer_t3559_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t3559_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t3559)/* instance_size */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t2135_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__3MethodDeclarations.h"

extern TypeInfo IEquatable_1_t2137_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_41MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m19755_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m34272_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m10415_MethodInfo;
 void GenericEqualityComparer_1__ctor_m10415 (GenericEqualityComparer_1_t2135 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m19755(__this, /*hidden argument*/&EqualityComparer_1__ctor_m19755_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m19753_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m19753 (GenericEqualityComparer_1_t2135 * __this, TimeSpan_t846  ___obj, MethodInfo* method){
	{
		TimeSpan_t846  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1290_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m19754_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m19754 (GenericEqualityComparer_1_t2135 * __this, TimeSpan_t846  ___x, TimeSpan_t846  ___y, MethodInfo* method){
	{
		TimeSpan_t846  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t846  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, TimeSpan_t846  >::Invoke(&IEquatable_1_Equals_m34272_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1__ctor_m10415_GenericMethod;
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m10415_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m10415/* method */
	, &GenericEqualityComparer_1_t2135_il2cpp_TypeInfo/* declaring_type */
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
	, &GenericEqualityComparer_1__ctor_m10415_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2135_GenericEqualityComparer_1_GetHashCode_m19753_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_GetHashCode_m19753_GenericMethod;
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m19753_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m19753/* method */
	, &GenericEqualityComparer_1_t2135_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846/* invoker_method */
	, GenericEqualityComparer_1_t2135_GenericEqualityComparer_1_GetHashCode_m19753_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_GetHashCode_m19753_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t2135_GenericEqualityComparer_1_Equals_m19754_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod GenericEqualityComparer_1_Equals_m19754_GenericMethod;
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m19754_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m19754/* method */
	, &GenericEqualityComparer_1_t2135_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, GenericEqualityComparer_1_t2135_GenericEqualityComparer_1_Equals_m19754_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &GenericEqualityComparer_1_Equals_m19754_GenericMethod/* genericMethod */

};
static MethodInfo* GenericEqualityComparer_1_t2135_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m10415_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19753_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19754_MethodInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t2135_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19754_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19753_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m19753_MethodInfo,
	&GenericEqualityComparer_1_Equals_m19754_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t6869_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t2135_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6869_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t2135_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t2135_1_0_0;
extern TypeInfo EqualityComparer_1_t3560_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t2135;
extern Il2CppGenericClass GenericEqualityComparer_1_t2135_GenericClass;
TypeInfo GenericEqualityComparer_1_t2135_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t2135_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t2135_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t2135_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t2135_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t2135_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t2135_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t2135_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t2135_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t2135)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_41.h"
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_42.h"
extern TypeInfo DefaultComparer_t3561_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_42MethodDeclarations.h"
extern Il2CppType IEquatable_1_t2137_0_0_0;
extern MethodInfo DefaultComparer__ctor_m19760_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m34772_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m34773_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
 void EqualityComparer_1__ctor_m19755 (EqualityComparer_1_t3560 * __this, MethodInfo* method){
	{
		Object__ctor_m1299(__this, /*hidden argument*/&Object__ctor_m1299_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m19756_MethodInfo;
 void EqualityComparer_1__cctor_m19756 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t3561 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t3561 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t3561_il2cpp_TypeInfo));
	DefaultComparer__ctor_m19760(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m19760_MethodInfo);
	((EqualityComparer_1_t3560_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t3560_il2cpp_TypeInfo)->static_fields)->____default_0 = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757 (EqualityComparer_1_t3560 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, TimeSpan_t846  >::Invoke(&EqualityComparer_1_GetHashCode_m34772_MethodInfo, __this, ((*(TimeSpan_t846 *)((TimeSpan_t846 *)UnBox (___obj, InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758 (EqualityComparer_1_t3560 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, TimeSpan_t846 , TimeSpan_t846  >::Invoke(&EqualityComparer_1_Equals_m34773_MethodInfo, __this, ((*(TimeSpan_t846 *)((TimeSpan_t846 *)UnBox (___x, InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo))))), ((*(TimeSpan_t846 *)((TimeSpan_t846 *)UnBox (___y, InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m19759_MethodInfo;
 EqualityComparer_1_t3560 * EqualityComparer_1_get_Default_m19759 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t3560_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t3560_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t3560_il2cpp_TypeInfo)->static_fields)->____default_0);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.TimeSpan>
extern Il2CppType EqualityComparer_1_t3560_0_0_49;
FieldInfo EqualityComparer_1_t3560_____default_0_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t3560_0_0_49/* type */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t3560_StaticFields, ____default_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t3560_FieldInfos[] =
{
	&EqualityComparer_1_t3560_____default_0_FieldInfo,
	NULL
};
static PropertyInfo EqualityComparer_1_t3560____Default_PropertyInfo = 
{
	&EqualityComparer_1_t3560_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m19759_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t3560_PropertyInfos[] =
{
	&EqualityComparer_1_t3560____Default_PropertyInfo,
	NULL
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__ctor_m19755_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.ctor()
MethodInfo EqualityComparer_1__ctor_m19755_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m19755/* method */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__ctor_m19755_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1__cctor_m19756_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::.cctor()
MethodInfo EqualityComparer_1__cctor_m19756_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m19756/* method */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1__cctor_m19756_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t3560_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757/* method */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, EqualityComparer_1_t3560_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t3560_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758/* method */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t3560_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo EqualityComparer_1_t3560_EqualityComparer_1_GetHashCode_m34772_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_GetHashCode_m34772_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m34772_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846/* invoker_method */
	, EqualityComparer_1_t3560_EqualityComparer_1_GetHashCode_m34772_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_GetHashCode_m34772_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo EqualityComparer_1_t3560_EqualityComparer_1_Equals_m34773_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_Equals_m34773_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m34773_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, EqualityComparer_1_t3560_EqualityComparer_1_Equals_m34773_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_Equals_m34773_GenericMethod/* genericMethod */

};
extern Il2CppType EqualityComparer_1_t3560_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod EqualityComparer_1_get_Default_m19759_GenericMethod;
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.TimeSpan>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m19759_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m19759/* method */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t3560_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &EqualityComparer_1_get_Default_m19759_GenericMethod/* genericMethod */

};
static MethodInfo* EqualityComparer_1_t3560_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m19755_MethodInfo,
	&EqualityComparer_1__cctor_m19756_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_MethodInfo,
	&EqualityComparer_1_GetHashCode_m34772_MethodInfo,
	&EqualityComparer_1_Equals_m34773_MethodInfo,
	&EqualityComparer_1_get_Default_m19759_MethodInfo,
	NULL
};
static MethodInfo* EqualityComparer_1_t3560_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&EqualityComparer_1_Equals_m34773_MethodInfo,
	&EqualityComparer_1_GetHashCode_m34772_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_MethodInfo,
	NULL,
	NULL,
};
static TypeInfo* EqualityComparer_1_t3560_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t6869_il2cpp_TypeInfo,
	&IEqualityComparer_t774_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair EqualityComparer_1_t3560_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6869_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t3560_0_0_0;
extern Il2CppType EqualityComparer_1_t3560_1_0_0;
struct EqualityComparer_1_t3560;
extern Il2CppGenericClass EqualityComparer_1_t3560_GenericClass;
TypeInfo EqualityComparer_1_t3560_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t3560_MethodInfos/* methods */
	, EqualityComparer_1_t3560_PropertyInfos/* properties */
	, EqualityComparer_1_t3560_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t3560_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t3560_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t3560_0_0_0/* byval_arg */
	, &EqualityComparer_1_t3560_1_0_0/* this_arg */
	, EqualityComparer_1_t3560_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t3560_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t3560)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t3560_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IEqualityComparer_1_t6869_IEqualityComparer_1_Equals_m34774_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_Equals_m34774_GenericMethod;
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m34774_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t6869_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, IEqualityComparer_1_t6869_IEqualityComparer_1_Equals_m34774_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_Equals_m34774_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo IEqualityComparer_1_t6869_IEqualityComparer_1_GetHashCode_m34775_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEqualityComparer_1_GetHashCode_m34775_GenericMethod;
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.TimeSpan>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m34775_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t6869_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846/* invoker_method */
	, IEqualityComparer_1_t6869_IEqualityComparer_1_GetHashCode_m34775_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEqualityComparer_1_GetHashCode_m34775_GenericMethod/* genericMethod */

};
static MethodInfo* IEqualityComparer_1_t6869_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m34774_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m34775_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t6869_0_0_0;
extern Il2CppType IEqualityComparer_1_t6869_1_0_0;
struct IEqualityComparer_1_t6869;
extern Il2CppGenericClass IEqualityComparer_1_t6869_GenericClass;
TypeInfo IEqualityComparer_1_t6869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t6869_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t6869_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t6869_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t6869_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t6869_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t6869_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
 void DefaultComparer__ctor_m19760 (DefaultComparer_t3561 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m19755(__this, /*hidden argument*/&EqualityComparer_1__ctor_m19755_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m19761_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m19761 (DefaultComparer_t3561 * __this, TimeSpan_t846  ___obj, MethodInfo* method){
	{
		TimeSpan_t846  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m1290_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m19762_MethodInfo;
 bool DefaultComparer_Equals_m19762 (DefaultComparer_t3561 * __this, TimeSpan_t846  ___x, TimeSpan_t846  ___y, MethodInfo* method){
	{
		TimeSpan_t846  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		TimeSpan_t846  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		TimeSpan_t846  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m1289_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t846_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer__ctor_m19760_GenericMethod;
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
MethodInfo DefaultComparer__ctor_m19760_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m19760/* method */
	, &DefaultComparer_t3561_il2cpp_TypeInfo/* declaring_type */
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
	, &DefaultComparer__ctor_m19760_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo DefaultComparer_t3561_DefaultComparer_GetHashCode_m19761_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_GetHashCode_m19761_GenericMethod;
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m19761_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m19761/* method */
	, &DefaultComparer_t3561_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_TimeSpan_t846/* invoker_method */
	, DefaultComparer_t3561_DefaultComparer_GetHashCode_m19761_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_GetHashCode_m19761_GenericMethod/* genericMethod */

};
extern Il2CppType TimeSpan_t846_0_0_0;
extern Il2CppType TimeSpan_t846_0_0_0;
static ParameterInfo DefaultComparer_t3561_DefaultComparer_Equals_m19762_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t846_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod DefaultComparer_Equals_m19762_GenericMethod;
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m19762_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m19762/* method */
	, &DefaultComparer_t3561_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_TimeSpan_t846_TimeSpan_t846/* invoker_method */
	, DefaultComparer_t3561_DefaultComparer_Equals_m19762_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &DefaultComparer_Equals_m19762_GenericMethod/* genericMethod */

};
static MethodInfo* DefaultComparer_t3561_MethodInfos[] =
{
	&DefaultComparer__ctor_m19760_MethodInfo,
	&DefaultComparer_GetHashCode_m19761_MethodInfo,
	&DefaultComparer_Equals_m19762_MethodInfo,
	NULL
};
static MethodInfo* DefaultComparer_t3561_VTable[] =
{
	&Object_Equals_m1289_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&Object_GetHashCode_m1290_MethodInfo,
	&Object_ToString_m1300_MethodInfo,
	&DefaultComparer_Equals_m19762_MethodInfo,
	&DefaultComparer_GetHashCode_m19761_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m19758_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m19757_MethodInfo,
	&DefaultComparer_GetHashCode_m19761_MethodInfo,
	&DefaultComparer_Equals_m19762_MethodInfo,
};
static Il2CppInterfaceOffsetPair DefaultComparer_t3561_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t6869_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t774_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t3561_0_0_0;
extern Il2CppType DefaultComparer_t3561_1_0_0;
struct DefaultComparer_t3561;
extern Il2CppGenericClass DefaultComparer_t3561_GenericClass;
TypeInfo DefaultComparer_t3561_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t3561_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t3560_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t1270_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t3561_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t3561_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t3561_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t3561_0_0_0/* byval_arg */
	, &DefaultComparer_t3561_1_0_0/* this_arg */
	, DefaultComparer_t3561_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t3561_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t3561)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t5125_il2cpp_TypeInfo;

// System.TypeCode
#include "mscorlib_System_TypeCode.h"


// T System.Collections.Generic.IEnumerator`1<System.TypeCode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.TypeCode>
extern MethodInfo IEnumerator_1_get_Current_m34776_MethodInfo;
static PropertyInfo IEnumerator_1_t5125____Current_PropertyInfo = 
{
	&IEnumerator_1_t5125_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34776_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5125_PropertyInfos[] =
{
	&IEnumerator_1_t5125____Current_PropertyInfo,
	NULL
};
extern Il2CppType TypeCode_t1711_0_0_0;
extern void* RuntimeInvoker_TypeCode_t1711 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34776_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.TypeCode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34776_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5125_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t1711_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t1711/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34776_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5125_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34776_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5125_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5125_0_0_0;
extern Il2CppType IEnumerator_1_t5125_1_0_0;
struct IEnumerator_1_t5125;
extern Il2CppGenericClass IEnumerator_1_t5125_GenericClass;
TypeInfo IEnumerator_1_t5125_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5125_MethodInfos/* methods */
	, IEnumerator_1_t5125_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5125_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5125_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5125_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5125_0_0_0/* byval_arg */
	, &IEnumerator_1_t5125_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5125_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.TypeCode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_558.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3562_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.TypeCode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_558MethodDeclarations.h"

extern TypeInfo TypeCode_t1711_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19767_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeCode_t1711_m26623_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.TypeCode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.TypeCode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeCode_t1711_m26623 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19763_MethodInfo;
 void InternalEnumerator_1__ctor_m19763 (InternalEnumerator_1_t3562 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.TypeCode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764 (InternalEnumerator_1_t3562 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m19767(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19767_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeCode_t1711_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19765_MethodInfo;
 void InternalEnumerator_1_Dispose_m19765 (InternalEnumerator_1_t3562 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.TypeCode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19766_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19766 (InternalEnumerator_1_t3562 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.TypeCode>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m19767 (InternalEnumerator_1_t3562 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeCode_t1711_m26623(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeCode_t1711_m26623_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.TypeCode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3562____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3562, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3562____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3562, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3562_FieldInfos[] =
{
	&InternalEnumerator_1_t3562____array_0_FieldInfo,
	&InternalEnumerator_1_t3562____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3562____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3562_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3562____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3562_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19767_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3562_PropertyInfos[] =
{
	&InternalEnumerator_1_t3562____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3562____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3562_InternalEnumerator_1__ctor_m19763_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19763_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19763_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19763/* method */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3562_InternalEnumerator_1__ctor_m19763_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19763_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.TypeCode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764/* method */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19765_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.TypeCode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19765_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19765/* method */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19765_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19766_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.TypeCode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19766_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19766/* method */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19766_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1711_0_0_0;
extern void* RuntimeInvoker_TypeCode_t1711 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19767_GenericMethod;
// T System.Array/InternalEnumerator`1<System.TypeCode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19767_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19767/* method */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t1711_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t1711/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19767_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3562_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19763_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764_MethodInfo,
	&InternalEnumerator_1_Dispose_m19765_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19766_MethodInfo,
	&InternalEnumerator_1_get_Current_m19767_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3562_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19764_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19766_MethodInfo,
	&InternalEnumerator_1_Dispose_m19765_MethodInfo,
	&InternalEnumerator_1_get_Current_m19767_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3562_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5125_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3562_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5125_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3562_0_0_0;
extern Il2CppType InternalEnumerator_1_t3562_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3562_GenericClass;
TypeInfo InternalEnumerator_1_t3562_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3562_MethodInfos/* methods */
	, InternalEnumerator_1_t3562_PropertyInfos/* properties */
	, InternalEnumerator_1_t3562_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3562_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3562_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3562_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3562_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3562_1_0_0/* this_arg */
	, InternalEnumerator_1_t3562_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3562_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3562)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6717_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.TypeCode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.TypeCode>
extern MethodInfo ICollection_1_get_Count_m34777_MethodInfo;
static PropertyInfo ICollection_1_t6717____Count_PropertyInfo = 
{
	&ICollection_1_t6717_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34777_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34778_MethodInfo;
static PropertyInfo ICollection_1_t6717____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6717_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34778_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6717_PropertyInfos[] =
{
	&ICollection_1_t6717____Count_PropertyInfo,
	&ICollection_1_t6717____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34777_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.TypeCode>::get_Count()
MethodInfo ICollection_1_get_Count_m34777_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34777_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34778_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34778_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34778_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1711_0_0_0;
extern Il2CppType TypeCode_t1711_0_0_0;
static ParameterInfo ICollection_1_t6717_ICollection_1_Add_m34779_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1711_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34779_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Add(T)
MethodInfo ICollection_1_Add_m34779_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, ICollection_1_t6717_ICollection_1_Add_m34779_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34779_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34780_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::Clear()
MethodInfo ICollection_1_Clear_m34780_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34780_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1711_0_0_0;
static ParameterInfo ICollection_1_t6717_ICollection_1_Contains_m34781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1711_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34781_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Contains(T)
MethodInfo ICollection_1_Contains_m34781_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6717_ICollection_1_Contains_m34781_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34781_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCodeU5BU5D_t3771_0_0_0;
extern Il2CppType TypeCodeU5BU5D_t3771_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6717_ICollection_1_CopyTo_m34782_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeCodeU5BU5D_t3771_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34782_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.TypeCode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34782_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6717_ICollection_1_CopyTo_m34782_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34782_GenericMethod/* genericMethod */

};
extern Il2CppType TypeCode_t1711_0_0_0;
static ParameterInfo ICollection_1_t6717_ICollection_1_Remove_m34783_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1711_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34783_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.TypeCode>::Remove(T)
MethodInfo ICollection_1_Remove_m34783_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Int32_t18/* invoker_method */
	, ICollection_1_t6717_ICollection_1_Remove_m34783_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34783_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6717_MethodInfos[] =
{
	&ICollection_1_get_Count_m34777_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34778_MethodInfo,
	&ICollection_1_Add_m34779_MethodInfo,
	&ICollection_1_Clear_m34780_MethodInfo,
	&ICollection_1_Contains_m34781_MethodInfo,
	&ICollection_1_CopyTo_m34782_MethodInfo,
	&ICollection_1_Remove_m34783_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6719_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6717_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6719_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6717_0_0_0;
extern Il2CppType ICollection_1_t6717_1_0_0;
struct ICollection_1_t6717;
extern Il2CppGenericClass ICollection_1_t6717_GenericClass;
TypeInfo ICollection_1_t6717_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6717_MethodInfos/* methods */
	, ICollection_1_t6717_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6717_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6717_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6717_0_0_0/* byval_arg */
	, &ICollection_1_t6717_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6717_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TypeCode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.TypeCode>
extern Il2CppType IEnumerator_1_t5125_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34784_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.TypeCode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34784_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6719_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5125_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34784_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6719_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34784_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6719_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6719_0_0_0;
extern Il2CppType IEnumerable_1_t6719_1_0_0;
struct IEnumerable_1_t6719;
extern Il2CppGenericClass IEnumerable_1_t6719_GenericClass;
TypeInfo IEnumerable_1_t6719_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6719_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6719_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6719_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6719_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6719_0_0_0/* byval_arg */
	, &IEnumerable_1_t6719_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6719_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6718_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.TypeCode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.TypeCode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.TypeCode>
extern MethodInfo IList_1_get_Item_m34785_MethodInfo;
extern MethodInfo IList_1_set_Item_m34786_MethodInfo;
static PropertyInfo IList_1_t6718____Item_PropertyInfo = 
{
	&IList_1_t6718_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34785_MethodInfo/* get */
	, &IList_1_set_Item_m34786_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6718_PropertyInfos[] =
{
	&IList_1_t6718____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeCode_t1711_0_0_0;
static ParameterInfo IList_1_t6718_IList_1_IndexOf_m34787_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1711_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34787_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.TypeCode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34787_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6718_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6718_IList_1_IndexOf_m34787_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34787_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeCode_t1711_0_0_0;
static ParameterInfo IList_1_t6718_IList_1_Insert_m34788_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1711_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34788_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34788_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6718_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6718_IList_1_Insert_m34788_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34788_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6718_IList_1_RemoveAt_m34789_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34789_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34789_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6718_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6718_IList_1_RemoveAt_m34789_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34789_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6718_IList_1_get_Item_m34785_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType TypeCode_t1711_0_0_0;
extern void* RuntimeInvoker_TypeCode_t1711_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34785_GenericMethod;
// T System.Collections.Generic.IList`1<System.TypeCode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34785_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6718_il2cpp_TypeInfo/* declaring_type */
	, &TypeCode_t1711_0_0_0/* return_type */
	, RuntimeInvoker_TypeCode_t1711_Int32_t18/* invoker_method */
	, IList_1_t6718_IList_1_get_Item_m34785_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34785_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType TypeCode_t1711_0_0_0;
static ParameterInfo IList_1_t6718_IList_1_set_Item_m34786_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeCode_t1711_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34786_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.TypeCode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34786_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6718_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Int32_t18/* invoker_method */
	, IList_1_t6718_IList_1_set_Item_m34786_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34786_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6718_MethodInfos[] =
{
	&IList_1_IndexOf_m34787_MethodInfo,
	&IList_1_Insert_m34788_MethodInfo,
	&IList_1_RemoveAt_m34789_MethodInfo,
	&IList_1_get_Item_m34785_MethodInfo,
	&IList_1_set_Item_m34786_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6718_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6717_il2cpp_TypeInfo,
	&IEnumerable_1_t6719_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6718_0_0_0;
extern Il2CppType IList_1_t6718_1_0_0;
struct IList_1_t6718;
extern Il2CppGenericClass IList_1_t6718_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6718_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6718_MethodInfos/* methods */
	, IList_1_t6718_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6718_il2cpp_TypeInfo/* element_class */
	, IList_1_t6718_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6718_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6718_0_0_0/* byval_arg */
	, &IList_1_t6718_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6718_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IEnumerator_1_t5127_il2cpp_TypeInfo;

// System.UnitySerializationHolder/UnityType
#include "mscorlib_System_UnitySerializationHolder_UnityType.h"


// T System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo IEnumerator_1_get_Current_m34790_MethodInfo;
static PropertyInfo IEnumerator_1_t5127____Current_PropertyInfo = 
{
	&IEnumerator_1_t5127_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m34790_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t5127_PropertyInfos[] =
{
	&IEnumerator_1_t5127____Current_PropertyInfo,
	NULL
};
extern Il2CppType UnityType_t1715_0_0_0;
extern void* RuntimeInvoker_UnityType_t1715 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m34790_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m34790_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t5127_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t1715_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t1715/* invoker_method */
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
	, &IEnumerator_1_get_Current_m34790_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t5127_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m34790_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t5127_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t5127_0_0_0;
extern Il2CppType IEnumerator_1_t5127_1_0_0;
struct IEnumerator_1_t5127;
extern Il2CppGenericClass IEnumerator_1_t5127_GenericClass;
TypeInfo IEnumerator_1_t5127_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t5127_MethodInfos/* methods */
	, IEnumerator_1_t5127_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t5127_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t5127_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t5127_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t5127_0_0_0/* byval_arg */
	, &IEnumerator_1_t5127_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t5127_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
// System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_559.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t3563_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_559MethodDeclarations.h"

extern TypeInfo UnityType_t1715_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m19772_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnityType_t1715_m26634_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UnitySerializationHolder/UnityType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UnitySerializationHolder/UnityType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisUnityType_t1715_m26634 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m19768_MethodInfo;
 void InternalEnumerator_1__ctor_m19768 (InternalEnumerator_1_t3563 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769 (InternalEnumerator_1_t3563 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m19772(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m19772_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UnityType_t1715_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m19770_MethodInfo;
 void InternalEnumerator_1_Dispose_m19770 (InternalEnumerator_1_t3563 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m19771_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m19771 (InternalEnumerator_1_t3563 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
 uint8_t InternalEnumerator_1_get_Current_m19772 (InternalEnumerator_1_t3563 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisUnityType_t1715_m26634(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUnityType_t1715_m26634_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t3563____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3563, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t18_0_0_1;
FieldInfo InternalEnumerator_1_t3563____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t18_0_0_1/* type */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t3563, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t3563_FieldInfos[] =
{
	&InternalEnumerator_1_t3563____array_0_FieldInfo,
	&InternalEnumerator_1_t3563____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t3563____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3563_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t3563____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t3563_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m19772_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t3563_PropertyInfos[] =
{
	&InternalEnumerator_1_t3563____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t3563____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t3563_InternalEnumerator_1__ctor_m19768_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m19768_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m19768_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m19768/* method */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t/* invoker_method */
	, InternalEnumerator_1_t3563_InternalEnumerator_1__ctor_m19768_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m19768_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769/* method */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m19770_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m19770_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m19770/* method */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m19770_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m19771_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m19771_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m19771/* method */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m19771_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t1715_0_0_0;
extern void* RuntimeInvoker_UnityType_t1715 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m19772_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UnitySerializationHolder/UnityType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m19772_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m19772/* method */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t1715_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t1715/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m19772_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t3563_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m19768_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769_MethodInfo,
	&InternalEnumerator_1_Dispose_m19770_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19771_MethodInfo,
	&InternalEnumerator_1_get_Current_m19772_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t3563_VTable[] =
{
	&ValueType_Equals_m1357_MethodInfo,
	&Object_Finalize_m7_MethodInfo,
	&ValueType_GetHashCode_m1358_MethodInfo,
	&ValueType_ToString_m1473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m19769_MethodInfo,
	&InternalEnumerator_1_MoveNext_m19771_MethodInfo,
	&InternalEnumerator_1_Dispose_m19770_MethodInfo,
	&InternalEnumerator_1_get_Current_m19772_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t3563_InterfacesTypeInfos[] = 
{
	&IEnumerator_t112_il2cpp_TypeInfo,
	&IDisposable_t301_il2cpp_TypeInfo,
	&IEnumerator_1_t5127_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t3563_InterfacesOffsets[] = 
{
	{ &IEnumerator_t112_il2cpp_TypeInfo, 4},
	{ &IDisposable_t301_il2cpp_TypeInfo, 6},
	{ &IEnumerator_1_t5127_il2cpp_TypeInfo, 7},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t3563_0_0_0;
extern Il2CppType InternalEnumerator_1_t3563_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t3563_GenericClass;
TypeInfo InternalEnumerator_1_t3563_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t3563_MethodInfos/* methods */
	, InternalEnumerator_1_t3563_PropertyInfos/* properties */
	, InternalEnumerator_1_t3563_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t296_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t3563_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t3563_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t3563_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t3563_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t3563_1_0_0/* this_arg */
	, InternalEnumerator_1_t3563_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t3563_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t3563)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t6720_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo ICollection_1_get_Count_m34791_MethodInfo;
static PropertyInfo ICollection_1_t6720____Count_PropertyInfo = 
{
	&ICollection_1_t6720_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m34791_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m34792_MethodInfo;
static PropertyInfo ICollection_1_t6720____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t6720_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m34792_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t6720_PropertyInfos[] =
{
	&ICollection_1_t6720____Count_PropertyInfo,
	&ICollection_1_t6720____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m34791_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_Count()
MethodInfo ICollection_1_get_Count_m34791_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m34791_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m34792_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m34792_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m34792_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t1715_0_0_0;
extern Il2CppType UnityType_t1715_0_0_0;
static ParameterInfo ICollection_1_t6720_ICollection_1_Add_m34793_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t1715_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m34793_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Add(T)
MethodInfo ICollection_1_Add_m34793_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Byte_t624/* invoker_method */
	, ICollection_1_t6720_ICollection_1_Add_m34793_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m34793_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m34794_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Clear()
MethodInfo ICollection_1_Clear_m34794_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m34794_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t1715_0_0_0;
static ParameterInfo ICollection_1_t6720_ICollection_1_Contains_m34795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t1715_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m34795_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Contains(T)
MethodInfo ICollection_1_Contains_m34795_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6720_ICollection_1_Contains_m34795_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m34795_GenericMethod/* genericMethod */

};
extern Il2CppType UnityTypeU5BU5D_t3772_0_0_0;
extern Il2CppType UnityTypeU5BU5D_t3772_0_0_0;
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo ICollection_1_t6720_ICollection_1_CopyTo_m34796_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnityTypeU5BU5D_t3772_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Object_t_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m34796_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m34796_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Object_t_Int32_t18/* invoker_method */
	, ICollection_1_t6720_ICollection_1_CopyTo_m34796_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m34796_GenericMethod/* genericMethod */

};
extern Il2CppType UnityType_t1715_0_0_0;
static ParameterInfo ICollection_1_t6720_ICollection_1_Remove_m34797_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t1715_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m34797_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UnitySerializationHolder/UnityType>::Remove(T)
MethodInfo ICollection_1_Remove_m34797_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Byte_t624/* invoker_method */
	, ICollection_1_t6720_ICollection_1_Remove_m34797_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m34797_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t6720_MethodInfos[] =
{
	&ICollection_1_get_Count_m34791_MethodInfo,
	&ICollection_1_get_IsReadOnly_m34792_MethodInfo,
	&ICollection_1_Add_m34793_MethodInfo,
	&ICollection_1_Clear_m34794_MethodInfo,
	&ICollection_1_Contains_m34795_MethodInfo,
	&ICollection_1_CopyTo_m34796_MethodInfo,
	&ICollection_1_Remove_m34797_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t6722_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t6720_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&IEnumerable_1_t6722_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t6720_0_0_0;
extern Il2CppType ICollection_1_t6720_1_0_0;
struct ICollection_1_t6720;
extern Il2CppGenericClass ICollection_1_t6720_GenericClass;
TypeInfo ICollection_1_t6720_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t6720_MethodInfos/* methods */
	, ICollection_1_t6720_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t6720_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t6720_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t6720_0_0_0/* byval_arg */
	, &ICollection_1_t6720_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t6720_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>
extern Il2CppType IEnumerator_1_t5127_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m34798_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UnitySerializationHolder/UnityType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m34798_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t6722_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t5127_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m34798_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t6722_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m34798_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t6722_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t6722_0_0_0;
extern Il2CppType IEnumerable_1_t6722_1_0_0;
struct IEnumerable_1_t6722;
extern Il2CppGenericClass IEnumerable_1_t6722_GenericClass;
TypeInfo IEnumerable_1_t6722_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t6722_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t6722_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t6722_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t6722_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t6722_0_0_0/* byval_arg */
	, &IEnumerable_1_t6722_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t6722_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IList_1_t6721_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>
extern MethodInfo IList_1_get_Item_m34799_MethodInfo;
extern MethodInfo IList_1_set_Item_m34800_MethodInfo;
static PropertyInfo IList_1_t6721____Item_PropertyInfo = 
{
	&IList_1_t6721_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m34799_MethodInfo/* get */
	, &IList_1_set_Item_m34800_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t6721_PropertyInfos[] =
{
	&IList_1_t6721____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnityType_t1715_0_0_0;
static ParameterInfo IList_1_t6721_IList_1_IndexOf_m34801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnityType_t1715_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m34801_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m34801_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t6721_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6721_IList_1_IndexOf_m34801_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m34801_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType UnityType_t1715_0_0_0;
static ParameterInfo IList_1_t6721_IList_1_Insert_m34802_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnityType_t1715_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m34802_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m34802_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t6721_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6721_IList_1_Insert_m34802_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m34802_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6721_IList_1_RemoveAt_m34803_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m34803_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m34803_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t6721_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18/* invoker_method */
	, IList_1_t6721_IList_1_RemoveAt_m34803_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m34803_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
static ParameterInfo IList_1_t6721_IList_1_get_Item_m34799_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
};
extern Il2CppType UnityType_t1715_0_0_0;
extern void* RuntimeInvoker_UnityType_t1715_Int32_t18 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m34799_GenericMethod;
// T System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m34799_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t6721_il2cpp_TypeInfo/* declaring_type */
	, &UnityType_t1715_0_0_0/* return_type */
	, RuntimeInvoker_UnityType_t1715_Int32_t18/* invoker_method */
	, IList_1_t6721_IList_1_get_Item_m34799_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m34799_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t18_0_0_0;
extern Il2CppType UnityType_t1715_0_0_0;
static ParameterInfo IList_1_t6721_IList_1_set_Item_m34800_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t18_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnityType_t1715_0_0_0},
};
extern Il2CppType Void_t3_0_0_0;
extern void* RuntimeInvoker_Void_t3_Int32_t18_Byte_t624 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m34800_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UnitySerializationHolder/UnityType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m34800_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t6721_il2cpp_TypeInfo/* declaring_type */
	, &Void_t3_0_0_0/* return_type */
	, RuntimeInvoker_Void_t3_Int32_t18_Byte_t624/* invoker_method */
	, IList_1_t6721_IList_1_set_Item_m34800_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m34800_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t6721_MethodInfos[] =
{
	&IList_1_IndexOf_m34801_MethodInfo,
	&IList_1_Insert_m34802_MethodInfo,
	&IList_1_RemoveAt_m34803_MethodInfo,
	&IList_1_get_Item_m34799_MethodInfo,
	&IList_1_set_Item_m34800_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t6721_InterfacesTypeInfos[] = 
{
	&IEnumerable_t641_il2cpp_TypeInfo,
	&ICollection_1_t6720_il2cpp_TypeInfo,
	&IEnumerable_1_t6722_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t6721_0_0_0;
extern Il2CppType IList_1_t6721_1_0_0;
struct IList_1_t6721;
extern Il2CppGenericClass IList_1_t6721_GenericClass;
extern CustomAttributesCache IList_1_t1946__CustomAttributeCache;
TypeInfo IList_1_t6721_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t6721_MethodInfos/* methods */
	, IList_1_t6721_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t6721_il2cpp_TypeInfo/* element_class */
	, IList_1_t6721_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t1946__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t6721_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t6721_0_0_0/* byval_arg */
	, &IList_1_t6721_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t6721_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
extern TypeInfo IComparable_1_t2140_il2cpp_TypeInfo;

// System.Version
#include "mscorlib_System_Version.h"


// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Version>
extern Il2CppType Version_t797_0_0_0;
extern Il2CppType Version_t797_0_0_0;
static ParameterInfo IComparable_1_t2140_IComparable_1_CompareTo_m34804_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Version_t797_0_0_0},
};
extern Il2CppType Int32_t18_0_0_0;
extern void* RuntimeInvoker_Int32_t18_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m34804_GenericMethod;
// System.Int32 System.IComparable`1<System.Version>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m34804_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t2140_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t18_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t18_Object_t/* invoker_method */
	, IComparable_1_t2140_IComparable_1_CompareTo_m34804_ParameterInfos/* parameters */
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
	, &IComparable_1_CompareTo_m34804_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t2140_MethodInfos[] =
{
	&IComparable_1_CompareTo_m34804_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t2140_0_0_0;
extern Il2CppType IComparable_1_t2140_1_0_0;
struct IComparable_1_t2140;
extern Il2CppGenericClass IComparable_1_t2140_GenericClass;
TypeInfo IComparable_1_t2140_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t2140_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t2140_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t2140_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t2140_0_0_0/* byval_arg */
	, &IComparable_1_t2140_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t2140_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t2141_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Version>
extern Il2CppType Version_t797_0_0_0;
static ParameterInfo IEquatable_1_t2141_IEquatable_1_Equals_m34805_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Version_t797_0_0_0},
};
extern Il2CppType Boolean_t15_0_0_0;
extern void* RuntimeInvoker_Boolean_t15_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m34805_GenericMethod;
// System.Boolean System.IEquatable`1<System.Version>::Equals(T)
MethodInfo IEquatable_1_Equals_m34805_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t2141_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t15_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t15_Object_t/* invoker_method */
	, IEquatable_1_t2141_IEquatable_1_Equals_m34805_ParameterInfos/* parameters */
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
	, &IEquatable_1_Equals_m34805_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t2141_MethodInfos[] =
{
	&IEquatable_1_Equals_m34805_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t2141_0_0_0;
extern Il2CppType IEquatable_1_t2141_1_0_0;
struct IEquatable_1_t2141;
extern Il2CppGenericClass IEquatable_1_t2141_GenericClass;
TypeInfo IEquatable_1_t2141_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t2141_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t2141_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t2141_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t2141_0_0_0/* byval_arg */
	, &IEquatable_1_t2141_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t2141_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
