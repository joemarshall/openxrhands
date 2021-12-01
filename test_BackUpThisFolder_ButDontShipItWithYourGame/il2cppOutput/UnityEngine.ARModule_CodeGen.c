#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
extern void PoseData_get_rotation_m6A15A78CF66E4D2F9E2EE9FE88BC8D89A65EB904 (void);
// 0x00000002 UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
extern void PoseData_get_position_mEE4843D61931F8AB21EE810CD308D74D725F2008 (void);
// 0x00000003 System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
extern void TangoInputTracking_Internal_TryGetPoseAtTime_mAF42AE39482D9299C33ACF569A341CC9A3CA16C3 (void);
// 0x00000004 System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
extern void TangoInputTracking_TryGetPoseAtTime_m54012D53CFA783FA8B1DBFEDD893BD2C15436CB3 (void);
static Il2CppMethodPointer s_methodPointers[4] = 
{
	PoseData_get_rotation_m6A15A78CF66E4D2F9E2EE9FE88BC8D89A65EB904,
	PoseData_get_position_mEE4843D61931F8AB21EE810CD308D74D725F2008,
	TangoInputTracking_Internal_TryGetPoseAtTime_mAF42AE39482D9299C33ACF569A341CC9A3CA16C3,
	TangoInputTracking_TryGetPoseAtTime_m54012D53CFA783FA8B1DBFEDD893BD2C15436CB3,
};
extern void PoseData_get_rotation_m6A15A78CF66E4D2F9E2EE9FE88BC8D89A65EB904_AdjustorThunk (void);
extern void PoseData_get_position_mEE4843D61931F8AB21EE810CD308D74D725F2008_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[2] = 
{
	{ 0x06000001, PoseData_get_rotation_m6A15A78CF66E4D2F9E2EE9FE88BC8D89A65EB904_AdjustorThunk },
	{ 0x06000002, PoseData_get_position_mEE4843D61931F8AB21EE810CD308D74D725F2008_AdjustorThunk },
};
static const int32_t s_InvokerIndices[4] = 
{
	4182,
	4248,
	6260,
	6260,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_ARModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_ARModule_CodeGenModule = 
{
	"UnityEngine.ARModule.dll",
	4,
	s_methodPointers,
	2,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
