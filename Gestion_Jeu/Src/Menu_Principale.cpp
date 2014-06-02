/*!
* \file Menu_Principale.h
* \brief Classe de gestion du menu principal
* \author Quentin GROS, Mounia HAMEDI (relecture)
*/

#include "Gestion_Jeu\Header\Menu_Principale.h"


Menu_Principale::Menu_Principale()
{
	select = AUCUN;
	fenetre = new Fenetre();
//	ecranjeu = new EcranJeu();
}


Menu_Principale::~Menu_Principale()
{
	delete ecranjeu;
}


//--------------------------------------------------------------
void Menu_Principale::update() {
	GestionnairePage::box2d.update();
}


//--------------------------------------------------------------
void Menu_Principale::draw() {
	if (intro_fini)
	{
		ofSetColor(255, 255, 255);	//Image claire
		this->fenetre->aff_fenetre((IMG)select);
	}
	else
	{
		ofSetColor(255, 255, 255);	//Image claire
		this->fenetre->aff_fenetre((IMG)intro);
		if (intro < INTRO_0188)
			intro++;
		else
			intro_fini = true;
		ofSleepMillis(25);
	}	
}

//--------------------------------------------------------------
void Menu_Principale::keyPressed(int key) {
	if (intro_fini)
	{
		if (key == OF_KEY_DOWN && select == AUCUN) {
			select = JOUER;		//Jouer surligné
		}

		else if (key == OF_KEY_DOWN && select == QUITTER) {
			select = JOUER;		//Jouer surligné
		}

		else if (key == OF_KEY_UP && select == JOUER) {
			select = QUITTER;		//Jouer surligné
		}

		else if (key == OF_KEY_DOWN && select == JOUER){
			select = HIGH_SCORE;
		}

		else if (key == OF_KEY_DOWN && select == HIGH_SCORE){
			select = QUITTER;
		}

		else if (key == OF_KEY_UP && select == AUCUN){
			select = QUITTER;
		}

		else if (key == OF_KEY_UP && select == HIGH_SCORE){
			select = JOUER;
		}

		else if (key == OF_KEY_UP && select == QUITTER){
			select = HIGH_SCORE;
		}



		if (key == ' ' && select == JOUER){
			GestionnairePage::EmpilerPage(ecranjeu = new EcranJeu());
		}

		else if (key == ' ' && select == QUITTER){
			std::exit(0);
		}

		else if (key == ' ' && select == HIGH_SCORE){
			//GestionnairePage::EmpilerPage(new EcranScore());
		}
	}
}

//--------------------------------------------------------------
void Menu_Principale::keyReleased(int key) {
}

//--------------------------------------------------------------
void Menu_Principale::mouseMoved(int x, int y) {
	if (intro_fini)
	{
		if (x<800 && x>500 && y > 460 && y<525)
			select = JOUER;	//Jouer surligné
		else if (x<800 && x>500 && y>525 && y<590)
			select = HIGH_SCORE;
		else if (x<800 && x>500 && y>590 && y < 660)
			select = QUITTER;
		else
			select = AUCUN;	//Neutre
	}
}

//--------------------------------------------------------------
void Menu_Principale::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_Principale::mousePressed(int x, int y, int button) {
	if (intro_fini)
	{
		if (x<800 && x>500 && y > 460 && y<525 && button == OF_MOUSE_BUTTON_LEFT){
			GestionnairePage::EmpilerPage(new EcranJeu());			//Empiler un jeu
		}
		//else if (x<800 && x>500 && y>525 && y<590 && button == OF_MOUSE_BUTTON_LEFT)
		//Empiler un high_score
		else if (x<800 && x>500 && y>590 && y < 660 && button == OF_MOUSE_BUTTON_LEFT)
			std::exit(0);
	}
}
//--------------------------------------------------------------
void Menu_Principale::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_Principale::resized(int w, int h){
}

