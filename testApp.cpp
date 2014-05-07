#include "testApp.h"
#include <stdio.h>
#include <time.h>
#include "Util\functions.h"

//Ajouté par claire


//--------------------------------------------------------------
void testApp::setup() {
	ofSetVerticalSync(true);
	//ofBackgroundHex(0xfdefc2);
	char cwd[1024] = "";
	strcat(cwd, getAbsolutePath("background.gif")); 
	background.loadImage(cwd);
	
	
	
	ofSetLogLevel(OF_LOG_NOTICE);
	
	box2d.init();
	box2d.setGravity(0, 10);		//modifier x pour le vent
	box2d.createBounds();
	box2d.setFPS(60.0);
	box2d.setIterations(8,3);
	box2d.registerGrabbing();
	box2d.ground;

	

	
}

//--------------------------------------------------------------
void testApp::update() {
	box2d.update();
	//Disparition
}


//--------------------------------------------------------------
void testApp::draw() {
	ofSetColor(255, 255, 255);	//Image claire
	background.draw(0, 0, 1280, 720);
	/* Dessin d'un bloc
	*/
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



	string info = "";
	info += "Press [c] for circles\n";
	info += "Press [b] for blocks\n";
	info += "Total Bodies: " + ofToString(box2d.getBodyCount()) + "\n";
	info += "Total Joints: " + ofToString(box2d.getJointCount()) + "\n\n";
	info += "FPS: " + ofToString(ofGetFrameRate(), 1) + "\n";
	ofSetHexColor(0x444342);
	ofDrawBitmapString(info, 30, 30);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {

	//Si le grain sort du rectangle du chateau, disparition au bout d'un timer




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
		circles.back().get()->addForce(ofVec2f(0, -10), 0.1f); // Force qui contrecare la gravité
	}



	if (key == 't') ofToggleFullscreen();
}
//--------------------------------------------------------------
void testApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ) {
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button) {
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void testApp::resized(int w, int h){
}

