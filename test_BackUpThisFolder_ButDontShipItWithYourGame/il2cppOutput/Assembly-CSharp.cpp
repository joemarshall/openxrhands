#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		R ret;
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,System.Object>
struct Dictionary_2_t0D31025D53841ACDFEBF2A85C037D32A3373CC77;
// System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>
struct Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903;
// System.Collections.Generic.IEqualityComparer`1<HandTrackingFeature/XrHandTrackingMeshFB>
struct IEqualityComparer_1_tCFA6503A5F989D6D8A46D523ED70AAC0478F773A;
// System.Collections.Generic.Dictionary`2/KeyCollection<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>
struct KeyCollection_t87C16B1C2ABCFF5EAE4C684D6627D7A52BCF7184;
// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>
struct ValueCollection_tED54A900AAE83C7AF51E4803D9A10FAAFED07266;
// System.Collections.Generic.Dictionary`2/Entry<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>[]
struct EntryU5BU5D_t005CB54A1A23546BF546972E412C79533AFF3754;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature[]
struct OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// HandTrackingFeature/XrHandJointLocationEXT[]
struct XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406;
// HandTrackingFeature/XrPosef[]
struct XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7;
// HandTrackingFeature/XrVector2f[]
struct XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1;
// HandTrackingFeature/XrVector3f[]
struct XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425;
// HandTrackingFeature/XrVector4f[]
struct XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A;
// HandTrackingFeature/XrVector4sFB[]
struct XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HandGetter
struct HandGetter_tCE0DEE34D6A0A4E4987FA9691AF89E8F78E79025;
// HandTrackingFeature
struct HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.XR.OpenXR.Features.OpenXRFeature
struct OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143;
// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// HandTrackingFeature/HandMeshArrays
struct HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50;
// HandTrackingFeature/Type_xrCreateHandTrackerEXT
struct Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A;
// HandTrackingFeature/Type_xrDestroyHandTrackerEXT
struct Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4;
// HandTrackingFeature/Type_xrGetHandMeshFB
struct Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2;
// HandTrackingFeature/Type_xrGetInstanceProcAddr
struct Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6;
// HandTrackingFeature/Type_xrLocateHandJointsEXT
struct Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8;
// HandTrackingFeature/Type_xrWaitFrame
struct Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B;
// HandTrackingFeature/XrFrameWaitInfo
struct XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513;
// HandTrackingFeature/XrHandJointsLocateInfoEXT
struct XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94;
// HandTrackingFeature/XrHandTrackerCreateInfoEXT
struct XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF;

IL2CPP_EXTERN_C RuntimeClass* BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01BCD384FD4269161526B8676C1B9EF00A2F52BF;
IL2CPP_EXTERN_C String_t* _stringLiteral1A602D6A244B204791B737B7C85B284492D6BFED;
IL2CPP_EXTERN_C String_t* _stringLiteral25E4D950781DC28AA39F9A9A59A76A93F91D9BF4;
IL2CPP_EXTERN_C String_t* _stringLiteral27335AA77C205BE47E3E092A0F5E514B4AB078D1;
IL2CPP_EXTERN_C String_t* _stringLiteral30191CBF6E141FE1EA67A46C1C5B629B00BEE425;
IL2CPP_EXTERN_C String_t* _stringLiteral5D835917E71DDCFCCA2A56B936BDBC5E429E3456;
IL2CPP_EXTERN_C String_t* _stringLiteral6571839DC0A27431D07CE419E2A436D269289E24;
IL2CPP_EXTERN_C String_t* _stringLiteral77802201CED73AC8159D8A15366DA92F4D1859F4;
IL2CPP_EXTERN_C String_t* _stringLiteral7C87B76E64B6A30385F03118A5B2DFA463C0F142;
IL2CPP_EXTERN_C String_t* _stringLiteral7ED378DD41BB6B6979CCDC264D9ABE5D4A08182A;
IL2CPP_EXTERN_C String_t* _stringLiteralABA4EE6ED8EE61C29C07D1910FB1315B424628EC;
IL2CPP_EXTERN_C String_t* _stringLiteralBA7A9686F8EE7B26E05417CF2255788F4BB14E8E;
IL2CPP_EXTERN_C String_t* _stringLiteralCD1BE1675FAFC7497CF736942A2B4BC4A6AC1ECD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6E736904D65F9F05E16150244B2402314A1F43C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mBDA0B3652C1A378FB4EFB7B23BE8EC4C1193ECFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC46CDAE53869F698864C917AE2424D05A979C2FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE4BB21B032530CDC76F373D139C8FAE368C8D5D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mDAEF58255B83ECB0C83A914C5607F6EC5A983FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_GetCallback_TisType_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_mE68774B4FBBDBFDA27DF3CD3EEED1FC20B027D0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_GetCallback_TisType_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_m5D2C28610BABA0195548A282C9CCC56DE7844211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_GetInstanceProc_TisType_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A_mDB33EBE0197C52AF9D8A2253334C8C1DC36194C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_GetInstanceProc_TisType_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4_m7657CEDA6360890B5E7A830C724AA8B0508D6292_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_GetInstanceProc_TisType_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2_mDAD6B04E045C163E989A79F752065567119E1ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_GetInstanceProc_TisType_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8_m7060EE96FB351408994F5A55642771BBF97715D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_xrGetInstanceProcAddr_HOOK_STATIC_m7FC7FBEE94AE2EB0272373C40CA92FC44B6748FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HandTrackingFeature_xrWaitFrame_HOOK_STATIC_m50BFB885ADC1907EBE49CC987D9ED2714A0E3B82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDFB30F13D9CA2D9DC3B1D3A2623B593CDC78E6B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenXRSettings_GetFeature_TisHandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_m3DC22BC5B6E3104C56BFE634F4FA0E5300129D54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406;
struct XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7;
struct XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1;
struct XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425;
struct XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A;
struct XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>
struct Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t005CB54A1A23546BF546972E412C79533AFF3754* ____entries_1;
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
	KeyCollection_t87C16B1C2ABCFF5EAE4C684D6627D7A52BCF7184* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tED54A900AAE83C7AF51E4803D9A10FAAFED07266* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___s_emptyArray_5;
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

// HandTrackingFeature/HandMeshArrays
struct HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50  : public RuntimeObject
{
	// HandTrackingFeature/XrPosef[] HandTrackingFeature/HandMeshArrays::jointBindPoses
	XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7* ___jointBindPoses_0;
	// System.Single[] HandTrackingFeature/HandMeshArrays::jointRadii
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___jointRadii_1;
	// System.Int32[] HandTrackingFeature/HandMeshArrays::jointParents
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___jointParents_2;
	// HandTrackingFeature/XrVector3f[] HandTrackingFeature/HandMeshArrays::vertexPositions
	XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* ___vertexPositions_3;
	// HandTrackingFeature/XrVector3f[] HandTrackingFeature/HandMeshArrays::vertexNormals
	XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* ___vertexNormals_4;
	// HandTrackingFeature/XrVector2f[] HandTrackingFeature/HandMeshArrays::vertexUVs
	XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1* ___vertexUVs_5;
	// HandTrackingFeature/XrVector4sFB[] HandTrackingFeature/HandMeshArrays::vertexBlendIndices
	XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A* ___vertexBlendIndices_6;
	// HandTrackingFeature/XrVector4f[] HandTrackingFeature/HandMeshArrays::vertexBlendWeights
	XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A* ___vertexBlendWeights_7;
	// System.Int16[] HandTrackingFeature/HandMeshArrays::indices
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___indices_8;
	// System.Runtime.InteropServices.GCHandle[] HandTrackingFeature/HandMeshArrays::gcPins
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* ___gcPins_9;
};

// UnityEngine.BoneWeight
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	// System.Single UnityEngine.BoneWeight::m_Weight0
	float ___m_Weight0_0;
	// System.Single UnityEngine.BoneWeight::m_Weight1
	float ___m_Weight1_1;
	// System.Single UnityEngine.BoneWeight::m_Weight2
	float ___m_Weight2_2;
	// System.Single UnityEngine.BoneWeight::m_Weight3
	float ___m_Weight3_3;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex0
	int32_t ___m_BoneIndex0_4;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex1
	int32_t ___m_BoneIndex1_5;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex2
	int32_t ___m_BoneIndex2_6;
	// System.Int32 UnityEngine.BoneWeight::m_BoneIndex3
	int32_t ___m_BoneIndex3_7;
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

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// HandTrackingFeature/XrVector2f
struct XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 
{
	// System.Single HandTrackingFeature/XrVector2f::x
	float ___x_0;
	// System.Single HandTrackingFeature/XrVector2f::y
	float ___y_1;
};

// HandTrackingFeature/XrVector3f
struct XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 
{
	// System.Single HandTrackingFeature/XrVector3f::x
	float ___x_0;
	// System.Single HandTrackingFeature/XrVector3f::y
	float ___y_1;
	// System.Single HandTrackingFeature/XrVector3f::z
	float ___z_2;
};

// HandTrackingFeature/XrVector4f
struct XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B 
{
	// System.Single HandTrackingFeature/XrVector4f::x
	float ___x_0;
	// System.Single HandTrackingFeature/XrVector4f::y
	float ___y_1;
	// System.Single HandTrackingFeature/XrVector4f::z
	float ___z_2;
	// System.Single HandTrackingFeature/XrVector4f::w
	float ___w_3;
};

// HandTrackingFeature/XrVector4sFB
struct XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607 
{
	// System.Int16 HandTrackingFeature/XrVector4sFB::x
	int16_t ___x_0;
	// System.Int16 HandTrackingFeature/XrVector4sFB::y
	int16_t ___y_1;
	// System.Int16 HandTrackingFeature/XrVector4sFB::z
	int16_t ___z_2;
	// System.Int16 HandTrackingFeature/XrVector4sFB::w
	int16_t ___w_3;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;
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

// UnityEngine.PrimitiveType
struct PrimitiveType_t72F3E6BA10E41F934F63C4F6DF88388E57911C44 
{
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// HandTrackingFeature/Hand_Index
struct Hand_Index_t5B74061849F9A5AD20FD12AB58150B066D1BBC97 
{
	// System.Int32 HandTrackingFeature/Hand_Index::value__
	int32_t ___value___2;
};

// HandTrackingFeature/XrFrameState
struct XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED 
{
	// System.Int32 HandTrackingFeature/XrFrameState::stype
	int32_t ___stype_0;
	// System.IntPtr HandTrackingFeature/XrFrameState::next
	intptr_t ___next_1;
	// System.Int64 HandTrackingFeature/XrFrameState::predictedDisplayTime
	int64_t ___predictedDisplayTime_2;
	// System.Int64 HandTrackingFeature/XrFrameState::predictedDisplayPeriod
	int64_t ___predictedDisplayPeriod_3;
	// System.Int32 HandTrackingFeature/XrFrameState::shouldRender
	int32_t ___shouldRender_4;
};

// HandTrackingFeature/XrFrameWaitInfo
struct XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513 
{
	// System.Int32 HandTrackingFeature/XrFrameWaitInfo::stype
	int32_t ___stype_0;
	// System.IntPtr HandTrackingFeature/XrFrameWaitInfo::next
	intptr_t ___next_1;
};

// HandTrackingFeature/XrHandJointLocationsEXT
struct XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9 
{
	// System.Int32 HandTrackingFeature/XrHandJointLocationsEXT::stype
	int32_t ___stype_0;
	// System.IntPtr HandTrackingFeature/XrHandJointLocationsEXT::next
	intptr_t ___next_1;
	// System.Int32 HandTrackingFeature/XrHandJointLocationsEXT::isActive
	int32_t ___isActive_2;
	// System.UInt32 HandTrackingFeature/XrHandJointLocationsEXT::jointCount
	uint32_t ___jointCount_3;
	// System.IntPtr HandTrackingFeature/XrHandJointLocationsEXT::jointLocations
	intptr_t ___jointLocations_4;
};

// HandTrackingFeature/XrHandJointsLocateInfoEXT
struct XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94 
{
	// System.Int32 HandTrackingFeature/XrHandJointsLocateInfoEXT::stype
	int32_t ___stype_0;
	// System.IntPtr HandTrackingFeature/XrHandJointsLocateInfoEXT::next
	intptr_t ___next_1;
	// System.UInt64 HandTrackingFeature/XrHandJointsLocateInfoEXT::space
	uint64_t ___space_2;
	// System.Int64 HandTrackingFeature/XrHandJointsLocateInfoEXT::time
	int64_t ___time_3;
};

// HandTrackingFeature/XrHandTrackerCreateInfoEXT
struct XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF 
{
	// System.Int32 HandTrackingFeature/XrHandTrackerCreateInfoEXT::stype
	int32_t ___stype_0;
	// System.IntPtr HandTrackingFeature/XrHandTrackerCreateInfoEXT::next
	intptr_t ___next_1;
	// System.Int32 HandTrackingFeature/XrHandTrackerCreateInfoEXT::hand
	int32_t ___hand_2;
	// System.Int32 HandTrackingFeature/XrHandTrackerCreateInfoEXT::handJointSet
	int32_t ___handJointSet_3;
};

// HandTrackingFeature/XrHandTrackingMeshFB
struct XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED 
{
	// System.Int32 HandTrackingFeature/XrHandTrackingMeshFB::stype
	int32_t ___stype_0;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::next
	intptr_t ___next_1;
	// System.UInt32 HandTrackingFeature/XrHandTrackingMeshFB::jointCapacityInput
	uint32_t ___jointCapacityInput_2;
	// System.UInt32 HandTrackingFeature/XrHandTrackingMeshFB::jointCountOutput
	uint32_t ___jointCountOutput_3;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::jointBindPoses
	intptr_t ___jointBindPoses_4;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::jointRadii
	intptr_t ___jointRadii_5;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::jointParents
	intptr_t ___jointParents_6;
	// System.UInt32 HandTrackingFeature/XrHandTrackingMeshFB::vertexCapacityInput
	uint32_t ___vertexCapacityInput_7;
	// System.UInt32 HandTrackingFeature/XrHandTrackingMeshFB::vertexCountOutput
	uint32_t ___vertexCountOutput_8;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::vertexPositions
	intptr_t ___vertexPositions_9;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::vertexNormals
	intptr_t ___vertexNormals_10;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::vertexUVs
	intptr_t ___vertexUVs_11;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::vertexBlendIndices
	intptr_t ___vertexBlendIndices_12;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::vertexBlendWeights
	intptr_t ___vertexBlendWeights_13;
	// System.UInt32 HandTrackingFeature/XrHandTrackingMeshFB::indexCapacityInput
	uint32_t ___indexCapacityInput_14;
	// System.UInt32 HandTrackingFeature/XrHandTrackingMeshFB::indexCountOutput
	uint32_t ___indexCountOutput_15;
	// System.IntPtr HandTrackingFeature/XrHandTrackingMeshFB::indices
	intptr_t ___indices_16;
};

// HandTrackingFeature/XrPosef
struct XrPosef_tF017E90616BA75330F4355028069426E8851E608 
{
	// HandTrackingFeature/XrVector4f HandTrackingFeature/XrPosef::orientation
	XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B ___orientation_0;
	// HandTrackingFeature/XrVector3f HandTrackingFeature/XrPosef::position
	XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 ___position_1;
};

// HandTrackingFeature/XrSpaceLocationFlags
struct XrSpaceLocationFlags_tCE68584012D409A61265F6D546CEA021B4C6B511 
{
	// System.Int32 HandTrackingFeature/XrSpaceLocationFlags::value__
	int32_t ___value___2;
};

// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode
struct DepthSubmissionMode_t5F7957415FA4DF079190A0C0945DB1151FCFB5FF 
{
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode::value__
	int32_t ___value___2;
};

// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode
struct RenderMode_t8246FBEEBB6A894F584A170D982FA39194FE1473 
{
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// HandTrackingFeature/XrHandJointLocationEXT
struct XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8 
{
	// System.UInt64 HandTrackingFeature/XrHandJointLocationEXT::locationFlags
	uint64_t ___locationFlags_0;
	// HandTrackingFeature/XrPosef HandTrackingFeature/XrHandJointLocationEXT::pose
	XrPosef_tF017E90616BA75330F4355028069426E8851E608 ___pose_1;
	// System.Single HandTrackingFeature/XrHandJointLocationEXT::radius
	float ___radius_2;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// UnityEngine.XR.OpenXR.OpenXRSettings
struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.OpenXR.Features.OpenXRFeature[] UnityEngine.XR.OpenXR.OpenXRSettings::features
	OpenXRFeatureU5BU5D_t1E8B328877C0D98F92ADE93D6F8C6536F92C3F3F* ___features_4;
	// UnityEngine.XR.OpenXR.OpenXRSettings/RenderMode UnityEngine.XR.OpenXR.OpenXRSettings::m_renderMode
	int32_t ___m_renderMode_5;
	// UnityEngine.XR.OpenXR.OpenXRSettings/DepthSubmissionMode UnityEngine.XR.OpenXR.OpenXRSettings::m_depthSubmissionMode
	int32_t ___m_depthSubmissionMode_6;
};

struct OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55_StaticFields
{
	// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::s_RuntimeInstance
	OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* ___s_RuntimeInstance_8;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// HandTrackingFeature/Type_xrCreateHandTrackerEXT
struct Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A  : public MulticastDelegate_t
{
};

// HandTrackingFeature/Type_xrDestroyHandTrackerEXT
struct Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4  : public MulticastDelegate_t
{
};

// HandTrackingFeature/Type_xrGetHandMeshFB
struct Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2  : public MulticastDelegate_t
{
};

// HandTrackingFeature/Type_xrGetInstanceProcAddr
struct Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6  : public MulticastDelegate_t
{
};

// HandTrackingFeature/Type_xrLocateHandJointsEXT
struct Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8  : public MulticastDelegate_t
{
};

// HandTrackingFeature/Type_xrWaitFrame
struct Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B  : public MulticastDelegate_t
{
};

// HandTrackingFeature
struct HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77  : public OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143
{
	// HandTrackingFeature/Type_xrGetInstanceProcAddr HandTrackingFeature::mOldProc
	Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* ___mOldProc_17;
	// HandTrackingFeature/Type_xrWaitFrame HandTrackingFeature::mOldWaitFrame
	Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* ___mOldWaitFrame_18;
	// System.UInt64 HandTrackingFeature::curr_instanceid
	uint64_t ___curr_instanceid_19;
	// System.UInt64 HandTrackingFeature::curr_session
	uint64_t ___curr_session_20;
	// System.Int64 HandTrackingFeature::frame_time
	int64_t ___frame_time_21;
	// System.UInt64 HandTrackingFeature::handle_left
	uint64_t ___handle_left_22;
	// System.UInt64 HandTrackingFeature::handle_right
	uint64_t ___handle_right_23;
	// System.Collections.Generic.List`1<System.Delegate> HandTrackingFeature::callbacks
	List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1* ___callbacks_25;
};

struct HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields
{
	// HandTrackingFeature HandTrackingFeature::m_Singleton
	HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* ___m_Singleton_15;
	// System.Runtime.InteropServices.GCHandle HandTrackingFeature::pinnedJointArray
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___pinnedJointArray_24;
	// System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays> HandTrackingFeature::hand_mesh_pinned_arrays
	Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* ___hand_mesh_pinned_arrays_26;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// HandGetter
struct HandGetter_tCE0DEE34D6A0A4E4987FA9691AF89E8F78E79025  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject HandGetter::lhand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lhand_4;
	// UnityEngine.GameObject HandGetter::rhand
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rhand_5;
	// System.Single HandGetter::rx
	float ___rx_6;
	// System.Single HandGetter::ry
	float ___ry_7;
	// System.Single HandGetter::rz
	float ___rz_8;
	// UnityEngine.Material HandGetter::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_9;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// HandTrackingFeature/XrHandJointLocationEXT[]
struct XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406  : public RuntimeArray
{
	ALIGN_FIELD (8) XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8 m_Items[1];

