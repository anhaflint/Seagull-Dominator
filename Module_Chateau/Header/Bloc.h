#pragma once 

#include "ofxBox2d.h"
#include "ofMain.h"
#include "Module_Chateau\Header\ObjetPhysique.h"
#include "Module_Chateau\Header\Grains.h"


class Bloc : public ObjetPhysique {
protected : 
	int base; 
	int height;
	int nbGrains;
	vector <ofPtr<Grains>> grains;
	

public : 
	Bloc(int key, ofxBox2d& box2d, int mouseX, int mouseY);
	virtual void draw();
	~Bloc();
};


