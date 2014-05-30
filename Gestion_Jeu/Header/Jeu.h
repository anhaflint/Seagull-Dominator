#pragma once

#include "../example-Simple/src/Module_Chateau/Header/Castle.h"
#include "ScoreCounter.h"

#define EMPLACEMENT_CHATEAU 8

class Jeu
{
private:
	int season;
	
	float time;
	int score;
	int point;
	int year;
	ofPtr<b2Vec2> DownPos[EMPLACEMENT_CHATEAU], UpPos[EMPLACEMENT_CHATEAU];

	ScoreCounter* prevCallBack;
	ScoreCounter* currentCallBack;

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