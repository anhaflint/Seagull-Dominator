#include "testApp.h"

//Idée Claire : Faire juste un new game dans le main et le game gère le jeu avec des new saisons, new années...
//Faire une boucle simple qui appel toujours les mêmes fonctions, celles-ci avec pointeurs des fonctions changent ce qu'elles font en fonction de l'endroit du programme
//--------------------------------------------------------------
void testApp::setup() {

//--------------------------------------------------------------------------------------
//On empile une page de menu principale dans la pile de page
//--------------------------------------------------------------------------------------

	Menu_Principale *menu_principale = new Menu_Principale();
	GestionnairePage::EmpilerPage(menu_principale);

//--------------------------------------------------------------------------------------
//Initilisation de la fenetre et de l'affichage
//--------------------------------------------------------------------------------------	

	fenetre = new Fenetre();
	affichage = Affichage::Instance();

//--------------------------------------------------------------------------------------
//Initialisation du monde box2d
//--------------------------------------------------------------------------------------

	ofSetVerticalSync(true);
	ofSetLogLevel(OF_LOG_NOTICE);
	GestionnairePage::box2d.init();
	GestionnairePage::box2d.setGravity(0, 10);		//modifier x pour le vent
	GestionnairePage::box2d.createBounds(-500,0,2500, 720);
	GestionnairePage::box2d.setFPS(60.0);
	GestionnairePage::box2d.setIterations(8, 3);
	GestionnairePage::box2d.registerGrabbing();
	GestionnairePage::box2d.ground;

}

//--------------------------------------------------------------
void testApp::update() {
	GestionnairePage::PageCourante()->update();
}


//--------------------------------------------------------------
void testApp::draw() {
	GestionnairePage::PageCourante()->draw();
	
//Anciennement

	/*
	string info = "";

	switch (fenetre_selection){

	case DEMARRAGE:
		ofSetColor(255, 255, 255);	//Image claire
		this->fenetre->aff_fenetre((IMG)todraw, 1280, 720);

		break;

	case JEU:
		ofSetColor(255, 255, 255);	//Image claire
		this->fenetre->aff_fenetre(BACKGROUND, 1280, 720);
		//Dessin d'un bloc
		
		if (castle1 != NULL)
			castle1->draw();

		if (castle2 != NULL)
			castle2->draw();

		//	if (bloc != NULL)
		//		bloc->draw(sable);

		for (int i = 0; i<circles.size(); i++) {
			ofFill();
			ofSetHexColor(0xf6c738);
			circles[i]->draw();
		}
		// draw the ground
		box2d.drawGround();


		
		info += "Press [c] for circles\n";
		info += "Press [b] for blocks\n";
		info += "Total Bodies: " + ofToString(box2d.getBodyCount()) + "\n";
		info += "Total Joints: " + ofToString(box2d.getJointCount()) + "\n\n";
		info += "FPS: " + ofToString(ofGetFrameRate(), 1) + "\n";
		ofSetHexColor(0x444342);
		ofDrawBitmapString(info, 30, 30);

		break;

	default: printf("Problème avec le choix de la fenètre\n");
		exit();
		break;
	}
	*/

}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {
	GestionnairePage::PageCourante()->keyPressed(key);

//Anciennement
	/*
	switch (fenetre_selection)
	{
	case DEMARRAGE :

		if (key == OF_KEY_DOWN) {
			todraw = 1;	//Jouer surligné
		}

		if (key == ' ' && todraw == 1){
			fenetre_selection = JEU;
		}
		

		break;

	case JEU :
		// Tests Claire
		if (key == 'b') {
			bloc = ofPtr<Bloc>(new Bloc(20, 10, box2d, mouseX, mouseY));
			printf("la longueur est : %d", bloc->getLength());
			printf("la hauteur est  : %d", bloc->getHeight());
		}

		if (key == 'a') {
			castle1 = ofPtr<Castle>(new Castle(box2d, mouseX, 720));
			printf("le nombre de grains est : %d", castle1->getNbGrains());
		}

		if (key == 'z') {
			castle2 = ofPtr<Castle>(new Castle(box2d, mouseX, 720));
			printf("le nombre de grains est : %d", castle2->getNbGrains());
		}

		if (key == 'c') {
			circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
			circles.back().get()->setPhysics(6, 0.73, 0.5);
			circles.back().get()->setup(box2d.getWorld(), mouseX, mouseY, 40);
		}

		if (key == OF_KEY_UP){
			box2d.setGravity(0, -10);
		}

		if (key == OF_KEY_DOWN){
			box2d.setGravity(0, 10);
		}

		if (key == OF_KEY_LEFT){
			box2d.setGravity(-10, 0);
		}

		if (key == OF_KEY_RIGHT){
			box2d.setGravity(10, 0);
		}

		if (key == 't') ofToggleFullscreen();
		break;

	default: printf("Problème avec le choix de la fenètre\n");
		exit();
		break;
	}
	//Si le grain sort du rectangle du chateau, disparition au bout d'un timer

	*/	

}

//--------------------------------------------------------------
void testApp::keyReleased(int key) {
	GestionnairePage::PageCourante()->keyReleased(key);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ) {
	GestionnairePage::PageCourante()->mouseMoved(x, y);

//Anciennement
	/*
	switch (fenetre_selection)
	{
	case DEMARRAGE:
		if (x<800 && x>500 && y<530 && y>460)
			todraw = 1;	//Jouer surligné
		else
			todraw = 0;	//Neutre

		break;

	case JEU:
		break;
	}
	*/
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button) {
	GestionnairePage::PageCourante()->mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button) {
	GestionnairePage::PageCourante()->mousePressed(x, y, button);
	
//Anciennement
	/*
	switch (fenetre_selection)
	{
	case DEMARRAGE:
		if (x<800 && x>500 && y<530 && y>460 && button == OF_MOUSE_BUTTON_LEFT)
			fenetre_selection = JEU;
		break;

	case JEU:
		break;
	}
	*/
}
//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button) {
	GestionnairePage::PageCourante()->mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void testApp::resized(int w, int h){
	GestionnairePage::PageCourante()->resized(w, h);
}

