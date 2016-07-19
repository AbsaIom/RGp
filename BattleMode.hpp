#ifndef BATTLE_HH
#define BATTLE_HH
#include "Team.hpp"

class BattleMode{
	Team Blue,Red;
public:
	BattleMode( const Team & x,const Team & y):Blue(x),Red(y){}
		//funkcja prezentująca bitwe
	void Present(){
		for(int i=0;i<SIZE;++i){
			std::cout<<Blue[i]->GetFirstChar()<<"       |       "<<Red[i]->GetFirstChar()<<std::endl;
			std::cout<<Blue[i]->Hp()<<"/"<<Blue[i]->MHp()<<" |  "<<Red[i]->Hp()<<"/"<<Red[i]->MHp()<<std::endl;
		}


	}

	void Battle(){
		int i=0;
		while(Blue.isTeamDead()==true||Red.isTeamDead()==true){

		i=i%SIZE;
		}
	}






};




#endif
