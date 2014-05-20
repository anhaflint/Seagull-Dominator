#pragma once

#include "../example-Simple/src/Module_Chateau/Header/Castle.h"

class Jeu
{
private:
	int score;
	int point;
	int annee;
	//BONUS bonus;
	std::vector<Castle> chateau;
public:
	Jeu();
	~Jeu();
};

