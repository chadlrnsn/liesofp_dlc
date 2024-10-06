#pragma once
#include <SDK.hpp>

class Noclip
{
private:
	bool bOnce = true;
	bool bEnable = false;
	SDK::EMovementMode stored_movement_mode = SDK::EMovementMode::MOVE_None;
	
	struct MovementMode
	{
		SDK::EMovementMode mode;
		bool bOnce = true;
	};

	void Bind();

public:
	void Run();
};

inline Noclip noclip;