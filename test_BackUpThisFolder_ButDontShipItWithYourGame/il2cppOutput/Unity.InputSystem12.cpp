#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>
struct IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.Substring>
struct IEnumerator_1_t28314E682493CA936A454DA48BFB000CAF4F5D74;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEqualityComparer_1_tEA6D87A5AB670819FF91305D215B209552281584;
// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>
struct InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588;
// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyCollection_t443F242E6072F26AA8803C1BF50400B0692392C6;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct ValueCollection_tD63A626D1918F702C79B868362E823BDCFD426CD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.InputSystem.Utilities.InternedString,System.Type>[]
struct EntryU5BU5D_t05A444C605D7D354DA1A1A00317821912EB2F4A7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UnityEngine.InputSystem.Composites.AxisComposite
struct AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Composites.ButtonWithOneModifier
struct ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222;
// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
struct ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.InputSystem.Composites.OneModifierComposite
struct OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908;
// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF;
// UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B;
// UnityEngine.InputSystem.Utilities.TypeTable/<>c
struct U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Substring_t2E16755269E6716C22074D6BC0A9099915E67849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
IL2CPP_EXTERN_C String_t* _stringLiteral2900020C8C73B769305C05646CF927B358E92966;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
IL2CPP_EXTERN_C String_t* _stringLiteral8494AF0C90D5A0F8C5D03F528442880CE6820192;
IL2CPP_EXTERN_C String_t* _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
IL2CPP_EXTERN_C String_t* _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
IL2CPP_EXTERN_C String_t* _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7;
IL2CPP_EXTERN_C String_t* _stringLiteralF4D7DE161067DE7FFAB264EC7D3DCF921ADBA5A5;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Substring_get_Item_m278F3C7634F20487F36267C4BD49BC96DAE4CAC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeHelpers_GetGenericTypeArgumentFromHierarchy_m025FA4B06F7A0E607C020A252C7E263BD000C848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSplitU3Ed__9_System_Collections_IEnumerator_Reset_mB5816591871F45CED738B000C124AECD6783056C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTokenizeU3Ed__8_System_Collections_IEnumerator_Reset_m8FB2BAFA8C54922ACD753AA18C5D50CDFC31B3C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t05A444C605D7D354DA1A1A00317821912EB2F4A7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD63A626D1918F702C79B868362E823BDCFD426CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.InputSystem.Utilities.TypeHelpers
struct TypeHelpers_tF2D4804F9906DD09986DC5852EE53402EA9B3FA3  : public RuntimeObject
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

// UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9
struct U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___predicate_5;
	// System.Func`2<System.Char,System.Boolean> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<>3__predicate
	Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* ___U3CU3E3__predicate_6;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<length>5__1
	int32_t ___U3ClengthU3E5__1_7;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<position>5__2
	int32_t ___U3CpositionU3E5__2_8;
	// System.Char UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<ch>5__3
	Il2CppChar ___U3CchU3E5__3_9;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<startPosition>5__4
	int32_t ___U3CstartPositionU3E5__4_10;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::<endPosition>5__5
	int32_t ___U3CendPositionU3E5__5_11;
};

// UnityEngine.InputSystem.Utilities.TypeTable/<>c
struct U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA  : public RuntimeObject
{
};

struct U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable/<>c UnityEngine.InputSystem.Utilities.TypeTable/<>c::<>9
	U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Utilities.TypeTable/<>c::<>9__2_0
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* ___U3CU3E9__2_0_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputBindingCompositeContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext::m_BindingIndex
	int32_t ___m_BindingIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_BindingIndex_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Utilities.TypeTable::table
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.TypeTable
struct TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___table_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460
struct __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394__padding[460];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t22839514DD75372C54DF839115F07CBE22B34BF7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t22839514DD75372C54DF839115F07CBE22B34BF7__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=736
struct __StaticArrayInitTypeSizeU3D736_tEFF273797A7F1F1CF8E4CB8C5070351AF54A491A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D736_tEFF273797A7F1F1CF8E4CB8C5070351AF54A491A__padding[736];
	};
};

// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 
{
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<part>k__BackingField
	int32_t ___U3CpartU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<control>k__BackingField
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_pinvoke
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38_marshaled_com
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___U3CcontrolU3Ek__BackingField_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t* ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF62B85DD2C59D87BA6C8DA02965E1F3203A64E53_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::3FDAE84882EAE42DAA0B28DCB9A2CB495FD22A3F352B399DD7AAE09CB57A1B9D
	__StaticArrayInitTypeSizeU3D68_t22839514DD75372C54DF839115F07CBE22B34BF7 ___3FDAE84882EAE42DAA0B28DCB9A2CB495FD22A3F352B399DD7AAE09CB57A1B9D_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=736 <PrivateImplementationDetails>::8C33E5A06E45E284F11EEF6FD19B5B068157D5303B25D4CDB2E59C2338C3D111
	__StaticArrayInitTypeSizeU3D736_tEFF273797A7F1F1CF8E4CB8C5070351AF54A491A ___8C33E5A06E45E284F11EEF6FD19B5B068157D5303B25D4CDB2E59C2338C3D111_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=460 <PrivateImplementationDetails>::A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66
	__StaticArrayInitTypeSizeU3D460_t4ABB4E2DEDD6BE50A063561639D025CC2BDD5394 ___A9936AC77D07F78E7B0473F80D59F6E15FD898CEF491CA47D4EB1BA2AA6A4E66_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A
	__StaticArrayInitTypeSizeU3D24_t226C5F521B67F6FD3E9C29695114434A267A6141 ___EEAB0A49E323B940CB01CCD3E80D47F1566617F04466CD5D6190ACDBC495CB2A_3;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// UnityEngine.InputSystem.InputBindingComposite
struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0  : public RuntimeObject
{
};

struct InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0_StaticFields
{
	// UnityEngine.InputSystem.Utilities.TypeTable UnityEngine.InputSystem.InputBindingComposite::s_Composites
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E ___s_Composites_0;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_33;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_34;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_35;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_36;
};

struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5_StaticFields
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatBit_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSBit
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSBit_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatInt_6;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUInt
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUInt_8;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatShort_10;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatUShort
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatUShort_12;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatByte_14;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatSByte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatSByte_16;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatLong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatLong_18;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatULong
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatULong_20;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatFloat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatFloat_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatDouble
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatDouble_24;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2_26;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3_27;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatQuaternion
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatQuaternion_28;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Short_29;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Short
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Short_30;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector2Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector2Byte_31;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::FormatVector3Byte
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___FormatVector3Byte_32;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// System.TypeCode
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Composites.AxisComposite/WhichSideWins
struct WhichSideWins_t628E6122D6B0C02EEF82EA347AA5665EB690E862 
{
	// System.Int32 UnityEngine.InputSystem.Composites.AxisComposite/WhichSideWins::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8
struct U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B  : public RuntimeObject
{
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>2__current
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::str
	String_t* ___str_3;
	// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<>3__str
	String_t* ___U3CU3E3__str_4;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<pos>5__1
	int32_t ___U3CposU3E5__1_5;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<length>5__2
	int32_t ___U3ClengthU3E5__2_6;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<endPos>5__3
	int32_t ___U3CendPosU3E5__3_7;
	// System.Int32 UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::<endPos>5__4
	int32_t ___U3CendPosU3E5__4_8;
};

// UnityEngine.InputSystem.Composites.Vector2Composite/Mode
struct Mode_tC3E9CF3E48612D8E2FD67CDBA91095417B9124B6 
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Composites.Vector3Composite/Mode
struct Mode_t32EC4762B4B95EDB16453EDE0DF14640CE841CA0 
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite/Mode::value__
	int32_t ___value___2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.InputSystem.InputBindingComposite`1<System.Single>
struct InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>
struct InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>
struct InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.InputSystem.Composites.OneModifierComposite
struct OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::modifier
	int32_t ___modifier_1;
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::binding
	int32_t ___binding_2;
	// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::m_ValueSizeInBytes
	int32_t ___m_ValueSizeInBytes_3;
	// System.Type UnityEngine.InputSystem.Composites.OneModifierComposite::m_ValueType
	Type_t* ___m_ValueType_4;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.InputSystem.Composites.TwoModifiersComposite
struct TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3  : public InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0
{
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier1
	int32_t ___modifier1_1;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::modifier2
	int32_t ___modifier2_2;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::binding
	int32_t ___binding_3;
	// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueSizeInBytes
	int32_t ___m_ValueSizeInBytes_4;
	// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::m_ValueType
	Type_t* ___m_ValueType_5;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Func`2<System.Char,System.Boolean>
struct Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.InputSystem.Composites.AxisComposite
struct AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.AxisComposite::negative
	int32_t ___negative_1;
	// System.Int32 UnityEngine.InputSystem.Composites.AxisComposite::positive
	int32_t ___positive_2;
	// System.Single UnityEngine.InputSystem.Composites.AxisComposite::minValue
	float ___minValue_3;
	// System.Single UnityEngine.InputSystem.Composites.AxisComposite::maxValue
	float ___maxValue_4;
	// UnityEngine.InputSystem.Composites.AxisComposite/WhichSideWins UnityEngine.InputSystem.Composites.AxisComposite::whichSideWins
	int32_t ___whichSideWins_5;
};

// UnityEngine.InputSystem.Composites.ButtonWithOneModifier
struct ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithOneModifier::modifier
	int32_t ___modifier_1;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithOneModifier::button
	int32_t ___button_2;
};

// UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers
struct ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59  : public InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E
{
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::modifier1
	int32_t ___modifier1_1;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::modifier2
	int32_t ___modifier2_2;
	// System.Int32 UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::button
	int32_t ___button_3;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_18;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_20;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.InputSystem.Composites.Vector2Composite
struct Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908  : public InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector2Composite::right
	int32_t ___right_4;
	// System.Boolean UnityEngine.InputSystem.Composites.Vector2Composite::normalize
	bool ___normalize_5;
	// UnityEngine.InputSystem.Composites.Vector2Composite/Mode UnityEngine.InputSystem.Composites.Vector2Composite::mode
	int32_t ___mode_6;
};

