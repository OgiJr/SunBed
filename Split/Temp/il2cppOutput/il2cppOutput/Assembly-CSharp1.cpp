#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// DamageSource
struct DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// GameAnalyticsSDK.Events.GA_SpecialEvents
struct GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C;
// HUD
struct HUD_t7BAB95FEFCC7E539118E7C066EACE09D2062EFB9;
// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1;
// Voodoo.Sauce.Internal.Analytics.IAnalyticsProvider
struct IAnalyticsProvider_t35ECE30C41C0721A0949111A4B61E8E60791C2FF;
// InteractableItemBase
struct InteractableItemBase_t9EB72982CBC6A62D99A2CF2D84FA557072E5B2F2;
// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805;
// InventoryItemBase
struct InventoryItemBase_tDCFB115B1C5A57124D80A793D9D7A6971E4C3737;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// GameAnalyticsSDK.Setup.Settings
struct Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Voodoo.Sauce.Internal.Analytics.AnalyticsManager/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t1BEE2CACB4283182FAD4B3FF919879E657F86C7E;
// DamageSource/<TakeDamage>d__5
struct U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D;
// GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser
struct Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5;
// GameAnalyticsSDK.Utilities.GA_MiniJSON/Serializer
struct Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14;
// GameAnalyticsSDK.Events.GA_SpecialEvents/<CheckCriticalFPSRoutine>d__7
struct U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9;
// GameAnalyticsSDK.Events.GA_SpecialEvents/<SubmitFPSRoutine>d__6
struct U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A;
// Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper/DesignEvent
struct DesignEvent_t4A6604EC3F9719414F38B9B302E4C58AAA3194B3;
// Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper/GameAnalyticsEvent
struct GameAnalyticsEvent_t75562ADC4039552BE547384DA475FC3DB5EEEC5B;
// Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper/ProgressEvent
struct ProgressEvent_tB928D604656BD8B632A240930B14C374CF84D470;
// IosTenjin/DeepLinkHandlerNativeDelegate
struct DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3;
// Tenjin/DeferredDeeplinkDelegate
struct DeferredDeeplinkDelegate_t17CFB212AC6E86692952F32563F87C3E5499FEED;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.List`1<GameAnalyticsSDK.Setup.Organization>
struct List_1_tD952F6EB7255479FFC3502BD6B167C2953304420;
// System.Collections.Generic.List`1<GameAnalyticsSDK.Setup.Settings/HelpTypes>
struct List_1_t5361BB3A872F6650CF61E0ED49B5BA4EB9ECA593;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform>
struct List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// UnityEngine.GUIStyle
struct GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.RuntimePlatform[]
struct RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// IosTenjin/NativeUtility/StringStringKeyValuePair[]
struct StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAnalyticsProvider_t35ECE30C41C0721A0949111A4B61E8E60791C2FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0211B6903A3FDBABC83758A7DAD8EB530F735851;
IL2CPP_EXTERN_C String_t* _stringLiteral025D0C2D0038B5F8E7628D3CD4C4E5E06106CAAE;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m374496B3B8F3532FC52B465384E6C950DDA79F8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeUtility_MarshalNativeStructArray_TisStringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_m4D6339EC38CAB41FA9A7B31C16EB88DFC706A209_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeUtility_MarshalStringStringDictionary_mCAF157E2332E6CBE59E0E39E9C60B3B00C8B627F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckCriticalFPSRoutineU3Ed__7_System_Collections_IEnumerator_Reset_mFB2B0598E6394E18B23F300E6E26ABB4A53EDCCE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSubmitFPSRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m54A2D539680A5005EB388151B098D1433E18E8B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTakeDamageU3Ed__5_System_Collections_IEnumerator_Reset_mDEB7D638808CDFF1CC8414F215628E8070CC5C39_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t DeepLinkHandlerNativeDelegate_BeginInvoke_m2D4E93A207132D6991E52745308564E25EA8AB3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DesignEvent_Track_m10650C63F9A7DCE38B02541D1E193E57BFAB2F29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NativeUtility_MarshalStringStringDictionary_mCAF157E2332E6CBE59E0E39E9C60B3B00C8B627F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_EatWhitespace_mE1A873992F46B4018265C366E0BE9A6DEA2526B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_IsWordBreak_mA5013E5F661DE0F37B4D76C89EEFEBA9978C413E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseArray_m868B22C9422224A383529B03429CD7FA00E61219_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseByToken_mEEA85DF372EF538E4F842C7767B4E28F3280D4AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseNumber_mE4A8BB1433C2623F8F60C44EB6D4985E27C5F1DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseObject_mA56B5F7D20C353FFA8590B7F50CE9C533A0B039D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_ParseString_m7F445898DA60FF288050CD462D79CBBB2D199C54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_Parse_m6F69266672572538AED8949810B0819929268226_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser__ctor_m610B55ADDAA130C6DBBF0AC1C2595827FEE78155_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_NextWord_m91F25BA3E55E3E27B0BAB7DB7D83D3789D38A9A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Parser_get_PeekChar_m3154D875E96DEA32D6522BB1A7A1EC84D74C5F6E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ProgressEvent_Track_m35CE2F793D8F5725216F032C57CAEE79D04CFF2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeArray_mA32475FD33E28D885B909174CA1B8C5FD69586D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeObject_m786C47BA79F4D3C62E9FD2DAF27789F25609FDB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeOther_m66148FC491BF70FF24E54522AEFD7FB3784888AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_SerializeValue_m5E9E030DFEBF79D969626D5CAD2E9D175FB45225_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer_Serialize_m683023D92B5D1CD90D8E41E5484491FFD5B95A93_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Serializer__ctor_mA9423C79B258927AF484E36C749877037693CF18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCheckCriticalFPSRoutineU3Ed__7_MoveNext_m86E0264AB09BB9162CEFE114FC698B6378562F68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCheckCriticalFPSRoutineU3Ed__7_System_Collections_IEnumerator_Reset_mFB2B0598E6394E18B23F300E6E26ABB4A53EDCCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSubmitFPSRoutineU3Ed__6_MoveNext_mB95F8C373905C86CD845D427D79E55E3F4A149CA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSubmitFPSRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m54A2D539680A5005EB388151B098D1433E18E8B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTakeDamageU3Ed__5_MoveNext_m675D42300164190B1F6F083D0DD432C3EC2D0EE2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CTakeDamageU3Ed__5_System_Collections_IEnumerator_Reset_mDEB7D638808CDFF1CC8414F215628E8070CC5C39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass17_0_U3CInitializeU3Eb__0_m415BA3804A8D4005BD6A36F34503C35D8F0B58AE_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// DamageSource_<TakeDamage>d__5
struct  U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D  : public RuntimeObject
{
public:
	// System.Int32 DamageSource_<TakeDamage>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DamageSource_<TakeDamage>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController DamageSource_<TakeDamage>d__5::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_2;
	// DamageSource DamageSource_<TakeDamage>d__5::<>4__this
	DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * ___U3CU3E4__this_3;
	// System.Single DamageSource_<TakeDamage>d__5::repeatRate
	float ___repeatRate_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D, ___player_2)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_2() const { return ___player_2; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D, ___U3CU3E4__this_3)); }
	inline DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_repeatRate_4() { return static_cast<int32_t>(offsetof(U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D, ___repeatRate_4)); }
	inline float get_repeatRate_4() const { return ___repeatRate_4; }
	inline float* get_address_of_repeatRate_4() { return &___repeatRate_4; }
	inline void set_repeatRate_4(float value)
	{
		___repeatRate_4 = value;
	}
};


// GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7
struct  U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9  : public RuntimeObject
{
public:
	// System.Int32 GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameAnalyticsSDK.Events.GA_SpecialEvents GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::<>4__this
	GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9, ___U3CU3E4__this_2)); }
	inline GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6
struct  U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A  : public RuntimeObject
{
public:
	// System.Int32 GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser
struct  Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5  : public RuntimeObject
{
public:
	// System.IO.StringReader GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::json
	StringReader_t74E352C280EAC22C878867444978741F19E1F895 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5, ___json_1)); }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 * get_json_1() const { return ___json_1; }
	inline StringReader_t74E352C280EAC22C878867444978741F19E1F895 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t74E352C280EAC22C878867444978741F19E1F895 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_1), (void*)value);
	}
};


// GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer
struct  Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14  : public RuntimeObject
{
public:
	// System.Text.StringBuilder GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_0), (void*)value);
	}
};


// IosTenjin_NativeUtility
struct  NativeUtility_t9BBB4720EE29BF1B28990702D2831DC69454793B  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Voodoo.Sauce.Internal.Analytics.AnalyticsManager_<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_t1BEE2CACB4283182FAD4B3FF919879E657F86C7E  : public RuntimeObject
{
public:
	// System.Boolean Voodoo.Sauce.Internal.Analytics.AnalyticsManager_<>c__DisplayClass17_0::consent
	bool ___consent_0;

public:
	inline static int32_t get_offset_of_consent_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t1BEE2CACB4283182FAD4B3FF919879E657F86C7E, ___consent_0)); }
	inline bool get_consent_0() const { return ___consent_0; }
	inline bool* get_address_of_consent_0() { return &___consent_0; }
	inline void set_consent_0(bool value)
	{
		___consent_0 = value;
	}
};


// Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_GameAnalyticsEvent
struct  GameAnalyticsEvent_t75562ADC4039552BE547384DA475FC3DB5EEEC5B  : public RuntimeObject
{
public:

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D32
struct  __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F__padding[32];
	};

public:
};


// IosTenjin_NativeUtility_StringStringKeyValuePair
struct  StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9 
{
public:
	// System.String IosTenjin_NativeUtility_StringStringKeyValuePair::Key
	String_t* ___Key_0;
	// System.String IosTenjin_NativeUtility_StringStringKeyValuePair::Value
	String_t* ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Key_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9, ___Value_1)); }
	inline String_t* get_Value_1() const { return ___Value_1; }
	inline String_t** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(String_t* value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of IosTenjin/NativeUtility/StringStringKeyValuePair
struct StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_pinvoke
{
	char* ___Key_0;
	char* ___Value_1;
};
// Native definition for COM marshalling of IosTenjin/NativeUtility/StringStringKeyValuePair
struct StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_com
{
	Il2CppChar* ___Key_0;
	Il2CppChar* ___Value_1;
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// GameAnalyticsSDK.GAProgressionStatus
struct  GAProgressionStatus_t15B56AA9B356952B3EE5F0CFF73F3D53A03AA30A 
{
public:
	// System.Int32 GameAnalyticsSDK.GAProgressionStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GAProgressionStatus_t15B56AA9B356952B3EE5F0CFF73F3D53A03AA30A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings_HelpTypes
struct  HelpTypes_tA9ECA66280CA9684D680006253ADCC13FA558E0D 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings_HelpTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HelpTypes_tA9ECA66280CA9684D680006253ADCC13FA558E0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings_InspectorStates
struct  InspectorStates_tDF023E8A87CE4BCD18B5827A795CDB0A86F1C7CD 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings_InspectorStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InspectorStates_tDF023E8A87CE4BCD18B5827A795CDB0A86F1C7CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings_MessageTypes
struct  MessageTypes_tBB710D61BE06C1C46B66212B22F00D089A3829FA 
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings_MessageTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MessageTypes_tBB710D61BE06C1C46B66212B22F00D089A3829FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser_TOKEN
struct  TOKEN_t731296279CCF3E07F3655C6DCAFBCF0C034B955E 
{
public:
	// System.Int32 GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser_TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_t731296279CCF3E07F3655C6DCAFBCF0C034B955E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_DesignEvent
struct  DesignEvent_t4A6604EC3F9719414F38B9B302E4C58AAA3194B3  : public GameAnalyticsEvent_t75562ADC4039552BE547384DA475FC3DB5EEEC5B
{
public:
	// System.String Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_DesignEvent::eventName
	String_t* ___eventName_0;
	// System.Nullable`1<System.Single> Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_DesignEvent::eventValue
	Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  ___eventValue_1;

public:
	inline static int32_t get_offset_of_eventName_0() { return static_cast<int32_t>(offsetof(DesignEvent_t4A6604EC3F9719414F38B9B302E4C58AAA3194B3, ___eventName_0)); }
	inline String_t* get_eventName_0() const { return ___eventName_0; }
	inline String_t** get_address_of_eventName_0() { return &___eventName_0; }
	inline void set_eventName_0(String_t* value)
	{
		___eventName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventName_0), (void*)value);
	}

	inline static int32_t get_offset_of_eventValue_1() { return static_cast<int32_t>(offsetof(DesignEvent_t4A6604EC3F9719414F38B9B302E4C58AAA3194B3, ___eventValue_1)); }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  get_eventValue_1() const { return ___eventValue_1; }
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * get_address_of_eventValue_1() { return &___eventValue_1; }
	inline void set_eventValue_1(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		___eventValue_1 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings_HelpInfo
struct  HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B 
{
public:
	// System.String GameAnalyticsSDK.Setup.Settings_HelpInfo::Message
	String_t* ___Message_0;
	// GameAnalyticsSDK.Setup.Settings_MessageTypes GameAnalyticsSDK.Setup.Settings_HelpInfo::MsgType
	int32_t ___MsgType_1;
	// GameAnalyticsSDK.Setup.Settings_HelpTypes GameAnalyticsSDK.Setup.Settings_HelpInfo::HelpType
	int32_t ___HelpType_2;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_0), (void*)value);
	}

	inline static int32_t get_offset_of_MsgType_1() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___MsgType_1)); }
	inline int32_t get_MsgType_1() const { return ___MsgType_1; }
	inline int32_t* get_address_of_MsgType_1() { return &___MsgType_1; }
	inline void set_MsgType_1(int32_t value)
	{
		___MsgType_1 = value;
	}

	inline static int32_t get_offset_of_HelpType_2() { return static_cast<int32_t>(offsetof(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B, ___HelpType_2)); }
	inline int32_t get_HelpType_2() const { return ___HelpType_2; }
	inline int32_t* get_address_of_HelpType_2() { return &___HelpType_2; }
	inline void set_HelpType_2(int32_t value)
	{
		___HelpType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke
{
	char* ___Message_0;
	int32_t ___MsgType_1;
	int32_t ___HelpType_2;
};
// Native definition for COM marshalling of GameAnalyticsSDK.Setup.Settings/HelpInfo
struct HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com
{
	Il2CppChar* ___Message_0;
	int32_t ___MsgType_1;
	int32_t ___HelpType_2;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_ProgressEvent
struct  ProgressEvent_tB928D604656BD8B632A240930B14C374CF84D470  : public GameAnalyticsEvent_t75562ADC4039552BE547384DA475FC3DB5EEEC5B
{
public:
	// GameAnalyticsSDK.GAProgressionStatus Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_ProgressEvent::status
	int32_t ___status_0;
	// System.String Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_ProgressEvent::progress
	String_t* ___progress_1;
	// System.Nullable`1<System.Int32> Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_ProgressEvent::score
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___score_2;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(ProgressEvent_tB928D604656BD8B632A240930B14C374CF84D470, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_progress_1() { return static_cast<int32_t>(offsetof(ProgressEvent_tB928D604656BD8B632A240930B14C374CF84D470, ___progress_1)); }
	inline String_t* get_progress_1() const { return ___progress_1; }
	inline String_t** get_address_of_progress_1() { return &___progress_1; }
	inline void set_progress_1(String_t* value)
	{
		___progress_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progress_1), (void*)value);
	}

	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ProgressEvent_tB928D604656BD8B632A240930B14C374CF84D470, ___score_2)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_score_2() const { return ___score_2; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___score_2 = value;
	}
};


