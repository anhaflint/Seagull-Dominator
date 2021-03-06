#include "Module_Chateau\Header\Bloc.h"

/*!
 * \file Bloc.cpp
 * \brief Classe Bloc
 * \author Claire REMY
 */
Bloc::Bloc(int length, int height, int mouseX, int mouseY) {
	affichage = Affichage::Instance();
	this->height = height;
	this->length = length;
	ofVec2f pos(mouseX, mouseY);
	for (int hauteur = 0; hauteur < height; hauteur++){
		for (int longueur = 0; longueur < length; longueur++){
			grains.push_back(ofPtr<Grains>(new Grains(pos)));
			grains.back().get()->setPhysics(10, 0, 1);
			grains.back().get()->setup(GestionnairePage::box2d.getWorld(), mouseX + longueur*Grains::size, mouseY - hauteur*Grains::size, Grains::size, Grains::size);
		}
	}
}

void Bloc::draw() {
	for (int i = 0; i < grains.size(); i++) {
		ofNoFill();
		ofSetHexColor(0xEFD807);
		this->affichage->aff_img(TEXTURE_GRAINS, (int)grains[i].get()->getPosition().x - 10, (int)grains[i].get()->getPosition().y - 10, 10, 10);
	}
}

void Bloc::destroy() {
	for (ofPtr<Grains> g : grains) {
		if (g != NULL)	
			g->destroy();
	}
}

Bloc::~Bloc() {
}