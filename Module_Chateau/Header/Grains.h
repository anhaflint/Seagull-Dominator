#ifndef GRAINS_H
#define GRAINS_H

#include "../../Util/Timer.h"
#include "ObjetPhysique.h"
#include "ofxBox2d.h"
#include "ofMain.h"
#include "../Header/Position.h"
#include "ofxBox2dRect.h"

class Grains : public ObjetPhysique, public ofxBox2dRect {
protected:

	Timer timer;
	ofVec2f prec;
	ofVec2f current;
	ofxBox2d box2d;			  //	the box2d world
	
public:
	Grains();
	Grains(ofVec2f); // Modifié le type de Position vers ofVec2f
	int deplacement(ofVec2f courant, ofVec2f precedent); // Modifié le type de position vers ofVec2f
	void disparition();
	virtual void draw();
};

#endif