// GameAnalyticsSDK.Setup.Settings
struct  Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 GameAnalyticsSDK.Setup.Settings::TotalMessagesSubmitted
	int32_t ___TotalMessagesSubmitted_6;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::TotalMessagesFailed
	int32_t ___TotalMessagesFailed_7;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::DesignMessagesSubmitted
	int32_t ___DesignMessagesSubmitted_8;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::DesignMessagesFailed
	int32_t ___DesignMessagesFailed_9;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::QualityMessagesSubmitted
	int32_t ___QualityMessagesSubmitted_10;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::QualityMessagesFailed
	int32_t ___QualityMessagesFailed_11;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::ErrorMessagesSubmitted
	int32_t ___ErrorMessagesSubmitted_12;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::ErrorMessagesFailed
	int32_t ___ErrorMessagesFailed_13;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::BusinessMessagesSubmitted
	int32_t ___BusinessMessagesSubmitted_14;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::BusinessMessagesFailed
	int32_t ___BusinessMessagesFailed_15;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::UserMessagesSubmitted
	int32_t ___UserMessagesSubmitted_16;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::UserMessagesFailed
	int32_t ___UserMessagesFailed_17;
	// System.String GameAnalyticsSDK.Setup.Settings::CustomArea
	String_t* ___CustomArea_18;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::gameKey
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___gameKey_19;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::secretKey
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___secretKey_20;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::Build
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Build_21;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::SelectedPlatformOrganization
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___SelectedPlatformOrganization_22;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::SelectedPlatformStudio
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___SelectedPlatformStudio_23;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::SelectedPlatformGame
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___SelectedPlatformGame_24;
	// System.Collections.Generic.List`1<System.Int32> GameAnalyticsSDK.Setup.Settings::SelectedPlatformGameID
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___SelectedPlatformGameID_25;
	// System.Collections.Generic.List`1<System.Int32> GameAnalyticsSDK.Setup.Settings::SelectedOrganization
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___SelectedOrganization_26;
	// System.Collections.Generic.List`1<System.Int32> GameAnalyticsSDK.Setup.Settings::SelectedStudio
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___SelectedStudio_27;
	// System.Collections.Generic.List`1<System.Int32> GameAnalyticsSDK.Setup.Settings::SelectedGame
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___SelectedGame_28;
	// System.String GameAnalyticsSDK.Setup.Settings::NewVersion
	String_t* ___NewVersion_29;
	// System.String GameAnalyticsSDK.Setup.Settings::Changes
	String_t* ___Changes_30;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::SignUpOpen
	bool ___SignUpOpen_31;
	// System.String GameAnalyticsSDK.Setup.Settings::StudioName
	String_t* ___StudioName_32;
	// System.String GameAnalyticsSDK.Setup.Settings::GameName
	String_t* ___GameName_33;
	// System.String GameAnalyticsSDK.Setup.Settings::OrganizationName
	String_t* ___OrganizationName_34;
	// System.String GameAnalyticsSDK.Setup.Settings::OrganizationIdentifier
	String_t* ___OrganizationIdentifier_35;
	// System.String GameAnalyticsSDK.Setup.Settings::EmailGA
	String_t* ___EmailGA_36;
	// System.String GameAnalyticsSDK.Setup.Settings::PasswordGA
	String_t* ___PasswordGA_37;
	// System.String GameAnalyticsSDK.Setup.Settings::TokenGA
	String_t* ___TokenGA_38;
	// System.String GameAnalyticsSDK.Setup.Settings::ExpireTime
	String_t* ___ExpireTime_39;
	// System.String GameAnalyticsSDK.Setup.Settings::LoginStatus
	String_t* ___LoginStatus_40;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::JustSignedUp
	bool ___JustSignedUp_41;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::HideSignupWarning
	bool ___HideSignupWarning_42;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::IntroScreen
	bool ___IntroScreen_43;
	// System.Collections.Generic.List`1<GameAnalyticsSDK.Setup.Organization> GameAnalyticsSDK.Setup.Settings::Organizations
	List_1_tD952F6EB7255479FFC3502BD6B167C2953304420 * ___Organizations_44;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::InfoLogEditor
	bool ___InfoLogEditor_45;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::InfoLogBuild
	bool ___InfoLogBuild_46;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::VerboseLogBuild
	bool ___VerboseLogBuild_47;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::UseManualSessionHandling
	bool ___UseManualSessionHandling_48;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::SendExampleGameDataToMyGame
	bool ___SendExampleGameDataToMyGame_49;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::UseIMEI
	bool ___UseIMEI_50;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::InternetConnectivity
	bool ___InternetConnectivity_51;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::CustomDimensions01
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___CustomDimensions01_52;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::CustomDimensions02
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___CustomDimensions02_53;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::CustomDimensions03
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___CustomDimensions03_54;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::ResourceItemTypes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ResourceItemTypes_55;
	// System.Collections.Generic.List`1<System.String> GameAnalyticsSDK.Setup.Settings::ResourceCurrencies
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___ResourceCurrencies_56;
	// UnityEngine.RuntimePlatform GameAnalyticsSDK.Setup.Settings::LastCreatedGamePlatform
	int32_t ___LastCreatedGamePlatform_57;
	// System.Collections.Generic.List`1<UnityEngine.RuntimePlatform> GameAnalyticsSDK.Setup.Settings::Platforms
	List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * ___Platforms_58;
	// GameAnalyticsSDK.Setup.Settings_InspectorStates GameAnalyticsSDK.Setup.Settings::CurrentInspectorState
	int32_t ___CurrentInspectorState_59;
	// System.Collections.Generic.List`1<GameAnalyticsSDK.Setup.Settings_HelpTypes> GameAnalyticsSDK.Setup.Settings::ClosedHints
	List_1_t5361BB3A872F6650CF61E0ED49B5BA4EB9ECA593 * ___ClosedHints_60;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::DisplayHints
	bool ___DisplayHints_61;
	// UnityEngine.Vector2 GameAnalyticsSDK.Setup.Settings::DisplayHintsScrollState
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___DisplayHintsScrollState_62;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::Logo
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___Logo_63;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::UpdateIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___UpdateIcon_64;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::InfoIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___InfoIcon_65;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::DeleteIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___DeleteIcon_66;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::GameIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___GameIcon_67;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::HomeIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___HomeIcon_68;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::InstrumentIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___InstrumentIcon_69;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::QuestionIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___QuestionIcon_70;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::UserIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___UserIcon_71;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::AmazonIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___AmazonIcon_72;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::GooglePlayIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___GooglePlayIcon_73;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::iosIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___iosIcon_74;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::macIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___macIcon_75;
	// UnityEngine.Texture2D GameAnalyticsSDK.Setup.Settings::windowsPhoneIcon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___windowsPhoneIcon_76;
	// UnityEngine.GUIStyle GameAnalyticsSDK.Setup.Settings::SignupButton
	GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * ___SignupButton_77;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::UsePlayerSettingsBuildNumber
	bool ___UsePlayerSettingsBuildNumber_78;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::SubmitErrors
	bool ___SubmitErrors_79;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::MaxErrorCount
	int32_t ___MaxErrorCount_80;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::SubmitFpsAverage
	bool ___SubmitFpsAverage_81;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::SubmitFpsCritical
	bool ___SubmitFpsCritical_82;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::IncludeGooglePlay
	bool ___IncludeGooglePlay_83;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::FpsCriticalThreshold
	int32_t ___FpsCriticalThreshold_84;
	// System.Int32 GameAnalyticsSDK.Setup.Settings::FpsCirticalSubmitInterval
	int32_t ___FpsCirticalSubmitInterval_85;
	// System.Collections.Generic.List`1<System.Boolean> GameAnalyticsSDK.Setup.Settings::PlatformFoldOut
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___PlatformFoldOut_86;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::CustomDimensions01FoldOut
	bool ___CustomDimensions01FoldOut_87;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::CustomDimensions02FoldOut
	bool ___CustomDimensions02FoldOut_88;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::CustomDimensions03FoldOut
	bool ___CustomDimensions03FoldOut_89;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::ResourceItemTypesFoldOut
	bool ___ResourceItemTypesFoldOut_90;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::ResourceCurrenciesFoldOut
	bool ___ResourceCurrenciesFoldOut_91;

