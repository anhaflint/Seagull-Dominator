#include "Module_Mouette/header/Mouette.h"



Mouette::Mouette(ofxBox2d& box2d) {
	this->mouette = ofPtr<ofxBox2dCircle>(new ofxBox2dCircle);
	mouette->setPhysics(6, 0.73, 0.5);
	mouette->setup(box2d.getWorld(), 400, 400, 40);
	mouette->body->SetGravityScale(0);
	this->mouette->bodyDef.type = b2_staticBody;
	moveState = MS_STOP;
}

Mouette::~Mouette() {
	
}

void Mouette::move(float x, float y) {
	mouette->body->SetLinearVelocity(b2Vec2(x, y));
}


void Mouette::diagmovedown(float x, float y) {
	mouette->setPosition(ofVec2f(mouette->getPosition().x, mouette->getPosition().y + 6));
	this->move(x, y);
}

void Mouette::diagmoveup(float x, float y) {
	mouette->setPosition(ofVec2f(mouette->getPosition().x, mouette->getPosition().y - 6));
	this->move(x, y);
}

void Mouette::draw() {
	ofFill();
	ofSetHexColor(0xf6c738);
	mouette->ofxBox2dCircle::draw();
}

float Mouette::getPositionX(){
	return mouette->getPosition().x;
}

float Mouette::getPositionY(){
	return mouette->getPosition().y;
}

