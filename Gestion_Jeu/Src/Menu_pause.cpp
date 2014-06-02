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
	//GestionnairePage::box2d.update();
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
	/*
		if (x<800 && x>500 && y > 460 && y<525)
			select = JOUER;	//Jouer surligné
		else if (x<800 && x>500 && y>525 && y<590)
			select = HIGH_SCORE;
		else if (x<800 && x>500 && y>590 && y < 660)
			select = QUITTER;
		else
			select = AUCUN;	//Neutre
	*/
}

//--------------------------------------------------------------
void Menu_pause::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_pause::mousePressed(int x, int y, int button) {
	/*if (intro_fini)
	{
		if (x<800 && x>500 && y > 460 && y<525 && button == OF_MOUSE_BUTTON_LEFT){
			GestionnairePage::EmpilerPage(new EcranJeu());			//Empiler un jeu
			ofResetElapsedTimeCounter();
		}
		//else if (x<800 && x>500 && y>525 && y<590 && button == OF_MOUSE_BUTTON_LEFT)
		//Empiler un high_score
		else if (x<800 && x>500 && y>590 && y < 660 && button == OF_MOUSE_BUTTON_LEFT)
			std::exit(0);
	}*/
}
//--------------------------------------------------------------
void Menu_pause::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_pause::resized(int w, int h){
}

