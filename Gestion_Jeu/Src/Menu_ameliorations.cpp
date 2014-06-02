/*!
* \file Menu_ameliorations.h
* \brief Classe permettant de gerer l'amelioration des attributs du joueur
* \author Thibault HUCKERT, Quentin GROS (édition)
*/

#include "Gestion_Jeu\Header\Menu_ameliorations.h"



Menu_ameliorations::Menu_ameliorations(Joueur* joueur) : joueur(joueur)
{
	select = AMELIORATION_AUCUN;
	fenetre = new Fenetre();
	
	fontBoulet.loadFont(getAbsolutePath("BebasNeue.otf"), 40);
	fontMouette.loadFont(getAbsolutePath("BebasNeue.otf"), 40);
	fontCorde.loadFont(getAbsolutePath("BebasNeue.otf"), 40);
	
	compteurBoulet = joueur->getTailleBoulet();
	compteurCorde = joueur->getTailleCorde();
	compteurMouette = joueur->getForceMouette();
}


Menu_ameliorations::~Menu_ameliorations()
{
}

//--------------------------------------------------------------
void Menu_ameliorations::update() {
	GestionnairePage::box2d.update();
}


//--------------------------------------------------------------
void Menu_ameliorations::draw() {
	ofSetColor(255, 255, 255);	//Image claire
	this->fenetre->aff_fenetre((IMG)select);

	string infoBoulet = to_string(compteurBoulet);
	string infoMouette = to_string(compteurMouette);
	string infoCorde = to_string(compteurCorde);
	
	fontBoulet.drawString(infoBoulet, 1043+80, 221+45);
	fontMouette.drawString(infoMouette, 1043+80, 366+45);
	fontCorde.drawString(infoCorde, 1042+80, 90+45);
	

}

//--------------------------------------------------------------
void Menu_ameliorations::keyPressed(int key) {
}

//--------------------------------------------------------------
void Menu_ameliorations::keyReleased(int key) {
}

//--------------------------------------------------------------
void Menu_ameliorations::mouseMoved(int x, int y) {
	printf("x : %d ", x);
	printf("y : %d\n", y);
	if (y<(91 + 50) && y>91 && x > 242 && x<(242 + 50)){
		select = CORDE_MOINS;
	}
	else if (y<(90 + 50) && y>90 && x>1043 && x<(1043 + 50)){
		select = CORDE_PLUS;
	}
	else if (y<(231 + 50) && y>231 && x>239 && x<(239 + 50)){
		select = BOULET_MOINS;
	}
	else if (y<(221 + 50) && y>221 && x>1043 && x<(1043 + 50)){
		select = BOULET_PLUS;
	}
	else if (y<(366 + 50) && y>366 && x>242 && x<(242 + 50)){
		select = MOUETTE_MOINS;
	}
	else if (y<(366 + 50) && y>366 && x>1042 && x<(1042 + 50)){
		select = MOUETTE_PLUS;
	}
	else if (y<(611 + 50) && y>611 && x>549 && x < (549 + 200)){
		select = CONFIRMER;
	}
	else{
	select = AMELIORATION_AUCUN;	//Neutre
	}
}

//--------------------------------------------------------------
void Menu_ameliorations::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_ameliorations::mousePressed(int x, int y, int button) {

	if (select == CORDE_PLUS && button == OF_MOUSE_BUTTON_LEFT){
		compteurCorde++;
	}
	else if (select == CORDE_MOINS && button == OF_MOUSE_BUTTON_LEFT){
		compteurCorde--;
	}
	else if (select == BOULET_PLUS && button == OF_MOUSE_BUTTON_LEFT){
		compteurBoulet++;
	}
	else if (select == BOULET_MOINS && button == OF_MOUSE_BUTTON_LEFT){
		compteurBoulet--;
	}
	else if (select == MOUETTE_PLUS && button == OF_MOUSE_BUTTON_LEFT){
		compteurMouette++;
	}
	else if (select == MOUETTE_MOINS && button == OF_MOUSE_BUTTON_LEFT){
		compteurMouette--;
	}
	else if (select == CONFIRMER && button == OF_MOUSE_BUTTON_LEFT){
		joueur->setForceMouette(compteurMouette);
		joueur->setTailleBoulet(compteurBoulet);
		joueur->setTailleCorde(compteurCorde);
		GestionnairePage::DepilerPage();
	}
}

//--------------------------------------------------------------
void Menu_ameliorations::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_ameliorations::resized(int w, int h){
}
