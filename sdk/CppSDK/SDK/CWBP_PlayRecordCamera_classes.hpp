#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CWBP_PlayRecordCamera

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass CWBP_PlayRecordCamera.CWBP_PlayRecordCamera_C
// 0x0020 (0x0320 - 0x0300)
class ACWBP_PlayRecordCamera_C final : public ALCameraWork
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0300(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULRecordCameraData*                     Play_Record_Camera_Data;                           // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PrepareCount;                                      // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CWBP_PlayRecordCamera(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void OnStartWork();
	void UpdateTargetView(float DeltaTime);
	void OnPreWork(bool* bCanStartWorking);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CWBP_PlayRecordCamera_C">();
	}
	static class ACWBP_PlayRecordCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACWBP_PlayRecordCamera_C>();
	}
};
static_assert(alignof(ACWBP_PlayRecordCamera_C) == 0x000010, "Wrong alignment on ACWBP_PlayRecordCamera_C");
static_assert(sizeof(ACWBP_PlayRecordCamera_C) == 0x000320, "Wrong size on ACWBP_PlayRecordCamera_C");
static_assert(offsetof(ACWBP_PlayRecordCamera_C, UberGraphFrame) == 0x000300, "Member 'ACWBP_PlayRecordCamera_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACWBP_PlayRecordCamera_C, DefaultSceneRoot) == 0x000308, "Member 'ACWBP_PlayRecordCamera_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ACWBP_PlayRecordCamera_C, Play_Record_Camera_Data) == 0x000310, "Member 'ACWBP_PlayRecordCamera_C::Play_Record_Camera_Data' has a wrong offset!");
static_assert(offsetof(ACWBP_PlayRecordCamera_C, StartTime) == 0x000318, "Member 'ACWBP_PlayRecordCamera_C::StartTime' has a wrong offset!");
static_assert(offsetof(ACWBP_PlayRecordCamera_C, PrepareCount) == 0x00031C, "Member 'ACWBP_PlayRecordCamera_C::PrepareCount' has a wrong offset!");

}
