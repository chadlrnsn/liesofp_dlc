#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TestCamModifier

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function TestCamModifier.TestCamModifier_C.BlueprintModifyCamera
// 0x0088 (0x0088 - 0x0000)
struct TestCamModifier_C_BlueprintModifyCamera final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ViewLocation;                                      // 0x0004(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ViewRotation;                                      // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         FOV;                                               // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewViewLocation;                                   // 0x0020(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               NewViewRotation;                                   // 0x002C(0x000C)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         NewFOV;                                            // 0x0038(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrDeltaTime;                                     // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RetFOV;                                            // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               RetViewRotation;                                   // 0x0044(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                RetViewLocation;                                   // 0x0050(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATestHelper_C*                          CallFunc_GetActorOfClass_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TestCamModifier_C_BlueprintModifyCamera) == 0x000008, "Wrong alignment on TestCamModifier_C_BlueprintModifyCamera");
static_assert(sizeof(TestCamModifier_C_BlueprintModifyCamera) == 0x000088, "Wrong size on TestCamModifier_C_BlueprintModifyCamera");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, DeltaTime) == 0x000000, "Member 'TestCamModifier_C_BlueprintModifyCamera::DeltaTime' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, ViewLocation) == 0x000004, "Member 'TestCamModifier_C_BlueprintModifyCamera::ViewLocation' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, ViewRotation) == 0x000010, "Member 'TestCamModifier_C_BlueprintModifyCamera::ViewRotation' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, FOV) == 0x00001C, "Member 'TestCamModifier_C_BlueprintModifyCamera::FOV' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, NewViewLocation) == 0x000020, "Member 'TestCamModifier_C_BlueprintModifyCamera::NewViewLocation' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, NewViewRotation) == 0x00002C, "Member 'TestCamModifier_C_BlueprintModifyCamera::NewViewRotation' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, NewFOV) == 0x000038, "Member 'TestCamModifier_C_BlueprintModifyCamera::NewFOV' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, CurrDeltaTime) == 0x00003C, "Member 'TestCamModifier_C_BlueprintModifyCamera::CurrDeltaTime' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, RetFOV) == 0x000040, "Member 'TestCamModifier_C_BlueprintModifyCamera::RetFOV' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, RetViewRotation) == 0x000044, "Member 'TestCamModifier_C_BlueprintModifyCamera::RetViewRotation' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, RetViewLocation) == 0x000050, "Member 'TestCamModifier_C_BlueprintModifyCamera::RetViewLocation' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, CallFunc_GetActorOfClass_ReturnValue) == 0x000060, "Member 'TestCamModifier_C_BlueprintModifyCamera::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'TestCamModifier_C_BlueprintModifyCamera::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x00006C, "Member 'TestCamModifier_C_BlueprintModifyCamera::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(TestCamModifier_C_BlueprintModifyCamera, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000078, "Member 'TestCamModifier_C_BlueprintModifyCamera::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");

}
