#include "Gestion_Jeu/header/Jeu.h"


Jeu::Jeu() :score(0), point(0), years(0), over(false) {

}

void Jeu::Game() {
	while (!over)
	{
		years.push_back(ofPtr<Year>(new Year()));
	}
}

Jeu::~Jeu() {

}

void Jeu::initJeu(){
	
/*----------------------------------------------Initialisation du temps de jeu------------------------------------------------------*/

	time = ofGetElapsedTimef();

/*----------------------------------------------Initialisation du score-------------------------------------------------------------*/

	score = 0;

/*----------------------------------------------Creation de quelques chateaux initaux au jeu----------------------------------------*/
	int rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
	
	for (int i = 0; i < 2; i++){
		while (tabCastle[rand] != NULL){
			rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
		}
		tabCastle[rand] = ofPtr<Castle>(new Castle(rand * 320, 720));
	}
}

void Jeu::drawChateau(){
	for (int i = 0; i < EMPLACEMENT_CHATEAU - 1; i++){
		if (tabCastle[i] != NULL)
			tabCastle[i]->draw();
	}

}