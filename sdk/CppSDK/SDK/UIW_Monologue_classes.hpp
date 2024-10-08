#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Monologue

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Monologue.UIW_Monologue_C
// 0x0028 (0x02D0 - 0x02A8)
class UUIW_Monologue_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Group_Text;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              Script_Scale;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBP_LRichKeyTextBlock_C*              Text;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsPlaying;                                         // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_UIW_Monologue(int32 EntryPoint);
	void Destruct();
	void Construct();
	void OnPlay(const class FText& TextData);
	void OnStop();
	void CompleteTween(class FName CategoryName);
	void CheckOptionSubtitleAndShow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Monologue_C">();
	}
	static class UUIW_Monologue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Monologue_C>();
	}
};
static_assert(alignof(UUIW_Monologue_C) == 0x000008, "Wrong alignment on UUIW_Monologue_C");
static_assert(sizeof(UUIW_Monologue_C) == 0x0002D0, "Wrong size on UUIW_Monologue_C");
static_assert(offsetof(UUIW_Monologue_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_Monologue_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Monologue_C, Group_Text) == 0x0002B0, "Member 'UUIW_Monologue_C::Group_Text' has a wrong offset!");
static_assert(offsetof(UUIW_Monologue_C, Script_Scale) == 0x0002B8, "Member 'UUIW_Monologue_C::Script_Scale' has a wrong offset!");
static_assert(offsetof(UUIW_Monologue_C, Text) == 0x0002C0, "Member 'UUIW_Monologue_C::Text' has a wrong offset!");
static_assert(offsetof(UUIW_Monologue_C, IsPlaying) == 0x0002C8, "Member 'UUIW_Monologue_C::IsPlaying' has a wrong offset!");

}

