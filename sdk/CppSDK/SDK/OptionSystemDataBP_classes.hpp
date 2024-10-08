#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionSystemDataBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass OptionSystemDataBP.OptionSystemDataBP_C
// 0x01B0 (0x0660 - 0x04B0)
class AOptionSystemDataBP_C final : public ALOptionSystemData
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x04B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 Selectable_Pad_VerticalCameraSpeed;                // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_BGMVolumes;                             // 0x04C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_EffectVolumes;                          // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_VoiceVolumes;                           // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         Selectable_Languages;                              // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Default_UseAutoNewTargetLockOn;                    // 0x0508(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EPlayStyleOption                              Default_PlayStyle;                                 // 0x0509(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50A[0x2];                                      // 0x050A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Default_VerticalCameraSpeedIdx;                    // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Default_VerticalCameraInvert;                      // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Default_HorizontalCameraInvert;                    // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Default_VSyncEnabled;                              // 0x0512(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EWindowMode                                   Default_FullscreenMode;                            // 0x0513(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_BGMVolumeIdx;                              // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_EffectVolumIdx;                            // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_VoiceVolumIdx;                             // 0x051C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Default_InputPresetName_GamePad;                   // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Default_InputPresetName_Keyboard;                  // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Default_Language;                                  // 0x0530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<float>                                 Selectable_Pad_HorizontalCameraSpeed;              // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Default_HorizontalCameraSpeedIdx;                  // 0x0550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Default_UseAutoTargeting;                          // 0x0554(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_555[0x3];                                      // 0x0555(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Selectable_Mouse_VerticalCameraSpeed;              // 0x0558(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_Mouse_HorizontalCameraSpeed;            // 0x0568(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ELScalabilityLevel                            Default_ScalabilityLevel;                          // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELHUDVisible                                  Default_HUDVisibility;                             // 0x0579(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Default_EnableMotionBlur;                          // 0x057A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Default_EnableTutorialPopup;                       // 0x057B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Default_LockOnImportanceWeightMultiply;            // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLLockOnImportanceWeight>       Selectable_LockOnImportanceWeightMultiply;         // 0x0580(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Default_EnableMoveCameraUpDown;                    // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Default_EnableAlignmentToCamera;                   // 0x0591(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Default_EnableCameraShake;                         // 0x0592(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_593[0x5];                                      // 0x0593(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Selectable_AmbienceVolumes;                        // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_CinematicsVolumes;                      // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_SystemVolumes;                          // 0x05B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_MasterVolumes;                          // 0x05C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Default_MasterVolumeIdx;                           // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_AmbienceVolumeIdx;                         // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_CinematicsVolumeIdx;                       // 0x05E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_SystemVolumeIdx;                           // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Default_EnableBloodExpression;                     // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ELFramerateLimit                              Default_FramerateLimit;                            // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5EA[0x6];                                      // 0x05EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Selectable_ForceFeedback_Multiply;                 // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_DeadZone_L;                             // 0x0600(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Selectable_DeadZone_R;                             // 0x0610(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Default_EnableVideoSubtitle;                       // 0x0620(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_621[0x3];                                      // 0x0621(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Default_DeadZone_Idx_L;                            // 0x0624(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_DeadZone_Idx_R;                            // 0x0628(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Default_ForceFeedback_Idx;                         // 0x062C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 Selectable_Mouse_Sensitivity_Multiply;             // 0x0630(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Default_MouseSensitivityMultiply_Idx;              // 0x0640(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_644[0x4];                                      // 0x0644(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 Selectable_FramerateLimits;                        // 0x0648(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Default_UseHDR;                                    // 0x0658(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_659[0x3];                                      // 0x0659(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Default_SubtitleSize;                              // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool GetDefaultUseAutoNewTargetLockOn();
	EPlayStyleOption GetDefaultPlayStyleOption();
	TArray<float> GetSelectableCameraSpeeds(ECameraDirectOption InRotator, bool IsPad);
	int32 GetDefaultCameraSpeedIdx(ECameraDirectOption InRotator);
	bool GetDefaultCameraInvert(ECameraDirectOption InRotator);
	EWindowMode GetDefaultFullscreenMode();
	bool GetDefaultVSyncEnabled();
	TArray<float> GetSelectableVolumes(ELVolumeType InType);
	int32 GetDefaultVolumeIdx(ELVolumeType InType);
	class FName GetDefaultInputPresetName(bool IsGamePad);
	TArray<class FString> GetSelectableLanguages();
	class FString GetDefaultLanguage();
	struct FIntPoint GetDefaultScreenResolution();
	bool GetDefaultUseAutoTargeting();
	ELScalabilityLevel GetDefaultScalabilityLevel();
	bool GetDefaultEnableMotionBlur();
	bool GetDefaultEnableTutorialPopup();
	int32 GetDefaultLockOnImportanceWeightMultiply();
	TArray<struct FLLockOnImportanceWeight> GetSelectableLockOnImportanceWeightMultiply();
	bool GetDefault_EnableAlignmentToCamera();
	bool GetDefault_EnableCameraShake();
	bool GetDefault_EnableMoveCameraUpDown();
	ELHUDVisible GetDefaultHUDVisibility();
	bool GetDefaultEnableBloodExpression();
	ELFramerateLimit GetDefaultFramerateLimit();
	bool GetDefaultEnableVideoSubtitle();
	TArray<float> GetSelectableDeadZone(bool LeftStick);
	TArray<float> GetSelectableForceFeedback();
	int32 GetDefaultDeadZoneIdx(bool LeftStick);
	int32 GetDefaultForceFeedbackIdx();
	int32 GetDefaultSelectableMouseSensitivityMultiplyIdx();
	TArray<float> GetSelectableMouseSensitivityMultiply();
	TArray<float> GetSelectableFramerateLimits();
	bool GetDefaultUseHDR();
	int32 GetDefaultSubtitleSize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionSystemDataBP_C">();
	}
	static class AOptionSystemDataBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOptionSystemDataBP_C>();
	}
};
static_assert(alignof(AOptionSystemDataBP_C) == 0x000008, "Wrong alignment on AOptionSystemDataBP_C");
static_assert(sizeof(AOptionSystemDataBP_C) == 0x000660, "Wrong size on AOptionSystemDataBP_C");
static_assert(offsetof(AOptionSystemDataBP_C, DefaultSceneRoot) == 0x0004B0, "Member 'AOptionSystemDataBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_Pad_VerticalCameraSpeed) == 0x0004B8, "Member 'AOptionSystemDataBP_C::Selectable_Pad_VerticalCameraSpeed' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_BGMVolumes) == 0x0004C8, "Member 'AOptionSystemDataBP_C::Selectable_BGMVolumes' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_EffectVolumes) == 0x0004D8, "Member 'AOptionSystemDataBP_C::Selectable_EffectVolumes' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_VoiceVolumes) == 0x0004E8, "Member 'AOptionSystemDataBP_C::Selectable_VoiceVolumes' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_Languages) == 0x0004F8, "Member 'AOptionSystemDataBP_C::Selectable_Languages' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_UseAutoNewTargetLockOn) == 0x000508, "Member 'AOptionSystemDataBP_C::Default_UseAutoNewTargetLockOn' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_PlayStyle) == 0x000509, "Member 'AOptionSystemDataBP_C::Default_PlayStyle' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_VerticalCameraSpeedIdx) == 0x00050C, "Member 'AOptionSystemDataBP_C::Default_VerticalCameraSpeedIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_VerticalCameraInvert) == 0x000510, "Member 'AOptionSystemDataBP_C::Default_VerticalCameraInvert' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_HorizontalCameraInvert) == 0x000511, "Member 'AOptionSystemDataBP_C::Default_HorizontalCameraInvert' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_VSyncEnabled) == 0x000512, "Member 'AOptionSystemDataBP_C::Default_VSyncEnabled' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_FullscreenMode) == 0x000513, "Member 'AOptionSystemDataBP_C::Default_FullscreenMode' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_BGMVolumeIdx) == 0x000514, "Member 'AOptionSystemDataBP_C::Default_BGMVolumeIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EffectVolumIdx) == 0x000518, "Member 'AOptionSystemDataBP_C::Default_EffectVolumIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_VoiceVolumIdx) == 0x00051C, "Member 'AOptionSystemDataBP_C::Default_VoiceVolumIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_InputPresetName_GamePad) == 0x000520, "Member 'AOptionSystemDataBP_C::Default_InputPresetName_GamePad' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_InputPresetName_Keyboard) == 0x000528, "Member 'AOptionSystemDataBP_C::Default_InputPresetName_Keyboard' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_Language) == 0x000530, "Member 'AOptionSystemDataBP_C::Default_Language' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_Pad_HorizontalCameraSpeed) == 0x000540, "Member 'AOptionSystemDataBP_C::Selectable_Pad_HorizontalCameraSpeed' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_HorizontalCameraSpeedIdx) == 0x000550, "Member 'AOptionSystemDataBP_C::Default_HorizontalCameraSpeedIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_UseAutoTargeting) == 0x000554, "Member 'AOptionSystemDataBP_C::Default_UseAutoTargeting' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_Mouse_VerticalCameraSpeed) == 0x000558, "Member 'AOptionSystemDataBP_C::Selectable_Mouse_VerticalCameraSpeed' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_Mouse_HorizontalCameraSpeed) == 0x000568, "Member 'AOptionSystemDataBP_C::Selectable_Mouse_HorizontalCameraSpeed' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_ScalabilityLevel) == 0x000578, "Member 'AOptionSystemDataBP_C::Default_ScalabilityLevel' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_HUDVisibility) == 0x000579, "Member 'AOptionSystemDataBP_C::Default_HUDVisibility' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EnableMotionBlur) == 0x00057A, "Member 'AOptionSystemDataBP_C::Default_EnableMotionBlur' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EnableTutorialPopup) == 0x00057B, "Member 'AOptionSystemDataBP_C::Default_EnableTutorialPopup' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_LockOnImportanceWeightMultiply) == 0x00057C, "Member 'AOptionSystemDataBP_C::Default_LockOnImportanceWeightMultiply' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_LockOnImportanceWeightMultiply) == 0x000580, "Member 'AOptionSystemDataBP_C::Selectable_LockOnImportanceWeightMultiply' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EnableMoveCameraUpDown) == 0x000590, "Member 'AOptionSystemDataBP_C::Default_EnableMoveCameraUpDown' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EnableAlignmentToCamera) == 0x000591, "Member 'AOptionSystemDataBP_C::Default_EnableAlignmentToCamera' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EnableCameraShake) == 0x000592, "Member 'AOptionSystemDataBP_C::Default_EnableCameraShake' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_AmbienceVolumes) == 0x000598, "Member 'AOptionSystemDataBP_C::Selectable_AmbienceVolumes' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_CinematicsVolumes) == 0x0005A8, "Member 'AOptionSystemDataBP_C::Selectable_CinematicsVolumes' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_SystemVolumes) == 0x0005B8, "Member 'AOptionSystemDataBP_C::Selectable_SystemVolumes' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_MasterVolumes) == 0x0005C8, "Member 'AOptionSystemDataBP_C::Selectable_MasterVolumes' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_MasterVolumeIdx) == 0x0005D8, "Member 'AOptionSystemDataBP_C::Default_MasterVolumeIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_AmbienceVolumeIdx) == 0x0005DC, "Member 'AOptionSystemDataBP_C::Default_AmbienceVolumeIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_CinematicsVolumeIdx) == 0x0005E0, "Member 'AOptionSystemDataBP_C::Default_CinematicsVolumeIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_SystemVolumeIdx) == 0x0005E4, "Member 'AOptionSystemDataBP_C::Default_SystemVolumeIdx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EnableBloodExpression) == 0x0005E8, "Member 'AOptionSystemDataBP_C::Default_EnableBloodExpression' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_FramerateLimit) == 0x0005E9, "Member 'AOptionSystemDataBP_C::Default_FramerateLimit' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_ForceFeedback_Multiply) == 0x0005F0, "Member 'AOptionSystemDataBP_C::Selectable_ForceFeedback_Multiply' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_DeadZone_L) == 0x000600, "Member 'AOptionSystemDataBP_C::Selectable_DeadZone_L' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_DeadZone_R) == 0x000610, "Member 'AOptionSystemDataBP_C::Selectable_DeadZone_R' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_EnableVideoSubtitle) == 0x000620, "Member 'AOptionSystemDataBP_C::Default_EnableVideoSubtitle' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_DeadZone_Idx_L) == 0x000624, "Member 'AOptionSystemDataBP_C::Default_DeadZone_Idx_L' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_DeadZone_Idx_R) == 0x000628, "Member 'AOptionSystemDataBP_C::Default_DeadZone_Idx_R' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_ForceFeedback_Idx) == 0x00062C, "Member 'AOptionSystemDataBP_C::Default_ForceFeedback_Idx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_Mouse_Sensitivity_Multiply) == 0x000630, "Member 'AOptionSystemDataBP_C::Selectable_Mouse_Sensitivity_Multiply' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_MouseSensitivityMultiply_Idx) == 0x000640, "Member 'AOptionSystemDataBP_C::Default_MouseSensitivityMultiply_Idx' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Selectable_FramerateLimits) == 0x000648, "Member 'AOptionSystemDataBP_C::Selectable_FramerateLimits' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_UseHDR) == 0x000658, "Member 'AOptionSystemDataBP_C::Default_UseHDR' has a wrong offset!");
static_assert(offsetof(AOptionSystemDataBP_C, Default_SubtitleSize) == 0x00065C, "Member 'AOptionSystemDataBP_C::Default_SubtitleSize' has a wrong offset!");

}

