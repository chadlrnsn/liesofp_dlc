#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LNPCCharacterBP

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LNPCCharacterBP.LNPCCharacterBP_C
// 0x0090 (0x14C0 - 0x1430)
#pragma pack(push, 0x1)
class alignas(0x10) ALNPCCharacterBP_C : public ALNPCCharacter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x1430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Sound_EyeBlink;                                    // 0x1438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULEquipmentComponentBP_C*               LEquipmentComponentBP;                             // 0x1440(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*            NavigationInvoker;                                 // 0x1448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FluidImplementation_C*              BP_FluidImplementation;                            // 0x1450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                        Asset_Class;                                       // 0x1458(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FLMaterialVaryingScalar>        Eye_Disable_Scalar_Values;                         // 0x1470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLMaterialVaryingColor>         Eye_Disable_Color_Values;                          // 0x1480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                   HeadTagTargetBone;                                 // 0x1490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadTagOffsetHeight;                               // 0x1498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                HeadTagPosition;                                   // 0x149C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   EyeBoneName;                                       // 0x14A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LockonSocketDistanceFromRoot;                      // 0x14B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          StopBGMFromNpcOnEndPlay;                           // 0x14B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_LNPCCharacterBP(int32 EntryPoint);
	void BGM_fromNpc(bool PlayState);
	void OnExplostionDead(bool Cut);
	void ReceivePostBeginPlay();
	void DeadCharacterBP();
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void SetCombatStateBP(bool bCombatState);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void Dead_Physics(bool PhysicsOn, float DeltaSec, float InterpValue, float PhysicalValue, class FName BoneName);
	void LNPC_EyeFlash(class UMeshComponent* MeshComp, bool OFF, class FName ParamName, bool On_Random, float ParamValueON_Default, float ParamValueON_RandomMax, float ParamValueOFF);
	void GetNpcBGM(class FName* BGMCodeName);
	void UpdateHeadTagPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LNPCCharacterBP_C">();
	}
	static class ALNPCCharacterBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALNPCCharacterBP_C>();
	}
};
#pragma pack(pop)
static_assert(alignof(ALNPCCharacterBP_C) == 0x000010, "Wrong alignment on ALNPCCharacterBP_C");
static_assert(sizeof(ALNPCCharacterBP_C) == 0x0014C0, "Wrong size on ALNPCCharacterBP_C");
static_assert(offsetof(ALNPCCharacterBP_C, UberGraphFrame) == 0x001430, "Member 'ALNPCCharacterBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, Sound_EyeBlink) == 0x001438, "Member 'ALNPCCharacterBP_C::Sound_EyeBlink' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, LEquipmentComponentBP) == 0x001440, "Member 'ALNPCCharacterBP_C::LEquipmentComponentBP' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, NavigationInvoker) == 0x001448, "Member 'ALNPCCharacterBP_C::NavigationInvoker' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, BP_FluidImplementation) == 0x001450, "Member 'ALNPCCharacterBP_C::BP_FluidImplementation' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, Asset_Class) == 0x001458, "Member 'ALNPCCharacterBP_C::Asset_Class' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, Eye_Disable_Scalar_Values) == 0x001470, "Member 'ALNPCCharacterBP_C::Eye_Disable_Scalar_Values' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, Eye_Disable_Color_Values) == 0x001480, "Member 'ALNPCCharacterBP_C::Eye_Disable_Color_Values' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, HeadTagTargetBone) == 0x001490, "Member 'ALNPCCharacterBP_C::HeadTagTargetBone' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, HeadTagOffsetHeight) == 0x001498, "Member 'ALNPCCharacterBP_C::HeadTagOffsetHeight' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, HeadTagPosition) == 0x00149C, "Member 'ALNPCCharacterBP_C::HeadTagPosition' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, EyeBoneName) == 0x0014A8, "Member 'ALNPCCharacterBP_C::EyeBoneName' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, LockonSocketDistanceFromRoot) == 0x0014B0, "Member 'ALNPCCharacterBP_C::LockonSocketDistanceFromRoot' has a wrong offset!");
static_assert(offsetof(ALNPCCharacterBP_C, StopBGMFromNpcOnEndPlay) == 0x0014B4, "Member 'ALNPCCharacterBP_C::StopBGMFromNpcOnEndPlay' has a wrong offset!");

}

