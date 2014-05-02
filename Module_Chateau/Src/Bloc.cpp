#include "Module_Chateau\Header\Bloc.h"


Bloc::Bloc(int length, int height, ofxBox2d& box2d, int mouseX, int mouseY) {
	this->height = height;
	this->length = length;
	ofVec2f pos(mouseX, mouseY);
	for (int hauteur = 0; hauteur < height; hauteur++){
		for (int longueur = 0; longueur < length; longueur++){
			grains.push_back(ofPtr<Grains>(new Grains(pos)));
			grains.back().get()->setPhysics(10.0, 0, 1);
			grains.back().get()->setup(box2d.getWorld(), mouseX + longueur*Grains::size, mouseY - hauteur*Grains::size, Grains::size, Grains::size);
		}
	}
}

void Bloc::draw() {
	for (int i = 0; i < grains.size(); i++) {
		ofFill();
		ofSetHexColor(0xBF2545);
		grains[i].get()->Grains::draw();
	}
}


Bloc::~Bloc() {
}