	inline XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrHandJointLocationEXT_tB18720AA88BFFEE7588943E9C017979F56310FD8 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651  : public RuntimeArray
{
	ALIGN_FIELD (8) BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F m_Items[1];

	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// HandTrackingFeature/XrVector3f[]
struct XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425  : public RuntimeArray
{
	ALIGN_FIELD (8) XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 m_Items[1];

	inline XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 value)
	{
		m_Items[index] = value;
	}
};
// HandTrackingFeature/XrVector2f[]
struct XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1  : public RuntimeArray
{
	ALIGN_FIELD (8) XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 m_Items[1];

	inline XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 value)
	{
		m_Items[index] = value;
	}
};
// HandTrackingFeature/XrVector4sFB[]
struct XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A  : public RuntimeArray
{
	ALIGN_FIELD (8) XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607 m_Items[1];

	inline XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrVector4sFB_tC9143717D8A7C00F209D2AE0F84ADA537F3FB607 value)
	{
		m_Items[index] = value;
	}
};
// HandTrackingFeature/XrVector4f[]
struct XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A  : public RuntimeArray
{
	ALIGN_FIELD (8) XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B m_Items[1];

	inline XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// HandTrackingFeature/XrPosef[]
struct XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7  : public RuntimeArray
{
	ALIGN_FIELD (8) XrPosef_tF017E90616BA75330F4355028069426E8851E608 m_Items[1];

