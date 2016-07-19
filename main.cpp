#include "Character.hpp"
#include "Team.hpp"
#include "BattleMode.hpp"
#include "Monster.hpp"
#include "Healer.hpp"
#include <vector>
int main(){
	std::vector <Character*> vek;
	vek.push_back(new Monster);
	vek.push_back(new Character("John"));
	vek.push_back(new Healer);
	vek.push_back(new Character);
	Team blue(vek);
	blue.Presentation();
	Team red(vek);
	BattleMode Battle(blue,red);
	Battle.Present();
	return 0;


}


