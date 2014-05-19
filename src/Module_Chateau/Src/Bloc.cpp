#include "Module_Chateau\Header\Bloc.h"


Bloc::Bloc(int length, int height, ofxBox2d& box2d, int mouseX, int mouseY) {
	this->height = height;
	this->length = length;
	ofVec2f pos(mouseX, mouseY);
	for (int hauteur = 0; hauteur < height; hauteur++){
		for (int longueur = 0; longueur < length; longueur++){
			grains.push_back(ofPtr<Grains>(new Grains(pos)));
			grains.back().get()->setPhysics(1, 0, 1);
			grains.back().get()->setup(box2d.getWorld(), mouseX + longueur*Grains::size, mouseY - hauteur*Grains::size, Grains::size, Grains::size);
		}
	}
}

void Bloc::draw(ofImage img) {
	for (int i = 0; i < grains.size(); i++) {
		ofNoFill();
		ofSetHexColor(0xEFD807); //ofSetColor(255, 255, 255); pour la vrai image
		//grains[i].get()->Grains::draw();
		img.draw(grains[i].get()->getPosition().x-7, grains[i].get()->getPosition().y-7,14,14);
	}
}


Bloc::~Bloc() {
}