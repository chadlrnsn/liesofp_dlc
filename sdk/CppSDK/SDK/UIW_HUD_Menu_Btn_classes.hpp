#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Menu_Btn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C
// 0x0068 (0x02D0 - 0x0268)
class UUIW_HUD_Menu_Btn_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                DELETEBG;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Notification;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Selected;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Title;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Desc;                                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   WidgetName;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             IconTexture;                                       // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelected__DelegateSignature(class UUIW_HUD_Menu_Btn_C* MenuBtn);
	void OnPressed__DelegateSignature();
	void ExecuteUbergraph_UIW_HUD_Menu_Btn(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void PreConstruct(bool IsDesignTime);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void SetSelected(bool IsSelected);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_HUD_Menu_Btn_C">();
	}
	static class UUIW_HUD_Menu_Btn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_HUD_Menu_Btn_C>();
	}
};
static_assert(alignof(UUIW_HUD_Menu_Btn_C) == 0x000008, "Wrong alignment on UUIW_HUD_Menu_Btn_C");
static_assert(sizeof(UUIW_HUD_Menu_Btn_C) == 0x0002D0, "Wrong size on UUIW_HUD_Menu_Btn_C");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, UberGraphFrame) == 0x000268, "Member 'UUIW_HUD_Menu_Btn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, DELETEBG) == 0x000270, "Member 'UUIW_HUD_Menu_Btn_C::DELETEBG' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, Icon) == 0x000278, "Member 'UUIW_HUD_Menu_Btn_C::Icon' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, Icon_Notification) == 0x000280, "Member 'UUIW_HUD_Menu_Btn_C::Icon_Notification' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, Img_Selected) == 0x000288, "Member 'UUIW_HUD_Menu_Btn_C::Img_Selected' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, Title) == 0x000290, "Member 'UUIW_HUD_Menu_Btn_C::Title' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, Desc) == 0x000298, "Member 'UUIW_HUD_Menu_Btn_C::Desc' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, WidgetName) == 0x0002A0, "Member 'UUIW_HUD_Menu_Btn_C::WidgetName' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, OnSelected) == 0x0002A8, "Member 'UUIW_HUD_Menu_Btn_C::OnSelected' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, IconTexture) == 0x0002B8, "Member 'UUIW_HUD_Menu_Btn_C::IconTexture' has a wrong offset!");
static_assert(offsetof(UUIW_HUD_Menu_Btn_C, OnPressed) == 0x0002C0, "Member 'UUIW_HUD_Menu_Btn_C::OnPressed' has a wrong offset!");

}
