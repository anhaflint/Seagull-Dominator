#ifndef _GRAINS_H
#define _GRAINS_H

#include "ofxBox2d.h"
#include "ofMain.h"
#include "ofxBox2dRect.h"
#include "Util\Header\Timer.h"
#include "Module_Chateau\Header\ObjetPhysique.h"

class Grains : public ObjetPhysique, public ofxBox2dRect {
protected:
	Timer timer;
	ofVec2f prec;
	ofVec2f current;	
public:
	static const int size = 10;
	Grains();
	Grains(ofVec2f); // Modifié le type de Position vers ofVec2f
	int deplacement(ofVec2f courant, ofVec2f precedent); // Modifié le type de position vers ofVec2f
	void disparition();
	virtual void draw();
};

#endif