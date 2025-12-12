#pragma once
#include "Player.h"
class Game
{
public: //Data can be accessed by any class
	Game();
	~Game();

	void Update();

private: //Data can only be accessed by this class
	void AskPlayerName();
	Player* player;
};