	inline XrPosef_tF017E90616BA75330F4355028069426E8851E608 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XrPosef_tF017E90616BA75330F4355028069426E8851E608* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XrPosef_tF017E90616BA75330F4355028069426E8851E608 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline XrPosef_tF017E90616BA75330F4355028069426E8851E608 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XrPosef_tF017E90616BA75330F4355028069426E8851E608* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XrPosef_tF017E90616BA75330F4355028069426E8851E608 value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Runtime.InteropServices.GCHandle[]
struct GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785  : public RuntimeArray
{
	ALIGN_FIELD (8) GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC m_Items[1];

	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC value)
	{
		m_Items[index] = value;
	}
};


// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.IntPtr HandTrackingFeature::GetCallback<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandTrackingFeature_GetCallback_TisRuntimeObject_m5D362E6FB3F7699BB7B66E355245CE8E628F31EA_gshared (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, RuntimeObject* ___functionAddr0, const RuntimeMethod* method) ;
// T HandTrackingFeature::GetInstanceProc<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandTrackingFeature_GetInstanceProc_TisRuntimeObject_m63A2964525938C2633FCC37F3984C8FFC4E00EAE_gshared (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, String_t* ___procName0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8D55531DD97D8DCE716AB984936F5017979AB7E2_gshared (Dictionary_2_t0D31025D53841ACDFEBF2A85C037D32A3373CC77* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m05D16F69524CC3B5E1041062AA2E11E6E0045164_gshared (Dictionary_2_t0D31025D53841ACDFEBF2A85C037D32A3373CC77* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mD7DD3CD3C4E7E150ABF306032111982FEDC2212B_gshared (Dictionary_2_t0D31025D53841ACDFEBF2A85C037D32A3373CC77* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mE96214D473E9BB756A1F309AE9D29D72931CC91E_gshared (Dictionary_2_t0D31025D53841ACDFEBF2A85C037D32A3373CC77* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m46CFB5FC55F962403D19C1334BAF9FBBEA367502_gshared (Dictionary_2_t0D31025D53841ACDFEBF2A85C037D32A3373CC77* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, const RuntimeMethod* method) ;

// UnityEngine.XR.OpenXR.OpenXRSettings UnityEngine.XR.OpenXR.OpenXRSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F (const RuntimeMethod* method) ;
// TFeature UnityEngine.XR.OpenXR.OpenXRSettings::GetFeature<HandTrackingFeature>()
inline HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* OpenXRSettings_GetFeature_TisHandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_m3DC22BC5B6E3104C56BFE634F4FA0E5300129D54 (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* __this, const RuntimeMethod* method)
{
	return ((  HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* (*) (OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55*, const RuntimeMethod*))OpenXRSettings_GetFeature_TisRuntimeObject_m02D495FEA638A31EB52305C2E1721CB19B84DEAC_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature::GetHandMesh(HandTrackingFeature/Hand_Index,UnityEngine.Transform,UnityEngine.Material,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_GetHandMesh_mF76831AC1827CF914037B9427C95851FEC3F38E8 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, int32_t ___hand0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___handObj3, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature::ApplyHandJointsToMesh(HandTrackingFeature/Hand_Index,UnityEngine.GameObject,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_ApplyHandJointsToMesh_mED6855D6AB6F0FFCD729830DAEA9FBA8A8705D74 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, int32_t ___hand0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handObj1, float ___r12, float ___r23, float ___r34, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 HandTrackingFeature::xrGetInstanceProcAddr_HOOK_STATIC(System.UInt64,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrGetInstanceProcAddr_HOOK_STATIC_m7FC7FBEE94AE2EB0272373C40CA92FC44B6748FC (uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method) ;
// System.Int32 HandTrackingFeature::xrWaitFrame_HOOK_STATIC(System.UInt64,HandTrackingFeature/XrFrameWaitInfo&,HandTrackingFeature/XrFrameState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrWaitFrame_HOOK_STATIC_m50BFB885ADC1907EBE49CC987D9ED2714A0E3B82 (uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Delegate>::.ctor()
inline void List_1__ctor_mDFB30F13D9CA2D9DC3B1D3A2623B593CDC78E6B3 (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.XR.OpenXR.Features.OpenXRFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852 (OpenXRFeature_tC2F8F480D62C277B2ECDD605F64E45053CD85143* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.XR.OpenXR.Features.OpenXRFeature::get_xrGetInstanceProcAddr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t OpenXRFeature_get_xrGetInstanceProcAddr_m616F5709A63844DA12D409E8FEF4929EFA9F5B22 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Delegate System.Runtime.InteropServices.Marshal::GetDelegateForFunctionPointer(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Marshal_GetDelegateForFunctionPointer_mCD20B7B64621599ED3A9F339F94B6D73FACCE592 (intptr_t ___ptr0, Type_t* ___t1, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/Type_xrGetInstanceProcAddr::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrGetInstanceProcAddr__ctor_m71749E3B0CA9ADA679517CDC13ACACEE623C12E8 (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr HandTrackingFeature::GetCallback<HandTrackingFeature/Type_xrGetInstanceProcAddr>(T)
inline intptr_t HandTrackingFeature_GetCallback_TisType_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_mE68774B4FBBDBFDA27DF3CD3EEED1FC20B027D0C (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* ___functionAddr0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*, Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6*, const RuntimeMethod*))HandTrackingFeature_GetCallback_TisRuntimeObject_m5D362E6FB3F7699BB7B66E355245CE8E628F31EA_gshared)(__this, ___functionAddr0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 HandTrackingFeature::xrGetInstanceProcAddr_HOOK(System.UInt64,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrGetInstanceProcAddr_HOOK_m05DC0926F95CBF8C9264AFD1AF7A600DC8D24DED (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 HandTrackingFeature/Type_xrGetInstanceProcAddr::Invoke(System.UInt64,System.String,System.IntPtr&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_inline (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/Type_xrWaitFrame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrWaitFrame__ctor_mFFEB04F29EC3C4C794B7060C839D8E68F1F61965 (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IntPtr HandTrackingFeature::GetCallback<HandTrackingFeature/Type_xrWaitFrame>(T)
inline intptr_t HandTrackingFeature_GetCallback_TisType_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_m5D2C28610BABA0195548A282C9CCC56DE7844211 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* ___functionAddr0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*, Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B*, const RuntimeMethod*))HandTrackingFeature_GetCallback_TisRuntimeObject_m5D362E6FB3F7699BB7B66E355245CE8E628F31EA_gshared)(__this, ___functionAddr0, method);
}
// System.Int32 HandTrackingFeature::xrWaitFrame_HOOK(System.UInt64,HandTrackingFeature/XrFrameWaitInfo&,HandTrackingFeature/XrFrameState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrWaitFrame_HOOK_m935A808BBED9EECA691A8309490B1E7A0CE9C7D9 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method) ;
// System.Int32 HandTrackingFeature/Type_xrWaitFrame::Invoke(System.UInt64,HandTrackingFeature/XrFrameWaitInfo& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrFrameState&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_inline (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/XrHandTrackerCreateInfoEXT::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandTrackerCreateInfoEXT__ctor_m967DFB8C70E7A38B8EFAF514C82264411E99F22D (XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* __this, int32_t ___hand0, const RuntimeMethod* method) ;
// T HandTrackingFeature::GetInstanceProc<HandTrackingFeature/Type_xrCreateHandTrackerEXT>(System.String)
inline Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* HandTrackingFeature_GetInstanceProc_TisType_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A_mDB33EBE0197C52AF9D8A2253334C8C1DC36194C6 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, String_t* ___procName0, const RuntimeMethod* method)
{
	return ((  Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* (*) (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*, String_t*, const RuntimeMethod*))HandTrackingFeature_GetInstanceProc_TisRuntimeObject_m63A2964525938C2633FCC37F3984C8FFC4E00EAE_gshared)(__this, ___procName0, method);
}
// System.Int32 HandTrackingFeature/Type_xrCreateHandTrackerEXT::Invoke(System.UInt64,HandTrackingFeature/XrHandTrackerCreateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_inline (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature::closeHandTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_closeHandTracker_mA9FE59D7C45C06852E31283FCA11320372E26F11 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, const RuntimeMethod* method) ;
// T HandTrackingFeature::GetInstanceProc<HandTrackingFeature/Type_xrDestroyHandTrackerEXT>(System.String)
inline Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* HandTrackingFeature_GetInstanceProc_TisType_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4_m7657CEDA6360890B5E7A830C724AA8B0508D6292 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, String_t* ___procName0, const RuntimeMethod* method)
{
	return ((  Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* (*) (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*, String_t*, const RuntimeMethod*))HandTrackingFeature_GetInstanceProc_TisRuntimeObject_m63A2964525938C2633FCC37F3984C8FFC4E00EAE_gshared)(__this, ___procName0, method);
}
// System.Int32 HandTrackingFeature/Type_xrDestroyHandTrackerEXT::Invoke(System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_inline (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.XR.OpenXR.Features.OpenXRFeature::GetCurrentAppSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t OpenXRFeature_GetCurrentAppSpace_m5F39B98249952E0603638F217A5E0E68BCAB4366 (const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/XrHandJointsLocateInfoEXT::.ctor(System.UInt64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandJointsLocateInfoEXT__ctor_m31063180352F38AF03E96814AFDB17B7675974F9 (XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* __this, uint64_t ___space0, int64_t ___time1, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/XrHandJointLocationsEXT::.ctor(HandTrackingFeature/XrHandJointLocationEXT[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandJointLocationsEXT__ctor_m112EF77267B6E3960A7343141F404909B3A25D85 (XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* __this, XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406** ___jointArray0, const RuntimeMethod* method) ;
// T HandTrackingFeature::GetInstanceProc<HandTrackingFeature/Type_xrLocateHandJointsEXT>(System.String)
inline Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* HandTrackingFeature_GetInstanceProc_TisType_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8_m7060EE96FB351408994F5A55642771BBF97715D4 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, String_t* ___procName0, const RuntimeMethod* method)
{
	return ((  Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* (*) (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*, String_t*, const RuntimeMethod*))HandTrackingFeature_GetInstanceProc_TisRuntimeObject_m63A2964525938C2633FCC37F3984C8FFC4E00EAE_gshared)(__this, ___procName0, method);
}
// System.Int32 HandTrackingFeature/Type_xrLocateHandJointsEXT::Invoke(System.UInt64,HandTrackingFeature/XrHandJointsLocateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrHandJointLocationsEXT&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_inline (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/XrHandJointLocationsEXT::Unpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandJointLocationsEXT_Unpin_m4A59C6F1352B2AB9A6355299B7DEE7AC5BC14D9A (XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 HandTrackingFeature::PosToUnity(HandTrackingFeature/XrVector3f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandTrackingFeature_PosToUnity_m5C23734FD9E81A65299F7193904CACCBF4E9D1DB (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion HandTrackingFeature::OrientationToUnity(HandTrackingFeature/XrVector4f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandTrackingFeature_OrientationToUnity_m760960EB64C73A13A3266B53DE58DB9365FEB0A1 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B ___ori0, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/XrHandTrackingMeshFB::.ctor(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandTrackingMeshFB__ctor_m744B3233F600FFF16DEF39EA78867C886C9273E7 (XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* __this, uint32_t ___joints0, uint32_t ___vertices1, uint32_t ___indexCount2, const RuntimeMethod* method) ;
// T HandTrackingFeature::GetInstanceProc<HandTrackingFeature/Type_xrGetHandMeshFB>(System.String)
inline Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* HandTrackingFeature_GetInstanceProc_TisType_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2_mDAD6B04E045C163E989A79F752065567119E1ED9 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, String_t* ___procName0, const RuntimeMethod* method)
{
	return ((  Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* (*) (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*, String_t*, const RuntimeMethod*))HandTrackingFeature_GetInstanceProc_TisRuntimeObject_m63A2964525938C2633FCC37F3984C8FFC4E00EAE_gshared)(__this, ___procName0, method);
}
// System.Int32 HandTrackingFeature/Type_xrGetHandMeshFB::Invoke(System.UInt64,HandTrackingFeature/XrHandTrackingMeshFB&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_inline (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// HandTrackingFeature/HandMeshArrays HandTrackingFeature/XrHandTrackingMeshFB::GetArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* XrHandTrackingMeshFB_GetArrays_m36F5EFC68D913C81B2FE2C0E641554CF2E3C424A (XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_boneIndex0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_boneIndex1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex1_m79497EC149074B22E1404E962FB4D2A9E20BD1FF (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_boneIndex2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex2_m5F414DEE2B63845092F41421610A7098DCCB817D (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_boneIndex3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_boneIndex3_mDF1FAF242DB9CD0D8DFCA91BED5D340BA19C1386 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_weight0(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_weight1(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight1_m33C87BA8D869BACF4065458142F4C61DC58D612D (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_weight2(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight2_m4CF18FA89EAB0643F17A428CE8F31D11ABAA0044 (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoneWeight::set_weight3(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoneWeight_set_weight3_m59528496063DDE30B28852F29A48DEDDE8566B0E (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateTangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_bindposes(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_boneWeights(UnityEngine.BoneWeight[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_sharedMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_bones(UnityEngine.Transform[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SkinnedMeshRenderer::set_updateWhenOffscreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_updateWhenOffscreen_mED749A4C7DF00418D6BBB7B6B72843A9080CFA83 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform[] UnityEngine.SkinnedMeshRenderer::get_bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* SkinnedMeshRenderer_get_bones_mEB62CD46E7CE5C0F682C29FD0E14188707F05F09 (SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* __this, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature::GetHandJoints(HandTrackingFeature/Hand_Index,UnityEngine.Vector3[]&,UnityEngine.Quaternion[]&,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_GetHandJoints_m1C3D74762A19178B4D221C6C30ECA0009EE822C6 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, int32_t ___hand0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___positions1, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___orientations2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___radius3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>::.ctor()
inline void Dictionary_2__ctor_mE4BB21B032530CDC76F373D139C8FAE368C8D5D2 (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903*, const RuntimeMethod*))Dictionary_2__ctor_m8D55531DD97D8DCE716AB984936F5017979AB7E2_gshared)(__this, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075 (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void HandTrackingFeature/HandMeshArrays::.ctor(System.UInt32,System.UInt32,System.UInt32,HandTrackingFeature/XrHandTrackingMeshFB&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshArrays__ctor_m67DC226CEB71BF7063BD3FCD3FAC7431FE850DFB (HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* __this, uint32_t ___joints0, uint32_t ___vertices1, uint32_t ___indexCount2, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___owner3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>::Add(TKey,TValue)
inline void Dictionary_2_Add_m6E736904D65F9F05E16150244B2402314A1F43C6 (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903*, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED, HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50*, const RuntimeMethod*))Dictionary_2_Add_m05D16F69524CC3B5E1041062AA2E11E6E0045164_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mBDA0B3652C1A378FB4EFB7B23BE8EC4C1193ECFC (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903*, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED, const RuntimeMethod*))Dictionary_2_ContainsKey_mD7DD3CD3C4E7E150ABF306032111982FEDC2212B_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>::get_Item(TKey)
inline HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* Dictionary_2_get_Item_mDAEF58255B83ECB0C83A914C5607F6EC5A983FC6 (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, const RuntimeMethod* method)
{
	return ((  HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* (*) (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903*, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED, const RuntimeMethod*))Dictionary_2_get_Item_mE96214D473E9BB756A1F309AE9D29D72931CC91E_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<HandTrackingFeature/XrHandTrackingMeshFB,HandTrackingFeature/HandMeshArrays>::Remove(TKey)
inline bool Dictionary_2_Remove_mC46CDAE53869F698864C917AE2424D05A979C2FB (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903*, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED, const RuntimeMethod*))Dictionary_2_Remove_m46CFB5FC55F962403D19C1334BAF9FBBEA367502_gshared)(__this, ___key0, method);
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
// System.Void HandGetter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGetter_Start_m0B349615890B4E9855F80A67BFD7D29429CEFD4F (HandGetter_tCE0DEE34D6A0A4E4987FA9691AF89E8F78E79025* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void HandGetter::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGetter_Update_mD7C504C142925B2B3347771459A8BDFCCA98440A (HandGetter_tCE0DEE34D6A0A4E4987FA9691AF89E8F78E79025* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OpenXRSettings_GetFeature_TisHandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_m3DC22BC5B6E3104C56BFE634F4FA0E5300129D54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30191CBF6E141FE1EA67A46C1C5B629B00BEE425);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// HandTrackingFeature hf=OpenXRSettings.Instance.GetFeature<HandTrackingFeature>();
		OpenXRSettings_tC785370EE9F65516FED2B31400BF71DC84F94B55* L_0;
		L_0 = OpenXRSettings_get_Instance_m25767314F824892FDFCAFD23C0B39385BB67D92F(NULL);
		NullCheck(L_0);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_1;
		L_1 = OpenXRSettings_GetFeature_TisHandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_m3DC22BC5B6E3104C56BFE634F4FA0E5300129D54(L_0, OpenXRSettings_GetFeature_TisHandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_m3DC22BC5B6E3104C56BFE634F4FA0E5300129D54_RuntimeMethod_var);
		V_0 = L_1;
		// if(hf==null || hf.enabled==false)
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = OpenXRFeature_get_enabled_m958523A02F396C1623F2C7D7292B2E96A26270CD(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 1;
	}

IL_0021:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// print("You need to enable the openXR hand tracking support extension ");
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(_stringLiteral30191CBF6E141FE1EA67A46C1C5B629B00BEE425, NULL);
	}

IL_0032:
	{
		// if(lhand==null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___lhand_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// hf.GetHandMesh(HandTrackingFeature.Hand_Index.L,transform,mat,out lhand);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_10 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12 = __this->___mat_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_13 = (&__this->___lhand_4);
		NullCheck(L_10);
		HandTrackingFeature_GetHandMesh_mF76831AC1827CF914037B9427C95851FEC3F38E8(L_10, 0, L_11, L_12, L_13, NULL);
		goto IL_0082;
	}

IL_0060:
	{
		// hf.ApplyHandJointsToMesh(HandTrackingFeature.Hand_Index.L,lhand,rx,ry,rz);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_14 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___lhand_4;
		float L_16 = __this->___rx_6;
		float L_17 = __this->___ry_7;
		float L_18 = __this->___rz_8;
		NullCheck(L_14);
		HandTrackingFeature_ApplyHandJointsToMesh_mED6855D6AB6F0FFCD729830DAEA9FBA8A8705D74(L_14, 0, L_15, L_16, L_17, L_18, NULL);
	}

IL_0082:
	{
		// if(rhand==null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___rhand_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_20;
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00b0;
		}
	}
	{
		// hf.GetHandMesh(HandTrackingFeature.Hand_Index.R,transform,mat,out rhand);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_22 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___mat_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_25 = (&__this->___rhand_5);
		NullCheck(L_22);
		HandTrackingFeature_GetHandMesh_mF76831AC1827CF914037B9427C95851FEC3F38E8(L_22, 1, L_23, L_24, L_25, NULL);
		goto IL_00d2;
	}

IL_00b0:
	{
		// hf.ApplyHandJointsToMesh(HandTrackingFeature.Hand_Index.R,rhand,rx,ry,rz);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_26 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___rhand_5;
		float L_28 = __this->___rx_6;
		float L_29 = __this->___ry_7;
		float L_30 = __this->___rz_8;
		NullCheck(L_26);
		HandTrackingFeature_ApplyHandJointsToMesh_mED6855D6AB6F0FFCD729830DAEA9FBA8A8705D74(L_26, 1, L_27, L_28, L_29, L_30, NULL);
	}

IL_00d2:
	{
		// }
		return;
	}
}
// System.Void HandGetter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandGetter__ctor_mD1E5E83557793A9BA43ACFE8CFA8FC51CCF13E58 (HandGetter_tCE0DEE34D6A0A4E4987FA9691AF89E8F78E79025* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_HandTrackingFeature_xrGetInstanceProcAddr_HOOK_STATIC_m7FC7FBEE94AE2EB0272373C40CA92FC44B6748FC(uint64_t ___instance0, char* ___name1, intptr_t* ___function2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___name1' to managed representation
	String_t* ____name1_unmarshaled = NULL;
	____name1_unmarshaled = il2cpp_codegen_marshal_string_result(___name1);

	// Marshaling of parameter '___function2' to managed representation
	intptr_t ____function2_empty;
	memset((&____function2_empty), 0, sizeof(____function2_empty));

	// Managed method invocation
	int32_t returnValue;
	returnValue = HandTrackingFeature_xrGetInstanceProcAddr_HOOK_STATIC_m7FC7FBEE94AE2EB0272373C40CA92FC44B6748FC(___instance0, ____name1_unmarshaled, (&____function2_empty), NULL);

	// Marshaling of parameter '___function2' back from managed representation
	*___function2 = ____function2_empty;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_HandTrackingFeature_xrWaitFrame_HOOK_STATIC_m50BFB885ADC1907EBE49CC987D9ED2714A0E3B82(uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = HandTrackingFeature_xrWaitFrame_HOOK_STATIC_m50BFB885ADC1907EBE49CC987D9ED2714A0E3B82(___session0, ___waitInfo1, ___state2, NULL);

	return returnValue;
}
// System.Void HandTrackingFeature::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature__ctor_m740400CC0C338A3BE2B8D41D0069BAB79ACDE98B (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDFB30F13D9CA2D9DC3B1D3A2623B593CDC78E6B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ulong curr_instanceid = 0;
		__this->___curr_instanceid_19 = ((int64_t)0);
		// ulong curr_session = 0;
		__this->___curr_session_20 = ((int64_t)0);
		// long frame_time = 0;
		__this->___frame_time_21 = ((int64_t)0);
		// ulong handle_left = 0;
		__this->___handle_left_22 = ((int64_t)0);
		// ulong handle_right = 0;
		__this->___handle_right_23 = ((int64_t)0);
		// List<Delegate> callbacks = new List<Delegate>();
		List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1* L_0 = (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1*)il2cpp_codegen_object_new(List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mDFB30F13D9CA2D9DC3B1D3A2623B593CDC78E6B3(L_0, List_1__ctor_mDFB30F13D9CA2D9DC3B1D3A2623B593CDC78E6B3_RuntimeMethod_var);
		__this->___callbacks_25 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbacks_25), (void*)L_0);
		// public HandTrackingFeature()
		OpenXRFeature__ctor_m120460E34ECC22ED2DB96797A6DCB5C870E78852(__this, NULL);
		// m_Singleton=this;
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___m_Singleton_15 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___m_Singleton_15), (void*)__this);
		// }
		return;
	}
}
// System.Void HandTrackingFeature::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_Finalize_mC9AAF4DB6E8E63BFB7F55CB5F4AAD1140300D0E3 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000a:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// m_Singleton=null;
			il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
			((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___m_Singleton_15 = (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___m_Singleton_15), (void*)(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77*)NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 HandTrackingFeature::PosToUnity(HandTrackingFeature/XrVector3f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HandTrackingFeature_PosToUnity_m5C23734FD9E81A65299F7193904CACCBF4E9D1DB (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 ___pos0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3(pos.x,pos.y,-pos.z);
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_0 = ___pos0;
		float L_1 = L_0.___x_0;
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_2 = ___pos0;
		float L_3 = L_2.___y_1;
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_4 = ___pos0;
		float L_5 = L_4.___z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.Quaternion HandTrackingFeature::OrientationToUnity(HandTrackingFeature/XrVector4f)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 HandTrackingFeature_OrientationToUnity_m760960EB64C73A13A3266B53DE58DB9365FEB0A1 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B ___ori0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Quaternion(ori.x,ori.y,-ori.z,-ori.w);
		XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B L_0 = ___ori0;
		float L_1 = L_0.___x_0;
		XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B L_2 = ___ori0;
		float L_3 = L_2.___y_1;
		XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B L_4 = ___ori0;
		float L_5 = L_4.___z_2;
		XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B L_6 = ___ori0;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_8), L_1, L_3, ((-L_5)), ((-L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_0;
		return L_9;
	}
}
// System.IntPtr HandTrackingFeature::HookGetInstanceProcAddr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandTrackingFeature_HookGetInstanceProcAddr_mEBF630D34B68F900BFE83DB42C2C2E8595C756B8 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, intptr_t ___func0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_GetCallback_TisType_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_mE68774B4FBBDBFDA27DF3CD3EEED1FC20B027D0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_xrGetInstanceProcAddr_HOOK_STATIC_m7FC7FBEE94AE2EB0272373C40CA92FC44B6748FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mOldProc = (Type_xrGetInstanceProcAddr)Marshal.GetDelegateForFunctionPointer(xrGetInstanceProcAddr, typeof(Type_xrGetInstanceProcAddr));
		intptr_t L_0;
		L_0 = OpenXRFeature_get_xrGetInstanceProcAddr_m616F5709A63844DA12D409E8FEF4929EFA9F5B22(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_3;
		L_3 = Marshal_GetDelegateForFunctionPointer_mCD20B7B64621599ED3A9F339F94B6D73FACCE592(L_0, L_2, NULL);
		__this->___mOldProc_17 = ((Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6*)CastclassSealed((RuntimeObject*)L_3, Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOldProc_17), (void*)((Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6*)CastclassSealed((RuntimeObject*)L_3, Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_il2cpp_TypeInfo_var)));
		// return GetCallback<Type_xrGetInstanceProcAddr>(new Type_xrGetInstanceProcAddr(xrGetInstanceProcAddr_HOOK_STATIC));
		Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* L_4 = (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6*)il2cpp_codegen_object_new(Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Type_xrGetInstanceProcAddr__ctor_m71749E3B0CA9ADA679517CDC13ACACEE623C12E8(L_4, NULL, (intptr_t)((void*)HandTrackingFeature_xrGetInstanceProcAddr_HOOK_STATIC_m7FC7FBEE94AE2EB0272373C40CA92FC44B6748FC_RuntimeMethod_var), NULL);
		intptr_t L_5;
		L_5 = HandTrackingFeature_GetCallback_TisType_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_mE68774B4FBBDBFDA27DF3CD3EEED1FC20B027D0C(__this, L_4, HandTrackingFeature_GetCallback_TisType_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6_mE68774B4FBBDBFDA27DF3CD3EEED1FC20B027D0C_RuntimeMethod_var);
		V_0 = L_5;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.Int32 HandTrackingFeature::xrGetInstanceProcAddr_HOOK_STATIC(System.UInt64,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrGetInstanceProcAddr_HOOK_STATIC_m7FC7FBEE94AE2EB0272373C40CA92FC44B6748FC (uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// HandTrackingFeature hf= m_Singleton;
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_0 = ((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___m_Singleton_15;
		V_0 = L_0;
		// if(hf!=null)
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return hf.xrGetInstanceProcAddr_HOOK(instance,name,out function);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_4 = V_0;
		uint64_t L_5 = ___instance0;
		String_t* L_6 = ___name1;
		intptr_t* L_7 = ___function2;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = HandTrackingFeature_xrGetInstanceProcAddr_HOOK_m05DC0926F95CBF8C9264AFD1AF7A600DC8D24DED(L_4, L_5, L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_002b;
	}

IL_001f:
	{
		// function=IntPtr.Zero;
		intptr_t* L_9 = ___function2;
		*((intptr_t*)L_9) = (intptr_t)(0);
		// return -1;
		V_2 = (-1);
		goto IL_002b;
	}

IL_002b:
	{
		// }
		int32_t L_10 = V_2;
		return L_10;
	}
}
// System.Int32 HandTrackingFeature::xrGetInstanceProcAddr_HOOK(System.UInt64,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrGetInstanceProcAddr_HOOK_m05DC0926F95CBF8C9264AFD1AF7A600DC8D24DED (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_GetCallback_TisType_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_m5D2C28610BABA0195548A282C9CCC56DE7844211_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_xrWaitFrame_HOOK_STATIC_m50BFB885ADC1907EBE49CC987D9ED2714A0E3B82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D835917E71DDCFCCA2A56B936BDBC5E429E3456);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (name == "xrWaitFrame")
		String_t* L_0 = ___name1;
		bool L_1;
		L_1 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_0, _stringLiteral5D835917E71DDCFCCA2A56B936BDBC5E429E3456, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// int retVal = mOldProc(instance, name, out fp);
		Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* L_3 = __this->___mOldProc_17;
		uint64_t L_4 = ___instance0;
		String_t* L_5 = ___name1;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_inline(L_3, L_4, L_5, (&V_1), NULL);
		V_2 = L_6;
		// mOldWaitFrame = (Type_xrWaitFrame)Marshal.GetDelegateForFunctionPointer(fp, typeof(Type_xrWaitFrame));
		intptr_t L_7 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Delegate_t* L_10;
		L_10 = Marshal_GetDelegateForFunctionPointer_mCD20B7B64621599ED3A9F339F94B6D73FACCE592(L_7, L_9, NULL);
		__this->___mOldWaitFrame_18 = ((Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B*)CastclassSealed((RuntimeObject*)L_10, Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mOldWaitFrame_18), (void*)((Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B*)CastclassSealed((RuntimeObject*)L_10, Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_il2cpp_TypeInfo_var)));
		// function = GetCallback<Type_xrWaitFrame>(new Type_xrWaitFrame(xrWaitFrame_HOOK_STATIC));
		intptr_t* L_11 = ___function2;
		Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* L_12 = (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B*)il2cpp_codegen_object_new(Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Type_xrWaitFrame__ctor_mFFEB04F29EC3C4C794B7060C839D8E68F1F61965(L_12, NULL, (intptr_t)((void*)HandTrackingFeature_xrWaitFrame_HOOK_STATIC_m50BFB885ADC1907EBE49CC987D9ED2714A0E3B82_RuntimeMethod_var), NULL);
		intptr_t L_13;
		L_13 = HandTrackingFeature_GetCallback_TisType_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_m5D2C28610BABA0195548A282C9CCC56DE7844211(__this, L_12, HandTrackingFeature_GetCallback_TisType_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B_m5D2C28610BABA0195548A282C9CCC56DE7844211_RuntimeMethod_var);
		*((intptr_t*)L_11) = (intptr_t)L_13;
		// return retVal;
		int32_t L_14 = V_2;
		V_3 = L_14;
		goto IL_0066;
	}

IL_0054:
	{
		// return mOldProc(instance, name, out function);
		Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* L_15 = __this->___mOldProc_17;
		uint64_t L_16 = ___instance0;
		String_t* L_17 = ___name1;
		intptr_t* L_18 = ___function2;
		NullCheck(L_15);
		int32_t L_19;
		L_19 = Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_inline(L_15, L_16, L_17, L_18, NULL);
		V_3 = L_19;
		goto IL_0066;
	}

IL_0066:
	{
		// }
		int32_t L_20 = V_3;
		return L_20;
	}
}
// System.Int32 HandTrackingFeature::xrWaitFrame_HOOK_STATIC(System.UInt64,HandTrackingFeature/XrFrameWaitInfo&,HandTrackingFeature/XrFrameState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrWaitFrame_HOOK_STATIC_m50BFB885ADC1907EBE49CC987D9ED2714A0E3B82 (uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// HandTrackingFeature hf= m_Singleton;
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_0 = ((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___m_Singleton_15;
		V_0 = L_0;
		// if(hf!=null)
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return hf.xrWaitFrame_HOOK(session,waitInfo,ref state);
		HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* L_4 = V_0;
		uint64_t L_5 = ___session0;
		XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* L_6 = ___waitInfo1;
		XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* L_7 = ___state2;
		NullCheck(L_4);
		int32_t L_8;
		L_8 = HandTrackingFeature_xrWaitFrame_HOOK_m935A808BBED9EECA691A8309490B1E7A0CE9C7D9(L_4, L_5, L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_0024;
	}

IL_001f:
	{
		// return -1;
		V_2 = (-1);
		goto IL_0024;
	}

IL_0024:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
// System.Int32 HandTrackingFeature::xrWaitFrame_HOOK(System.UInt64,HandTrackingFeature/XrFrameWaitInfo&,HandTrackingFeature/XrFrameState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandTrackingFeature_xrWaitFrame_HOOK_m935A808BBED9EECA691A8309490B1E7A0CE9C7D9 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int retVal = mOldWaitFrame(session, waitInfo, ref state);
		Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* L_0 = __this->___mOldWaitFrame_18;
		uint64_t L_1 = ___session0;
		XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* L_2 = ___waitInfo1;
		XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* L_3 = ___state2;
		NullCheck(L_0);
		int32_t L_4;
		L_4 = Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_inline(L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// frame_time = state.predictedDisplayTime;
		XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* L_5 = ___state2;
		int64_t L_6 = L_5->___predictedDisplayTime_2;
		__this->___frame_time_21 = L_6;
		// return retVal;
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void HandTrackingFeature::OnSessionBegin(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_OnSessionBegin_m29E788CCF254F35B662DFBCC8DA2FE0E7E9ED744 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___session0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_GetInstanceProc_TisType_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A_mDB33EBE0197C52AF9D8A2253334C8C1DC36194C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C87B76E64B6A30385F03118A5B2DFA463C0F142);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ED378DD41BB6B6979CCDC264D9ABE5D4A08182A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA7A9686F8EE7B26E05417CF2255788F4BB14E8E);
		s_Il2CppMethodInitialized = true;
	}
	XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF V_0;
	memset((&V_0), 0, sizeof(V_0));
	XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		// curr_session = session;
		uint64_t L_0 = ___session0;
		__this->___curr_session_20 = L_0;
		// XrHandTrackerCreateInfoEXT lh_create = new XrHandTrackerCreateInfoEXT(1);
		XrHandTrackerCreateInfoEXT__ctor_m967DFB8C70E7A38B8EFAF514C82264411E99F22D((&V_0), 1, NULL);
		// XrHandTrackerCreateInfoEXT rh_create = new XrHandTrackerCreateInfoEXT(2);
		XrHandTrackerCreateInfoEXT__ctor_m967DFB8C70E7A38B8EFAF514C82264411E99F22D((&V_1), 2, NULL);
		// int retVal=0;
		V_2 = 0;
		// retVal = GetInstanceProc<Type_xrCreateHandTrackerEXT>("xrCreateHandTrackerEXT")(curr_session, rh_create, out handle_right);
		Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* L_1;
		L_1 = HandTrackingFeature_GetInstanceProc_TisType_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A_mDB33EBE0197C52AF9D8A2253334C8C1DC36194C6(__this, _stringLiteralBA7A9686F8EE7B26E05417CF2255788F4BB14E8E, HandTrackingFeature_GetInstanceProc_TisType_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A_mDB33EBE0197C52AF9D8A2253334C8C1DC36194C6_RuntimeMethod_var);
		uint64_t L_2 = __this->___curr_session_20;
		uint64_t* L_3 = (&__this->___handle_right_23);
		NullCheck(L_1);
		int32_t L_4;
		L_4 = Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_inline(L_1, L_2, (&V_1), L_3, NULL);
		V_2 = L_4;
		// if(retVal!=0)
		int32_t L_5 = V_2;
		V_3 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.Log("Couldn't open right  hand tracker: Error "+retVal);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7ED378DD41BB6B6979CCDC264D9ABE5D4A08182A, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// return;
		goto IL_009e;
	}

IL_005b:
	{
		// retVal = GetInstanceProc<Type_xrCreateHandTrackerEXT>("xrCreateHandTrackerEXT")(curr_session, lh_create, out handle_left);
		Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* L_9;
		L_9 = HandTrackingFeature_GetInstanceProc_TisType_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A_mDB33EBE0197C52AF9D8A2253334C8C1DC36194C6(__this, _stringLiteralBA7A9686F8EE7B26E05417CF2255788F4BB14E8E, HandTrackingFeature_GetInstanceProc_TisType_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A_mDB33EBE0197C52AF9D8A2253334C8C1DC36194C6_RuntimeMethod_var);
		uint64_t L_10 = __this->___curr_session_20;
		uint64_t* L_11 = (&__this->___handle_left_22);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_inline(L_9, L_10, (&V_0), L_11, NULL);
		V_2 = L_12;
		// if(retVal!=0)
		int32_t L_13 = V_2;
		V_4 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_009e;
		}
	}
	{
		// Debug.Log("Couldn't open left  hand tracker: Error "+retVal);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_16;
		L_16 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7C87B76E64B6A30385F03118A5B2DFA463C0F142, L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_16, NULL);
		// return;
		goto IL_009e;
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void HandTrackingFeature::OnSessionEnd(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_OnSessionEnd_m919DED378E136354017EC9BCD42B3F5A845A86A2 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___session0, const RuntimeMethod* method) 
{
	{
		// closeHandTracker();
		HandTrackingFeature_closeHandTracker_mA9FE59D7C45C06852E31283FCA11320372E26F11(__this, NULL);
		// curr_session = 0;
		__this->___curr_session_20 = ((int64_t)0);
		// }
		return;
	}
}
// System.Void HandTrackingFeature::OnSessionDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_OnSessionDestroy_m2036EC33B9E3754EEE04BE0F9E3121C8C03E5D54 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___xrSession0, const RuntimeMethod* method) 
{
	{
		// closeHandTracker();
		HandTrackingFeature_closeHandTracker_mA9FE59D7C45C06852E31283FCA11320372E26F11(__this, NULL);
		// curr_session = 0;
		__this->___curr_session_20 = ((int64_t)0);
		// }
		return;
	}
}
// System.Void HandTrackingFeature::closeHandTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_closeHandTracker_mA9FE59D7C45C06852E31283FCA11320372E26F11 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_GetInstanceProc_TisType_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4_m7657CEDA6360890B5E7A830C724AA8B0508D6292_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E4D950781DC28AA39F9A9A59A76A93F91D9BF4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* V_4 = NULL;
	bool V_5 = false;
	{
		// if (handle_left != 0)
		uint64_t L_0 = __this->___handle_left_22;
		V_0 = (bool)((!(((uint64_t)L_0) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// Type_xrDestroyHandTrackerEXT fp = GetInstanceProc<Type_xrDestroyHandTrackerEXT>("xrDestroyHandTrackerEXT");
		Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* L_2;
		L_2 = HandTrackingFeature_GetInstanceProc_TisType_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4_m7657CEDA6360890B5E7A830C724AA8B0508D6292(__this, _stringLiteral25E4D950781DC28AA39F9A9A59A76A93F91D9BF4, HandTrackingFeature_GetInstanceProc_TisType_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4_m7657CEDA6360890B5E7A830C724AA8B0508D6292_RuntimeMethod_var);
		V_1 = L_2;
		// if (fp != null)
		Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0033;
		}
	}
	{
		// fp(handle_left);
		Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* L_5 = V_1;
		uint64_t L_6 = __this->___handle_left_22;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_inline(L_5, L_6, NULL);
	}

IL_0033:
	{
		// handle_left = 0;
		__this->___handle_left_22 = ((int64_t)0);
	}

IL_003c:
	{
		// if (handle_right != 0)
		uint64_t L_8 = __this->___handle_right_23;
		V_3 = (bool)((!(((uint64_t)L_8) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		// Type_xrDestroyHandTrackerEXT fp = GetInstanceProc<Type_xrDestroyHandTrackerEXT>("xrDestroyHandTrackerEXT");
		Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* L_10;
		L_10 = HandTrackingFeature_GetInstanceProc_TisType_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4_m7657CEDA6360890B5E7A830C724AA8B0508D6292(__this, _stringLiteral25E4D950781DC28AA39F9A9A59A76A93F91D9BF4, HandTrackingFeature_GetInstanceProc_TisType_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4_m7657CEDA6360890B5E7A830C724AA8B0508D6292_RuntimeMethod_var);
		V_4 = L_10;
		// if (fp != null)
		Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* L_11 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0073;
		}
	}
	{
		// fp(handle_right);
		Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* L_13 = V_4;
		uint64_t L_14 = __this->___handle_right_23;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_inline(L_13, L_14, NULL);
	}

IL_0073:
	{
		// handle_right = 0;
		__this->___handle_right_23 = ((int64_t)0);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Boolean HandTrackingFeature::OnInstanceCreate(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandTrackingFeature_OnInstanceCreate_mCB01C99143F9289DE5E82312F0492B66728EF53B (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// curr_instanceid = xrInstance;
		uint64_t L_0 = ___xrInstance0;
		__this->___curr_instanceid_19 = L_0;
		// return true;
		V_0 = (bool)1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void HandTrackingFeature::OnInstanceDestroy(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_OnInstanceDestroy_m78E868603F3E844B11C1330A87AE54E281561513 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, uint64_t ___xrInstance0, const RuntimeMethod* method) 
{
	{
		// closeHandTracker();
		HandTrackingFeature_closeHandTracker_mA9FE59D7C45C06852E31283FCA11320372E26F11(__this, NULL);
		// curr_instanceid = 0;
		__this->___curr_instanceid_19 = ((int64_t)0);
		// }
		return;
	}
}
// System.Void HandTrackingFeature::GetHandJoints(HandTrackingFeature/Hand_Index,UnityEngine.Vector3[]&,UnityEngine.Quaternion[]&,System.Single[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_GetHandJoints_m1C3D74762A19178B4D221C6C30ECA0009EE822C6 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, int32_t ___hand0, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___positions1, QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** ___orientations2, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** ___radius3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_GetInstanceProc_TisType_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8_m7060EE96FB351408994F5A55642771BBF97715D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27335AA77C205BE47E3E092A0F5E514B4AB078D1);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* V_3 = NULL;
	XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94 V_4;
	memset((&V_4), 0, sizeof(V_4));
	XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	{
		// ulong handle=0;
		V_0 = ((int64_t)0);
		// if(hand==Hand_Index.L)
		int32_t L_0 = ___hand0;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// handle=handle_left;
		uint64_t L_2 = __this->___handle_left_22;
		V_0 = L_2;
		goto IL_0020;
	}

IL_0017:
	{
		// handle=handle_right;
		uint64_t L_3 = __this->___handle_right_23;
		V_0 = L_3;
	}

IL_0020:
	{
		// if (handle != 0)
		uint64_t L_4 = V_0;
		V_2 = (bool)((!(((uint64_t)L_4) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0154;
		}
	}
	{
		// XrHandJointLocationEXT[] allJoints = new XrHandJointLocationEXT[26];
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_6 = (XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406*)(XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406*)SZArrayNew(XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406_il2cpp_TypeInfo_var, (uint32_t)((int32_t)26));
		V_3 = L_6;
		// XrHandJointsLocateInfoEXT jli = new XrHandJointsLocateInfoEXT(OpenXRFeature.GetCurrentAppSpace(), frame_time);
		uint64_t L_7;
		L_7 = OpenXRFeature_GetCurrentAppSpace_m5F39B98249952E0603638F217A5E0E68BCAB4366(NULL);
		int64_t L_8 = __this->___frame_time_21;
		XrHandJointsLocateInfoEXT__ctor_m31063180352F38AF03E96814AFDB17B7675974F9((&V_4), L_7, L_8, NULL);
		// XrHandJointLocationsEXT joints = new XrHandJointLocationsEXT(ref allJoints);
		XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9 L_9;
		memset((&L_9), 0, sizeof(L_9));
		XrHandJointLocationsEXT__ctor_m112EF77267B6E3960A7343141F404909B3A25D85((&L_9), (&V_3), /*hidden argument*/NULL);
		V_5 = L_9;
		// Type_xrLocateHandJointsEXT fp = GetInstanceProc<Type_xrLocateHandJointsEXT>("xrLocateHandJointsEXT");
		Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* L_10;
		L_10 = HandTrackingFeature_GetInstanceProc_TisType_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8_m7060EE96FB351408994F5A55642771BBF97715D4(__this, _stringLiteral27335AA77C205BE47E3E092A0F5E514B4AB078D1, HandTrackingFeature_GetInstanceProc_TisType_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8_m7060EE96FB351408994F5A55642771BBF97715D4_RuntimeMethod_var);
		V_6 = L_10;
		// if (fp != null)
		Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* L_11 = V_6;
		V_7 = (bool)((!(((RuntimeObject*)(Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8*)L_11) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_0153;
		}
	}
	{
		// int retVal = fp(handle, jli, ref joints);
		Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* L_13 = V_6;
		uint64_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_inline(L_13, L_14, (&V_4), (&V_5), NULL);
		V_8 = L_15;
		// joints.Unpin();
		XrHandJointLocationsEXT_Unpin_m4A59C6F1352B2AB9A6355299B7DEE7AC5BC14D9A((&V_5), NULL);
		// if (retVal == 0)
		int32_t L_16 = V_8;
		V_9 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_9;
		if (!L_17)
		{
			goto IL_0152;
		}
	}
	{
		// positions = new Vector3[allJoints.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_18 = ___positions1;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_19 = V_3;
		NullCheck(L_19);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)));
		*((RuntimeObject**)L_18) = (RuntimeObject*)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_18, (void*)(RuntimeObject*)L_20);
		// orientations = new Quaternion[allJoints.Length];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_21 = ___orientations2;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_22 = V_3;
		NullCheck(L_22);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_23 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)));
		*((RuntimeObject**)L_21) = (RuntimeObject*)L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_23);
		// radius = new float[allJoints.Length];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_24 = ___radius3;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_25 = V_3;
		NullCheck(L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)));
		*((RuntimeObject**)L_24) = (RuntimeObject*)L_26;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_24, (void*)(RuntimeObject*)L_26);
		// for (int c = 0; c < allJoints.Length; c++)
		V_10 = 0;
		goto IL_0140;
	}

IL_00b8:
	{
		// positions[c] = PosToUnity(allJoints[c].pose.position);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_27 = ___positions1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_27);
		int32_t L_29 = V_10;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_30 = V_3;
		int32_t L_31 = V_10;
		NullCheck(L_30);
		XrPosef_tF017E90616BA75330F4355028069426E8851E608* L_32 = (&((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___pose_1);
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_33 = L_32->___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = HandTrackingFeature_PosToUnity_m5C23734FD9E81A65299F7193904CACCBF4E9D1DB(__this, L_33, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_34);
		// orientations[c] = OrientationToUnity(allJoints[c].pose.orientation);
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_35 = ___orientations2;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_36 = *((QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7**)L_35);
		int32_t L_37 = V_10;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_38 = V_3;
		int32_t L_39 = V_10;
		NullCheck(L_38);
		XrPosef_tF017E90616BA75330F4355028069426E8851E608* L_40 = (&((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___pose_1);
		XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B L_41 = L_40->___orientation_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = HandTrackingFeature_OrientationToUnity_m760960EB64C73A13A3266B53DE58DB9365FEB0A1(__this, L_41, NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974)L_42);
		// if ((allJoints[c].locationFlags & 0x3) == 0)
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_43 = V_3;
		int32_t L_44 = V_10;
		NullCheck(L_43);
		uint64_t L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___locationFlags_0;
		V_11 = (bool)((((int64_t)((int64_t)((int64_t)L_45&((int64_t)3)))) == ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0124;
		}
	}
	{
		// radius[c] = 0f;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_47 = ___radius3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_47);
		int32_t L_49 = V_10;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (float)(0.0f));
		goto IL_0139;
	}

IL_0124:
	{
		// radius[c] = allJoints[c].radius;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_50 = ___radius3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = *((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C**)L_50);
		int32_t L_52 = V_10;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_53 = V_3;
		int32_t L_54 = V_10;
		NullCheck(L_53);
		float L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___radius_2;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (float)L_55);
	}

IL_0139:
	{
		// for (int c = 0; c < allJoints.Length; c++)
		int32_t L_56 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0140:
	{
		// for (int c = 0; c < allJoints.Length; c++)
		int32_t L_57 = V_10;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_58 = V_3;
		NullCheck(L_58);
		V_12 = (bool)((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))? 1 : 0);
		bool L_59 = V_12;
		if (L_59)
		{
			goto IL_00b8;
		}
	}
	{
		// return;
		goto IL_016d;
	}

IL_0152:
	{
	}

IL_0153:
	{
	}

IL_0154:
	{
		// positions = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_60 = ___positions1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_60) = (RuntimeObject*)L_61;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_60, (void*)(RuntimeObject*)L_61);
		// orientations = new Quaternion[0];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7** L_62 = ___orientations2;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_63 = (QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7*)SZArrayNew(QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_62) = (RuntimeObject*)L_63;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_62, (void*)(RuntimeObject*)L_63);
		// radius = new float[0];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C** L_64 = ___radius3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_65 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_64) = (RuntimeObject*)L_65;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_64, (void*)(RuntimeObject*)L_65);
	}

IL_016d:
	{
		// }
		return;
	}
}
// System.Void HandTrackingFeature::GetHandMesh(HandTrackingFeature/Hand_Index,UnityEngine.Transform,UnityEngine.Material,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_GetHandMesh_mF76831AC1827CF914037B9427C95851FEC3F38E8 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, int32_t ___hand0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___handObj3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_GetInstanceProc_TisType_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2_mDAD6B04E045C163E989A79F752065567119E1ED9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01BCD384FD4269161526B8676C1B9EF00A2F52BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A602D6A244B204791B737B7C85B284492D6BFED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6571839DC0A27431D07CE419E2A436D269289E24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77802201CED73AC8159D8A15366DA92F4D1859F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABA4EE6ED8EE61C29C07D1910FB1315B424628EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD1BE1675FAFC7497CF736942A2B4BC4A6AC1ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED V_4;
	memset((&V_4), 0, sizeof(V_4));
	Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* V_5 = NULL;
	int32_t V_6 = 0;
	XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED V_7;
	memset((&V_7), 0, sizeof(V_7));
	SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* V_8 = NULL;
	HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* V_9 = NULL;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_10 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_11 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_12 = NULL;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_13 = NULL;
	BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* V_14 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_15 = NULL;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_16 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_17 = NULL;
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* V_18 = NULL;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 V_22;
	memset((&V_22), 0, sizeof(V_22));
	XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 V_23;
	memset((&V_23), 0, sizeof(V_23));
	XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 V_24;
	memset((&V_24), 0, sizeof(V_24));
	bool V_25 = false;
	int32_t V_26 = 0;
	bool V_27 = false;
	int32_t V_28 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_29 = NULL;
	bool V_30 = false;
	int32_t V_31 = 0;
	XrPosef_tF017E90616BA75330F4355028069426E8851E608 V_32;
	memset((&V_32), 0, sizeof(V_32));
	XrPosef_tF017E90616BA75330F4355028069426E8851E608 V_33;
	memset((&V_33), 0, sizeof(V_33));
	bool V_34 = false;
	bool V_35 = false;
	{
		// handObj=null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_0 = ___handObj3;
		*((RuntimeObject**)L_0) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)NULL);
		// ulong handle=0;
		V_0 = ((int64_t)0);
		// string bone_postfix="";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if(hand==Hand_Index.L)
		int32_t L_1 = ___hand0;
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// handle=handle_left;
		uint64_t L_3 = __this->___handle_left_22;
		V_0 = L_3;
		// bone_postfix="_lh";
		V_1 = _stringLiteral6571839DC0A27431D07CE419E2A436D269289E24;
		goto IL_0036;
	}

IL_0027:
	{
		// handle=handle_right;
		uint64_t L_4 = __this->___handle_right_23;
		V_0 = L_4;
		// bone_postfix="_rh";
		V_1 = _stringLiteral77802201CED73AC8159D8A15366DA92F4D1859F4;
	}

IL_0036:
	{
		// if (handle != 0)
		uint64_t L_5 = V_0;
		V_3 = (bool)((!(((uint64_t)L_5) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_057e;
		}
	}
	{
		// XrHandTrackingMeshFB meshZero = new XrHandTrackingMeshFB(0, 0, 0);
		XrHandTrackingMeshFB__ctor_m744B3233F600FFF16DEF39EA78867C886C9273E7((&V_4), 0, 0, 0, NULL);
		// Type_xrGetHandMeshFB mesh_get_fn = GetInstanceProc<Type_xrGetHandMeshFB>("xrGetHandMeshFB");
		Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* L_7;
		L_7 = HandTrackingFeature_GetInstanceProc_TisType_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2_mDAD6B04E045C163E989A79F752065567119E1ED9(__this, _stringLiteral1A602D6A244B204791B737B7C85B284492D6BFED, HandTrackingFeature_GetInstanceProc_TisType_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2_mDAD6B04E045C163E989A79F752065567119E1ED9_RuntimeMethod_var);
		V_5 = L_7;
		// int retVal = mesh_get_fn(handle, ref meshZero);
		Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* L_8 = V_5;
		uint64_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_inline(L_8, L_9, (&V_4), NULL);
		V_6 = L_10;
		// XrHandTrackingMeshFB mesh = new XrHandTrackingMeshFB(meshZero.jointCountOutput, meshZero.vertexCountOutput, meshZero.indexCountOutput);
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_11 = V_4;
		uint32_t L_12 = L_11.___jointCountOutput_3;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_13 = V_4;
		uint32_t L_14 = L_13.___vertexCountOutput_8;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_15 = V_4;
		uint32_t L_16 = L_15.___indexCountOutput_15;
		XrHandTrackingMeshFB__ctor_m744B3233F600FFF16DEF39EA78867C886C9273E7((&V_7), L_12, L_14, L_16, NULL);
		// retVal = mesh_get_fn(handle, ref mesh);
		Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* L_17 = V_5;
		uint64_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_inline(L_17, L_18, (&V_7), NULL);
		V_6 = L_19;
		// if(retVal!=0)return;
		int32_t L_20 = V_6;
		V_19 = (bool)((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
		bool L_21 = V_19;
		if (!L_21)
		{
			goto IL_009e;
		}
	}
	{
		// if(retVal!=0)return;
		goto IL_057e;
	}

IL_009e:
	{
		// if(hand==Hand_Index.L)
		int32_t L_22 = ___hand0;
		V_20 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		bool L_23 = V_20;
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		// handObj = new GameObject("lhand");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_24 = ___handObj3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_25, _stringLiteral01BCD384FD4269161526B8676C1B9EF00A2F52BF, NULL);
		*((RuntimeObject**)L_24) = (RuntimeObject*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_24, (void*)(RuntimeObject*)L_25);
		goto IL_00c8;
	}

IL_00b9:
	{
		// handObj = new GameObject("rhand");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_26 = ___handObj3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_27, _stringLiteralCD1BE1675FAFC7497CF736942A2B4BC4A6AC1ECD, NULL);
		*((RuntimeObject**)L_26) = (RuntimeObject*)L_27;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_26, (void*)(RuntimeObject*)L_27);
	}

IL_00c8:
	{
		// handObj.transform.parent=parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_28 = ___handObj3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_28);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = ___parent1;
		NullCheck(L_30);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_30, L_31, NULL);
		// SkinnedMeshRenderer rend = handObj.AddComponent<SkinnedMeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_32 = ___handObj3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_32);
		NullCheck(L_33);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_34;
		L_34 = GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6(L_33, GameObject_AddComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m9321F801992B06F6F3B2AEC106B40F3C294285A6_RuntimeMethod_var);
		V_8 = L_34;
		// HandMeshArrays meshArrays = mesh.GetArrays();
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_35;
		L_35 = XrHandTrackingMeshFB_GetArrays_m36F5EFC68D913C81B2FE2C0E641554CF2E3C424A((&V_7), NULL);
		V_9 = L_35;
		// Mesh handShape = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_36 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_36, NULL);
		V_10 = L_36;
		// Vector3[] vertices = new Vector3[mesh.vertexCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_37 = V_7;
		uint32_t L_38 = L_37.___vertexCountOutput_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_39 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_11 = L_39;
		// Vector3[] normals = new Vector3[mesh.vertexCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_40 = V_7;
		uint32_t L_41 = L_40.___vertexCountOutput_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_41);
		V_12 = L_42;
		// Vector2[] uvs = new Vector2[mesh.vertexCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_43 = V_7;
		uint32_t L_44 = L_43.___vertexCountOutput_8;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_13 = L_45;
		// BoneWeight []weights=new BoneWeight[mesh.vertexCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_46 = V_7;
		uint32_t L_47 = L_46.___vertexCountOutput_8;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_48 = (BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651*)SZArrayNew(BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651_il2cpp_TypeInfo_var, (uint32_t)L_47);
		V_14 = L_48;
		// int[] triangles = new int[mesh.indexCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_49 = V_7;
		uint32_t L_50 = L_49.___indexCountOutput_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_50);
		V_15 = L_51;
		// for (int c = 0; c < mesh.vertexCountOutput; c++)
		V_21 = 0;
		goto IL_02c5;
	}

IL_013f:
	{
		// XrVector3f pos = meshArrays.vertexPositions[c];
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_52 = V_9;
		NullCheck(L_52);
		XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* L_53 = L_52->___vertexPositions_3;
		int32_t L_54 = V_21;
		NullCheck(L_53);
		int32_t L_55 = L_54;
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_22 = L_56;
		// XrVector2f uv = meshArrays.vertexUVs[c];
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_57 = V_9;
		NullCheck(L_57);
		XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1* L_58 = L_57->___vertexUVs_5;
		int32_t L_59 = V_21;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_23 = L_61;
		// XrVector3f normal=meshArrays.vertexNormals[c];
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_62 = V_9;
		NullCheck(L_62);
		XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* L_63 = L_62->___vertexNormals_4;
		int32_t L_64 = V_21;
		NullCheck(L_63);
		int32_t L_65 = L_64;
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		V_24 = L_66;
		// vertices[c] = PosToUnity(pos);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = V_11;
		int32_t L_68 = V_21;
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_69 = V_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = HandTrackingFeature_PosToUnity_m5C23734FD9E81A65299F7193904CACCBF4E9D1DB(__this, L_69, NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_70);
		// uvs[c] = new Vector2(uv.x, uv.y);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_71 = V_13;
		int32_t L_72 = V_21;
		XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 L_73 = V_23;
		float L_74 = L_73.___x_0;
		XrVector2f_t0154F0EFE9882DA5CD00710FE42ABFA660F97D01 L_75 = V_23;
		float L_76 = L_75.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_77), L_74, L_76, /*hidden argument*/NULL);
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_77);
		// normals[c]=PosToUnity(normal);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_78 = V_12;
		int32_t L_79 = V_21;
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_80 = V_24;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = HandTrackingFeature_PosToUnity_m5C23734FD9E81A65299F7193904CACCBF4E9D1DB(__this, L_80, NULL);
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(L_79), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_81);
		// weights[c].boneIndex0=meshArrays.vertexBlendIndices[c].x;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_82 = V_14;
		int32_t L_83 = V_21;
		NullCheck(L_82);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_84 = V_9;
		NullCheck(L_84);
		XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A* L_85 = L_84->___vertexBlendIndices_6;
		int32_t L_86 = V_21;
		NullCheck(L_85);
		int16_t L_87 = ((L_85)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_86)))->___x_0;
		BoneWeight_set_boneIndex0_mC11383D890013A65F158A7D3F81AB2C4A1C6B8FC(((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83))), L_87, NULL);
		// weights[c].boneIndex1=meshArrays.vertexBlendIndices[c].y;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_88 = V_14;
		int32_t L_89 = V_21;
		NullCheck(L_88);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_90 = V_9;
		NullCheck(L_90);
		XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A* L_91 = L_90->___vertexBlendIndices_6;
		int32_t L_92 = V_21;
		NullCheck(L_91);
		int16_t L_93 = ((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92)))->___y_1;
		BoneWeight_set_boneIndex1_m79497EC149074B22E1404E962FB4D2A9E20BD1FF(((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_89))), L_93, NULL);
		// weights[c].boneIndex2=meshArrays.vertexBlendIndices[c].z;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_94 = V_14;
		int32_t L_95 = V_21;
		NullCheck(L_94);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_96 = V_9;
		NullCheck(L_96);
		XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A* L_97 = L_96->___vertexBlendIndices_6;
		int32_t L_98 = V_21;
		NullCheck(L_97);
		int16_t L_99 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)))->___z_2;
		BoneWeight_set_boneIndex2_m5F414DEE2B63845092F41421610A7098DCCB817D(((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_95))), L_99, NULL);
		// weights[c].boneIndex3=meshArrays.vertexBlendIndices[c].w;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_100 = V_14;
		int32_t L_101 = V_21;
		NullCheck(L_100);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_102 = V_9;
		NullCheck(L_102);
		XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A* L_103 = L_102->___vertexBlendIndices_6;
		int32_t L_104 = V_21;
		NullCheck(L_103);
		int16_t L_105 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104)))->___w_3;
		BoneWeight_set_boneIndex3_mDF1FAF242DB9CD0D8DFCA91BED5D340BA19C1386(((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101))), L_105, NULL);
		// weights[c].weight0=meshArrays.vertexBlendWeights[c].x;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_106 = V_14;
		int32_t L_107 = V_21;
		NullCheck(L_106);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_108 = V_9;
		NullCheck(L_108);
		XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A* L_109 = L_108->___vertexBlendWeights_7;
		int32_t L_110 = V_21;
		NullCheck(L_109);
		float L_111 = ((L_109)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_110)))->___x_0;
		BoneWeight_set_weight0_m8756609C6942EDC04DA03F59A57986D520DB86E7(((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_107))), L_111, NULL);
		// weights[c].weight1=meshArrays.vertexBlendWeights[c].y;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_112 = V_14;
		int32_t L_113 = V_21;
		NullCheck(L_112);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_114 = V_9;
		NullCheck(L_114);
		XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A* L_115 = L_114->___vertexBlendWeights_7;
		int32_t L_116 = V_21;
		NullCheck(L_115);
		float L_117 = ((L_115)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_116)))->___y_1;
		BoneWeight_set_weight1_m33C87BA8D869BACF4065458142F4C61DC58D612D(((L_112)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_113))), L_117, NULL);
		// weights[c].weight2=meshArrays.vertexBlendWeights[c].z;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_118 = V_14;
		int32_t L_119 = V_21;
		NullCheck(L_118);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_120 = V_9;
		NullCheck(L_120);
		XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A* L_121 = L_120->___vertexBlendWeights_7;
		int32_t L_122 = V_21;
		NullCheck(L_121);
		float L_123 = ((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_122)))->___z_2;
		BoneWeight_set_weight2_m4CF18FA89EAB0643F17A428CE8F31D11ABAA0044(((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_119))), L_123, NULL);
		// weights[c].weight3=meshArrays.vertexBlendWeights[c].w;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_124 = V_14;
		int32_t L_125 = V_21;
		NullCheck(L_124);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_126 = V_9;
		NullCheck(L_126);
		XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A* L_127 = L_126->___vertexBlendWeights_7;
		int32_t L_128 = V_21;
		NullCheck(L_127);
		float L_129 = ((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_128)))->___w_3;
		BoneWeight_set_weight3_m59528496063DDE30B28852F29A48DEDDE8566B0E(((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_125))), L_129, NULL);
		// for (int c = 0; c < mesh.vertexCountOutput; c++)
		int32_t L_130 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_02c5:
	{
		// for (int c = 0; c < mesh.vertexCountOutput; c++)
		int32_t L_131 = V_21;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_132 = V_7;
		uint32_t L_133 = L_132.___vertexCountOutput_8;
		V_25 = (bool)((((int64_t)((int64_t)L_131)) < ((int64_t)((int64_t)(uint64_t)L_133)))? 1 : 0);
		bool L_134 = V_25;
		if (L_134)
		{
			goto IL_013f;
		}
	}
	{
		// for (int c = 0; c < mesh.indexCountOutput; c+=3)
		V_26 = 0;
		goto IL_031d;
	}

