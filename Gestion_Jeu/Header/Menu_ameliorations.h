#pragma once
#include "PageJeu.h"
#include "EcranJeu.h"
#include "GestionnairePage.h"

class Menu_ameliorations : public PageJeu
{
private:
	enum Surligner{
		CORDE_PLUS,
		CORDE_MOINS,
		BOULET_PLUS,
		BOULET_MOINS,
		MOUETTE_PLUS,
		MOUETTE_MOINS,
		CONFIRMER,
		AMELIORATION_AUCUN
	};
	Fenetre *fenetre;
	Surligner select;
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

