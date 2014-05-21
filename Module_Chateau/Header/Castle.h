#ifndef _CASTLE_H
#define _CASTLE_H

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
	Castle(int mouseX, int mouseY);
	~Castle();
	virtual void draw();
	int getNbGrains();

};

#endif