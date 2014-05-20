#include "Module_Joueur/header/Joueur.h"



Joueur::Joueur(ofxBox2d& box2d) {
	// Allocation de la mouette 
	mouette = ofPtr<Mouette>(new Mouette(box2d));
	mouette->getBody()->body->SetGravityScale(-1);
	b2Vec2* vecBegin = new b2Vec2(mouette->getPositionX() + mouette->radius, mouette->getPositionY());
	rope = ofPtr<Rope>(new Rope(vecBegin, 30, &box2d));
	rope->joinBegin(mouette->getBody()->body);
}


void Joueur::move(float x, float y) {
	mouette->move(x, y);
}


void Joueur::diagmovedown(float x, float y) {
	mouette->diagmovedown(x, y);
}

void Joueur::diagmoveup(float x, float y) {
	mouette->diagmoveup(x, y);
}

void Joueur::draw() {
	if (mouette != NULL)
		mouette->draw();

	if (rope != NULL){
		rope->draw();
	}
}

Joueur::~Joueur() {
}