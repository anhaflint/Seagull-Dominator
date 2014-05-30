#pragma once
#include "PageJeu.h"
#include "EcranJeu.h"
#include "GestionnairePage.h"
#include "Util/Header/functions.h"

class Menu_Principale :	public PageJeu{

private:
	int intro=INTRO_0000;
	bool intro_fini=false;
	EcranJeu *ecranjeu;
	bool init = true;
	ofVideoPlayer myPlayer;
	enum Surligner{
		AUCUN,
		JOUER,
		HIGH_SCORE,
		QUITTER
	};
	Fenetre *fenetre;
	Surligner select;
public:
	Menu_Principale();
	~Menu_Principale();
	virtual void update();
	virtual void draw();

	virtual void keyPressed(int key);
	virtual void keyReleased(int key);
	virtual void mouseMoved(int x, int y);
	virtual void mouseDragged(int x, int y, int button);
	virtual void mousePressed(int x, int y, int button);
	virtual void mouseReleased(int x, int y, int button);
	virtual void resized(int w, int h);
};

