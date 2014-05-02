#pragma once

#include "ofxBox2d.h"
#include "ofMain.h"
#include "ofxBox2dRect.h"
#include "Util\Timer.h"
#include "Module_Chateau\Header\ObjetPhysique.h"

class Grains : public ObjetPhysique, public ofxBox2dRect {
protected:
	Timer timer;
	ofVec2f prec;
	ofVec2f current;	
public:
	static const int size = 20;
	Grains();
	Grains(ofVec2f); // Modifi� le type de Position vers ofVec2f
	int deplacement(ofVec2f courant, ofVec2f precedent); // Modifi� le type de position vers ofVec2f
	void disparition();
	virtual void draw();
};