// UnityEngine.InputSystem.Composites.Vector3Composite
struct Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0  : public InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306
{
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::up
	int32_t ___up_1;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::down
	int32_t ___down_2;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::right
	int32_t ___right_4;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::forward
	int32_t ___forward_5;
	// System.Int32 UnityEngine.InputSystem.Composites.Vector3Composite::backward
	int32_t ___backward_6;
	// UnityEngine.InputSystem.Composites.Vector3Composite/Mode UnityEngine.InputSystem.Composites.Vector3Composite::mode
	int32_t ___mode_7;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// TResult System.Func`2<System.Char,System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_gshared_inline (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, Il2CppChar ___arg0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_t443F242E6072F26AA8803C1BF50400B0692392C6* Dictionary_2_get_Keys_m6B4FEC85C78AA00269F440121A5297DB65B6D164_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEA865389B1F3B9B7F55A65C4B937BF1A2F7258AC_gshared (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.InputSystem.Utilities.InternedString,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisRuntimeObject_m6D1E7BE19748636FC77D4F07A11734CCD7C06231_gshared (RuntimeObject* ___source0, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD34AE4C80C1F230BC1EA62AB9020FFA9BC0DE8E0_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31 Dictionary_2_GetEnumerator_m3BF9969257B323347AA34745C6DCD37D1F9BF174_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mC351F7DAFCD1DF4CCFF3E49D092773C72D84C292_gshared (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC Enumerator_get_Current_mB1068DBFCAA4C19D082D5717DF265CBA6D66D4BE_gshared_inline (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4BE8613970A8112E3042718B64AC74A4EF3355BF_gshared (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m725DDAF4C8BD4FBCD106BFFB1B4B5B74D7696281_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m5FF3432937DE0E166259F54A0CFC568A388F7439_gshared (Dictionary_2_t25574638E247E1D55E6ED2A97A5C38F3EBA31BA9* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_gshared (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2 (const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.Substring::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Substring__ctor_m26B51DCD265326C6BCEAD778F0FC45407BB5F745 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeU3Ed__8__ctor_mFCB5DCEF9B0F44B630C8C831ADC12246A0CA2785 (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.Substring> UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.Substring>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_InputSystem_Utilities_SubstringU3E_GetEnumerator_m79F809FB39EEDCBAEBBCB6D0BFC16E86A858C9BE (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Char,System.Boolean>::Invoke(T)
inline bool Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, Il2CppChar ___arg0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F*, Il2CppChar, const RuntimeMethod*))Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_gshared_inline)(__this, ___arg0, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitU3Ed__9__ctor_m531A6132094F2E8117F46518BCD07DBECF2F8B60 (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m60A98974B57E1F33794FE9CC8A472C3E52C09511 (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::get_isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_get_isEmpty_m595F6475C26E9FFE44A503FC412CCB059B0FBC47 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.Substring::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Substring__ctor_m5EF457666A6E65F74FA240D42360D666FD477937 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216 (bool ___condition0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.Substring::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Substring__ctor_mD29CA4E0387A9343B5A0839A92A7AC13468621D9 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_m90DCA9419D3654340F7660D99B85C7F817B3E76F (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_mBACFC276E8FD4DB04E356A41595EA284FC431CC7 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___other0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_m34CEE374E83C2E31E0C90566412EA4B17BEEFA46 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::CompareTo(UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_CompareTo_m73D1F0A207D0D12553B2BD44961097FCAD4F2AA1 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___other0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_inline (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Utilities.InternedString::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternedString_get_length_m4C5C8B69056154F3B5CF7D696A9D72803FC3FAFD (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.InternedString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mC0521D93E3608D6A004D12B1921058A021987CAA (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, int32_t ___comparisonType5, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___other0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::Compare(UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.Substring,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_Compare_mFCC9A87C466F5D4045A5820A9203C3567A43B871 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___left0, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___right1, int32_t ___comparison2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_StartsWith_mCC5D1EC1C8F0CE526DE26CF1A8F21463716EB09E (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.Substring::Substr(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Substring_Substr_mCEF29557E9E2EB77B0FC67DD5894B763D5B08077 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, int32_t ___index0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.Utilities.Substring::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Substring_ToString_m321AF6BA186DB01349CE3C710F1EA773D38FEF6D (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_GetHashCode_m68743D4DB46190219FCBA41BACC476D7083D5986 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::get_index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Substring_get_index_mEF04F0C2A5292FEC77A6DE1C13C81B719C9D3012_inline (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Char UnityEngine.InputSystem.Utilities.Substring::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Substring_get_Item_m278F3C7634F20487F36267C4BD49BC96DAE4CAC4 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_mE4F4E4CC6B936CC61E9BF9F4490F0643911C0D43 (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_m5DA1C329CB63868255C466876EC2452B40E418A9 (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18 (Type_t* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.Type UnityEngine.InputSystem.Utilities.TypeHelpers::GetGenericTypeArgumentFromHierarchy(System.Type,System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeHelpers_GetGenericTypeArgumentFromHierarchy_m025FA4B06F7A0E607C020A252C7E263BD000C848 (Type_t* ___type0, Type_t* ___genericTypeDefinition1, int32_t ___argumentIndex2, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Keys()
inline KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, const RuntimeMethod*))Dictionary_2_get_Keys_m6B4FEC85C78AA00269F440121A5297DB65B6D164_gshared)(__this, method);
}
// System.Void System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6763116FA3257580D87BD903E24793FCD6D82548 (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEA865389B1F3B9B7F55A65C4B937BF1A2F7258AC_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.InputSystem.Utilities.InternedString,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893 (RuntimeObject* ___source0, Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*, const RuntimeMethod*))Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisRuntimeObject_m6D1E7BE19748636FC77D4F07A11734CCD7C06231_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.InputSystem.Utilities.TypeTable::get_names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Utilities.TypeTable::get_internedNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::.ctor()
inline void Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, const RuntimeMethod*))Dictionary_2__ctor_mD34AE4C80C1F230BC1EA62AB9020FFA9BC0DE8E0_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::GetEnumerator()
inline Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m3BF9969257B323347AA34745C6DCD37D1F9BF174_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::Dispose()
inline void Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87 (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE*, const RuntimeMethod*))Enumerator_Dispose_mC351F7DAFCD1DF4CCFF3E49D092773C72D84C292_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Current()
inline KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_inline (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 (*) (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE*, const RuntimeMethod*))Enumerator_get_Current_mB1068DBFCAA4C19D082D5717DF265CBA6D66D4BE_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Value()
inline Type_t* KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_inline (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27* __this, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27*, const RuntimeMethod*))KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::get_Key()
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_inline (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27* __this, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27*, const RuntimeMethod*))KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::MoveNext()
inline bool Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE*, const RuntimeMethod*))Enumerator_MoveNext_m4BE8613970A8112E3042718B64AC74A4EF3355BF_gshared)(__this, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.InternedString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7 (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m725DDAF4C8BD4FBCD106BFFB1B4B5B74D7696281_gshared)(__this, ___key0, ___value1, method);
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::AddTypeRegistration(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860 (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___key0, Type_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, Type_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m5FF3432937DE0E166259F54A0CFC568A388F7439_gshared)(__this, ___key0, ___value1, method);
}
// System.Type UnityEngine.InputSystem.Utilities.TypeTable::LookupTypeRegistration(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Utilities.TypeTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m272D75733C8074A4CB8134DEB9A4BD7442005F5A (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.InputBindingCompositeContext::EvaluateMagnitude(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::get_midPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.Processors.NormalizeProcessor::Normalize(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NormalizeProcessor_Normalize_mEC3981E44FB19990B8D33FB6B1CCDE509FE04A8D (float ___value0, float ___min1, float ___max2, float ___zero3, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::.ctor()
inline void InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8 (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_t2D5E67CAF6C6931B703564ED5FF2CC1D32B9814E*, const RuntimeMethod*))InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue<System.Single>(System.Int32)
inline float InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method)
{
	return ((  float (*) (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390*, int32_t, const RuntimeMethod*))InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_gshared)(__this, ___partNumber0, method);
}
// System.Void UnityEngine.InputSystem.InputBindingCompositeContext::ReadValue(System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460 (void* ___destination0, int64_t ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::DetermineValueTypeAndSize(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Int32,System.Type&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, int32_t ___part1, Type_t** ___valueType2, int32_t* ___valueSizeInBytes3, const RuntimeMethod* method) ;
// System.Object UnityEngine.InputSystem.InputBindingCompositeContext::ReadValueAsObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, int32_t ___partNumber0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding> UnityEngine.InputSystem.InputBindingCompositeContext::get_controls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputBindingCompositeContext_get_controls_m142FECF8374D6E0E3B012C8D376AB913E9634C69 (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::get_part()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::get_control()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A (InputBindingComposite_tA9230435A30FB5B2D4967D6FAE7EFABBBF26C0C0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_mD4C9050E32C089FCE8343E3361EC41BCC1ADB5D5 (float ___up0, float ___down1, float ___left2, float ___right3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Controls.DpadControl::MakeDpadVector(System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 DpadControl_MakeDpadVector_m587FE72C8BF54651CDB4339D0126A49963B08351 (bool ___up0, bool ___down1, bool ___left2, bool ___right3, bool ___normalize4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::.ctor()
inline void InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545 (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_tB7B7EA7F16E4FA573E09983CFE2AE8C7D4616588*, const RuntimeMethod*))InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector3>::.ctor()
inline void InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789 (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306* __this, const RuntimeMethod* method)
{
	((  void (*) (InputBindingComposite_1_t34CD8E199158A65EE0E5DBCE8CC705AF3C4B3306*, const RuntimeMethod*))InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeU3Ed__8__ctor_mFCB5DCEF9B0F44B630C8C831ADC12246A0CA2785 (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeU3Ed__8_System_IDisposable_Dispose_m121A2EBBDA3BE988C3F3B3A39F31F3E8A959FAD2 (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTokenizeU3Ed__8_MoveNext_m8796806F9FDE0FE1825ACD68AE7E705F27DDAF3E (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B34_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_018c;
	}

IL_0022:
	{
		goto IL_0223;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var pos = 0;
		__this->___U3CposU3E5__1_5 = 0;
		// var length = str.Length;
		String_t* L_2 = __this->___str_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		__this->___U3ClengthU3E5__2_6 = L_3;
		goto IL_0238;
	}

IL_004e:
	{
		goto IL_0061;
	}

IL_0051:
	{
		// ++pos;
		int32_t L_4 = __this->___U3CposU3E5__1_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		__this->___U3CposU3E5__1_5 = L_5;
	}

IL_0061:
	{
		// while (pos < length && char.IsWhiteSpace(str[pos]))
		int32_t L_6 = __this->___U3CposU3E5__1_5;
		int32_t L_7 = __this->___U3ClengthU3E5__2_6;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_8 = __this->___str_3;
		int32_t L_9 = __this->___U3CposU3E5__1_5;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_10, NULL);
		G_B12_0 = ((int32_t)(L_11));
		goto IL_0088;
	}

IL_0087:
	{
		G_B12_0 = 0;
	}

IL_0088:
	{
		V_2 = (bool)G_B12_0;
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0051;
		}
	}
	{
		// if (pos == length)
		int32_t L_13 = __this->___U3CposU3E5__1_5;
		int32_t L_14 = __this->___U3ClengthU3E5__2_6;
		V_3 = (bool)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		// break;
		goto IL_024f;
	}

IL_00a3:
	{
		// if (str[pos] == '"')
		String_t* L_16 = __this->___str_3;
		int32_t L_17 = __this->___U3CposU3E5__1_5;
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_16, L_17, NULL);
		V_4 = (bool)((((int32_t)L_18) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_19 = V_4;
		if (!L_19)
		{
			goto IL_01a7;
		}
	}
	{
		// ++pos;
		int32_t L_20 = __this->___U3CposU3E5__1_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_1;
		__this->___U3CposU3E5__1_5 = L_21;
		// var endPos = pos;
		int32_t L_22 = __this->___U3CposU3E5__1_5;
		__this->___U3CendPosU3E5__3_7 = L_22;
		goto IL_0130;
	}

IL_00e0:
	{
		// if (str[endPos] == '\\' && endPos < length - 1)
		String_t* L_23 = __this->___str_3;
		int32_t L_24 = __this->___U3CendPosU3E5__3_7;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_26 = __this->___U3CendPosU3E5__3_7;
		int32_t L_27 = __this->___U3ClengthU3E5__2_6;
		G_B20_0 = ((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_27, 1))))? 1 : 0);
		goto IL_0109;
	}

IL_0108:
	{
		G_B20_0 = 0;
	}

IL_0109:
	{
		V_5 = (bool)G_B20_0;
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_011f;
		}
	}
	{
		// ++endPos;
		int32_t L_29 = __this->___U3CendPosU3E5__3_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_1;
		__this->___U3CendPosU3E5__3_7 = L_30;
	}

IL_011f:
	{
		// ++endPos;
		int32_t L_31 = __this->___U3CendPosU3E5__3_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_1;
		__this->___U3CendPosU3E5__3_7 = L_32;
	}

IL_0130:
	{
		// while (endPos < length && str[endPos] != '\"')
		int32_t L_33 = __this->___U3CendPosU3E5__3_7;
		int32_t L_34 = __this->___U3ClengthU3E5__2_6;
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_0158;
		}
	}
	{
		String_t* L_35 = __this->___str_3;
		int32_t L_36 = __this->___U3CendPosU3E5__3_7;
		NullCheck(L_35);
		Il2CppChar L_37;
		L_37 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_35, L_36, NULL);
		G_B26_0 = ((((int32_t)((((int32_t)L_37) == ((int32_t)((int32_t)34)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0159;
	}

IL_0158:
	{
		G_B26_0 = 0;
	}

IL_0159:
	{
		V_6 = (bool)G_B26_0;
		bool L_38 = V_6;
		if (L_38)
		{
			goto IL_00e0;
		}
	}
	{
		// yield return new Substring(str, pos, endPos - pos);
		String_t* L_39 = __this->___str_3;
		int32_t L_40 = __this->___U3CposU3E5__1_5;
		int32_t L_41 = __this->___U3CendPosU3E5__3_7;
		int32_t L_42 = __this->___U3CposU3E5__1_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_43;
		memset((&L_43), 0, sizeof(L_43));
		Substring__ctor_m26B51DCD265326C6BCEAD778F0FC45407BB5F745((&L_43), L_39, L_40, ((int32_t)il2cpp_codegen_subtract(L_41, L_42)), /*hidden argument*/NULL);
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___m_String_0), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_018c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pos = endPos + 1;
		int32_t L_44 = __this->___U3CendPosU3E5__3_7;
		__this->___U3CposU3E5__1_5 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		goto IL_0237;
	}

IL_01a7:
	{
		// var endPos = pos;
		int32_t L_45 = __this->___U3CposU3E5__1_5;
		__this->___U3CendPosU3E5__4_8 = L_45;
		goto IL_01c6;
	}

IL_01b6:
	{
		// ++endPos;
		int32_t L_46 = __this->___U3CendPosU3E5__4_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_1;
		__this->___U3CendPosU3E5__4_8 = L_47;
	}

IL_01c6:
	{
		// while (endPos < length && !char.IsWhiteSpace(str[endPos]))
		int32_t L_48 = __this->___U3CendPosU3E5__4_8;
		int32_t L_49 = __this->___U3ClengthU3E5__2_6;
		if ((((int32_t)L_48) >= ((int32_t)L_49)))
		{
			goto IL_01ef;
		}
	}
	{
		String_t* L_50 = __this->___str_3;
		int32_t L_51 = __this->___U3CendPosU3E5__4_8;
		NullCheck(L_50);
		Il2CppChar L_52;
		L_52 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_50, L_51, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Char_IsWhiteSpace_m9CE0F6685DB2502ABE106D160F95A287EFC07EF9(L_52, NULL);
		G_B34_0 = ((((int32_t)L_53) == ((int32_t)0))? 1 : 0);
		goto IL_01f0;
	}

IL_01ef:
	{
		G_B34_0 = 0;
	}

IL_01f0:
	{
		V_7 = (bool)G_B34_0;
		bool L_54 = V_7;
		if (L_54)
		{
			goto IL_01b6;
		}
	}
	{
		// yield return new Substring(str, pos, endPos - pos);
		String_t* L_55 = __this->___str_3;
		int32_t L_56 = __this->___U3CposU3E5__1_5;
		int32_t L_57 = __this->___U3CendPosU3E5__4_8;
		int32_t L_58 = __this->___U3CposU3E5__1_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Substring__ctor_m26B51DCD265326C6BCEAD778F0FC45407BB5F745((&L_59), L_55, L_56, ((int32_t)il2cpp_codegen_subtract(L_57, L_58)), /*hidden argument*/NULL);
		__this->___U3CU3E2__current_1 = L_59;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3E2__current_1))->___m_String_0), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0223:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pos = endPos;
		int32_t L_60 = __this->___U3CendPosU3E5__4_8;
		__this->___U3CposU3E5__1_5 = L_60;
	}

IL_0237:
	{
	}

IL_0238:
	{
		// while (pos < length)
		int32_t L_61 = __this->___U3CposU3E5__1_5;
		int32_t L_62 = __this->___U3ClengthU3E5__2_6;
		V_8 = (bool)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_8;
		if (L_63)
		{
			goto IL_004e;
		}
	}

IL_024f:
	{
		// }
		return (bool)0;
	}
}
// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.Substring>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 U3CTokenizeU3Ed__8_System_Collections_Generic_IEnumeratorU3CUnityEngine_InputSystem_Utilities_SubstringU3E_get_Current_mEDA880C925219C930290013867BAE1EEE24AD856 (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) 
{
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenizeU3Ed__8_System_Collections_IEnumerator_Reset_m8FB2BAFA8C54922ACD753AA18C5D50CDFC31B3C8 (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTokenizeU3Ed__8_System_Collections_IEnumerator_Reset_m8FB2BAFA8C54922ACD753AA18C5D50CDFC31B3C8_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeU3Ed__8_System_Collections_IEnumerator_get_Current_mF332A900E71F3D43FC05A69934A2BD162F2D9A5F (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Substring_t2E16755269E6716C22074D6BC0A9099915E67849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = __this->___U3CU3E2__current_1;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_1 = L_0;
		RuntimeObject* L_2 = Box(Substring_t2E16755269E6716C22074D6BC0A9099915E67849_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.Substring> UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.Substring>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_InputSystem_Utilities_SubstringU3E_GetEnumerator_m79F809FB39EEDCBAEBBCB6D0BFC16E86A858C9BE (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* L_3 = (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B*)il2cpp_codegen_object_new(U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CTokenizeU3Ed__8__ctor_mFCB5DCEF9B0F44B630C8C831ADC12246A0CA2785(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* L_4 = V_0;
		String_t* L_5 = __this->___U3CU3E3__str_4;
		NullCheck(L_4);
		L_4->___str_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___str_3), (void*)L_5);
		U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator UnityEngine.InputSystem.Utilities.StringHelpers/<Tokenize>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTokenizeU3Ed__8_System_Collections_IEnumerable_GetEnumerator_m90947DCE3F3BF336F8E7041A66A5FACEED1E5BB2 (U3CTokenizeU3Ed__8_t974A4A167882F66AC70C15513407BB7218E6E64B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CTokenizeU3Ed__8_System_Collections_Generic_IEnumerableU3CUnityEngine_InputSystem_Utilities_SubstringU3E_GetEnumerator_m79F809FB39EEDCBAEBBCB6D0BFC16E86A858C9BE(__this, NULL);
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
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitU3Ed__9__ctor_m531A6132094F2E8117F46518BCD07DBECF2F8B60 (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitU3Ed__9_System_IDisposable_Dispose_mD41FA09A8BBBCF5510D180FB611029B2F2B1845D (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSplitU3Ed__9_MoveNext_m080213910073BC24DF99D9BCFF90A286A185D10E (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0141;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (string.IsNullOrEmpty(str))
		String_t* L_3 = __this->___str_3;
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0034:
	{
		// var length = str.Length;
		String_t* L_6 = __this->___str_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		__this->___U3ClengthU3E5__1_7 = L_7;
		// var position = 0;
		__this->___U3CpositionU3E5__2_8 = 0;
		goto IL_0149;
	}

IL_0051:
	{
		// var ch = str[position];
		String_t* L_8 = __this->___str_3;
		int32_t L_9 = __this->___U3CpositionU3E5__2_8;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		__this->___U3CchU3E5__3_9 = L_10;
		// if (predicate(ch))
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_11 = __this->___predicate_5;
		Il2CppChar L_12 = __this->___U3CchU3E5__3_9;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline(L_11, L_12, NULL);
		V_2 = L_13;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0094;
		}
	}
	{
		// ++position;
		int32_t L_15 = __this->___U3CpositionU3E5__2_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_3;
		__this->___U3CpositionU3E5__2_8 = L_16;
		// continue;
		goto IL_0149;
	}

IL_0094:
	{
		// var startPosition = position;
		int32_t L_17 = __this->___U3CpositionU3E5__2_8;
		__this->___U3CstartPositionU3E5__4_10 = L_17;
		// ++position;
		int32_t L_18 = __this->___U3CpositionU3E5__2_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_3;
		__this->___U3CpositionU3E5__2_8 = L_19;
		goto IL_00f4;
	}

IL_00b2:
	{
		// ch = str[position];
		String_t* L_20 = __this->___str_3;
		int32_t L_21 = __this->___U3CpositionU3E5__2_8;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_20, L_21, NULL);
		__this->___U3CchU3E5__3_9 = L_22;
		// if (predicate(ch))
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_23 = __this->___predicate_5;
		Il2CppChar L_24 = __this->___U3CchU3E5__3_9;
		NullCheck(L_23);
		bool L_25;
		L_25 = Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_inline(L_23, L_24, NULL);
		V_4 = L_25;
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_00e3;
		}
	}
	{
		// break;
		goto IL_0108;
	}

IL_00e3:
	{
		// ++position;
		int32_t L_27 = __this->___U3CpositionU3E5__2_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_3;
		__this->___U3CpositionU3E5__2_8 = L_28;
	}

IL_00f4:
	{
		// while (position < length)
		int32_t L_29 = __this->___U3CpositionU3E5__2_8;
		int32_t L_30 = __this->___U3ClengthU3E5__1_7;
		V_5 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_5;
		if (L_31)
		{
			goto IL_00b2;
		}
	}

IL_0108:
	{
		// var endPosition = position;
		int32_t L_32 = __this->___U3CpositionU3E5__2_8;
		__this->___U3CendPositionU3E5__5_11 = L_32;
		// yield return str.Substring(startPosition, endPosition - startPosition);
		String_t* L_33 = __this->___str_3;
		int32_t L_34 = __this->___U3CstartPositionU3E5__4_10;
		int32_t L_35 = __this->___U3CendPositionU3E5__5_11;
		int32_t L_36 = __this->___U3CstartPositionU3E5__4_10;
		NullCheck(L_33);
		String_t* L_37;
		L_37 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_33, L_34, ((int32_t)il2cpp_codegen_subtract(L_35, L_36)), NULL);
		__this->___U3CU3E2__current_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_37);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0141:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0149:
	{
		// while (position < length)
		int32_t L_38 = __this->___U3CpositionU3E5__2_8;
		int32_t L_39 = __this->___U3ClengthU3E5__1_7;
		V_6 = (bool)((((int32_t)L_38) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_6;
		if (L_40)
		{
			goto IL_0051;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.String UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CSplitU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m76EA356A2DA07E9AD1E26E750F598F7C620D7C2B (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSplitU3Ed__9_System_Collections_IEnumerator_Reset_mB5816591871F45CED738B000C124AECD6783056C (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSplitU3Ed__9_System_Collections_IEnumerator_Reset_mB5816591871F45CED738B000C124AECD6783056C_RuntimeMethod_var)));
	}
}
// System.Object UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitU3Ed__9_System_Collections_IEnumerator_get_Current_mF10D40E241033C8369ABF610410ABFF9F1BD4348 (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m60A98974B57E1F33794FE9CC8A472C3E52C09511 (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_mEC09D20ED666BC3277AC9D16B68AA287E5AFE1B2(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* L_3 = (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF*)il2cpp_codegen_object_new(U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CSplitU3Ed__9__ctor_m531A6132094F2E8117F46518BCD07DBECF2F8B60(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* L_4 = V_0;
		String_t* L_5 = __this->___U3CU3E3__str_4;
		NullCheck(L_4);
		L_4->___str_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___str_3), (void*)L_5);
		U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* L_6 = V_0;
		Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* L_7 = __this->___U3CU3E3__predicate_6;
		NullCheck(L_6);
		L_6->___predicate_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___predicate_5), (void*)L_7);
		U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator UnityEngine.InputSystem.Utilities.StringHelpers/<Split>d__9::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSplitU3Ed__9_System_Collections_IEnumerable_GetEnumerator_mE009151D16A2FC0F1C4D01A3E91691D39A840643 (U3CSplitU3Ed__9_tDF7D6AF6AAF8F188C3A8AC7B3CFA6B382F6D8CDF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSplitU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m60A98974B57E1F33794FE9CC8A472C3E52C09511(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.InputSystem.Utilities.Substring
IL2CPP_EXTERN_C void Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshal_pinvoke(const Substring_t2E16755269E6716C22074D6BC0A9099915E67849& unmarshaled, Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke& marshaled)
{
	marshaled.___m_String_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_String_0);
	marshaled.___m_Index_1 = unmarshaled.___m_Index_1;
	marshaled.___m_Length_2 = unmarshaled.___m_Length_2;
}
IL2CPP_EXTERN_C void Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshal_pinvoke_back(const Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke& marshaled, Substring_t2E16755269E6716C22074D6BC0A9099915E67849& unmarshaled)
{
	unmarshaled.___m_String_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_String_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_String_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_String_0));
	int32_t unmarshaledm_Index_temp_1 = 0;
	unmarshaledm_Index_temp_1 = marshaled.___m_Index_1;
	unmarshaled.___m_Index_1 = unmarshaledm_Index_temp_1;
	int32_t unmarshaledm_Length_temp_2 = 0;
	unmarshaledm_Length_temp_2 = marshaled.___m_Length_2;
	unmarshaled.___m_Length_2 = unmarshaledm_Length_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Utilities.Substring
IL2CPP_EXTERN_C void Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshal_pinvoke_cleanup(Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_String_0);
	marshaled.___m_String_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.InputSystem.Utilities.Substring
IL2CPP_EXTERN_C void Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshal_com(const Substring_t2E16755269E6716C22074D6BC0A9099915E67849& unmarshaled, Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com& marshaled)
{
	marshaled.___m_String_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_String_0);
	marshaled.___m_Index_1 = unmarshaled.___m_Index_1;
	marshaled.___m_Length_2 = unmarshaled.___m_Length_2;
}
IL2CPP_EXTERN_C void Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshal_com_back(const Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com& marshaled, Substring_t2E16755269E6716C22074D6BC0A9099915E67849& unmarshaled)
{
	unmarshaled.___m_String_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_String_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_String_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_String_0));
	int32_t unmarshaledm_Index_temp_1 = 0;
	unmarshaledm_Index_temp_1 = marshaled.___m_Index_1;
	unmarshaled.___m_Index_1 = unmarshaledm_Index_temp_1;
	int32_t unmarshaledm_Length_temp_2 = 0;
	unmarshaledm_Length_temp_2 = marshaled.___m_Length_2;
	unmarshaled.___m_Length_2 = unmarshaledm_Length_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Utilities.Substring
IL2CPP_EXTERN_C void Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshal_com_cleanup(Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_String_0);
	marshaled.___m_String_0 = NULL;
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::get_isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_get_isEmpty_m595F6475C26E9FFE44A503FC412CCB059B0FBC47 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) 
{
	{
		// public bool isEmpty => m_Length == 0;
		int32_t L_0 = __this->___m_Length_2;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Substring_get_isEmpty_m595F6475C26E9FFE44A503FC412CCB059B0FBC47_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	bool _returnValue;
	_returnValue = Substring_get_isEmpty_m595F6475C26E9FFE44A503FC412CCB059B0FBC47(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.Utilities.Substring::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Substring__ctor_m5EF457666A6E65F74FA240D42360D666FD477937 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// m_String = str;
		String_t* L_0 = ___str0;
		__this->___m_String_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_String_0), (void*)L_0);
		// m_Index = 0;
		__this->___m_Index_1 = 0;
		// if (str != null)
		String_t* L_1 = ___str0;
		V_0 = (bool)((!(((RuntimeObject*)(String_t*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// m_Length = str.Length;
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		__this->___m_Length_2 = L_4;
		goto IL_002c;
	}

IL_0025:
	{
		// m_Length = 0;
		__this->___m_Length_2 = 0;
	}

IL_002c:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Substring__ctor_m5EF457666A6E65F74FA240D42360D666FD477937_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	Substring__ctor_m5EF457666A6E65F74FA240D42360D666FD477937(_thisAdjusted, ___str0, method);
}
// System.Void UnityEngine.InputSystem.Utilities.Substring::.ctor(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Substring__ctor_m26B51DCD265326C6BCEAD778F0FC45407BB5F745 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// Debug.Assert(str == null || index < str.Length);
		String_t* L_0 = ___str0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index1;
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)G_B3_0, NULL);
		// Debug.Assert(str != null || length == 0);
		String_t* L_4 = ___str0;
		if (L_4)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = ___length2;
		G_B6_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B6_0 = 1;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)G_B6_0, NULL);
		// m_String = str;
		String_t* L_6 = ___str0;
		__this->___m_String_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_String_0), (void*)L_6);
		// m_Index = index;
		int32_t L_7 = ___index1;
		__this->___m_Index_1 = L_7;
		// m_Length = length;
		int32_t L_8 = ___length2;
		__this->___m_Length_2 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Substring__ctor_m26B51DCD265326C6BCEAD778F0FC45407BB5F745_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	Substring__ctor_m26B51DCD265326C6BCEAD778F0FC45407BB5F745(_thisAdjusted, ___str0, ___index1, ___length2, method);
}
// System.Void UnityEngine.InputSystem.Utilities.Substring::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Substring__ctor_mD29CA4E0387A9343B5A0839A92A7AC13468621D9 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// Debug.Assert(str == null || index < str.Length);
		String_t* L_0 = ___str0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index1;
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		G_B3_0 = ((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mC95931BE797761A2D7800908C0BA4B41D68B3216((bool)G_B3_0, NULL);
		// m_String = str;
		String_t* L_4 = ___str0;
		__this->___m_String_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_String_0), (void*)L_4);
		// m_Index = index;
		int32_t L_5 = ___index1;
		__this->___m_Index_1 = L_5;
		// m_Length = str.Length - index;
		String_t* L_6 = ___str0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		int32_t L_8 = ___index1;
		__this->___m_Length_2 = ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Substring__ctor_mD29CA4E0387A9343B5A0839A92A7AC13468621D9_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, int32_t ___index1, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	Substring__ctor_mD29CA4E0387A9343B5A0839A92A7AC13468621D9(_thisAdjusted, ___str0, ___index1, method);
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_m34CEE374E83C2E31E0C90566412EA4B17BEEFA46 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Substring_t2E16755269E6716C22074D6BC0A9099915E67849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if (obj is Substring other)
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Substring_t2E16755269E6716C22074D6BC0A9099915E67849_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((*(Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)((Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)(Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)UnBox(L_1, Substring_t2E16755269E6716C22074D6BC0A9099915E67849_il2cpp_TypeInfo_var))));
		G_B3_0 = 1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_2 = (bool)G_B3_0;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return Equals(other);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_3 = V_0;
		bool L_4;
		L_4 = Substring_Equals_m90DCA9419D3654340F7660D99B85C7F817B3E76F(__this, L_3, NULL);
		V_3 = L_4;
		goto IL_0041;
	}

