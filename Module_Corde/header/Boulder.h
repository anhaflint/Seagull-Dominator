#pragma once

#include "ofMain.h"
#include "ofxBox2d.h"


class Boulder : public ofxBox2dCircle {
public :
	Boulder();
	~Boulder();
	virtual void draw();

};