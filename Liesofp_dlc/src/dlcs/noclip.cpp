#include <stdafx.h>
#include "noclip.h"
#include <globals.h>

using namespace globals;

void Noclip::Bind()
{
	if (GetAsyncKeyState(VK_F3) & 1) {
		LOG_INFO("Noclip %d -> %d", bEnable, !bEnable);
		bEnable = !bEnable;
	}
}




void Noclip::Run()
{
	static MovementMode mode;

	Bind();

	auto character = player_controller->Character;
	if (!character) return;

	auto character_movement = character->CharacterMovement;
	if (!character_movement) return;

	auto movementMode = character_movement->MovementMode;

	if (bEnable && bOnce) {
		
		if ((mode.mode != character_movement->MovementMode) and mode.bOnce) {
			
			// store it
			mode.mode = movementMode;
			mode.bOnce = false;

			// set to self fly mode

			movementMode = EMovementMode::MOVE_Flying;
			character->bActorEnableCollision = false;
			 
			LOG_INFO("Movement mode set to NOCLIP");
		}


		bOnce = false;
	}
	if (!bEnable && !bOnce) {

		movementMode = mode.mode;
		mode.bOnce = true;
		character->bActorEnableCollision = true;

		LOG_INFO("Movement restored");

		bOnce = true;
	}
}
