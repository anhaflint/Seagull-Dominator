#include "Module_Joueur/header/Joueur.h"


/*!
 * \file Joueur.cpp 
 * \brief Classe permettant de gerer le joueur et de le creer
 */
Joueur::Joueur(ofxBox2d& box2d) {
	// Allocation de la mouette 
	mouette = ofPtr<Mouette>(new Mouette(box2d));
	mouette->getBody()->body->SetGravityScale(-0.1f);
	b2Vec2* vecBegin = new b2Vec2(mouette->getPositionX() + mouette->radius, mouette->getPositionY());
	rope = ofPtr<Rope>(new Rope(vecBegin, 30, &box2d));
	rope->joinBegin(mouette->getBody()->body);
}


void Joueur::move(float x, float y) {
	mouette->move(x, y);
}



void Joueur::destroy() {
	if (rope  != NULL && mouette != NULL) {
		rope->destroy();
		mouette->destroy();
	}
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

int Joueur::getForceMouette(){
	b2MassData *data = new b2MassData();
	mouette->getBody()->body->GetMassData(data);
	return (int) data->mass;
}

int Joueur::getTailleCorde(){
	return rope->getLongueur();
}

int Joueur::getTailleBoulet(){
	return rope->getTailleBoulet();
}

void Joueur::setForceMouette(int v){
	mouette->getBody()->setDensity((float)v);
}
void Joueur::setTailleCorde(int v){
	rope->grow(v-rope->getLongueur());
}
void Joueur::setTailleBoulet(int v){
	rope->setTailleBoulet((float)v);
}