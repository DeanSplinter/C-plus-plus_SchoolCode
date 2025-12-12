#include "Attack.h"

Attack::Attack(std::string aName, float someDamage)
	:name(aName), damage(someDamage)
{


}

Attack::~Attack()
{

}

std::string Attack::GetName()
{
	return name;
}

float Attack::GetDamage()
{
	return damage;
}

void Attack::SetName(std::string aName)
{
	name = aName;
}

void Attack::SetDamage(float someDamage)
{
	damage = someDamage;
}
