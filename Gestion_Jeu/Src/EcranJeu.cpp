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
		for (int i = 0; i < EMPLACEMENT_CHATEAU; i++){
			if (jeu->tabCastle[i] != NULL){
				printf("destruction du chateau %d \n", i);
				jeu->tabCastle[i]->destroy();
			}
		}
		if (player != NULL){
			printf("destruction player ?");
			player->destroy();
			printf("destruction done\n");
		}
	}
	
	jeu->maybeNewChateau();
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
	/*
	b2Vec2 lower;
	b2Vec2 upper;
	ScoreCounter queryCallback;
	b2AABB aabb;
	for (int i = 0; i < EMPLACEMENT_CHATEAU; i++){
		lower.x = 0 + i * 160;
		lower.y = 720;
		upper.x = 100 + i * 160;
		upper.y = 620;
		aabb.lowerBound = lower;
		aabb.upperBound = upper;
		GestionnairePage::box2d.getWorld()->QueryAABB(&queryCallback, aabb);
	}
	*/
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


	info += "Fleches directionelles pour deplacer la mouette\n";
	info += "Appuyer sur [a] pour acceder au menu des ameliorations de la mouette\n";
	info += "Total Bodies: " + ofToString(GestionnairePage::box2d.getBodyCount()) + "\n";
	info += "Total Joints: " + ofToString(GestionnairePage::box2d.getJointCount()) + "\n\n";
	info += "FPS: " + ofToString(ofGetFrameRate(), 1) + "\n";
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
	case 'a':
		if (player != NULL){
			 GestionnairePage::EmpilerPage(new Menu_ameliorations(player.get()));
		 }
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
