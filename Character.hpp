#ifndef CHARACTER_HH
#define CHARACTER_HH
#include <iostream>
class Character{
private:
	int Health, MaxHealth, Armor, Strenght;
	std::string Name,Profesion;

protected:




public:
//kontruktor z danymi
	Character(std::string _Name="Default",int _Health=100,int _Armor=5, int  _Strenght=5,std::string profesion="default"){
		Name=_Name;
		MaxHealth=Health=_Health;
		Armor=_Armor;
		Strenght=_Strenght;
}
//metoda sprawdzajaca czy postac zyje.

bool isdead(){
		if(Health<=0)
			return true;
		else
			return false;
}
int & St(){
	return Strenght;
}
int & Hp(){
	return Health;
}
int & MHp(){
	return MaxHealth;
}

//metoda odpowiadająca za zadawanie obrażeń celowi
virtual void DealDmg(Character & Enemy);
//metoda odpowiadająca za Wlaczenie trybu obrony na jedna ture
virtual void Defence(){
Armor+= Armor*0.5;
}

//testowa prezentacja postaci
void Present(){
	std::cout<<Name<<"\n";
	std::cout<<"Hp = "<<Health<<"/"<<MaxHealth<<"\n";
	std::cout<<"Armor = "<<Armor<<"\n";
	std::cout<<"Strenght = "<<Strenght<<"\n\n\n";
}
//Vitruralny destruktor klasy
virtual ~Character(){}


char GetFirstChar(){
	return Name[0];
}

virtual int Indentify(){
	return 0;//0 jest symbolem abstrakcyjnej klasy Character
}

virtual void HealTeammate(){
	std::cerr<<"Nie możesz Healowac tym typem postaci";
}







//koniec klasy
};














#endif
