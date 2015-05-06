#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.ArgumentException
struct ArgumentException_t377  : public SystemException_t979
{
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;
};
