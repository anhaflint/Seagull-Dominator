#include "Gestion_Jeu\Header\Menu_pause.h"


Menu_pause::Menu_pause()
{
	select = PAUSE_NEUTRE;
	affichage = Affichage::Instance();
}


Menu_pause::~Menu_pause()
{
}


//--------------------------------------------------------------
void Menu_pause::update() {
}


//--------------------------------------------------------------
void Menu_pause::draw() {

	ofSetColor(255, 255, 255);	//Image claire
	this->affichage->aff_img(BACKGROUND, 0, 0, 1280, 720);
	this->affichage->aff_img((IMG)select, 320, 180, 640, 360);	
}

//--------------------------------------------------------------
void Menu_pause::keyPressed(int key) {

	if (key == OF_KEY_DOWN && select == PAUSE_NEUTRE) {
		select = PAUSE_REPRENDRE;		//Jouer surligné
	}
		else if ((key == OF_KEY_DOWN || key == OF_KEY_UP ) && select == PAUSE_REPRENDRE) {
		select = PAUSE_QUITTER;		//Jouer surligné
	}
		else if ((key == OF_KEY_UP || key == OF_KEY_DOWN ) && select == PAUSE_QUITTER) {
		select = PAUSE_REPRENDRE;		//Jouer surligné
	}

		if ((key == ' ' && select == PAUSE_REPRENDRE)||(key==27)){
			GestionnairePage::DepilerPage();
	}
		else if (key == ' ' && select == PAUSE_QUITTER){
			GestionnairePage::DepilerPage();
			GestionnairePage::DepilerPage();
			std::exit(0);
	}
}

//--------------------------------------------------------------
void Menu_pause::keyReleased(int key) {
}

//--------------------------------------------------------------
void Menu_pause::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void Menu_pause::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_pause::mousePressed(int x, int y, int button) {
}
//--------------------------------------------------------------
void Menu_pause::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_pause::resized(int w, int h){
}

