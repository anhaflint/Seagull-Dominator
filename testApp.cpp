#include "testApp.h"
#include <stdio.h>
#include <time.h>
#include "Module_Chateau\Header\Grains.h"
//--------------------------------------------------------------
void testApp::setup() {
	ofSetVerticalSync(true);
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
	
	for(int i=0; i<circles.size(); i++) {
		ofFill();
		ofSetHexColor(0xf6c738);
		circles[i].get()->draw();
	}
	
	/*
	for(int i=0; i<boxes.size(); i++) {
		ofFill();
		ofSetHexColor(0xBF2545);
		boxes[i].get()->draw();

		printf("\n %d", !boxes[i].get()->isBody());
	}
	*/
	// Ajouté par Claire -----------------------------------------
	
	for (int i = 0; i < grains.size(); i++) {
		ofFill();
		ofSetHexColor(0xBF2545);
		grains[i].get()->draw();

	}
	
	
	/* exemple de dessin d'un rectangle avec OF
	for (int longueur = 0; longueur < 20; longueur++){
		for (int largeur = 0; largeur < 70; largeur++){
			ofFill();
			ofSetColor(0, 2+longueur*20, 2+largeur*20);
			ofRect(400 + longueur * 2, 720 - largeur * 2, 2, 2);
		}
	}
	*/
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
	/* Tests Grains
	*/
	if (key == 'l'){
		float r = 10.0;
		for (int i = 0; i < 5; i++) {
			grains.push_back(ofPtr<Grains>(new Grains));
			grains.back().get()->setPhysics(30.0, 0.73, 0.5);
			grains.back().get()->ofxBox2dRect::setup(box2d.getWorld(), mouseX + i, mouseY + i, r, r);
		}
	}
	
	if (key == 'j') {
		for (int hauteur = 0; hauteur < 5; hauteur++){
			for (int longueur = 0; longueur < 10; longueur++){
				grains.push_back(ofPtr<Grains>(new Grains));
				grains.back().get()->setPhysics(10.0, 0, 1);
				grains.back().get()->setup(box2d.getWorld(), mouseX + longueur * 10, mouseY - hauteur * 10, 10, 10);
			}
		}
	}
	
	if (key == 'g') {
		for (int hauteur = 0; hauteur < 10; hauteur++){
			for (int longueur = 0; longueur < 30; longueur++){
				grains.push_back(ofPtr<Grains>(new Grains));
				grains.back().get()->setPhysics(10.0, 0, 1);
				grains.back().get()->setup(box2d.getWorld(), mouseX + longueur * 10, mouseY - hauteur * 10, 10, 10);
			}
		}
	}
	

	if (key == 'h') {
		for (int hauteur = 0; hauteur < 7; hauteur++){
			for (int longueur = 0; longueur < 15; longueur++){
				grains.push_back(ofPtr<Grains>(new Grains));
				grains.back().get()->setPhysics(10.0, 0, 1);
				grains.back().get()->setup(box2d.getWorld(), mouseX + longueur * 10, mouseY - hauteur * 10, 10, 10);
			}
		}
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

