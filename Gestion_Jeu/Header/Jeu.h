#pragma once

#include "EnumMeteo.h"
#include "EnumSaison.h"
#include "../example-Simple/src/Module_Chateau/Header/Castle.h"

class Jeu
{
private:
	int score;
	int point;
	int annee;
	SAISON saison;
	METEO meteo;
	//BONUS bonus;
	std::vector<Castle> chateau;
public:
	Jeu();
	~Jeu();
};

