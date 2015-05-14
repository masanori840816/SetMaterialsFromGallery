#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1662;
// System.Delegate
struct Delegate_t337;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t572;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m9359 (DelegateEntry_t1662 * __this, Delegate_t337 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t337 * DelegateEntry_DeserializeDelegate_m9360 (DelegateEntry_t1662 * __this, SerializationInfo_t572 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
