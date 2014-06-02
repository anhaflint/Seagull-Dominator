#include "Module_Chateau\Header\Grains.h"


/*!
 * \file Grains.cpp
 * \brief classe Grains
 * \author Claire REMY
 */


Grains::Grains() : ofxBox2dRect() {
}

Grains::Grains(ofVec2f position)
:  ofxBox2dRect() { 
	this->current = position; 
}


void Grains::draw() {
	this->ofxBox2dRect::draw();
}