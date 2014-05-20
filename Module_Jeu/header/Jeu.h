#pragma once

#include "../example-Simple/src/Module_Chateau/Header/Castle.h"
#include"Year.h"

class Jeu
{
private:
	bool over; // true si le jeu est fini
	int score;
	int point;
	//get display current time OF
	vector<ofPtr<Year>> years;
	
public:
	inline int getYearNumber() { return years.size(); }
	Jeu();
	~Jeu();
	void Game();

};

