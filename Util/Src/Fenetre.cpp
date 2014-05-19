#include "Util\Header\Fenetre.h"



Fenetre::Fenetre()
{
	affichage = Affichage::Instance();
}

void Fenetre::aff_fenetre(IMG fenetre, int largeur, int hauteur)
{
	affichage->aff_img(fenetre, 0, 0, 1280, 720);
}

Fenetre::~Fenetre()
{
}
