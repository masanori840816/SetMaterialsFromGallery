#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1178;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1449;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1490;

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
 void ServerIdentity__ctor_m8176 (ServerIdentity_t1178 * __this, String_t* ___objectUri, Context_t1449 * ___context, Type_t * ___objectType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
 Type_t * ServerIdentity_get_ObjectType_m8177 (ServerIdentity_t1178 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
 ObjRef_t1490 * ServerIdentity_CreateObjRef_m8178 (ServerIdentity_t1178 * __this, Type_t * ___requestedType, MethodInfo* method) IL2CPP_METHOD_ATTR;