IL_0022:
	{
		// if (obj is string str)
		RuntimeObject* L_5 = ___obj0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		String_t* L_6 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_6) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// return Equals(str);
		String_t* L_8 = V_1;
		bool L_9;
		L_9 = Substring_Equals_mBACFC276E8FD4DB04E356A41595EA284FC431CC7(__this, L_8, NULL);
		V_3 = L_9;
		goto IL_0041;
	}

IL_003d:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
IL2CPP_EXTERN_C  bool Substring_Equals_m34CEE374E83C2E31E0C90566412EA4B17BEEFA46_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	bool _returnValue;
	_returnValue = Substring_Equals_m34CEE374E83C2E31E0C90566412EA4B17BEEFA46(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_mBACFC276E8FD4DB04E356A41595EA284FC431CC7 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (string.IsNullOrEmpty(other))
		String_t* L_0 = ___other0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// return m_Length == 0;
		int32_t L_3 = __this->___m_Length_2;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0017:
	{
		// if (other.Length != m_Length)
		String_t* L_4 = ___other0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		int32_t L_6 = __this->___m_Length_2;
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0074;
	}

IL_0030:
	{
		// for (var i = 0; i < m_Length; ++i)
		V_3 = 0;
		goto IL_0061;
	}

IL_0034:
	{
		// if (other[i] != m_String[m_Index + i])
		String_t* L_8 = ___other0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		String_t* L_11 = __this->___m_String_0;
		int32_t L_12 = __this->___m_Index_1;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		Il2CppChar L_14;
		L_14 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_005d;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0074;
	}

IL_005d:
	{
		// for (var i = 0; i < m_Length; ++i)
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0061:
	{
		// for (var i = 0; i < m_Length; ++i)
		int32_t L_17 = V_3;
		int32_t L_18 = __this->___m_Length_2;
		V_5 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_5;
		if (L_19)
		{
			goto IL_0034;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0074;
	}

IL_0074:
	{
		// }
		bool L_20 = V_1;
		return L_20;
	}
}
IL2CPP_EXTERN_C  bool Substring_Equals_mBACFC276E8FD4DB04E356A41595EA284FC431CC7_AdjustorThunk (RuntimeObject* __this, String_t* ___other0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	bool _returnValue;
	_returnValue = Substring_Equals_mBACFC276E8FD4DB04E356A41595EA284FC431CC7(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_m90DCA9419D3654340F7660D99B85C7F817B3E76F (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return CompareTo(other) == 0;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = ___other0;
		int32_t L_1;
		L_1 = Substring_CompareTo_m73D1F0A207D0D12553B2BD44961097FCAD4F2AA1(__this, L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Substring_Equals_m90DCA9419D3654340F7660D99B85C7F817B3E76F_AdjustorThunk (RuntimeObject* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___other0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	bool _returnValue;
	_returnValue = Substring_Equals_m90DCA9419D3654340F7660D99B85C7F817B3E76F(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::Equals(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (length != other.length)
		int32_t L_0;
		L_0 = Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_inline(__this, NULL);
		int32_t L_1;
		L_1 = InternedString_get_length_m4C5C8B69056154F3B5CF7D696A9D72803FC3FAFD((&___other0), NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0047;
	}

IL_001b:
	{
		// return string.Compare(m_String, m_Index, other.ToString(), 0, length,
		//     StringComparison.OrdinalIgnoreCase) == 0;
		String_t* L_3 = __this->___m_String_0;
		int32_t L_4 = __this->___m_Index_1;
		String_t* L_5;
		L_5 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&___other0), NULL);
		int32_t L_6;
		L_6 = Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_inline(__this, NULL);
		int32_t L_7;
		L_7 = String_Compare_mC0521D93E3608D6A004D12B1921058A021987CAA(L_3, L_4, L_5, 0, L_6, 5, NULL);
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0047;
	}

IL_0047:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10_AdjustorThunk (RuntimeObject* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___other0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	bool _returnValue;
	_returnValue = Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::CompareTo(UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_CompareTo_m73D1F0A207D0D12553B2BD44961097FCAD4F2AA1 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___other0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return Compare(this, other, StringComparison.CurrentCulture);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = (*(Substring_t2E16755269E6716C22074D6BC0A9099915E67849*)__this);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_1 = ___other0;
		int32_t L_2;
		L_2 = Substring_Compare_mFCC9A87C466F5D4045A5820A9203C3567A43B871(L_0, L_1, 0, NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t Substring_CompareTo_m73D1F0A207D0D12553B2BD44961097FCAD4F2AA1_AdjustorThunk (RuntimeObject* __this, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___other0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Substring_CompareTo_m73D1F0A207D0D12553B2BD44961097FCAD4F2AA1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::Compare(UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.Substring,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_Compare_mFCC9A87C466F5D4045A5820A9203C3567A43B871 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___left0, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___right1, int32_t ___comparison2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// if (left.m_Length != right.m_Length)
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = ___left0;
		int32_t L_1 = L_0.___m_Length_2;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2 = ___right1;
		int32_t L_3 = L_2.___m_Length_2;
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// if (left.m_Length < right.m_Length)
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_5 = ___left0;
		int32_t L_6 = L_5.___m_Length_2;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_7 = ___right1;
		int32_t L_8 = L_7.___m_Length_2;
		V_1 = (bool)((((int32_t)L_6) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_002d;
		}
	}
	{
		// return -1;
		V_2 = (-1);
		goto IL_0058;
	}

IL_002d:
	{
		// return 1;
		V_2 = 1;
		goto IL_0058;
	}

IL_0031:
	{
		// return string.Compare(left.m_String, left.m_Index, right.m_String, right.m_Index, left.m_Length,
		//     comparison);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_10 = ___left0;
		String_t* L_11 = L_10.___m_String_0;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = ___left0;
		int32_t L_13 = L_12.___m_Index_1;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_14 = ___right1;
		String_t* L_15 = L_14.___m_String_0;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_16 = ___right1;
		int32_t L_17 = L_16.___m_Index_1;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_18 = ___left0;
		int32_t L_19 = L_18.___m_Length_2;
		int32_t L_20 = ___comparison2;
		int32_t L_21;
		L_21 = String_Compare_mC0521D93E3608D6A004D12B1921058A021987CAA(L_11, L_13, L_15, L_17, L_19, L_20, NULL);
		V_2 = L_21;
		goto IL_0058;
	}

IL_0058:
	{
		// }
		int32_t L_22 = V_2;
		return L_22;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_StartsWith_mCC5D1EC1C8F0CE526DE26CF1A8F21463716EB09E (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, String_t* ___str0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (str.Length > length)
		String_t* L_0 = ___str0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		int32_t L_2;
		L_2 = Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_inline(__this, NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0059;
	}

IL_0017:
	{
		// for (var i = 0; i < str.Length; ++i)
		V_2 = 0;
		goto IL_0046;
	}

IL_001b:
	{
		// if (m_String[m_Index + i] != str[i])
		String_t* L_4 = __this->___m_String_0;
		int32_t L_5 = __this->___m_Index_1;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
		String_t* L_8 = ___str0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_9, NULL);
		V_3 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0059;
	}

IL_0042:
	{
		// for (var i = 0; i < str.Length; ++i)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0046:
	{
		// for (var i = 0; i < str.Length; ++i)
		int32_t L_13 = V_2;
		String_t* L_14 = ___str0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_4;
		if (L_16)
		{
			goto IL_001b;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		bool L_17 = V_1;
		return L_17;
	}
}
IL2CPP_EXTERN_C  bool Substring_StartsWith_mCC5D1EC1C8F0CE526DE26CF1A8F21463716EB09E_AdjustorThunk (RuntimeObject* __this, String_t* ___str0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	bool _returnValue;
	_returnValue = Substring_StartsWith_mCC5D1EC1C8F0CE526DE26CF1A8F21463716EB09E(_thisAdjusted, ___str0, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.Utilities.Substring::Substr(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Substring_Substr_mCEF29557E9E2EB77B0FC67DD5894B763D5B08077 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, int32_t ___index0, int32_t ___length1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (length < 0)
		int32_t L_0 = ___length1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// length = this.length - index;
		int32_t L_2;
		L_2 = Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_inline(__this, NULL);
		int32_t L_3 = ___index0;
		___length1 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
	}

IL_0013:
	{
		// return m_String.Substring(m_Index + index, length);
		String_t* L_4 = __this->___m_String_0;
		int32_t L_5 = __this->___m_Index_1;
		int32_t L_6 = ___index0;
		int32_t L_7 = ___length1;
		NullCheck(L_4);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), L_7, NULL);
		V_1 = L_8;
		goto IL_002a;
	}

IL_002a:
	{
		// }
		String_t* L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Substring_Substr_mCEF29557E9E2EB77B0FC67DD5894B763D5B08077_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, int32_t ___length1, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Substring_Substr_mCEF29557E9E2EB77B0FC67DD5894B763D5B08077(_thisAdjusted, ___index0, ___length1, method);
	return _returnValue;
}
// System.String UnityEngine.InputSystem.Utilities.Substring::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Substring_ToString_m321AF6BA186DB01349CE3C710F1EA773D38FEF6D (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (m_String == null)
		String_t* L_0 = __this->___m_String_0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_2;
		goto IL_0030;
	}

IL_0016:
	{
		// return m_String.Substring(m_Index, m_Length);
		String_t* L_3 = __this->___m_String_0;
		int32_t L_4 = __this->___m_Index_1;
		int32_t L_5 = __this->___m_Length_2;
		NullCheck(L_3);
		String_t* L_6;
		L_6 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		String_t* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Substring_ToString_m321AF6BA186DB01349CE3C710F1EA773D38FEF6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Substring_ToString_m321AF6BA186DB01349CE3C710F1EA773D38FEF6D(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_GetHashCode_m68743D4DB46190219FCBA41BACC476D7083D5986 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (m_String == null)
		String_t* L_0 = __this->___m_String_0;
		V_0 = (bool)((((RuntimeObject*)(String_t*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return 0;
		V_1 = 0;
		goto IL_0056;
	}

IL_0012:
	{
		// if (m_Index == 0 && m_Length == m_String.Length)
		int32_t L_2 = __this->___m_Index_1;
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = __this->___m_Length_2;
		String_t* L_4 = __this->___m_String_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
		goto IL_0030;
	}

IL_002f:
	{
		G_B5_0 = 0;
	}

IL_0030:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		// return m_String.GetHashCode();
		String_t* L_7 = __this->___m_String_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_7);
		V_1 = L_8;
		goto IL_0056;
	}

IL_0042:
	{
		// return ToString().GetHashCode();
		String_t* L_9;
		L_9 = Substring_ToString_m321AF6BA186DB01349CE3C710F1EA773D38FEF6D(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_9);
		V_1 = L_10;
		goto IL_0056;
	}

IL_0056:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t Substring_GetHashCode_m68743D4DB46190219FCBA41BACC476D7083D5986_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Substring_GetHashCode_m68743D4DB46190219FCBA41BACC476D7083D5986(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::op_Equality(UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_op_Equality_m08C56FBFB71164F37D9861E0B1B3F12CE61C7F59 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___a0, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return a.Equals(b);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = ___b1;
		bool L_1;
		L_1 = Substring_Equals_m90DCA9419D3654340F7660D99B85C7F817B3E76F((&___a0), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::op_Inequality(UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_op_Inequality_m1C7F420B9925ADCADBD2CB66D2AEDE706C62083B (Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___a0, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !a.Equals(b);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = ___b1;
		bool L_1;
		L_1 = Substring_Equals_m90DCA9419D3654340F7660D99B85C7F817B3E76F((&___a0), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::op_Equality(UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_op_Equality_m987FEE91950747BB3D83E5F2AEAB489C5BD6C060 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___a0, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return a.Equals(b);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = ___b1;
		bool L_1;
		L_1 = Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10((&___a0), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::op_Inequality(UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_op_Inequality_m82A51D473F31E6EE8DA924736F204F36C31DF481 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___a0, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !a.Equals(b);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = ___b1;
		bool L_1;
		L_1 = Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10((&___a0), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::op_Equality(UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_op_Equality_m39C2C2680B2337268C3E17535A199C99889A7D92 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___a0, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return b.Equals(a);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = ___a0;
		bool L_1;
		L_1 = Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10((&___b1), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.InputSystem.Utilities.Substring::op_Inequality(UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.Substring)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Substring_op_Inequality_mDAFA846733CDAC1F36DC1279DB51608C021157C3 (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___a0, Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !b.Equals(a);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = ___a0;
		bool L_1;
		L_1 = Substring_Equals_m1A54740A335BF499C1A804182A4485A04F769C10((&___b1), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.Substring::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Substring_op_Implicit_mF41B9BD536475F42FFA830CC270D11453D7FEBE8 (String_t* ___s0, const RuntimeMethod* method) 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Substring(s);
		String_t* L_0 = ___s0;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Substring__ctor_m5EF457666A6E65F74FA240D42360D666FD477937((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = __this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.InputSystem.Utilities.Substring::get_index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Substring_get_index_mEF04F0C2A5292FEC77A6DE1C13C81B719C9D3012 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) 
{
	{
		// public int index => m_Index;
		int32_t L_0 = __this->___m_Index_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Substring_get_index_mEF04F0C2A5292FEC77A6DE1C13C81B719C9D3012_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Substring_get_index_mEF04F0C2A5292FEC77A6DE1C13C81B719C9D3012_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Char UnityEngine.InputSystem.Utilities.Substring::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Substring_get_Item_m278F3C7634F20487F36267C4BD49BC96DAE4CAC4 (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Il2CppChar V_1 = 0x0;
	int32_t G_B3_0 = 0;
	{
		// if (index < 0 || index >= m_Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->___m_Length_2;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(index));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Substring_get_Item_m278F3C7634F20487F36267C4BD49BC96DAE4CAC4_RuntimeMethod_var)));
	}

IL_0023:
	{
		// return m_String[m_Index + index];
		String_t* L_5 = __this->___m_String_0;
		int32_t L_6 = __this->___m_Index_1;
		int32_t L_7 = ___index0;
		NullCheck(L_5);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		V_1 = L_8;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		Il2CppChar L_9 = V_1;
		return L_9;
	}
}
IL2CPP_EXTERN_C  Il2CppChar Substring_get_Item_m278F3C7634F20487F36267C4BD49BC96DAE4CAC4_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Substring_t2E16755269E6716C22074D6BC0A9099915E67849*>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = Substring_get_Item_m278F3C7634F20487F36267C4BD49BC96DAE4CAC4(_thisAdjusted, ___index0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.InputSystem.Utilities.TypeHelpers::IsInt(System.TypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeHelpers_IsInt_m76F62C909F4B0F0BCB6A336EC9C9C4EA78F95DB0 (int32_t ___type0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = ___type0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 5)))
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_0043;
			}
			case 4:
			{
				goto IL_003b;
			}
			case 5:
			{
				goto IL_0047;
			}
			case 6:
			{
				goto IL_003f;
			}
			case 7:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_004f;
	}

IL_002f:
	{
		// case TypeCode.Byte: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_0033:
	{
		// case TypeCode.SByte: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_0037:
	{
		// case TypeCode.Int16: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_003b:
	{
		// case TypeCode.Int32: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_003f:
	{
		// case TypeCode.Int64: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_0043:
	{
		// case TypeCode.UInt16: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_0047:
	{
		// case TypeCode.UInt32: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_004b:
	{
		// case TypeCode.UInt64: return true;
		V_2 = (bool)1;
		goto IL_0053;
	}

IL_004f:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0053;
	}

IL_0053:
	{
		// }
		bool L_3 = V_2;
		return L_3;
	}
}
// System.Type UnityEngine.InputSystem.Utilities.TypeHelpers::GetValueType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeHelpers_GetValueType_mA42524E2735119E9235915B73D96DD9782B170CA (MemberInfo_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// var field = member as FieldInfo;
		MemberInfo_t* L_0 = ___member0;
		V_0 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		// if (field != null)
		FieldInfo_t* L_1 = V_0;
		bool L_2;
		L_2 = FieldInfo_op_Inequality_mE4F4E4CC6B936CC61E9BF9F4490F0643911C0D43(L_1, (FieldInfo_t*)NULL, NULL);
		V_3 = L_2;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return field.FieldType;
		FieldInfo_t* L_4 = V_0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_4);
		V_4 = L_5;
		goto IL_005e;
	}

IL_001d:
	{
		// var property = member as PropertyInfo;
		MemberInfo_t* L_6 = ___member0;
		V_1 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_6, PropertyInfo_t_il2cpp_TypeInfo_var));
		// if (property != null)
		PropertyInfo_t* L_7 = V_1;
		bool L_8;
		L_8 = PropertyInfo_op_Inequality_m5DA1C329CB63868255C466876EC2452B40E418A9(L_7, (PropertyInfo_t*)NULL, NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		// return property.PropertyType;
		PropertyInfo_t* L_10 = V_1;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_10);
		V_4 = L_11;
		goto IL_005e;
	}

IL_003b:
	{
		// var method = member as MethodInfo;
		MemberInfo_t* L_12 = ___member0;
		V_2 = ((MethodInfo_t*)IsInstClass((RuntimeObject*)L_12, MethodInfo_t_il2cpp_TypeInfo_var));
		// if (method != null)
		MethodInfo_t* L_13 = V_2;
		bool L_14;
		L_14 = MethodInfo_op_Inequality_m12A72321F9066269B34CD4062B224E1A20AC15EC(L_13, (MethodInfo_t*)NULL, NULL);
		V_6 = L_14;
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0059;
		}
	}
	{
		// return method.ReturnType;
		MethodInfo_t* L_16 = V_2;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(38 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_16);
		V_4 = L_17;
		goto IL_005e;
	}

IL_0059:
	{
		// return null;
		V_4 = (Type_t*)NULL;
		goto IL_005e;
	}

IL_005e:
	{
		// }
		Type_t* L_18 = V_4;
		return L_18;
	}
}
// System.String UnityEngine.InputSystem.Utilities.TypeHelpers::GetNiceTypeName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeHelpers_GetNiceTypeName_m5439B08BCB26DFB2AC669B973242673D63FF5EFF (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3165827D406DD8F354BE7515C630A771E98916A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	{
		// if (type.IsPrimitive)
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsPrimitive_m46ACAAB8F754D37713E3E45437705F4F58FAFA18(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_016b;
		}
	}
	{
		// if (type == typeof(int))
		Type_t* L_3 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_3, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		// return "int";
		V_2 = _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
		goto IL_0174;
	}

IL_002e:
	{
		// if (type == typeof(float))
		Type_t* L_8 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_8, L_10, NULL);
		V_3 = L_11;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		// return "float";
		V_2 = _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
		goto IL_0174;
	}

IL_004d:
	{
		// if (type == typeof(char))
		Type_t* L_13 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_006e;
		}
	}
	{
		// return "char";
		V_2 = _stringLiteral38FB386B58970DA493E868CAC2AC6550E559B5D7;
		goto IL_0174;
	}

IL_006e:
	{
		// if (type == typeof(byte))
		Type_t* L_18 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_18, L_20, NULL);
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_008f;
		}
	}
	{
		// return "byte";
		V_2 = _stringLiteralE1E5CE10BE86E259146E8ADE82FB423C65C3FFD7;
		goto IL_0174;
	}

IL_008f:
	{
		// if (type == typeof(short))
		Type_t* L_23 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_23, L_25, NULL);
		V_6 = L_26;
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		// return "short";
		V_2 = _stringLiteral115036F179EA48E7662F9BE55E0E00A42DDE6DA7;
		goto IL_0174;
	}

IL_00b0:
	{
		// if (type == typeof(long))
		Type_t* L_28 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_28, L_30, NULL);
		V_7 = L_31;
		bool L_32 = V_7;
		if (!L_32)
		{
			goto IL_00d1;
		}
	}
	{
		// return "long";
		V_2 = _stringLiteralD890B2BC5E5200965CD02403ABB6C221A614A1B7;
		goto IL_0174;
	}

IL_00d1:
	{
		// if (type == typeof(double))
		Type_t* L_33 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_33, L_35, NULL);
		V_8 = L_36;
		bool L_37 = V_8;
		if (!L_37)
		{
			goto IL_00f2;
		}
	}
	{
		// return "double";
		V_2 = _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
		goto IL_0174;
	}

IL_00f2:
	{
		// if (type == typeof(uint))
		Type_t* L_38 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_39, NULL);
		bool L_41;
		L_41 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_38, L_40, NULL);
		V_9 = L_41;
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0110;
		}
	}
	{
		// return "uint";
		V_2 = _stringLiteralE3165827D406DD8F354BE7515C630A771E98916A;
		goto IL_0174;
	}

IL_0110:
	{
		// if (type == typeof(sbyte))
		Type_t* L_43 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_43, L_45, NULL);
		V_10 = L_46;
		bool L_47 = V_10;
		if (!L_47)
		{
			goto IL_012e;
		}
	}
	{
		// return "sbyte";
		V_2 = _stringLiteralC205D54CE3878136AF6661FE2D0B347BEC57D5AB;
		goto IL_0174;
	}

IL_012e:
	{
		// if (type == typeof(ushort))
		Type_t* L_48 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		bool L_51;
		L_51 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_48, L_50, NULL);
		V_11 = L_51;
		bool L_52 = V_11;
		if (!L_52)
		{
			goto IL_014c;
		}
	}
	{
		// return "ushort";
		V_2 = _stringLiteral316316045E2DB71BB9C0748EE882DBF00C83FD8E;
		goto IL_0174;
	}

IL_014c:
	{
		// if (type == typeof(ulong))
		Type_t* L_53 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_53, L_55, NULL);
		V_12 = L_56;
		bool L_57 = V_12;
		if (!L_57)
		{
			goto IL_016a;
		}
	}
	{
		// return "ulong";
		V_2 = _stringLiteralE3AB954C27345B5777E41817C31696D6AC0E87C1;
		goto IL_0174;
	}

IL_016a:
	{
	}

IL_016b:
	{
		// return type.Name;
		Type_t* L_58 = ___type0;
		NullCheck(L_58);
		String_t* L_59;
		L_59 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_58);
		V_2 = L_59;
		goto IL_0174;
	}

IL_0174:
	{
		// }
		String_t* L_60 = V_2;
		return L_60;
	}
}
// System.Type UnityEngine.InputSystem.Utilities.TypeHelpers::GetGenericTypeArgumentFromHierarchy(System.Type,System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeHelpers_GetGenericTypeArgumentFromHierarchy_m025FA4B06F7A0E607C020A252C7E263BD000C848 (Type_t* ___type0, Type_t* ___genericTypeDefinition1, int32_t ___argumentIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_4 = NULL;
	bool V_5 = false;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_6 = NULL;
	int32_t V_7 = 0;
	Type_t* V_8 = NULL;
	Type_t* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	Type_t* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B35_0 = 0;
	{
		// if (type == null)
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException(nameof(type));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeHelpers_GetGenericTypeArgumentFromHierarchy_m025FA4B06F7A0E607C020A252C7E263BD000C848_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (genericTypeDefinition == null)
		Type_t* L_4 = ___genericTypeDefinition1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_4, (Type_t*)NULL, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		// throw new ArgumentNullException(nameof(genericTypeDefinition));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2900020C8C73B769305C05646CF927B358E92966)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeHelpers_GetGenericTypeArgumentFromHierarchy_m025FA4B06F7A0E607C020A252C7E263BD000C848_RuntimeMethod_var)));
	}

IL_002d:
	{
		// if (argumentIndex < 0)
		int32_t L_8 = ___argumentIndex2;
		V_2 = (bool)((((int32_t)L_8) < ((int32_t)0))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// throw new ArgumentOutOfRangeException(nameof(argumentIndex));
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8494AF0C90D5A0F8C5D03F528442880CE6820192)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeHelpers_GetGenericTypeArgumentFromHierarchy_m025FA4B06F7A0E607C020A252C7E263BD000C848_RuntimeMethod_var)));
	}

IL_0040:
	{
		// if (genericTypeDefinition.IsInterface)
		Type_t* L_11 = ___genericTypeDefinition1;
		NullCheck(L_11);
		bool L_12;
		L_12 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_11, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0110;
		}
	}
	{
		goto IL_0105;
	}

IL_0053:
	{
		// var interfaces = type.GetInterfaces();
		Type_t* L_14 = ___type0;
		NullCheck(L_14);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15;
		L_15 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(108 /* System.Type[] System.Type::GetInterfaces() */, L_14);
		V_4 = L_15;
		// var haveFoundInterface = false;
		V_5 = (bool)0;
		// foreach (var element in interfaces)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = V_4;
		V_6 = L_16;
		V_7 = 0;
		goto IL_00c3;
	}

IL_0069:
	{
		// foreach (var element in interfaces)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = V_6;
		int32_t L_18 = V_7;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Type_t* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_8 = L_20;
		// if (element.IsConstructedGenericType &&
		//     element.GetGenericTypeDefinition() == genericTypeDefinition)
		Type_t* L_21 = V_8;
		NullCheck(L_21);
		bool L_22;
		L_22 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_21);
		if (!L_22)
		{
			goto IL_0089;
		}
	}
	{
		Type_t* L_23 = V_8;
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_23);
		Type_t* L_25 = ___genericTypeDefinition1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_24, L_25, NULL);
		G_B12_0 = ((int32_t)(L_26));
		goto IL_008a;
	}

IL_0089:
	{
		G_B12_0 = 0;
	}

IL_008a:
	{
		V_10 = (bool)G_B12_0;
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		// type = element;
		Type_t* L_28 = V_8;
		___type0 = L_28;
		// haveFoundInterface = true;
		V_5 = (bool)1;
		// break;
		goto IL_00cb;
	}

IL_009a:
	{
		// var typeArgument =
		//     GetGenericTypeArgumentFromHierarchy(element, genericTypeDefinition, argumentIndex);
		Type_t* L_29 = V_8;
		Type_t* L_30 = ___genericTypeDefinition1;
		int32_t L_31 = ___argumentIndex2;
		Type_t* L_32;
		L_32 = TypeHelpers_GetGenericTypeArgumentFromHierarchy_m025FA4B06F7A0E607C020A252C7E263BD000C848(L_29, L_30, L_31, NULL);
		V_9 = L_32;
		// if (typeArgument != null)
		Type_t* L_33 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_33, (Type_t*)NULL, NULL);
		V_11 = L_34;
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00bc;
		}
	}
	{
		// return typeArgument;
		Type_t* L_36 = V_9;
		V_12 = L_36;
		goto IL_0162;
	}

IL_00bc:
	{
		int32_t L_37 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00c3:
	{
		// foreach (var element in interfaces)
		int32_t L_38 = V_7;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = V_6;
		NullCheck(L_39);
		if ((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_39)->max_length)))))
		{
			goto IL_0069;
		}
	}

IL_00cb:
	{
		// if (haveFoundInterface)
		bool L_40 = V_5;
		V_13 = L_40;
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_00d5;
		}
	}
	{
		// break;
		goto IL_010d;
	}

IL_00d5:
	{
		// type = type.BaseType;
		Type_t* L_42 = ___type0;
		NullCheck(L_42);
		Type_t* L_43;
		L_43 = VirtualFuncInvoker0< Type_t* >::Invoke(106 /* System.Type System.Type::get_BaseType() */, L_42);
		___type0 = L_43;
		// if (type == null || type == typeof(object))
		Type_t* L_44 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_44, (Type_t*)NULL, NULL);
		if (L_45)
		{
			goto IL_00f8;
		}
	}
	{
		Type_t* L_46 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_46, L_48, NULL);
		G_B23_0 = ((int32_t)(L_49));
		goto IL_00f9;
	}

