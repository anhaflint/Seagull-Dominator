#pragma once
#include "PageJeu.h"
#include "EcranJeu.h"
#include "GestionnairePage.h"
#include "Util/header/functions.h"

class Menu_ameliorations : public PageJeu
{
private:
	
	Fenetre *fenetre;
	IMG select;
	ofTrueTypeFont fontBoulet;
	ofTrueTypeFont fontMouette;
	ofTrueTypeFont fontCorde;

	Joueur *joueur;
	int compteurBoulet;
	int compteurCorde;
	int compteurMouette;

public:
	Menu_ameliorations(Joueur* joueur);
	~Menu_ameliorations();

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

