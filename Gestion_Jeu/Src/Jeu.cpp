#include "Gestion_Jeu/header/Jeu.h"


Jeu::Jeu() :score(0), point(0), season(SPRING),year(0) {
	printf("sfs");
	for (int i = 0; i < EMPLACEMENT_CHATEAU; i++){
		DownPos[i] = ofPtr<b2Vec2>(new b2Vec2(i * 160, 720));
		printf("nttf\n");
	}
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
		tabCastle[rand] = ofPtr<Castle>(new Castle(18+rand * 160, 720));
	}
}

void Jeu::drawChateau(){
	for (int i = 0; i < EMPLACEMENT_CHATEAU; i++){
		printf("bouya");
		b2Vec2 lower(min(DownPos[i]->x, UpPos[i]->x), min(DownPos[i]->y, UpPos[i]->y));
		b2Vec2 upper(max(DownPos[i]->x, UpPos[i]->x), max(DownPos[i]->y, UpPos[i]->y));
		if (tabCastle[i] != NULL)
			tabCastle[i]->draw();
		printf("fgylvbhj\n");
		lower.x = 0+i*160;
		lower.y = 720;
		upper.x = 100+i*160;
		upper.y = 620;
		printf("fvkh\n");
		glColor3f(1, 1, 1);//white
		glBegin(GL_LINE_LOOP);
		glVertex2f(lower.x, lower.y);
		glVertex2f(upper.x, lower.y);
		glVertex2f(upper.x, upper.y);
		glVertex2f(lower.x, upper.y);
		glEnd();

		if (currentCallBack != NULL){
			prevCallBack = currentCallBack;
		}

		ScoreCounter* current;
		b2AABB aabb;
		aabb.lowerBound = lower;
		aabb.upperBound = upper;
		GestionnairePage::box2d.getWorld()->QueryAABB(current, aabb);

		currentCallBack = current;

		if (currentCallBack->getSize() < prevCallBack->getSize()){
			score += prevCallBack->getSize() - currentCallBack->getSize();
			std::cout << "Score : " << score << std::endl;
		}
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
			tabCastle[rand] = ofPtr<Castle>(new Castle(18+rand * 160, 720));
		}
	}
}

int Jeu::getCastleApparitionTime(){
	return (10 - year - season*0.5);
}
