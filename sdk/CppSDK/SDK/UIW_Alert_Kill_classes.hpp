#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_Kill

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Alert_Kill.UIW_Alert_Kill_C
// 0x0040 (0x02E8 - 0x02A8)
class UUIW_Alert_Kill_C final : public ULWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Ani_Start;                                         // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Img_Action;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_BG;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Icon;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Text_FX;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   NPCCodeName;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Alert_Kill(int32 EntryPoint);
	void Destruct();
	void Construct();
	void Show(float Delay, bool IsGameEnd);
	void Finished_123DF7754B5BD5638AACBAA9BC586AAB();
	void SetAlertKill(class FName CodeName);
	void OnAniFinished();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Alert_Kill_C">();
	}
	static class UUIW_Alert_Kill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Alert_Kill_C>();
	}
};
static_assert(alignof(UUIW_Alert_Kill_C) == 0x000008, "Wrong alignment on UUIW_Alert_Kill_C");
static_assert(sizeof(UUIW_Alert_Kill_C) == 0x0002E8, "Wrong size on UUIW_Alert_Kill_C");
static_assert(offsetof(UUIW_Alert_Kill_C, UberGraphFrame) == 0x0002A8, "Member 'UUIW_Alert_Kill_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_Kill_C, Ani_Start) == 0x0002B0, "Member 'UUIW_Alert_Kill_C::Ani_Start' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_Kill_C, Img_Action) == 0x0002B8, "Member 'UUIW_Alert_Kill_C::Img_Action' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_Kill_C, Img_BG) == 0x0002C0, "Member 'UUIW_Alert_Kill_C::Img_BG' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_Kill_C, Img_Icon) == 0x0002C8, "Member 'UUIW_Alert_Kill_C::Img_Icon' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_Kill_C, Img_Text_FX) == 0x0002D0, "Member 'UUIW_Alert_Kill_C::Img_Text_FX' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_Kill_C, RetainerBox) == 0x0002D8, "Member 'UUIW_Alert_Kill_C::RetainerBox' has a wrong offset!");
static_assert(offsetof(UUIW_Alert_Kill_C, NPCCodeName) == 0x0002E0, "Member 'UUIW_Alert_Kill_C::NPCCodeName' has a wrong offset!");

}
