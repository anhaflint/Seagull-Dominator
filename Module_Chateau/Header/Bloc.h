#pragma once 

#include "ofxBox2d.h"
#include "ofMain.h"
#include "Module_Chateau\Header\ObjetPhysique.h"
#include "Module_Chateau\Header\Grains.h"
#include "ofxBox2DCircle.h"


class Bloc : public ObjetPhysique {
protected : 
	int base; 
	int height;
	int nbGrains;
	vector <ofPtr<ofxBox2dCircle>> bloc;
	

public : 
	Bloc();
	Bloc(int, int);
};


