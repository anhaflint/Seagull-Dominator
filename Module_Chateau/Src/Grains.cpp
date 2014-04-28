#include "../Header/Grains.h"


Grains::Grains() : ofxBox2dCircle() {
	cout << "constructeur par defaut" << endl;
}

Grains::Grains(float density, float size, ofVec2f position)
:  ofxBox2dCircle() { //ObjetPhysique(position), 
	cout << "constructeur de g" << endl;
	float r = ofRandom(4, 20);
	this->setPhysics(density, 0.73, 0.6);
	this->setPosition(position);
	this->current = position; 
	this->setup(box2d.getWorld(), position.x, position.y, r);
	/* Commenté pour mettre la vraie hierarchie : Les grains sont des cercles, ça on le mettra dans le constructeur de bloc, non ?
	circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
	circles.back().get()->setPhysics(densite, 0.1, taille);
	circles.back().get()->setup(box2d.getWorld(), pos.getX(), pos.getY(), 1);
	*/
}


void Grains::draw() {
	this->ofxBox2dCircle::draw();
}