#pragma once
#include <iostream>

class Player
{
public:
	Player(std::string aName);
	~Player();


private:
	float health;
	std::string name;
};

