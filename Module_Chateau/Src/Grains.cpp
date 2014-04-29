#include "../Header/Grains.h"


Grains::Grains() : ofxBox2dRect() {
	cout << "constructeur par defaut" << endl;
}

Grains::Grains(ofVec2f position)
:  ofxBox2dRect() { //ObjetPhysique(position), 
	cout << "constructeur de g" << endl;
	this->setPhysics(10, 0, 1);
	this->setPosition(position);
	this->current = position; 
	this->setup(box2d.getWorld(), position.x, position.y, 10, 10);
	/* Commenté pour mettre la vraie hierarchie : Les grains sont des cercles, ça on le mettra dans le constructeur de bloc, non ?
	circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
	circles.back().get()->setPhysics(densite, 0.1, taille);
	circles.back().get()->setup(box2d.getWorld(), pos.getX(), pos.getY(), 1);
	*/
}


void Grains::draw() {
	this->ofxBox2dRect::draw();
}