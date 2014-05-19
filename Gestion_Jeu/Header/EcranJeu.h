#pragma once
#include "PageJeu.h"
#include "Module_Chateau\Header\Castle.h"
#include "GestionnairePage.h"
#include "Module_Joueur/header/Joueur.h"

class EcranJeu : public PageJeu
{
private:
	ofPtr<Mouette> mouette;	//A suppr
	bool keyIsDown[4];
	bool init=true;
	Fenetre *fenetre;
	ofPtr<Castle> tabCastle[3];
	ofPtr<Joueur> player;
	//vector    <ofPtr<ofxBox2dCircle> >	circles;		//	default box2d circles
	//vector	  <ofPtr<ofxBox2dRect> >	boxes;			  //	default box2d rects
public:
	EcranJeu();
	~EcranJeu();
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

enum _key{
	LEFT,
	UP,
	RIGHT,
	DOWN,
};