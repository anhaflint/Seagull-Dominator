#pragma once 

#include "ofxBox2d.h"
#include "ofMain.h"
#include "Module_Chateau\Header\Grains.h"
#include "Module_Chateau\Header\ObjetPhysique.h"
#include "Util/Affichage.h"


class Bloc : public ObjetPhysique {
protected : 
	int length; 
	int height;
	int nbGrains;
	vector <ofPtr<Grains>> grains;

public : 
	Bloc(int length, int height, ofxBox2d& box2d, int mouseX, int mouseY);
	inline int getNbGrains(){ return length*height; }
	virtual void draw(ofImage);
	inline int getLength() { return this->length; }
	inline int getHeight() { return this->height; }
	~Bloc();
};


