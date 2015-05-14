#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t1535;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1531;
// System.Reflection.MemberInfo
struct MemberInfo_t666;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1524;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
 void FixupRecord__ctor_m8261 (FixupRecord_t1535 * __this, ObjectRecord_t1531 * ___objectToBeFixed, MemberInfo_t666 * ___member, ObjectRecord_t1531 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void FixupRecord_FixupImpl_m8262 (FixupRecord_t1535 * __this, ObjectManager_t1524 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
