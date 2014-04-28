#ifndef GRAINS_H
#define GRAINS_H

#include "../../Util/Timer.h"
#include "ObjetPhysique.h"
#include "ofxBox2d.h"
#include "ofMain.h"
#include "../Header/Position.h"
#include "ofxBox2dCircle.h"

class Grains : public ObjetPhysique, public ofxBox2dCircle {
protected:
	//int densite; en héritant de ofxBox2dCirlce on a acces a la density du circle deja...
	// int taille; idem : circle.getRadius
	Timer timer;
	ofVec2f prec;
	ofVec2f current;
	// Position precedente; // ofVec2f plutot ? Déjà géré par openframeworks
	// Position courant; // idem
	ofxBox2d                            box2d;			  //	the box2d world
	//vector    <ofPtr<ofxBox2dCircle>>	circles;		  //	default box2d circles
	
public:
	Grains();
	Grains(float, float, ofVec2f);
	int deplacement(ofVec2f courant, ofVec2f precedent);
	void disparition();
	virtual void draw();
};

#endif