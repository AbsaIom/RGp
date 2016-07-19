#include "Character.hpp"

void Character::DealDmg(Character & Enemy){
	if((Enemy.Armor-1)>=Strenght){
	Enemy.Health-=1;
	}
	else{
	Enemy.Health-=Strenght-Enemy.Armor;
	}
}

