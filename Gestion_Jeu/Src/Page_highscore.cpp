/*!
* \file Page_highscore.cpp
* \brief Classe permettant d'afficher le score à la fin d'une partie
* \author Thibault HUCKERT, Quentin GROS (édition)
*/

#include "Gestion_Jeu\Header\Page_highscore.h"



Page_highscore::Page_highscore(Jeu* jeu) : jeu(jeu)
{
	select = HIGH_SCORE;
	fenetre = new Fenetre();

	fontScore.loadFont(getAbsolutePath("BebasNeue.otf"), 70);

}


Page_highscore::~Page_highscore()
{
}

//--------------------------------------------------------------
void Page_highscore::update() {
	//GestionnairePage::box2d.update();
}


//--------------------------------------------------------------
void Page_highscore::draw() {
	ofSetColor(255, 255, 255);	//Image claire
	this->fenetre->aff_fenetre((IMG)select);

	string infoScore = "SCORE : ";
	infoScore.append(to_string(jeu->getScore()));


	fontScore.drawString(infoScore, (1280 / 2) - 200, 510);

}

//--------------------------------------------------------------
void Page_highscore::keyPressed(int key) {
	if (key == ' '){
		GestionnairePage::DepilerPage();
	}
}

//--------------------------------------------------------------
void Page_highscore::keyReleased(int key) {
}

//--------------------------------------------------------------
void Page_highscore::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void Page_highscore::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void Page_highscore::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void Page_highscore::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void Page_highscore::resized(int w, int h){
}
