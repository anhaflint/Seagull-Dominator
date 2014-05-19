#include "Mouette.h"


Mouette::Mouette(ofxBox2d& box2d) {
	this->mouette = ofPtr<ofxBox2dCircle>(new ofxBox2dCircle);
	mouette->setPhysics(10, 0.1, 0.5);
	mouette->setup(box2d.getWorld(), 400, 400, radius);
	mouette->body->SetGravityScale(0);
	this->mouette->bodyDef.type = b2_staticBody;
	moveState = MS_STOP;
	contacting = false;
	vie = VIE_MAX;
	mouette->body->SetUserData(this);
}

Mouette::~Mouette() {
	
}

float Mouette::getPositionX(){
	return mouette->getPosition().x;
}

float Mouette::getPositionY(){
	return mouette->getPosition().y;
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
	std::cout << "Draw mouette" << endl;
	if (contacting){
		std::cout << "Vie--" << endl;
		vie--;
	}
	ofFill();
	ofSetHexColor(0xf6c738);
	mouette->ofxBox2dCircle::draw();
}

void Mouette::destroy() {
	mouette->destroy();
}

