#pragma once
#include <stdint.h>
// System.Security.Cryptography.DSA
struct DSA_t819;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1127  : public AsymmetricSignatureDeformatter_t1077
{
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t819 * ___dsa_0;
};
