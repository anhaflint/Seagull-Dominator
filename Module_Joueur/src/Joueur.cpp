#include "../header/Joueur.h"


Joueur::Joueur(ofxBox2d& box2d) {
	// Allocation de la mouette 
	mouette = ofPtr<Mouette>(new Mouette(box2d));
	b2Vec2* vecBegin = new b2Vec2(mouette->getPositionX() + mouette->radius, mouette->getPositionY());
	rope = ofPtr<Rope>(new Rope(vecBegin, 30, &box2d));
	rope->joinBegin(mouette->getBody()->body);
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