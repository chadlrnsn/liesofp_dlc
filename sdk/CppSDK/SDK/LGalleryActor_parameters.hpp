#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LGalleryActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function LGalleryActor.LGalleryActor_C.ExecuteUbergraph_LGalleryActor
// 0x00D0 (0x00D0 - 0x0000)
struct LGalleryActor_C_ExecuteUbergraph_LGalleryActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_Get_Camera_Pivot_Component_Component;     // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMeshComponent*                         CallFunc_GetGalleryMeshComponent_GalleryMesh;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0044(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor) == 0x000008, "Wrong alignment on LGalleryActor_C_ExecuteUbergraph_LGalleryActor");
static_assert(sizeof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor) == 0x0000D0, "Wrong size on LGalleryActor_C_ExecuteUbergraph_LGalleryActor");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, EntryPoint) == 0x000000, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_Get_Camera_Pivot_Component_Component) == 0x000008, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_Get_Camera_Pivot_Component_Component' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000010, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000018, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000019, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_GetGalleryMeshComponent_GalleryMesh) == 0x000020, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_GetGalleryMeshComponent_GalleryMesh' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_BreakVector_X) == 0x000028, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_BreakVector_Y) == 0x00002C, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_BreakVector_Z) == 0x000030, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x000034, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_MakeVector_ReturnValue) == 0x000038, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_ExecuteUbergraph_LGalleryActor, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000044, "Member 'LGalleryActor_C_ExecuteUbergraph_LGalleryActor::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

// Function LGalleryActor.LGalleryActor_C.Get Camera Pivot Component
// 0x0048 (0x0048 - 0x0000)
struct LGalleryActor_C_Get_Camera_Pivot_Component final
{
public:
	bool                                          ForPreviewCam;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        Component;                                         // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USceneComponent*>                CallFunc_GetComponentsByTag_ReturnValue;           // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class USceneComponent*>                CallFunc_GetComponentsByTag_ReturnValue_1;         // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                        CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_Array_Get_Item_1;                         // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LGalleryActor_C_Get_Camera_Pivot_Component) == 0x000008, "Wrong alignment on LGalleryActor_C_Get_Camera_Pivot_Component");
static_assert(sizeof(LGalleryActor_C_Get_Camera_Pivot_Component) == 0x000048, "Wrong size on LGalleryActor_C_Get_Camera_Pivot_Component");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, ForPreviewCam) == 0x000000, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::ForPreviewCam' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, Component) == 0x000008, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::Component' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, CallFunc_GetComponentsByTag_ReturnValue) == 0x000010, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::CallFunc_GetComponentsByTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, CallFunc_GetComponentsByTag_ReturnValue_1) == 0x000020, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::CallFunc_GetComponentsByTag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, CallFunc_Array_Get_Item) == 0x000030, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, CallFunc_Array_Get_Item_1) == 0x000038, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000040, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Camera_Pivot_Component, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x000041, "Member 'LGalleryActor_C_Get_Camera_Pivot_Component::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");

// Function LGalleryActor.LGalleryActor_C.GetGalleryMeshComponent
// 0x0020 (0x0020 - 0x0000)
struct LGalleryActor_C_GetGalleryMeshComponent final
{
public:
	class UMeshComponent*                         GalleryMesh;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue_1;        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LGalleryActor_C_GetGalleryMeshComponent) == 0x000008, "Wrong alignment on LGalleryActor_C_GetGalleryMeshComponent");
static_assert(sizeof(LGalleryActor_C_GetGalleryMeshComponent) == 0x000020, "Wrong size on LGalleryActor_C_GetGalleryMeshComponent");
static_assert(offsetof(LGalleryActor_C_GetGalleryMeshComponent, GalleryMesh) == 0x000000, "Member 'LGalleryActor_C_GetGalleryMeshComponent::GalleryMesh' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_GetGalleryMeshComponent, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'LGalleryActor_C_GetGalleryMeshComponent::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_GetGalleryMeshComponent, CallFunc_GetComponentByClass_ReturnValue_1) == 0x000010, "Member 'LGalleryActor_C_GetGalleryMeshComponent::CallFunc_GetComponentByClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_GetGalleryMeshComponent, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'LGalleryActor_C_GetGalleryMeshComponent::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function LGalleryActor.LGalleryActor_C.SetCameraMoveMaxInfo
// 0x0008 (0x0008 - 0x0000)
struct LGalleryActor_C_SetCameraMoveMaxInfo final
{
public:
	float                                         MaxWidth;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHeight;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LGalleryActor_C_SetCameraMoveMaxInfo) == 0x000004, "Wrong alignment on LGalleryActor_C_SetCameraMoveMaxInfo");
static_assert(sizeof(LGalleryActor_C_SetCameraMoveMaxInfo) == 0x000008, "Wrong size on LGalleryActor_C_SetCameraMoveMaxInfo");
static_assert(offsetof(LGalleryActor_C_SetCameraMoveMaxInfo, MaxWidth) == 0x000000, "Member 'LGalleryActor_C_SetCameraMoveMaxInfo::MaxWidth' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_SetCameraMoveMaxInfo, MaxHeight) == 0x000004, "Member 'LGalleryActor_C_SetCameraMoveMaxInfo::MaxHeight' has a wrong offset!");

// Function LGalleryActor.LGalleryActor_C.Get Zoom in Out Limit Value
// 0x0008 (0x0008 - 0x0000)
struct LGalleryActor_C_Get_Zoom_in_Out_Limit_Value final
{
public:
	float                                         OutMin;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutMax;                                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LGalleryActor_C_Get_Zoom_in_Out_Limit_Value) == 0x000004, "Wrong alignment on LGalleryActor_C_Get_Zoom_in_Out_Limit_Value");
static_assert(sizeof(LGalleryActor_C_Get_Zoom_in_Out_Limit_Value) == 0x000008, "Wrong size on LGalleryActor_C_Get_Zoom_in_Out_Limit_Value");
static_assert(offsetof(LGalleryActor_C_Get_Zoom_in_Out_Limit_Value, OutMin) == 0x000000, "Member 'LGalleryActor_C_Get_Zoom_in_Out_Limit_Value::OutMin' has a wrong offset!");
static_assert(offsetof(LGalleryActor_C_Get_Zoom_in_Out_Limit_Value, OutMax) == 0x000004, "Member 'LGalleryActor_C_Get_Zoom_in_Out_Limit_Value::OutMax' has a wrong offset!");

// Function LGalleryActor.LGalleryActor_C.Get Zoom Speed
// 0x0004 (0x0004 - 0x0000)
struct LGalleryActor_C_Get_Zoom_Speed final
{
public:
	float                                         OutSpeed;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LGalleryActor_C_Get_Zoom_Speed) == 0x000004, "Wrong alignment on LGalleryActor_C_Get_Zoom_Speed");
static_assert(sizeof(LGalleryActor_C_Get_Zoom_Speed) == 0x000004, "Wrong size on LGalleryActor_C_Get_Zoom_Speed");
static_assert(offsetof(LGalleryActor_C_Get_Zoom_Speed, OutSpeed) == 0x000000, "Member 'LGalleryActor_C_Get_Zoom_Speed::OutSpeed' has a wrong offset!");

}
