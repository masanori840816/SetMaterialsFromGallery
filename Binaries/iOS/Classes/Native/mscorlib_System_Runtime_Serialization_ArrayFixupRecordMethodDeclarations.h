#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t1533;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1531;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1524;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
 void ArrayFixupRecord__ctor_m8252 (ArrayFixupRecord_t1533 * __this, ObjectRecord_t1531 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t1531 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void ArrayFixupRecord_FixupImpl_m8253 (ArrayFixupRecord_t1533 * __this, ObjectManager_t1524 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
