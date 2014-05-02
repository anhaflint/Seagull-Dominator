#include "testApp.h"
#include <stdio.h>
#include <time.h>

//--------------------------------------------------------------
void testApp::setup() {
	ofSetVerticalSync(false);
	ofBackgroundHex(0xfdefc2);
	ofSetLogLevel(OF_LOG_NOTICE);
	
	box2d.init();
	box2d.setGravity(0, 10);
	box2d.createBounds();
	box2d.setFPS(30.0);
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
	
	/* Dessin d'un bloc
	 */
	if (castle != NULL)
		castle->draw();

	if (bloc != NULL)
		bloc->draw();

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
	info += "Total Bodies: "+ofToString(box2d.getBodyCount())+"\n";
	info += "Total Joints: "+ofToString(box2d.getJointCount())+"\n\n";
	info += "FPS: "+ofToString(ofGetFrameRate(), 1)+"\n";
	ofSetHexColor(0x444342);
	ofDrawBitmapString(info, 30, 30);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key) {

	// Tests Claire
	if (key == 'b') {
		bloc = ofPtr<Bloc>(new Bloc(20, 10, box2d, mouseX, mouseY));
		printf("la longueur est : %d", bloc->getLength());
		printf("la hauteur est  : %d", bloc->getHeight());
	}
		
	if (key == 'a') {
		castle = ofPtr<Castle>(new Castle(box2d, mouseX, mouseY));
		printf("le nombre de grains est : %d", castle->getNbGrains());
	}
		
	if (key == 'c') {
		circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
		circles.back().get()->setPhysics(2, 0.73, 0.5);
		circles.back().get()->setup(box2d.getWorld(), mouseX, mouseY, 40);
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

