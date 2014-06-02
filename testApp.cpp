/*!
* \file testApp.h
* \brief Gestion de l'application
* \author Quentin GROS, Claire REMY (relecture)
*/

#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup() {
	ofSetEscapeQuitsApp(false);
	//On empile une page de menu principale dans la pile de page
	Menu_Principale *menu_principale = new Menu_Principale();
	GestionnairePage::EmpilerPage(menu_principale);

	//Initilisation de la fenetre et de l'affichage
	fenetre = new Fenetre();
	affichage = Affichage::Instance();

	//Initialisation du monde box2d
	ofSetVerticalSync(true);
	ofSetLogLevel(OF_LOG_NOTICE);
	GestionnairePage::box2d.init();
	GestionnairePage::box2d.setGravity(0, 10);		
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
}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {
	GestionnairePage::PageCourante()->keyPressed(key);
}

//--------------------------------------------------------------
void testApp::keyReleased(int key) {
	GestionnairePage::PageCourante()->keyReleased(key);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ) {
	GestionnairePage::PageCourante()->mouseMoved(x, y);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button) {
	GestionnairePage::PageCourante()->mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button) {
	GestionnairePage::PageCourante()->mousePressed(x, y, button);
}
//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button) {
	GestionnairePage::PageCourante()->mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void testApp::resized(int w, int h){
	GestionnairePage::PageCourante()->resized(w, h);
}

