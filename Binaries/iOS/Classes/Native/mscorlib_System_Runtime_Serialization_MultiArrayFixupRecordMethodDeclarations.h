#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t1534;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1531;
// System.Int32[]
struct Int32U5BU5D_t877;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1524;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
 void MultiArrayFixupRecord__ctor_m8254 (MultiArrayFixupRecord_t1534 * __this, ObjectRecord_t1531 * ___objectToBeFixed, Int32U5BU5D_t877* ___indices, ObjectRecord_t1531 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void MultiArrayFixupRecord_FixupImpl_m8255 (MultiArrayFixupRecord_t1534 * __this, ObjectManager_t1524 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
