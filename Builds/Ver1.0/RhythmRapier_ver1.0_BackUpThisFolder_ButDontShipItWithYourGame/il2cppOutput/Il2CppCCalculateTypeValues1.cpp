#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t778DCC930049ABF88FE516A2EB513EA8B39AF483 
{
};

// <Module>
struct U3CModuleU3E_t953FB913D9E636BB494B06B20C07C0E6B87A2272 
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Configuration.ConfigurationCollectionAttribute
struct ConfigurationCollectionAttribute_t1D7DBAAB4908B6B8F26EA1C66106A67BDE949558  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.__Il2CppComDelegate
struct __Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D  : public Il2CppComObject
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Configuration.IgnoreSection
struct IgnoreSection_t43A7C33C0083D18639AA3CC3D75DD93FCF1C5D97  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::m_enabled
	bool ___m_enabled_4;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<failedInitialization>k__BackingField
	bool ___U3CfailedInitializationU3Ek__BackingField_5;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::nameUi
	String_t* ___nameUi_7;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::version
	String_t* ___version_8;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::featureIdInternal
	String_t* ___featureIdInternal_9;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::openxrExtensionStrings
	String_t* ___openxrExtensionStrings_10;
	// System.String UnityEngine.XR.OpenXR.Features.OpenXRFeature::company
	String_t* ___company_11;
	// System.Int32 UnityEngine.XR.OpenXR.Features.OpenXRFeature::priority
	int32_t ___priority_12;
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::required
	bool ___required_13;
};

struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143_StaticFields
{
	// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::<requiredFeatureFailed>k__BackingField
	bool ___U3CrequiredFeatureFailedU3Ek__BackingField_6;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// UnityEngine.XR.OpenXR.Features.OculusQuestSupport.OculusQuestFeature
struct OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
};

// UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature
struct RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// System.UInt32 UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::cacheSize
	uint32_t ___cacheSize_17;
	// System.UInt32 UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::perThreadCacheSize
	uint32_t ___perThreadCacheSize_18;
};

struct RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA_StaticFields
{
	// System.Guid UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::kEditorToPlayerRequestDebuggerOutput
	Guid_t ___kEditorToPlayerRequestDebuggerOutput_15;
	// System.Guid UnityEngine.XR.OpenXR.Features.RuntimeDebugger.RuntimeDebuggerOpenXRFeature::kPlayerToEditorSendDebuggerOutput
	Guid_t ___kPlayerToEditorSendDebuggerOutput_16;
};

// Unity.ThrowStub
struct ThrowStub_t9161280E38728A40D9B1A975AEE62E89C379E400  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5400;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5400 = { sizeof(ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5401;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5401 = { sizeof(ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5402;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5402 = { sizeof(int32_t)+ sizeof(RuntimeObject), sizeof(int32_t), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5403;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5403 = { sizeof(ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5404;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5404 = { sizeof(ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5405;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5405 = { sizeof(ConfigurationCollectionAttribute_t1D7DBAAB4908B6B8F26EA1C66106A67BDE949558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5406;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5406 = { sizeof(ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5407;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5407 = { sizeof(IgnoreSection_t43A7C33C0083D18639AA3CC3D75DD93FCF1C5D97), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5408;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5408 = { sizeof(ThrowStub_t9161280E38728A40D9B1A975AEE62E89C379E400), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5409;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5409 = { sizeof(U3CModuleU3E_t953FB913D9E636BB494B06B20C07C0E6B87A2272), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5410;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5410 = { sizeof(RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA), -1, sizeof(RuntimeDebuggerOpenXRFeature_t1E3C60D2636DEC25D95E63BB3300DBFC5E9057BA_StaticFields), 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5411;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5411 = { sizeof(U3CModuleU3E_t778DCC930049ABF88FE516A2EB513EA8B39AF483), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5412;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5412 = { sizeof(OculusQuestFeature_tF5FA7128BB36F546D5CF7094A93B812DAC667810), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5413;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5413 = { 0, sizeof(Il2CppIActivationFactory*), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5414;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5414 = { sizeof(Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5415;
const Il2CppTypeDefinitionSizes g_typeDefinitionSize5415 = { sizeof(__Il2CppComDelegate_tD0DD2BBA6AC8F151D32B6DFD02F6BDA339F8DC4D), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
