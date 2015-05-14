#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object
struct Object_t185;
struct Object_t185_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.HideFlags
#include "UnityEngine_UnityEngine_HideFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Object::.ctor()
 void Object__ctor_m2611 (Object_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
 void Object_Destroy_m2612 (Object_t * __this/* static, unused */, Object_t185 * ___obj, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
 void Object_Destroy_m1806 (Object_t * __this/* static, unused */, Object_t185 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
 void Object_DestroyImmediate_m2613 (Object_t * __this/* static, unused */, Object_t185 * ___obj, bool ___allowDestroyingAssets, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
 void Object_DestroyImmediate_m1807 (Object_t * __this/* static, unused */, Object_t185 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
 String_t* Object_get_name_m1356 (Object_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_name(System.String)
 void Object_set_name_m1895 (Object_t185 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
 void Object_set_hideFlags_m1760 (Object_t185 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::ToString()
 String_t* Object_ToString_m9 (Object_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::Equals(System.Object)
 bool Object_Equals_m6 (Object_t185 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetHashCode()
 int32_t Object_GetHashCode_m8 (Object_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::CompareBaseObjects(UnityEngine.Object,UnityEngine.Object)
 bool Object_CompareBaseObjects_m2614 (Object_t * __this/* static, unused */, Object_t185 * ___lhs, Object_t185 * ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::IsNativeObjectAlive(UnityEngine.Object)
 bool Object_IsNativeObjectAlive_m2615 (Object_t * __this/* static, unused */, Object_t185 * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Object::GetInstanceID()
 int32_t Object_GetInstanceID_m2616 (Object_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.Object::GetCachedPtr()
 IntPtr_t173 Object_GetCachedPtr_m2617 (Object_t185 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
 bool Object_op_Implicit_m1263 (Object_t * __this/* static, unused */, Object_t185 * ___exists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Equality_m1267 (Object_t * __this/* static, unused */, Object_t185 * ___x, Object_t185 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
 bool Object_op_Inequality_m1270 (Object_t * __this/* static, unused */, Object_t185 * ___x, Object_t185 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Object_t185_marshal(const Object_t185& unmarshaled, Object_t185_marshaled& marshaled);
void Object_t185_marshal_back(const Object_t185_marshaled& marshaled, Object_t185& unmarshaled);
void Object_t185_marshal_cleanup(Object_t185_marshaled& marshaled);
