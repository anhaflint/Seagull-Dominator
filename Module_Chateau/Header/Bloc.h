#ifndef _BLOC_H
#define _BLOC_H

#include "ofxBox2d.h"
#include "ofMain.h"
#include "Module_Chateau\Header\Grains.h"
#include "Module_Chateau\Header\ObjetPhysique.h"
#include "Util\Header\Affichage.h"
#include "Gestion_Jeu\Header\GestionnairePage.h"

class Bloc : public ObjetPhysique {
protected : 
	int length; 
	int height;
	int nbGrains;
	Affichage *affichage;
	vector <ofPtr<Grains>> grains;

public : 
	Bloc(int length, int height, int mouseX, int mouseY);
	inline int getNbGrains(){ return length*height; }
	virtual void draw();
	inline int getLength() { return this->length; }
	inline int getHeight() { return this->height; }
	~Bloc();
};


#endif