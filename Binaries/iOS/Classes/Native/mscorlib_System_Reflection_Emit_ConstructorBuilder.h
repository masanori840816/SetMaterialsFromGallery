﻿#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t546;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1357;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t1358;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1359  : public ConstructorInfo_t701
{
	// System.Type[] System.Reflection.Emit.ConstructorBuilder::parameters
	TypeU5BU5D_t546* ___parameters_2;
	// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::attrs
	int32_t ___attrs_3;
	// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::call_conv
	int32_t ___call_conv_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::type
	TypeBuilder_t1357 * ___type_5;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.ConstructorBuilder::pinfo
	ParameterBuilderU5BU5D_t1358* ___pinfo_6;
};
