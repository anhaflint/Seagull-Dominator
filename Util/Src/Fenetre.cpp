#include "Util\Header\Fenetre.h"

/*!
* \file Fenetre.h
* \brief Classe de gestion d'une fenetre
* \author Quentin GROS, Mounia HAMEDI (relecture)
*/
Fenetre::Fenetre()
{
	affichage = Affichage::Instance();
}

void Fenetre::aff_fenetre(IMG fenetre)
{
	affichage->aff_img(fenetre, 0, 0, 1280, 720);
}

Fenetre::~Fenetre()
{
}
