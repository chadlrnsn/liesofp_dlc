#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_TitleScreen

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "UIW_Window_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UIW_TitleScreen.UIW_TitleScreen_C
// 0x0130 (0x0480 - 0x0350)
class UUIW_TitleScreen_C final : public UUIW_Window_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UIW_TitleScreen_C;                  // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Black;                                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Btn_PressButton;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_Btn_Key_C*                         Btn_Submit;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Logo_AMD;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Logo_UE4;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBP_LRichKeyTextBlock_C*              KeyBindText;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULListView*                             List_Menu;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIW_PackageDownload_C*                 PackageDownload;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Gamertag;                                     // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Version;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentStep;                                       // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasSaveData;                                       // 0x03AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3AD[0x3];                                      // 0x03AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GameStartType;                                     // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SelectedSaveName;                                  // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsStarted;                                         // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSelectRecollection;                              // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CA[0x6];                                      // 0x03CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           PromoteDLCCodeNameArr;                             // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                           PromoteDLCNameArr;                                 // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUIW_Module_TextList_C*                 EULALanguageModule;                                // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTweening;                                        // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F9[0x7];                                      // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ULItem*>                         DLCItems;                                          // 0x0400(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLastDLCItemPopup;                                // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_411[0x3];                                      // 0x0411(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   SkeletalMeshActorTag;                              // 0x0414(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IsLoadedCharacterData;                             // 0x041C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           TweenTimer;                                        // 0x0420(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelectCredit;                                    // 0x0428(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsFirstEnabled;                                    // 0x0429(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsStartDLCCheckComplete;                           // 0x042A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_42B[0x5];                                      // 0x042B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class UUIW_Popup_C*, bool>               DLCPopupMap;                                       // 0x0430(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_UIW_TitleScreen(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void TweenDelayStart();
	void OnDownloadPackagePopup(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void ActivedMenu();
	void LobbyProcessEnd(ELLobbyMenu LobbyMenu, bool ProcessResult);
	void BndEvt__UIW_TitleScreen_Btn_Submit_K2Node_ComponentBoundEvent_4_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey);
	void BndEvt__UIW_TitleScreen_Btn_PressButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void BndEvt__List_Menu_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void Construct();
	void InitWidget();
	void Widget_Step_Process(int32 NextStep, int32 NextSubStep);
	struct FEventReply FocusManage(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void CallbackExitGame(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void AddEventBinding();
	void CallbackAbnormalTermination(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void CallbackSaveSlotWarning(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void ClearEventBinding();
	void PostStartGame();
	void StartGame(class FName GameStartType_0, const class FString& SelectedSaveName_0);
	void SetEnabledWindow(bool IsEnabled);
	void CallbackPromoteDLCResult_Success(bool bConnectionSuccess, TArray<class FName>& DLC_ItemNameList);
	void CallbackPromoteDLCPopup_Confirm(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void CallbackPromoteDLCPopup_Cancel(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void OnLogin();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void EULABtnActive(int32 BtnIndex);
	void EULASelectLanguage(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void ShowDownloadingPopup();
	void TweenConstruct();
	void TweenDestruct();
	void GetLevelSequence(class ALevelSequenceActor** NewParam);
	void OnReceiveResult(bool bConnectionSuccess, const TArray<class ULItem*>& DLC_ItemList, bool IsLastDLC);
	void AddItemReceivePopup(const TArray<class ULItem*>& DLC_ItemList);
	void CallbackPromoteDLCItem(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void OnLoadedCharacterSaveData(bool IsLoaded);
	void ShowComplete();
	void HideComplete();
	void ShowEnabledComplete();
	void ShowDisabledComplete();
	void OnProfileErrorPopup(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey);
	void StartShowComplete();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UIW_TitleScreen_C">();
	}
	static class UUIW_TitleScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUIW_TitleScreen_C>();
	}
};
static_assert(alignof(UUIW_TitleScreen_C) == 0x000008, "Wrong alignment on UUIW_TitleScreen_C");
static_assert(sizeof(UUIW_TitleScreen_C) == 0x000480, "Wrong size on UUIW_TitleScreen_C");
static_assert(offsetof(UUIW_TitleScreen_C, UberGraphFrame_UIW_TitleScreen_C) == 0x000350, "Member 'UUIW_TitleScreen_C::UberGraphFrame_UIW_TitleScreen_C' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, Black) == 0x000358, "Member 'UUIW_TitleScreen_C::Black' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, Btn_PressButton) == 0x000360, "Member 'UUIW_TitleScreen_C::Btn_PressButton' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, Btn_Submit) == 0x000368, "Member 'UUIW_TitleScreen_C::Btn_Submit' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, Img_Logo_AMD) == 0x000370, "Member 'UUIW_TitleScreen_C::Img_Logo_AMD' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, Img_Logo_UE4) == 0x000378, "Member 'UUIW_TitleScreen_C::Img_Logo_UE4' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, KeyBindText) == 0x000380, "Member 'UUIW_TitleScreen_C::KeyBindText' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, List_Menu) == 0x000388, "Member 'UUIW_TitleScreen_C::List_Menu' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, PackageDownload) == 0x000390, "Member 'UUIW_TitleScreen_C::PackageDownload' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, Text_Gamertag) == 0x000398, "Member 'UUIW_TitleScreen_C::Text_Gamertag' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, Text_Version) == 0x0003A0, "Member 'UUIW_TitleScreen_C::Text_Version' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, CurrentStep) == 0x0003A8, "Member 'UUIW_TitleScreen_C::CurrentStep' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, HasSaveData) == 0x0003AC, "Member 'UUIW_TitleScreen_C::HasSaveData' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, GameStartType) == 0x0003B0, "Member 'UUIW_TitleScreen_C::GameStartType' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, SelectedSaveName) == 0x0003B8, "Member 'UUIW_TitleScreen_C::SelectedSaveName' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsStarted) == 0x0003C8, "Member 'UUIW_TitleScreen_C::IsStarted' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsSelectRecollection) == 0x0003C9, "Member 'UUIW_TitleScreen_C::IsSelectRecollection' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, PromoteDLCCodeNameArr) == 0x0003D0, "Member 'UUIW_TitleScreen_C::PromoteDLCCodeNameArr' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, PromoteDLCNameArr) == 0x0003E0, "Member 'UUIW_TitleScreen_C::PromoteDLCNameArr' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, EULALanguageModule) == 0x0003F0, "Member 'UUIW_TitleScreen_C::EULALanguageModule' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsTweening) == 0x0003F8, "Member 'UUIW_TitleScreen_C::IsTweening' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, DLCItems) == 0x000400, "Member 'UUIW_TitleScreen_C::DLCItems' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsLastDLCItemPopup) == 0x000410, "Member 'UUIW_TitleScreen_C::IsLastDLCItemPopup' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, SkeletalMeshActorTag) == 0x000414, "Member 'UUIW_TitleScreen_C::SkeletalMeshActorTag' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsLoadedCharacterData) == 0x00041C, "Member 'UUIW_TitleScreen_C::IsLoadedCharacterData' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, TweenTimer) == 0x000420, "Member 'UUIW_TitleScreen_C::TweenTimer' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsSelectCredit) == 0x000428, "Member 'UUIW_TitleScreen_C::IsSelectCredit' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsFirstEnabled) == 0x000429, "Member 'UUIW_TitleScreen_C::IsFirstEnabled' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, IsStartDLCCheckComplete) == 0x00042A, "Member 'UUIW_TitleScreen_C::IsStartDLCCheckComplete' has a wrong offset!");
static_assert(offsetof(UUIW_TitleScreen_C, DLCPopupMap) == 0x000430, "Member 'UUIW_TitleScreen_C::DLCPopupMap' has a wrong offset!");

}

