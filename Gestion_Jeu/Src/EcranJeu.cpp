#include "Gestion_Jeu\Header\EcranJeu.h"

EcranJeu::EcranJeu() : PageJeu()
{
//	camera = ofPtr<ofEasyCam>(new ofEasyCam());
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
			if (jeu->tabCastle[i]!=NULL)
				jeu->tabCastle[i]->destroy();
		}
		if (player != NULL)
			player->destroy();
	}
	/*
	if (player != NULL)
	{

		//player->getMouette()->getBody()->body->
	}
	*/
	jeu->maybeNewChateau();
	if (player != NULL){
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
	}
	GestionnairePage::box2d.update();
	//Utiliser la fonction de disparition ici
}


//--------------------------------------------------------------
void EcranJeu::draw() {

	string info = "";

	ofSetColor(255, 255, 255);	//Image claire

	this->fenetre->aff_fenetre(BACKGROUND, 1280, 720);

	jeu->drawChateau();

	player->draw();

	GestionnairePage::box2d.drawGround();

	info += "Appuyer sur [k] pour creer une mouette avec une corde et un boulet\n";
	info += "Fleches directionelles pour deplacer la mouette\n";
	info += "Appuyer sur [m] pour creer une mouette simple\n";
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
		/*
	case 'm':
		mouette = ofPtr<Mouette>(new Mouette(GestionnairePage::box2d));
		break;
		*/
		/*
	case 'k':
		player = ofPtr<Joueur>(new Joueur(GestionnairePage::box2d));
		break;
		*/
	case 'a':
		if (player != NULL){
			 GestionnairePage::EmpilerPage(new Menu_ameliorations(player.get()));
		 }
		 break;

	

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