IL_02e0:
	{
		// triangles[c] = meshArrays.indices[c+2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_15;
		int32_t L_136 = V_26;
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_137 = V_9;
		NullCheck(L_137);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_138 = L_137->___indices_8;
		int32_t L_139 = V_26;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 2));
		int16_t L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_136), (int32_t)L_141);
		// triangles[c+1] = meshArrays.indices[c+1];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = V_15;
		int32_t L_143 = V_26;
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_144 = V_9;
		NullCheck(L_144);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_145 = L_144->___indices_8;
		int32_t L_146 = V_26;
		NullCheck(L_145);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		int16_t L_148 = (L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_143, 1))), (int32_t)L_148);
		// triangles[c+2] = meshArrays.indices[c];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = V_15;
		int32_t L_150 = V_26;
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_151 = V_9;
		NullCheck(L_151);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_152 = L_151->___indices_8;
		int32_t L_153 = V_26;
		NullCheck(L_152);
		int32_t L_154 = L_153;
		int16_t L_155 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_150, 2))), (int32_t)L_155);
		// for (int c = 0; c < mesh.indexCountOutput; c+=3)
		int32_t L_156 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_156, 3));
	}

IL_031d:
	{
		// for (int c = 0; c < mesh.indexCountOutput; c+=3)
		int32_t L_157 = V_26;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_158 = V_7;
		uint32_t L_159 = L_158.___indexCountOutput_15;
		V_27 = (bool)((((int64_t)((int64_t)L_157)) < ((int64_t)((int64_t)(uint64_t)L_159)))? 1 : 0);
		bool L_160 = V_27;
		if (L_160)
		{
			goto IL_02e0;
		}
	}
	{
		// handShape.vertices=vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_161 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_162 = V_11;
		NullCheck(L_161);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_161, L_162, NULL);
		// handShape.uv=uvs;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_163 = V_10;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_164 = V_13;
		NullCheck(L_163);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_163, L_164, NULL);
		// handShape.triangles=triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_165 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = V_15;
		NullCheck(L_165);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_165, L_166, NULL);
		// handShape.normals=normals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_167 = V_10;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_168 = V_12;
		NullCheck(L_167);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_167, L_168, NULL);
		// handShape.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_169 = V_10;
		NullCheck(L_169);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_169, NULL);
		// handShape.RecalculateTangents();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_170 = V_10;
		NullCheck(L_170);
		Mesh_RecalculateTangents_m92AC413FAF889C5E811D86DCE0C25ED4625825EC(L_170, NULL);
		// Transform[] boneTransforms=new Transform[mesh.jointCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_171 = V_7;
		uint32_t L_172 = L_171.___jointCountOutput_3;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_173 = (TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24*)SZArrayNew(TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24_il2cpp_TypeInfo_var, (uint32_t)L_172);
		V_16 = L_173;
		// GameObject[] bones = new GameObject[mesh.jointCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_174 = V_7;
		uint32_t L_175 = L_174.___jointCountOutput_3;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_176 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_175);
		V_17 = L_176;
		// Matrix4x4[] bindPoses = new Matrix4x4[mesh.jointCountOutput];
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_177 = V_7;
		uint32_t L_178 = L_177.___jointCountOutput_3;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_179 = (Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D*)SZArrayNew(Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D_il2cpp_TypeInfo_var, (uint32_t)L_178);
		V_18 = L_179;
		// for (int c = 0; c < mesh.jointCountOutput; c++)
		V_28 = 0;
		goto IL_03fb;
	}

