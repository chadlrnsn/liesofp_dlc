#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Module_Item

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Module_Item.UIW_Module_Item_C
// 0x0038 (0x02E0 - 0x02A8)
class UUIW_Module_Item_C final : public ULWidget
{
public:
	class UCanvasPanel*                           Custom_Group;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Blade;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Hand;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Heroic;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Item;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Count;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Name;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetItem(class ULItem* Item);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Module_Item_C">();
	}
	static class UUIW_Module_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Module_Item_C>();
	}
};
static_assert(alignof(UUIW_Module_Item_C) == 0x000008, "Wrong alignment on UUIW_Module_Item_C");
static_assert(sizeof(UUIW_Module_Item_C) == 0x0002E0, "Wrong size on UUIW_Module_Item_C");
static_assert(offsetof(UUIW_Module_Item_C, Custom_Group) == 0x0002A8, "Member 'UUIW_Module_Item_C::Custom_Group' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Item_C, Img_Blade) == 0x0002B0, "Member 'UUIW_Module_Item_C::Img_Blade' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Item_C, Img_Hand) == 0x0002B8, "Member 'UUIW_Module_Item_C::Img_Hand' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Item_C, Img_Heroic) == 0x0002C0, "Member 'UUIW_Module_Item_C::Img_Heroic' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Item_C, Img_Item) == 0x0002C8, "Member 'UUIW_Module_Item_C::Img_Item' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Item_C, Text_Count) == 0x0002D0, "Member 'UUIW_Module_Item_C::Text_Count' has a wrong offset!");
static_assert(offsetof(UUIW_Module_Item_C, Text_Name) == 0x0002D8, "Member 'UUIW_Module_Item_C::Text_Name' has a wrong offset!");

}
