#include "Gestion_Jeu\Header\EcranJeu.h"
#include "Module_Chateau\Header\Castle.h"

#define EMPLACEMENT_CHATEAU 4
EcranJeu::EcranJeu() : PageJeu()
{
	fenetre = new Fenetre();
}


EcranJeu::~EcranJeu()
{
	delete(fenetre);
}

//--------------------------------------------------------------
void EcranJeu::update() {
	if (init){
		//creer la classe joueur + dedans score a 0
		//Initialiser liste chateau + en créer aléatoirement
		int rand;
		rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
		for (int i = 0; i < 2; i++){
			while (tabCastle[rand] != NULL){
				rand = ofRandom(0, EMPLACEMENT_CHATEAU - 1);
			}
			
			tabCastle[rand] = ofPtr<Castle>(new Castle(rand * 320, 720));
		}
		//Debut temps qui passe


		init = false;
	}

	if (keyIsDown[UP] && keyIsDown[LEFT]) {
		player->diagmoveup(-10, 0);
	}
	if (keyIsDown[UP] && keyIsDown[RIGHT]) {
		player->diagmoveup(+10, 0);
	}
	if (keyIsDown[DOWN] && keyIsDown[LEFT]) {
		player->diagmovedown(-10, 0);
	}
	if (keyIsDown[DOWN] && keyIsDown[RIGHT]) {
		player->diagmovedown(+10, 0);
	}

	GestionnairePage::box2d.update();
	//Utiliser la fonction de disparition ici
}


//--------------------------------------------------------------
void EcranJeu::draw() {
	string info = "";

	ofSetColor(255, 255, 255);	//Image claire
	this->fenetre->aff_fenetre(BACKGROUND, 1280, 720);
	//Dessin d'un bloc

	for (int i = 0; i < EMPLACEMENT_CHATEAU - 1; i++){
		if (tabCastle[i] != NULL)
			tabCastle[i]->draw();
	}

	if (mouette != NULL)
		mouette->draw();

	if (player != NULL) {
		player->draw();
	}


	// draw the ground
	GestionnairePage::box2d.drawGround();


	info += "Press [c] for circles\n";
	info += "Press [b] for blocks\n";
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
		player->move(0, 10);
		break;
	case OF_KEY_UP:
		player->move(0, -10);
		break;
	case OF_KEY_LEFT:
		player->move(-10, 0);
		break;
	case OF_KEY_RIGHT:
		player->move(+10, 0);
		break;
	case 'm':
		mouette = ofPtr<Mouette>(new Mouette(GestionnairePage::box2d));
		break;
	case 'k':
		player = ofPtr<Joueur>(new Joueur(GestionnairePage::box2d));
		
		/*
		mouette = ofPtr<Mouette>(new Mouette(box2d));
		vecBegin = new b2Vec2(mouette->getPositionX() + mouette->radius, mouette->getPositionY());
		corde = ofPtr<Rope>(new Rope(vecBegin, 30, &box2d));
		corde->joinBegin(mouette->getBody()->body);
		break;
		case '+' :
		for (int i = 0; i < rope.size(); i++){
		rope.at(i)->grow(1);
		}
		break;
		case '-' :
		for (int i = 0; i < rope.size(); i++){
		rope.at(i)->reduce(1);
		}

		case 'l' :
		if (!boulet && !rope.empty()){
		boulet = ofPtr<ofxBox2dCircle>(new ofxBox2dCircle());
		boulet->setPhysics(6, 0.73, 0.5);
		boulet->setup(box2d.getWorld(), rope.at(0)->getEndPosition().x, rope.at(0)->getEndPosition().y, 140);
		rope.at(0)->joinEnd(boulet->body);
		}
		*/
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