IL_00f8:
	{
		G_B23_0 = 1;
	}

IL_00f9:
	{
		V_14 = (bool)G_B23_0;
		bool L_50 = V_14;
		if (!L_50)
		{
			goto IL_0104;
		}
	}
	{
		// return null;
		V_12 = (Type_t*)NULL;
		goto IL_0162;
	}

IL_0104:
	{
	}

IL_0105:
	{
		// while (true)
		V_15 = (bool)1;
		goto IL_0053;
	}

IL_010d:
	{
		goto IL_0156;
	}

IL_0110:
	{
		goto IL_0138;
	}

IL_0113:
	{
		// type = type.BaseType;
		Type_t* L_51 = ___type0;
		NullCheck(L_51);
		Type_t* L_52;
		L_52 = VirtualFuncInvoker0< Type_t* >::Invoke(106 /* System.Type System.Type::get_BaseType() */, L_51);
		___type0 = L_52;
		// if (type == typeof(object))
		Type_t* L_53 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_54, NULL);
		bool L_56;
		L_56 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_53, L_55, NULL);
		V_16 = L_56;
		bool L_57 = V_16;
		if (!L_57)
		{
			goto IL_0137;
		}
	}
	{
		// return null;
		V_12 = (Type_t*)NULL;
		goto IL_0162;
	}

