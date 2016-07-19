#ifndef TEAM_HH
#define TEAM_HH
#define SIZE 4
#include "Character.hpp"
#include <vector>
class Team{
private:
	std::vector<Character*> Members;
	int DeadCount;//zmienna służąca do liczenia zmarlych postaci
public:

	Team (std::vector <Character*> x){
		for(int i =0;i<SIZE ; ++i){
		Members.push_back(x[i]);
		}
		DeadCount=0;
	}
	Team(){
		for(int i=0 ; i<SIZE ;i++){
			this->Members.push_back(nullptr);
		}
		std::cerr<<"Utworzono pusta drużyne";
		DeadCount=0;
	}


	Character * operator[](int Index){
		return Members[Index];
	}

//do zmiany
	//metoda sprawdzajaca czy wszyscy zgineli
	bool isTeamDead(){
		if(DeadCount==SIZE){
	return true;
	}else
	return false;
	}

	~Team(){}
	//funkcja testowa do  prezetnowania druzyny
	void Presentation(){
		for(int i=0;i<SIZE;++i){
			Members[i]->Present();
		}
	}

	void AddMember(int Index, Character & x){
		Members[Index]=&x;
	}



};





#endif
