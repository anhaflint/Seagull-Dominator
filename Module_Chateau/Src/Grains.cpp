#include "Module_Chateau\Header\Grains.h"


Grains::Grains() : ofxBox2dRect() {
}

Grains::Grains(ofVec2f position)
:  ofxBox2dRect() { 
	this->current = position; 
}


void Grains::draw() {
	this->ofxBox2dRect::draw();
}