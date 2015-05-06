#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t772;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.Evidence
struct Evidence_t1374  : public Object_t
{
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t772 * ___hostEvidenceList_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t772 * ___assemblyEvidenceList_1;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_2;
};
