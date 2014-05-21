#pragma once

#include "../example-Simple/src/Module_Chateau/Header/Castle.h"
#include"Year.h"


#define EMPLACEMENT_CHATEAU 4

class Jeu
{
private:
	ofPtr<Castle> tabCastle[3];
	float time;
	bool over; // true si le jeu est fini
	int score;
	int point;
	//get display current time OF
	vector<ofPtr<Year>> years;
	
public:
	void drawChateau();
	void initJeu();
	inline int getYearNumber() { return years.size(); }
	Jeu();
	~Jeu();
	void Game();
};