public:
	inline static int32_t get_offset_of_TotalMessagesSubmitted_6() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___TotalMessagesSubmitted_6)); }
	inline int32_t get_TotalMessagesSubmitted_6() const { return ___TotalMessagesSubmitted_6; }
	inline int32_t* get_address_of_TotalMessagesSubmitted_6() { return &___TotalMessagesSubmitted_6; }
	inline void set_TotalMessagesSubmitted_6(int32_t value)
	{
		___TotalMessagesSubmitted_6 = value;
	}

	inline static int32_t get_offset_of_TotalMessagesFailed_7() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___TotalMessagesFailed_7)); }
	inline int32_t get_TotalMessagesFailed_7() const { return ___TotalMessagesFailed_7; }
	inline int32_t* get_address_of_TotalMessagesFailed_7() { return &___TotalMessagesFailed_7; }
	inline void set_TotalMessagesFailed_7(int32_t value)
	{
		___TotalMessagesFailed_7 = value;
	}

	inline static int32_t get_offset_of_DesignMessagesSubmitted_8() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___DesignMessagesSubmitted_8)); }
	inline int32_t get_DesignMessagesSubmitted_8() const { return ___DesignMessagesSubmitted_8; }
	inline int32_t* get_address_of_DesignMessagesSubmitted_8() { return &___DesignMessagesSubmitted_8; }
	inline void set_DesignMessagesSubmitted_8(int32_t value)
	{
		___DesignMessagesSubmitted_8 = value;
	}

	inline static int32_t get_offset_of_DesignMessagesFailed_9() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___DesignMessagesFailed_9)); }
	inline int32_t get_DesignMessagesFailed_9() const { return ___DesignMessagesFailed_9; }
	inline int32_t* get_address_of_DesignMessagesFailed_9() { return &___DesignMessagesFailed_9; }
	inline void set_DesignMessagesFailed_9(int32_t value)
	{
		___DesignMessagesFailed_9 = value;
	}

	inline static int32_t get_offset_of_QualityMessagesSubmitted_10() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___QualityMessagesSubmitted_10)); }
	inline int32_t get_QualityMessagesSubmitted_10() const { return ___QualityMessagesSubmitted_10; }
	inline int32_t* get_address_of_QualityMessagesSubmitted_10() { return &___QualityMessagesSubmitted_10; }
	inline void set_QualityMessagesSubmitted_10(int32_t value)
	{
		___QualityMessagesSubmitted_10 = value;
	}

	inline static int32_t get_offset_of_QualityMessagesFailed_11() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___QualityMessagesFailed_11)); }
	inline int32_t get_QualityMessagesFailed_11() const { return ___QualityMessagesFailed_11; }
	inline int32_t* get_address_of_QualityMessagesFailed_11() { return &___QualityMessagesFailed_11; }
	inline void set_QualityMessagesFailed_11(int32_t value)
	{
		___QualityMessagesFailed_11 = value;
	}

	inline static int32_t get_offset_of_ErrorMessagesSubmitted_12() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ErrorMessagesSubmitted_12)); }
	inline int32_t get_ErrorMessagesSubmitted_12() const { return ___ErrorMessagesSubmitted_12; }
	inline int32_t* get_address_of_ErrorMessagesSubmitted_12() { return &___ErrorMessagesSubmitted_12; }
	inline void set_ErrorMessagesSubmitted_12(int32_t value)
	{
		___ErrorMessagesSubmitted_12 = value;
	}

	inline static int32_t get_offset_of_ErrorMessagesFailed_13() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ErrorMessagesFailed_13)); }
	inline int32_t get_ErrorMessagesFailed_13() const { return ___ErrorMessagesFailed_13; }
	inline int32_t* get_address_of_ErrorMessagesFailed_13() { return &___ErrorMessagesFailed_13; }
	inline void set_ErrorMessagesFailed_13(int32_t value)
	{
		___ErrorMessagesFailed_13 = value;
	}

	inline static int32_t get_offset_of_BusinessMessagesSubmitted_14() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___BusinessMessagesSubmitted_14)); }
	inline int32_t get_BusinessMessagesSubmitted_14() const { return ___BusinessMessagesSubmitted_14; }
	inline int32_t* get_address_of_BusinessMessagesSubmitted_14() { return &___BusinessMessagesSubmitted_14; }
	inline void set_BusinessMessagesSubmitted_14(int32_t value)
	{
		___BusinessMessagesSubmitted_14 = value;
	}

	inline static int32_t get_offset_of_BusinessMessagesFailed_15() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___BusinessMessagesFailed_15)); }
	inline int32_t get_BusinessMessagesFailed_15() const { return ___BusinessMessagesFailed_15; }
	inline int32_t* get_address_of_BusinessMessagesFailed_15() { return &___BusinessMessagesFailed_15; }
	inline void set_BusinessMessagesFailed_15(int32_t value)
	{
		___BusinessMessagesFailed_15 = value;
	}

	inline static int32_t get_offset_of_UserMessagesSubmitted_16() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___UserMessagesSubmitted_16)); }
	inline int32_t get_UserMessagesSubmitted_16() const { return ___UserMessagesSubmitted_16; }
	inline int32_t* get_address_of_UserMessagesSubmitted_16() { return &___UserMessagesSubmitted_16; }
	inline void set_UserMessagesSubmitted_16(int32_t value)
	{
		___UserMessagesSubmitted_16 = value;
	}

	inline static int32_t get_offset_of_UserMessagesFailed_17() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___UserMessagesFailed_17)); }
	inline int32_t get_UserMessagesFailed_17() const { return ___UserMessagesFailed_17; }
	inline int32_t* get_address_of_UserMessagesFailed_17() { return &___UserMessagesFailed_17; }
	inline void set_UserMessagesFailed_17(int32_t value)
	{
		___UserMessagesFailed_17 = value;
	}

	inline static int32_t get_offset_of_CustomArea_18() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CustomArea_18)); }
	inline String_t* get_CustomArea_18() const { return ___CustomArea_18; }
	inline String_t** get_address_of_CustomArea_18() { return &___CustomArea_18; }
	inline void set_CustomArea_18(String_t* value)
	{
		___CustomArea_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomArea_18), (void*)value);
	}

	inline static int32_t get_offset_of_gameKey_19() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___gameKey_19)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_gameKey_19() const { return ___gameKey_19; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_gameKey_19() { return &___gameKey_19; }
	inline void set_gameKey_19(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___gameKey_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameKey_19), (void*)value);
	}

	inline static int32_t get_offset_of_secretKey_20() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___secretKey_20)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_secretKey_20() const { return ___secretKey_20; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_secretKey_20() { return &___secretKey_20; }
	inline void set_secretKey_20(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___secretKey_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___secretKey_20), (void*)value);
	}

	inline static int32_t get_offset_of_Build_21() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___Build_21)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Build_21() const { return ___Build_21; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Build_21() { return &___Build_21; }
	inline void set_Build_21(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Build_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Build_21), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedPlatformOrganization_22() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SelectedPlatformOrganization_22)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_SelectedPlatformOrganization_22() const { return ___SelectedPlatformOrganization_22; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_SelectedPlatformOrganization_22() { return &___SelectedPlatformOrganization_22; }
	inline void set_SelectedPlatformOrganization_22(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___SelectedPlatformOrganization_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedPlatformOrganization_22), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedPlatformStudio_23() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SelectedPlatformStudio_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_SelectedPlatformStudio_23() const { return ___SelectedPlatformStudio_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_SelectedPlatformStudio_23() { return &___SelectedPlatformStudio_23; }
	inline void set_SelectedPlatformStudio_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___SelectedPlatformStudio_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedPlatformStudio_23), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedPlatformGame_24() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SelectedPlatformGame_24)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_SelectedPlatformGame_24() const { return ___SelectedPlatformGame_24; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_SelectedPlatformGame_24() { return &___SelectedPlatformGame_24; }
	inline void set_SelectedPlatformGame_24(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___SelectedPlatformGame_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedPlatformGame_24), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedPlatformGameID_25() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SelectedPlatformGameID_25)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_SelectedPlatformGameID_25() const { return ___SelectedPlatformGameID_25; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_SelectedPlatformGameID_25() { return &___SelectedPlatformGameID_25; }
	inline void set_SelectedPlatformGameID_25(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___SelectedPlatformGameID_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedPlatformGameID_25), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedOrganization_26() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SelectedOrganization_26)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_SelectedOrganization_26() const { return ___SelectedOrganization_26; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_SelectedOrganization_26() { return &___SelectedOrganization_26; }
	inline void set_SelectedOrganization_26(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___SelectedOrganization_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedOrganization_26), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedStudio_27() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SelectedStudio_27)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_SelectedStudio_27() const { return ___SelectedStudio_27; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_SelectedStudio_27() { return &___SelectedStudio_27; }
	inline void set_SelectedStudio_27(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___SelectedStudio_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedStudio_27), (void*)value);
	}

	inline static int32_t get_offset_of_SelectedGame_28() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SelectedGame_28)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_SelectedGame_28() const { return ___SelectedGame_28; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_SelectedGame_28() { return &___SelectedGame_28; }
	inline void set_SelectedGame_28(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___SelectedGame_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectedGame_28), (void*)value);
	}

	inline static int32_t get_offset_of_NewVersion_29() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___NewVersion_29)); }
	inline String_t* get_NewVersion_29() const { return ___NewVersion_29; }
	inline String_t** get_address_of_NewVersion_29() { return &___NewVersion_29; }
	inline void set_NewVersion_29(String_t* value)
	{
		___NewVersion_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NewVersion_29), (void*)value);
	}

	inline static int32_t get_offset_of_Changes_30() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___Changes_30)); }
	inline String_t* get_Changes_30() const { return ___Changes_30; }
	inline String_t** get_address_of_Changes_30() { return &___Changes_30; }
	inline void set_Changes_30(String_t* value)
	{
		___Changes_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Changes_30), (void*)value);
	}

	inline static int32_t get_offset_of_SignUpOpen_31() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SignUpOpen_31)); }
	inline bool get_SignUpOpen_31() const { return ___SignUpOpen_31; }
	inline bool* get_address_of_SignUpOpen_31() { return &___SignUpOpen_31; }
	inline void set_SignUpOpen_31(bool value)
	{
		___SignUpOpen_31 = value;
	}

	inline static int32_t get_offset_of_StudioName_32() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___StudioName_32)); }
	inline String_t* get_StudioName_32() const { return ___StudioName_32; }
	inline String_t** get_address_of_StudioName_32() { return &___StudioName_32; }
	inline void set_StudioName_32(String_t* value)
	{
		___StudioName_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StudioName_32), (void*)value);
	}

	inline static int32_t get_offset_of_GameName_33() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___GameName_33)); }
	inline String_t* get_GameName_33() const { return ___GameName_33; }
	inline String_t** get_address_of_GameName_33() { return &___GameName_33; }
	inline void set_GameName_33(String_t* value)
	{
		___GameName_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameName_33), (void*)value);
	}

	inline static int32_t get_offset_of_OrganizationName_34() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___OrganizationName_34)); }
	inline String_t* get_OrganizationName_34() const { return ___OrganizationName_34; }
	inline String_t** get_address_of_OrganizationName_34() { return &___OrganizationName_34; }
	inline void set_OrganizationName_34(String_t* value)
	{
		___OrganizationName_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OrganizationName_34), (void*)value);
	}

	inline static int32_t get_offset_of_OrganizationIdentifier_35() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___OrganizationIdentifier_35)); }
	inline String_t* get_OrganizationIdentifier_35() const { return ___OrganizationIdentifier_35; }
	inline String_t** get_address_of_OrganizationIdentifier_35() { return &___OrganizationIdentifier_35; }
	inline void set_OrganizationIdentifier_35(String_t* value)
	{
		___OrganizationIdentifier_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OrganizationIdentifier_35), (void*)value);
	}

	inline static int32_t get_offset_of_EmailGA_36() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___EmailGA_36)); }
	inline String_t* get_EmailGA_36() const { return ___EmailGA_36; }
	inline String_t** get_address_of_EmailGA_36() { return &___EmailGA_36; }
	inline void set_EmailGA_36(String_t* value)
	{
		___EmailGA_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmailGA_36), (void*)value);
	}

	inline static int32_t get_offset_of_PasswordGA_37() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___PasswordGA_37)); }
	inline String_t* get_PasswordGA_37() const { return ___PasswordGA_37; }
	inline String_t** get_address_of_PasswordGA_37() { return &___PasswordGA_37; }
	inline void set_PasswordGA_37(String_t* value)
	{
		___PasswordGA_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PasswordGA_37), (void*)value);
	}

	inline static int32_t get_offset_of_TokenGA_38() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___TokenGA_38)); }
	inline String_t* get_TokenGA_38() const { return ___TokenGA_38; }
	inline String_t** get_address_of_TokenGA_38() { return &___TokenGA_38; }
	inline void set_TokenGA_38(String_t* value)
	{
		___TokenGA_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TokenGA_38), (void*)value);
	}

	inline static int32_t get_offset_of_ExpireTime_39() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ExpireTime_39)); }
	inline String_t* get_ExpireTime_39() const { return ___ExpireTime_39; }
	inline String_t** get_address_of_ExpireTime_39() { return &___ExpireTime_39; }
	inline void set_ExpireTime_39(String_t* value)
	{
		___ExpireTime_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpireTime_39), (void*)value);
	}

	inline static int32_t get_offset_of_LoginStatus_40() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___LoginStatus_40)); }
	inline String_t* get_LoginStatus_40() const { return ___LoginStatus_40; }
	inline String_t** get_address_of_LoginStatus_40() { return &___LoginStatus_40; }
	inline void set_LoginStatus_40(String_t* value)
	{
		___LoginStatus_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoginStatus_40), (void*)value);
	}

	inline static int32_t get_offset_of_JustSignedUp_41() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___JustSignedUp_41)); }
	inline bool get_JustSignedUp_41() const { return ___JustSignedUp_41; }
	inline bool* get_address_of_JustSignedUp_41() { return &___JustSignedUp_41; }
	inline void set_JustSignedUp_41(bool value)
	{
		___JustSignedUp_41 = value;
	}

	inline static int32_t get_offset_of_HideSignupWarning_42() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___HideSignupWarning_42)); }
	inline bool get_HideSignupWarning_42() const { return ___HideSignupWarning_42; }
	inline bool* get_address_of_HideSignupWarning_42() { return &___HideSignupWarning_42; }
	inline void set_HideSignupWarning_42(bool value)
	{
		___HideSignupWarning_42 = value;
	}

	inline static int32_t get_offset_of_IntroScreen_43() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___IntroScreen_43)); }
	inline bool get_IntroScreen_43() const { return ___IntroScreen_43; }
	inline bool* get_address_of_IntroScreen_43() { return &___IntroScreen_43; }
	inline void set_IntroScreen_43(bool value)
	{
		___IntroScreen_43 = value;
	}

	inline static int32_t get_offset_of_Organizations_44() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___Organizations_44)); }
	inline List_1_tD952F6EB7255479FFC3502BD6B167C2953304420 * get_Organizations_44() const { return ___Organizations_44; }
	inline List_1_tD952F6EB7255479FFC3502BD6B167C2953304420 ** get_address_of_Organizations_44() { return &___Organizations_44; }
	inline void set_Organizations_44(List_1_tD952F6EB7255479FFC3502BD6B167C2953304420 * value)
	{
		___Organizations_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Organizations_44), (void*)value);
	}

	inline static int32_t get_offset_of_InfoLogEditor_45() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___InfoLogEditor_45)); }
	inline bool get_InfoLogEditor_45() const { return ___InfoLogEditor_45; }
	inline bool* get_address_of_InfoLogEditor_45() { return &___InfoLogEditor_45; }
	inline void set_InfoLogEditor_45(bool value)
	{
		___InfoLogEditor_45 = value;
	}

	inline static int32_t get_offset_of_InfoLogBuild_46() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___InfoLogBuild_46)); }
	inline bool get_InfoLogBuild_46() const { return ___InfoLogBuild_46; }
	inline bool* get_address_of_InfoLogBuild_46() { return &___InfoLogBuild_46; }
	inline void set_InfoLogBuild_46(bool value)
	{
		___InfoLogBuild_46 = value;
	}

	inline static int32_t get_offset_of_VerboseLogBuild_47() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___VerboseLogBuild_47)); }
	inline bool get_VerboseLogBuild_47() const { return ___VerboseLogBuild_47; }
	inline bool* get_address_of_VerboseLogBuild_47() { return &___VerboseLogBuild_47; }
	inline void set_VerboseLogBuild_47(bool value)
	{
		___VerboseLogBuild_47 = value;
	}

	inline static int32_t get_offset_of_UseManualSessionHandling_48() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___UseManualSessionHandling_48)); }
	inline bool get_UseManualSessionHandling_48() const { return ___UseManualSessionHandling_48; }
	inline bool* get_address_of_UseManualSessionHandling_48() { return &___UseManualSessionHandling_48; }
	inline void set_UseManualSessionHandling_48(bool value)
	{
		___UseManualSessionHandling_48 = value;
	}

	inline static int32_t get_offset_of_SendExampleGameDataToMyGame_49() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SendExampleGameDataToMyGame_49)); }
	inline bool get_SendExampleGameDataToMyGame_49() const { return ___SendExampleGameDataToMyGame_49; }
	inline bool* get_address_of_SendExampleGameDataToMyGame_49() { return &___SendExampleGameDataToMyGame_49; }
	inline void set_SendExampleGameDataToMyGame_49(bool value)
	{
		___SendExampleGameDataToMyGame_49 = value;
	}

	inline static int32_t get_offset_of_UseIMEI_50() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___UseIMEI_50)); }
	inline bool get_UseIMEI_50() const { return ___UseIMEI_50; }
	inline bool* get_address_of_UseIMEI_50() { return &___UseIMEI_50; }
	inline void set_UseIMEI_50(bool value)
	{
		___UseIMEI_50 = value;
	}

	inline static int32_t get_offset_of_InternetConnectivity_51() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___InternetConnectivity_51)); }
	inline bool get_InternetConnectivity_51() const { return ___InternetConnectivity_51; }
	inline bool* get_address_of_InternetConnectivity_51() { return &___InternetConnectivity_51; }
	inline void set_InternetConnectivity_51(bool value)
	{
		___InternetConnectivity_51 = value;
	}

	inline static int32_t get_offset_of_CustomDimensions01_52() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CustomDimensions01_52)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_CustomDimensions01_52() const { return ___CustomDimensions01_52; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_CustomDimensions01_52() { return &___CustomDimensions01_52; }
	inline void set_CustomDimensions01_52(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___CustomDimensions01_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomDimensions01_52), (void*)value);
	}

	inline static int32_t get_offset_of_CustomDimensions02_53() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CustomDimensions02_53)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_CustomDimensions02_53() const { return ___CustomDimensions02_53; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_CustomDimensions02_53() { return &___CustomDimensions02_53; }
	inline void set_CustomDimensions02_53(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___CustomDimensions02_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomDimensions02_53), (void*)value);
	}

	inline static int32_t get_offset_of_CustomDimensions03_54() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CustomDimensions03_54)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_CustomDimensions03_54() const { return ___CustomDimensions03_54; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_CustomDimensions03_54() { return &___CustomDimensions03_54; }
	inline void set_CustomDimensions03_54(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___CustomDimensions03_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomDimensions03_54), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceItemTypes_55() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ResourceItemTypes_55)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ResourceItemTypes_55() const { return ___ResourceItemTypes_55; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ResourceItemTypes_55() { return &___ResourceItemTypes_55; }
	inline void set_ResourceItemTypes_55(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ResourceItemTypes_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceItemTypes_55), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceCurrencies_56() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ResourceCurrencies_56)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_ResourceCurrencies_56() const { return ___ResourceCurrencies_56; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_ResourceCurrencies_56() { return &___ResourceCurrencies_56; }
	inline void set_ResourceCurrencies_56(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___ResourceCurrencies_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceCurrencies_56), (void*)value);
	}

	inline static int32_t get_offset_of_LastCreatedGamePlatform_57() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___LastCreatedGamePlatform_57)); }
	inline int32_t get_LastCreatedGamePlatform_57() const { return ___LastCreatedGamePlatform_57; }
	inline int32_t* get_address_of_LastCreatedGamePlatform_57() { return &___LastCreatedGamePlatform_57; }
	inline void set_LastCreatedGamePlatform_57(int32_t value)
	{
		___LastCreatedGamePlatform_57 = value;
	}

	inline static int32_t get_offset_of_Platforms_58() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___Platforms_58)); }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * get_Platforms_58() const { return ___Platforms_58; }
	inline List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E ** get_address_of_Platforms_58() { return &___Platforms_58; }
	inline void set_Platforms_58(List_1_t88A2029FA6A2D4504CD69AB6983AAE1D77DA972E * value)
	{
		___Platforms_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Platforms_58), (void*)value);
	}

	inline static int32_t get_offset_of_CurrentInspectorState_59() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CurrentInspectorState_59)); }
	inline int32_t get_CurrentInspectorState_59() const { return ___CurrentInspectorState_59; }
	inline int32_t* get_address_of_CurrentInspectorState_59() { return &___CurrentInspectorState_59; }
	inline void set_CurrentInspectorState_59(int32_t value)
	{
		___CurrentInspectorState_59 = value;
	}

	inline static int32_t get_offset_of_ClosedHints_60() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ClosedHints_60)); }
	inline List_1_t5361BB3A872F6650CF61E0ED49B5BA4EB9ECA593 * get_ClosedHints_60() const { return ___ClosedHints_60; }
	inline List_1_t5361BB3A872F6650CF61E0ED49B5BA4EB9ECA593 ** get_address_of_ClosedHints_60() { return &___ClosedHints_60; }
	inline void set_ClosedHints_60(List_1_t5361BB3A872F6650CF61E0ED49B5BA4EB9ECA593 * value)
	{
		___ClosedHints_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClosedHints_60), (void*)value);
	}

	inline static int32_t get_offset_of_DisplayHints_61() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___DisplayHints_61)); }
	inline bool get_DisplayHints_61() const { return ___DisplayHints_61; }
	inline bool* get_address_of_DisplayHints_61() { return &___DisplayHints_61; }
	inline void set_DisplayHints_61(bool value)
	{
		___DisplayHints_61 = value;
	}

	inline static int32_t get_offset_of_DisplayHintsScrollState_62() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___DisplayHintsScrollState_62)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_DisplayHintsScrollState_62() const { return ___DisplayHintsScrollState_62; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_DisplayHintsScrollState_62() { return &___DisplayHintsScrollState_62; }
	inline void set_DisplayHintsScrollState_62(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___DisplayHintsScrollState_62 = value;
	}

	inline static int32_t get_offset_of_Logo_63() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___Logo_63)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_Logo_63() const { return ___Logo_63; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_Logo_63() { return &___Logo_63; }
	inline void set_Logo_63(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___Logo_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Logo_63), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateIcon_64() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___UpdateIcon_64)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_UpdateIcon_64() const { return ___UpdateIcon_64; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_UpdateIcon_64() { return &___UpdateIcon_64; }
	inline void set_UpdateIcon_64(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___UpdateIcon_64 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UpdateIcon_64), (void*)value);
	}

	inline static int32_t get_offset_of_InfoIcon_65() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___InfoIcon_65)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_InfoIcon_65() const { return ___InfoIcon_65; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_InfoIcon_65() { return &___InfoIcon_65; }
	inline void set_InfoIcon_65(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___InfoIcon_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InfoIcon_65), (void*)value);
	}

	inline static int32_t get_offset_of_DeleteIcon_66() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___DeleteIcon_66)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_DeleteIcon_66() const { return ___DeleteIcon_66; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_DeleteIcon_66() { return &___DeleteIcon_66; }
	inline void set_DeleteIcon_66(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___DeleteIcon_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeleteIcon_66), (void*)value);
	}

	inline static int32_t get_offset_of_GameIcon_67() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___GameIcon_67)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_GameIcon_67() const { return ___GameIcon_67; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_GameIcon_67() { return &___GameIcon_67; }
	inline void set_GameIcon_67(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___GameIcon_67 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameIcon_67), (void*)value);
	}

	inline static int32_t get_offset_of_HomeIcon_68() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___HomeIcon_68)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_HomeIcon_68() const { return ___HomeIcon_68; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_HomeIcon_68() { return &___HomeIcon_68; }
	inline void set_HomeIcon_68(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___HomeIcon_68 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HomeIcon_68), (void*)value);
	}

	inline static int32_t get_offset_of_InstrumentIcon_69() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___InstrumentIcon_69)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_InstrumentIcon_69() const { return ___InstrumentIcon_69; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_InstrumentIcon_69() { return &___InstrumentIcon_69; }
	inline void set_InstrumentIcon_69(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___InstrumentIcon_69 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InstrumentIcon_69), (void*)value);
	}

	inline static int32_t get_offset_of_QuestionIcon_70() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___QuestionIcon_70)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_QuestionIcon_70() const { return ___QuestionIcon_70; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_QuestionIcon_70() { return &___QuestionIcon_70; }
	inline void set_QuestionIcon_70(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___QuestionIcon_70 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuestionIcon_70), (void*)value);
	}

	inline static int32_t get_offset_of_UserIcon_71() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___UserIcon_71)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_UserIcon_71() const { return ___UserIcon_71; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_UserIcon_71() { return &___UserIcon_71; }
	inline void set_UserIcon_71(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___UserIcon_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UserIcon_71), (void*)value);
	}

	inline static int32_t get_offset_of_AmazonIcon_72() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___AmazonIcon_72)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_AmazonIcon_72() const { return ___AmazonIcon_72; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_AmazonIcon_72() { return &___AmazonIcon_72; }
	inline void set_AmazonIcon_72(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___AmazonIcon_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AmazonIcon_72), (void*)value);
	}

	inline static int32_t get_offset_of_GooglePlayIcon_73() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___GooglePlayIcon_73)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_GooglePlayIcon_73() const { return ___GooglePlayIcon_73; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_GooglePlayIcon_73() { return &___GooglePlayIcon_73; }
	inline void set_GooglePlayIcon_73(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___GooglePlayIcon_73 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GooglePlayIcon_73), (void*)value);
	}

	inline static int32_t get_offset_of_iosIcon_74() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___iosIcon_74)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_iosIcon_74() const { return ___iosIcon_74; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_iosIcon_74() { return &___iosIcon_74; }
	inline void set_iosIcon_74(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___iosIcon_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iosIcon_74), (void*)value);
	}

	inline static int32_t get_offset_of_macIcon_75() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___macIcon_75)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_macIcon_75() const { return ___macIcon_75; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_macIcon_75() { return &___macIcon_75; }
	inline void set_macIcon_75(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___macIcon_75 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___macIcon_75), (void*)value);
	}

	inline static int32_t get_offset_of_windowsPhoneIcon_76() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___windowsPhoneIcon_76)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_windowsPhoneIcon_76() const { return ___windowsPhoneIcon_76; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_windowsPhoneIcon_76() { return &___windowsPhoneIcon_76; }
	inline void set_windowsPhoneIcon_76(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___windowsPhoneIcon_76 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowsPhoneIcon_76), (void*)value);
	}

	inline static int32_t get_offset_of_SignupButton_77() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SignupButton_77)); }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * get_SignupButton_77() const { return ___SignupButton_77; }
	inline GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 ** get_address_of_SignupButton_77() { return &___SignupButton_77; }
	inline void set_SignupButton_77(GUIStyle_t29C59470ACD0A35C81EB0615653FD38C455A4726 * value)
	{
		___SignupButton_77 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SignupButton_77), (void*)value);
	}

	inline static int32_t get_offset_of_UsePlayerSettingsBuildNumber_78() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___UsePlayerSettingsBuildNumber_78)); }
	inline bool get_UsePlayerSettingsBuildNumber_78() const { return ___UsePlayerSettingsBuildNumber_78; }
	inline bool* get_address_of_UsePlayerSettingsBuildNumber_78() { return &___UsePlayerSettingsBuildNumber_78; }
	inline void set_UsePlayerSettingsBuildNumber_78(bool value)
	{
		___UsePlayerSettingsBuildNumber_78 = value;
	}

	inline static int32_t get_offset_of_SubmitErrors_79() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SubmitErrors_79)); }
	inline bool get_SubmitErrors_79() const { return ___SubmitErrors_79; }
	inline bool* get_address_of_SubmitErrors_79() { return &___SubmitErrors_79; }
	inline void set_SubmitErrors_79(bool value)
	{
		___SubmitErrors_79 = value;
	}

	inline static int32_t get_offset_of_MaxErrorCount_80() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___MaxErrorCount_80)); }
	inline int32_t get_MaxErrorCount_80() const { return ___MaxErrorCount_80; }
	inline int32_t* get_address_of_MaxErrorCount_80() { return &___MaxErrorCount_80; }
	inline void set_MaxErrorCount_80(int32_t value)
	{
		___MaxErrorCount_80 = value;
	}

	inline static int32_t get_offset_of_SubmitFpsAverage_81() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SubmitFpsAverage_81)); }
	inline bool get_SubmitFpsAverage_81() const { return ___SubmitFpsAverage_81; }
	inline bool* get_address_of_SubmitFpsAverage_81() { return &___SubmitFpsAverage_81; }
	inline void set_SubmitFpsAverage_81(bool value)
	{
		___SubmitFpsAverage_81 = value;
	}

	inline static int32_t get_offset_of_SubmitFpsCritical_82() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___SubmitFpsCritical_82)); }
	inline bool get_SubmitFpsCritical_82() const { return ___SubmitFpsCritical_82; }
	inline bool* get_address_of_SubmitFpsCritical_82() { return &___SubmitFpsCritical_82; }
	inline void set_SubmitFpsCritical_82(bool value)
	{
		___SubmitFpsCritical_82 = value;
	}

	inline static int32_t get_offset_of_IncludeGooglePlay_83() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___IncludeGooglePlay_83)); }
	inline bool get_IncludeGooglePlay_83() const { return ___IncludeGooglePlay_83; }
	inline bool* get_address_of_IncludeGooglePlay_83() { return &___IncludeGooglePlay_83; }
	inline void set_IncludeGooglePlay_83(bool value)
	{
		___IncludeGooglePlay_83 = value;
	}

	inline static int32_t get_offset_of_FpsCriticalThreshold_84() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___FpsCriticalThreshold_84)); }
	inline int32_t get_FpsCriticalThreshold_84() const { return ___FpsCriticalThreshold_84; }
	inline int32_t* get_address_of_FpsCriticalThreshold_84() { return &___FpsCriticalThreshold_84; }
	inline void set_FpsCriticalThreshold_84(int32_t value)
	{
		___FpsCriticalThreshold_84 = value;
	}

	inline static int32_t get_offset_of_FpsCirticalSubmitInterval_85() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___FpsCirticalSubmitInterval_85)); }
	inline int32_t get_FpsCirticalSubmitInterval_85() const { return ___FpsCirticalSubmitInterval_85; }
	inline int32_t* get_address_of_FpsCirticalSubmitInterval_85() { return &___FpsCirticalSubmitInterval_85; }
	inline void set_FpsCirticalSubmitInterval_85(int32_t value)
	{
		___FpsCirticalSubmitInterval_85 = value;
	}

	inline static int32_t get_offset_of_PlatformFoldOut_86() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___PlatformFoldOut_86)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_PlatformFoldOut_86() const { return ___PlatformFoldOut_86; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_PlatformFoldOut_86() { return &___PlatformFoldOut_86; }
	inline void set_PlatformFoldOut_86(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___PlatformFoldOut_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlatformFoldOut_86), (void*)value);
	}

	inline static int32_t get_offset_of_CustomDimensions01FoldOut_87() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CustomDimensions01FoldOut_87)); }
	inline bool get_CustomDimensions01FoldOut_87() const { return ___CustomDimensions01FoldOut_87; }
	inline bool* get_address_of_CustomDimensions01FoldOut_87() { return &___CustomDimensions01FoldOut_87; }
	inline void set_CustomDimensions01FoldOut_87(bool value)
	{
		___CustomDimensions01FoldOut_87 = value;
	}

	inline static int32_t get_offset_of_CustomDimensions02FoldOut_88() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CustomDimensions02FoldOut_88)); }
	inline bool get_CustomDimensions02FoldOut_88() const { return ___CustomDimensions02FoldOut_88; }
	inline bool* get_address_of_CustomDimensions02FoldOut_88() { return &___CustomDimensions02FoldOut_88; }
	inline void set_CustomDimensions02FoldOut_88(bool value)
	{
		___CustomDimensions02FoldOut_88 = value;
	}

	inline static int32_t get_offset_of_CustomDimensions03FoldOut_89() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___CustomDimensions03FoldOut_89)); }
	inline bool get_CustomDimensions03FoldOut_89() const { return ___CustomDimensions03FoldOut_89; }
	inline bool* get_address_of_CustomDimensions03FoldOut_89() { return &___CustomDimensions03FoldOut_89; }
	inline void set_CustomDimensions03FoldOut_89(bool value)
	{
		___CustomDimensions03FoldOut_89 = value;
	}

	inline static int32_t get_offset_of_ResourceItemTypesFoldOut_90() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ResourceItemTypesFoldOut_90)); }
	inline bool get_ResourceItemTypesFoldOut_90() const { return ___ResourceItemTypesFoldOut_90; }
	inline bool* get_address_of_ResourceItemTypesFoldOut_90() { return &___ResourceItemTypesFoldOut_90; }
	inline void set_ResourceItemTypesFoldOut_90(bool value)
	{
		___ResourceItemTypesFoldOut_90 = value;
	}

	inline static int32_t get_offset_of_ResourceCurrenciesFoldOut_91() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10, ___ResourceCurrenciesFoldOut_91)); }
	inline bool get_ResourceCurrenciesFoldOut_91() const { return ___ResourceCurrenciesFoldOut_91; }
	inline bool* get_address_of_ResourceCurrenciesFoldOut_91() { return &___ResourceCurrenciesFoldOut_91; }
	inline void set_ResourceCurrenciesFoldOut_91(bool value)
	{
		___ResourceCurrenciesFoldOut_91 = value;
	}
};

