#pragma once
#include <time.h>
#include "Position.h"
#include "ofMain.h"

class ObjetPhysique {
protected:
	ofVec2f pos;
public:
	ObjetPhysique(){}
	ObjetPhysique(ofVec2f Pos) :pos(Pos){}
};





