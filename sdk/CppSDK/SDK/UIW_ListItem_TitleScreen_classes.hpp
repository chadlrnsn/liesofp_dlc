#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ListItem_TitleScreen

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_ListItem_TitleScreen.UIW_ListItem_TitleScreen_C
// 0x0030 (0x02D8 - 0x02A8)
class UUIW_ListItem_TitleScreen_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Label;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Fx_Btn_Bg_Left_C*                  Select_Bg_Left;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBP_ListData_Default_C*               ListItemData;                                      // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UListView*                              OwnerListView;                                     // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelected;                                        // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UIW_ListItem_TitleScreen(int32 EntryPoint);
	void Destruct();
	void Construct();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnPress();
	void OnNormal();
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetHighlightLabel();
	void SetMoveFocusEffect();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_ListItem_TitleScreen_C">();
	}
	static class UUIW_ListItem_TitleScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_ListItem_TitleScreen_C>();
	}
};
static_assert(alignof(UUIW_ListItem_TitleScreen_C) == 0x000008, "Wrong alignment on UUIW_ListItem_TitleScreen_C");
static_assert(sizeof(UUIW_ListItem_TitleScreen_C) == 0x0002D8, "Wrong size on UUIW_ListItem_TitleScreen_C");
static_assert(offsetof(UUIW_ListItem_TitleScreen_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_ListItem_TitleScreen_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_ListItem_TitleScreen_C, Label) == 0x0002B0, "Member 'UUIW_ListItem_TitleScreen_C::Label' has a wrong offset!");
static_assert(offsetof(UUIW_ListItem_TitleScreen_C, Select_Bg_Left) == 0x0002B8, "Member 'UUIW_ListItem_TitleScreen_C::Select_Bg_Left' has a wrong offset!");
static_assert(offsetof(UUIW_ListItem_TitleScreen_C, ListItemData) == 0x0002C0, "Member 'UUIW_ListItem_TitleScreen_C::ListItemData' has a wrong offset!");
static_assert(offsetof(UUIW_ListItem_TitleScreen_C, OwnerListView) == 0x0002C8, "Member 'UUIW_ListItem_TitleScreen_C::OwnerListView' has a wrong offset!");
static_assert(offsetof(UUIW_ListItem_TitleScreen_C, IsSelected) == 0x0002D0, "Member 'UUIW_ListItem_TitleScreen_C::IsSelected' has a wrong offset!");

}
