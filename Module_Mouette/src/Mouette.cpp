#include "Module_Mouette/header/Mouette.h"



Mouette::Mouette(ofxBox2d& box2d) {
	affichage = Affichage::Instance();
	this->mouette = ofPtr<ofxBox2dCircle>(new ofxBox2dCircle);
	mouette->setPhysics(90, 0.0f, 0.5);
	mouette->setup(box2d.getWorld(), 400, 400, 20);
	//mouette->body->SetGravityScale(0);
	mouette->body->SetLinearVelocity(b2Vec2(0, 0));
	this->mouette->bodyDef.type = b2_staticBody;
	spriteMouette = MOUETTE_D0;
}

Mouette::~Mouette() {
	
}

void Mouette::move(float x, float y) {
	mouette->body->SetLinearVelocity(b2Vec2(x, y));
}


void Mouette::draw() {
	ofSetColor(255, 255, 255);	//Image claire
	this->affichage->aff_img((IMG)spriteMouette, (int)mouette.get()->getPosition().x - mouette.get()->getRadius()*2, (int)mouette.get()->getPosition().y - mouette.get()->getRadius()*2, mouette.get()->getRadius() * 3, mouette.get()->getRadius() * 3);

	if (mouette->body->GetLinearVelocity().x > 0)
	{
		if (spriteMouette < MOUETTE_D8)
			spriteMouette++;
		else
			spriteMouette = MOUETTE_D0;
	}
	else
	{
		if (spriteMouette < MOUETTE_G8)
			spriteMouette++;
		else
			spriteMouette = MOUETTE_G0;
	}
}

float Mouette::getPositionX(){
	return mouette->getPosition().x;
}

float Mouette::getPositionY(){
	return mouette->getPosition().y;
}

void Mouette::destroy() {
	if (mouette != NULL)
		mouette->destroy();
}