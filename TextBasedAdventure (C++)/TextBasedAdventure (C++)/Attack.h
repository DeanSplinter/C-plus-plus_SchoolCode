#pragma once
#include <iostream>

class Attack
{
public:
	Attack(std::string aName, float someDamage);
	~Attack();

	std::string GetName();
	float GetDamage();


	void SetName(std::string aName);
	void SetDamage(float someDamage);

private:
	std::string name;
	float damage;
};

