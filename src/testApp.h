#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"
#include "includes.h"
#include "Module_Mouette\Mouette.h"
#include "Module_Mouette/MouetteContactListener.h"
// -------------------------------------------------

class testApp : public ofBaseApp {
	
public:
	
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void resized(int w, int h);
	
	ofxBox2d  box2d;			  //	the box2d world
	ofPtr<Mouette> mouette;
	ofPtr<Rope> corde;
	ofPtr<ofxBox2dRect> boulet;


	//ofPtr<Bloc> bloc;
	ofPtr<Castle> castle1, castle2;
	ofImage background;
	bool keyIsDown[4];

	vector    <ofPtr<ofxBox2dCircle> >	circles;		//	default box2d circles
	vector	  <ofPtr<ofxBox2dRect> >	boxes;			  //	defalut box2d rects
	b2WeldJointDef weldJointDef;

	MouetteContactListener mouetteContactListenerInstance;

};


enum _key{
	LEFT,
	UP,
	RIGHT,
	DOWN,
};
