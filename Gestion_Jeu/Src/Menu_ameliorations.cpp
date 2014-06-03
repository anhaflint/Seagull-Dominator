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
	fontPoints.loadFont(getAbsolutePath("BebasNeue.otf"), 40);

	compteurBoulet = joueur->getTailleBoulet();
	compteurCorde = joueur->getTailleCorde();
	compteurMouette = joueur->getForceMouette();
	compteurPoints = joueur->getPoints();

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
	string infoPoints = "Points a depenser : ";
	infoPoints.append(to_string(compteurPoints));


	fontBoulet.drawString(infoBoulet, 1043 + 80, 221 + 45);
	fontMouette.drawString(infoMouette, 1043 + 80, 366 + 45);
	fontCorde.drawString(infoCorde, 1042 + 80, 90 + 45);
	fontPoints.drawString(infoPoints, (1280 / 2)-200, 510);


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
	else if (key == OF_KEY_DOWN && (select == MOUETTE_MOINS || select == MOUETTE_PLUS)){
		select = CONFIRMER;
	}

	if (compteurPoints > 0){
		if (select == CORDE_PLUS && key == ' '){
			compteurCorde++;
			compteurPoints--;
		}

		else if (select == BOULET_PLUS && key == ' '){
			compteurBoulet++;
			compteurPoints--;

		}

		else if (select == MOUETTE_PLUS && key == ' '){
			compteurMouette++;
			compteurPoints--;

		}

	}


	if (compteurPoints < 10){
		if (select == CORDE_MOINS && key == ' '){
			compteurCorde--;
			compteurPoints++;
		}
		else if (select == BOULET_MOINS && key == ' '){
			compteurBoulet--;
			compteurPoints++;

		}
		else if (select == MOUETTE_MOINS && key == ' '){
			compteurMouette--;
			compteurPoints++;

		}
	}

	if (select == CONFIRMER && key == ' '){
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
}

//--------------------------------------------------------------
void Menu_ameliorations::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void Menu_ameliorations::resized(int w, int h){
}
