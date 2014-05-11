#include "Mouette.h"


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

void Mouette::move(int key) {
	switch (key) {
	case OF_KEY_DOWN : //move down
		moveState = MS_DOWN;
		break;
	case OF_KEY_UP : //move up
		moveState = MS_UP;
		break;
	case OF_KEY_LEFT : //move left
		moveState = MS_LEFT;
		break;
	case OF_KEY_RIGHT : //move right
		moveState = MS_RIGHT;
		break;
	}

	/*
	float x = mouette->getPosition().x;
	float y = mouette->getPosition().y;
	bool left;
	bool right;
	b2Vec2 tmp = mouette->body->GetLinearVelocity();
	int antkey;
	if (key == OF_KEY_DOWN) {
		mouette->setPosition(ofVec2f(x, y + 20));
		printf("left : %d \n", left);
		printf("right : %d \n", right);
		if (tmp.y < 0) key = OF_KEY_LEFT;
		else key = OF_KEY_RIGHT;

	}
	if (key == '5') {
		printf(" en x: %d, en y : %d\n", tmp.x, tmp.y);
	}
	if (key == OF_KEY_UP) {
		printf("left : %d \n", left);
		printf("right : %d \n", right);
		mouette->setPosition(ofVec2f(x, y - 20));
		if (tmp.y < 0)  key = OF_KEY_LEFT;
		else key = OF_KEY_RIGHT;
	}

	if (key == OF_KEY_LEFT) {
		left = !left;
		antkey = key;
		//circles.back().get()->setPosition(ofVec2f(x - 20, y));
	}
	*/
}

void Mouette::draw() {
	ofFill();
	ofSetHexColor(0xf6c738);
	mouette->ofxBox2dCircle::draw();
}