#include "stdafx.h"
#include "player_utils.h"


void player_utils::ResetCharacterDilation(APawn* p_pawn) {
	p_pawn->CustomTimeDilation = 1;
}

void player_utils::ResetCharacterSpeed(UCharacterMovementComponent* p_characterMoveComp) {
	p_characterMoveComp->MaxAcceleration = 1000;
	p_characterMoveComp->MaxWalkSpeed = 400;
}
