#ifndef HEALER_HH
#define HEALER_HH
#include "Character.hpp"

class Healer:public Character{
public:
	Healer(std::string _Name="Harold",int _Health=100,int _Armor=5, int  _Strenght=5,std::string profesion="Healer"):
			Character(_Name,_Health,_Armor,_Strenght, profesion){}


	virtual void HealTeammate( Character & Healed){
		if(Healed.Hp()+this->St()>=Healed.MHp()){
			Healed.Hp()=Healed.MHp();
			std::cout<<"Cel uleczony na max";

		}else if(Healed.Hp()<= 0){
			std::cout<<"Cel już dawno martwy";
		}else{
			Healed.Hp()+=this->St();
			std::cout<<"Cel uleczony";
		}
	}

	virtual int Indentify(){
		return 2;//2 jest symbolem Healera
	}



};




#endif