IL_0397:
	{
		// bones[c] = new GameObject("Bone_" + c + bone_postfix);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_180 = V_17;
		int32_t L_181 = V_28;
		String_t* L_182;
		L_182 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_28), NULL);
		String_t* L_183 = V_1;
		String_t* L_184;
		L_184 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralABA4EE6ED8EE61C29C07D1910FB1315B424628EC, L_182, L_183, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_185 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_185);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_185, L_184, NULL);
		NullCheck(L_180);
		ArrayElementTypeCheck (L_180, L_185);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(L_181), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_185);
		// GameObject capsule = GameObject.CreatePrimitive(PrimitiveType.Capsule);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186;
		L_186 = GameObject_CreatePrimitive_mE2F848626FE928B6E3810ABFB81867E619BB2507(1, NULL);
		V_29 = L_186;
		// capsule.transform.localScale=new Vector3(1f,1f,1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_187 = V_29;
		NullCheck(L_187);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_188;
		L_188 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_187, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_189), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_188);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_188, L_189, NULL);
		// capsule.transform.parent=bones[c].transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_190 = V_29;
		NullCheck(L_190);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_191;
		L_191 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_190, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_192 = V_17;
		int32_t L_193 = V_28;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		NullCheck(L_195);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_196;
		L_196 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_195, NULL);
		NullCheck(L_191);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_191, L_196, NULL);
		// for (int c = 0; c < mesh.jointCountOutput; c++)
		int32_t L_197 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_197, 1));
	}

