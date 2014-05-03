#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"
#include "Module_Chateau\Header\Bloc.h"


class Castle : public ObjetPhysique {
protected :
	ofPtr<Bloc> base;
	ofPtr<Bloc> med;
	ofPtr<Bloc> top; 
	int nbGrains;

public :
	Castle(ofxBox2d& box2d, int mouseX, int mouseY);
	~Castle() {}
	virtual void draw();
	int getNbGrains();

};