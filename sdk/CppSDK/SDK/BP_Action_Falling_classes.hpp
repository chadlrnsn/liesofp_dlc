#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Falling

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Falling.BP_Action_Falling_C
// 0x0030 (0x0288 - 0x0258)
class UBP_Action_Falling_C final : public ULAction_LoopAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           Handle_FallingTimer;                               // 0x0260(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Time_MaxFalling;                                   // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                FallingStartLocation;                              // 0x026C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxFallingLocationZ;                               // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFallingKilled;                                    // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27D[0x3];                                      // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Falling_Deaccelator;                               // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PCFallingTimeOverTime;                             // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Falling(int32 EntryPoint);
	void OnStopByMe(class ULActBase* StoppingAction);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnTick(float DeltaTime);
	void OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID);
	void OnStart();
	bool OnLanded(class ACharacter* LandingChar, const struct FHitResult& Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Falling_C">();
	}
	static class UBP_Action_Falling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Falling_C>();
	}
};
static_assert(alignof(UBP_Action_Falling_C) == 0x000008, "Wrong alignment on UBP_Action_Falling_C");
static_assert(sizeof(UBP_Action_Falling_C) == 0x000288, "Wrong size on UBP_Action_Falling_C");
static_assert(offsetof(UBP_Action_Falling_C, UberGraphFrame) == 0x000258, "Member 'UBP_Action_Falling_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Falling_C, Handle_FallingTimer) == 0x000260, "Member 'UBP_Action_Falling_C::Handle_FallingTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_Falling_C, Time_MaxFalling) == 0x000268, "Member 'UBP_Action_Falling_C::Time_MaxFalling' has a wrong offset!");
static_assert(offsetof(UBP_Action_Falling_C, FallingStartLocation) == 0x00026C, "Member 'UBP_Action_Falling_C::FallingStartLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_Falling_C, MaxFallingLocationZ) == 0x000278, "Member 'UBP_Action_Falling_C::MaxFallingLocationZ' has a wrong offset!");
static_assert(offsetof(UBP_Action_Falling_C, bFallingKilled) == 0x00027C, "Member 'UBP_Action_Falling_C::bFallingKilled' has a wrong offset!");
static_assert(offsetof(UBP_Action_Falling_C, Falling_Deaccelator) == 0x000280, "Member 'UBP_Action_Falling_C::Falling_Deaccelator' has a wrong offset!");
static_assert(offsetof(UBP_Action_Falling_C, PCFallingTimeOverTime) == 0x000284, "Member 'UBP_Action_Falling_C::PCFallingTimeOverTime' has a wrong offset!");

}

