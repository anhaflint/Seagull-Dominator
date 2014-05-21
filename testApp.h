#pragma once
#include "ofMain.h"
#include "ofxBox2d.h"
#include <stdio.h>
#include <time.h>
#include "Gestion_Jeu\Header\PageJeu.h"
#include "Gestion_Jeu\Header\Menu_Principale.h"
#include "Util\Header\Fenetre.h"
#include "Gestion_Jeu\Header\GestionnairePage.h"

// -------------------------------------------------

class testApp : public ofBaseApp {
	
public:
	
	void setup();
	void update();
	void draw();

	
	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void resized(int w, int h);

	
	Affichage *affichage;
	Fenetre *fenetre;

private:
	Menu_Principale *menu_principale;
};

