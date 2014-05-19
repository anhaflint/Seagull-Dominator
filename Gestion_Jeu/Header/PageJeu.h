#pragma once

#include "Util\Header\Fenetre.h"

class PageJeu{

public:

	virtual void update(){ printf("bouh\n"); };
	virtual void draw(){};

	virtual void keyPressed(int key){};
	virtual void keyReleased(int key){};
	virtual void mouseMoved(int x, int y){};
	virtual void mouseDragged(int x, int y, int button){};
	virtual void mousePressed(int x, int y, int button){};
	virtual void mouseReleased(int x, int y, int button){};
	virtual void resized(int w, int h){};
};

