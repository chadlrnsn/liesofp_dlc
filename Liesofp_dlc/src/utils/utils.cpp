#include "stdafx.h"
#include "utils.h"
#include <globals.h>

using namespace globals;
using namespace SDK;

void utils::UpdateGlobals() noexcept
{
    if (!IsAddressReadable(UEngine::GetEngine(), sizeof(UEngine))) {
        LOG_ERROR("Engine address not readable!");
        return;
    }

    UEngine* engine = UEngine::GetEngine();
    if (!engine) return;
    
    if (!IsAddressReadable(UWorld::GetWorld(), sizeof(UWorld))) {
        LOG_ERROR("World address not readable!");
        return;
    }

    UWorld* world = UWorld::GetWorld();


    if (!world) {
        LOG_WARN("no world");
        return;
    }

    if (!IsPointerReadable(&world->OwningGameInstance)) {
        LOG_ERROR("Pointer on OwningGameInstance not readable!");
        return;
    }

    game_instance = world->OwningGameInstance;

    if (!game_instance) {
        LOG_WARN("no game_instance");
        return;
    }

    if (!IsPointerReadable(&game_instance->LocalPlayers)) {
        LOG_ERROR("Pointer on LocalPlayer not readable!");
        return;
    }

    local_players = game_instance->LocalPlayers;

    if (!local_players) {
        LOG_WARN("no local_players");
        return;
    }

    unsigned int numPlayers = local_players.Num();
    if (numPlayers < 1) {
        LOG_WARN("LocalPlayers array is empty");
        return;
    }

    if (!local_players.IsValidIndex(0)) {
        LOG_ERROR("LocalPlayer not valid at index 0");
        return;
    }

    if (!IsAddressReadable(&local_players[0], sizeof(TArray<ULocalPlayer*>))) {
        LOG_ERROR("Player array not readable!");
        return;
    }
    
    local_player = local_players[0];

    if (!local_player) {
        LOG_WARN("no self");
        return;
    }

    if (!IsPointerReadable(&local_player->PlayerController)) {
        LOG_ERROR("Pointer on OwningGameInstance not readable!");
        return;
    }

    player_controller = local_player->PlayerController;

    if (!player_controller) {
        LOG_WARN("no player controller");
        return;
    }

    character = player_controller->Character;
    if (!character) {
        LOG_DEBUG("no character");
        return;
    }

    AL_Character = reinterpret_cast<SDK::ALCharacter*>(character);
    if (!AL_Character) {
        LOG_DEBUG("unable cast character to AL_Character");
        return;
    }

    ALPC_Character = reinterpret_cast<SDK::ALPCCharacter*>(AL_Character);
    if (!ALPC_Character) {
        LOG_DEBUG("unable cast AL_Character to ALPC_Character");
        return;
    }

    if (!IsPointerReadable(&player_controller->AcknowledgedPawn)) {
        LOG_ERROR("Pointer on OwningGameInstance not readable!");
        return;
    }

    pawn = player_controller->AcknowledgedPawn;

    if (!pawn) {
        LOG_WARN("no pawn");
        return;
    }

    if (!pawn->IsControlled() or !pawn->IsPawnControlled()) {
        LOG_WARN("something not controlled pawn");
        return;
    }

}

bool utils::IsGameExploitable()
{

    if (!pawn)
        return false;

	return true;
}

bool utils::IsAddressReadable(const void* ptr, size_t size) {
    MEMORY_BASIC_INFORMATION mbi;
    if (VirtualQuery(ptr, &mbi, sizeof(mbi)) == 0)
        return false;
    if (mbi.State != MEM_COMMIT)
        return false;
    if (mbi.Protect & (PAGE_GUARD | PAGE_NOACCESS))
        return false;
    return (reinterpret_cast<uintptr_t>(ptr) + size) <= (reinterpret_cast<uintptr_t>(mbi.BaseAddress) + mbi.RegionSize);
}



void ue4::UE_RenderText(
    UCanvas* canvas,
    UFont* font,
    FString text,
    FVector2D Position,
    FVector2D Scale,
    FLinearColor color
)
{
    canvas->K2_DrawText(
        font,
        text,
        Position,
        Scale, // text offset
        color, // Text color
        false,
        FLinearColor(0, 0, 0, 1), // Shadow color
        FVector2D(0, 0), // Shadow offset
        false,
        false,
        false,
        FLinearColor(0, 0, 0, 1)
    );
}

void ue4::UE_RenderTextEx(
    UCanvas* canvas,
    UFont* font,
    FString text,
    FVector2D Position,
    FVector2D Scale,
    FLinearColor color,
    bool centeredX,
    bool centeredY,
    bool outline,
    FLinearColor outlineColor
)
{
    canvas->K2_DrawText(
        font,
        text,
        Position,
        Scale, // text offset
        color, // Text color
        false,
        FLinearColor(0, 0, 0, 1), // Shadow color
        FVector2D(0, 0), // Shadow offset
        centeredX,
        centeredY,
        outline,
        outlineColor
    );
}