struct Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10_StaticFields
{
public:
	// System.String GameAnalyticsSDK.Setup.Settings::VERSION
	String_t* ___VERSION_4;
	// System.Boolean GameAnalyticsSDK.Setup.Settings::CheckingForUpdates
	bool ___CheckingForUpdates_5;
	// UnityEngine.RuntimePlatform[] GameAnalyticsSDK.Setup.Settings::AvailablePlatforms
	RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* ___AvailablePlatforms_92;

public:
	inline static int32_t get_offset_of_VERSION_4() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10_StaticFields, ___VERSION_4)); }
	inline String_t* get_VERSION_4() const { return ___VERSION_4; }
	inline String_t** get_address_of_VERSION_4() { return &___VERSION_4; }
	inline void set_VERSION_4(String_t* value)
	{
		___VERSION_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VERSION_4), (void*)value);
	}

	inline static int32_t get_offset_of_CheckingForUpdates_5() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10_StaticFields, ___CheckingForUpdates_5)); }
	inline bool get_CheckingForUpdates_5() const { return ___CheckingForUpdates_5; }
	inline bool* get_address_of_CheckingForUpdates_5() { return &___CheckingForUpdates_5; }
	inline void set_CheckingForUpdates_5(bool value)
	{
		___CheckingForUpdates_5 = value;
	}

	inline static int32_t get_offset_of_AvailablePlatforms_92() { return static_cast<int32_t>(offsetof(Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10_StaticFields, ___AvailablePlatforms_92)); }
	inline RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* get_AvailablePlatforms_92() const { return ___AvailablePlatforms_92; }
	inline RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52** get_address_of_AvailablePlatforms_92() { return &___AvailablePlatforms_92; }
	inline void set_AvailablePlatforms_92(RuntimePlatformU5BU5D_tA221FE8D5CE756108CBC39E15F0CB99A0787AD52* value)
	{
		___AvailablePlatforms_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AvailablePlatforms_92), (void*)value);
	}
};


// IosTenjin_DeepLinkHandlerNativeDelegate
struct  DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Tenjin_DeferredDeeplinkDelegate
struct  DeferredDeeplinkDelegate_t17CFB212AC6E86692952F32563F87C3E5499FEED  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DamageSource
struct  DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean DamageSource::_isCausingDamage
	bool ____isCausingDamage_4;
	// System.Single DamageSource::DamageRepeatRate
	float ___DamageRepeatRate_5;
	// System.Int32 DamageSource::DamageAmount
	int32_t ___DamageAmount_6;
	// System.Boolean DamageSource::Repeating
	bool ___Repeating_7;

public:
	inline static int32_t get_offset_of__isCausingDamage_4() { return static_cast<int32_t>(offsetof(DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF, ____isCausingDamage_4)); }
	inline bool get__isCausingDamage_4() const { return ____isCausingDamage_4; }
	inline bool* get_address_of__isCausingDamage_4() { return &____isCausingDamage_4; }
	inline void set__isCausingDamage_4(bool value)
	{
		____isCausingDamage_4 = value;
	}

	inline static int32_t get_offset_of_DamageRepeatRate_5() { return static_cast<int32_t>(offsetof(DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF, ___DamageRepeatRate_5)); }
	inline float get_DamageRepeatRate_5() const { return ___DamageRepeatRate_5; }
	inline float* get_address_of_DamageRepeatRate_5() { return &___DamageRepeatRate_5; }
	inline void set_DamageRepeatRate_5(float value)
	{
		___DamageRepeatRate_5 = value;
	}

	inline static int32_t get_offset_of_DamageAmount_6() { return static_cast<int32_t>(offsetof(DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF, ___DamageAmount_6)); }
	inline int32_t get_DamageAmount_6() const { return ___DamageAmount_6; }
	inline int32_t* get_address_of_DamageAmount_6() { return &___DamageAmount_6; }
	inline void set_DamageAmount_6(int32_t value)
	{
		___DamageAmount_6 = value;
	}

	inline static int32_t get_offset_of_Repeating_7() { return static_cast<int32_t>(offsetof(DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF, ___Repeating_7)); }
	inline bool get_Repeating_7() const { return ___Repeating_7; }
	inline bool* get_address_of_Repeating_7() { return &___Repeating_7; }
	inline void set_Repeating_7(bool value)
	{
		___Repeating_7 = value;
	}
};


// GameAnalyticsSDK.Events.GA_SpecialEvents
struct  GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 GameAnalyticsSDK.Events.GA_SpecialEvents::_frameCountCrit
	int32_t ____frameCountCrit_6;
	// System.Single GameAnalyticsSDK.Events.GA_SpecialEvents::_lastUpdateCrit
	float ____lastUpdateCrit_7;

