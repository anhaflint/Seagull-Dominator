#include "Module_Joueur/header/Joueur.h"


/*!
 * \file Joueur.cpp 
 * \brief Classe permettant de gerer le joueur et de le creer
 * \author Claire REMY, Thibault HUCKERT (getter et setter), Quentin GROS (relecture)
 */
Joueur::Joueur(ofxBox2d& box2d) {
	mouette = ofPtr<Mouette>(new Mouette());
	mouette->getBody()->body->SetGravityScale(-0.1f);
	b2Vec2* vecBegin = new b2Vec2(mouette->getPositionX() + mouette->radius, mouette->getPositionY());
	rope = ofPtr<Rope>(new Rope(vecBegin, 30));
	rope->joinBegin(mouette->getBody()->body);

	points = 0;
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
	return (int)mouette->getBody()->density;
}

int Joueur::getTailleCorde(){
	return rope->getLongueur();
}

int Joueur::getTailleBoulet(){
	return rope->getTailleBoulet();
}

void Joueur::setForceMouette(int v){
	mouette->getBody()->setDensity(120.0f - (float)v);
}
void Joueur::setTailleCorde(int v){
	rope->grow(v-rope->getLongueur());
}
void Joueur::setTailleBoulet(int v){
	rope->setTailleBoulet((float)v);
}

int Joueur::getPoints(){
	return this->points;
}

void Joueur::setPoints(int points){
	this->points = points;
}