#pragma once
#include "PageJeu.h"
#include "Util/header/functions.h"
#include "GestionnairePage.h"
#include "Util/Header/Affichage.h"
#include "EcranJeu.h"

class Menu_pause : public PageJeu
{
private:
	Affichage *affichage;
	IMG select;
public:
	Menu_pause();
	~Menu_pause();

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