public:
	inline static int32_t get_offset_of__frameCountCrit_6() { return static_cast<int32_t>(offsetof(GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C, ____frameCountCrit_6)); }
	inline int32_t get__frameCountCrit_6() const { return ____frameCountCrit_6; }
	inline int32_t* get_address_of__frameCountCrit_6() { return &____frameCountCrit_6; }
	inline void set__frameCountCrit_6(int32_t value)
	{
		____frameCountCrit_6 = value;
	}

	inline static int32_t get_offset_of__lastUpdateCrit_7() { return static_cast<int32_t>(offsetof(GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C, ____lastUpdateCrit_7)); }
	inline float get__lastUpdateCrit_7() const { return ____lastUpdateCrit_7; }
	inline float* get_address_of__lastUpdateCrit_7() { return &____lastUpdateCrit_7; }
	inline void set__lastUpdateCrit_7(float value)
	{
		____lastUpdateCrit_7 = value;
	}
};

struct GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C_StaticFields
{
public:
	// System.Int32 GameAnalyticsSDK.Events.GA_SpecialEvents::_frameCountAvg
	int32_t ____frameCountAvg_4;
	// System.Single GameAnalyticsSDK.Events.GA_SpecialEvents::_lastUpdateAvg
	float ____lastUpdateAvg_5;
	// System.Int32 GameAnalyticsSDK.Events.GA_SpecialEvents::_criticalFpsCount
	int32_t ____criticalFpsCount_8;

public:
	inline static int32_t get_offset_of__frameCountAvg_4() { return static_cast<int32_t>(offsetof(GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C_StaticFields, ____frameCountAvg_4)); }
	inline int32_t get__frameCountAvg_4() const { return ____frameCountAvg_4; }
	inline int32_t* get_address_of__frameCountAvg_4() { return &____frameCountAvg_4; }
	inline void set__frameCountAvg_4(int32_t value)
	{
		____frameCountAvg_4 = value;
	}

	inline static int32_t get_offset_of__lastUpdateAvg_5() { return static_cast<int32_t>(offsetof(GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C_StaticFields, ____lastUpdateAvg_5)); }
	inline float get__lastUpdateAvg_5() const { return ____lastUpdateAvg_5; }
	inline float* get_address_of__lastUpdateAvg_5() { return &____lastUpdateAvg_5; }
	inline void set__lastUpdateAvg_5(float value)
	{
		____lastUpdateAvg_5 = value;
	}

	inline static int32_t get_offset_of__criticalFpsCount_8() { return static_cast<int32_t>(offsetof(GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C_StaticFields, ____criticalFpsCount_8)); }
	inline int32_t get__criticalFpsCount_8() const { return ____criticalFpsCount_8; }
	inline int32_t* get_address_of__criticalFpsCount_8() { return &____criticalFpsCount_8; }
	inline void set__criticalFpsCount_8(int32_t value)
	{
		____criticalFpsCount_8 = value;
	}
};


// PlayerController
struct  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator PlayerController::_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ____animator_4;
	// UnityEngine.CharacterController PlayerController::_characterController
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ____characterController_5;
	// System.Single PlayerController::Gravity
	float ___Gravity_6;
	// UnityEngine.Vector3 PlayerController::_moveDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____moveDirection_7;
	// InventoryItemBase PlayerController::mCurrentItem
	InventoryItemBase_tDCFB115B1C5A57124D80A793D9D7A6971E4C3737 * ___mCurrentItem_8;
	// HealthBar PlayerController::mHealthBar
	HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * ___mHealthBar_9;
	// HealthBar PlayerController::mFoodBar
	HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * ___mFoodBar_10;
	// System.Int32 PlayerController::startHealth
	int32_t ___startHealth_11;
	// System.Int32 PlayerController::startFood
	int32_t ___startFood_12;
	// System.Boolean PlayerController::mCanTakeDamage
	bool ___mCanTakeDamage_13;
	// System.Single PlayerController::Speed
	float ___Speed_14;
	// System.Single PlayerController::RotationSpeed
	float ___RotationSpeed_15;
	// Inventory PlayerController::Inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___Inventory_16;
	// UnityEngine.GameObject PlayerController::Hand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Hand_17;
	// HUD PlayerController::Hud
	HUD_t7BAB95FEFCC7E539118E7C066EACE09D2062EFB9 * ___Hud_18;
	// System.Single PlayerController::JumpSpeed
	float ___JumpSpeed_19;
	// System.EventHandler PlayerController::PlayerDied
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___PlayerDied_20;
	// UnityEngine.Events.UnityEvent PlayerController::QuestCompleted
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___QuestCompleted_21;
	// System.Int32 PlayerController::Attack_1_Hash
	int32_t ___Attack_1_Hash_22;
	// System.Int32 PlayerController::Health
	int32_t ___Health_23;
	// System.Int32 PlayerController::Food
	int32_t ___Food_24;
	// System.Single PlayerController::HungerRate
	float ___HungerRate_25;
	// System.Boolean PlayerController::mIsControlEnabled
	bool ___mIsControlEnabled_26;
	// UnityEngine.Vector3 PlayerController::mExternalMovement
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___mExternalMovement_27;
	// InteractableItemBase PlayerController::mInteractItem
	InteractableItemBase_t9EB72982CBC6A62D99A2CF2D84FA557072E5B2F2 * ___mInteractItem_28;

public:
	inline static int32_t get_offset_of__animator_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ____animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get__animator_4() const { return ____animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of__animator_4() { return &____animator_4; }
	inline void set__animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		____animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____animator_4), (void*)value);
	}

	inline static int32_t get_offset_of__characterController_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ____characterController_5)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get__characterController_5() const { return ____characterController_5; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of__characterController_5() { return &____characterController_5; }
	inline void set__characterController_5(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		____characterController_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____characterController_5), (void*)value);
	}

	inline static int32_t get_offset_of_Gravity_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Gravity_6)); }
	inline float get_Gravity_6() const { return ___Gravity_6; }
	inline float* get_address_of_Gravity_6() { return &___Gravity_6; }
	inline void set_Gravity_6(float value)
	{
		___Gravity_6 = value;
	}

	inline static int32_t get_offset_of__moveDirection_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ____moveDirection_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__moveDirection_7() const { return ____moveDirection_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__moveDirection_7() { return &____moveDirection_7; }
	inline void set__moveDirection_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____moveDirection_7 = value;
	}

	inline static int32_t get_offset_of_mCurrentItem_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mCurrentItem_8)); }
	inline InventoryItemBase_tDCFB115B1C5A57124D80A793D9D7A6971E4C3737 * get_mCurrentItem_8() const { return ___mCurrentItem_8; }
	inline InventoryItemBase_tDCFB115B1C5A57124D80A793D9D7A6971E4C3737 ** get_address_of_mCurrentItem_8() { return &___mCurrentItem_8; }
	inline void set_mCurrentItem_8(InventoryItemBase_tDCFB115B1C5A57124D80A793D9D7A6971E4C3737 * value)
	{
		___mCurrentItem_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mCurrentItem_8), (void*)value);
	}

	inline static int32_t get_offset_of_mHealthBar_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mHealthBar_9)); }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * get_mHealthBar_9() const { return ___mHealthBar_9; }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 ** get_address_of_mHealthBar_9() { return &___mHealthBar_9; }
	inline void set_mHealthBar_9(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * value)
	{
		___mHealthBar_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mHealthBar_9), (void*)value);
	}

	inline static int32_t get_offset_of_mFoodBar_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mFoodBar_10)); }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * get_mFoodBar_10() const { return ___mFoodBar_10; }
	inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 ** get_address_of_mFoodBar_10() { return &___mFoodBar_10; }
	inline void set_mFoodBar_10(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * value)
	{
		___mFoodBar_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFoodBar_10), (void*)value);
	}

	inline static int32_t get_offset_of_startHealth_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___startHealth_11)); }
	inline int32_t get_startHealth_11() const { return ___startHealth_11; }
	inline int32_t* get_address_of_startHealth_11() { return &___startHealth_11; }
	inline void set_startHealth_11(int32_t value)
	{
		___startHealth_11 = value;
	}

	inline static int32_t get_offset_of_startFood_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___startFood_12)); }
	inline int32_t get_startFood_12() const { return ___startFood_12; }
	inline int32_t* get_address_of_startFood_12() { return &___startFood_12; }
	inline void set_startFood_12(int32_t value)
	{
		___startFood_12 = value;
	}

	inline static int32_t get_offset_of_mCanTakeDamage_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mCanTakeDamage_13)); }
	inline bool get_mCanTakeDamage_13() const { return ___mCanTakeDamage_13; }
	inline bool* get_address_of_mCanTakeDamage_13() { return &___mCanTakeDamage_13; }
	inline void set_mCanTakeDamage_13(bool value)
	{
		___mCanTakeDamage_13 = value;
	}

	inline static int32_t get_offset_of_Speed_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Speed_14)); }
	inline float get_Speed_14() const { return ___Speed_14; }
	inline float* get_address_of_Speed_14() { return &___Speed_14; }
	inline void set_Speed_14(float value)
	{
		___Speed_14 = value;
	}

	inline static int32_t get_offset_of_RotationSpeed_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___RotationSpeed_15)); }
	inline float get_RotationSpeed_15() const { return ___RotationSpeed_15; }
	inline float* get_address_of_RotationSpeed_15() { return &___RotationSpeed_15; }
	inline void set_RotationSpeed_15(float value)
	{
		___RotationSpeed_15 = value;
	}

	inline static int32_t get_offset_of_Inventory_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Inventory_16)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_Inventory_16() const { return ___Inventory_16; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_Inventory_16() { return &___Inventory_16; }
	inline void set_Inventory_16(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___Inventory_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Inventory_16), (void*)value);
	}

	inline static int32_t get_offset_of_Hand_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Hand_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Hand_17() const { return ___Hand_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Hand_17() { return &___Hand_17; }
	inline void set_Hand_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Hand_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hand_17), (void*)value);
	}

	inline static int32_t get_offset_of_Hud_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Hud_18)); }
	inline HUD_t7BAB95FEFCC7E539118E7C066EACE09D2062EFB9 * get_Hud_18() const { return ___Hud_18; }
	inline HUD_t7BAB95FEFCC7E539118E7C066EACE09D2062EFB9 ** get_address_of_Hud_18() { return &___Hud_18; }
	inline void set_Hud_18(HUD_t7BAB95FEFCC7E539118E7C066EACE09D2062EFB9 * value)
	{
		___Hud_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hud_18), (void*)value);
	}

	inline static int32_t get_offset_of_JumpSpeed_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___JumpSpeed_19)); }
	inline float get_JumpSpeed_19() const { return ___JumpSpeed_19; }
	inline float* get_address_of_JumpSpeed_19() { return &___JumpSpeed_19; }
	inline void set_JumpSpeed_19(float value)
	{
		___JumpSpeed_19 = value;
	}

	inline static int32_t get_offset_of_PlayerDied_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___PlayerDied_20)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_PlayerDied_20() const { return ___PlayerDied_20; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_PlayerDied_20() { return &___PlayerDied_20; }
	inline void set_PlayerDied_20(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___PlayerDied_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerDied_20), (void*)value);
	}

	inline static int32_t get_offset_of_QuestCompleted_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___QuestCompleted_21)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_QuestCompleted_21() const { return ___QuestCompleted_21; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_QuestCompleted_21() { return &___QuestCompleted_21; }
	inline void set_QuestCompleted_21(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___QuestCompleted_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QuestCompleted_21), (void*)value);
	}

	inline static int32_t get_offset_of_Attack_1_Hash_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Attack_1_Hash_22)); }
	inline int32_t get_Attack_1_Hash_22() const { return ___Attack_1_Hash_22; }
	inline int32_t* get_address_of_Attack_1_Hash_22() { return &___Attack_1_Hash_22; }
	inline void set_Attack_1_Hash_22(int32_t value)
	{
		___Attack_1_Hash_22 = value;
	}

	inline static int32_t get_offset_of_Health_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Health_23)); }
	inline int32_t get_Health_23() const { return ___Health_23; }
	inline int32_t* get_address_of_Health_23() { return &___Health_23; }
	inline void set_Health_23(int32_t value)
	{
		___Health_23 = value;
	}

	inline static int32_t get_offset_of_Food_24() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___Food_24)); }
	inline int32_t get_Food_24() const { return ___Food_24; }
	inline int32_t* get_address_of_Food_24() { return &___Food_24; }
	inline void set_Food_24(int32_t value)
	{
		___Food_24 = value;
	}

	inline static int32_t get_offset_of_HungerRate_25() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___HungerRate_25)); }
	inline float get_HungerRate_25() const { return ___HungerRate_25; }
	inline float* get_address_of_HungerRate_25() { return &___HungerRate_25; }
	inline void set_HungerRate_25(float value)
	{
		___HungerRate_25 = value;
	}

	inline static int32_t get_offset_of_mIsControlEnabled_26() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mIsControlEnabled_26)); }
	inline bool get_mIsControlEnabled_26() const { return ___mIsControlEnabled_26; }
	inline bool* get_address_of_mIsControlEnabled_26() { return &___mIsControlEnabled_26; }
	inline void set_mIsControlEnabled_26(bool value)
	{
		___mIsControlEnabled_26 = value;
	}

	inline static int32_t get_offset_of_mExternalMovement_27() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mExternalMovement_27)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_mExternalMovement_27() const { return ___mExternalMovement_27; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_mExternalMovement_27() { return &___mExternalMovement_27; }
	inline void set_mExternalMovement_27(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___mExternalMovement_27 = value;
	}

	inline static int32_t get_offset_of_mInteractItem_28() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___mInteractItem_28)); }
	inline InteractableItemBase_t9EB72982CBC6A62D99A2CF2D84FA557072E5B2F2 * get_mInteractItem_28() const { return ___mInteractItem_28; }
	inline InteractableItemBase_t9EB72982CBC6A62D99A2CF2D84FA557072E5B2F2 ** get_address_of_mInteractItem_28() { return &___mInteractItem_28; }
	inline void set_mInteractItem_28(InteractableItemBase_t9EB72982CBC6A62D99A2CF2D84FA557072E5B2F2 * value)
	{
		___mInteractItem_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInteractItem_28), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// IosTenjin_NativeUtility_StringStringKeyValuePair[]
struct StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  m_Items[1];

public:
	inline StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_1), (void*)NULL);
		#endif
	}
	inline StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_1), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// T[] IosTenjin/NativeUtility::MarshalNativeStructArray<IosTenjin/NativeUtility/StringStringKeyValuePair>(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F* NativeUtility_MarshalNativeStructArray_TisStringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_m4D6339EC38CAB41FA9A7B31C16EB88DFC706A209_gshared (intptr_t ___nativeArrayPtr0, int32_t ___nativeArraySize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void PlayerController::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_TakeDamage_mEECC26BBFABA4FCA111D8857087B9D1043D09C12 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Collections.IEnumerator DamageSource::TakeDamage(PlayerController,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageSource_TakeDamage_mFF8626092767FA882678B05594A618FFEC9920FF (DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * __this, PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player0, float ___repeatRate1, const RuntimeMethod* method);
