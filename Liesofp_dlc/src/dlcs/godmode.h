#pragma once
#include <globals.h>

class godmode
{
private:
	bool enable = false;	
	bool Toggle();
	void Bind();
	bool bOnce = true;

public:
	void Run();
};

inline godmode god;