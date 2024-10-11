#include <stdafx.h>
#include "CharacterSpeed.h"
#include <player_utils/player_utils.h>

bool speedhack::Toggle()
{
	printf("toggle speedhack %d -> %d\n", enable, !enable);
	enable = !enable;
	return enable;
}

void speedhack::Bind()
{
	if (GetAsyncKeyState(VK_F2) & 1) {
		Toggle();
	}
}

int speedhack::ChangeType()
{
	if (GetAsyncKeyState(VK_F3) & 1) {
		DLCType StoredType = DLC_Type;
		DLC_Type = (DLC_Type == DLCType::ACCELERATE) ? DLCType::DILLATION : DLCType::ACCELERATE;
		LOG_INFO("Speedhack type changed form %s to %s", GetTypeName(StoredType).c_str(), GetTypeName(DLC_Type).c_str());
		m_bShouldResetSpeed = true;
	}

	return 0;
}

std::string speedhack::GetTypeName(DLCType currentType)
{
	switch (currentType)
	{
	case speedhack::DLCType::ACCELERATE:
		return "Accelerate";
		break;
	case speedhack::DLCType::DILLATION:
		return "Dillation";
		break;
	}
	return "";
}

void speedhack::Run(SDK::ULocalPlayer* local_player)
{
	Bind();

	if (!local_player) return;

	if (!globals::ALPC_Character or !globals::character) return;

	auto c_pawn = globals::player_controller->Pawn;
	if (!c_pawn) return;

	auto c_movement = globals::ALPC_Character->CharacterMovement;

	if (enable) {
		ChangeType();

		if (m_bShouldResetSpeed) {
			player_utils::ResetCharacterDilation(c_pawn);
			player_utils::ResetCharacterSpeed(c_movement);
			m_bShouldResetSpeed = false;
		}

		if ((DLC_Type == DLCType::ACCELERATE)) {
			c_movement->MaxAcceleration = 9999;
			c_movement->MaxWalkSpeed = 9999;
		}
		if (DLC_Type == DLCType::DILLATION) {
			c_pawn->CustomTimeDilation = 10;
		}

		bOnce = true;
	}

	if (!enable && bOnce) {
		player_utils::ResetCharacterDilation(c_pawn);
		player_utils::ResetCharacterSpeed(c_movement);
		bOnce = false;
	}
}