IL_03fb:
	{
		// for (int c = 0; c < mesh.jointCountOutput; c++)
		int32_t L_198 = V_28;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_199 = V_7;
		uint32_t L_200 = L_199.___jointCountOutput_3;
		V_30 = (bool)((((int64_t)((int64_t)L_198)) < ((int64_t)((int64_t)(uint64_t)L_200)))? 1 : 0);
		bool L_201 = V_30;
		if (L_201)
		{
			goto IL_0397;
		}
	}
	{
		// for(int c=0;c<mesh.jointCountOutput;c++)
		V_31 = 0;
		goto IL_052d;
	}

IL_0416:
	{
		// XrPosef joint = meshArrays.jointBindPoses[c];
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_202 = V_9;
		NullCheck(L_202);
		XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7* L_203 = L_202->___jointBindPoses_0;
		int32_t L_204 = V_31;
		NullCheck(L_203);
		int32_t L_205 = L_204;
		XrPosef_tF017E90616BA75330F4355028069426E8851E608 L_206 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		V_32 = L_206;
		// XrPosef pose=meshArrays.jointBindPoses[c];
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_207 = V_9;
		NullCheck(L_207);
		XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7* L_208 = L_207->___jointBindPoses_0;
		int32_t L_209 = V_31;
		NullCheck(L_208);
		int32_t L_210 = L_209;
		XrPosef_tF017E90616BA75330F4355028069426E8851E608 L_211 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_33 = L_211;
		// bones[c].transform.position=PosToUnity(pose.position);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_212 = V_17;
		int32_t L_213 = V_31;
		NullCheck(L_212);
		int32_t L_214 = L_213;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		NullCheck(L_215);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_216;
		L_216 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_215, NULL);
		XrPosef_tF017E90616BA75330F4355028069426E8851E608 L_217 = V_33;
		XrVector3f_t24BBC5BAB8C409E660611A27C2E24C0477EEBA74 L_218 = L_217.___position_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219;
		L_219 = HandTrackingFeature_PosToUnity_m5C23734FD9E81A65299F7193904CACCBF4E9D1DB(__this, L_218, NULL);
		NullCheck(L_216);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_216, L_219, NULL);
		// bones[c].transform.rotation=OrientationToUnity(pose.orientation);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_220 = V_17;
		int32_t L_221 = V_31;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		NullCheck(L_223);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_224;
		L_224 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_223, NULL);
		XrPosef_tF017E90616BA75330F4355028069426E8851E608 L_225 = V_33;
		XrVector4f_t2F22438CB5CBC7F7FCB260FA84B0FE1E3D5E985B L_226 = L_225.___orientation_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_227;
		L_227 = HandTrackingFeature_OrientationToUnity_m760960EB64C73A13A3266B53DE58DB9365FEB0A1(__this, L_226, NULL);
		NullCheck(L_224);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_224, L_227, NULL);
		// bones[c].transform.localScale=new Vector3(meshArrays.jointRadii[c],meshArrays.jointRadii[c],meshArrays.jointRadii[c]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_228 = V_17;
		int32_t L_229 = V_31;
		NullCheck(L_228);
		int32_t L_230 = L_229;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_231 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		NullCheck(L_231);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_232;
		L_232 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_231, NULL);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_233 = V_9;
		NullCheck(L_233);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_234 = L_233->___jointRadii_1;
		int32_t L_235 = V_31;
		NullCheck(L_234);
		int32_t L_236 = L_235;
		float L_237 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_238 = V_9;
		NullCheck(L_238);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_239 = L_238->___jointRadii_1;
		int32_t L_240 = V_31;
		NullCheck(L_239);
		int32_t L_241 = L_240;
		float L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_243 = V_9;
		NullCheck(L_243);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_244 = L_243->___jointRadii_1;
		int32_t L_245 = V_31;
		NullCheck(L_244);
		int32_t L_246 = L_245;
		float L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248;
		memset((&L_248), 0, sizeof(L_248));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_248), L_237, L_242, L_247, /*hidden argument*/NULL);
		NullCheck(L_232);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_232, L_248, NULL);
		// if (meshArrays.jointParents[c] < mesh.jointCountOutput)
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_249 = V_9;
		NullCheck(L_249);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_250 = L_249->___jointParents_2;
		int32_t L_251 = V_31;
		NullCheck(L_250);
		int32_t L_252 = L_251;
		int32_t L_253 = (L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_254 = V_7;
		uint32_t L_255 = L_254.___jointCountOutput_3;
		V_34 = (bool)((((int64_t)((int64_t)L_253)) < ((int64_t)((int64_t)(uint64_t)L_255)))? 1 : 0);
		bool L_256 = V_34;
		if (!L_256)
		{
			goto IL_04e5;
		}
	}
	{
		// bones[c].transform.parent = bones[meshArrays.jointParents[c]].transform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_257 = V_17;
		int32_t L_258 = V_31;
		NullCheck(L_257);
		int32_t L_259 = L_258;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_260 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		NullCheck(L_260);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_261;
		L_261 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_260, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_262 = V_17;
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_263 = V_9;
		NullCheck(L_263);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = L_263->___jointParents_2;
		int32_t L_265 = V_31;
		NullCheck(L_264);
		int32_t L_266 = L_265;
		int32_t L_267 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_266));
		NullCheck(L_262);
		int32_t L_268 = L_267;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_269 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		NullCheck(L_269);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_270;
		L_270 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_269, NULL);
		NullCheck(L_261);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_261, L_270, NULL);
		goto IL_04ff;
	}

IL_04e5:
	{
		// bones[c].transform.parent = handObj.transform;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_271 = V_17;
		int32_t L_272 = V_31;
		NullCheck(L_271);
		int32_t L_273 = L_272;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_274 = (L_271)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		NullCheck(L_274);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_275;
		L_275 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_274, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_276 = ___handObj3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_277 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_276);
		NullCheck(L_277);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_278;
		L_278 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_277, NULL);
		NullCheck(L_275);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_275, L_278, NULL);
	}

IL_04ff:
	{
		// bindPoses[c]=bones[c].transform.worldToLocalMatrix;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_279 = V_18;
		int32_t L_280 = V_31;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_281 = V_17;
		int32_t L_282 = V_31;
		NullCheck(L_281);
		int32_t L_283 = L_282;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_284 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_283));
		NullCheck(L_284);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_285;
		L_285 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_284, NULL);
		NullCheck(L_285);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_286;
		L_286 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_285, NULL);
		NullCheck(L_279);
		(L_279)->SetAt(static_cast<il2cpp_array_size_t>(L_280), (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6)L_286);
		// boneTransforms[c]=bones[c].transform;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_287 = V_16;
		int32_t L_288 = V_31;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_289 = V_17;
		int32_t L_290 = V_31;
		NullCheck(L_289);
		int32_t L_291 = L_290;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_292 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		NullCheck(L_292);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_293;
		L_293 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_292, NULL);
		NullCheck(L_287);
		ArrayElementTypeCheck (L_287, L_293);
		(L_287)->SetAt(static_cast<il2cpp_array_size_t>(L_288), (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)L_293);
		// for(int c=0;c<mesh.jointCountOutput;c++)
		int32_t L_294 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_294, 1));
	}

IL_052d:
	{
		// for(int c=0;c<mesh.jointCountOutput;c++)
		int32_t L_295 = V_31;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_296 = V_7;
		uint32_t L_297 = L_296.___jointCountOutput_3;
		V_35 = (bool)((((int64_t)((int64_t)L_295)) < ((int64_t)((int64_t)(uint64_t)L_297)))? 1 : 0);
		bool L_298 = V_35;
		if (L_298)
		{
			goto IL_0416;
		}
	}
	{
		// handShape.bindposes=bindPoses;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_299 = V_10;
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_300 = V_18;
		NullCheck(L_299);
		Mesh_set_bindposes_m7BD70B3BC121F436B5836EABDE5E99CAD64C82FF(L_299, L_300, NULL);
		// handShape.boneWeights=weights;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_301 = V_10;
		BoneWeightU5BU5D_t76F390D8CBA0ADCB87EB98B135C8886857DFE651* L_302 = V_14;
		NullCheck(L_301);
		Mesh_set_boneWeights_m4924E79620EDC7AAA1D05CFE8B535BB37F0E8FA7(L_301, L_302, NULL);
		// rend.sharedMesh = handShape;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_303 = V_8;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_304 = V_10;
		NullCheck(L_303);
		SkinnedMeshRenderer_set_sharedMesh_m3D3A431BC8B244C21EB9D01B9A10D040D7137F98(L_303, L_304, NULL);
		// rend.bones=boneTransforms;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_305 = V_8;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_306 = V_16;
		NullCheck(L_305);
		SkinnedMeshRenderer_set_bones_m80B64F72E4E5C7901E3105594D964F25D00952D7(L_305, L_306, NULL);
		// rend.material = mat;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_307 = V_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_308 = ___mat2;
		NullCheck(L_307);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_307, L_308, NULL);
		// rend.updateWhenOffscreen=true;
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_309 = V_8;
		NullCheck(L_309);
		SkinnedMeshRenderer_set_updateWhenOffscreen_mED749A4C7DF00418D6BBB7B6B72843A9080CFA83(L_309, (bool)1, NULL);
	}

IL_057e:
	{
		// }
		return;
	}
}
// System.Void HandTrackingFeature::ApplyHandJointsToMesh(HandTrackingFeature/Hand_Index,UnityEngine.GameObject,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature_ApplyHandJointsToMesh_mED6855D6AB6F0FFCD729830DAEA9FBA8A8705D74 (HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77* __this, int32_t ___hand0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___handObj1, float ___r12, float ___r23, float ___r34, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_3 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_4 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t G_B7_0 = 0;
	{
		// ulong handle=0;
		V_0 = ((int64_t)0);
		// if(hand==Hand_Index.L)
		int32_t L_0 = ___hand0;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// handle=handle_left;
		uint64_t L_2 = __this->___handle_left_22;
		V_0 = L_2;
		goto IL_0020;
	}

IL_0017:
	{
		// handle=handle_right;
		uint64_t L_3 = __this->___handle_right_23;
		V_0 = L_3;
	}

IL_0020:
	{
		// if(handObj!=null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___handObj1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00a6;
		}
	}
	{
		// Transform []bones=handObj.GetComponent<SkinnedMeshRenderer>().bones;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___handObj1;
		NullCheck(L_7);
		SkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E* L_8;
		L_8 = GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC(L_7, GameObject_GetComponent_TisSkinnedMeshRenderer_t020C4E8648EA1C4C6BA5C41502919B387E7E1C2E_m65A61C4E0226FA3550C4CB0A04C390C452042BBC_RuntimeMethod_var);
		NullCheck(L_8);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_9;
		L_9 = SkinnedMeshRenderer_get_bones_mEB62CD46E7CE5C0F682C29FD0E14188707F05F09(L_8, NULL);
		V_3 = L_9;
		// GetHandJoints(hand,out positions,out orientations,out radius);
		int32_t L_10 = ___hand0;
		HandTrackingFeature_GetHandJoints_m1C3D74762A19178B4D221C6C30ECA0009EE822C6(__this, L_10, (&V_5), (&V_6), (&V_4), NULL);
		// if(radius.Length==bones.Length && radius[0]>0)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = V_4;
		NullCheck(L_11);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_12 = V_3;
		NullCheck(L_12);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_005c;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = V_4;
		NullCheck(L_13);
		int32_t L_14 = 0;
		float L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		G_B7_0 = ((((float)L_15) > ((float)(0.0f)))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B7_0 = 0;
	}

IL_005d:
	{
		V_7 = (bool)G_B7_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_00a5;
		}
	}
	{
		// for(int c=0;c<bones.Length;c++)
		V_8 = 0;
		goto IL_0097;
	}

IL_0069:
	{
		// bones[c].position=positions[c];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_17 = V_3;
		int32_t L_18 = V_8;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = V_5;
		int32_t L_22 = V_8;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_20);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_24, NULL);
		// bones[c].rotation=orientations[c];
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = V_3;
		int32_t L_26 = V_8;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_29 = V_6;
		int32_t L_30 = V_8;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_28);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_28, L_32, NULL);
		// for(int c=0;c<bones.Length;c++)
		int32_t L_33 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0097:
	{
		// for(int c=0;c<bones.Length;c++)
		int32_t L_34 = V_8;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_35 = V_3;
		NullCheck(L_35);
		V_9 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_9;
		if (L_36)
		{
			goto IL_0069;
		}
	}
	{
	}

