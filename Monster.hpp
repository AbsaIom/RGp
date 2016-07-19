#ifndef MON_HH
#define MON_HH
#include "Character.hpp"
class Monster:public Character{
private:
public:
	Monster(std::string _Name="monster",int _Health=100,int _Armor=5, int  _Strenght=5,std::string profesion="Monster"):
		Character(_Name,_Health,_Armor,_Strenght, profesion){}

virtual int Identify(){
	return 1;//identyfikator potwora
}








};
#endif
