#include "Gestion_Jeu/header/Jeu.h"


Jeu::Jeu() :score(0), point(0), season(SPRING),year(0) {
	
}

bool Jeu::over() {
	bool Over = true;
	int emplacement_vide = 0;
	for (int i = 0; i < EMPLACEMENT_CHATEAU && Over==true; i++){
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
		tabCastle[rand] = ofPtr<Castle>(new Castle(rand * 160, 720));
	}
}

void Jeu::drawChateau(){
	for (int i = 0; i < EMPLACEMENT_CHATEAU - 1; i++){
		if (tabCastle[i] != NULL)
			tabCastle[i]->draw();
	}

}

void Jeu::maybeNewChateau(){



	if (ofGetElapsedTimef() - time > getCastleApparitionTime()){
		time += 10;

		int rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
		for (int i = 0; i < 2; i++){
			while (tabCastle[rand] != NULL){
				rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
			}
			tabCastle[rand] = ofPtr<Castle>(new Castle(rand * 160, 720));
		}
	}
}

int Jeu::getCastleApparitionTime(){
	return (10 - year - season*0.5);
}