#include "../Header/Grains.h"

Grains::Grains(int d, int t, Position *p)
: densite(d), taille(t), ObjetPhysique(p){
	circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
	circles.back().get()->setPhysics(densite, 0.1, taille);
	circles.back().get()->setup(box2d.getWorld(), pos.getX(), pos.getY(), 1);
}
