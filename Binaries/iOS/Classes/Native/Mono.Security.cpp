#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t992_il2cpp_TypeInfo;
extern TypeInfo Locale_t993_il2cpp_TypeInfo;
extern TypeInfo Sign_t994_il2cpp_TypeInfo;
extern TypeInfo ModulusRing_t996_il2cpp_TypeInfo;
extern TypeInfo Kernel_t997_il2cpp_TypeInfo;
extern TypeInfo BigInteger_t995_il2cpp_TypeInfo;
extern TypeInfo ConfidenceFactor_t1001_il2cpp_TypeInfo;
extern TypeInfo PrimalityTests_t1002_il2cpp_TypeInfo;
extern TypeInfo PrimeGeneratorBase_t1003_il2cpp_TypeInfo;
extern TypeInfo SequentialSearchPrimeGeneratorBase_t1005_il2cpp_TypeInfo;
extern TypeInfo ASN1_t829_il2cpp_TypeInfo;
extern TypeInfo ASN1Convert_t1006_il2cpp_TypeInfo;
extern TypeInfo BitConverterLE_t1007_il2cpp_TypeInfo;
extern TypeInfo ContentInfo_t1008_il2cpp_TypeInfo;
extern TypeInfo EncryptedData_t1009_il2cpp_TypeInfo;
extern TypeInfo PKCS7_t1010_il2cpp_TypeInfo;
extern TypeInfo ARC4Managed_t1011_il2cpp_TypeInfo;
extern TypeInfo CryptoConvert_t1014_il2cpp_TypeInfo;
extern TypeInfo KeyBuilder_t1015_il2cpp_TypeInfo;
extern TypeInfo MD2_t1016_il2cpp_TypeInfo;
extern TypeInfo MD2Managed_t1018_il2cpp_TypeInfo;
extern TypeInfo PKCS1_t1019_il2cpp_TypeInfo;
extern TypeInfo PrivateKeyInfo_t1020_il2cpp_TypeInfo;
extern TypeInfo EncryptedPrivateKeyInfo_t1021_il2cpp_TypeInfo;
extern TypeInfo PKCS8_t1022_il2cpp_TypeInfo;
extern TypeInfo RC4_t1012_il2cpp_TypeInfo;
extern TypeInfo KeyGeneratedEventHandler_t1026_il2cpp_TypeInfo;
extern TypeInfo RSAManaged_t963_il2cpp_TypeInfo;
extern TypeInfo SafeBag_t1027_il2cpp_TypeInfo;
extern TypeInfo DeriveBytes_t1028_il2cpp_TypeInfo;
extern TypeInfo PKCS12_t971_il2cpp_TypeInfo;
extern TypeInfo X501_t968_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t818_il2cpp_TypeInfo;
extern TypeInfo X509CertificateEnumerator_t977_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t973_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t1029_il2cpp_TypeInfo;
extern TypeInfo X509ChainStatusFlags_t1030_il2cpp_TypeInfo;
extern TypeInfo X509CrlEntry_t843_il2cpp_TypeInfo;
extern TypeInfo X509Crl_t841_il2cpp_TypeInfo;
extern TypeInfo X509Extension_t842_il2cpp_TypeInfo;
extern TypeInfo X509ExtensionCollection_t976_il2cpp_TypeInfo;
extern TypeInfo X509Store_t856_il2cpp_TypeInfo;
extern TypeInfo X509StoreManager_t1031_il2cpp_TypeInfo;
extern TypeInfo X509Stores_t857_il2cpp_TypeInfo;
extern TypeInfo AuthorityKeyIdentifierExtension_t975_il2cpp_TypeInfo;
extern TypeInfo BasicConstraintsExtension_t1032_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t1033_il2cpp_TypeInfo;
extern TypeInfo GeneralNames_t1034_il2cpp_TypeInfo;
extern TypeInfo KeyUsages_t1035_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t1036_il2cpp_TypeInfo;
extern TypeInfo CertTypes_t1037_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t1038_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t1039_il2cpp_TypeInfo;
extern TypeInfo HMAC_t1040_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t1042_il2cpp_TypeInfo;
extern TypeInfo AlertLevel_t1043_il2cpp_TypeInfo;
extern TypeInfo AlertDescription_t1044_il2cpp_TypeInfo;
extern TypeInfo Alert_t1045_il2cpp_TypeInfo;
extern TypeInfo CipherAlgorithmType_t1046_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t1048_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t1049_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteFactory_t1052_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t1054_il2cpp_TypeInfo;
extern TypeInfo ClientRecordProtocol_t1055_il2cpp_TypeInfo;
extern TypeInfo ClientSessionInfo_t1060_il2cpp_TypeInfo;
extern TypeInfo ClientSessionCache_t1061_il2cpp_TypeInfo;
extern TypeInfo ContentType_t1062_il2cpp_TypeInfo;
extern TypeInfo Context_t1047_il2cpp_TypeInfo;
extern TypeInfo ExchangeAlgorithmType_t1066_il2cpp_TypeInfo;
extern TypeInfo HandshakeState_t1067_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithmType_t1068_il2cpp_TypeInfo;
extern TypeInfo HttpsClientStream_t1071_il2cpp_TypeInfo;
extern TypeInfo ReceiveRecordAsyncResult_t1073_il2cpp_TypeInfo;
extern TypeInfo SendRecordAsyncResult_t1075_il2cpp_TypeInfo;
extern TypeInfo RecordProtocol_t1056_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureDeformatter_t1076_il2cpp_TypeInfo;
extern TypeInfo RSASslSignatureFormatter_t1078_il2cpp_TypeInfo;
extern TypeInfo SecurityCompressionType_t1080_il2cpp_TypeInfo;
extern TypeInfo SecurityParameters_t1065_il2cpp_TypeInfo;
extern TypeInfo SecurityProtocolType_t1081_il2cpp_TypeInfo;
extern TypeInfo ServerContext_t1082_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t1083_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t1053_il2cpp_TypeInfo;
extern TypeInfo SslCipherSuite_t1051_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t1087_il2cpp_TypeInfo;
extern TypeInfo InternalAsyncResult_t1088_il2cpp_TypeInfo;
extern TypeInfo SslStreamBase_t1086_il2cpp_TypeInfo;
extern TypeInfo TlsCipherSuite_t1050_il2cpp_TypeInfo;
extern TypeInfo TlsClientSettings_t1064_il2cpp_TypeInfo;
extern TypeInfo TlsException_t1090_il2cpp_TypeInfo;
extern TypeInfo TlsServerSettings_t1063_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t1059_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t1092_il2cpp_TypeInfo;
extern TypeInfo HandshakeMessage_t1058_il2cpp_TypeInfo;
extern TypeInfo HandshakeType_t1093_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificate_t1094_il2cpp_TypeInfo;
extern TypeInfo TlsClientCertificateVerify_t1095_il2cpp_TypeInfo;
extern TypeInfo TlsClientFinished_t1096_il2cpp_TypeInfo;
extern TypeInfo TlsClientHello_t1097_il2cpp_TypeInfo;
extern TypeInfo TlsClientKeyExchange_t1098_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificate_t1099_il2cpp_TypeInfo;
extern TypeInfo TlsServerCertificateRequest_t1100_il2cpp_TypeInfo;
extern TypeInfo TlsServerFinished_t1101_il2cpp_TypeInfo;
extern TypeInfo TlsServerHello_t1102_il2cpp_TypeInfo;
extern TypeInfo TlsServerHelloDone_t1103_il2cpp_TypeInfo;
extern TypeInfo TlsServerKeyExchange_t1104_il2cpp_TypeInfo;
extern TypeInfo PrimalityTest_t1004_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback_t1084_il2cpp_TypeInfo;
extern TypeInfo CertificateValidationCallback2_t1085_il2cpp_TypeInfo;
extern TypeInfo CertificateSelectionCallback_t1069_il2cpp_TypeInfo;
extern TypeInfo PrivateKeySelectionCallback_t1070_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$3132_t1105_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t1106_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t1107_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t1108_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t1109_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t1110_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t1111_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t1112_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t1113_il2cpp_TypeInfo;
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1114_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_Mono_Security_Assembly_Types[122] = 
{
	&U3CModuleU3E_t992_il2cpp_TypeInfo,
	&Locale_t993_il2cpp_TypeInfo,
	&Sign_t994_il2cpp_TypeInfo,
	&ModulusRing_t996_il2cpp_TypeInfo,
	&Kernel_t997_il2cpp_TypeInfo,
	&BigInteger_t995_il2cpp_TypeInfo,
	&ConfidenceFactor_t1001_il2cpp_TypeInfo,
	&PrimalityTests_t1002_il2cpp_TypeInfo,
	&PrimeGeneratorBase_t1003_il2cpp_TypeInfo,
	&SequentialSearchPrimeGeneratorBase_t1005_il2cpp_TypeInfo,
	&ASN1_t829_il2cpp_TypeInfo,
	&ASN1Convert_t1006_il2cpp_TypeInfo,
	&BitConverterLE_t1007_il2cpp_TypeInfo,
	&ContentInfo_t1008_il2cpp_TypeInfo,
	&EncryptedData_t1009_il2cpp_TypeInfo,
	&PKCS7_t1010_il2cpp_TypeInfo,
	&ARC4Managed_t1011_il2cpp_TypeInfo,
	&CryptoConvert_t1014_il2cpp_TypeInfo,
	&KeyBuilder_t1015_il2cpp_TypeInfo,
	&MD2_t1016_il2cpp_TypeInfo,
	&MD2Managed_t1018_il2cpp_TypeInfo,
	&PKCS1_t1019_il2cpp_TypeInfo,
	&PrivateKeyInfo_t1020_il2cpp_TypeInfo,
	&EncryptedPrivateKeyInfo_t1021_il2cpp_TypeInfo,
	&PKCS8_t1022_il2cpp_TypeInfo,
	&RC4_t1012_il2cpp_TypeInfo,
	&KeyGeneratedEventHandler_t1026_il2cpp_TypeInfo,
	&RSAManaged_t963_il2cpp_TypeInfo,
	&SafeBag_t1027_il2cpp_TypeInfo,
	&DeriveBytes_t1028_il2cpp_TypeInfo,
	&PKCS12_t971_il2cpp_TypeInfo,
	&X501_t968_il2cpp_TypeInfo,
	&X509Certificate_t818_il2cpp_TypeInfo,
	&X509CertificateEnumerator_t977_il2cpp_TypeInfo,
	&X509CertificateCollection_t973_il2cpp_TypeInfo,
	&X509Chain_t1029_il2cpp_TypeInfo,
	&X509ChainStatusFlags_t1030_il2cpp_TypeInfo,
	&X509CrlEntry_t843_il2cpp_TypeInfo,
	&X509Crl_t841_il2cpp_TypeInfo,
	&X509Extension_t842_il2cpp_TypeInfo,
	&X509ExtensionCollection_t976_il2cpp_TypeInfo,
	&X509Store_t856_il2cpp_TypeInfo,
	&X509StoreManager_t1031_il2cpp_TypeInfo,
	&X509Stores_t857_il2cpp_TypeInfo,
	&AuthorityKeyIdentifierExtension_t975_il2cpp_TypeInfo,
	&BasicConstraintsExtension_t1032_il2cpp_TypeInfo,
	&ExtendedKeyUsageExtension_t1033_il2cpp_TypeInfo,
	&GeneralNames_t1034_il2cpp_TypeInfo,
	&KeyUsages_t1035_il2cpp_TypeInfo,
	&KeyUsageExtension_t1036_il2cpp_TypeInfo,
	&CertTypes_t1037_il2cpp_TypeInfo,
	&NetscapeCertTypeExtension_t1038_il2cpp_TypeInfo,
	&SubjectAltNameExtension_t1039_il2cpp_TypeInfo,
	&HMAC_t1040_il2cpp_TypeInfo,
	&MD5SHA1_t1042_il2cpp_TypeInfo,
	&AlertLevel_t1043_il2cpp_TypeInfo,
	&AlertDescription_t1044_il2cpp_TypeInfo,
	&Alert_t1045_il2cpp_TypeInfo,
	&CipherAlgorithmType_t1046_il2cpp_TypeInfo,
	&CipherSuite_t1048_il2cpp_TypeInfo,
	&CipherSuiteCollection_t1049_il2cpp_TypeInfo,
	&CipherSuiteFactory_t1052_il2cpp_TypeInfo,
	&ClientContext_t1054_il2cpp_TypeInfo,
	&ClientRecordProtocol_t1055_il2cpp_TypeInfo,
	&ClientSessionInfo_t1060_il2cpp_TypeInfo,
	&ClientSessionCache_t1061_il2cpp_TypeInfo,
	&ContentType_t1062_il2cpp_TypeInfo,
	&Context_t1047_il2cpp_TypeInfo,
	&ExchangeAlgorithmType_t1066_il2cpp_TypeInfo,
	&HandshakeState_t1067_il2cpp_TypeInfo,
	&HashAlgorithmType_t1068_il2cpp_TypeInfo,
	&HttpsClientStream_t1071_il2cpp_TypeInfo,
	&ReceiveRecordAsyncResult_t1073_il2cpp_TypeInfo,
	&SendRecordAsyncResult_t1075_il2cpp_TypeInfo,
	&RecordProtocol_t1056_il2cpp_TypeInfo,
	&RSASslSignatureDeformatter_t1076_il2cpp_TypeInfo,
	&RSASslSignatureFormatter_t1078_il2cpp_TypeInfo,
	&SecurityCompressionType_t1080_il2cpp_TypeInfo,
	&SecurityParameters_t1065_il2cpp_TypeInfo,
	&SecurityProtocolType_t1081_il2cpp_TypeInfo,
	&ServerContext_t1082_il2cpp_TypeInfo,
	&ValidationResult_t1083_il2cpp_TypeInfo,
	&SslClientStream_t1053_il2cpp_TypeInfo,
	&SslCipherSuite_t1051_il2cpp_TypeInfo,
	&SslHandshakeHash_t1087_il2cpp_TypeInfo,
	&InternalAsyncResult_t1088_il2cpp_TypeInfo,
	&SslStreamBase_t1086_il2cpp_TypeInfo,
	&TlsCipherSuite_t1050_il2cpp_TypeInfo,
	&TlsClientSettings_t1064_il2cpp_TypeInfo,
	&TlsException_t1090_il2cpp_TypeInfo,
	&TlsServerSettings_t1063_il2cpp_TypeInfo,
	&TlsStream_t1059_il2cpp_TypeInfo,
	&ClientCertificateType_t1092_il2cpp_TypeInfo,
	&HandshakeMessage_t1058_il2cpp_TypeInfo,
	&HandshakeType_t1093_il2cpp_TypeInfo,
	&TlsClientCertificate_t1094_il2cpp_TypeInfo,
	&TlsClientCertificateVerify_t1095_il2cpp_TypeInfo,
	&TlsClientFinished_t1096_il2cpp_TypeInfo,
	&TlsClientHello_t1097_il2cpp_TypeInfo,
	&TlsClientKeyExchange_t1098_il2cpp_TypeInfo,
	&TlsServerCertificate_t1099_il2cpp_TypeInfo,
	&TlsServerCertificateRequest_t1100_il2cpp_TypeInfo,
	&TlsServerFinished_t1101_il2cpp_TypeInfo,
	&TlsServerHello_t1102_il2cpp_TypeInfo,
	&TlsServerHelloDone_t1103_il2cpp_TypeInfo,
	&TlsServerKeyExchange_t1104_il2cpp_TypeInfo,
	&PrimalityTest_t1004_il2cpp_TypeInfo,
	&CertificateValidationCallback_t1084_il2cpp_TypeInfo,
	&CertificateValidationCallback2_t1085_il2cpp_TypeInfo,
	&CertificateSelectionCallback_t1069_il2cpp_TypeInfo,
	&PrivateKeySelectionCallback_t1070_il2cpp_TypeInfo,
	&$ArrayType$3132_t1105_il2cpp_TypeInfo,
	&$ArrayType$256_t1106_il2cpp_TypeInfo,
	&$ArrayType$20_t1107_il2cpp_TypeInfo,
	&$ArrayType$32_t1108_il2cpp_TypeInfo,
	&$ArrayType$48_t1109_il2cpp_TypeInfo,
	&$ArrayType$64_t1110_il2cpp_TypeInfo,
	&$ArrayType$12_t1111_il2cpp_TypeInfo,
	&$ArrayType$16_t1112_il2cpp_TypeInfo,
	&$ArrayType$4_t1113_il2cpp_TypeInfo,
	&U3CPrivateImplementationDetailsU3E_t1114_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern CustomAttributesCache g_Mono_Security_Assembly__CustomAttributeCache;
Il2CppAssembly g_Mono_Security_Assembly = 
{
	{ "Mono.Security", 0, 0, "\x0\x24\x0\x0\x4\x80\x0\x0\x94\x0\x0\x0\x6\x2\x0\x0\x0\x24\x0\x0\x52\x53\x41\x31\x0\x4\x0\x0\x1\x0\x1\x0\x79\x15\x99\x77\xD2\xD0\x3A\x8E\x6B\xEA\x7A\x2E\x74\xE8\xD1\xAF\xCC\x93\xE8\x85\x19\x74\x95\x2B\xB4\x80\xA1\x2C\x91\x34\x47\x4D\x4\x6\x24\x47\xC3\x7E\xE\x68\xC0\x80\x53\x6F\xCF\x3C\x3F\xBE\x2F\xF9\xC9\x79\xCE\x99\x84\x75\xE5\x6\xE8\xCE\x82\xDD\x5B\xF\x35\xD\xC1\xE\x93\xBF\x2E\xEE\xCF\x87\x4B\x24\x77\xC\x50\x81\xDB\xEA\x74\x47\xFD\xDA\xFA\x27\x7B\x22\xDE\x47\xD6\xFF\xEA\x44\x96\x74\xA4\xF9\xFC\xCF\x84\xD1\x50\x69\x8\x93\x80\x28\x4D\xBD\xD3\x5F\x46\xCD\xFF\x12\xA1\xBD\x78\xE4\xEF\x0\x65\xD0\x16\xDF", { 0x07, 0x38, 0xEB, 0x9F, 0x13, 0x2E, 0xD7, 0x56 }, 32772, 0, 1, 2, 0, 5, 0 },
	&g_Mono_Security_dll_Image,
	&g_Mono_Security_Assembly__CustomAttributeCache,
};
Il2CppImage g_Mono_Security_dll_Image = 
{
	 "Mono.Security.dll" ,
	&g_Mono_Security_Assembly,
	g_Mono_Security_Assembly_Types,
	121,
	NULL,
};
static void s_Mono_SecurityRegistration()
{
	RegisterAssembly (&g_Mono_Security_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_Mono_SecurityRegistrationVariable(&s_Mono_SecurityRegistration, NULL);
