#pragma once


#include "ofMain.h"
#include "ofxBox2d.h"
#include "Module_Mouette/header/Mouette.h"
#include "Module_Corde/header/Rope.h"



class Joueur {
private :
	string name;
	unsigned int score;

	ofPtr<Rope> rope;
	ofPtr<Mouette> mouette;
public :
	Joueur(ofxBox2d& box2d);
	~Joueur();
	virtual void draw();
	void move(float, float);
	void diagmovedown(float, float);
	void diagmoveup(float x, float y);

	int getForceMouette();
	int getTailleCorde();
	int getTailleBoulet();

	void setForceMouette(int);
	void setTailleCorde(int);
	void setTailleBoulet(int);
};