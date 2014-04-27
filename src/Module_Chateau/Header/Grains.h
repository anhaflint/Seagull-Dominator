#ifndef GRAINS_H
#define GRAINS_H

#include "../../Util/Timer.h"
#include "ObjetPhysique.h"
#include "ofxBox2d.h"
#include "ofMain.h"
#include "../Header/Position.h"

class Grains : public ObjetPhysique {
protected:
	int densite;
	int taille;
	Timer timer;
	Position precedente;
	Position courant;
	ofxBox2d                            box2d;			  //	the box2d world
	vector    <ofPtr<ofxBox2dCircle> >	circles;		  //	default box2d circles
	
public:
	Grains(int, int, Position );
	int deplacement(Position courant, Position precedent);
	void disparition();
};

#endif