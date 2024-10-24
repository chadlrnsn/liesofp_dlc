#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Window_Tutorial

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UIW_Window_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_Window_Tutorial.UIW_Window_Tutorial_C
// 0x0040 (0x0390 - 0x0350)
class UUIW_Window_Tutorial_C final : public UUIW_Window_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UIW_Window_Tutorial_C;              // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur;                                    // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg_Black;                                          // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Close;                                         // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Next;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Prev;                                          // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Tutorial_C*                        UIW_Turorial;                                      // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   CodeName;                                          // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UIW_Window_Tutorial(int32 EntryPoint);
	void OnConstructAniComplete();
	void OnCloseTweenComplete(class FName CategoryName);
	void Destruct();
	void BndEvt__UIW_Popup_Tutorial_Btn_Back_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void Construct();
	void OnReady();
	void OnPrev();
	void OnNext();
	void OnNavigate(EUINavigation Navigation_0, EInputEvent EventType);
	void AddEventBinding();
	void ClearEventBinding();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_Window_Tutorial_C">();
	}
	static class UUIW_Window_Tutorial_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_Window_Tutorial_C>();
	}
};
static_assert(alignof(UUIW_Window_Tutorial_C) == 0x000008, "Wrong alignment on UUIW_Window_Tutorial_C");
static_assert(sizeof(UUIW_Window_Tutorial_C) == 0x000390, "Wrong size on UUIW_Window_Tutorial_C");
static_assert(offsetof(UUIW_Window_Tutorial_C, UberGraphFrame_UIW_Window_Tutorial_C) == 0x000350, "Member 'UUIW_Window_Tutorial_C::UberGraphFrame_UIW_Window_Tutorial_C' has a wrong offset!");
static_assert(offsetof(UUIW_Window_Tutorial_C, BackgroundBlur) == 0x000358, "Member 'UUIW_Window_Tutorial_C::BackgroundBlur' has a wrong offset!");
static_assert(offsetof(UUIW_Window_Tutorial_C, Bg_Black) == 0x000360, "Member 'UUIW_Window_Tutorial_C::Bg_Black' has a wrong offset!");
static_assert(offsetof(UUIW_Window_Tutorial_C, Btn_Close) == 0x000368, "Member 'UUIW_Window_Tutorial_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UUIW_Window_Tutorial_C, Btn_Next) == 0x000370, "Member 'UUIW_Window_Tutorial_C::Btn_Next' has a wrong offset!");
static_assert(offsetof(UUIW_Window_Tutorial_C, Btn_Prev) == 0x000378, "Member 'UUIW_Window_Tutorial_C::Btn_Prev' has a wrong offset!");
static_assert(offsetof(UUIW_Window_Tutorial_C, UIW_Turorial) == 0x000380, "Member 'UUIW_Window_Tutorial_C::UIW_Turorial' has a wrong offset!");
static_assert(offsetof(UUIW_Window_Tutorial_C, CodeName) == 0x000388, "Member 'UUIW_Window_Tutorial_C::CodeName' has a wrong offset!");

}

