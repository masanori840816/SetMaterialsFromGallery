#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t421;
struct ScriptableObject_t421_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m2058 (ScriptableObject_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m2059 (Object_t * __this/* static, unused */, ScriptableObject_t421 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t421 * ScriptableObject_CreateInstance_m2060 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t421 * ScriptableObject_CreateInstance_m2061 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t421 * ScriptableObject_CreateInstanceFromType_m2062 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t421_marshal(const ScriptableObject_t421& unmarshaled, ScriptableObject_t421_marshaled& marshaled);
void ScriptableObject_t421_marshal_back(const ScriptableObject_t421_marshaled& marshaled, ScriptableObject_t421& unmarshaled);
void ScriptableObject_t421_marshal_cleanup(ScriptableObject_t421_marshaled& marshaled);