IL_00a5:
	{
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void HandTrackingFeature::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandTrackingFeature__cctor_m3297CFD960353D03098C7F11C6FF7819822DE556 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE4BB21B032530CDC76F373D139C8FAE368C8D5D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<XrHandTrackingMeshFB, HandMeshArrays> hand_mesh_pinned_arrays = new Dictionary<XrHandTrackingMeshFB, HandMeshArrays>();
		Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* L_0 = (Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903*)il2cpp_codegen_object_new(Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mE4BB21B032530CDC76F373D139C8FAE368C8D5D2(L_0, Dictionary_2__ctor_mE4BB21B032530CDC76F373D139C8FAE368C8D5D2_RuntimeMethod_var);
		((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___hand_mesh_pinned_arrays_26 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___hand_mesh_pinned_arrays_26), (void*)L_0);
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
int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_Multicast(Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef int32_t (*FunctionPointerType) (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method);
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* currentDelegate = reinterpret_cast<Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___instance0, ___name1, ___function2, method);
	}
	return retVal;
}
int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_Open(Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, String_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___instance0, ___name1, ___function2, method);
}
int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_Closed(Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, String_t*, intptr_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___instance0, ___name1, ___function2, method);
}
int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_OpenStaticInvoker(Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, String_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___instance0, ___name1, ___function2);
}
int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_ClosedStaticInvoker(Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, String_t*, intptr_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instance0, ___name1, ___function2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6 (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t, char*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___instance0, ____name1_marshaled, ___function2);

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	return returnValue;
}
// System.Void HandTrackingFeature/Type_xrGetInstanceProcAddr::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrGetInstanceProcAddr__ctor_m71749E3B0CA9ADA679517CDC13ACACEE623C12E8 (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_Multicast;
}
// System.Int32 HandTrackingFeature/Type_xrGetInstanceProcAddr::Invoke(System.UInt64,System.String,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52 (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___instance0, ___name1, ___function2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HandTrackingFeature/Type_xrGetInstanceProcAddr::BeginInvoke(System.UInt64,System.String,System.IntPtr&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Type_xrGetInstanceProcAddr_BeginInvoke_mF8FBD7F393763C91B3E4EACBDAB617DF2B1D64BE (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___instance0);
	__d_args[1] = ___name1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___function2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 HandTrackingFeature/Type_xrGetInstanceProcAddr::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrGetInstanceProcAddr_EndInvoke_m9694ED589F6EB609ED4E48A780868A1E5E02E0D0 (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, intptr_t* ___function0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___function0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_Multicast(Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef int32_t (*FunctionPointerType) (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method);
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* currentDelegate = reinterpret_cast<Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___session0, ___createInfo1, ___tracker2, method);
	}
	return retVal;
}
int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_Open(Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___session0, ___createInfo1, ___tracker2, method);
}
int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_Closed(Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF*, uint64_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___session0, ___createInfo1, ___tracker2, method);
}
int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_OpenStaticInvoker(Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___session0, ___createInfo1, ___tracker2);
}
int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_ClosedStaticInvoker(Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF*, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___session0, ___createInfo1, ___tracker2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF*, uint64_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___session0, ___createInfo1, ___tracker2);

	return returnValue;
}
// System.Void HandTrackingFeature/Type_xrCreateHandTrackerEXT::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrCreateHandTrackerEXT__ctor_m4FC2A636FE6A4F4BB2896E3A093580BDEB6BCB18 (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_Multicast;
}
// System.Int32 HandTrackingFeature/Type_xrCreateHandTrackerEXT::Invoke(System.UInt64,HandTrackingFeature/XrHandTrackerCreateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7 (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___session0, ___createInfo1, ___tracker2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HandTrackingFeature/Type_xrCreateHandTrackerEXT::BeginInvoke(System.UInt64,HandTrackingFeature/XrHandTrackerCreateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Type_xrCreateHandTrackerEXT_BeginInvoke_m8A4D039B18F2CE7DA9AA7D4F36968520F282E8C4 (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___session0);
	__d_args[1] = Box(XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF_il2cpp_TypeInfo_var, &*___createInfo1);
	__d_args[2] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___tracker2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 HandTrackingFeature/Type_xrCreateHandTrackerEXT::EndInvoke(HandTrackingFeature/XrHandTrackerCreateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),System.UInt64&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrCreateHandTrackerEXT_EndInvoke_m42229DB6868E051E5A6338BF101654C5C445DEEE (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo0, uint64_t* ___tracker1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___tracker1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_Multicast(Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef int32_t (*FunctionPointerType) (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method);
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* currentDelegate = reinterpret_cast<Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___tracker0, method);
	}
	return retVal;
}
int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_Open(Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___tracker0, method);
}
int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_Closed(Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___tracker0, method);
}
int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_OpenStaticInvoker(Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, ___tracker0);
}
int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_ClosedStaticInvoker(Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, uint64_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___tracker0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4 (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___tracker0);

	return returnValue;
}
// System.Void HandTrackingFeature/Type_xrDestroyHandTrackerEXT::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrDestroyHandTrackerEXT__ctor_m14D904E905F1ABDE0C483CBC9276AD5E95FFB137 (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_Multicast;
}
// System.Int32 HandTrackingFeature/Type_xrDestroyHandTrackerEXT::Invoke(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145 (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___tracker0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HandTrackingFeature/Type_xrDestroyHandTrackerEXT::BeginInvoke(System.UInt64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Type_xrDestroyHandTrackerEXT_BeginInvoke_m35B6B4D039DC6C77BD35A0EC83B1F1999EB05811 (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___tracker0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Int32 HandTrackingFeature/Type_xrDestroyHandTrackerEXT::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrDestroyHandTrackerEXT_EndInvoke_mF81D9BECD196D994A3CCD00C1A471F87CA6C206F (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_Multicast(Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef int32_t (*FunctionPointerType) (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method);
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* currentDelegate = reinterpret_cast<Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___tracker0, ___locateInfoEXT1, ___locations2, method);
	}
	return retVal;
}
int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_Open(Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94*, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___tracker0, ___locateInfoEXT1, ___locations2, method);
}
int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_Closed(Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94*, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___tracker0, ___locateInfoEXT1, ___locations2, method);
}
int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_OpenStaticInvoker(Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94*, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* >::Invoke(__this->___method_ptr_0, method, NULL, ___tracker0, ___locateInfoEXT1, ___locations2);
}
int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_ClosedStaticInvoker(Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94*, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___tracker0, ___locateInfoEXT1, ___locations2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8 (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94*, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___tracker0, ___locateInfoEXT1, ___locations2);

	return returnValue;
}
// System.Void HandTrackingFeature/Type_xrLocateHandJointsEXT::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrLocateHandJointsEXT__ctor_mF29BAA62551927CE9FEAEF1717EBEFC3979294D8 (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_Multicast;
}
// System.Int32 HandTrackingFeature/Type_xrLocateHandJointsEXT::Invoke(System.UInt64,HandTrackingFeature/XrHandJointsLocateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrHandJointLocationsEXT&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0 (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___tracker0, ___locateInfoEXT1, ___locations2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HandTrackingFeature/Type_xrLocateHandJointsEXT::BeginInvoke(System.UInt64,HandTrackingFeature/XrHandJointsLocateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrHandJointLocationsEXT&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Type_xrLocateHandJointsEXT_BeginInvoke_m20959BE424B5341FB4C05B941AEABDA2A0C28130 (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___tracker0);
	__d_args[1] = Box(XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94_il2cpp_TypeInfo_var, &*___locateInfoEXT1);
	__d_args[2] = Box(XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9_il2cpp_TypeInfo_var, &*___locations2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 HandTrackingFeature/Type_xrLocateHandJointsEXT::EndInvoke(HandTrackingFeature/XrHandJointsLocateInfoEXT& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrHandJointLocationsEXT&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrLocateHandJointsEXT_EndInvoke_mC8AA4E99A235732A8A8CB29DCAB5C55E9791EC63 (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT0, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___locations1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_Multicast(Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef int32_t (*FunctionPointerType) (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method);
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* currentDelegate = reinterpret_cast<Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___session0, ___waitInfo1, ___state2, method);
	}
	return retVal;
}
int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_Open(Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513*, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___session0, ___waitInfo1, ___state2, method);
}
int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_Closed(Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513*, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___session0, ___waitInfo1, ___state2, method);
}
int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_OpenStaticInvoker(Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, uint64_t, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513*, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* >::Invoke(__this->___method_ptr_0, method, NULL, ___session0, ___waitInfo1, ___state2);
}
int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_ClosedStaticInvoker(Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, uint64_t, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513*, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___session0, ___waitInfo1, ___state2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513*, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___session0, ___waitInfo1, ___state2);

	return returnValue;
}
// System.Void HandTrackingFeature/Type_xrWaitFrame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrWaitFrame__ctor_mFFEB04F29EC3C4C794B7060C839D8E68F1F61965 (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_Multicast;
}
// System.Int32 HandTrackingFeature/Type_xrWaitFrame::Invoke(System.UInt64,HandTrackingFeature/XrFrameWaitInfo& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrFrameState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___session0, ___waitInfo1, ___state2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HandTrackingFeature/Type_xrWaitFrame::BeginInvoke(System.UInt64,HandTrackingFeature/XrFrameWaitInfo& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrFrameState&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Type_xrWaitFrame_BeginInvoke_mFF7BBCF7E82A70C666318EF62EA7DB53F8EA17C4 (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___session0);
	__d_args[1] = Box(XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513_il2cpp_TypeInfo_var, &*___waitInfo1);
	__d_args[2] = Box(XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED_il2cpp_TypeInfo_var, &*___state2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Int32 HandTrackingFeature/Type_xrWaitFrame::EndInvoke(HandTrackingFeature/XrFrameWaitInfo& modreq(System.Runtime.InteropServices.InAttribute),HandTrackingFeature/XrFrameState&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrWaitFrame_EndInvoke_m2666543896B69E243DE96D907B2FF3DAFB91396A (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo0, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state1, RuntimeObject* ___result2, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___state1,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
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
// System.Void HandTrackingFeature/XrHandJointsLocateInfoEXT::.ctor(System.UInt64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandJointsLocateInfoEXT__ctor_m31063180352F38AF03E96814AFDB17B7675974F9 (XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* __this, uint64_t ___space0, int64_t ___time1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stype = 1000051002;
		__this->___stype_0 = ((int32_t)1000051002);
		// this.space = space;
		uint64_t L_0 = ___space0;
		__this->___space_2 = L_0;
		// this.time = time;
		int64_t L_1 = ___time1;
		__this->___time_3 = L_1;
		// this.next = IntPtr.Zero;
		__this->___next_1 = (0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrHandJointsLocateInfoEXT__ctor_m31063180352F38AF03E96814AFDB17B7675974F9_AdjustorThunk (RuntimeObject* __this, uint64_t ___space0, int64_t ___time1, const RuntimeMethod* method)
{
	XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94*>(__this + _offset);
	XrHandJointsLocateInfoEXT__ctor_m31063180352F38AF03E96814AFDB17B7675974F9(_thisAdjusted, ___space0, ___time1, method);
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
// System.Void HandTrackingFeature/XrHandJointLocationsEXT::.ctor(HandTrackingFeature/XrHandJointLocationEXT[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandJointLocationsEXT__ctor_m112EF77267B6E3960A7343141F404909B3A25D85 (XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* __this, XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406** ___jointArray0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pinnedJointArray = GCHandle.Alloc(jointArray, GCHandleType.Pinned);
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406** L_0 = ___jointArray0;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_1 = *((XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406**)L_0);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_1, 3, NULL);
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___pinnedJointArray_24 = L_2;
		// jointCount = (uint)jointArray.Length;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406** L_3 = ___jointArray0;
		XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406* L_4 = *((XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406**)L_3);
		NullCheck(L_4);
		__this->___jointCount_3 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// stype = 1000051003;
		__this->___stype_0 = ((int32_t)1000051003);
		// next = IntPtr.Zero;
		__this->___next_1 = (0);
		// isActive = 0;
		__this->___isActive_2 = 0;
		// jointLocations = pinnedJointArray.AddrOfPinnedObject();
		intptr_t L_5;
		L_5 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___pinnedJointArray_24), NULL);
		__this->___jointLocations_4 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrHandJointLocationsEXT__ctor_m112EF77267B6E3960A7343141F404909B3A25D85_AdjustorThunk (RuntimeObject* __this, XrHandJointLocationEXTU5BU5D_t353834EEC70E5A0D6A9CDA10DED34171211A8406** ___jointArray0, const RuntimeMethod* method)
{
	XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9*>(__this + _offset);
	XrHandJointLocationsEXT__ctor_m112EF77267B6E3960A7343141F404909B3A25D85(_thisAdjusted, ___jointArray0, method);
}
// System.Void HandTrackingFeature/XrHandJointLocationsEXT::Unpin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandJointLocationsEXT_Unpin_m4A59C6F1352B2AB9A6355299B7DEE7AC5BC14D9A (XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pinnedJointArray.Free();
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___pinnedJointArray_24), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrHandJointLocationsEXT_Unpin_m4A59C6F1352B2AB9A6355299B7DEE7AC5BC14D9A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9*>(__this + _offset);
	XrHandJointLocationsEXT_Unpin_m4A59C6F1352B2AB9A6355299B7DEE7AC5BC14D9A(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HandTrackingFeature/XrHandTrackerCreateInfoEXT::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandTrackerCreateInfoEXT__ctor_m967DFB8C70E7A38B8EFAF514C82264411E99F22D (XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* __this, int32_t ___hand0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.stype = 1000051001;
		__this->___stype_0 = ((int32_t)1000051001);
		// this.next = IntPtr.Zero;
		__this->___next_1 = (0);
		// this.hand = hand;
		int32_t L_0 = ___hand0;
		__this->___hand_2 = L_0;
		// this.handJointSet = 0; // standard set of joints
		__this->___handJointSet_3 = 0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrHandTrackerCreateInfoEXT__ctor_m967DFB8C70E7A38B8EFAF514C82264411E99F22D_AdjustorThunk (RuntimeObject* __this, int32_t ___hand0, const RuntimeMethod* method)
{
	XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF*>(__this + _offset);
	XrHandTrackerCreateInfoEXT__ctor_m967DFB8C70E7A38B8EFAF514C82264411E99F22D(_thisAdjusted, ___hand0, method);
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
// System.Void HandTrackingFeature/HandMeshArrays::.ctor(System.UInt32,System.UInt32,System.UInt32,HandTrackingFeature/XrHandTrackingMeshFB&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshArrays__ctor_m67DC226CEB71BF7063BD3FCD3FAC7431FE850DFB (HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* __this, uint32_t ___joints0, uint32_t ___vertices1, uint32_t ___indexCount2, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___owner3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* V_0 = NULL;
	{
		// public HandMeshArrays(uint joints, uint vertices, uint indexCount, ref XrHandTrackingMeshFB owner)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// jointBindPoses = new XrPosef[joints];
		uint32_t L_0 = ___joints0;
		XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7* L_1 = (XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7*)(XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7*)SZArrayNew(XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___jointBindPoses_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointBindPoses_0), (void*)L_1);
		// jointRadii = new float[joints];
		uint32_t L_2 = ___joints0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___jointRadii_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointRadii_1), (void*)L_3);
		// jointParents = new int[joints];
		uint32_t L_4 = ___joints0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___jointParents_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jointParents_2), (void*)L_5);
		// vertexPositions = new XrVector3f[vertices];
		uint32_t L_6 = ___vertices1;
		XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* L_7 = (XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425*)(XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425*)SZArrayNew(XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___vertexPositions_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexPositions_3), (void*)L_7);
		// vertexNormals = new XrVector3f[vertices];
		uint32_t L_8 = ___vertices1;
		XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* L_9 = (XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425*)(XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425*)SZArrayNew(XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___vertexNormals_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexNormals_4), (void*)L_9);
		// vertexUVs = new XrVector2f[vertices];
		uint32_t L_10 = ___vertices1;
		XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1* L_11 = (XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1*)(XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1*)SZArrayNew(XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___vertexUVs_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexUVs_5), (void*)L_11);
		// vertexBlendIndices = new XrVector4sFB[vertices];
		uint32_t L_12 = ___vertices1;
		XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A* L_13 = (XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A*)(XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A*)SZArrayNew(XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___vertexBlendIndices_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexBlendIndices_6), (void*)L_13);
		// vertexBlendWeights = new XrVector4f[vertices];
		uint32_t L_14 = ___vertices1;
		XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A* L_15 = (XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A*)(XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A*)SZArrayNew(XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->___vertexBlendWeights_7 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertexBlendWeights_7), (void*)L_15);
		// indices = new short[indexCount];
		uint32_t L_16 = ___indexCount2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_17 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->___indices_8 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indices_8), (void*)L_17);
		// GCHandle[] pinnedArrays =
		// {
		//     GCHandle.Alloc(jointBindPoses, GCHandleType.Pinned),
		//     GCHandle.Alloc(jointRadii, GCHandleType.Pinned),
		//     GCHandle.Alloc(jointParents, GCHandleType.Pinned),
		//     GCHandle.Alloc(vertexPositions, GCHandleType.Pinned),
		//     GCHandle.Alloc(vertexNormals, GCHandleType.Pinned),
		//     GCHandle.Alloc(vertexUVs, GCHandleType.Pinned),
		//     GCHandle.Alloc(vertexBlendIndices, GCHandleType.Pinned),
		//     GCHandle.Alloc(vertexBlendWeights, GCHandleType.Pinned),
		//     GCHandle.Alloc(indices, GCHandleType.Pinned)
		// };
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_18 = (GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785*)(GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785*)SZArrayNew(GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_19 = L_18;
		XrPosefU5BU5D_t558D26D760AE597B4381F9483B9B3A22FBE2EBD7* L_20 = __this->___jointBindPoses_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_21;
		L_21 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_20, 3, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_21);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_22 = L_19;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = __this->___jointRadii_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_24;
		L_24 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_23, 3, NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_24);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_25 = L_22;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___jointParents_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_27;
		L_27 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_26, 3, NULL);
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_27);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_28 = L_25;
		XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* L_29 = __this->___vertexPositions_3;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_30;
		L_30 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_29, 3, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_30);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_31 = L_28;
		XrVector3fU5BU5D_t71F7B4CC4CE02D3905916469B35772A6BBEAF425* L_32 = __this->___vertexNormals_4;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_33;
		L_33 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_32, 3, NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_33);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_34 = L_31;
		XrVector2fU5BU5D_t63E134C466BF74165AF96250628916FC30CBB9E1* L_35 = __this->___vertexUVs_5;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_36;
		L_36 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_35, 3, NULL);
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(5), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_36);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_37 = L_34;
		XrVector4sFBU5BU5D_t4500781AF64B941FBB24EB1DD98C97F0D5F5487A* L_38 = __this->___vertexBlendIndices_6;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_39;
		L_39 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_38, 3, NULL);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(6), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_39);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_40 = L_37;
		XrVector4fU5BU5D_t328D1E491944B316FF1BCD50F88715147662354A* L_41 = __this->___vertexBlendWeights_7;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_42;
		L_42 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_41, 3, NULL);
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(7), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_42);
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_43 = L_40;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_44 = __this->___indices_8;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_45;
		L_45 = GCHandle_Alloc_m1FC35418B654D3F48B4F70D525EBD6A208A59075((RuntimeObject*)L_44, 3, NULL);
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(8), (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC)L_45);
		V_0 = L_43;
		// owner.jointBindPoses = pinnedArrays[0].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_46 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_47 = V_0;
		NullCheck(L_47);
		intptr_t L_48;
		L_48 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		L_46->___jointBindPoses_4 = L_48;
		// owner.jointRadii = pinnedArrays[1].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_49 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_50 = V_0;
		NullCheck(L_50);
		intptr_t L_51;
		L_51 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), NULL);
		L_49->___jointRadii_5 = L_51;
		// owner.jointParents = pinnedArrays[2].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_52 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_53 = V_0;
		NullCheck(L_53);
		intptr_t L_54;
		L_54 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), NULL);
		L_52->___jointParents_6 = L_54;
		// owner.vertexPositions = pinnedArrays[3].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_55 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_56 = V_0;
		NullCheck(L_56);
		intptr_t L_57;
		L_57 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(3))), NULL);
		L_55->___vertexPositions_9 = L_57;
		// owner.vertexNormals = pinnedArrays[4].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_58 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_59 = V_0;
		NullCheck(L_59);
		intptr_t L_60;
		L_60 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(4))), NULL);
		L_58->___vertexNormals_10 = L_60;
		// owner.vertexUVs = pinnedArrays[5].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_61 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_62 = V_0;
		NullCheck(L_62);
		intptr_t L_63;
		L_63 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(5))), NULL);
		L_61->___vertexUVs_11 = L_63;
		// owner.vertexBlendIndices = pinnedArrays[6].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_64 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_65 = V_0;
		NullCheck(L_65);
		intptr_t L_66;
		L_66 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(6))), NULL);
		L_64->___vertexBlendIndices_12 = L_66;
		// owner.vertexBlendWeights = pinnedArrays[7].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_67 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_68 = V_0;
		NullCheck(L_68);
		intptr_t L_69;
		L_69 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(7))), NULL);
		L_67->___vertexBlendWeights_13 = L_69;
		// owner.indices = pinnedArrays[8].AddrOfPinnedObject();
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_70 = ___owner3;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_71 = V_0;
		NullCheck(L_71);
		intptr_t L_72;
		L_72 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6(((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(8))), NULL);
		L_70->___indices_16 = L_72;
		// owner.jointCapacityInput = joints;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_73 = ___owner3;
		uint32_t L_74 = ___joints0;
		L_73->___jointCapacityInput_2 = L_74;
		// owner.vertexCapacityInput = vertices;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_75 = ___owner3;
		uint32_t L_76 = ___vertices1;
		L_75->___vertexCapacityInput_7 = L_76;
		// owner.indexCapacityInput = indexCount;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_77 = ___owner3;
		uint32_t L_78 = ___indexCount2;
		L_77->___indexCapacityInput_14 = L_78;
		// owner.jointCountOutput = joints;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_79 = ___owner3;
		uint32_t L_80 = ___joints0;
		L_79->___jointCountOutput_3 = L_80;
		// owner.vertexCountOutput = vertices;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_81 = ___owner3;
		uint32_t L_82 = ___vertices1;
		L_81->___vertexCountOutput_8 = L_82;
		// owner.indexCountOutput = indexCount;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* L_83 = ___owner3;
		uint32_t L_84 = ___indexCount2;
		L_83->___indexCountOutput_15 = L_84;
		// gcPins = pinnedArrays;
		GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_85 = V_0;
		__this->___gcPins_9 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gcPins_9), (void*)L_85);
		// }
		return;
	}
}
// System.Void HandTrackingFeature/HandMeshArrays::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshArrays_Finalize_m137E3F9AE43CDE9835970FAA1460041F22DEE721 (HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* V_1 = NULL;
	int32_t V_2 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// if (gcPins != null)
				GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_0 = __this->___gcPins_9;
				V_0 = (bool)((!(((RuntimeObject*)(GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_1 = V_0;
				if (!L_1)
				{
					goto IL_0039_1;
				}
			}
			{
				// foreach (GCHandle h in gcPins)
				GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_2 = __this->___gcPins_9;
				V_1 = L_2;
				V_2 = 0;
				goto IL_0032_1;
			}

IL_001c_1:
			{
				// foreach (GCHandle h in gcPins)
				GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_3 = V_1;
				int32_t L_4 = V_2;
				NullCheck(L_3);
				int32_t L_5 = L_4;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
				V_3 = L_6;
				// h.Free();
				GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_3), NULL);
				int32_t L_7 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0032_1:
			{
				// foreach (GCHandle h in gcPins)
				int32_t L_8 = V_2;
				GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785* L_9 = V_1;
				NullCheck(L_9);
				if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
				{
					goto IL_001c_1;
				}
			}
			{
			}

IL_0039_1:
			{
				// gcPins = null;
				__this->___gcPins_9 = (GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___gcPins_9), (void*)(GCHandleU5BU5D_t7EA6F2FA83CDF86871001174CF7D30033AC4A785*)NULL);
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
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
// System.Void HandTrackingFeature/XrHandTrackingMeshFB::.ctor(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XrHandTrackingMeshFB__ctor_m744B3233F600FFF16DEF39EA78867C886C9273E7 (XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* __this, uint32_t ___joints0, uint32_t ___vertices1, uint32_t ___indexCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6E736904D65F9F05E16150244B2402314A1F43C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* V_1 = NULL;
	int32_t G_B4_0 = 0;
	{
		// this.stype = 1000110001;
		__this->___stype_0 = ((int32_t)1000110001);
		// this.next = IntPtr.Zero;
		__this->___next_1 = (0);
		// jointCapacityInput = 0;
		__this->___jointCapacityInput_2 = 0;
		// jointBindPoses = IntPtr.Zero;
		__this->___jointBindPoses_4 = (0);
		// jointRadii = IntPtr.Zero;
		__this->___jointRadii_5 = (0);
		// jointParents = IntPtr.Zero;
		__this->___jointParents_6 = (0);
		// vertexCapacityInput = 0;
		__this->___vertexCapacityInput_7 = 0;
		// vertexPositions = IntPtr.Zero;
		__this->___vertexPositions_9 = (0);
		// vertexNormals = IntPtr.Zero;
		__this->___vertexNormals_10 = (0);
		// vertexUVs = IntPtr.Zero;
		__this->___vertexUVs_11 = (0);
		// vertexBlendIndices = IntPtr.Zero;
		__this->___vertexBlendIndices_12 = (0);
		// vertexBlendWeights = IntPtr.Zero;
		__this->___vertexBlendWeights_13 = (0);
		// indexCapacityInput = 0;
		__this->___indexCapacityInput_14 = 0;
		// indices = IntPtr.Zero;
		__this->___indices_16 = (0);
		// jointCountOutput=0;
		__this->___jointCountOutput_3 = 0;
		// vertexCountOutput=0;
		__this->___vertexCountOutput_8 = 0;
		// indexCountOutput=0;
		__this->___indexCountOutput_15 = 0;
		// if (joints != 0 && vertices != 0 && indexCount != 0)
		uint32_t L_0 = ___joints0;
		if (!L_0)
		{
			goto IL_00b0;
		}
	}
	{
		uint32_t L_1 = ___vertices1;
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		uint32_t L_2 = ___indexCount2;
		G_B4_0 = ((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B4_0 = 0;
	}

IL_00b1:
	{
		V_0 = (bool)G_B4_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_00d3;
		}
	}
	{
		// HandMeshArrays arrays = new HandMeshArrays(joints, vertices, indexCount, ref this);
		uint32_t L_4 = ___joints0;
		uint32_t L_5 = ___vertices1;
		uint32_t L_6 = ___indexCount2;
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_7 = (HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50*)il2cpp_codegen_object_new(HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HandMeshArrays__ctor_m67DC226CEB71BF7063BD3FCD3FAC7431FE850DFB(L_7, L_4, L_5, L_6, __this, NULL);
		V_1 = L_7;
		// hand_mesh_pinned_arrays.Add(this, arrays);
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* L_8 = ((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___hand_mesh_pinned_arrays_26;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_9 = (*(XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*)__this);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_10 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_m6E736904D65F9F05E16150244B2402314A1F43C6(L_8, L_9, L_10, Dictionary_2_Add_m6E736904D65F9F05E16150244B2402314A1F43C6_RuntimeMethod_var);
	}

IL_00d3:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void XrHandTrackingMeshFB__ctor_m744B3233F600FFF16DEF39EA78867C886C9273E7_AdjustorThunk (RuntimeObject* __this, uint32_t ___joints0, uint32_t ___vertices1, uint32_t ___indexCount2, const RuntimeMethod* method)
{
	XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*>(__this + _offset);
	XrHandTrackingMeshFB__ctor_m744B3233F600FFF16DEF39EA78867C886C9273E7(_thisAdjusted, ___joints0, ___vertices1, ___indexCount2, method);
}
// HandTrackingFeature/HandMeshArrays HandTrackingFeature/XrHandTrackingMeshFB::GetArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* XrHandTrackingMeshFB_GetArrays_m36F5EFC68D913C81B2FE2C0E641554CF2E3C424A (XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mBDA0B3652C1A378FB4EFB7B23BE8EC4C1193ECFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC46CDAE53869F698864C917AE2424D05A979C2FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDAEF58255B83ECB0C83A914C5607F6EC5A983FC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* V_1 = NULL;
	HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* V_2 = NULL;
	{
		// if (hand_mesh_pinned_arrays.ContainsKey(this))
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* L_0 = ((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___hand_mesh_pinned_arrays_26;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_1 = (*(XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*)__this);
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mBDA0B3652C1A378FB4EFB7B23BE8EC4C1193ECFC(L_0, L_1, Dictionary_2_ContainsKey_mBDA0B3652C1A378FB4EFB7B23BE8EC4C1193ECFC_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// HandMeshArrays arrays = hand_mesh_pinned_arrays[this];
		il2cpp_codegen_runtime_class_init_inline(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var);
		Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* L_4 = ((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___hand_mesh_pinned_arrays_26;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_5 = (*(XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*)__this);
		NullCheck(L_4);
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_6;
		L_6 = Dictionary_2_get_Item_mDAEF58255B83ECB0C83A914C5607F6EC5A983FC6(L_4, L_5, Dictionary_2_get_Item_mDAEF58255B83ECB0C83A914C5607F6EC5A983FC6_RuntimeMethod_var);
		V_1 = L_6;
		// hand_mesh_pinned_arrays.Remove(this);
		Dictionary_2_tC1919F60F55746786A4373EF15DFC59A0B20C903* L_7 = ((HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_StaticFields*)il2cpp_codegen_static_fields_for(HandTrackingFeature_t44E9153E08FDAB91D0735E44F6B786D0C99EDC77_il2cpp_TypeInfo_var))->___hand_mesh_pinned_arrays_26;
		XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED L_8 = (*(XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*)__this);
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_mC46CDAE53869F698864C917AE2424D05A979C2FB(L_7, L_8, Dictionary_2_Remove_mC46CDAE53869F698864C917AE2424D05A979C2FB_RuntimeMethod_var);
		// return arrays;
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_10 = V_1;
		V_2 = L_10;
		goto IL_0040;
	}

IL_003c:
	{
		// return null;
		V_2 = (HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50*)NULL;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* L_11 = V_2;
		return L_11;
	}
}
IL2CPP_EXTERN_C  HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* XrHandTrackingMeshFB_GetArrays_m36F5EFC68D913C81B2FE2C0E641554CF2E3C424A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*>(__this + _offset);
	HandMeshArrays_tF27441D0F97BE04A409939FCE6E5D5782C350B50* _returnValue;
	_returnValue = XrHandTrackingMeshFB_GetArrays_m36F5EFC68D913C81B2FE2C0E641554CF2E3C424A(_thisAdjusted, method);
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
int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_Multicast(Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef int32_t (*FunctionPointerType) (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method);
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* currentDelegate = reinterpret_cast<Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2*>(delegatesToInvoke[i]);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___handTracker0, ___mesh1, method);
	}
	return retVal;
}
int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_Open(Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (uint64_t, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___handTracker0, ___mesh1, method);
}
int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_Closed(Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint64_t, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___handTracker0, ___mesh1, method);
}
int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_OpenStaticInvoker(Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, uint64_t, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* >::Invoke(__this->___method_ptr_0, method, NULL, ___handTracker0, ___mesh1);
}
int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_ClosedStaticInvoker(Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, RuntimeObject*, uint64_t, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handTracker0, ___mesh1);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2 (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(uint64_t, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handTracker0, ___mesh1);

	return returnValue;
}
// System.Void HandTrackingFeature/Type_xrGetHandMeshFB::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Type_xrGetHandMeshFB__ctor_m28CBFD28E2FD3C646A3CAB78C80D64FCCF2FB651 (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_Closed;
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)&Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_Closed;
	}
	__this->___extra_arg_5 = (intptr_t)&Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_Multicast;
}
// System.Int32 HandTrackingFeature/Type_xrGetHandMeshFB::Invoke(System.UInt64,HandTrackingFeature/XrHandTrackingMeshFB&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62 (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___handTracker0, ___mesh1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult HandTrackingFeature/Type_xrGetHandMeshFB::BeginInvoke(System.UInt64,HandTrackingFeature/XrHandTrackingMeshFB&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Type_xrGetHandMeshFB_BeginInvoke_mE968AD001AEC72DBA4E540AD49BD932A65579473 (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___handTracker0);
	__d_args[1] = Box(XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED_il2cpp_TypeInfo_var, &*___mesh1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Int32 HandTrackingFeature/Type_xrGetHandMeshFB::EndInvoke(HandTrackingFeature/XrHandTrackingMeshFB&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_xrGetHandMeshFB_EndInvoke_m703E8821B7BC43A4C936451436A936303D47B2C8 (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___mesh0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrGetInstanceProcAddr_Invoke_mBC370035AE765FE1571A94AE211A9A1DE6FE5D52_inline (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrGetInstanceProcAddr_t92714D47715AF6701CD209B399010387E03C1FD6* __this, uint64_t ___instance0, String_t* ___name1, intptr_t* ___function2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___instance0, ___name1, ___function2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrWaitFrame_Invoke_m837AE28B9356A0F01E5F0FFAEA9BF0DEED5ED32B_inline (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrWaitFrame_t54656B73496AA49A6D991152DFA181FE1311057B* __this, uint64_t ___session0, XrFrameWaitInfo_t660D43540348FEA8BA17AF199F3B9FA436BE0513* ___waitInfo1, XrFrameState_t024B88D455750B7BF59967142A0088BBD531ABED* ___state2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___session0, ___waitInfo1, ___state2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrCreateHandTrackerEXT_Invoke_mE89C52641A82119D5B6287F883D442CB7B62D5A7_inline (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrCreateHandTrackerEXT_tE917F4B412BBEA0EFD96B723EABF6E0835FBF76A* __this, uint64_t ___session0, XrHandTrackerCreateInfoEXT_t6258A694F31EC7FE1148716AD8673A630AF2C4EF* ___createInfo1, uint64_t* ___tracker2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___session0, ___createInfo1, ___tracker2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrDestroyHandTrackerEXT_Invoke_mEDCD155CFDDDCF67921AEAC0CA6DE0F5E8C3A145_inline (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrDestroyHandTrackerEXT_t8094874D5BE6D4F5065E0149C5DD42B2CAACBAC4* __this, uint64_t ___tracker0, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___tracker0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrLocateHandJointsEXT_Invoke_m7D5B58527DE78262330A25E2E042138116CA3BF0_inline (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrLocateHandJointsEXT_tDDF2AF26E5911375BCEBAFD14C27D9B254B099B8* __this, uint64_t ___tracker0, XrHandJointsLocateInfoEXT_t462FE5D05C20646DD006F07C7572A42E199B9B94* ___locateInfoEXT1, XrHandJointLocationsEXT_t0402124C01670F68D856F5C339EA51FF6AC760E9* ___locations2, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___tracker0, ___locateInfoEXT1, ___locations2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Type_xrGetHandMeshFB_Invoke_mF687481682E576978FCB0E05FE559270E5E89D62_inline (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (Type_xrGetHandMeshFB_tD7D758298C53930B9708F04109091A3F3C8FC0C2* __this, uint64_t ___handTracker0, XrHandTrackingMeshFB_tBDEE02317E0391159F8E19767D05AE0157D220ED* ___mesh1, const RuntimeMethod* method);
	return ((FunctionPointerType)__this->___invoke_impl_1)(__this, ___handTracker0, ___mesh1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
