#include "testApp.h"
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
	
	for(int i=0; i<boxes.size(); i++) {
		ofFill();
		ofSetHexColor(0xBF2545);
		boxes[i].get()->draw();
	}

	// Ajouté par Claire -----------------------------------------
	for (int i = 0; i < grains.size(); i++) {
		ofFill();
		ofSetHexColor(0xBF2545);
		grains[i].get()->draw();
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
	if (key == 'g'){
		//Grains(float density, float size, ofVec2f position)
		/* essai, ne pas effacer :)
		ofVec2f v1;
		v1.set(mouseX, mouseY);
		Grains g(30.0, 1.0, v1); 
		*/
		float r = ofRandom(4, 20);
		for (int i = 0; i < 5; i++) {
			grains.push_back(ofPtr<Grains>(new Grains));
			grains.back().get()->setPhysics(30.0, 0.73, 0.5);
			grains.back().get()->setup(box2d.getWorld(), mouseX+i, mouseY+i, r);
		}
	}

	if(key == 'c') {
		float r = ofRandom(4, 20);
		circles.push_back(ofPtr<ofxBox2dCircle>(new ofxBox2dCircle));
		circles.back().get()->setPhysics(30.0, 0.73, 0.5);
		circles.back().get()->setup(box2d.getWorld(), mouseX, mouseY, r);
		
	}

	if (key == 'b') {		//Tests pour avoir la taille d'un grain et faire des blocs avec une boucle, resultat : 
								//Il faut faire des blocs avec ofxBox2dRect avec une texture de grains pour paraitre, et
								//quand il y a contact le faire devenir un amat de grain, mais sinon tant au niveau des fps et
								//de la cohésion des blocs ça ne marche pas
		for (int longueur = 0; longueur < 20; longueur++){
			for (int largeur = 0; largeur < 10; largeur++){
				boxes.push_back(ofPtr<ofxBox2dRect>(new ofxBox2dRect));
				boxes.back().get()->setPhysics(1.0, 0, 10000000000000000000);
				boxes.back().get()->setup(box2d.getWorld(), mouseX + longueur*2, mouseY + largeur*2, 2, 2);
			}
		}
	}
	
	if(key == 't') ofToggleFullscreen();
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

