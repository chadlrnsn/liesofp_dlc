#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_GetItem

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Alert_GetItem.UIW_Alert_GetItem_C
// 0x0080 (0x0328 - 0x02A8)
class UUIW_Alert_GetItem_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUIW_Fx_Reward_Bg_C*                    BG;                                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Custom_Group;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Group_ItemLabel_1;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         Group_ItemLabel_2;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Blade;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Category;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Hand;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Heroic;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Item;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IMG_LabelCutLine;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Locker;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Count;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemLabel_1;                                  // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_ItemLabel_2;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Tween_Group;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Alert_GetItem(int32 EntryPoint);
	void CompleteTween(class FName CategoryName);
	void Destruct();
	void Construct();
	void SetItem(const struct FUIST_GetItem& GetItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Alert_GetItem_C">();
	}
	static class UUIW_Alert_GetItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Alert_GetItem_C>();
	}
};
static_assert(alignof(UUIW_Alert_GetItem_C) == 0x000008, "Wrong alignment on UUIW_Alert_GetItem_C");
static_assert(sizeof(UUIW_Alert_GetItem_C) == 0x000328, "Wrong size on UUIW_Alert_GetItem_C");
static_assert(offsetof(UUIW_Alert_GetItem_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_Alert_GetItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, BG) == 0x0002B0, "Member 'UUIW_Alert_GetItem_C::BG' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Custom_Group) == 0x0002B8, "Member 'UUIW_Alert_GetItem_C::Custom_Group' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Group_ItemLabel_1) == 0x0002C0, "Member 'UUIW_Alert_GetItem_C::Group_ItemLabel_1' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Group_ItemLabel_2) == 0x0002C8, "Member 'UUIW_Alert_GetItem_C::Group_ItemLabel_2' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Img_Blade) == 0x0002D0, "Member 'UUIW_Alert_GetItem_C::Img_Blade' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Img_Category) == 0x0002D8, "Member 'UUIW_Alert_GetItem_C::Img_Category' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Img_Hand) == 0x0002E0, "Member 'UUIW_Alert_GetItem_C::Img_Hand' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Img_Heroic) == 0x0002E8, "Member 'UUIW_Alert_GetItem_C::Img_Heroic' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Img_Item) == 0x0002F0, "Member 'UUIW_Alert_GetItem_C::Img_Item' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, IMG_LabelCutLine) == 0x0002F8, "Member 'UUIW_Alert_GetItem_C::IMG_LabelCutLine' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Img_Locker) == 0x000300, "Member 'UUIW_Alert_GetItem_C::Img_Locker' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Text_Count) == 0x000308, "Member 'UUIW_Alert_GetItem_C::Text_Count' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Text_ItemLabel_1) == 0x000310, "Member 'UUIW_Alert_GetItem_C::Text_ItemLabel_1' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Text_ItemLabel_2) == 0x000318, "Member 'UUIW_Alert_GetItem_C::Text_ItemLabel_2' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_GetItem_C, Tween_Group) == 0x000320, "Member 'UUIW_Alert_GetItem_C::Tween_Group' has a wrong offset!");

}
