#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"

#include "b2WorldCallbacks.h"
//../../libs/Box2D/Dynamics/

class ScoreCounter : public b2QueryCallback {
public :
	std::vector<b2Body*> foundBodies;

	bool ReportFixture(b2Fixture* fixture) {
		cout << "coucou" << endl;
		foundBodies.push_back(fixture->GetBody());
		return true;
	};
	
	int getSize(){
		return foundBodies.size;
	}
};