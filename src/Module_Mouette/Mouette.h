#pragma once
#include "ofmain.h"
#include "ofxbox2d.h"
#include "../Module_Chateau/Header/ObjetPhysique.h"

class Mouette : public ObjetPhysique {
private :
	int vie;
	ofPtr<ofxBox2dCircle> mouette;
	unsigned int moveState;
	bool contacting;
public : 
	Mouette(ofxBox2d&);
	~Mouette();
	void move(float, float);
	void diagmovedown(float, float);
	void diagmoveup(float x, float y);
	virtual void draw();
	float getPositionX();
	float getPositionY();
	inline ofPtr<ofxBox2dCircle> getCorps(){ return mouette; }
	static const int radius = 40;
	inline void startContact() { contacting = true; }
	inline void endContact() { contacting = false; }
	static const int VIE_MAX = 100;
	inline int getVie(){ return vie; }
	void destroy();



};

enum _moveState{
	MS_STOP,
	MS_RIGHT,
	MS_LEFT,
};