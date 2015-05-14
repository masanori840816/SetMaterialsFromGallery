#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1532;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1531;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1524;

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
 void BaseFixupRecord__ctor_m8255 (BaseFixupRecord_t1532 * __this, ObjectRecord_t1531 * ___objectToBeFixed, ObjectRecord_t1531 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
 bool BaseFixupRecord_DoFixup_m8256 (BaseFixupRecord_t1532 * __this, ObjectManager_t1524 * ___manager, bool ___strict, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.BaseFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
