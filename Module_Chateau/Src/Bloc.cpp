#include "Module_Chateau\Header\Bloc.h"


Bloc::Bloc(int key, ofxBox2d& box2d, int mouseX, int mouseY) {
	if (key == 'j') {
		for (int hauteur = 0; hauteur < 5; hauteur++){
			for (int longueur = 0; longueur < 10; longueur++){
				grains.push_back(ofPtr<Grains>(new Grains));
				grains.back().get()->setPhysics(10.0, 0, 1);
				grains.back().get()->setup(box2d.getWorld(), mouseX + longueur * 10, mouseY - hauteur * 10, 10, 10);
			}
		}
	}

	if (key == 'g') {
		for (int hauteur = 0; hauteur < 10; hauteur++){
			for (int longueur = 0; longueur < 30; longueur++){
				grains.push_back(ofPtr<Grains>(new Grains));
				grains.back().get()->setPhysics(10.0, 0, 1);
				grains.back().get()->setup(box2d.getWorld(), mouseX + longueur * 10, mouseY - hauteur * 10, 10, 10);
			}
		}
	}


	if (key == 'h') {
		for (int hauteur = 0; hauteur < 7; hauteur++){
			for (int longueur = 0; longueur < 15; longueur++){
				grains.push_back(ofPtr<Grains>(new Grains));
				grains.back().get()->setPhysics(10.0, 0, 1);
				grains.back().get()->setup(box2d.getWorld(), mouseX + longueur * 10, mouseY - hauteur * 10, 10, 10);
			}
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