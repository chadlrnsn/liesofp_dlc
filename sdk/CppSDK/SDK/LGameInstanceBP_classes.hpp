#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LGameInstanceBP

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass LGameInstanceBP.LGameInstanceBP_C
// 0x00A8 (0x0370 - 0x02C8)
class ULGameInstanceBP_C final : public ULGameInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Use_die_slow_for_trailer;                          // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Use_always_explosion;                              // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Test_hit_intensity;                                // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D3[0x1];                                      // 0x02D3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Test_hit_intensity_knockback;                      // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Test_hit_intensity_paral;                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELHitMotionType                               Test_hit_intencity_motiontype;                     // 0x02DC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2DD[0x3];                                      // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSkillHitInfoPtr                       Test_hit_intencity_skillhit;                       // 0x02E0(0x0008)(Edit, BlueprintVisible, NoDestructor)
	bool                                          Test_Fatal_SlaveArm;                               // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Test_UseSliceDead;                                 // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Test_hit_result;                                   // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2EB[0x5];                                      // 0x02EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Saved_location;                                    // 0x02F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                             Saved_camera;                                      // 0x0320(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TArray<class UNiagaraComponent*>              SpawnedFX;                                         // 0x0350(0x0010)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         CurrentIndex;                                      // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RemoveCount;                                       // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LGameInstanceBP(int32 EntryPoint);
	void MakeNewCharacterBP(bool bInEditor);
	void SpawnAllFX();
	void AddWeapon(class FName HandleCodeName, class FName BladeCodeName, class ULItem** Item);
	void AddItem(class FName CodeName, class ULItem** Item);
	bool ExecBP(class UWorld* InWorld, const class FString& Cmd);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LGameInstanceBP_C">();
	}
	static class ULGameInstanceBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULGameInstanceBP_C>();
	}
};
static_assert(alignof(ULGameInstanceBP_C) == 0x000010, "Wrong alignment on ULGameInstanceBP_C");
static_assert(sizeof(ULGameInstanceBP_C) == 0x000370, "Wrong size on ULGameInstanceBP_C");
static_assert(offsetof(ULGameInstanceBP_C, UberGraphFrame) == 0x0002C8, "Member 'ULGameInstanceBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Use_die_slow_for_trailer) == 0x0002D0, "Member 'ULGameInstanceBP_C::Use_die_slow_for_trailer' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Use_always_explosion) == 0x0002D1, "Member 'ULGameInstanceBP_C::Use_always_explosion' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_hit_intensity) == 0x0002D2, "Member 'ULGameInstanceBP_C::Test_hit_intensity' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_hit_intensity_knockback) == 0x0002D4, "Member 'ULGameInstanceBP_C::Test_hit_intensity_knockback' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_hit_intensity_paral) == 0x0002D8, "Member 'ULGameInstanceBP_C::Test_hit_intensity_paral' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_hit_intencity_motiontype) == 0x0002DC, "Member 'ULGameInstanceBP_C::Test_hit_intencity_motiontype' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_hit_intencity_skillhit) == 0x0002E0, "Member 'ULGameInstanceBP_C::Test_hit_intencity_skillhit' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_Fatal_SlaveArm) == 0x0002E8, "Member 'ULGameInstanceBP_C::Test_Fatal_SlaveArm' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_UseSliceDead) == 0x0002E9, "Member 'ULGameInstanceBP_C::Test_UseSliceDead' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Test_hit_result) == 0x0002EA, "Member 'ULGameInstanceBP_C::Test_hit_result' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Saved_location) == 0x0002F0, "Member 'ULGameInstanceBP_C::Saved_location' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, Saved_camera) == 0x000320, "Member 'ULGameInstanceBP_C::Saved_camera' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, SpawnedFX) == 0x000350, "Member 'ULGameInstanceBP_C::SpawnedFX' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, CurrentIndex) == 0x000360, "Member 'ULGameInstanceBP_C::CurrentIndex' has a wrong offset!");
static_assert(offsetof(ULGameInstanceBP_C, RemoveCount) == 0x000364, "Member 'ULGameInstanceBP_C::RemoveCount' has a wrong offset!");

}
