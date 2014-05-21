#pragma once

#include "../example-Simple/src/Module_Chateau/Header/Castle.h"

#define EMPLACEMENT_CHATEAU 8

class Jeu
{
private:
	int season;
	
	float time;
	int score;
	int point;
	int year;
	
public:
	int getCastleApparitionTime();
	void maybeNewChateau();
	void drawChateau();
	void initJeu();
	inline int getYearNumber() { return year; }
	Jeu();
	~Jeu();
	ofPtr<Castle> tabCastle[EMPLACEMENT_CHATEAU];
	bool over();
};

enum seasons{
	SPRING,
	SUMMER,
	FALL,
	WINTER
};