/*!
* \file EcranJeu.h
* \brief Gestion de l'ecran de jeu et de l'interaction avec le joueur
* \author Quentin GROS, Claire REMY
*/

#include "Gestion_Jeu\Header\EcranJeu.h"
#define VITESSE 5
#define V_DIAG 5


EcranJeu::EcranJeu() : PageJeu()
{
	jeu = ofPtr<Jeu>(new Jeu());
	fenetre = new Fenetre();
	player = ofPtr<Joueur>(new Joueur(GestionnairePage::box2d));
	jeu->initJeu();
}


EcranJeu::~EcranJeu()
{
	delete(fenetre);
}

//--------------------------------------------------------------
void EcranJeu::update() {
	if (jeu->over()){
		GestionnairePage::DepilerPage();
		GestionnairePage::EmpilerPage(new Page_highscore(jeu.get()));
		for (int i = 0; i < EMPLACEMENT_CHATEAU; i++){
			if (jeu->tabCastle[i] != NULL){
				jeu->tabCastle[i]->destroy();
			}
		}
		if (player != NULL){
			player->destroy();
		}
	}
	
	if (jeu->maybeNewYear()){
		player->setPoints(player->getPoints() + 10);
		GestionnairePage::EmpilerPage(new Menu_ameliorations(player.get()));
	}

	if (player != NULL){
		if (keyIsDown[UP] && keyIsDown[LEFT]) {
			player->move(-V_DIAG, -V_DIAG);
		}
		if (keyIsDown[UP] && keyIsDown[RIGHT]) {
			player->move(+V_DIAG, -V_DIAG);
		}
		if (keyIsDown[DOWN] && keyIsDown[LEFT]) {
			player->move(-V_DIAG, +V_DIAG);
		}
		if (keyIsDown[DOWN] && keyIsDown[RIGHT]) {
			player->move(+V_DIAG, +V_DIAG);
		}
	}

	jeu->setScore(jeu->getScore()+1);

	GestionnairePage::box2d.update();
}


//--------------------------------------------------------------
void EcranJeu::draw() {

	string info = "";
	ofSetColor(255, 255, 255);	//Image claire
	this->fenetre->aff_fenetre(BACKGROUND);
	jeu->drawChateau();
	if (player) {
		player->draw();
	}

	GestionnairePage::box2d.drawGround();


	info += "Detruis les chateaux en utilisant les fleches directionelles pour deplacer la mouette\n";
	info += "SCORE : " + ofToString(jeu->getScore()) + "\n";
	ofSetHexColor(0x444342);
	ofDrawBitmapString(info, 30, 30);

}
//--------------------------------------------------------------
void EcranJeu::keyPressed(int key) {
	if (key >= 356 && key <= 359) {
		keyIsDown[key - 356] = true;
	}
	switch (key) {
	case OF_KEY_DOWN:
		player->move(0, VITESSE);
		break;
	case OF_KEY_UP:
		player->move(0, -VITESSE);
		break;
	case OF_KEY_LEFT:
		player->move(-VITESSE, 0);
		break;
	case OF_KEY_RIGHT:
		player->move(+VITESSE, 0);
		break;
	case 27 :	//'escape'
			GestionnairePage::EmpilerPage(new Menu_pause());		
		break;
	}
}
//--------------------------------------------------------------
void EcranJeu::keyReleased(int key) {
	if (key >= 356 && key <= 359) {
		keyIsDown[key - 356] = false;
	}
}
//--------------------------------------------------------------
void EcranJeu::mouseMoved(int x, int y) {
}
//--------------------------------------------------------------
void EcranJeu::mouseDragged(int x, int y, int button) {
}
//--------------------------------------------------------------
void EcranJeu::mousePressed(int x, int y, int button) {
}
//--------------------------------------------------------------
void EcranJeu::mouseReleased(int x, int y, int button) {
}
//--------------------------------------------------------------
void EcranJeu::resized(int w, int h){
}
