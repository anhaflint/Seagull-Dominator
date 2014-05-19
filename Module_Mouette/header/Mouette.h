#pragma once
#include "ofmain.h"
#include "ofxbox2d.h"
#include "Module_Chateau/Header/ObjetPhysique.h"

class Mouette : public ObjetPhysique {
private :
	int resistance;
	ofPtr<ofxBox2dCircle> mouette;
	unsigned int moveState;
public : 
	Mouette(ofxBox2d&);
	~Mouette();
	void move(float, float);
	void diagmovedown(float, float);
	void diagmoveup(float x, float y);

	static const int radius = 40;
	float getPositionX();
	float getPositionY();
	inline ofPtr<ofxBox2dCircle> getBody(){ return mouette; }
	virtual void draw();
};

enum _moveState{
	MS_STOP,
	MS_RIGHT,
	MS_LEFT,
};