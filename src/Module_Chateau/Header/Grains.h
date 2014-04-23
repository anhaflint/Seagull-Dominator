#ifndef GRAINS_H
#define GRAINS_H

#include "../../Util/Timer.h"
#include "ObjetPhysique.h"

class Grains : public ObjetPhysique {
protected:
	int densite;
	int taille;
	Timer timer;
	Position precedente;
	Position courant;
	Grains(int, int, Position);
public:
	int deplacement(Position courant, Position precedent);
	void disparition();
};

#endif