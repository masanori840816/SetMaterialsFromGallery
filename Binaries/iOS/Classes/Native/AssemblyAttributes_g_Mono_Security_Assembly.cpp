#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo AssemblyCopyrightAttribute_t405_il2cpp_TypeInfo;
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttribute.h"
// System.Reflection.AssemblyCopyrightAttribute
#include "mscorlib_System_Reflection_AssemblyCopyrightAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2035_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t401_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2031_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t404_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
extern MethodInfo AssemblyProductAttribute__ctor_m2034_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t400_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTitleAttribute__ctor_m2030_MethodInfo;
extern TypeInfo CLSCompliantAttribute_t748_il2cpp_TypeInfo;
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttribute.h"
// System.CLSCompliantAttribute
#include "mscorlib_System_CLSCompliantAttributeMethodDeclarations.h"
extern MethodInfo CLSCompliantAttribute__ctor_m3212_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t403_il2cpp_TypeInfo;
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttribute.h"
// System.Reflection.AssemblyCompanyAttribute
#include "mscorlib_System_Reflection_AssemblyCompanyAttributeMethodDeclarations.h"
extern MethodInfo AssemblyCompanyAttribute__ctor_m2033_MethodInfo;
extern TypeInfo ComVisibleAttribute_t408_il2cpp_TypeInfo;
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttribute.h"
// System.Runtime.InteropServices.ComVisibleAttribute
#include "mscorlib_System_Runtime_InteropServices_ComVisibleAttributeMethodDeclarations.h"
extern MethodInfo ComVisibleAttribute__ctor_m2038_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t4_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m10_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m11_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t726_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
extern MethodInfo InternalsVisibleToAttribute__ctor_m3191_MethodInfo;
extern TypeInfo AssemblyKeyFileAttribute_t751_il2cpp_TypeInfo;
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttribute.h"
// System.Reflection.AssemblyKeyFileAttribute
#include "mscorlib_System_Reflection_AssemblyKeyFileAttributeMethodDeclarations.h"
extern MethodInfo AssemblyKeyFileAttribute__ctor_m3215_MethodInfo;
extern TypeInfo AssemblyDelaySignAttribute_t752_il2cpp_TypeInfo;
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttribute.h"
// System.Reflection.AssemblyDelaySignAttribute
#include "mscorlib_System_Reflection_AssemblyDelaySignAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDelaySignAttribute__ctor_m3216_MethodInfo;
extern TypeInfo NeutralResourcesLanguageAttribute_t747_il2cpp_TypeInfo;
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"
// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttributeMethodDeclarations.h"
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m3211_MethodInfo;
void g_Mono_Security_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyCopyrightAttribute_t405 * tmp;
		tmp = (AssemblyCopyrightAttribute_t405 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t405_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m2035(tmp, il2cpp_codegen_string_new_wrapper("(c) 2003-2004 Various Authors"), &AssemblyCopyrightAttribute__ctor_m2035_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t401 * tmp;
		tmp = (AssemblyDescriptionAttribute_t401 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t401_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2031(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &AssemblyDescriptionAttribute__ctor_m2031_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t404 * tmp;
		tmp = (AssemblyProductAttribute_t404 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t404_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2034(tmp, il2cpp_codegen_string_new_wrapper("MONO CLI"), &AssemblyProductAttribute__ctor_m2034_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t400 * tmp;
		tmp = (AssemblyTitleAttribute_t400 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t400_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2030(tmp, il2cpp_codegen_string_new_wrapper("Mono.Security.dll"), &AssemblyTitleAttribute__ctor_m2030_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t748 * tmp;
		tmp = (CLSCompliantAttribute_t748 *)il2cpp_codegen_object_new (&CLSCompliantAttribute_t748_il2cpp_TypeInfo);
		CLSCompliantAttribute__ctor_m3212(tmp, true, &CLSCompliantAttribute__ctor_m3212_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t403 * tmp;
		tmp = (AssemblyCompanyAttribute_t403 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t403_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m2033(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &AssemblyCompanyAttribute__ctor_m2033_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t408 * tmp;
		tmp = (ComVisibleAttribute_t408 *)il2cpp_codegen_object_new (&ComVisibleAttribute_t408_il2cpp_TypeInfo);
		ComVisibleAttribute__ctor_m2038(tmp, false, &ComVisibleAttribute__ctor_m2038_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t4 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t4 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t4_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m10(tmp, &RuntimeCompatibilityAttribute__ctor_m10_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m11(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m11_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t726 * tmp;
		tmp = (InternalsVisibleToAttribute_t726 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t726_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m3191(tmp, il2cpp_codegen_string_new_wrapper("System, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &InternalsVisibleToAttribute__ctor_m3191_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t751 * tmp;
		tmp = (AssemblyKeyFileAttribute_t751 *)il2cpp_codegen_object_new (&AssemblyKeyFileAttribute_t751_il2cpp_TypeInfo);
		AssemblyKeyFileAttribute__ctor_m3215(tmp, il2cpp_codegen_string_new_wrapper("../mono.pub"), &AssemblyKeyFileAttribute__ctor_m3215_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t752 * tmp;
		tmp = (AssemblyDelaySignAttribute_t752 *)il2cpp_codegen_object_new (&AssemblyDelaySignAttribute_t752_il2cpp_TypeInfo);
		AssemblyDelaySignAttribute__ctor_m3216(tmp, true, &AssemblyDelaySignAttribute__ctor_m3216_MethodInfo);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		NeutralResourcesLanguageAttribute_t747 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t747 *)il2cpp_codegen_object_new (&NeutralResourcesLanguageAttribute_t747_il2cpp_TypeInfo);
		NeutralResourcesLanguageAttribute__ctor_m3211(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &NeutralResourcesLanguageAttribute__ctor_m3211_MethodInfo);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache = {
12,
NULL,
&g_Mono_Security_Assembly_CustomAttributesCacheGenerator
};
