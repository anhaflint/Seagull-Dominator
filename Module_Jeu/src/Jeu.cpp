#include "Module_Jeu/header/Jeu.h"

Jeu::Jeu() :score(0), point(0), years(0), over(false) {

}

void Jeu::Game() {
	while (!over)
	{
		years.push_back(ofPtr<Year>(new Year()));
	}
}

Jeu::~Jeu() {

}