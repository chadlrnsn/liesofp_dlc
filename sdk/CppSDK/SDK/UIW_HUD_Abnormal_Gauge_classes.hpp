#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Abnormal_Gauge

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_HUD_Abnormal_Gauge.UIW_HUD_Abnormal_Gauge_C
// 0x0080 (0x0328 - 0x02A8)
class UUIW_HUD_Abnormal_Gauge_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Active;                                        // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Ani_Normal;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FX_Progress;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Progress;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ProgressGroup;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_HUD_Abnormal_Item_C*               UIW_HUD_Abnormal_Item;                             // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   CodeName;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBuildup;                                         // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2F1[0x7];                                      // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Timer;                                             // 0x02F8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULAbnormalComponent*                    AbnormalComponent;                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InitSize;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAbnormalStateCommonInfoPtr            AbnormalInfo;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int64                                         UniqueId;                                          // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsQAMode;                                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_UIW_HUD_Abnormal_Gauge(int32 EntryPoint);
	void Destruct();
	void SetCodeName(class FName CodeName_0);
	void GetCodeName(class FName* CodeName_0);
	void SetType(bool IsBuildup_0);
	void RefreshBuildup(const struct FLBuildupInfo& BuildupInfo);
	void RefreshAbnormal();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_HUD_Abnormal_Gauge_C">();
	}
	static class UUIW_HUD_Abnormal_Gauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_HUD_Abnormal_Gauge_C>();
	}
};
static_assert(alignof(UUIW_HUD_Abnormal_Gauge_C) == 0x000008, "Wrong alignment on UUIW_HUD_Abnormal_Gauge_C");
static_assert(sizeof(UUIW_HUD_Abnormal_Gauge_C) == 0x000328, "Wrong size on UUIW_HUD_Abnormal_Gauge_C");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_HUD_Abnormal_Gauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, Ani_Active) == 0x0002B0, "Member 'UUIW_HUD_Abnormal_Gauge_C::Ani_Active' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, Ani_Normal) == 0x0002B8, "Member 'UUIW_HUD_Abnormal_Gauge_C::Ani_Normal' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, FX_Progress) == 0x0002C0, "Member 'UUIW_HUD_Abnormal_Gauge_C::FX_Progress' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, Img_Progress) == 0x0002C8, "Member 'UUIW_HUD_Abnormal_Gauge_C::Img_Progress' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, ProgressGroup) == 0x0002D0, "Member 'UUIW_HUD_Abnormal_Gauge_C::ProgressGroup' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, Text_Name) == 0x0002D8, "Member 'UUIW_HUD_Abnormal_Gauge_C::Text_Name' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, UIW_HUD_Abnormal_Item) == 0x0002E0, "Member 'UUIW_HUD_Abnormal_Gauge_C::UIW_HUD_Abnormal_Item' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, CodeName) == 0x0002E8, "Member 'UUIW_HUD_Abnormal_Gauge_C::CodeName' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, IsBuildup) == 0x0002F0, "Member 'UUIW_HUD_Abnormal_Gauge_C::IsBuildup' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, Timer) == 0x0002F8, "Member 'UUIW_HUD_Abnormal_Gauge_C::Timer' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, AbnormalComponent) == 0x000300, "Member 'UUIW_HUD_Abnormal_Gauge_C::AbnormalComponent' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, InitSize) == 0x000308, "Member 'UUIW_HUD_Abnormal_Gauge_C::InitSize' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, AbnormalInfo) == 0x000310, "Member 'UUIW_HUD_Abnormal_Gauge_C::AbnormalInfo' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, UniqueId) == 0x000318, "Member 'UUIW_HUD_Abnormal_Gauge_C::UniqueId' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Abnormal_Gauge_C, IsQAMode) == 0x000320, "Member 'UUIW_HUD_Abnormal_Gauge_C::IsQAMode' has a wrong offset!");

}
