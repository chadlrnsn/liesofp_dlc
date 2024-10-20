#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Correction_ListItem

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Correction_ListItem.UIW_Correction_ListItem_C
// 0x0090 (0x0338 - 0x02A8)
class UUIW_Correction_ListItem_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Correction;                                    // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg_Dimed;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Fx_Listbar_C*                      Fx_Selected;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Arrow_0;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Arrow_1;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Arrow_2;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon_0;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon_1;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon_2;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_X_0;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_X_1;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_X_2;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Label;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULItem*                                 LItem;                                             // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELStatCorrectChangeType                       StatType;                                          // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x7];                                      // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Fx_Listbar_C*                      Fx_Selected_0;                                     // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UIW_Correction_ListItem(int32 EntryPoint);
	void WidgetAnimationEvt_Ani_Correction_K2Node_WidgetAnimationEvent_0();
	void Destruct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void CanCorrection(bool* CanCorrection_0);
	void GetCorrectionInfo(struct FHandleStatCorrectionChangeInfoPtr* CorrectionInfo);
	void GetResultGrade(ELFirstStat FirstStat, bool* ResultGrade);
	void GetArrowIcon(int32 Int, class UTexture2D** Texture2D);
	void SetMoveFocusEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Correction_ListItem_C">();
	}
	static class UUIW_Correction_ListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Correction_ListItem_C>();
	}
};
static_assert(alignof(UUIW_Correction_ListItem_C) == 0x000008, "Wrong alignment on UUIW_Correction_ListItem_C");
static_assert(sizeof(UUIW_Correction_ListItem_C) == 0x000338, "Wrong size on UUIW_Correction_ListItem_C");
static_assert(offsetof(UUIW_Correction_ListItem_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_Correction_ListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Ani_Correction) == 0x0002B0, "Member 'UUIW_Correction_ListItem_C::Ani_Correction' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Bg_Dimed) == 0x0002B8, "Member 'UUIW_Correction_ListItem_C::Bg_Dimed' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Fx_Selected) == 0x0002C0, "Member 'UUIW_Correction_ListItem_C::Fx_Selected' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Icon_Arrow_0) == 0x0002C8, "Member 'UUIW_Correction_ListItem_C::Icon_Arrow_0' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Icon_Arrow_1) == 0x0002D0, "Member 'UUIW_Correction_ListItem_C::Icon_Arrow_1' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Icon_Arrow_2) == 0x0002D8, "Member 'UUIW_Correction_ListItem_C::Icon_Arrow_2' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Img_Icon_0) == 0x0002E0, "Member 'UUIW_Correction_ListItem_C::Img_Icon_0' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Img_Icon_1) == 0x0002E8, "Member 'UUIW_Correction_ListItem_C::Img_Icon_1' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Img_Icon_2) == 0x0002F0, "Member 'UUIW_Correction_ListItem_C::Img_Icon_2' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Img_X_0) == 0x0002F8, "Member 'UUIW_Correction_ListItem_C::Img_X_0' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Img_X_1) == 0x000300, "Member 'UUIW_Correction_ListItem_C::Img_X_1' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Img_X_2) == 0x000308, "Member 'UUIW_Correction_ListItem_C::Img_X_2' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Text_Label) == 0x000310, "Member 'UUIW_Correction_ListItem_C::Text_Label' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, LItem) == 0x000318, "Member 'UUIW_Correction_ListItem_C::LItem' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, StatType) == 0x000320, "Member 'UUIW_Correction_ListItem_C::StatType' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, Fx_Selected_0) == 0x000328, "Member 'UUIW_Correction_ListItem_C::Fx_Selected_0' has a wrong offset!");
static_assert(offsetof(UUIW_Correction_ListItem_C, IsSelected) == 0x000330, "Member 'UUIW_Correction_ListItem_C::IsSelected' has a wrong offset!");

}