// System.Boolean PlayerController::get_IsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_get_IsDead_m773FD0888AFA5CD506C6CE5CEA11D52DB3525C40 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m610B55ADDAA130C6DBBF0AC1C2595827FEE78155 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mF6A5BCF283380F713AF9FFF2EEB161DD7C98584D (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8 (TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser/TOKEN GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.String GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m7F445898DA60FF288050CD462D79CBBB2D199C54 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, String_t* ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Object GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::ParseByToken(GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser/TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_mEEA85DF372EF538E4F842C7767B4E28F3280D4AE (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Object GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_mE4A8BB1433C2623F8F60C44EB6D4985E27C5F1DF (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mA56B5F7D20C353FFA8590B7F50CE9C533A0B039D (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m868B22C9422224A383529B03429CD7FA00E61219 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method);
// System.String GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m91F25BA3E55E3E27B0BAB7DB7D83D3789D38A9A1 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650 (String_t* ___s0, int64_t* ___result1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0 (String_t* ___s0, double* ___result1, const RuntimeMethod* method);
// System.Char GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m3154D875E96DEA32D6522BB1A7A1EC84D74C5F6E (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Boolean GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mA5013E5F661DE0F37B4D76C89EEFEBA9978C413E (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mE1A873992F46B4018265C366E0BE9A6DEA2526B6 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mA9423C79B258927AF484E36C749877037693CF18 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m5E9E030DFEBF79D969626D5CAD2E9D175FB45225 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mA32475FD33E28D885B909174CA1B8C5FD69586D8 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m786C47BA79F4D3C62E9FD2DAF27789F25609FDB2 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON/Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m66148FC491BF70FF24E54522AEFD7FB3784888AC (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7 (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C (double* __this, String_t* ___format0, const RuntimeMethod* method);
// GameAnalyticsSDK.Setup.Settings GameAnalyticsSDK.GameAnalytics::get_SettingsGA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10 * GameAnalytics_get_SettingsGA_mE379622B0FC5B3F2F64F9E2AC94A8390E961355B (const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents::CheckCriticalFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GA_SpecialEvents_CheckCriticalFPS_mE7FD6A781262F692F137DE56A8FF15D6AFBB1DA7 (GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents::SubmitFPS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GA_SpecialEvents_SubmitFPS_m336678AB6E67242B21A7D747A502E97F5277D0F7 (const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Single>::get_Value()
inline float Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	return ((  float (*) (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *, const RuntimeMethod*))Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_gshared)(__this, method);
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewDesignEvent(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAnalytics_NewDesignEvent_mDB04E815009FD9B05E39CA7C40CB0FF758323D86 (String_t* ___eventName0, float ___eventValue1, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.GameAnalytics::NewDesignEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAnalytics_NewDesignEvent_m001997B83006147091DF0259370D2EB68FA689FC (String_t* ___eventName0, const RuntimeMethod* method);
// System.Void Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper/GameAnalyticsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAnalyticsEvent__ctor_mE31E1275266BBF4D603326B93913B5527D33257D (GameAnalyticsEvent_t75562ADC4039552BE547384DA475FC3DB5EEEC5B * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_gshared)(__this, method);
}
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GAProgressionStatus,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAnalytics_NewProgressionEvent_mF186FF417B96A97541B6F6768821B1458686D4E8 (int32_t ___progressionStatus0, String_t* ___progression011, int32_t ___score2, const RuntimeMethod* method);
// System.Void GameAnalyticsSDK.GameAnalytics::NewProgressionEvent(GameAnalyticsSDK.GAProgressionStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAnalytics_NewProgressionEvent_m5E30C6FEBE0A3ADEBB2F61AFFE531A3DAC266E67 (int32_t ___progressionStatus0, String_t* ___progression011, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m374496B3B8F3532FC52B465384E6C950DDA79F8B (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// T[] IosTenjin/NativeUtility::MarshalNativeStructArray<IosTenjin/NativeUtility/StringStringKeyValuePair>(System.IntPtr,System.Int32)
inline StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F* NativeUtility_MarshalNativeStructArray_TisStringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_m4D6339EC38CAB41FA9A7B31C16EB88DFC706A209 (intptr_t ___nativeArrayPtr0, int32_t ___nativeArraySize1, const RuntimeMethod* method)
{
	return ((  StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F* (*) (intptr_t, int32_t, const RuntimeMethod*))NativeUtility_MarshalNativeStructArray_TisStringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_m4D6339EC38CAB41FA9A7B31C16EB88DFC706A209_gshared)(___nativeArrayPtr0, ___nativeArraySize1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92 (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Voodoo.Sauce.Internal.Analytics.AnalyticsManager_<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mE0FAD1190D6048EDC602A2243CA90EBA33FA13FC (U3CU3Ec__DisplayClass17_0_t1BEE2CACB4283182FAD4B3FF919879E657F86C7E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Voodoo.Sauce.Internal.Analytics.AnalyticsManager_<>c__DisplayClass17_0::<Initialize>b__0(Voodoo.Sauce.Internal.Analytics.IAnalyticsProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CInitializeU3Eb__0_m415BA3804A8D4005BD6A36F34503C35D8F0B58AE (U3CU3Ec__DisplayClass17_0_t1BEE2CACB4283182FAD4B3FF919879E657F86C7E * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass17_0_U3CInitializeU3Eb__0_m415BA3804A8D4005BD6A36F34503C35D8F0B58AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _analyticsProviders.ForEach(provider => provider.Initialize( consent));
		RuntimeObject* L_0 = ___provider0;
		bool L_1 = __this->get_consent_0();
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void Voodoo.Sauce.Internal.Analytics.IAnalyticsProvider::Initialize(System.Boolean) */, IAnalyticsProvider_t35ECE30C41C0721A0949111A4B61E8E60791C2FF_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DamageSource_<TakeDamage>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeDamageU3Ed__5__ctor_m82A5F9C75EBA05A7182F8800251FF0612EF79215 (U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DamageSource_<TakeDamage>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeDamageU3Ed__5_System_IDisposable_Dispose_m2655E972583C55ADA2656A037EE65B14A0A91004 (U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DamageSource_<TakeDamage>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTakeDamageU3Ed__5_MoveNext_m675D42300164190B1F6F083D0DD432C3EC2D0EE2 (U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTakeDamageU3Ed__5_MoveNext_m675D42300164190B1F6F083D0DD432C3EC2D0EE2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0079;
	}

IL_0020:
	{
		// player.TakeDamage(DamageAmount);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = __this->get_player_2();
		DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_DamageAmount_6();
		NullCheck(L_4);
		PlayerController_TakeDamage_mEECC26BBFABA4FCA111D8857087B9D1043D09C12(L_4, L_6, /*hidden argument*/NULL);
		// TakeDamage(player, repeatRate);
		DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * L_7 = V_1;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = __this->get_player_2();
		float L_9 = __this->get_repeatRate_4();
		NullCheck(L_7);
		DamageSource_TakeDamage_mFF8626092767FA882678B05594A618FFEC9920FF(L_7, L_8, L_9, /*hidden argument*/NULL);
		// if (player.IsDead)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_10 = __this->get_player_2();
		NullCheck(L_10);
		bool L_11 = PlayerController_get_IsDead_m773FD0888AFA5CD506C6CE5CEA11D52DB3525C40(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		// _isCausingDamage = false;
		DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * L_12 = V_1;
		NullCheck(L_12);
		L_12->set__isCausingDamage_4((bool)0);
	}

IL_0058:
	{
		// yield return new WaitForSeconds(repeatRate);
		float L_13 = __this->get_repeatRate_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_14 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_14, L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0072:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0079:
	{
		// while (_isCausingDamage)
		DamageSource_tF50301C799DEB38AB19958CB497087D655FE08CF * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = L_15->get__isCausingDamage_4();
		if (L_16)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DamageSource_<TakeDamage>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeDamageU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF353815B2F0759CBB190C1F6BC97EF5101770300 (U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DamageSource_<TakeDamage>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTakeDamageU3Ed__5_System_Collections_IEnumerator_Reset_mDEB7D638808CDFF1CC8414F215628E8070CC5C39 (U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTakeDamageU3Ed__5_System_Collections_IEnumerator_Reset_mDEB7D638808CDFF1CC8414F215628E8070CC5C39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CTakeDamageU3Ed__5_System_Collections_IEnumerator_Reset_mDEB7D638808CDFF1CC8414F215628E8070CC5C39_RuntimeMethod_var);
	}
}
// System.Object DamageSource_<TakeDamage>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTakeDamageU3Ed__5_System_Collections_IEnumerator_get_Current_m7D5D2E2F8520D6FF7BFA5D6C591CC19A3F185BB5 (U3CTakeDamageU3Ed__5_t6ACE6EF820B4CB93EE7A1A5632D7609FBAFAE99D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::IsWordBreak(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mA5013E5F661DE0F37B4D76C89EEFEBA9978C413E (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_mA5013E5F661DE0F37B4D76C89EEFEBA9978C413E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Char.IsWhiteSpace(c) || WORD_BREAK.IndexOf(c) != -1;
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA);
		int32_t L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral84C1E07F84B6E7BDCC02A904AFEC3BBD2CAE6EAA, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__ctor_m610B55ADDAA130C6DBBF0AC1C2595827FEE78155 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m610B55ADDAA130C6DBBF0AC1C2595827FEE78155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Parser(string jsonString)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// json = new StringReader(jsonString);
		String_t* L_0 = ___jsonString0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		// }
		return;
	}
}
// System.Object GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m6F69266672572538AED8949810B0819929268226 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m6F69266672572538AED8949810B0819929268226_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// using (var instance = new Parser(jsonString))
		String_t* L_0 = ___jsonString0;
		Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * L_1 = (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 *)il2cpp_codegen_object_new(Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5_il2cpp_TypeInfo_var);
		Parser__ctor_m610B55ADDAA130C6DBBF0AC1C2595827FEE78155(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		// return instance.ParseValue();
		Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_mF6A5BCF283380F713AF9FFF2EEB161DD7C98584D(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		// }
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_Dispose_m138B4333A57DE9D6DC1DC8EF44AF885D7B6AECAA (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	{
		// json.Dispose();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_mDF1DCFD8FBE94A453EB2350DB7173027420BA5F8(L_0, /*hidden argument*/NULL);
		// json = null;
		__this->set_json_1((StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)NULL);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::ParseObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * Parser_ParseObject_mA56B5F7D20C353FFA8590B7F50CE9C533A0B039D (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_mA56B5F7D20C353FFA8590B7F50CE9C533A0B039D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// Dictionary<string, object> table = new Dictionary<string, object>();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_0 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_0, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		// switch (NextToken)
		int32_t L_2 = Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0028:
	{
		// return table;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_6 = V_0;
		return L_6;
	}

IL_002a:
	{
		// string name = ParseString();
		String_t* L_7 = Parser_ParseString_m7F445898DA60FF288050CD462D79CBBB2D199C54(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (name == null)
		String_t* L_8 = V_2;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0036:
	{
		// if (NextToken != TOKEN.COLON)
		int32_t L_9 = Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		// return null;
		return (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)NULL;
	}

IL_0041:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_10 = __this->get_json_1();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// table[name] = ParseValue();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_11 = V_0;
		String_t* L_12 = V_2;
		RuntimeObject * L_13 = Parser_ParseValue_mF6A5BCF283380F713AF9FFF2EEB161DD7C98584D(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_mD86FD5EED3CEB42690DDFEB80B2494A5A48A3EB9_RuntimeMethod_var);
		// break;
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::ParseArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Parser_ParseArray_m868B22C9422224A383529B03429CD7FA00E61219 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m868B22C9422224A383529B03429CD7FA00E61219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		// List<object> array = new List<object>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_0, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// var parsing = true;
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		// TOKEN nextToken = NextToken;
		int32_t L_2 = Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		// switch (nextToken)
		int32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		// return null;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)NULL;
	}

IL_002c:
	{
		// parsing = false;
		V_1 = (bool)0;
		// break;
		goto IL_003f;
	}

IL_0030:
	{
		// object value = ParseByToken(nextToken);
		int32_t L_6 = V_2;
		RuntimeObject * L_7 = Parser_ParseByToken_mEEA85DF372EF538E4F842C7767B4E28F3280D4AE(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// array.Add(value);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_8, L_9, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_003f:
	{
		// while (parsing)
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0016;
		}
	}
	{
		// return array;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_11 = V_0;
		return L_11;
	}
}
// System.Object GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::ParseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mF6A5BCF283380F713AF9FFF2EEB161DD7C98584D (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// TOKEN nextToken = NextToken;
		int32_t L_0 = Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// return ParseByToken(nextToken);
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_mEEA85DF372EF538E4F842C7767B4E28F3280D4AE(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::ParseByToken(GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser_TOKEN)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_mEEA85DF372EF538E4F842C7767B4E28F3280D4AE (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_mEEA85DF372EF538E4F842C7767B4E28F3280D4AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// switch (token)
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		// return ParseString();
		String_t* L_1 = Parser_ParseString_m7F445898DA60FF288050CD462D79CBBB2D199C54(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		// return ParseNumber();
		RuntimeObject * L_2 = Parser_ParseNumber_mE4A8BB1433C2623F8F60C44EB6D4985E27C5F1DF(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		// return ParseObject();
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_3 = Parser_ParseObject_mA56B5F7D20C353FFA8590B7F50CE9C533A0B039D(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		// return ParseArray();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_4 = Parser_ParseArray_m868B22C9422224A383529B03429CD7FA00E61219(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		// return true;
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		// return false;
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		// return null;
		return NULL;
	}

IL_0062:
	{
		// return null;
		return NULL;
	}
}
// System.String GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::ParseString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m7F445898DA60FF288050CD462D79CBBB2D199C54 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m7F445898DA60FF288050CD462D79CBBB2D199C54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// StringBuilder s = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		// bool parsing = true;
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_013d;
	}

IL_002e:
	{
		// c = NextChar;
		Il2CppChar L_4 = Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		// switch (c)
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_004b:
	{
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		// parsing = false;
		V_2 = (bool)0;
		// break;
		goto IL_0137;
	}

IL_0060:
	{
		// c = NextChar;
		Il2CppChar L_9 = Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		// switch (c)
		Il2CppChar L_10 = V_1;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_14 = V_1;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_18 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		// s.Append(c);
		StringBuilder_t * L_19 = V_0;
		Il2CppChar L_20 = V_1;
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, L_20, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00c1:
	{
		// s.Append('\b');
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_21, 8, /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00cb:
	{
		// s.Append('\f');
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)12), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00d6:
	{
		// s.Append('\n');
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_23, ((int32_t)10), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00e1:
	{
		// s.Append('\r');
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_24, ((int32_t)13), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00ec:
	{
		// s.Append('\t');
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_25, ((int32_t)9), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_00f7:
	{
		// var hex = new char[4];
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_26 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_26;
		// for (int i = 0; i < 4; i++)
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		// hex[i] = NextChar;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_27 = V_3;
		int32_t L_28 = V_4;
		Il2CppChar L_29 = Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)L_29);
		// for (int i = 0; i < 4; i++)
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0113:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		// s.Append((char)Convert.ToInt32(new string(hex), 16));
		StringBuilder_t * L_32 = V_0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = V_3;
		String_t* L_34 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m21526761291049AC762DEAEA073870C8A8583643(L_34, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_32, (((int32_t)((uint16_t)L_35))), /*hidden argument*/NULL);
		// break;
		goto IL_0137;
	}

IL_012f:
	{
		// s.Append(c);
		StringBuilder_t * L_36 = V_0;
		Il2CppChar L_37 = V_1;
		NullCheck(L_36);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_36, L_37, /*hidden argument*/NULL);
	}

IL_0137:
	{
		// while (parsing)
		bool L_38 = V_2;
		if (L_38)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		// return s.ToString();
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		return L_40;
	}
}
// System.Object GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::ParseNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_mE4A8BB1433C2623F8F60C44EB6D4985E27C5F1DF (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_mE4A8BB1433C2623F8F60C44EB6D4985E27C5F1DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	double V_1 = 0.0;
	int64_t V_2 = 0;
	{
		// string number = NextWord;
		String_t* L_0 = Parser_get_NextWord_m91F25BA3E55E3E27B0BAB7DB7D83D3789D38A9A1(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (number.IndexOf('.') == -1)
		String_t* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_1, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0022;
		}
	}
	{
		// Int64.TryParse(number, out parsedInt);
		String_t* L_3 = V_0;
		Int64_TryParse_m6EA988890D7F9954EA49A7227E60B3C674930650(L_3, (int64_t*)(&V_2), /*hidden argument*/NULL);
		// return parsedInt;
		int64_t L_4 = V_2;
		int64_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0022:
	{
		// Double.TryParse(number, out parsedDouble);
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		Double_TryParse_m9152D976CDFE0B30C7E251DDD04EAD6BBD0800B0(L_7, (double*)(&V_1), /*hidden argument*/NULL);
		// return parsedDouble;
		double L_8 = V_1;
		double L_9 = L_8;
		RuntimeObject * L_10 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::EatWhitespace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mE1A873992F46B4018265C366E0BE9A6DEA2526B6 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_mE1A873992F46B4018265C366E0BE9A6DEA2526B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		// while (Char.IsWhiteSpace(PeekChar))
		Il2CppChar L_3 = Parser_get_PeekChar_m3154D875E96DEA32D6522BB1A7A1EC84D74C5F6E(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Char GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::get_PeekChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m3154D875E96DEA32D6522BB1A7A1EC84D74C5F6E (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m3154D875E96DEA32D6522BB1A7A1EC84D74C5F6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Peek());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::get_NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToChar(json.Read());
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::get_NextWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m91F25BA3E55E3E27B0BAB7DB7D83D3789D38A9A1 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m91F25BA3E55E3E27B0BAB7DB7D83D3789D38A9A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		// StringBuilder word = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		// word.Append(NextChar);
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m4C0A72741C4278F856CABFF1C6DE35D057C66C7C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_1, L_2, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		// while (!IsWordBreak(PeekChar))
		Il2CppChar L_5 = Parser_get_PeekChar_m3154D875E96DEA32D6522BB1A7A1EC84D74C5F6E(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_mA5013E5F661DE0F37B4D76C89EEFEBA9978C413E(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		// return word.ToString();
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser_TOKEN GameAnalyticsSDK.Utilities.GA_MiniJSON_Parser::get_NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934 (Parser_t57BFEB8D759A882ACAE1E664A20D9B910054E1D5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_mFAE903289BD3D14C7E7180CD80D129E81CF1F934_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		// EatWhitespace();
		Parser_EatWhitespace_mE1A873992F46B4018265C366E0BE9A6DEA2526B6(__this, /*hidden argument*/NULL);
		// if (json.Peek() == -1)
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}

IL_0016:
	{
		// switch (PeekChar)
		Il2CppChar L_2 = Parser_get_PeekChar_m3154D875E96DEA32D6522BB1A7A1EC84D74C5F6E(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		// return TOKEN.CURLY_OPEN;
		return (int32_t)(1);
	}

IL_00a9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		// return TOKEN.CURLY_CLOSE;
		return (int32_t)(2);
	}

IL_00b7:
	{
		// return TOKEN.SQUARED_OPEN;
		return (int32_t)(3);
	}

IL_00b9:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_10 = __this->get_json_1();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		// return TOKEN.SQUARED_CLOSE;
		return (int32_t)(4);
	}

IL_00c7:
	{
		// json.Read();
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_11 = __this->get_json_1();
		NullCheck(L_11);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		// return TOKEN.COMMA;
		return (int32_t)(6);
	}

IL_00d5:
	{
		// return TOKEN.STRING;
		return (int32_t)(7);
	}

IL_00d7:
	{
		// return TOKEN.COLON;
		return (int32_t)(5);
	}

IL_00d9:
	{
		// return TOKEN.NUMBER;
		return (int32_t)(8);
	}

IL_00db:
	{
		// switch (NextWord)
		String_t* L_12 = Parser_get_NextWord_m91F25BA3E55E3E27B0BAB7DB7D83D3789D38A9A1(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		String_t* L_13 = V_1;
		bool L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_15 = V_1;
		bool L_16 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_15, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		// return TOKEN.FALSE;
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		// return TOKEN.TRUE;
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		// return TOKEN.NULL;
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		// return TOKEN.NONE;
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer__ctor_mA9423C79B258927AF484E36C749877037693CF18 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_mA9423C79B258927AF484E36C749877037693CF18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Serializer()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// builder = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		// }
		return;
	}
}
// System.String GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m683023D92B5D1CD90D8E41E5484491FFD5B95A93 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m683023D92B5D1CD90D8E41E5484491FFD5B95A93_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var instance = new Serializer();
		Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * L_0 = (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 *)il2cpp_codegen_object_new(Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14_il2cpp_TypeInfo_var);
		Serializer__ctor_mA9423C79B258927AF484E36C749877037693CF18(L_0, /*hidden argument*/NULL);
		// instance.SerializeValue(obj);
		Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m5E9E030DFEBF79D969626D5CAD2E9D175FB45225(L_1, L_2, /*hidden argument*/NULL);
		// return instance.builder.ToString();
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::SerializeValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m5E9E030DFEBF79D969626D5CAD2E9D175FB45225 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m5E9E030DFEBF79D969626D5CAD2E9D175FB45225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		// if (value == null)
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.Append("null");
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// else if ((asStr = value as string) != null)
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// SerializeString(asStr);
		String_t* L_4 = V_2;
		Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// else if (value is bool)
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		// builder.Append((bool)value ? "true" : "false");
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (((*(bool*)((bool*)UnBox(L_7, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// else if ((asList = value as IList) != null)
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		// SerializeArray(asList);
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_mA32475FD33E28D885B909174CA1B8C5FD69586D8(__this, L_10, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0062:
	{
		// else if ((asDict = value as IDictionary) != null)
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// SerializeObject(asDict);
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m786C47BA79F4D3C62E9FD2DAF27789F25609FDB2(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0074:
	{
		// else if (value is char)
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		// SerializeString(new string((char)value, 1));
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m4CBF2A74FB65655B0BB1452CA748E9CF78D974ED(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008f:
	{
		// SerializeOther(value);
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m66148FC491BF70FF24E54522AEFD7FB3784888AC(__this, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::SerializeObject(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m786C47BA79F4D3C62E9FD2DAF27789F25609FDB2 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m786C47BA79F4D3C62E9FD2DAF27789F25609FDB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// bool first = true;
		V_0 = (bool)1;
		// builder.Append('{');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)123), /*hidden argument*/NULL);
		// foreach (object e in obj.Keys)
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			// if (!first)
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			// builder.Append(',');
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			// SerializeString(e.ToString());
			RuntimeObject * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE(__this, L_9, /*hidden argument*/NULL);
			// builder.Append(':');
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_10, ((int32_t)58), /*hidden argument*/NULL);
			// SerializeValue(obj[e]);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m5E9E030DFEBF79D969626D5CAD2E9D175FB45225(__this, L_13, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_005f:
		{
			// foreach (object e in obj.Keys)
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_3;
			if (!L_17)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		// builder.Append('}');
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_19, ((int32_t)125), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::SerializeArray(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mA32475FD33E28D885B909174CA1B8C5FD69586D8 (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_mA32475FD33E28D885B909174CA1B8C5FD69586D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// builder.Append('[');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)91), /*hidden argument*/NULL);
		// bool first = true;
		V_0 = (bool)1;
		// foreach (object obj in anArray)
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			// if (!first)
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			// builder.Append(',');
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			// SerializeValue(obj);
			RuntimeObject * L_7 = V_2;
			Serializer_SerializeValue_m5E9E030DFEBF79D969626D5CAD2E9D175FB45225(__this, L_7, /*hidden argument*/NULL);
			// first = false;
			V_0 = (bool)0;
		}

IL_003a:
		{
			// foreach (object obj in anArray)
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (!L_11)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		// builder.Append(']');
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)93), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::SerializeString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		// builder.Append('\"');
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_0, ((int32_t)34), /*hidden argument*/NULL);
		// char[] charArray = str.ToCharArray();
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_1, /*hidden argument*/NULL);
		// foreach (var c in charArray)
		V_0 = L_2;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		// foreach (var c in charArray)
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// switch (c)
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		// builder.Append("\\\"");
		StringBuilder_t * L_10 = __this->get_builder_0();
		NullCheck(L_10);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_10, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0065:
	{
		// builder.Append("\\\\");
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_11, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_007b:
	{
		// builder.Append("\\b");
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_12, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_0091:
	{
		// builder.Append("\\f");
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_13, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00a7:
	{
		// builder.Append("\\n");
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00ba:
	{
		// builder.Append("\\r");
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_15, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00cd:
	{
		// builder.Append("\\t");
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, /*hidden argument*/NULL);
		// break;
		goto IL_0129;
	}

IL_00e0:
	{
		// int codepoint = Convert.ToInt32(c);
		Il2CppChar L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m0B80BF2883121B16934DF6F71590CAE15442A5BC(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// if ((codepoint >= 32) && (codepoint <= 126))
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		// builder.Append(c);
		StringBuilder_t * L_21 = __this->get_builder_0();
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_21, L_22, /*hidden argument*/NULL);
		// }
		goto IL_0129;
	}

IL_0100:
	{
		// builder.Append("\\u");
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_23, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, /*hidden argument*/NULL);
		// builder.Append(codepoint.ToString("x4"));
		StringBuilder_t * L_24 = __this->get_builder_0();
		String_t* L_25 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(&V_3), _stringLiteralE727BF366E3CC855B808D806440542BF7152AF19, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_012d:
	{
		// foreach (var c in charArray)
		int32_t L_27 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		// builder.Append('\"');
		StringBuilder_t * L_29 = __this->get_builder_0();
		NullCheck(L_29);
		StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_29, ((int32_t)34), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameAnalyticsSDK.Utilities.GA_MiniJSON_Serializer::SerializeOther(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m66148FC491BF70FF24E54522AEFD7FB3784888AC (Serializer_t8723EE3D5C8344148621623DE5DC999F98BEEA14 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m66148FC491BF70FF24E54522AEFD7FB3784888AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// if (value is float)
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		// builder.Append(((float)value).ToString("R"));
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var))));
		String_t* L_3 = Single_ToString_m15F10F2AFF80750906CEFCFB456EBA84F9D2E8D7((float*)(&V_0), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// else if (value is int
		//   || value is uint
		//   || value is long
		//   || value is sbyte
		//   || value is byte
		//   || value is short
		//   || value is ushort
		//   || value is ulong)
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}

IL_0068:
	{
		// builder.Append(value);
		StringBuilder_t * L_12 = __this->get_builder_0();
		RuntimeObject * L_13 = ___value0;
		NullCheck(L_12);
		StringBuilder_Append_m545FFB72A578320B1D6EA3772160353FD62C344F(L_12, L_13, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0076:
	{
		// else if (value is double
		//   || value is decimal)
		RuntimeObject * L_14 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))
		{
			goto IL_00a6;
		}
	}

IL_0086:
	{
		// builder.Append(Convert.ToDouble(value).ToString("R"));
		StringBuilder_t * L_16 = __this->get_builder_0();
		RuntimeObject * L_17 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_18 = Convert_ToDouble_mF6F0642EA16CAB414EEA621DEAA519527DA64284(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = Double_ToString_m01772ACCBAF392BB24F3A8803DF40ADCF148D64C((double*)(&V_1), _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a6:
	{
		// SerializeString(value.ToString());
		RuntimeObject * L_20 = ___value0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		Serializer_SerializeString_m5E0BF1C79B1F1C366F1D47F07638ECAE72AC63EE(__this, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckCriticalFPSRoutineU3Ed__7__ctor_m5669F53B2FB6821D058C5A4ED746F3580FF843DB (U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckCriticalFPSRoutineU3Ed__7_System_IDisposable_Dispose_mEA2E16B522324D8F3FC64C4F2701ADA45EDBAD1B (U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckCriticalFPSRoutineU3Ed__7_MoveNext_m86E0264AB09BB9162CEFE114FC698B6378562F68 (U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCheckCriticalFPSRoutineU3Ed__7_MoveNext_m86E0264AB09BB9162CEFE114FC698B6378562F68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_004c;
	}

IL_0020:
	{
		// yield return new WaitForSeconds(GameAnalytics.SettingsGA.FpsCirticalSubmitInterval);
		Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10 * L_4 = GameAnalytics_get_SettingsGA_mE379622B0FC5B3F2F64F9E2AC94A8390E961355B(/*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = L_4->get_FpsCirticalSubmitInterval_85();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (((float)((float)L_5))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// CheckCriticalFPS();
		GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C * L_7 = V_1;
		NullCheck(L_7);
		GA_SpecialEvents_CheckCriticalFPS_mE7FD6A781262F692F137DE56A8FF15D6AFBB1DA7(L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// while(Application.isPlaying && GameAnalytics.SettingsGA != null &&  GameAnalytics.SettingsGA.SubmitFpsCritical)
		bool L_8 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10 * L_9 = GameAnalytics_get_SettingsGA_mE379622B0FC5B3F2F64F9E2AC94A8390E961355B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10 * L_11 = GameAnalytics_get_SettingsGA_mE379622B0FC5B3F2F64F9E2AC94A8390E961355B(/*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12 = L_11->get_SubmitFpsCritical_82();
		if (L_12)
		{
			goto IL_0020;
		}
	}

IL_006c:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckCriticalFPSRoutineU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m475A92117576D17EE26F579CEF1F1C4D81C35327 (U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckCriticalFPSRoutineU3Ed__7_System_Collections_IEnumerator_Reset_mFB2B0598E6394E18B23F300E6E26ABB4A53EDCCE (U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCheckCriticalFPSRoutineU3Ed__7_System_Collections_IEnumerator_Reset_mFB2B0598E6394E18B23F300E6E26ABB4A53EDCCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CCheckCriticalFPSRoutineU3Ed__7_System_Collections_IEnumerator_Reset_mFB2B0598E6394E18B23F300E6E26ABB4A53EDCCE_RuntimeMethod_var);
	}
}
// System.Object GameAnalyticsSDK.Events.GA_SpecialEvents_<CheckCriticalFPSRoutine>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckCriticalFPSRoutineU3Ed__7_System_Collections_IEnumerator_get_Current_mBD27FA6CB0DA9C3078ACA78AF76DF65B68F018C3 (U3CCheckCriticalFPSRoutineU3Ed__7_tAB6A2CF3701B53254EDE72EC99A3635FCDA121A9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubmitFPSRoutineU3Ed__6__ctor_mFF4537E59818607169372B5F998947E42270F947 (U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubmitFPSRoutineU3Ed__6_System_IDisposable_Dispose_mB210897C97A29CAF21BAF3D20058C1FD3E3FB9D8 (U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSubmitFPSRoutineU3Ed__6_MoveNext_mB95F8C373905C86CD845D427D79E55E3F4A149CA (U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSubmitFPSRoutineU3Ed__6_MoveNext_mB95F8C373905C86CD845D427D79E55E3F4A149CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0032;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_003e;
	}

IL_0019:
	{
		// yield return new WaitForSeconds(30);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (30.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0032:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SubmitFPS();
		IL2CPP_RUNTIME_CLASS_INIT(GA_SpecialEvents_tFE65A5472DA6F66D19188672B5DC7906EF7B830C_il2cpp_TypeInfo_var);
		GA_SpecialEvents_SubmitFPS_m336678AB6E67242B21A7D747A502E97F5277D0F7(/*hidden argument*/NULL);
	}

IL_003e:
	{
		// while(Application.isPlaying && GameAnalytics.SettingsGA != null &&  GameAnalytics.SettingsGA.SubmitFpsAverage)
		bool L_4 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10 * L_5 = GameAnalytics_get_SettingsGA_mE379622B0FC5B3F2F64F9E2AC94A8390E961355B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		Settings_t13B90E81E73ED7528977FA89073A2D4C69FF7C10 * L_7 = GameAnalytics_get_SettingsGA_mE379622B0FC5B3F2F64F9E2AC94A8390E961355B(/*hidden argument*/NULL);
		NullCheck(L_7);
		bool L_8 = L_7->get_SubmitFpsAverage_81();
		if (L_8)
		{
			goto IL_0019;
		}
	}

IL_005e:
	{
		// }
		return (bool)0;
	}
}
// System.Object GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSubmitFPSRoutineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3A34090687EA1F7945952D11F63D34E80F58725C (U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSubmitFPSRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m54A2D539680A5005EB388151B098D1433E18E8B8 (U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSubmitFPSRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m54A2D539680A5005EB388151B098D1433E18E8B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CSubmitFPSRoutineU3Ed__6_System_Collections_IEnumerator_Reset_m54A2D539680A5005EB388151B098D1433E18E8B8_RuntimeMethod_var);
	}
}
// System.Object GameAnalyticsSDK.Events.GA_SpecialEvents_<SubmitFPSRoutine>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSubmitFPSRoutineU3Ed__6_System_Collections_IEnumerator_get_Current_m352D0FBED653ED3587E04735020245AB7280859F (U3CSubmitFPSRoutineU3Ed__6_t47A08869B5C74C2AF0B671F51334F29799214B8A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_DesignEvent::Track()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignEvent_Track_m10650C63F9A7DCE38B02541D1E193E57BFAB2F29 (DesignEvent_t4A6604EC3F9719414F38B9B302E4C58AAA3194B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DesignEvent_Track_m10650C63F9A7DCE38B02541D1E193E57BFAB2F29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (eventValue != null) {
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_0 = __this->get_address_of_eventValue_1();
		bool L_1 = Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_inline((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// GameAnalytics.NewDesignEvent(eventName, (float)eventValue);
		String_t* L_2 = __this->get_eventName_0();
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * L_3 = __this->get_address_of_eventValue_1();
		float L_4 = Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F((Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A *)L_3, /*hidden argument*/Nullable_1_get_Value_mBC700ACC6A8110AF4C3911F6866195856CADA20F_RuntimeMethod_var);
		GameAnalytics_NewDesignEvent_mDB04E815009FD9B05E39CA7C40CB0FF758323D86(L_2, (((float)((float)L_4))), /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_0025:
	{
		// GameAnalytics.NewDesignEvent(eventName);
		String_t* L_5 = __this->get_eventName_0();
		GameAnalytics_NewDesignEvent_m001997B83006147091DF0259370D2EB68FA689FC(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_DesignEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignEvent__ctor_m893F1DE62B9B5B1A7F1E3346DB29C497344C5271 (DesignEvent_t4A6604EC3F9719414F38B9B302E4C58AAA3194B3 * __this, const RuntimeMethod* method)
{
	{
		GameAnalyticsEvent__ctor_mE31E1275266BBF4D603326B93913B5527D33257D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_GameAnalyticsEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAnalyticsEvent__ctor_mE31E1275266BBF4D603326B93913B5527D33257D (GameAnalyticsEvent_t75562ADC4039552BE547384DA475FC3DB5EEEC5B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_ProgressEvent::Track()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressEvent_Track_m35CE2F793D8F5725216F032C57CAEE79D04CFF2C (ProgressEvent_tB928D604656BD8B632A240930B14C374CF84D470 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ProgressEvent_Track_m35CE2F793D8F5725216F032C57CAEE79D04CFF2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score != null) {
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_0 = __this->get_address_of_score_2();
		bool L_1 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_0, /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// GameAnalytics.NewProgressionEvent(status, progress, (int) score);
		int32_t L_2 = __this->get_status_0();
		String_t* L_3 = __this->get_progress_1();
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_4 = __this->get_address_of_score_2();
		int32_t L_5 = Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)L_4, /*hidden argument*/Nullable_1_get_Value_mA0CB54A62D31AFC51F165263F2DB953605F2458D_RuntimeMethod_var);
		GameAnalytics_NewProgressionEvent_mF186FF417B96A97541B6F6768821B1458686D4E8(L_2, L_3, L_5, /*hidden argument*/NULL);
		// } else {
		return;
	}

IL_002a:
	{
		// GameAnalytics.NewProgressionEvent(status, progress);
		int32_t L_6 = __this->get_status_0();
		String_t* L_7 = __this->get_progress_1();
		GameAnalytics_NewProgressionEvent_m5E30C6FEBE0A3ADEBB2F61AFFE531A3DAC266E67(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Voodoo.Sauce.Internal.Analytics.GameAnalyticsWrapper_ProgressEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressEvent__ctor_m316C457C23A6C639B3AAEA160B786A427C99A512 (ProgressEvent_tB928D604656BD8B632A240930B14C374CF84D470 * __this, const RuntimeMethod* method)
{
	{
		GameAnalyticsEvent__ctor_mE31E1275266BBF4D603326B93913B5527D33257D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3 (DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3 * __this, intptr_t ___deepLinkDataPairArray0, int32_t ___deepLinkDataPairCount1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___deepLinkDataPairArray0, ___deepLinkDataPairCount1);

}
// System.Void IosTenjin_DeepLinkHandlerNativeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepLinkHandlerNativeDelegate__ctor_mCA27B23B001C4A58A5F633A5B7738130E4AF4C2F (DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IosTenjin_DeepLinkHandlerNativeDelegate::Invoke(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepLinkHandlerNativeDelegate_Invoke_m401ADE59D2EA879DFD7780331A603A20B5D35560 (DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3 * __this, intptr_t ___deepLinkDataPairArray0, int32_t ___deepLinkDataPairCount1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___deepLinkDataPairArray0, ___deepLinkDataPairCount1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deepLinkDataPairArray0, ___deepLinkDataPairCount1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___deepLinkDataPairArray0, ___deepLinkDataPairCount1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___deepLinkDataPairArray0, ___deepLinkDataPairCount1);
					else
						GenericVirtActionInvoker2< intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___deepLinkDataPairArray0, ___deepLinkDataPairCount1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deepLinkDataPairArray0, ___deepLinkDataPairCount1);
					else
						VirtActionInvoker2< intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deepLinkDataPairArray0, ___deepLinkDataPairCount1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___deepLinkDataPairArray0) - 1), ___deepLinkDataPairCount1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___deepLinkDataPairArray0, ___deepLinkDataPairCount1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult IosTenjin_DeepLinkHandlerNativeDelegate::BeginInvoke(System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeepLinkHandlerNativeDelegate_BeginInvoke_m2D4E93A207132D6991E52745308564E25EA8AB3A (DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3 * __this, intptr_t ___deepLinkDataPairArray0, int32_t ___deepLinkDataPairCount1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeepLinkHandlerNativeDelegate_BeginInvoke_m2D4E93A207132D6991E52745308564E25EA8AB3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___deepLinkDataPairArray0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___deepLinkDataPairCount1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void IosTenjin_DeepLinkHandlerNativeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeepLinkHandlerNativeDelegate_EndInvoke_m8A5E3A996F50BE1C42597D3360E93B902C67E413 (DeepLinkHandlerNativeDelegate_tE40BB263055FAFF0B19C2B626B2D5DD6654FDDA3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.String,System.String> IosTenjin_NativeUtility::MarshalStringStringDictionary(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * NativeUtility_MarshalStringStringDictionary_mCAF157E2332E6CBE59E0E39E9C60B3B00C8B627F (intptr_t ___nativePairArrayPtr0, int32_t ___nativePairArraySize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeUtility_MarshalStringStringDictionary_mCAF157E2332E6CBE59E0E39E9C60B3B00C8B627F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * V_0 = NULL;
	StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F* V_1 = NULL;
	int32_t V_2 = 0;
	StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (nativePairArrayPtr == IntPtr.Zero)
		intptr_t L_0 = ___nativePairArrayPtr0;
		bool L_1 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// throw new ArgumentNullException("nativePairArrayPtr");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, _stringLiteral0211B6903A3FDBABC83758A7DAD8EB530F735851, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NativeUtility_MarshalStringStringDictionary_mCAF157E2332E6CBE59E0E39E9C60B3B00C8B627F_RuntimeMethod_var);
	}

IL_0018:
	{
		// if (nativePairArraySize < 0)
		int32_t L_3 = ___nativePairArraySize1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("nativePairArraySize");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, _stringLiteral025D0C2D0038B5F8E7628D3CD4C4E5E06106CAAE, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NativeUtility_MarshalStringStringDictionary_mCAF157E2332E6CBE59E0E39E9C60B3B00C8B627F_RuntimeMethod_var);
	}

IL_0027:
	{
		// Dictionary<string, string> dictionary = new Dictionary<string, string>(nativePairArraySize);
		int32_t L_5 = ___nativePairArraySize1;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_6 = (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *)il2cpp_codegen_object_new(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m374496B3B8F3532FC52B465384E6C950DDA79F8B(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_m374496B3B8F3532FC52B465384E6C950DDA79F8B_RuntimeMethod_var);
		V_0 = L_6;
		// StringStringKeyValuePair[] pairs = MarshalNativeStructArray<StringStringKeyValuePair>(nativePairArrayPtr, nativePairArraySize);
		intptr_t L_7 = ___nativePairArrayPtr0;
		int32_t L_8 = ___nativePairArraySize1;
		StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F* L_9 = NativeUtility_MarshalNativeStructArray_TisStringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_m4D6339EC38CAB41FA9A7B31C16EB88DFC706A209((intptr_t)L_7, L_8, /*hidden argument*/NativeUtility_MarshalNativeStructArray_TisStringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_m4D6339EC38CAB41FA9A7B31C16EB88DFC706A209_RuntimeMethod_var);
		// foreach (StringStringKeyValuePair pair in pairs) {
		V_1 = L_9;
		V_2 = 0;
		goto IL_0058;
	}

IL_003a:
	{
		// foreach (StringStringKeyValuePair pair in pairs) {
		StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		// dictionary.Add(pair.Key, pair.Value);
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_14 = V_0;
		StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  L_15 = V_3;
		String_t* L_16 = L_15.get_Key_0();
		StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9  L_17 = V_3;
		String_t* L_18 = L_17.get_Value_1();
		NullCheck(L_14);
		Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92(L_14, L_16, L_18, /*hidden argument*/Dictionary_2_Add_mE0EF428186E444BFEAD18AC6810D423EEABB3F92_RuntimeMethod_var);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0058:
	{
		// foreach (StringStringKeyValuePair pair in pairs) {
		int32_t L_20 = V_2;
		StringStringKeyValuePairU5BU5D_tF7C614601CF6E7E8014AFADE1C2D60DE4CDFFB1F* L_21 = V_1;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_003a;
		}
	}
	{
		// return dictionary;
		Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * L_22 = V_0;
		return L_22;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled)
{
	marshaled.___Message_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Message_0());
	marshaled.___MsgType_1 = unmarshaled.get_MsgType_1();
	marshaled.___HelpType_2 = unmarshaled.get_HelpType_2();
}
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke_back(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled)
{
	unmarshaled.set_Message_0(il2cpp_codegen_marshal_string_result(marshaled.___Message_0));
	int32_t unmarshaled_MsgType_temp_1 = 0;
	unmarshaled_MsgType_temp_1 = marshaled.___MsgType_1;
	unmarshaled.set_MsgType_1(unmarshaled_MsgType_temp_1);
	int32_t unmarshaled_HelpType_temp_2 = 0;
	unmarshaled_HelpType_temp_2 = marshaled.___HelpType_2;
	unmarshaled.set_HelpType_2(unmarshaled_HelpType_temp_2);
}
// Conversion method for clean up from marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_pinvoke_cleanup(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Message_0);
	marshaled.___Message_0 = NULL;
}
// Conversion methods for marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled)
{
	marshaled.___Message_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Message_0());
	marshaled.___MsgType_1 = unmarshaled.get_MsgType_1();
	marshaled.___HelpType_2 = unmarshaled.get_HelpType_2();
}
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com_back(const HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled, HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B& unmarshaled)
{
	unmarshaled.set_Message_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Message_0));
	int32_t unmarshaled_MsgType_temp_1 = 0;
	unmarshaled_MsgType_temp_1 = marshaled.___MsgType_1;
	unmarshaled.set_MsgType_1(unmarshaled_MsgType_temp_1);
	int32_t unmarshaled_HelpType_temp_2 = 0;
	unmarshaled_HelpType_temp_2 = marshaled.___HelpType_2;
	unmarshaled.set_HelpType_2(unmarshaled_HelpType_temp_2);
}
// Conversion method for clean up from marshalling of: GameAnalyticsSDK.Setup.Settings/HelpInfo
IL2CPP_EXTERN_C void HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshal_com_cleanup(HelpInfo_t37AB52B173008A11A96E6A616F6CFE18836B5D1B_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Message_0);
	marshaled.___Message_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tenjin_DeferredDeeplinkDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeferredDeeplinkDelegate__ctor_mF81AB61D2C33BFAE78F0263236C08020D48C9BBF (DeferredDeeplinkDelegate_t17CFB212AC6E86692952F32563F87C3E5499FEED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Tenjin_DeferredDeeplinkDelegate::Invoke(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeferredDeeplinkDelegate_Invoke_m21AE305A0903F161471999D22974904EAC194766 (DeferredDeeplinkDelegate_t17CFB212AC6E86692952F32563F87C3E5499FEED * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___deferredLinkData0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___deferredLinkData0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___deferredLinkData0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___deferredLinkData0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___deferredLinkData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___deferredLinkData0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___deferredLinkData0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___deferredLinkData0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___deferredLinkData0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(targetMethod, targetThis, ___deferredLinkData0);
					else
						GenericVirtActionInvoker1< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(targetMethod, targetThis, ___deferredLinkData0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___deferredLinkData0);
					else
						VirtActionInvoker1< Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___deferredLinkData0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___deferredLinkData0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___deferredLinkData0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Tenjin_DeferredDeeplinkDelegate::BeginInvoke(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeferredDeeplinkDelegate_BeginInvoke_m5DEA2598129E23B3913117E62F90C4412DAB0C19 (DeferredDeeplinkDelegate_t17CFB212AC6E86692952F32563F87C3E5499FEED * __this, Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___deferredLinkData0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___deferredLinkData0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Tenjin_DeferredDeeplinkDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeferredDeeplinkDelegate_EndInvoke_m40AEEAB1069472C0B7985BC73C5DF381A75E7C41 (DeferredDeeplinkDelegate_t17CFB212AC6E86692952F32563F87C3E5499FEED * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: IosTenjin/NativeUtility/StringStringKeyValuePair
IL2CPP_EXTERN_C void StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshal_pinvoke(const StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9& unmarshaled, StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_pinvoke& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Key_0());
	marshaled.___Value_1 = il2cpp_codegen_marshal_string(unmarshaled.get_Value_1());
}
IL2CPP_EXTERN_C void StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshal_pinvoke_back(const StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_pinvoke& marshaled, StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9& unmarshaled)
{
	unmarshaled.set_Key_0(il2cpp_codegen_marshal_string_result(marshaled.___Key_0));
	unmarshaled.set_Value_1(il2cpp_codegen_marshal_string_result(marshaled.___Value_1));
}
// Conversion method for clean up from marshalling of: IosTenjin/NativeUtility/StringStringKeyValuePair
IL2CPP_EXTERN_C void StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshal_pinvoke_cleanup(StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Value_1);
	marshaled.___Value_1 = NULL;
}
// Conversion methods for marshalling of: IosTenjin/NativeUtility/StringStringKeyValuePair
IL2CPP_EXTERN_C void StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshal_com(const StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9& unmarshaled, StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_com& marshaled)
{
	marshaled.___Key_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Key_0());
	marshaled.___Value_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Value_1());
}
IL2CPP_EXTERN_C void StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshal_com_back(const StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_com& marshaled, StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9& unmarshaled)
{
	unmarshaled.set_Key_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Key_0));
	unmarshaled.set_Value_1(il2cpp_codegen_marshal_bstring_result(marshaled.___Value_1));
}
// Conversion method for clean up from marshalling of: IosTenjin/NativeUtility/StringStringKeyValuePair
IL2CPP_EXTERN_C void StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshal_com_cleanup(StringStringKeyValuePair_t15ACFEEC33F12F51414CE7767146013211D226E9_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Key_0);
	marshaled.___Key_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Value_1);
	marshaled.___Value_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7897F8E6F5E7968B14AEE7B3B5719B6B3CE4292C_gshared_inline (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
