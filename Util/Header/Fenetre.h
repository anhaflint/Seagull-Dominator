#pragma once

#include "Affichage.h"
#include <string>

//Pourquoi pas ne pas juste rajouter une fonction dans la classe affichage avec aff_fenetre ... à méditer

class Fenetre
{
private:
	Affichage *affichage;
public:
	void aff_fenetre(IMG, int, int);
	Fenetre();
	~Fenetre();
};

