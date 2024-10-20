#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_NPCDialog_GoldenTree_Item

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_NPCDialog_GoldenTree_Item.UIW_NPCDialog_GoldenTree_Item_C
// 0x0018 (0x0280 - 0x0268)
class UUIW_NPCDialog_GoldenTree_Item_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 FX_Active;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_NPCDialog_GoldenTree_Item(int32 EntryPoint);
	void SetView_Show(bool IsShow);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_NPCDialog_GoldenTree_Item_C">();
	}
	static class UUIW_NPCDialog_GoldenTree_Item_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_NPCDialog_GoldenTree_Item_C>();
	}
};
static_assert(alignof(UUIW_NPCDialog_GoldenTree_Item_C) == 0x000008, "Wrong alignment on UUIW_NPCDialog_GoldenTree_Item_C");
static_assert(sizeof(UUIW_NPCDialog_GoldenTree_Item_C) == 0x000280, "Wrong size on UUIW_NPCDialog_GoldenTree_Item_C");
static_assert(offsetof(UUIW_NPCDialog_GoldenTree_Item_C, UberGraphFrame) == 0x000268, "Member 'UUIW_NPCDialog_GoldenTree_Item_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_NPCDialog_GoldenTree_Item_C, FX_Active) == 0x000270, "Member 'UUIW_NPCDialog_GoldenTree_Item_C::FX_Active' has a wrong offset!");
static_assert(offsetof(UUIW_NPCDialog_GoldenTree_Item_C, Img_Icon) == 0x000278, "Member 'UUIW_NPCDialog_GoldenTree_Item_C::Img_Icon' has a wrong offset!");

}