IL_0137:
	{
	}

IL_0138:
	{
		// while (!type.IsConstructedGenericType || type.GetGenericTypeDefinition() != genericTypeDefinition)
		Type_t* L_58 = ___type0;
		NullCheck(L_58);
		bool L_59;
		L_59 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Type::get_IsConstructedGenericType() */, L_58);
		if (!L_59)
		{
			goto IL_014e;
		}
	}
	{
		Type_t* L_60 = ___type0;
		NullCheck(L_60);
		Type_t* L_61;
		L_61 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_60);
		Type_t* L_62 = ___genericTypeDefinition1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_61, L_62, NULL);
		G_B35_0 = ((int32_t)(L_63));
		goto IL_014f;
	}

IL_014e:
	{
		G_B35_0 = 1;
	}

IL_014f:
	{
		V_17 = (bool)G_B35_0;
		bool L_64 = V_17;
		if (L_64)
		{
			goto IL_0113;
		}
	}
	{
	}

IL_0156:
	{
		// return type.GenericTypeArguments[argumentIndex];
		Type_t* L_65 = ___type0;
		NullCheck(L_65);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_66;
		L_66 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(48 /* System.Type[] System.Type::get_GenericTypeArguments() */, L_65);
		int32_t L_67 = ___argumentIndex2;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Type_t* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_12 = L_69;
		goto IL_0162;
	}

