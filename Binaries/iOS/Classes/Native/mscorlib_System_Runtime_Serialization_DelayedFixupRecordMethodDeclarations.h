#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t1536;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1531;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1524;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
 void DelayedFixupRecord__ctor_m8258 (DelayedFixupRecord_t1536 * __this, ObjectRecord_t1531 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t1531 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void DelayedFixupRecord_FixupImpl_m8259 (DelayedFixupRecord_t1536 * __this, ObjectManager_t1524 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
