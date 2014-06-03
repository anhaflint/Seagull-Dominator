/*!
* \file Jeu.h
* \brief Gestion du jeu
* \author Quentin GROS, Claire REMY (ajouts), Thibault HUCKERT (ajouts)
*/

#include "Gestion_Jeu/header/Jeu.h"


Jeu::Jeu() :score(0), point(0), season(SUMMER), year(0) {
	for (int i = 0; i < EMPLACEMENT_CHATEAU; i++){
		DownPos[i] = ofPtr<b2Vec2>(new b2Vec2(i * 160, 720));
	}
}

bool Jeu::over() {
	bool Over = true;
	int emplacement_vide = 0;
	for (int i = 0; i < EMPLACEMENT_CHATEAU && Over == true; i++){
		if (tabCastle[i] == NULL){
			emplacement_vide++;
			if (emplacement_vide > 2){	//Divise par 2 EMPLACEMENT_CHATEAU 
				Over = false;
			}
		}
	}
	return Over;
}

Jeu::~Jeu() {

}

void Jeu::initJeu(){
	//Initialisation du temps de jeu
	time = 0;

	//Initialisation du score
	score = 0;

	//Creation de quelques chateaux initaux au jeu
	int rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);

	for (int i = 0; i < 2; i++){
		while (tabCastle[rand] != NULL){
			rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
		}
		tabCastle[rand] = ofPtr<Castle>(new Castle(18 + rand * 160, 720));
	}
}

void Jeu::drawChateau(){
	for (int i = 0; i < EMPLACEMENT_CHATEAU; i++){
		b2Vec2 lower(min(DownPos[i]->x, UpPos[i]->x), min(DownPos[i]->y, UpPos[i]->y));
		b2Vec2 upper(max(DownPos[i]->x, UpPos[i]->x), max(DownPos[i]->y, UpPos[i]->y));
		if (tabCastle[i] != NULL)
			tabCastle[i]->draw();
	}


}

bool Jeu::maybeNewYear(){
	time++;
	if (time == 500)
	{
		time = 0;
		NewChateaux();
		if (season == WINTER)
		{
			season = SUMMER;
			year++;
			return true;
		}
		season++;
	}
	return false;
}

void Jeu::NewChateaux(){
	int rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
	for (int i = 0; i < 1; i++){
		while (tabCastle[rand] != NULL){
			rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
		}
		tabCastle[rand] = ofPtr<Castle>(new Castle(18 + rand * 160, 720));
	}
}

int Jeu::getScore(){
	return this->score;
}

void Jeu::setScore(int score){
	this->score = score;
}



