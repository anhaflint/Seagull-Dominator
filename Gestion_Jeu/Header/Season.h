#pragma once


#include "ofMain.h"
#include "ofxBox2d.h"

class Season {
private :

public : 
	Season();
	~Season();
	void spring();
	void summer();
	void fall();
	void winter();
};

enum state_{
	SPRING,
	SUMMER,
	FALL,
	WINTER
};