IL_0162:
	{
		// }
		Type_t* L_70 = V_12;
		return L_70;
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
// Conversion methods for marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_pinvoke(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_pinvoke_back(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke& marshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_pinvoke_cleanup(TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_com(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com& marshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_com_back(const TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com& marshaled, TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E& unmarshaled)
{
	Exception_t* ___table_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'table' of type 'TypeTable'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___table_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Utilities.TypeTable
IL2CPP_EXTERN_C void TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshal_com_cleanup(TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E_marshaled_com& marshaled)
{
}
// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.InputSystem.Utilities.TypeTable::get_names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* G_B2_0 = NULL;
	KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* G_B2_1 = NULL;
	Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* G_B1_0 = NULL;
	KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* G_B1_1 = NULL;
	{
		// public IEnumerable<string> names => table.Keys.Select(x => x.ToString());
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_0 = __this->___table_0;
		NullCheck(L_0);
		KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* L_1;
		L_1 = Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF(L_0, Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_2 = ((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1;
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* L_4 = ((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_5 = (Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F*)il2cpp_codegen_object_new(Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m6763116FA3257580D87BD903E24793FCD6D82548(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9_RuntimeMethod_var), NULL);
		Func_2_tE0082B3C229A425A69ECDABB19259709EC9F540F* L_6 = L_5;
		((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9__2_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893(G_B2_1, G_B2_0, Enumerable_Select_TisInternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_TisString_t_m4121F7A55EC2BCE9D2E38AF2C27E16AA95C8D893_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = TypeTable_get_names_mDE4C37C80FF83DA878F42A69F48AEB9656052F0A(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Utilities.TypeTable::get_internedNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IEnumerable<InternedString> internedNames => table.Keys;
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_0 = __this->___table_0;
		NullCheck(L_0);
		KeyCollection_tF0B6D6FBE89245B5B34798233471D53A6BF802A3* L_1;
		L_1 = Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF(L_0, Dictionary_2_get_Keys_mFDE9D7FC672A995E064B6F14DBC9EB0B0D15BFAF_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = TypeTable_get_internedNames_m12DFD70B16C0F9F67C30BA95FC91286954E5F60B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// table = new Dictionary<InternedString, Type>();
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_0 = (Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D*)il2cpp_codegen_object_new(Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE(L_0, Dictionary_2__ctor_mD10EC6AB3D41E49C23882A85B368A08800DFC5EE_RuntimeMethod_var);
		__this->___table_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___table_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	TypeTable_Initialize_m5EE09E37850E04357BB26CC52183617C08A11D0C(_thisAdjusted, method);
}
// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Utilities.TypeTable::FindNameForType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00 (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_4;
	memset((&V_4), 0, sizeof(V_4));
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (type == null)
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_0, (Type_t*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// throw new ArgumentNullException(nameof(type));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00_RuntimeMethod_var)));
	}

IL_0017:
	{
		// foreach (var pair in table)
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_4 = __this->___table_0;
		NullCheck(L_4);
		Enumerator_tC7FEC7C0C46B33E076C8049925C674971CBC97DE L_5;
		L_5 = Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A(L_4, Dictionary_2_GetEnumerator_m09228E70F30816068825C9BB4B45519E7143CE7A_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87((&V_1), Enumerator_Dispose_m767111BF89218E9F0CD407F44CD9FF1CC6079B87_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0026_1:
			{
				// foreach (var pair in table)
				KeyValuePair_2_t859F90B137C9291C0E478FBE85ABB18F30B91A27 L_6;
				L_6 = Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_inline((&V_1), Enumerator_get_Current_m8161C19F09FC9E5EFD3BCE87B8907B3F660FFF51_RuntimeMethod_var);
				V_2 = L_6;
				// if (pair.Value == type)
				Type_t* L_7;
				L_7 = KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_inline((&V_2), KeyValuePair_2_get_Value_m9803DE61209750BB22E4E1A58A5DFB943EAFCB80_RuntimeMethod_var);
				Type_t* L_8 = ___type0;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_7, L_8, NULL);
				V_3 = L_9;
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004a_1;
				}
			}
			{
				// return pair.Key;
				InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_11;
				L_11 = KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_inline((&V_2), KeyValuePair_2_get_Key_mE8768535ABCD24F453DC1EC5127CBD303DEC29A5_RuntimeMethod_var);
				V_4 = L_11;
				goto IL_0072;
			}

IL_004a_1:
			{
				// foreach (var pair in table)
				bool L_12;
				L_12 = Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF((&V_1), Enumerator_MoveNext_mEB31860F9718BC0DB2D231F91D9A78D9666B54EF_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// return new InternedString();
		il2cpp_codegen_initobj((&V_5), sizeof(InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13 = V_5;
		V_4 = L_13;
		goto IL_0072;
	}

IL_0072:
	{
		// }
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_14 = V_4;
		return L_14;
	}
}
IL2CPP_EXTERN_C  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00_AdjustorThunk (RuntimeObject* __this, Type_t* ___type0, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 _returnValue;
	_returnValue = TypeTable_FindNameForType_m5974594EAAEB68C4488B8C9CFABF931B7666FB00(_thisAdjusted, ___type0, method);
	return _returnValue;
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable::AddTypeRegistration(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new ArgumentException("Name cannot be null or empty", nameof(name));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4D7DE161067DE7FFAB264EC7D3DCF921ADBA5A5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_RuntimeMethod_var)));
	}

IL_001b:
	{
		// if (type == null)
		Type_t* L_4 = ___type1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_4, (Type_t*)NULL, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// throw new ArgumentNullException(nameof(type));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3C6C902DBF80139640F6554F0C3392016A8ADF7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_RuntimeMethod_var)));
	}

IL_0031:
	{
		// var internedName = new InternedString(name);
		String_t* L_8 = ___name0;
		InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935((&V_0), L_8, NULL);
		// table[internedName] = type;
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_9 = __this->___table_0;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = V_0;
		Type_t* L_11 = ___type1;
		NullCheck(L_9);
		Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7(L_9, L_10, L_11, Dictionary_2_set_Item_mACF6DD3A83F9F41061E7C4DD48F58C07BFAA31C7_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	TypeTable_AddTypeRegistration_mAC83549CC944F2EE8371A00B82B203B9B8DD5B7E(_thisAdjusted, ___name0, ___type1, method);
}
// System.Type UnityEngine.InputSystem.Utilities.TypeTable::LookupTypeRegistration(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A (TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Type_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Type_t* V_4 = NULL;
	{
		// if (string.IsNullOrEmpty(name))
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// throw new ArgumentException("Name cannot be null or empty", nameof(name));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4D7DE161067DE7FFAB264EC7D3DCF921ADBA5A5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A_RuntimeMethod_var)));
	}

IL_001b:
	{
		// var internedName = new InternedString(name);
		String_t* L_4 = ___name0;
		InternedString__ctor_m2E9672D46D84C82F705DE799CE8B6123EB95E935((&V_0), L_4, NULL);
		// if (table.TryGetValue(internedName, out var type))
		Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* L_5 = __this->___table_0;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860(L_5, L_6, (&V_1), Dictionary_2_TryGetValue_m4AFE96490465DE101600F734AF44C7E4AE513860_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		// return type;
		Type_t* L_9 = V_1;
		V_4 = L_9;
		goto IL_003f;
	}

IL_003a:
	{
		// return null;
		V_4 = (Type_t*)NULL;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Type_t* L_10 = V_4;
		return L_10;
	}
}
IL2CPP_EXTERN_C  Type_t* TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A_AdjustorThunk (RuntimeObject* __this, String_t* ___name0, const RuntimeMethod* method)
{
	TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TypeTable_tEAC1ECAD849469DEA65DA2FC65B19C2D4739B67E*>(__this + _offset);
	Type_t* _returnValue;
	_returnValue = TypeTable_LookupTypeRegistration_m89DCEA471CDF7CDB994D67D3726482805C0AE29A(_thisAdjusted, ___name0, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.InputSystem.Utilities.TypeTable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4242002B310EE69DCA8E2E04DB8A559E01D8C748 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* L_0 = (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA*)il2cpp_codegen_object_new(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m272D75733C8074A4CB8134DEB9A4BD7442005F5A(L_0, NULL);
		((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.InputSystem.Utilities.TypeTable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m272D75733C8074A4CB8134DEB9A4BD7442005F5A (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String UnityEngine.InputSystem.Utilities.TypeTable/<>c::<get_names>b__2_0(UnityEngine.InputSystem.Utilities.InternedString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cget_namesU3Eb__2_0_m106D3E5FF1FBF96009877C31E3F0684CD8943EC9 (U3CU3Ec_t77EE13A2DF0F0EE25274DE8AA8898CF60A1ECEBA* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___x0, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<string> names => table.Keys.Select(x => x.ToString());
		String_t* L_0;
		L_0 = InternedString_ToString_mED327D67EF001C5EDFF284336F13C3E3F025993A((&___x0), NULL);
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
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::get_midPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, const RuntimeMethod* method) 
{
	{
		// public float midPoint => (maxValue + minValue) / 2;
		float L_0 = __this->___maxValue_4;
		float L_1 = __this->___minValue_3;
		return ((float)(((float)il2cpp_codegen_add(L_0, L_1))/(2.0f)));
	}
}
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_ReadValue_mB6A4941AFFFB504B7F2A49C83C86633A6178994E (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	bool V_9 = false;
	{
		// var negativeMagnitude = context.EvaluateMagnitude(negative);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___negative_1;
		float L_2;
		L_2 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_0, L_1, NULL);
		V_0 = L_2;
		// var positiveMagnitude = context.EvaluateMagnitude(positive);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___positive_2;
		float L_5;
		L_5 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_3, L_4, NULL);
		V_1 = L_5;
		// var negativeIsPressed = negativeMagnitude > 0;
		float L_6 = V_0;
		V_2 = (bool)((((float)L_6) > ((float)(0.0f)))? 1 : 0);
		// var positiveIsPressed = positiveMagnitude > 0;
		float L_7 = V_1;
		V_3 = (bool)((((float)L_7) > ((float)(0.0f)))? 1 : 0);
		// if (negativeIsPressed == positiveIsPressed)
		bool L_8 = V_2;
		bool L_9 = V_3;
		V_5 = (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		// switch (whichSideWins)
		int32_t L_11 = __this->___whichSideWins_5;
		V_7 = L_11;
		int32_t L_12 = V_7;
		V_6 = L_12;
		int32_t L_13 = V_6;
		switch (L_13)
		{
			case 0:
			{
				goto IL_0061;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_006b;
	}

IL_0059:
	{
		// positiveIsPressed = false;
		V_3 = (bool)0;
		// break;
		goto IL_006b;
	}

IL_005d:
	{
		// negativeIsPressed = false;
		V_2 = (bool)0;
		// break;
		goto IL_006b;
	}

IL_0061:
	{
		// return midPoint;
		float L_14;
		L_14 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		V_8 = L_14;
		goto IL_009f;
	}

IL_006b:
	{
	}

IL_006c:
	{
		// var mid = midPoint;
		float L_15;
		L_15 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		V_4 = L_15;
		// if (negativeIsPressed)
		bool L_16 = V_2;
		V_9 = L_16;
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_008d;
		}
	}
	{
		// return mid - (mid - minValue) * negativeMagnitude;
		float L_18 = V_4;
		float L_19 = V_4;
		float L_20 = __this->___minValue_3;
		float L_21 = V_0;
		V_8 = ((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_20)), L_21))));
		goto IL_009f;
	}

IL_008d:
	{
		// return mid + (maxValue - mid) * positiveMagnitude;
		float L_22 = V_4;
		float L_23 = __this->___maxValue_4;
		float L_24 = V_4;
		float L_25 = V_1;
		V_8 = ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_23, L_24)), L_25))));
		goto IL_009f;
	}

IL_009f:
	{
		// }
		float L_26 = V_8;
		return L_26;
	}
}
// System.Single UnityEngine.InputSystem.Composites.AxisComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AxisComposite_EvaluateMagnitude_mC09E5455DCA8A7E4B1001E378382A66C2DADAA48 (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// var value = ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		V_0 = L_1;
		// if (value < midPoint)
		float L_2 = V_0;
		float L_3;
		L_3 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		V_1 = (bool)((((float)L_2) < ((float)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		// value = Mathf.Abs(value - midPoint);
		float L_5 = V_0;
		float L_6;
		L_6 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		float L_7;
		L_7 = fabsf(((float)il2cpp_codegen_subtract(L_5, L_6)));
		V_0 = L_7;
		// return NormalizeProcessor.Normalize(value, 0, Mathf.Abs(minValue), 0);
		float L_8 = V_0;
		float L_9 = __this->___minValue_3;
		float L_10;
		L_10 = fabsf(L_9);
		float L_11;
		L_11 = NormalizeProcessor_Normalize_mEC3981E44FB19990B8D33FB6B1CCDE509FE04A8D(L_8, (0.0f), L_10, (0.0f), NULL);
		V_2 = L_11;
		goto IL_006f;
	}

IL_0043:
	{
		// value = Mathf.Abs(value - midPoint);
		float L_12 = V_0;
		float L_13;
		L_13 = AxisComposite_get_midPoint_m95E5A7ADEDF11A5E0946073FE3EB3DBB56E9C14B(__this, NULL);
		float L_14;
		L_14 = fabsf(((float)il2cpp_codegen_subtract(L_12, L_13)));
		V_0 = L_14;
		// return NormalizeProcessor.Normalize(value, 0, Mathf.Abs(maxValue), 0);
		float L_15 = V_0;
		float L_16 = __this->___maxValue_4;
		float L_17;
		L_17 = fabsf(L_16);
		float L_18;
		L_18 = NormalizeProcessor_Normalize_mEC3981E44FB19990B8D33FB6B1CCDE509FE04A8D(L_15, (0.0f), L_17, (0.0f), NULL);
		V_2 = L_18;
		goto IL_006f;
	}

IL_006f:
	{
		// }
		float L_19 = V_2;
		return L_19;
	}
}
// System.Void UnityEngine.InputSystem.Composites.AxisComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxisComposite__ctor_m4E736548F5FF6FD260080DB105A10CE59E447EC2 (AxisComposite_t9E3B9C369A8F748691611245821471645D31D2AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [InputControl(layout = "Button")] public int negative = 0;
		__this->___negative_1 = 0;
		// [InputControl(layout = "Button")] public int positive = 0;
		__this->___positive_2 = 0;
		// public float minValue = -1;
		__this->___minValue_3 = (-1.0f);
		// public float maxValue = 1;
		__this->___maxValue_4 = (1.0f);
		// public WhichSideWins whichSideWins = WhichSideWins.Neither;
		__this->___whichSideWins_5 = 0;
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.InputSystem.Composites.ButtonWithOneModifier::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithOneModifier_ReadValue_m439AB954F407DC5590C539DD486A04624AA07791 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return context.ReadValue<float>(button);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_4 = ___context0;
		int32_t L_5 = __this->___button_2;
		float L_6;
		L_6 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_4, L_5, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0020:
	{
		// return default;
		V_1 = (0.0f);
		goto IL_0028;
	}

IL_0028:
	{
		// }
		float L_7 = V_1;
		return L_7;
	}
}
// System.Single UnityEngine.InputSystem.Composites.ButtonWithOneModifier::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithOneModifier_EvaluateMagnitude_m5620878936698B7CB4AD5BBD698EC2FF062A9505 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithOneModifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithOneModifier__ctor_m7B7F85E23B5C441609E4155452F6D4AC05E2B639 (ButtonWithOneModifier_t407B77B4960C57B1DEC84F631F91B1E135343222* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
// System.Single UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithTwoModifiers_ReadValue_m37221E24FA2D2429BABF071D71DA89E255B8CBA9 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return context.ReadValue<float>(button);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___context0;
		int32_t L_8 = __this->___button_3;
		float L_9;
		L_9 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_7, L_8, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_1 = L_9;
		goto IL_0039;
	}

IL_0031:
	{
		// return default;
		V_1 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		// }
		float L_10 = V_1;
		return L_10;
	}
}
// System.Single UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ButtonWithTwoModifiers_EvaluateMagnitude_mFA7A056972DA25A3D63AB79E19E366F3F68DB900 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// return ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		float L_1;
		L_1 = VirtualFuncInvoker1< float, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<System.Single>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.InputSystem.Composites.ButtonWithTwoModifiers::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonWithTwoModifiers__ctor_m200626B0BEBB78BC03D64F561D3727DE1D2D5325 (ButtonWithTwoModifiers_tCA30378981527D0F306883EABED0657FA5FE7C59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8(__this, InputBindingComposite_1__ctor_m652D65F50D8E8B067F415C8EB34CBB411E3037C8_RuntimeMethod_var);
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
// System.Type UnityEngine.InputSystem.Composites.OneModifierComposite::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* OneModifierComposite_get_valueType_m5E2ABFE018FE89563F657E18C3DCB5EEA8BF2673 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	{
		// public override Type valueType => m_ValueType;
		Type_t* L_0 = __this->___m_ValueType_4;
		return L_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Composites.OneModifierComposite::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OneModifierComposite_get_valueSizeInBytes_m910E77B6AB3AAF8E47F0DA92CD16C47784E66A1C (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	{
		// public override int valueSizeInBytes => m_ValueSizeInBytes;
		int32_t L_0 = __this->___m_ValueSizeInBytes_3;
		return L_0;
	}
}
// System.Single UnityEngine.InputSystem.Composites.OneModifierComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OneModifierComposite_EvaluateMagnitude_mA42D5A4588ED01010B8642529A70E665BB9C6923 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return context.EvaluateMagnitude(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_4 = ___context0;
		int32_t L_5 = __this->___binding_2;
		float L_6;
		L_6 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0020:
	{
		// return default;
		V_1 = (0.0f);
		goto IL_0028;
	}

IL_0028:
	{
		// }
		float L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_ReadValue_mFFCA6F249ACC7FB1137FC8DC42FEF8893AF5764B (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// context.ReadValue(binding, buffer, bufferSize);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_4 = ___context0;
		int32_t L_5 = __this->___binding_2;
		void* L_6 = ___buffer1;
		int32_t L_7 = ___bufferSize2;
		InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8(L_4, L_5, L_6, L_7, NULL);
		goto IL_0030;
	}

IL_0022:
	{
		// UnsafeUtility.MemClear(buffer, m_ValueSizeInBytes);
		void* L_8 = ___buffer1;
		int32_t L_9 = __this->___m_ValueSizeInBytes_3;
		UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460(L_8, ((int64_t)L_9), NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_FinishSetup_m91EE0D3C7261D70C6C72173F1F18650A9C007620 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// DetermineValueTypeAndSize(ref context, binding, out m_ValueType, out m_ValueSizeInBytes);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___binding_2;
		Type_t** L_2 = (&__this->___m_ValueType_4);
		int32_t* L_3 = (&__this->___m_ValueSizeInBytes_3);
		OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Object UnityEngine.InputSystem.Composites.OneModifierComposite::ReadValueAsObject(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OneModifierComposite_ReadValueAsObject_mE7F10A702C1FC6CF14A127CB653733BE056C445B (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		// if (context.ReadValueAsButton(modifier))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return context.ReadValueAsObject(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_4 = ___context0;
		int32_t L_5 = __this->___binding_2;
		RuntimeObject* L_6;
		L_6 = InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882(L_4, L_5, NULL);
		V_1 = L_6;
		goto IL_0024;
	}

IL_0020:
	{
		// return null;
		V_1 = NULL;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::DetermineValueTypeAndSize(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Int32,System.Type&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA (InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, int32_t ___part1, Type_t** ___valueType2, int32_t* ___valueSizeInBytes3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B7_0 = 0;
	{
		// valueSizeInBytes = 0;
		int32_t* L_0 = ___valueSizeInBytes3;
		*((int32_t*)L_0) = (int32_t)0;
		// Type type = null;
		V_0 = (Type_t*)NULL;
		// foreach (var control in context.controls)
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_1 = ___context0;
		RuntimeObject* L_2;
		L_2 = InputBindingCompositeContext_get_controls_m142FECF8374D6E0E3B012C8D376AB913E9634C69(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>::GetEnumerator() */, IEnumerable_1_t45141F64D6D882336B8DCC6510DC6B9C3294C6AA_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0097:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_00a1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008d_1;
			}

IL_0015_1:
			{
				// foreach (var control in context.controls)
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 L_7;
				L_7 = InterfaceFuncInvoker0< PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding>::get_Current() */, IEnumerator_1_t5AFCED6452B2551E59D8997046D5F19C8F731FB3_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				// if (control.part != part)
				int32_t L_8;
				L_8 = PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline((&V_2), NULL);
				int32_t L_9 = ___part1;
				V_4 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_10 = V_4;
				if (!L_10)
				{
					goto IL_0032_1;
				}
			}
			{
				// continue;
				goto IL_008d_1;
			}

IL_0032_1:
			{
				// var controlType = control.control.valueType;
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_11;
				L_11 = PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline((&V_2), NULL);
				NullCheck(L_11);
				Type_t* L_12;
				L_12 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type UnityEngine.InputSystem.InputControl::get_valueType() */, L_11);
				V_3 = L_12;
				// if (type == null || controlType.IsAssignableFrom(type))
				Type_t* L_13 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, (Type_t*)NULL, NULL);
				if (L_14)
				{
					goto IL_0051_1;
				}
			}
			{
				Type_t* L_15 = V_3;
				Type_t* L_16 = V_0;
				NullCheck(L_15);
				bool L_17;
				L_17 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_15, L_16);
				G_B7_0 = ((int32_t)(L_17));
				goto IL_0052_1;
			}

IL_0051_1:
			{
				G_B7_0 = 1;
			}

IL_0052_1:
			{
				V_5 = (bool)G_B7_0;
				bool L_18 = V_5;
				if (!L_18)
				{
					goto IL_005c_1;
				}
			}
			{
				// type = controlType;
				Type_t* L_19 = V_3;
				V_0 = L_19;
				goto IL_0077_1;
			}

IL_005c_1:
			{
				// else if (!type.IsAssignableFrom(controlType))
				Type_t* L_20 = V_0;
				Type_t* L_21 = V_3;
				NullCheck(L_20);
				bool L_22;
				L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_20, L_21);
				V_6 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
				bool L_23 = V_6;
				if (!L_23)
				{
					goto IL_0077_1;
				}
			}
			{
				// type = typeof(Object);
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_25;
				L_25 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_24, NULL);
				V_0 = L_25;
			}

IL_0077_1:
			{
				// valueSizeInBytes = Math.Max(control.control.valueSizeInBytes, valueSizeInBytes);
				int32_t* L_26 = ___valueSizeInBytes3;
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_27;
				L_27 = PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline((&V_2), NULL);
				NullCheck(L_27);
				int32_t L_28;
				L_28 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.InputSystem.InputControl::get_valueSizeInBytes() */, L_27);
				int32_t* L_29 = ___valueSizeInBytes3;
				int32_t L_30 = *((int32_t*)L_29);
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_31;
				L_31 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_28, L_30, NULL);
				*((int32_t*)L_26) = (int32_t)L_31;
			}

IL_008d_1:
			{
				// foreach (var control in context.controls)
				RuntimeObject* L_32 = V_1;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_00a2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		// valueType = type;
		Type_t** L_34 = ___valueType2;
		Type_t* L_35 = V_0;
		*((RuntimeObject**)L_34) = (RuntimeObject*)L_35;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_34, (void*)(RuntimeObject*)L_35);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.OneModifierComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OneModifierComposite__ctor_mB03D8DE49D44A7C6FF0AB59B5CF4F35E2F6C7A26 (OneModifierComposite_tC18745AC641308E913620A321BF1CCE00D60E55B* __this, const RuntimeMethod* method) 
{
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A(__this, NULL);
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
// System.Type UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TwoModifiersComposite_get_valueType_mD7C59304C3F9F7C9A49C29F705E500781CAE6125 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		// public override Type valueType => m_ValueType;
		Type_t* L_0 = __this->___m_ValueType_5;
		return L_0;
	}
}
// System.Int32 UnityEngine.InputSystem.Composites.TwoModifiersComposite::get_valueSizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwoModifiersComposite_get_valueSizeInBytes_m534C8107DAC6BC8F0DCCE80128D5BDB13F4F662A (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		// public override int valueSizeInBytes => m_ValueSizeInBytes;
		int32_t L_0 = __this->___m_ValueSizeInBytes_4;
		return L_0;
	}
}
// System.Single UnityEngine.InputSystem.Composites.TwoModifiersComposite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TwoModifiersComposite_EvaluateMagnitude_mBAC0B38247A658D8487B23A3BBD54CC8DFD37314 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	int32_t G_B3_0 = 0;
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return context.EvaluateMagnitude(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___context0;
		int32_t L_8 = __this->___binding_3;
		float L_9;
		L_9 = InputBindingCompositeContext_EvaluateMagnitude_m418436D265278E622B80FD3CB6E6366F5DDD2E1A(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0039;
	}

IL_0031:
	{
		// return default;
		V_1 = (0.0f);
		goto IL_0039;
	}

IL_0039:
	{
		// }
		float L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_ReadValue_mD57B7904321CE14F2796449A3A7E832FE27459B4 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, void* ___buffer1, int32_t ___bufferSize2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// context.ReadValue(binding, buffer, bufferSize);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___context0;
		int32_t L_8 = __this->___binding_3;
		void* L_9 = ___buffer1;
		int32_t L_10 = ___bufferSize2;
		InputBindingCompositeContext_ReadValue_mC797CA9EDA827FF511B0771EEF21F1B271CF16D8(L_7, L_8, L_9, L_10, NULL);
		goto IL_0041;
	}

IL_0033:
	{
		// UnsafeUtility.MemClear(buffer, m_ValueSizeInBytes);
		void* L_11 = ___buffer1;
		int32_t L_12 = __this->___m_ValueSizeInBytes_4;
		UnsafeUtility_MemClear_m0535B03E39A2A8CF84AE517549902F0025F67460(L_11, ((int64_t)L_12), NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::FinishSetup(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite_FinishSetup_mE13073D787D428DF4B1DD76A525F543D266CBF38 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	{
		// OneModifierComposite.DetermineValueTypeAndSize(ref context, binding, out m_ValueType, out m_ValueSizeInBytes);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___binding_3;
		Type_t** L_2 = (&__this->___m_ValueType_5);
		int32_t* L_3 = (&__this->___m_ValueSizeInBytes_4);
		OneModifierComposite_DetermineValueTypeAndSize_mA17788396BBF726944E2E29CD678EF42CCF11EFA(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Object UnityEngine.InputSystem.Composites.TwoModifiersComposite::ReadValueAsObject(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TwoModifiersComposite_ReadValueAsObject_m167D7477D6B669FF931EF962102B39F44305BFAE (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (context.ReadValueAsButton(modifier1) && context.ReadValueAsButton(modifier2))
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		int32_t L_1 = __this->___modifier1_1;
		bool L_2;
		L_2 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___modifier2_2;
		bool L_5;
		L_5 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_3, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return context.ReadValueAsObject(binding);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_7 = ___context0;
		int32_t L_8 = __this->___binding_3;
		RuntimeObject* L_9;
		L_9 = InputBindingCompositeContext_ReadValueAsObject_mB707A8B03313DBFE4A3DF4867FE6A20AAAFB1882(L_7, L_8, NULL);
		V_1 = L_9;
		goto IL_0035;
	}

IL_0031:
	{
		// return null;
		V_1 = NULL;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		RuntimeObject* L_10 = V_1;
		return L_10;
	}
}
// System.Void UnityEngine.InputSystem.Composites.TwoModifiersComposite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwoModifiersComposite__ctor_m46086F35D8EE4E52A60DB087F8C7D5E5AA3CB880 (TwoModifiersComposite_t7B84C109D0750D4F515629DD0D3D5C6373F42CA3* __this, const RuntimeMethod* method) 
{
	{
		InputBindingComposite__ctor_m911F4FDF8BFA44468F8D0493531190FE15242A4A(__this, NULL);
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
// UnityEngine.Vector2 UnityEngine.InputSystem.Composites.Vector2Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Composite_ReadValue_m32E400A5EEBEDD51B029B08B7E35777A91A85439 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	{
		// var mode = this.mode;
		int32_t L_0 = __this->___mode_6;
		V_0 = L_0;
		// if (mode == Mode.Analog)
		int32_t L_1 = V_0;
		V_5 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		bool L_2 = V_5;
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// var upValue = context.ReadValue<float>(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_3 = ___context0;
		int32_t L_4 = __this->___up_1;
		float L_5;
		L_5 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_3, L_4, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_6 = L_5;
		// var downValue = context.ReadValue<float>(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_6 = ___context0;
		int32_t L_7 = __this->___down_2;
		float L_8;
		L_8 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_6, L_7, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_7 = L_8;
		// var leftValue = context.ReadValue<float>(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_9 = ___context0;
		int32_t L_10 = __this->___left_3;
		float L_11;
		L_11 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_9, L_10, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_8 = L_11;
		// var rightValue = context.ReadValue<float>(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_12 = ___context0;
		int32_t L_13 = __this->___right_4;
		float L_14;
		L_14 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_12, L_13, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_9 = L_14;
		// return DpadControl.MakeDpadVector(upValue, downValue, leftValue, rightValue);
		float L_15 = V_6;
		float L_16 = V_7;
		float L_17 = V_8;
		float L_18 = V_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = DpadControl_MakeDpadVector_mD4C9050E32C089FCE8343E3361EC41BCC1ADB5D5(L_15, L_16, L_17, L_18, NULL);
		V_10 = L_19;
		goto IL_00b4;
	}

IL_005c:
	{
		// var upIsPressed = context.ReadValueAsButton(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_20 = ___context0;
		int32_t L_21 = __this->___up_1;
		bool L_22;
		L_22 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_20, L_21, NULL);
		V_1 = L_22;
		// var downIsPressed = context.ReadValueAsButton(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_23 = ___context0;
		int32_t L_24 = __this->___down_2;
		bool L_25;
		L_25 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_23, L_24, NULL);
		V_2 = L_25;
		// var leftIsPressed = context.ReadValueAsButton(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_26 = ___context0;
		int32_t L_27 = __this->___left_3;
		bool L_28;
		L_28 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_26, L_27, NULL);
		V_3 = L_28;
		// var rightIsPressed = context.ReadValueAsButton(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_29 = ___context0;
		int32_t L_30 = __this->___right_4;
		bool L_31;
		L_31 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_29, L_30, NULL);
		V_4 = L_31;
		// if (!normalize) // Was on by default.
		bool L_32 = __this->___normalize_5;
		V_11 = (bool)((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_11;
		if (!L_33)
		{
			goto IL_00a2;
		}
	}
	{
		// mode = Mode.Digital;
		V_0 = 1;
	}

IL_00a2:
	{
		// return DpadControl.MakeDpadVector(upIsPressed, downIsPressed, leftIsPressed, rightIsPressed, mode == Mode.DigitalNormalized);
		bool L_34 = V_1;
		bool L_35 = V_2;
		bool L_36 = V_3;
		bool L_37 = V_4;
		int32_t L_38 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = DpadControl_MakeDpadVector_m587FE72C8BF54651CDB4339D0126A49963B08351(L_34, L_35, L_36, L_37, (bool)((((int32_t)L_38) == ((int32_t)0))? 1 : 0), NULL);
		V_10 = L_39;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = V_10;
		return L_40;
	}
}
// System.Single UnityEngine.InputSystem.Composites.Vector2Composite::EvaluateMagnitude(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2Composite_EvaluateMagnitude_m019D431241F2FA113EB0CF79D0092315AA5942CE (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// var value = ReadValue(ref context);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_0 = ___context0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = VirtualFuncInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* >::Invoke(10 /* TValue UnityEngine.InputSystem.InputBindingComposite`1<UnityEngine.Vector2>::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&) */, __this, L_0);
		V_0 = L_1;
		// return value.magnitude;
		float L_2;
		L_2 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		V_1 = L_2;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		float L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector2Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Composite__ctor_m1625F6C3829296D1C12B55EF496E38EDC8D05006 (Vector2Composite_tCAE11D025FE085E66E963DCCD6559D042A713908* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [InputControl(layout = "Button")] public int up = 0;
		__this->___up_1 = 0;
		// [InputControl(layout = "Button")] public int down = 0;
		__this->___down_2 = 0;
		// [InputControl(layout = "Button")] public int left = 0;
		__this->___left_3 = 0;
		// [InputControl(layout = "Button")] public int right = 0;
		__this->___right_4 = 0;
		// public bool normalize = true;
		__this->___normalize_5 = (bool)1;
		InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545(__this, InputBindingComposite_1__ctor_m7A3EC8A3F30D4FD3E13C1FDD38CFB5B41B461545_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.InputSystem.Composites.Vector3Composite::ReadValue(UnityEngine.InputSystem.InputBindingCompositeContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Composite_ReadValue_m6D1BA73F518C68CDF4AEDAF1A48BA2F7ABF59AE1 (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	float G_B5_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B17_0 = 0.0f;
	float G_B20_0 = 0.0f;
	{
		// if (mode == Mode.Analog)
		int32_t L_0 = __this->___mode_7;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0078;
		}
	}
	{
		// var upValue = context.ReadValue<float>(up);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_2 = ___context0;
		int32_t L_3 = __this->___up_1;
		float L_4;
		L_4 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_2, L_3, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_1 = L_4;
		// var downValue = context.ReadValue<float>(down);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_5 = ___context0;
		int32_t L_6 = __this->___down_2;
		float L_7;
		L_7 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_5, L_6, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_2 = L_7;
		// var leftValue = context.ReadValue<float>(left);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_8 = ___context0;
		int32_t L_9 = __this->___left_3;
		float L_10;
		L_10 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_8, L_9, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_3 = L_10;
		// var rightValue = context.ReadValue<float>(right);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_11 = ___context0;
		int32_t L_12 = __this->___right_4;
		float L_13;
		L_13 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_11, L_12, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_4 = L_13;
		// var forwardValue = context.ReadValue<float>(forward);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_14 = ___context0;
		int32_t L_15 = __this->___forward_5;
		float L_16;
		L_16 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_14, L_15, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_5 = L_16;
		// var backwardValue = context.ReadValue<float>(backward);
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_17 = ___context0;
		int32_t L_18 = __this->___backward_6;
		float L_19;
		L_19 = InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648(L_17, L_18, InputBindingCompositeContext_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m633155685894F37EA0AE034D68AE0635EF444648_RuntimeMethod_var);
		V_6 = L_19;
		// return new Vector3(rightValue - leftValue, upValue - downValue, forwardValue - backwardValue);
		float L_20 = V_4;
		float L_21 = V_3;
		float L_22 = V_1;
		float L_23 = V_2;
		float L_24 = V_5;
		float L_25 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), ((float)il2cpp_codegen_subtract(L_20, L_21)), ((float)il2cpp_codegen_subtract(L_22, L_23)), ((float)il2cpp_codegen_subtract(L_24, L_25)), /*hidden argument*/NULL);
		V_7 = L_26;
		goto IL_0155;
	}

IL_0078:
	{
		// var upValue = context.ReadValueAsButton(up) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_27 = ___context0;
		int32_t L_28 = __this->___up_1;
		bool L_29;
		L_29 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_27, L_28, NULL);
		if (L_29)
		{
			goto IL_008e;
		}
	}
	{
		G_B5_0 = (0.0f);
		goto IL_0093;
	}

IL_008e:
	{
		G_B5_0 = (1.0f);
	}

IL_0093:
	{
		V_8 = G_B5_0;
		// var downValue = context.ReadValueAsButton(down) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_30 = ___context0;
		int32_t L_31 = __this->___down_2;
		bool L_32;
		L_32 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_00aa;
		}
	}
	{
		G_B8_0 = (0.0f);
		goto IL_00af;
	}

IL_00aa:
	{
		G_B8_0 = (-1.0f);
	}

IL_00af:
	{
		V_9 = G_B8_0;
		// var leftValue = context.ReadValueAsButton(left) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_33 = ___context0;
		int32_t L_34 = __this->___left_3;
		bool L_35;
		L_35 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_33, L_34, NULL);
		if (L_35)
		{
			goto IL_00c6;
		}
	}
	{
		G_B11_0 = (0.0f);
		goto IL_00cb;
	}

IL_00c6:
	{
		G_B11_0 = (-1.0f);
	}

IL_00cb:
	{
		V_10 = G_B11_0;
		// var rightValue = context.ReadValueAsButton(right) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_36 = ___context0;
		int32_t L_37 = __this->___right_4;
		bool L_38;
		L_38 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_36, L_37, NULL);
		if (L_38)
		{
			goto IL_00e2;
		}
	}
	{
		G_B14_0 = (0.0f);
		goto IL_00e7;
	}

IL_00e2:
	{
		G_B14_0 = (1.0f);
	}

IL_00e7:
	{
		V_11 = G_B14_0;
		// var forwardValue = context.ReadValueAsButton(forward) ? 1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_39 = ___context0;
		int32_t L_40 = __this->___forward_5;
		bool L_41;
		L_41 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_39, L_40, NULL);
		if (L_41)
		{
			goto IL_00fe;
		}
	}
	{
		G_B17_0 = (0.0f);
		goto IL_0103;
	}

IL_00fe:
	{
		G_B17_0 = (1.0f);
	}

IL_0103:
	{
		V_12 = G_B17_0;
		// var backwardValue = context.ReadValueAsButton(backward) ? -1f : 0f;
		InputBindingCompositeContext_t961CAA1DF29D7D4E0AE0AEF22400B285E17B1390* L_42 = ___context0;
		int32_t L_43 = __this->___backward_6;
		bool L_44;
		L_44 = InputBindingCompositeContext_ReadValueAsButton_mD3F30463AD217008C8DC0F42BA59BDC8EB37D0DB(L_42, L_43, NULL);
		if (L_44)
		{
			goto IL_011a;
		}
	}
	{
		G_B20_0 = (0.0f);
		goto IL_011f;
	}

IL_011a:
	{
		G_B20_0 = (-1.0f);
	}

IL_011f:
	{
		V_13 = G_B20_0;
		// var vector = new Vector3(leftValue + rightValue, upValue + downValue, forwardValue + backwardValue);
		float L_45 = V_10;
		float L_46 = V_11;
		float L_47 = V_8;
		float L_48 = V_9;
		float L_49 = V_12;
		float L_50 = V_13;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_14), ((float)il2cpp_codegen_add(L_45, L_46)), ((float)il2cpp_codegen_add(L_47, L_48)), ((float)il2cpp_codegen_add(L_49, L_50)), NULL);
		// if (mode == Mode.DigitalNormalized)
		int32_t L_51 = __this->___mode_7;
		V_15 = (bool)((((int32_t)L_51) == ((int32_t)1))? 1 : 0);
		bool L_52 = V_15;
		if (!L_52)
		{
			goto IL_014f;
		}
	}
	{
		// vector = vector.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		V_14 = L_53;
	}

IL_014f:
	{
		// return vector;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_14;
		V_7 = L_54;
		goto IL_0155;
	}

IL_0155:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_7;
		return L_55;
	}
}
// System.Void UnityEngine.InputSystem.Composites.Vector3Composite::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Composite__ctor_m7411C64277DE74720952DC246F08B6970AB6F5DD (Vector3Composite_t014892920D73110CD43E6CC997E0FAA5860A62E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Mode mode = Mode.Analog;
		__this->___mode_7 = 0;
		InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789(__this, InputBindingComposite_1__ctor_mCC1C23E6E7958682F8F851C7EF1C1C179E21D789_RuntimeMethod_var);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Substring_get_length_m55986408214CA7DBD05548C1E226DC2E4D6E78FC_inline (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = __this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Substring_get_index_mEF04F0C2A5292FEC77A6DE1C13C81B719C9D3012_inline (Substring_t2E16755269E6716C22074D6BC0A9099915E67849* __this, const RuntimeMethod* method) 
{
	{
		// public int index => m_Index;
		int32_t L_0 = __this->___m_Index_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PartBinding_get_part_m93F95BE7AAA2BF480FBD669060C2D1920D5B8943_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) 
{
	{
		// public int part { get; set; }
		int32_t L_0 = __this->___U3CpartU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* PartBinding_get_control_m96F4C9715F4976504BB4B9BC15D9869E66DDB4F9_inline (PartBinding_tB263B939F5CC92F02FD1C8892A194F9BC8A53D38* __this, const RuntimeMethod* method) 
{
	{
		// public InputControl control { get; set; }
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___U3CcontrolU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m4733F0A0FE136C9F8DCE4963455215585E8BE2CD_gshared_inline (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, Il2CppChar ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (Func_2_tF409A653B8F770E0A30CD80D21764FB1DDB2A28F* __this, Il2CppChar ___arg0, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC Enumerator_get_Current_mB1068DBFCAA4C19D082D5717DF265CBA6D66D4BE_gshared_inline (Enumerator_tA3FD4A2E68B869CA74DA02EF77286DF5BFB3FE31* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC L_0 = (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m1425379DCDEDB955455E242B31CD2AE43552B441_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 KeyValuePair_2_get_Key_mC668DBB7580ADCE4B3D87DA1C6E91F6E56B9EE84_gshared_inline (KeyValuePair_2_tC24A74EF64A292F5C6BA77D0B04CD6620D2DE3AC* __this, const RuntimeMethod* method) 
{
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
