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
	//GestionnairePage::box2d.update();
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
	if ((key == OF_KEY_DOWN && select == AMELIORATION_AUCUN) || (key == OF_KEY_UP && select == BOULET_MOINS) || (key == OF_KEY_LEFT && select == CORDE_PLUS)){
		select = CORDE_MOINS;
	}
	else if ((key == OF_KEY_RIGHT && select == CORDE_MOINS) || (key == OF_KEY_UP && select == BOULET_PLUS)){
		select = CORDE_PLUS;
	}
	else if ((key == OF_KEY_DOWN && select == CORDE_MOINS) || (key == OF_KEY_LEFT && select == BOULET_PLUS) || (key == OF_KEY_UP && select == MOUETTE_MOINS)){
		select = BOULET_MOINS;
	}
	else if ((key == OF_KEY_DOWN && select == CORDE_PLUS) || (key == OF_KEY_RIGHT && select == BOULET_MOINS) || (key == OF_KEY_UP && select == MOUETTE_PLUS)){
		select = BOULET_PLUS;
	}
	else if ((key == OF_KEY_DOWN && select == BOULET_MOINS) || (key == OF_KEY_LEFT && select == MOUETTE_PLUS)){
		select = MOUETTE_MOINS;
	}
	else if ((key == OF_KEY_DOWN && select == BOULET_PLUS) || (key == OF_KEY_RIGHT && select == MOUETTE_MOINS) || (key == OF_KEY_UP && select == CONFIRMER)) {
		select = MOUETTE_PLUS;
	}
	else if (key == OF_KEY_DOWN && (select == MOUETTE_MOINS ||select == MOUETTE_PLUS)){
		select = CONFIRMER;
	}

	if (select == CORDE_PLUS && key == ' '){
		compteurCorde++;
	}
	else if (select == CORDE_MOINS && key == ' '){
		compteurCorde--;
	}
	else if (select == BOULET_PLUS && key == ' '){
		compteurBoulet++;
	}
	else if (select == BOULET_MOINS && key == ' '){
		compteurBoulet--;
	}
	else if (select == MOUETTE_PLUS && key == ' '){
		compteurMouette++;
	}
	else if (select == MOUETTE_MOINS && key == ' '){
		compteurMouette--;
	}
	else if (select == CONFIRMER && key == ' '){
		joueur->setForceMouette(compteurMouette);
		joueur->setTailleBoulet(compteurBoulet);
		joueur->setTailleCorde(compteurCorde);
		GestionnairePage::DepilerPage();
	}
}

//--------------------------------------------------------------
void Menu_ameliorations::keyReleased(int key) {
}

//--------------------------------------------------------------
void Menu_ameliorations::mouseMoved(int x, int y) {

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
